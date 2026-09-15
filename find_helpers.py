import sys
import struct

xex_path = "/home/hoyuse/NarutoPortPc/Naruto_The_Broken_Bond/default.xex"

with open(xex_path, "rb") as f:
    data = f.read()

print(f"[*] Tamaño total del binario: {len(data)} bytes ({hex(len(data))})")

# 1. Analizar cabecera XEX2
if data[:4] == b"XEX2":
    mod_flags = struct.unpack(">I", data[4:8])[0]
    header_size = struct.unpack(">I", data[8:12])[0]
    print(f"[*] Cabecera XEX2 detectada:")
    print(f"    - Tamaño de cabecera: {header_size} bytes ({hex(header_size)})")

# 2. Calibración de Dirección Virtual (VA) usando la tabla de saltos de switch_tables.toml
# Buscamos la secuencia de punteros de la primera tabla: 0x8212C5E8, 0x8212C604, 0x8212C620
jt_pattern = bytes.fromhex("82 12 c5 e8 82 12 c6 04 82 12 c6 20")
jt_offset = data.find(jt_pattern)

va_base_offset = 0x82000000
if jt_offset != -1:
    print(f"[+] Tabla de saltos de referencia hallada en offset de archivo: {hex(jt_offset)}")
    # La primera etiqueta apunta a 0x8212C5E8
    # Comprobamos si el mapeo es directo con base 0x82000000 o ajustado a header_size
    diff_direct = 0x8212C590 - (0x82000000 + jt_offset)
    print(f"    - Desplazamiento de mapeo estimado: {hex(diff_direct)}")
else:
    print("[-] No se encontró la tabla de saltos con coincidencia exacta de 12 bytes.")

# 3. Firmas de bytes oficiales de XenonRecomp
patterns = {
    "restgprlr_14_address": bytes.fromhex("e9 c1 ff 68"),
    "savegprlr_14_address": bytes.fromhex("f9 c1 ff 68"),
    "restfpr_14_address":   bytes.fromhex("c9 cc ff 70"),
    "savefpr_14_address":   bytes.fromhex("d9 cc ff 70"),
    "restvmx_14_address":   bytes.fromhex("39 60 fe e0 7d cb 60 ce"),
    "savevmx_14_address":   bytes.fromhex("39 60 fe e0 7d cb 61 ce"),
    "restvmx_64_address":   bytes.fromhex("39 60 fc 00 10 0b 60 cb"),
    "savevmx_64_address":   bytes.fromhex("39 60 fc 00 10 0b 61 cb"),
}

print("\n[*] Escaneando funciones auxiliares...")
found_vas = {}

for name, pat in patterns.items():
    offsets = []
    start = 0
    while True:
        idx = data.find(pat, start)
        if idx == -1:
            break
        offsets.append(idx)
        start = idx + 4

    if offsets:
        # En executables desprotegidos estándar, la dirección virtual base mapea desde 0x82000000
        # considerando el desplazamiento del código tras la cabecera XEX (típicamente header_size = 0x4000)
        chosen_offset = offsets[0]
        # Estimación VA estándar (ajustable con el delta de la jump table si aplica):
        va_est = 0x82000000 + (chosen_offset - header_size) if header_size < chosen_offset else 0x82000000 + chosen_offset
        found_vas[name] = (chosen_offset, va_est)
        print(f"[+] {name}:")
        print(f"    - Offsets archivo: {[hex(o) for o in offsets[:3]]}")
        print(f"    - VA calculada: {hex(va_est)}")
    else:
        print(f"[-] {name}: No encontrada en el binario.")

print("\n" + "="*50)
print("Bloque preliminar para config.toml:")
print("="*50)
for k, v in found_vas.items():
    print(f"{k} = {hex(v[1])}")

