#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B6DEC8"))) PPC_WEAK_FUNC(sub_82B6DEC8);
PPC_FUNC_IMPL(__imp__sub_82B6DEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,20416
	ctx.r3.s64 = ctx.r11.s64 + 20416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6DED4"))) PPC_WEAK_FUNC(sub_82B6DED4);
PPC_FUNC_IMPL(__imp__sub_82B6DED4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6DEE0"))) PPC_WEAK_FUNC(sub_82B6DEE0);
PPC_FUNC_IMPL(__imp__sub_82B6DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,15686
	ctx.r11.u64 = ctx.r11.u64 | 15686;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e3c4
	if (ctx.cr6.gt) {
		sub_82B6E3C4(ctx, base);
		return;
	}
	// beq cr6,0x82b6e3b8
	if (ctx.cr6.eq) {
		sub_82B6E3B8(ctx, base);
		return;
	}
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,15174
	ctx.r11.u64 = ctx.r11.u64 | 15174;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e310
	if (ctx.cr6.gt) {
		sub_82B6E310(ctx, base);
		return;
	}
	// beq cr6,0x82b6e304
	if (ctx.cr6.eq) {
		sub_82B6E304(ctx, base);
		return;
	}
	// addis r11,r3,-32768
	ctx.r11.s64 = ctx.r3.s64 + -2147483648;
	// addi r11,r11,-14953
	ctx.r11.s64 = ctx.r11.s64 + -14953;
	// cmplwi cr6,r11,220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 220, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-8400
	ctx.r12.s64 = ctx.r12.s64 + -8400;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6E2E0
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B6E2EC
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B6E2F8
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B6E2D4
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B73A88
		return;
	case 111:
		// ERROR: 0x82B73A88
		return;
	case 112:
		// ERROR: 0x82B73A88
		return;
	case 113:
		// ERROR: 0x82B73A88
		return;
	case 114:
		// ERROR: 0x82B73A88
		return;
	case 115:
		// ERROR: 0x82B73A88
		return;
	case 116:
		// ERROR: 0x82B73A88
		return;
	case 117:
		// ERROR: 0x82B73A88
		return;
	case 118:
		// ERROR: 0x82B73A88
		return;
	case 119:
		// ERROR: 0x82B73A88
		return;
	case 120:
		// ERROR: 0x82B73A88
		return;
	case 121:
		// ERROR: 0x82B73A88
		return;
	case 122:
		// ERROR: 0x82B73A88
		return;
	case 123:
		// ERROR: 0x82B73A88
		return;
	case 124:
		// ERROR: 0x82B73A88
		return;
	case 125:
		// ERROR: 0x82B73A88
		return;
	case 126:
		// ERROR: 0x82B73A88
		return;
	case 127:
		// ERROR: 0x82B73A88
		return;
	case 128:
		// ERROR: 0x82B73A88
		return;
	case 129:
		// ERROR: 0x82B73A88
		return;
	case 130:
		// ERROR: 0x82B73A88
		return;
	case 131:
		// ERROR: 0x82B73A88
		return;
	case 132:
		// ERROR: 0x82B73A88
		return;
	case 133:
		// ERROR: 0x82B73A88
		return;
	case 134:
		// ERROR: 0x82B73A88
		return;
	case 135:
		// ERROR: 0x82B73A88
		return;
	case 136:
		// ERROR: 0x82B73A88
		return;
	case 137:
		// ERROR: 0x82B73A88
		return;
	case 138:
		// ERROR: 0x82B73A88
		return;
	case 139:
		// ERROR: 0x82B73A88
		return;
	case 140:
		// ERROR: 0x82B73A88
		return;
	case 141:
		// ERROR: 0x82B73A88
		return;
	case 142:
		// ERROR: 0x82B73A88
		return;
	case 143:
		// ERROR: 0x82B73A88
		return;
	case 144:
		// ERROR: 0x82B73A88
		return;
	case 145:
		// ERROR: 0x82B73A88
		return;
	case 146:
		// ERROR: 0x82B73A88
		return;
	case 147:
		// ERROR: 0x82B73A88
		return;
	case 148:
		// ERROR: 0x82B73A88
		return;
	case 149:
		// ERROR: 0x82B73A88
		return;
	case 150:
		// ERROR: 0x82B73A88
		return;
	case 151:
		// ERROR: 0x82B73A88
		return;
	case 152:
		// ERROR: 0x82B73A88
		return;
	case 153:
		// ERROR: 0x82B73A88
		return;
	case 154:
		// ERROR: 0x82B73A88
		return;
	case 155:
		// ERROR: 0x82B73A88
		return;
	case 156:
		// ERROR: 0x82B73A88
		return;
	case 157:
		// ERROR: 0x82B73A88
		return;
	case 158:
		// ERROR: 0x82B73A88
		return;
	case 159:
		// ERROR: 0x82B73A88
		return;
	case 160:
		// ERROR: 0x82B73A88
		return;
	case 161:
		// ERROR: 0x82B73A88
		return;
	case 162:
		// ERROR: 0x82B73A88
		return;
	case 163:
		// ERROR: 0x82B73A88
		return;
	case 164:
		// ERROR: 0x82B73A88
		return;
	case 165:
		// ERROR: 0x82B73A88
		return;
	case 166:
		// ERROR: 0x82B73A88
		return;
	case 167:
		// ERROR: 0x82B73A88
		return;
	case 168:
		// ERROR: 0x82B73A88
		return;
	case 169:
		// ERROR: 0x82B73A88
		return;
	case 170:
		// ERROR: 0x82B73A88
		return;
	case 171:
		// ERROR: 0x82B73A88
		return;
	case 172:
		// ERROR: 0x82B73A88
		return;
	case 173:
		// ERROR: 0x82B73A88
		return;
	case 174:
		// ERROR: 0x82B73A88
		return;
	case 175:
		// ERROR: 0x82B73A88
		return;
	case 176:
		// ERROR: 0x82B73A88
		return;
	case 177:
		// ERROR: 0x82B73A88
		return;
	case 178:
		// ERROR: 0x82B73A88
		return;
	case 179:
		// ERROR: 0x82B73A88
		return;
	case 180:
		// ERROR: 0x82B73A88
		return;
	case 181:
		// ERROR: 0x82B73A88
		return;
	case 182:
		// ERROR: 0x82B73A88
		return;
	case 183:
		// ERROR: 0x82B73A88
		return;
	case 184:
		// ERROR: 0x82B73A88
		return;
	case 185:
		// ERROR: 0x82B73A88
		return;
	case 186:
		// ERROR: 0x82B73A88
		return;
	case 187:
		// ERROR: 0x82B73A88
		return;
	case 188:
		// ERROR: 0x82B73A88
		return;
	case 189:
		// ERROR: 0x82B73A88
		return;
	case 190:
		// ERROR: 0x82B73A88
		return;
	case 191:
		// ERROR: 0x82B73A88
		return;
	case 192:
		// ERROR: 0x82B73A88
		return;
	case 193:
		// ERROR: 0x82B73A88
		return;
	case 194:
		// ERROR: 0x82B73A88
		return;
	case 195:
		// ERROR: 0x82B73A88
		return;
	case 196:
		// ERROR: 0x82B73A88
		return;
	case 197:
		// ERROR: 0x82B73A88
		return;
	case 198:
		// ERROR: 0x82B73A88
		return;
	case 199:
		// ERROR: 0x82B73A88
		return;
	case 200:
		// ERROR: 0x82B73A88
		return;
	case 201:
		// ERROR: 0x82B73A88
		return;
	case 202:
		// ERROR: 0x82B73A88
		return;
	case 203:
		// ERROR: 0x82B73A88
		return;
	case 204:
		// ERROR: 0x82B73A88
		return;
	case 205:
		// ERROR: 0x82B73A88
		return;
	case 206:
		// ERROR: 0x82B73A88
		return;
	case 207:
		// ERROR: 0x82B73A88
		return;
	case 208:
		// ERROR: 0x82B73A88
		return;
	case 209:
		// ERROR: 0x82B73A88
		return;
	case 210:
		// ERROR: 0x82B73A88
		return;
	case 211:
		// ERROR: 0x82B73A88
		return;
	case 212:
		// ERROR: 0x82B73A88
		return;
	case 213:
		// ERROR: 0x82B73A88
		return;
	case 214:
		// ERROR: 0x82B73A88
		return;
	case 215:
		// ERROR: 0x82B73A88
		return;
	case 216:
		// ERROR: 0x82B73A88
		return;
	case 217:
		// ERROR: 0x82B6E2A4
		return;
	case 218:
		// ERROR: 0x82B6E2B0
		return;
	case 219:
		// ERROR: 0x82B6E2BC
		return;
	case 220:
		// ERROR: 0x82B6E2C8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6DF30"))) PPC_WEAK_FUNC(sub_82B6DF30);
PPC_FUNC_IMPL(__imp__sub_82B6DF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-7456(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7456);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-7444(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7444);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-7432(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7432);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-7468(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7468);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-7516(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7516);
	// lwz r21,-7504(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7504);
	// lwz r21,-7492(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7492);
	// lwz r21,-7480(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7480);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r3,r11,-12488
	ctx.r3.s64 = ctx.r11.s64 + -12488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E2B0"))) PPC_WEAK_FUNC(sub_82B6E2B0);
PPC_FUNC_IMPL(__imp__sub_82B6E2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E2BC"))) PPC_WEAK_FUNC(sub_82B6E2BC);
PPC_FUNC_IMPL(__imp__sub_82B6E2BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,3040
	ctx.r3.s64 = ctx.r11.s64 + 3040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E2C8"))) PPC_WEAK_FUNC(sub_82B6E2C8);
PPC_FUNC_IMPL(__imp__sub_82B6E2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,10240
	ctx.r3.s64 = ctx.r11.s64 + 10240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E2D4"))) PPC_WEAK_FUNC(sub_82B6E2D4);
PPC_FUNC_IMPL(__imp__sub_82B6E2D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,17656
	ctx.r3.s64 = ctx.r11.s64 + 17656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E2E0"))) PPC_WEAK_FUNC(sub_82B6E2E0);
PPC_FUNC_IMPL(__imp__sub_82B6E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,27312
	ctx.r3.s64 = ctx.r11.s64 + 27312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E2EC"))) PPC_WEAK_FUNC(sub_82B6E2EC);
PPC_FUNC_IMPL(__imp__sub_82B6E2EC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,17608
	ctx.r3.s64 = ctx.r11.s64 + 17608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E2F8"))) PPC_WEAK_FUNC(sub_82B6E2F8);
PPC_FUNC_IMPL(__imp__sub_82B6E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E304"))) PPC_WEAK_FUNC(sub_82B6E304);
PPC_FUNC_IMPL(__imp__sub_82B6E304) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,10120
	ctx.r3.s64 = ctx.r11.s64 + 10120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E310"))) PPC_WEAK_FUNC(sub_82B6E310);
PPC_FUNC_IMPL(__imp__sub_82B6E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,15463
	ctx.r11.u64 = ctx.r11.u64 | 15463;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e374
	if (ctx.cr6.gt) goto loc_82B6E374;
	// beq cr6,0x82b6e368
	if (ctx.cr6.eq) goto loc_82B6E368;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,15350
	ctx.r10.u64 = ctx.r11.u64 | 15350;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6e35c
	if (ctx.cr0.eq) goto loc_82B6E35C;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// beq cr6,0x82b6e350
	if (ctx.cr6.eq) goto loc_82B6E350;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,9624
	ctx.r3.s64 = ctx.r11.s64 + 9624;
	// blr 
	return;
loc_82B6E350:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-30168
	ctx.r3.s64 = ctx.r11.s64 + -30168;
	// blr 
	return;
loc_82B6E35C:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// blr 
	return;
loc_82B6E368:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,-3048
	ctx.r3.s64 = ctx.r11.s64 + -3048;
	// blr 
	return;
loc_82B6E374:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,15508
	ctx.r10.u64 = ctx.r11.u64 | 15508;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6e3ac
	if (ctx.cr0.eq) goto loc_82B6E3AC;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x82b6e3a0
	if (ctx.cr6.eq) goto loc_82B6E3A0;
	// cmplwi cr6,r11,177
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 177, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,1456
	ctx.r3.s64 = ctx.r11.s64 + 1456;
	// blr 
	return;
loc_82B6E3A0:
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,6112
	ctx.r3.s64 = ctx.r11.s64 + 6112;
	// blr 
	return;
loc_82B6E3AC:
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E3B8"))) PPC_WEAK_FUNC(sub_82B6E3B8);
PPC_FUNC_IMPL(__imp__sub_82B6E3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,31584
	ctx.r3.s64 = ctx.r11.s64 + 31584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E3C4"))) PPC_WEAK_FUNC(sub_82B6E3C4);
PPC_FUNC_IMPL(__imp__sub_82B6E3C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,17830
	ctx.r11.u64 = ctx.r11.u64 | 17830;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e56c
	if (ctx.cr6.gt) {
		sub_82B6E56C(ctx, base);
		return;
	}
	// beq cr6,0x82b6e560
	if (ctx.cr6.eq) {
		sub_82B6E560(ctx, base);
		return;
	}
	// addis r11,r3,-32768
	ctx.r11.s64 = ctx.r3.s64 + -2147483648;
	// addi r11,r11,-15687
	ctx.r11.s64 = ctx.r11.s64 + -15687;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-7168
	ctx.r12.s64 = ctx.r12.s64 + -7168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6E53C
		return;
	case 1:
		// ERROR: 0x82B6E548
		return;
	case 2:
		// ERROR: 0x82B6E554
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B6E500
		return;
	case 60:
		// ERROR: 0x82B6E50C
		return;
	case 61:
		// ERROR: 0x82B6E518
		return;
	case 62:
		// ERROR: 0x82B6E524
		return;
	case 63:
		// ERROR: 0x82B6E530
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6E400"))) PPC_WEAK_FUNC(sub_82B6E400);
PPC_FUNC_IMPL(__imp__sub_82B6E400) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-6852(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6852);
	// lwz r21,-6840(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6840);
	// lwz r21,-6828(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6828);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-6912(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6912);
	// lwz r21,-6900(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6900);
	// lwz r21,-6888(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6888);
	// lwz r21,-6876(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6876);
	// lwz r21,-6864(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6864);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,-29944
	ctx.r3.s64 = ctx.r11.s64 + -29944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E50C"))) PPC_WEAK_FUNC(sub_82B6E50C);
PPC_FUNC_IMPL(__imp__sub_82B6E50C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E518"))) PPC_WEAK_FUNC(sub_82B6E518);
PPC_FUNC_IMPL(__imp__sub_82B6E518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-26720
	ctx.r3.s64 = ctx.r11.s64 + -26720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E524"))) PPC_WEAK_FUNC(sub_82B6E524);
PPC_FUNC_IMPL(__imp__sub_82B6E524) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-21040
	ctx.r3.s64 = ctx.r11.s64 + -21040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E530"))) PPC_WEAK_FUNC(sub_82B6E530);
PPC_FUNC_IMPL(__imp__sub_82B6E530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E53C"))) PPC_WEAK_FUNC(sub_82B6E53C);
PPC_FUNC_IMPL(__imp__sub_82B6E53C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,1376
	ctx.r3.s64 = ctx.r11.s64 + 1376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E548"))) PPC_WEAK_FUNC(sub_82B6E548);
PPC_FUNC_IMPL(__imp__sub_82B6E548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E554"))) PPC_WEAK_FUNC(sub_82B6E554);
PPC_FUNC_IMPL(__imp__sub_82B6E554) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E560"))) PPC_WEAK_FUNC(sub_82B6E560);
PPC_FUNC_IMPL(__imp__sub_82B6E560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E56C"))) PPC_WEAK_FUNC(sub_82B6E56C);
PPC_FUNC_IMPL(__imp__sub_82B6E56C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,17834
	ctx.r11.u64 = ctx.r11.u64 | 17834;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e5d0
	if (ctx.cr6.gt) goto loc_82B6E5D0;
	// beq cr6,0x82b6e5c4
	if (ctx.cr6.eq) goto loc_82B6E5C4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,17831
	ctx.r10.u64 = ctx.r11.u64 | 17831;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6e5b8
	if (ctx.cr0.eq) goto loc_82B6E5B8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b6e5ac
	if (ctx.cr6.eq) goto loc_82B6E5AC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,13784
	ctx.r3.s64 = ctx.r11.s64 + 13784;
	// blr 
	return;
loc_82B6E5AC:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,27728
	ctx.r3.s64 = ctx.r11.s64 + 27728;
	// blr 
	return;
loc_82B6E5B8:
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// blr 
	return;
loc_82B6E5C4:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// blr 
	return;
loc_82B6E5D0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r10,r11,660
	ctx.r10.u64 = ctx.r11.u64 | 660;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6e608
	if (ctx.cr0.eq) goto loc_82B6E608;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b6e5fc
	if (ctx.cr6.eq) goto loc_82B6E5FC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,26816
	ctx.r3.s64 = ctx.r11.s64 + 26816;
	// blr 
	return;
loc_82B6E5FC:
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,12752
	ctx.r3.s64 = ctx.r11.s64 + 12752;
	// blr 
	return;
loc_82B6E608:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,16320
	ctx.r3.s64 = ctx.r11.s64 + 16320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E614"))) PPC_WEAK_FUNC(sub_82B6E614);
PPC_FUNC_IMPL(__imp__sub_82B6E614) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,16272
	ctx.r3.s64 = ctx.r11.s64 + 16272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E620"))) PPC_WEAK_FUNC(sub_82B6E620);
PPC_FUNC_IMPL(__imp__sub_82B6E620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,4948
	ctx.r11.u64 = ctx.r11.u64 | 4948;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6eb5c
	if (ctx.cr6.gt) {
		sub_82B6EB5C(ctx, base);
		return;
	}
	// beq cr6,0x82b6eb50
	if (ctx.cr6.eq) {
		sub_82B6EB50(ctx, base);
		return;
	}
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,2569
	ctx.r11.u64 = ctx.r11.u64 | 2569;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e864
	if (ctx.cr6.gt) {
		sub_82B6E864(ctx, base);
		return;
	}
	// beq cr6,0x82b6e858
	if (ctx.cr6.eq) {
		sub_82B6E858(ctx, base);
		return;
	}
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,1068
	ctx.r11.u64 = ctx.r11.u64 | 1068;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e7b0
	if (ctx.cr6.gt) {
		sub_82B6E7B0(ctx, base);
		return;
	}
	// beq cr6,0x82b6e7a4
	if (ctx.cr6.eq) {
		sub_82B6E7A4(ctx, base);
		return;
	}
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,798
	ctx.r11.u64 = ctx.r11.u64 | 798;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e760
	if (ctx.cr6.gt) {
		sub_82B6E760(ctx, base);
		return;
	}
	// beq cr6,0x82b6e754
	if (ctx.cr6.eq) {
		sub_82B6E754(ctx, base);
		return;
	}
	// addis r11,r3,31744
	ctx.r11.s64 = ctx.r3.s64 + 2080374784;
	// addi r11,r11,-679
	ctx.r11.s64 = ctx.r11.s64 + -679;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-6504
	ctx.r12.s64 = ctx.r12.s64 + -6504;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6E730
		return;
	case 1:
		// ERROR: 0x82B6E73C
		return;
	case 2:
		// ERROR: 0x82B6E748
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B6E724
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6E698"))) PPC_WEAK_FUNC(sub_82B6E698);
PPC_FUNC_IMPL(__imp__sub_82B6E698) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-6352(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6352);
	// lwz r21,-6340(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6340);
	// lwz r21,-6328(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6328);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-6364(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6364);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,22560
	ctx.r3.s64 = ctx.r11.s64 + 22560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E730"))) PPC_WEAK_FUNC(sub_82B6E730);
PPC_FUNC_IMPL(__imp__sub_82B6E730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-14296
	ctx.r3.s64 = ctx.r11.s64 + -14296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E73C"))) PPC_WEAK_FUNC(sub_82B6E73C);
PPC_FUNC_IMPL(__imp__sub_82B6E73C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,26920
	ctx.r3.s64 = ctx.r11.s64 + 26920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E748"))) PPC_WEAK_FUNC(sub_82B6E748);
PPC_FUNC_IMPL(__imp__sub_82B6E748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E754"))) PPC_WEAK_FUNC(sub_82B6E754);
PPC_FUNC_IMPL(__imp__sub_82B6E754) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,13200
	ctx.r3.s64 = ctx.r11.s64 + 13200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E760"))) PPC_WEAK_FUNC(sub_82B6E760);
PPC_FUNC_IMPL(__imp__sub_82B6E760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r10,r11,1049
	ctx.r10.u64 = ctx.r11.u64 | 1049;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6e798
	if (ctx.cr0.eq) goto loc_82B6E798;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b6e78c
	if (ctx.cr6.eq) goto loc_82B6E78C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,13032
	ctx.r3.s64 = ctx.r11.s64 + 13032;
	// blr 
	return;
loc_82B6E78C:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,22856
	ctx.r3.s64 = ctx.r11.s64 + 22856;
	// blr 
	return;
loc_82B6E798:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,13080
	ctx.r3.s64 = ctx.r11.s64 + 13080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E7A4"))) PPC_WEAK_FUNC(sub_82B6E7A4);
PPC_FUNC_IMPL(__imp__sub_82B6E7A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E7B0"))) PPC_WEAK_FUNC(sub_82B6E7B0);
PPC_FUNC_IMPL(__imp__sub_82B6E7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,1818
	ctx.r11.u64 = ctx.r11.u64 | 1818;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6e814
	if (ctx.cr6.gt) goto loc_82B6E814;
	// beq cr6,0x82b6e808
	if (ctx.cr6.eq) goto loc_82B6E808;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r10,r11,1069
	ctx.r10.u64 = ctx.r11.u64 | 1069;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6e7fc
	if (ctx.cr0.eq) goto loc_82B6E7FC;
	// cmplwi cr6,r11,516
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 516, ctx.xer);
	// beq cr6,0x82b6e7f0
	if (ctx.cr6.eq) goto loc_82B6E7F0;
	// cmplwi cr6,r11,737
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 737, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,18160
	ctx.r3.s64 = ctx.r11.s64 + 18160;
	// blr 
	return;
loc_82B6E7F0:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-880
	ctx.r3.s64 = ctx.r11.s64 + -880;
	// blr 
	return;
loc_82B6E7FC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// blr 
	return;
loc_82B6E808:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-1104
	ctx.r3.s64 = ctx.r11.s64 + -1104;
	// blr 
	return;
loc_82B6E814:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r10,r11,2335
	ctx.r10.u64 = ctx.r11.u64 | 2335;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6e84c
	if (ctx.cr0.eq) goto loc_82B6E84C;
	// cmplwi cr6,r11,232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 232, ctx.xer);
	// beq cr6,0x82b6e840
	if (ctx.cr6.eq) goto loc_82B6E840;
	// cmplwi cr6,r11,233
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 233, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-29584
	ctx.r3.s64 = ctx.r11.s64 + -29584;
	// blr 
	return;
loc_82B6E840:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,29464
	ctx.r3.s64 = ctx.r11.s64 + 29464;
	// blr 
	return;
loc_82B6E84C:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,16456
	ctx.r3.s64 = ctx.r11.s64 + 16456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E858"))) PPC_WEAK_FUNC(sub_82B6E858);
PPC_FUNC_IMPL(__imp__sub_82B6E858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,16400
	ctx.r3.s64 = ctx.r11.s64 + 16400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6E864"))) PPC_WEAK_FUNC(sub_82B6E864);
PPC_FUNC_IMPL(__imp__sub_82B6E864) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,2933
	ctx.r11.u64 = ctx.r11.u64 | 2933;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6eaa8
	if (ctx.cr6.gt) {
		sub_82B6EAA8(ctx, base);
		return;
	}
	// beq cr6,0x82b6ea9c
	if (ctx.cr6.eq) {
		sub_82B6EA9C(ctx, base);
		return;
	}
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,2700
	ctx.r11.u64 = ctx.r11.u64 | 2700;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6ea58
	if (ctx.cr6.gt) {
		sub_82B6EA58(ctx, base);
		return;
	}
	// beq cr6,0x82b6ea4c
	if (ctx.cr6.eq) {
		sub_82B6EA4C(ctx, base);
		return;
	}
	// addis r11,r3,31744
	ctx.r11.s64 = ctx.r3.s64 + 2080374784;
	// addi r11,r11,-2570
	ctx.r11.s64 = ctx.r11.s64 + -2570;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-5964
	ctx.r12.s64 = ctx.r12.s64 + -5964;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6EA1C
		return;
	case 1:
		// ERROR: 0x82B6EA28
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B6EA34
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B6EA40
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6E8B4"))) PPC_WEAK_FUNC(sub_82B6E8B4);
PPC_FUNC_IMPL(__imp__sub_82B6E8B4) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-5604(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5604);
	// lwz r21,-5592(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5592);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-5580(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5580);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-5568(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5568);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,-15904
	ctx.r3.s64 = ctx.r11.s64 + -15904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EA28"))) PPC_WEAK_FUNC(sub_82B6EA28);
PPC_FUNC_IMPL(__imp__sub_82B6EA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-5528
	ctx.r3.s64 = ctx.r11.s64 + -5528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EA34"))) PPC_WEAK_FUNC(sub_82B6EA34);
PPC_FUNC_IMPL(__imp__sub_82B6EA34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-5624
	ctx.r3.s64 = ctx.r11.s64 + -5624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EA40"))) PPC_WEAK_FUNC(sub_82B6EA40);
PPC_FUNC_IMPL(__imp__sub_82B6EA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,-19136
	ctx.r3.s64 = ctx.r11.s64 + -19136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EA4C"))) PPC_WEAK_FUNC(sub_82B6EA4C);
PPC_FUNC_IMPL(__imp__sub_82B6EA4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r3,r11,-6072
	ctx.r3.s64 = ctx.r11.s64 + -6072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EA58"))) PPC_WEAK_FUNC(sub_82B6EA58);
PPC_FUNC_IMPL(__imp__sub_82B6EA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r10,r11,2903
	ctx.r10.u64 = ctx.r11.u64 | 2903;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6ea90
	if (ctx.cr0.eq) goto loc_82B6EA90;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b6ea84
	if (ctx.cr6.eq) goto loc_82B6EA84;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,-21720
	ctx.r3.s64 = ctx.r11.s64 + -21720;
	// blr 
	return;
loc_82B6EA84:
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// blr 
	return;
loc_82B6EA90:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r3,r11,-23560
	ctx.r3.s64 = ctx.r11.s64 + -23560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EA9C"))) PPC_WEAK_FUNC(sub_82B6EA9C);
PPC_FUNC_IMPL(__imp__sub_82B6EA9C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-20376
	ctx.r3.s64 = ctx.r11.s64 + -20376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EAA8"))) PPC_WEAK_FUNC(sub_82B6EAA8);
PPC_FUNC_IMPL(__imp__sub_82B6EAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r11,r11,3251
	ctx.r11.u64 = ctx.r11.u64 | 3251;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6eb0c
	if (ctx.cr6.gt) goto loc_82B6EB0C;
	// beq cr6,0x82b6eb00
	if (ctx.cr6.eq) goto loc_82B6EB00;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r10,r11,3237
	ctx.r10.u64 = ctx.r11.u64 | 3237;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6eaf4
	if (ctx.cr0.eq) goto loc_82B6EAF4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82b6eae8
	if (ctx.cr6.eq) goto loc_82B6EAE8;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,2288
	ctx.r3.s64 = ctx.r11.s64 + 2288;
	// blr 
	return;
loc_82B6EAE8:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,17880
	ctx.r3.s64 = ctx.r11.s64 + 17880;
	// blr 
	return;
loc_82B6EAF4:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-5728
	ctx.r3.s64 = ctx.r11.s64 + -5728;
	// blr 
	return;
loc_82B6EB00:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,29008
	ctx.r3.s64 = ctx.r11.s64 + 29008;
	// blr 
	return;
loc_82B6EB0C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// ori r10,r11,3252
	ctx.r10.u64 = ctx.r11.u64 | 3252;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6eb44
	if (ctx.cr0.eq) goto loc_82B6EB44;
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// beq cr6,0x82b6eb38
	if (ctx.cr6.eq) goto loc_82B6EB38;
	// cmplwi cr6,r11,1695
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1695, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-26272
	ctx.r3.s64 = ctx.r11.s64 + -26272;
	// blr 
	return;
loc_82B6EB38:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-10280
	ctx.r3.s64 = ctx.r11.s64 + -10280;
	// blr 
	return;
loc_82B6EB44:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,17832
	ctx.r3.s64 = ctx.r11.s64 + 17832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EB50"))) PPC_WEAK_FUNC(sub_82B6EB50);
PPC_FUNC_IMPL(__imp__sub_82B6EB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-26368
	ctx.r3.s64 = ctx.r11.s64 + -26368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EB5C"))) PPC_WEAK_FUNC(sub_82B6EB5C);
PPC_FUNC_IMPL(__imp__sub_82B6EB5C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31488
	ctx.r11.s64 = -2063597568;
	// ori r11,r11,832
	ctx.r11.u64 = ctx.r11.u64 | 832;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6ef60
	if (ctx.cr6.gt) {
		sub_82B6EF60(ctx, base);
		return;
	}
	// beq cr6,0x82b6ef54
	if (ctx.cr6.eq) {
		sub_82B6EF54(ctx, base);
		return;
	}
	// lis r11,-31488
	ctx.r11.s64 = -2063597568;
	// ori r11,r11,543
	ctx.r11.u64 = ctx.r11.u64 | 543;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6ee08
	if (ctx.cr6.gt) {
		sub_82B6EE08(ctx, base);
		return;
	}
	// beq cr6,0x82b6edfc
	if (ctx.cr6.eq) {
		sub_82B6EDFC(ctx, base);
		return;
	}
	// lis r11,-31488
	ctx.r11.s64 = -2063597568;
	// ori r11,r11,90
	ctx.r11.u64 = ctx.r11.u64 | 90;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6edb8
	if (ctx.cr6.gt) {
		sub_82B6EDB8(ctx, base);
		return;
	}
	// beq cr6,0x82b6edac
	if (ctx.cr6.eq) {
		sub_82B6EDAC(ctx, base);
		return;
	}
	// addis r11,r3,31744
	ctx.r11.s64 = ctx.r3.s64 + 2080374784;
	// addi r11,r11,-4949
	ctx.r11.s64 = ctx.r11.s64 + -4949;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-5184
	ctx.r12.s64 = ctx.r12.s64 + -5184;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6ED7C
		return;
	case 1:
		// ERROR: 0x82B6ED88
		return;
	case 2:
		// ERROR: 0x82B6ED94
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B6EDA0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6EBC0"))) PPC_WEAK_FUNC(sub_82B6EBC0);
PPC_FUNC_IMPL(__imp__sub_82B6EBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-4740(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4740);
	// lwz r21,-4728(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4728);
	// lwz r21,-4716(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4716);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-4704(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4704);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6ED88"))) PPC_WEAK_FUNC(sub_82B6ED88);
PPC_FUNC_IMPL(__imp__sub_82B6ED88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// addi r3,r11,-31584
	ctx.r3.s64 = ctx.r11.s64 + -31584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6ED94"))) PPC_WEAK_FUNC(sub_82B6ED94);
PPC_FUNC_IMPL(__imp__sub_82B6ED94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-26672
	ctx.r3.s64 = ctx.r11.s64 + -26672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EDA0"))) PPC_WEAK_FUNC(sub_82B6EDA0);
PPC_FUNC_IMPL(__imp__sub_82B6EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,5448
	ctx.r3.s64 = ctx.r11.s64 + 5448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EDAC"))) PPC_WEAK_FUNC(sub_82B6EDAC);
PPC_FUNC_IMPL(__imp__sub_82B6EDAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r3,r11,9656
	ctx.r3.s64 = ctx.r11.s64 + 9656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EDB8"))) PPC_WEAK_FUNC(sub_82B6EDB8);
PPC_FUNC_IMPL(__imp__sub_82B6EDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31488
	ctx.r11.s64 = -2063597568;
	// ori r10,r11,92
	ctx.r10.u64 = ctx.r11.u64 | 92;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6edf0
	if (ctx.cr0.eq) goto loc_82B6EDF0;
	// cmplwi cr6,r11,446
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 446, ctx.xer);
	// beq cr6,0x82b6ede4
	if (ctx.cr6.eq) goto loc_82B6EDE4;
	// cmplwi cr6,r11,449
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 449, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-14112
	ctx.r3.s64 = ctx.r11.s64 + -14112;
	// blr 
	return;
loc_82B6EDE4:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// blr 
	return;
loc_82B6EDF0:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-19216
	ctx.r3.s64 = ctx.r11.s64 + -19216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EDFC"))) PPC_WEAK_FUNC(sub_82B6EDFC);
PPC_FUNC_IMPL(__imp__sub_82B6EDFC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,26264
	ctx.r3.s64 = ctx.r11.s64 + 26264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EE08"))) PPC_WEAK_FUNC(sub_82B6EE08);
PPC_FUNC_IMPL(__imp__sub_82B6EE08) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,31488
	ctx.r11.s64 = ctx.r3.s64 + 2063597568;
	// addi r11,r11,-780
	ctx.r11.s64 = ctx.r11.s64 + -780;
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-4560
	ctx.r12.s64 = ctx.r12.s64 + -4560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6EF0C
		return;
	case 1:
		// ERROR: 0x82B6EF18
		return;
	case 2:
		// ERROR: 0x82B6EF24
		return;
	case 3:
		// ERROR: 0x82B6EF30
		return;
	case 4:
		// ERROR: 0x82B6EF3C
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B6EF48
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B6EF00
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6EE30"))) PPC_WEAK_FUNC(sub_82B6EE30);
PPC_FUNC_IMPL(__imp__sub_82B6EE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-4340(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4340);
	// lwz r21,-4328(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4328);
	// lwz r21,-4316(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4316);
	// lwz r21,-4304(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4304);
	// lwz r21,-4292(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4292);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-4280(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4280);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-4352(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4352);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF0C"))) PPC_WEAK_FUNC(sub_82B6EF0C);
PPC_FUNC_IMPL(__imp__sub_82B6EF0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r3,r11,-31664
	ctx.r3.s64 = ctx.r11.s64 + -31664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF18"))) PPC_WEAK_FUNC(sub_82B6EF18);
PPC_FUNC_IMPL(__imp__sub_82B6EF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF24"))) PPC_WEAK_FUNC(sub_82B6EF24);
PPC_FUNC_IMPL(__imp__sub_82B6EF24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-21864
	ctx.r3.s64 = ctx.r11.s64 + -21864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF30"))) PPC_WEAK_FUNC(sub_82B6EF30);
PPC_FUNC_IMPL(__imp__sub_82B6EF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r3,r11,18720
	ctx.r3.s64 = ctx.r11.s64 + 18720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF3C"))) PPC_WEAK_FUNC(sub_82B6EF3C);
PPC_FUNC_IMPL(__imp__sub_82B6EF3C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,27720
	ctx.r3.s64 = ctx.r11.s64 + 27720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF48"))) PPC_WEAK_FUNC(sub_82B6EF48);
PPC_FUNC_IMPL(__imp__sub_82B6EF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-14968
	ctx.r3.s64 = ctx.r11.s64 + -14968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF54"))) PPC_WEAK_FUNC(sub_82B6EF54);
PPC_FUNC_IMPL(__imp__sub_82B6EF54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r3,r11,-29424
	ctx.r3.s64 = ctx.r11.s64 + -29424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6EF60"))) PPC_WEAK_FUNC(sub_82B6EF60);
PPC_FUNC_IMPL(__imp__sub_82B6EF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,202
	ctx.r11.u64 = ctx.r11.u64 | 202;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f028
	if (ctx.cr6.gt) goto loc_82B6F028;
	// beq cr6,0x82b6f01c
	if (ctx.cr6.eq) goto loc_82B6F01C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6efd8
	if (ctx.cr6.gt) goto loc_82B6EFD8;
	// beq cr6,0x82b6efcc
	if (ctx.cr6.eq) goto loc_82B6EFCC;
	// lis r11,-31488
	ctx.r11.s64 = -2063597568;
	// ori r10,r11,833
	ctx.r10.u64 = ctx.r11.u64 | 833;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6efc0
	if (ctx.cr0.eq) goto loc_82B6EFC0;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x82b6efb4
	if (ctx.cr6.eq) goto loc_82B6EFB4;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,-32088
	ctx.r3.s64 = ctx.r11.s64 + -32088;
	// blr 
	return;
loc_82B6EFB4:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// blr 
	return;
loc_82B6EFC0:
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,9424
	ctx.r3.s64 = ctx.r11.s64 + 9424;
	// blr 
	return;
loc_82B6EFCC:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,15216
	ctx.r3.s64 = ctx.r11.s64 + 15216;
	// blr 
	return;
loc_82B6EFD8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,68
	ctx.r10.u64 = ctx.r11.u64 | 68;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6f010
	if (ctx.cr0.eq) goto loc_82B6F010;
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// beq cr6,0x82b6f004
	if (ctx.cr6.eq) goto loc_82B6F004;
	// cmplwi cr6,r11,132
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 132, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-9744
	ctx.r3.s64 = ctx.r11.s64 + -9744;
	// blr 
	return;
loc_82B6F004:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// blr 
	return;
loc_82B6F010:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,11192
	ctx.r3.s64 = ctx.r11.s64 + 11192;
	// blr 
	return;
loc_82B6F01C:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// blr 
	return;
loc_82B6F028:
	// addis r11,r3,30720
	ctx.r11.s64 = ctx.r3.s64 + 2013265920;
	// addi r11,r11,-330
	ctx.r11.s64 = ctx.r11.s64 + -330;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-4016
	ctx.r12.s64 = ctx.r12.s64 + -4016;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6F10C
		return;
	case 1:
		// ERROR: 0x82B6F118
		return;
	case 2:
		// ERROR: 0x82B6F124
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B6F130
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B6F13C
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B6F148
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B6F154
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6F050"))) PPC_WEAK_FUNC(sub_82B6F050);
PPC_FUNC_IMPL(__imp__sub_82B6F050) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-3828(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3828);
	// lwz r21,-3816(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3816);
	// lwz r21,-3804(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3804);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-3792(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3792);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-3780(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3780);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-3768(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3768);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-3756(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3756);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,-31944
	ctx.r3.s64 = ctx.r11.s64 + -31944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F118"))) PPC_WEAK_FUNC(sub_82B6F118);
PPC_FUNC_IMPL(__imp__sub_82B6F118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28200
	ctx.r3.s64 = ctx.r11.s64 + 28200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F124"))) PPC_WEAK_FUNC(sub_82B6F124);
PPC_FUNC_IMPL(__imp__sub_82B6F124) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,26232
	ctx.r3.s64 = ctx.r11.s64 + 26232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F130"))) PPC_WEAK_FUNC(sub_82B6F130);
PPC_FUNC_IMPL(__imp__sub_82B6F130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F13C"))) PPC_WEAK_FUNC(sub_82B6F13C);
PPC_FUNC_IMPL(__imp__sub_82B6F13C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,21168
	ctx.r3.s64 = ctx.r11.s64 + 21168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F148"))) PPC_WEAK_FUNC(sub_82B6F148);
PPC_FUNC_IMPL(__imp__sub_82B6F148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F154"))) PPC_WEAK_FUNC(sub_82B6F154);
PPC_FUNC_IMPL(__imp__sub_82B6F154) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F160"))) PPC_WEAK_FUNC(sub_82B6F160);
PPC_FUNC_IMPL(__imp__sub_82B6F160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F16C"))) PPC_WEAK_FUNC(sub_82B6F16C);
PPC_FUNC_IMPL(__imp__sub_82B6F16C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29440
	ctx.r11.s64 = -1929379840;
	// ori r11,r11,41918
	ctx.r11.u64 = ctx.r11.u64 | 41918;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fbcc
	if (ctx.cr6.gt) {
		sub_82B6FBCC(ctx, base);
		return;
	}
	// beq cr6,0x82b6fbc0
	if (ctx.cr6.eq) {
		sub_82B6FBC0(ctx, base);
		return;
	}
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,5429
	ctx.r11.u64 = ctx.r11.u64 | 5429;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f78c
	if (ctx.cr6.gt) {
		sub_82B6F78C(ctx, base);
		return;
	}
	// beq cr6,0x82b6f780
	if (ctx.cr6.eq) {
		sub_82B6F780(ctx, base);
		return;
	}
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,3690
	ctx.r11.u64 = ctx.r11.u64 | 3690;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f34c
	if (ctx.cr6.gt) goto loc_82B6F34C;
	// beq cr6,0x82b6f340
	if (ctx.cr6.eq) goto loc_82B6F340;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,3289
	ctx.r11.u64 = ctx.r11.u64 | 3289;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f298
	if (ctx.cr6.gt) goto loc_82B6F298;
	// beq cr6,0x82b6f28c
	if (ctx.cr6.eq) goto loc_82B6F28C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,3285
	ctx.r11.u64 = ctx.r11.u64 | 3285;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f248
	if (ctx.cr6.gt) goto loc_82B6F248;
	// beq cr6,0x82b6f23c
	if (ctx.cr6.eq) goto loc_82B6F23C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,1299
	ctx.r11.u64 = ctx.r11.u64 | 1299;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f220
	if (ctx.cr6.gt) goto loc_82B6F220;
	// beq cr6,0x82b6f214
	if (ctx.cr6.eq) goto loc_82B6F214;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,427
	ctx.r10.u64 = ctx.r11.u64 | 427;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6f208
	if (ctx.cr0.eq) goto loc_82B6F208;
	// cmplwi cr6,r11,239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 239, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r3,r11,8096
	ctx.r3.s64 = ctx.r11.s64 + 8096;
	// blr 
	return;
loc_82B6F208:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-28216
	ctx.r3.s64 = ctx.r11.s64 + -28216;
	// blr 
	return;
loc_82B6F214:
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,9088
	ctx.r3.s64 = ctx.r11.s64 + 9088;
	// blr 
	return;
loc_82B6F220:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,2947
	ctx.r10.u64 = ctx.r11.u64 | 2947;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// addi r3,r11,17008
	ctx.r3.s64 = ctx.r11.s64 + 17008;
	// blr 
	return;
loc_82B6F23C:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,-23840
	ctx.r3.s64 = ctx.r11.s64 + -23840;
	// blr 
	return;
loc_82B6F248:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,3286
	ctx.r10.u64 = ctx.r11.u64 | 3286;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6f280
	if (ctx.cr0.eq) goto loc_82B6F280;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b6f274
	if (ctx.cr6.eq) goto loc_82B6F274;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,-15592
	ctx.r3.s64 = ctx.r11.s64 + -15592;
	// blr 
	return;
loc_82B6F274:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,17816
	ctx.r3.s64 = ctx.r11.s64 + 17816;
	// blr 
	return;
loc_82B6F280:
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-29344
	ctx.r3.s64 = ctx.r11.s64 + -29344;
	// blr 
	return;
loc_82B6F28C:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,24056
	ctx.r3.s64 = ctx.r11.s64 + 24056;
	// blr 
	return;
loc_82B6F298:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,3527
	ctx.r11.u64 = ctx.r11.u64 | 3527;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f2fc
	if (ctx.cr6.gt) goto loc_82B6F2FC;
	// beq cr6,0x82b6f2f0
	if (ctx.cr6.eq) goto loc_82B6F2F0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,3294
	ctx.r10.u64 = ctx.r11.u64 | 3294;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6f2e4
	if (ctx.cr0.eq) goto loc_82B6F2E4;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82b6f2d8
	if (ctx.cr6.eq) goto loc_82B6F2D8;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,5272
	ctx.r3.s64 = ctx.r11.s64 + 5272;
	// blr 
	return;
loc_82B6F2D8:
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// blr 
	return;
loc_82B6F2E4:
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// blr 
	return;
loc_82B6F2F0:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,-23712
	ctx.r3.s64 = ctx.r11.s64 + -23712;
	// blr 
	return;
loc_82B6F2FC:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,3569
	ctx.r10.u64 = ctx.r11.u64 | 3569;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6f334
	if (ctx.cr0.eq) goto loc_82B6F334;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82b6f328
	if (ctx.cr6.eq) goto loc_82B6F328;
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,27112
	ctx.r3.s64 = ctx.r11.s64 + 27112;
	// blr 
	return;
loc_82B6F328:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r11,18744
	ctx.r3.s64 = ctx.r11.s64 + 18744;
	// blr 
	return;
loc_82B6F334:
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,4720
	ctx.r3.s64 = ctx.r11.s64 + 4720;
	// blr 
	return;
loc_82B6F340:
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,3560
	ctx.r3.s64 = ctx.r11.s64 + 3560;
	// blr 
	return;
loc_82B6F34C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,3885
	ctx.r11.u64 = ctx.r11.u64 | 3885;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f3e4
	if (ctx.cr6.gt) {
		sub_82B6F3E4(ctx, base);
		return;
	}
	// beq cr6,0x82b6f3d8
	if (ctx.cr6.eq) {
		sub_82B6F3D8(ctx, base);
		return;
	}
	// addis r11,r3,30720
	ctx.r11.s64 = ctx.r3.s64 + 2013265920;
	// addi r11,r11,-3849
	ctx.r11.s64 = ctx.r11.s64 + -3849;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-3192
	ctx.r12.s64 = ctx.r12.s64 + -3192;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6F39C
		return;
	case 1:
		// ERROR: 0x82B6F3A8
		return;
	case 2:
		// ERROR: 0x82B6F3B4
		return;
	case 3:
		// ERROR: 0x82B6F3C0
		return;
	case 4:
		// ERROR: 0x82B6F3CC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6F388"))) PPC_WEAK_FUNC(sub_82B6F388);
PPC_FUNC_IMPL(__imp__sub_82B6F388) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-3172(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3172);
	// lwz r21,-3160(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3160);
	// lwz r21,-3148(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3148);
	// lwz r21,-3136(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3136);
	// lwz r21,-3124(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3124);
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r3,r11,17216
	ctx.r3.s64 = ctx.r11.s64 + 17216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F3A8"))) PPC_WEAK_FUNC(sub_82B6F3A8);
PPC_FUNC_IMPL(__imp__sub_82B6F3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r3,r11,17816
	ctx.r3.s64 = ctx.r11.s64 + 17816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F3B4"))) PPC_WEAK_FUNC(sub_82B6F3B4);
PPC_FUNC_IMPL(__imp__sub_82B6F3B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F3C0"))) PPC_WEAK_FUNC(sub_82B6F3C0);
PPC_FUNC_IMPL(__imp__sub_82B6F3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r3,r11,16928
	ctx.r3.s64 = ctx.r11.s64 + 16928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F3CC"))) PPC_WEAK_FUNC(sub_82B6F3CC);
PPC_FUNC_IMPL(__imp__sub_82B6F3CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-27032
	ctx.r3.s64 = ctx.r11.s64 + -27032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F3D8"))) PPC_WEAK_FUNC(sub_82B6F3D8);
PPC_FUNC_IMPL(__imp__sub_82B6F3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F3E4"))) PPC_WEAK_FUNC(sub_82B6F3E4);
PPC_FUNC_IMPL(__imp__sub_82B6F3E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,4184
	ctx.r11.u64 = ctx.r11.u64 | 4184;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f714
	if (ctx.cr6.gt) {
		sub_82B6F714(ctx, base);
		return;
	}
	// beq cr6,0x82b6f708
	if (ctx.cr6.eq) {
		sub_82B6F708(ctx, base);
		return;
	}
	// addis r11,r3,30720
	ctx.r11.s64 = ctx.r3.s64 + 2013265920;
	// addi r11,r11,-3959
	ctx.r11.s64 = ctx.r11.s64 + -3959;
	// cmplwi cr6,r11,170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-3040
	ctx.r12.s64 = ctx.r12.s64 + -3040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6F6FC
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B73A88
		return;
	case 111:
		// ERROR: 0x82B73A88
		return;
	case 112:
		// ERROR: 0x82B73A88
		return;
	case 113:
		// ERROR: 0x82B73A88
		return;
	case 114:
		// ERROR: 0x82B73A88
		return;
	case 115:
		// ERROR: 0x82B73A88
		return;
	case 116:
		// ERROR: 0x82B73A88
		return;
	case 117:
		// ERROR: 0x82B73A88
		return;
	case 118:
		// ERROR: 0x82B73A88
		return;
	case 119:
		// ERROR: 0x82B73A88
		return;
	case 120:
		// ERROR: 0x82B73A88
		return;
	case 121:
		// ERROR: 0x82B73A88
		return;
	case 122:
		// ERROR: 0x82B73A88
		return;
	case 123:
		// ERROR: 0x82B73A88
		return;
	case 124:
		// ERROR: 0x82B73A88
		return;
	case 125:
		// ERROR: 0x82B73A88
		return;
	case 126:
		// ERROR: 0x82B73A88
		return;
	case 127:
		// ERROR: 0x82B73A88
		return;
	case 128:
		// ERROR: 0x82B73A88
		return;
	case 129:
		// ERROR: 0x82B73A88
		return;
	case 130:
		// ERROR: 0x82B73A88
		return;
	case 131:
		// ERROR: 0x82B73A88
		return;
	case 132:
		// ERROR: 0x82B73A88
		return;
	case 133:
		// ERROR: 0x82B73A88
		return;
	case 134:
		// ERROR: 0x82B73A88
		return;
	case 135:
		// ERROR: 0x82B73A88
		return;
	case 136:
		// ERROR: 0x82B73A88
		return;
	case 137:
		// ERROR: 0x82B73A88
		return;
	case 138:
		// ERROR: 0x82B73A88
		return;
	case 139:
		// ERROR: 0x82B73A88
		return;
	case 140:
		// ERROR: 0x82B73A88
		return;
	case 141:
		// ERROR: 0x82B73A88
		return;
	case 142:
		// ERROR: 0x82B73A88
		return;
	case 143:
		// ERROR: 0x82B73A88
		return;
	case 144:
		// ERROR: 0x82B73A88
		return;
	case 145:
		// ERROR: 0x82B73A88
		return;
	case 146:
		// ERROR: 0x82B73A88
		return;
	case 147:
		// ERROR: 0x82B73A88
		return;
	case 148:
		// ERROR: 0x82B73A88
		return;
	case 149:
		// ERROR: 0x82B73A88
		return;
	case 150:
		// ERROR: 0x82B73A88
		return;
	case 151:
		// ERROR: 0x82B73A88
		return;
	case 152:
		// ERROR: 0x82B73A88
		return;
	case 153:
		// ERROR: 0x82B73A88
		return;
	case 154:
		// ERROR: 0x82B73A88
		return;
	case 155:
		// ERROR: 0x82B73A88
		return;
	case 156:
		// ERROR: 0x82B73A88
		return;
	case 157:
		// ERROR: 0x82B73A88
		return;
	case 158:
		// ERROR: 0x82B73A88
		return;
	case 159:
		// ERROR: 0x82B73A88
		return;
	case 160:
		// ERROR: 0x82B73A88
		return;
	case 161:
		// ERROR: 0x82B73A88
		return;
	case 162:
		// ERROR: 0x82B73A88
		return;
	case 163:
		// ERROR: 0x82B73A88
		return;
	case 164:
		// ERROR: 0x82B73A88
		return;
	case 165:
		// ERROR: 0x82B73A88
		return;
	case 166:
		// ERROR: 0x82B6F6CC
		return;
	case 167:
		// ERROR: 0x82B73A88
		return;
	case 168:
		// ERROR: 0x82B6F6D8
		return;
	case 169:
		// ERROR: 0x82B6F6E4
		return;
	case 170:
		// ERROR: 0x82B6F6F0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6F420"))) PPC_WEAK_FUNC(sub_82B6F420);
PPC_FUNC_IMPL(__imp__sub_82B6F420) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-2308(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -2308);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-2356(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -2356);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-2344(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -2344);
	// lwz r21,-2332(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -2332);
	// lwz r21,-2320(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -2320);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F6D8"))) PPC_WEAK_FUNC(sub_82B6F6D8);
PPC_FUNC_IMPL(__imp__sub_82B6F6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F6E4"))) PPC_WEAK_FUNC(sub_82B6F6E4);
PPC_FUNC_IMPL(__imp__sub_82B6F6E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-13768
	ctx.r3.s64 = ctx.r11.s64 + -13768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F6F0"))) PPC_WEAK_FUNC(sub_82B6F6F0);
PPC_FUNC_IMPL(__imp__sub_82B6F6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F6FC"))) PPC_WEAK_FUNC(sub_82B6F6FC);
PPC_FUNC_IMPL(__imp__sub_82B6F6FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F708"))) PPC_WEAK_FUNC(sub_82B6F708);
PPC_FUNC_IMPL(__imp__sub_82B6F708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F714"))) PPC_WEAK_FUNC(sub_82B6F714);
PPC_FUNC_IMPL(__imp__sub_82B6F714) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,4513
	ctx.r11.u64 = ctx.r11.u64 | 4513;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f764
	if (ctx.cr6.gt) goto loc_82B6F764;
	// beq cr6,0x82b6f758
	if (ctx.cr6.eq) goto loc_82B6F758;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,4200
	ctx.r10.u64 = ctx.r11.u64 | 4200;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6f74c
	if (ctx.cr0.eq) goto loc_82B6F74C;
	// cmplwi cr6,r11,212
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 212, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-17104
	ctx.r3.s64 = ctx.r11.s64 + -17104;
	// blr 
	return;
loc_82B6F74C:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// blr 
	return;
loc_82B6F758:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,17496
	ctx.r3.s64 = ctx.r11.s64 + 17496;
	// blr 
	return;
loc_82B6F764:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,5428
	ctx.r10.u64 = ctx.r11.u64 | 5428;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,-13784
	ctx.r3.s64 = ctx.r11.s64 + -13784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F780"))) PPC_WEAK_FUNC(sub_82B6F780);
PPC_FUNC_IMPL(__imp__sub_82B6F780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,-16008
	ctx.r3.s64 = ctx.r11.s64 + -16008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F78C"))) PPC_WEAK_FUNC(sub_82B6F78C);
PPC_FUNC_IMPL(__imp__sub_82B6F78C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,6459
	ctx.r11.u64 = ctx.r11.u64 | 6459;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fa48
	if (ctx.cr6.gt) {
		sub_82B6FA48(ctx, base);
		return;
	}
	// beq cr6,0x82b6fa3c
	if (ctx.cr6.eq) {
		sub_82B6FA3C(ctx, base);
		return;
	}
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,5514
	ctx.r11.u64 = ctx.r11.u64 | 5514;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f994
	if (ctx.cr6.gt) {
		sub_82B6F994(ctx, base);
		return;
	}
	// beq cr6,0x82b6f988
	if (ctx.cr6.eq) {
		sub_82B6F988(ctx, base);
		return;
	}
	// addis r11,r3,30720
	ctx.r11.s64 = ctx.r3.s64 + 2013265920;
	// addi r11,r11,-5430
	ctx.r11.s64 = ctx.r11.s64 + -5430;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-2084
	ctx.r12.s64 = ctx.r12.s64 + -2084;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6F958
		return;
	case 1:
		// ERROR: 0x82B6F964
		return;
	case 2:
		// ERROR: 0x82B6F970
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B6F97C
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B6F928
		return;
	case 79:
		// ERROR: 0x82B6F934
		return;
	case 80:
		// ERROR: 0x82B6F940
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B6F94C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6F7DC"))) PPC_WEAK_FUNC(sub_82B6F7DC);
PPC_FUNC_IMPL(__imp__sub_82B6F7DC) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-1704(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1704);
	// lwz r21,-1692(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1692);
	// lwz r21,-1680(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1680);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-1668(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1668);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-1752(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1752);
	// lwz r21,-1740(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1740);
	// lwz r21,-1728(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1728);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-1716(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1716);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F934"))) PPC_WEAK_FUNC(sub_82B6F934);
PPC_FUNC_IMPL(__imp__sub_82B6F934) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,-32392
	ctx.r3.s64 = ctx.r11.s64 + -32392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F940"))) PPC_WEAK_FUNC(sub_82B6F940);
PPC_FUNC_IMPL(__imp__sub_82B6F940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,29448
	ctx.r3.s64 = ctx.r11.s64 + 29448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F94C"))) PPC_WEAK_FUNC(sub_82B6F94C);
PPC_FUNC_IMPL(__imp__sub_82B6F94C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-23336
	ctx.r3.s64 = ctx.r11.s64 + -23336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F958"))) PPC_WEAK_FUNC(sub_82B6F958);
PPC_FUNC_IMPL(__imp__sub_82B6F958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F964"))) PPC_WEAK_FUNC(sub_82B6F964);
PPC_FUNC_IMPL(__imp__sub_82B6F964) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,-4592
	ctx.r3.s64 = ctx.r11.s64 + -4592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F970"))) PPC_WEAK_FUNC(sub_82B6F970);
PPC_FUNC_IMPL(__imp__sub_82B6F970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-26208
	ctx.r3.s64 = ctx.r11.s64 + -26208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F97C"))) PPC_WEAK_FUNC(sub_82B6F97C);
PPC_FUNC_IMPL(__imp__sub_82B6F97C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,-3888
	ctx.r3.s64 = ctx.r11.s64 + -3888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F988"))) PPC_WEAK_FUNC(sub_82B6F988);
PPC_FUNC_IMPL(__imp__sub_82B6F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,21728
	ctx.r3.s64 = ctx.r11.s64 + 21728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6F994"))) PPC_WEAK_FUNC(sub_82B6F994);
PPC_FUNC_IMPL(__imp__sub_82B6F994) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,6264
	ctx.r11.u64 = ctx.r11.u64 | 6264;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6f9f8
	if (ctx.cr6.gt) goto loc_82B6F9F8;
	// beq cr6,0x82b6f9ec
	if (ctx.cr6.eq) goto loc_82B6F9EC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,5592
	ctx.r10.u64 = ctx.r11.u64 | 5592;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6f9e0
	if (ctx.cr0.eq) goto loc_82B6F9E0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b6f9d4
	if (ctx.cr6.eq) goto loc_82B6F9D4;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,15216
	ctx.r3.s64 = ctx.r11.s64 + 15216;
	// blr 
	return;
loc_82B6F9D4:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-25440
	ctx.r3.s64 = ctx.r11.s64 + -25440;
	// blr 
	return;
loc_82B6F9E0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-18016
	ctx.r3.s64 = ctx.r11.s64 + -18016;
	// blr 
	return;
loc_82B6F9EC:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// blr 
	return;
loc_82B6F9F8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,6276
	ctx.r10.u64 = ctx.r11.u64 | 6276;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6fa30
	if (ctx.cr0.eq) goto loc_82B6FA30;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x82b6fa24
	if (ctx.cr6.eq) goto loc_82B6FA24;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-11536
	ctx.r3.s64 = ctx.r11.s64 + -11536;
	// blr 
	return;
loc_82B6FA24:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// blr 
	return;
loc_82B6FA30:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-26984
	ctx.r3.s64 = ctx.r11.s64 + -26984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FA3C"))) PPC_WEAK_FUNC(sub_82B6FA3C);
PPC_FUNC_IMPL(__imp__sub_82B6FA3C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-5680
	ctx.r3.s64 = ctx.r11.s64 + -5680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FA48"))) PPC_WEAK_FUNC(sub_82B6FA48);
PPC_FUNC_IMPL(__imp__sub_82B6FA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,7046
	ctx.r11.u64 = ctx.r11.u64 | 7046;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fb10
	if (ctx.cr6.gt) goto loc_82B6FB10;
	// beq cr6,0x82b6fb04
	if (ctx.cr6.eq) goto loc_82B6FB04;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r11,r11,6594
	ctx.r11.u64 = ctx.r11.u64 | 6594;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fac0
	if (ctx.cr6.gt) goto loc_82B6FAC0;
	// beq cr6,0x82b6fab4
	if (ctx.cr6.eq) goto loc_82B6FAB4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,6472
	ctx.r10.u64 = ctx.r11.u64 | 6472;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6faa8
	if (ctx.cr0.eq) goto loc_82B6FAA8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b6fa9c
	if (ctx.cr6.eq) goto loc_82B6FA9C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r3,r11,29528
	ctx.r3.s64 = ctx.r11.s64 + 29528;
	// blr 
	return;
loc_82B6FA9C:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,744
	ctx.r3.s64 = ctx.r11.s64 + 744;
	// blr 
	return;
loc_82B6FAA8:
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,29712
	ctx.r3.s64 = ctx.r11.s64 + 29712;
	// blr 
	return;
loc_82B6FAB4:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// blr 
	return;
loc_82B6FAC0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,6606
	ctx.r10.u64 = ctx.r11.u64 | 6606;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6faf8
	if (ctx.cr0.eq) goto loc_82B6FAF8;
	// cmplwi cr6,r11,187
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 187, ctx.xer);
	// beq cr6,0x82b6faec
	if (ctx.cr6.eq) goto loc_82B6FAEC;
	// cmplwi cr6,r11,389
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 389, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-8688
	ctx.r3.s64 = ctx.r11.s64 + -8688;
	// blr 
	return;
loc_82B6FAEC:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// blr 
	return;
loc_82B6FAF8:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-1600
	ctx.r3.s64 = ctx.r11.s64 + -1600;
	// blr 
	return;
loc_82B6FB04:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// blr 
	return;
loc_82B6FB10:
	// lis r11,-29440
	ctx.r11.s64 = -1929379840;
	// ori r11,r11,41871
	ctx.r11.u64 = ctx.r11.u64 | 41871;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fb7c
	if (ctx.cr6.gt) goto loc_82B6FB7C;
	// beq cr6,0x82b6fb70
	if (ctx.cr6.eq) goto loc_82B6FB70;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ori r10,r11,7376
	ctx.r10.u64 = ctx.r11.u64 | 7376;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b6fb64
	if (ctx.cr6.eq) goto loc_82B6FB64;
	// lis r11,-29440
	ctx.r11.s64 = -1929379840;
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6fb58
	if (ctx.cr0.eq) goto loc_82B6FB58;
	// cmplwi cr6,r11,41854
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41854, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,17944
	ctx.r3.s64 = ctx.r11.s64 + 17944;
	// blr 
	return;
loc_82B6FB58:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29256
	ctx.r3.s64 = ctx.r11.s64 + -29256;
	// blr 
	return;
loc_82B6FB64:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// blr 
	return;
loc_82B6FB70:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,3312
	ctx.r3.s64 = ctx.r11.s64 + 3312;
	// blr 
	return;
loc_82B6FB7C:
	// lis r11,-29440
	ctx.r11.s64 = -1929379840;
	// ori r10,r11,41872
	ctx.r10.u64 = ctx.r11.u64 | 41872;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6fbb4
	if (ctx.cr0.eq) goto loc_82B6FBB4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82b6fba8
	if (ctx.cr6.eq) goto loc_82B6FBA8;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,26072
	ctx.r3.s64 = ctx.r11.s64 + 26072;
	// blr 
	return;
loc_82B6FBA8:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,12288
	ctx.r3.s64 = ctx.r11.s64 + 12288;
	// blr 
	return;
loc_82B6FBB4:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FBC0"))) PPC_WEAK_FUNC(sub_82B6FBC0);
PPC_FUNC_IMPL(__imp__sub_82B6FBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,26016
	ctx.r3.s64 = ctx.r11.s64 + 26016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FBCC"))) PPC_WEAK_FUNC(sub_82B6FBCC);
PPC_FUNC_IMPL(__imp__sub_82B6FBCC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,3904
	ctx.r11.u64 = ctx.r11.u64 | 3904;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b700e4
	if (ctx.cr6.gt) {
		sub_82B700E4(ctx, base);
		return;
	}
	// beq cr6,0x82b700d8
	if (ctx.cr6.eq) {
		sub_82B700D8(ctx, base);
		return;
	}
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,3755
	ctx.r11.u64 = ctx.r11.u64 | 3755;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fde0
	if (ctx.cr6.gt) {
		sub_82B6FDE0(ctx, base);
		return;
	}
	// beq cr6,0x82b6fdd4
	if (ctx.cr6.eq) {
		sub_82B6FDD4(ctx, base);
		return;
	}
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,3730
	ctx.r11.u64 = ctx.r11.u64 | 3730;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fcf8
	if (ctx.cr6.gt) {
		sub_82B6FCF8(ctx, base);
		return;
	}
	// beq cr6,0x82b6fcec
	if (ctx.cr6.eq) {
		sub_82B6FCEC(ctx, base);
		return;
	}
	// lis r11,-29440
	ctx.r11.s64 = -1929379840;
	// ori r11,r11,41945
	ctx.r11.u64 = ctx.r11.u64 | 41945;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b6fca8
	if (ctx.cr6.gt) {
		sub_82B6FCA8(ctx, base);
		return;
	}
	// beq cr6,0x82b6fc9c
	if (ctx.cr6.eq) {
		sub_82B6FC9C(ctx, base);
		return;
	}
	// addis r11,r3,29439
	ctx.r11.s64 = ctx.r3.s64 + 1929314304;
	// addi r11,r11,23606
	ctx.r11.s64 = ctx.r11.s64 + 23606;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-956
	ctx.r12.s64 = ctx.r12.s64 + -956;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6FC78
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B6FC90
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B6FC6C
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B6FC84
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6FC44"))) PPC_WEAK_FUNC(sub_82B6FC44);
PPC_FUNC_IMPL(__imp__sub_82B6FC44) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-904(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -904);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-880(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -880);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-916(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -916);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-892(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -892);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,9008
	ctx.r3.s64 = ctx.r11.s64 + 9008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FC78"))) PPC_WEAK_FUNC(sub_82B6FC78);
PPC_FUNC_IMPL(__imp__sub_82B6FC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-16520
	ctx.r3.s64 = ctx.r11.s64 + -16520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FC84"))) PPC_WEAK_FUNC(sub_82B6FC84);
PPC_FUNC_IMPL(__imp__sub_82B6FC84) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FC90"))) PPC_WEAK_FUNC(sub_82B6FC90);
PPC_FUNC_IMPL(__imp__sub_82B6FC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r3,r11,-5888
	ctx.r3.s64 = ctx.r11.s64 + -5888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FC9C"))) PPC_WEAK_FUNC(sub_82B6FC9C);
PPC_FUNC_IMPL(__imp__sub_82B6FC9C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-14832
	ctx.r3.s64 = ctx.r11.s64 + -14832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FCA8"))) PPC_WEAK_FUNC(sub_82B6FCA8);
PPC_FUNC_IMPL(__imp__sub_82B6FCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29440
	ctx.r11.s64 = -1929379840;
	// ori r10,r11,41951
	ctx.r10.u64 = ctx.r11.u64 | 41951;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b6fce0
	if (ctx.cr0.eq) goto loc_82B6FCE0;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x82b6fcd4
	if (ctx.cr6.eq) goto loc_82B6FCD4;
	// cmplwi cr6,r11,27314
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27314, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// blr 
	return;
loc_82B6FCD4:
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,16200
	ctx.r3.s64 = ctx.r11.s64 + 16200;
	// blr 
	return;
loc_82B6FCE0:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-29424
	ctx.r3.s64 = ctx.r11.s64 + -29424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FCEC"))) PPC_WEAK_FUNC(sub_82B6FCEC);
PPC_FUNC_IMPL(__imp__sub_82B6FCEC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,21880
	ctx.r3.s64 = ctx.r11.s64 + 21880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FCF8"))) PPC_WEAK_FUNC(sub_82B6FCF8);
PPC_FUNC_IMPL(__imp__sub_82B6FCF8) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,29439
	ctx.r11.s64 = ctx.r3.s64 + 1929314304;
	// addi r11,r11,-3731
	ctx.r11.s64 = ctx.r11.s64 + -3731;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-736
	ctx.r12.s64 = ctx.r12.s64 + -736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B6FD98
		return;
	case 1:
		// ERROR: 0x82B6FDA4
		return;
	case 2:
		// ERROR: 0x82B6FDB0
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B6FDBC
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B6FDC8
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B6FD80
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B6FD8C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6FD20"))) PPC_WEAK_FUNC(sub_82B6FD20);
PPC_FUNC_IMPL(__imp__sub_82B6FD20) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,-616(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -616);
	// lwz r21,-604(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -604);
	// lwz r21,-592(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -592);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-580(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -580);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-568(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -568);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-640(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -640);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,-628(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -628);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,29016
	ctx.r3.s64 = ctx.r11.s64 + 29016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FD8C"))) PPC_WEAK_FUNC(sub_82B6FD8C);
PPC_FUNC_IMPL(__imp__sub_82B6FD8C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,28704
	ctx.r3.s64 = ctx.r11.s64 + 28704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FD98"))) PPC_WEAK_FUNC(sub_82B6FD98);
PPC_FUNC_IMPL(__imp__sub_82B6FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,6920
	ctx.r3.s64 = ctx.r11.s64 + 6920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FDA4"))) PPC_WEAK_FUNC(sub_82B6FDA4);
PPC_FUNC_IMPL(__imp__sub_82B6FDA4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,21232
	ctx.r3.s64 = ctx.r11.s64 + 21232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FDB0"))) PPC_WEAK_FUNC(sub_82B6FDB0);
PPC_FUNC_IMPL(__imp__sub_82B6FDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,19736
	ctx.r3.s64 = ctx.r11.s64 + 19736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FDBC"))) PPC_WEAK_FUNC(sub_82B6FDBC);
PPC_FUNC_IMPL(__imp__sub_82B6FDBC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,19096
	ctx.r3.s64 = ctx.r11.s64 + 19096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FDC8"))) PPC_WEAK_FUNC(sub_82B6FDC8);
PPC_FUNC_IMPL(__imp__sub_82B6FDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FDD4"))) PPC_WEAK_FUNC(sub_82B6FDD4);
PPC_FUNC_IMPL(__imp__sub_82B6FDD4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,21304
	ctx.r3.s64 = ctx.r11.s64 + 21304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6FDE0"))) PPC_WEAK_FUNC(sub_82B6FDE0);
PPC_FUNC_IMPL(__imp__sub_82B6FDE0) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,29439
	ctx.r11.s64 = ctx.r3.s64 + 1929314304;
	// addi r11,r11,-3764
	ctx.r11.s64 = ctx.r11.s64 + -3764;
	// cmplwi cr6,r11,131
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 131, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,-504
	ctx.r12.s64 = ctx.r12.s64 + -504;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B70048
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B7003C
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B700CC
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B70054
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B70060
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B7006C
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B70078
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B70024
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B70090
		return;
	case 47:
		// ERROR: 0x82B70084
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B70018
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B70030
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B7009C
		return;
	case 111:
		// ERROR: 0x82B73A88
		return;
	case 112:
		// ERROR: 0x82B700C0
		return;
	case 113:
		// ERROR: 0x82B73A88
		return;
	case 114:
		// ERROR: 0x82B700B4
		return;
	case 115:
		// ERROR: 0x82B73A88
		return;
	case 116:
		// ERROR: 0x82B73A88
		return;
	case 117:
		// ERROR: 0x82B73A88
		return;
	case 118:
		// ERROR: 0x82B73A88
		return;
	case 119:
		// ERROR: 0x82B73A88
		return;
	case 120:
		// ERROR: 0x82B73A88
		return;
	case 121:
		// ERROR: 0x82B73A88
		return;
	case 122:
		// ERROR: 0x82B73A88
		return;
	case 123:
		// ERROR: 0x82B73A88
		return;
	case 124:
		// ERROR: 0x82B73A88
		return;
	case 125:
		// ERROR: 0x82B73A88
		return;
	case 126:
		// ERROR: 0x82B73A88
		return;
	case 127:
		// ERROR: 0x82B73A88
		return;
	case 128:
		// ERROR: 0x82B73A88
		return;
	case 129:
		// ERROR: 0x82B73A88
		return;
	case 130:
		// ERROR: 0x82B73A88
		return;
	case 131:
		// ERROR: 0x82B700A8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B6FE08"))) PPC_WEAK_FUNC(sub_82B6FE08);
PPC_FUNC_IMPL(__imp__sub_82B6FE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,72(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,60(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,204(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 204);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,84(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,96(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,108(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 108);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,120(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 120);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,36(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,144(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// lwz r21,132(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 132);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,24(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,48(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,156(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 156);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,192(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 192);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,180(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 180);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,168(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 168);
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,27840
	ctx.r3.s64 = ctx.r11.s64 + 27840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70024"))) PPC_WEAK_FUNC(sub_82B70024);
PPC_FUNC_IMPL(__imp__sub_82B70024) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,25360
	ctx.r3.s64 = ctx.r11.s64 + 25360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70030"))) PPC_WEAK_FUNC(sub_82B70030);
PPC_FUNC_IMPL(__imp__sub_82B70030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7003C"))) PPC_WEAK_FUNC(sub_82B7003C);
PPC_FUNC_IMPL(__imp__sub_82B7003C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70048"))) PPC_WEAK_FUNC(sub_82B70048);
PPC_FUNC_IMPL(__imp__sub_82B70048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70054"))) PPC_WEAK_FUNC(sub_82B70054);
PPC_FUNC_IMPL(__imp__sub_82B70054) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70060"))) PPC_WEAK_FUNC(sub_82B70060);
PPC_FUNC_IMPL(__imp__sub_82B70060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7006C"))) PPC_WEAK_FUNC(sub_82B7006C);
PPC_FUNC_IMPL(__imp__sub_82B7006C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,15296
	ctx.r3.s64 = ctx.r11.s64 + 15296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70078"))) PPC_WEAK_FUNC(sub_82B70078);
PPC_FUNC_IMPL(__imp__sub_82B70078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,-23784
	ctx.r3.s64 = ctx.r11.s64 + -23784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70084"))) PPC_WEAK_FUNC(sub_82B70084);
PPC_FUNC_IMPL(__imp__sub_82B70084) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31912
	ctx.r3.s64 = ctx.r11.s64 + 31912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70090"))) PPC_WEAK_FUNC(sub_82B70090);
PPC_FUNC_IMPL(__imp__sub_82B70090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-216
	ctx.r3.s64 = ctx.r11.s64 + -216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7009C"))) PPC_WEAK_FUNC(sub_82B7009C);
PPC_FUNC_IMPL(__imp__sub_82B7009C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B700A8"))) PPC_WEAK_FUNC(sub_82B700A8);
PPC_FUNC_IMPL(__imp__sub_82B700A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-10016
	ctx.r3.s64 = ctx.r11.s64 + -10016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B700B4"))) PPC_WEAK_FUNC(sub_82B700B4);
PPC_FUNC_IMPL(__imp__sub_82B700B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-10104
	ctx.r3.s64 = ctx.r11.s64 + -10104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B700C0"))) PPC_WEAK_FUNC(sub_82B700C0);
PPC_FUNC_IMPL(__imp__sub_82B700C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B700CC"))) PPC_WEAK_FUNC(sub_82B700CC);
PPC_FUNC_IMPL(__imp__sub_82B700CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B700D8"))) PPC_WEAK_FUNC(sub_82B700D8);
PPC_FUNC_IMPL(__imp__sub_82B700D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,-21144
	ctx.r3.s64 = ctx.r11.s64 + -21144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B700E4"))) PPC_WEAK_FUNC(sub_82B700E4);
PPC_FUNC_IMPL(__imp__sub_82B700E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,4404
	ctx.r11.u64 = ctx.r11.u64 | 4404;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70474
	if (ctx.cr6.gt) {
		sub_82B70474(ctx, base);
		return;
	}
	// beq cr6,0x82b70468
	if (ctx.cr6.eq) {
		sub_82B70468(ctx, base);
		return;
	}
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,4060
	ctx.r11.u64 = ctx.r11.u64 | 4060;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b703c0
	if (ctx.cr6.gt) {
		sub_82B703C0(ctx, base);
		return;
	}
	// beq cr6,0x82b703b4
	if (ctx.cr6.eq) {
		sub_82B703B4(ctx, base);
		return;
	}
	// addis r11,r3,29439
	ctx.r11.s64 = ctx.r3.s64 + 1929314304;
	// addi r11,r11,-3905
	ctx.r11.s64 = ctx.r11.s64 + -3905;
	// cmplwi cr6,r11,135
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 135, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,308
	ctx.r12.s64 = ctx.r12.s64 + 308;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B7036C
		return;
	case 1:
		// ERROR: 0x82B70378
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B70390
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B70354
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B70360
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B73A88
		return;
	case 111:
		// ERROR: 0x82B73A88
		return;
	case 112:
		// ERROR: 0x82B73A88
		return;
	case 113:
		// ERROR: 0x82B73A88
		return;
	case 114:
		// ERROR: 0x82B73A88
		return;
	case 115:
		// ERROR: 0x82B73A88
		return;
	case 116:
		// ERROR: 0x82B73A88
		return;
	case 117:
		// ERROR: 0x82B73A88
		return;
	case 118:
		// ERROR: 0x82B73A88
		return;
	case 119:
		// ERROR: 0x82B73A88
		return;
	case 120:
		// ERROR: 0x82B73A88
		return;
	case 121:
		// ERROR: 0x82B73A88
		return;
	case 122:
		// ERROR: 0x82B73A88
		return;
	case 123:
		// ERROR: 0x82B73A88
		return;
	case 124:
		// ERROR: 0x82B73A88
		return;
	case 125:
		// ERROR: 0x82B7039C
		return;
	case 126:
		// ERROR: 0x82B703A8
		return;
	case 127:
		// ERROR: 0x82B73A88
		return;
	case 128:
		// ERROR: 0x82B73A88
		return;
	case 129:
		// ERROR: 0x82B73A88
		return;
	case 130:
		// ERROR: 0x82B73A88
		return;
	case 131:
		// ERROR: 0x82B73A88
		return;
	case 132:
		// ERROR: 0x82B73A88
		return;
	case 133:
		// ERROR: 0x82B73A88
		return;
	case 134:
		// ERROR: 0x82B73A88
		return;
	case 135:
		// ERROR: 0x82B70384
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B70134"))) PPC_WEAK_FUNC(sub_82B70134);
PPC_FUNC_IMPL(__imp__sub_82B70134) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,876(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 876);
	// lwz r21,888(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 888);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,912(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 912);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,852(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 852);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,864(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 864);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,924(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 924);
	// lwz r21,936(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 936);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,900(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 900);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,6600
	ctx.r3.s64 = ctx.r11.s64 + 6600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70360"))) PPC_WEAK_FUNC(sub_82B70360);
PPC_FUNC_IMPL(__imp__sub_82B70360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7036C"))) PPC_WEAK_FUNC(sub_82B7036C);
PPC_FUNC_IMPL(__imp__sub_82B7036C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-432
	ctx.r3.s64 = ctx.r11.s64 + -432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70378"))) PPC_WEAK_FUNC(sub_82B70378);
PPC_FUNC_IMPL(__imp__sub_82B70378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,2480
	ctx.r3.s64 = ctx.r11.s64 + 2480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70384"))) PPC_WEAK_FUNC(sub_82B70384);
PPC_FUNC_IMPL(__imp__sub_82B70384) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-3792
	ctx.r3.s64 = ctx.r11.s64 + -3792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70390"))) PPC_WEAK_FUNC(sub_82B70390);
PPC_FUNC_IMPL(__imp__sub_82B70390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,31312
	ctx.r3.s64 = ctx.r11.s64 + 31312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7039C"))) PPC_WEAK_FUNC(sub_82B7039C);
PPC_FUNC_IMPL(__imp__sub_82B7039C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,5544
	ctx.r3.s64 = ctx.r11.s64 + 5544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B703A8"))) PPC_WEAK_FUNC(sub_82B703A8);
PPC_FUNC_IMPL(__imp__sub_82B703A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B703B4"))) PPC_WEAK_FUNC(sub_82B703B4);
PPC_FUNC_IMPL(__imp__sub_82B703B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-792
	ctx.r3.s64 = ctx.r11.s64 + -792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B703C0"))) PPC_WEAK_FUNC(sub_82B703C0);
PPC_FUNC_IMPL(__imp__sub_82B703C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,4129
	ctx.r11.u64 = ctx.r11.u64 | 4129;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70424
	if (ctx.cr6.gt) goto loc_82B70424;
	// beq cr6,0x82b70418
	if (ctx.cr6.eq) goto loc_82B70418;
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,4080
	ctx.r10.u64 = ctx.r11.u64 | 4080;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b7040c
	if (ctx.cr0.eq) goto loc_82B7040C;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x82b70400
	if (ctx.cr6.eq) goto loc_82B70400;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,14864
	ctx.r3.s64 = ctx.r11.s64 + 14864;
	// blr 
	return;
loc_82B70400:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,15688
	ctx.r3.s64 = ctx.r11.s64 + 15688;
	// blr 
	return;
loc_82B7040C:
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// blr 
	return;
loc_82B70418:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,-20504
	ctx.r3.s64 = ctx.r11.s64 + -20504;
	// blr 
	return;
loc_82B70424:
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,4133
	ctx.r10.u64 = ctx.r11.u64 | 4133;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b7045c
	if (ctx.cr0.eq) goto loc_82B7045C;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82b70450
	if (ctx.cr6.eq) goto loc_82B70450;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// blr 
	return;
loc_82B70450:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,10640
	ctx.r3.s64 = ctx.r11.s64 + 10640;
	// blr 
	return;
loc_82B7045C:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-12360
	ctx.r3.s64 = ctx.r11.s64 + -12360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70468"))) PPC_WEAK_FUNC(sub_82B70468);
PPC_FUNC_IMPL(__imp__sub_82B70468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,6384
	ctx.r3.s64 = ctx.r11.s64 + 6384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70474"))) PPC_WEAK_FUNC(sub_82B70474);
PPC_FUNC_IMPL(__imp__sub_82B70474) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,4531
	ctx.r11.u64 = ctx.r11.u64 | 4531;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70628
	if (ctx.cr6.gt) {
		sub_82B70628(ctx, base);
		return;
	}
	// beq cr6,0x82b7061c
	if (ctx.cr6.eq) {
		sub_82B7061C(ctx, base);
		return;
	}
	// addis r11,r3,29439
	ctx.r11.s64 = ctx.r3.s64 + 1929314304;
	// addi r11,r11,-4446
	ctx.r11.s64 = ctx.r11.s64 + -4446;
	// cmplwi cr6,r11,69
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 69, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,1200
	ctx.r12.s64 = ctx.r12.s64 + 1200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B70610
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B705D4
		return;
	case 60:
		// ERROR: 0x82B705E0
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B705EC
		return;
	case 63:
		// ERROR: 0x82B705F8
		return;
	case 64:
		// ERROR: 0x82B70604
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B705C8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B704B0"))) PPC_WEAK_FUNC(sub_82B704B0);
PPC_FUNC_IMPL(__imp__sub_82B704B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,1552(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1552);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,1492(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1492);
	// lwz r21,1504(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1504);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,1516(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1516);
	// lwz r21,1528(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1528);
	// lwz r21,1540(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1540);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,1480(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1480);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B705D4"))) PPC_WEAK_FUNC(sub_82B705D4);
PPC_FUNC_IMPL(__imp__sub_82B705D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,-14752
	ctx.r3.s64 = ctx.r11.s64 + -14752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B705E0"))) PPC_WEAK_FUNC(sub_82B705E0);
PPC_FUNC_IMPL(__imp__sub_82B705E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-25912
	ctx.r3.s64 = ctx.r11.s64 + -25912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B705EC"))) PPC_WEAK_FUNC(sub_82B705EC);
PPC_FUNC_IMPL(__imp__sub_82B705EC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,19424
	ctx.r3.s64 = ctx.r11.s64 + 19424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B705F8"))) PPC_WEAK_FUNC(sub_82B705F8);
PPC_FUNC_IMPL(__imp__sub_82B705F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,-30432
	ctx.r3.s64 = ctx.r11.s64 + -30432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70604"))) PPC_WEAK_FUNC(sub_82B70604);
PPC_FUNC_IMPL(__imp__sub_82B70604) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-14552
	ctx.r3.s64 = ctx.r11.s64 + -14552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70610"))) PPC_WEAK_FUNC(sub_82B70610);
PPC_FUNC_IMPL(__imp__sub_82B70610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,18976
	ctx.r3.s64 = ctx.r11.s64 + 18976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7061C"))) PPC_WEAK_FUNC(sub_82B7061C);
PPC_FUNC_IMPL(__imp__sub_82B7061C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,20240
	ctx.r3.s64 = ctx.r11.s64 + 20240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70628"))) PPC_WEAK_FUNC(sub_82B70628);
PPC_FUNC_IMPL(__imp__sub_82B70628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,4711
	ctx.r11.u64 = ctx.r11.u64 | 4711;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b7068c
	if (ctx.cr6.gt) goto loc_82B7068C;
	// beq cr6,0x82b70680
	if (ctx.cr6.eq) goto loc_82B70680;
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,4608
	ctx.r10.u64 = ctx.r11.u64 | 4608;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70674
	if (ctx.cr0.eq) goto loc_82B70674;
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// beq cr6,0x82b70668
	if (ctx.cr6.eq) goto loc_82B70668;
	// cmplwi cr6,r11,78
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 78, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-26424
	ctx.r3.s64 = ctx.r11.s64 + -26424;
	// blr 
	return;
loc_82B70668:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-26208
	ctx.r3.s64 = ctx.r11.s64 + -26208;
	// blr 
	return;
loc_82B70674:
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,10768
	ctx.r3.s64 = ctx.r11.s64 + 10768;
	// blr 
	return;
loc_82B70680:
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,10392
	ctx.r3.s64 = ctx.r11.s64 + 10392;
	// blr 
	return;
loc_82B7068C:
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,4812
	ctx.r10.u64 = ctx.r11.u64 | 4812;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b706c4
	if (ctx.cr0.eq) goto loc_82B706C4;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x82b706b8
	if (ctx.cr6.eq) goto loc_82B706B8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,25944
	ctx.r3.s64 = ctx.r11.s64 + 25944;
	// blr 
	return;
loc_82B706B8:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// blr 
	return;
loc_82B706C4:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-2008
	ctx.r3.s64 = ctx.r11.s64 + -2008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B706D0"))) PPC_WEAK_FUNC(sub_82B706D0);
PPC_FUNC_IMPL(__imp__sub_82B706D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,14048
	ctx.r3.s64 = ctx.r11.s64 + 14048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B706DC"))) PPC_WEAK_FUNC(sub_82B706DC);
PPC_FUNC_IMPL(__imp__sub_82B706DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,23599
	ctx.r11.u64 = ctx.r11.u64 | 23599;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b71db8
	if (ctx.cr6.gt) {
		sub_82B71DB8(ctx, base);
		return;
	}
	// beq cr6,0x82b71dac
	if (ctx.cr6.eq) {
		sub_82B71DAC(ctx, base);
		return;
	}
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r11,r11,21498
	ctx.r11.u64 = ctx.r11.u64 | 21498;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b71054
	if (ctx.cr6.gt) {
		sub_82B71054(ctx, base);
		return;
	}
	// beq cr6,0x82b71048
	if (ctx.cr6.eq) {
		sub_82B71048(ctx, base);
		return;
	}
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r11,r11,7790
	ctx.r11.u64 = ctx.r11.u64 | 7790;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70adc
	if (ctx.cr6.gt) {
		sub_82B70ADC(ctx, base);
		return;
	}
	// beq cr6,0x82b70ad0
	if (ctx.cr6.eq) {
		sub_82B70AD0(ctx, base);
		return;
	}
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,11563
	ctx.r11.u64 = ctx.r11.u64 | 11563;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70930
	if (ctx.cr6.gt) {
		sub_82B70930(ctx, base);
		return;
	}
	// beq cr6,0x82b70924
	if (ctx.cr6.eq) {
		sub_82B70924(ctx, base);
		return;
	}
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,8724
	ctx.r11.u64 = ctx.r11.u64 | 8724;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b7087c
	if (ctx.cr6.gt) {
		sub_82B7087C(ctx, base);
		return;
	}
	// beq cr6,0x82b70870
	if (ctx.cr6.eq) {
		sub_82B70870(ctx, base);
		return;
	}
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,7477
	ctx.r11.u64 = ctx.r11.u64 | 7477;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b7082c
	if (ctx.cr6.gt) {
		sub_82B7082C(ctx, base);
		return;
	}
	// beq cr6,0x82b70820
	if (ctx.cr6.eq) {
		sub_82B70820(ctx, base);
		return;
	}
	// addis r11,r3,29439
	ctx.r11.s64 = ctx.r3.s64 + 1929314304;
	// addi r11,r11,-5307
	ctx.r11.s64 = ctx.r11.s64 + -5307;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,1916
	ctx.r12.s64 = ctx.r12.s64 + 1916;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B70808
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B70814
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B707F0
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B707FC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B7077C"))) PPC_WEAK_FUNC(sub_82B7077C);
PPC_FUNC_IMPL(__imp__sub_82B7077C) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,2056(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2056);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,2068(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2068);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,2032(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2032);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,2044(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2044);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B707FC"))) PPC_WEAK_FUNC(sub_82B707FC);
PPC_FUNC_IMPL(__imp__sub_82B707FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70808"))) PPC_WEAK_FUNC(sub_82B70808);
PPC_FUNC_IMPL(__imp__sub_82B70808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r3,r11,-24680
	ctx.r3.s64 = ctx.r11.s64 + -24680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70814"))) PPC_WEAK_FUNC(sub_82B70814);
PPC_FUNC_IMPL(__imp__sub_82B70814) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70820"))) PPC_WEAK_FUNC(sub_82B70820);
PPC_FUNC_IMPL(__imp__sub_82B70820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,19744
	ctx.r3.s64 = ctx.r11.s64 + 19744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7082C"))) PPC_WEAK_FUNC(sub_82B7082C);
PPC_FUNC_IMPL(__imp__sub_82B7082C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,7483
	ctx.r10.u64 = ctx.r11.u64 | 7483;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70864
	if (ctx.cr0.eq) goto loc_82B70864;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b70858
	if (ctx.cr6.eq) goto loc_82B70858;
	// cmplwi cr6,r11,1070
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1070, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// blr 
	return;
loc_82B70858:
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,-19424
	ctx.r3.s64 = ctx.r11.s64 + -19424;
	// blr 
	return;
loc_82B70864:
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,8280
	ctx.r3.s64 = ctx.r11.s64 + 8280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70870"))) PPC_WEAK_FUNC(sub_82B70870);
PPC_FUNC_IMPL(__imp__sub_82B70870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7087C"))) PPC_WEAK_FUNC(sub_82B7087C);
PPC_FUNC_IMPL(__imp__sub_82B7087C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,11309
	ctx.r11.u64 = ctx.r11.u64 | 11309;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b708e0
	if (ctx.cr6.gt) goto loc_82B708E0;
	// beq cr6,0x82b708d4
	if (ctx.cr6.eq) goto loc_82B708D4;
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,8743
	ctx.r10.u64 = ctx.r11.u64 | 8743;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b708c8
	if (ctx.cr0.eq) goto loc_82B708C8;
	// cmplwi cr6,r11,2421
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2421, ctx.xer);
	// beq cr6,0x82b708bc
	if (ctx.cr6.eq) goto loc_82B708BC;
	// cmplwi cr6,r11,2565
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2565, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// blr 
	return;
loc_82B708BC:
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,13104
	ctx.r3.s64 = ctx.r11.s64 + 13104;
	// blr 
	return;
loc_82B708C8:
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// blr 
	return;
loc_82B708D4:
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r3,r11,-768
	ctx.r3.s64 = ctx.r11.s64 + -768;
	// blr 
	return;
loc_82B708E0:
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,11508
	ctx.r10.u64 = ctx.r11.u64 | 11508;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70918
	if (ctx.cr0.eq) goto loc_82B70918;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82b7090c
	if (ctx.cr6.eq) goto loc_82B7090C;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,-29704
	ctx.r3.s64 = ctx.r11.s64 + -29704;
	// blr 
	return;
loc_82B7090C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// blr 
	return;
loc_82B70918:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,-3640
	ctx.r3.s64 = ctx.r11.s64 + -3640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70924"))) PPC_WEAK_FUNC(sub_82B70924);
PPC_FUNC_IMPL(__imp__sub_82B70924) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,-4760
	ctx.r3.s64 = ctx.r11.s64 + -4760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70930"))) PPC_WEAK_FUNC(sub_82B70930);
PPC_FUNC_IMPL(__imp__sub_82B70930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,12220
	ctx.r11.u64 = ctx.r11.u64 | 12220;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70a20
	if (ctx.cr6.gt) goto loc_82B70A20;
	// beq cr6,0x82b70a14
	if (ctx.cr6.eq) goto loc_82B70A14;
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,12042
	ctx.r11.u64 = ctx.r11.u64 | 12042;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b709d0
	if (ctx.cr6.gt) goto loc_82B709D0;
	// beq cr6,0x82b709c4
	if (ctx.cr6.eq) goto loc_82B709C4;
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r11,r11,12038
	ctx.r11.u64 = ctx.r11.u64 | 12038;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b709a8
	if (ctx.cr6.gt) goto loc_82B709A8;
	// beq cr6,0x82b7099c
	if (ctx.cr6.eq) goto loc_82B7099C;
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,11579
	ctx.r10.u64 = ctx.r11.u64 | 11579;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70990
	if (ctx.cr0.eq) goto loc_82B70990;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,11280
	ctx.r3.s64 = ctx.r11.s64 + 11280;
	// blr 
	return;
loc_82B70990:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-11408
	ctx.r3.s64 = ctx.r11.s64 + -11408;
	// blr 
	return;
loc_82B7099C:
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-23288
	ctx.r3.s64 = ctx.r11.s64 + -23288;
	// blr 
	return;
loc_82B709A8:
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,12040
	ctx.r10.u64 = ctx.r11.u64 | 12040;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-10312
	ctx.r3.s64 = ctx.r11.s64 + -10312;
	// blr 
	return;
loc_82B709C4:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-25864
	ctx.r3.s64 = ctx.r11.s64 + -25864;
	// blr 
	return;
loc_82B709D0:
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,12077
	ctx.r10.u64 = ctx.r11.u64 | 12077;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70a08
	if (ctx.cr0.eq) goto loc_82B70A08;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x82b709fc
	if (ctx.cr6.eq) goto loc_82B709FC;
	// cmplwi cr6,r11,140
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 140, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,18888
	ctx.r3.s64 = ctx.r11.s64 + 18888;
	// blr 
	return;
loc_82B709FC:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// blr 
	return;
loc_82B70A08:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-14248
	ctx.r3.s64 = ctx.r11.s64 + -14248;
	// blr 
	return;
loc_82B70A14:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,22528
	ctx.r3.s64 = ctx.r11.s64 + 22528;
	// blr 
	return;
loc_82B70A20:
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70a8c
	if (ctx.cr6.gt) goto loc_82B70A8C;
	// beq cr6,0x82b70a80
	if (ctx.cr6.eq) goto loc_82B70A80;
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// ori r10,r11,12303
	ctx.r10.u64 = ctx.r11.u64 | 12303;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b70a74
	if (ctx.cr6.eq) goto loc_82B70A74;
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r10,r11,13
	ctx.r10.u64 = ctx.r11.u64 | 13;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70a68
	if (ctx.cr0.eq) goto loc_82B70A68;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// blr 
	return;
loc_82B70A68:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,28496
	ctx.r3.s64 = ctx.r11.s64 + 28496;
	// blr 
	return;
loc_82B70A74:
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r3,r11,-2008
	ctx.r3.s64 = ctx.r11.s64 + -2008;
	// blr 
	return;
loc_82B70A80:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// blr 
	return;
loc_82B70A8C:
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r10,r11,407
	ctx.r10.u64 = ctx.r11.u64 | 407;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70ac4
	if (ctx.cr0.eq) goto loc_82B70AC4;
	// cmplwi cr6,r11,342
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 342, ctx.xer);
	// beq cr6,0x82b70ab8
	if (ctx.cr6.eq) goto loc_82B70AB8;
	// cmplwi cr6,r11,7382
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7382, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,27200
	ctx.r3.s64 = ctx.r11.s64 + 27200;
	// blr 
	return;
loc_82B70AB8:
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-6696
	ctx.r3.s64 = ctx.r11.s64 + -6696;
	// blr 
	return;
loc_82B70AC4:
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70AD0"))) PPC_WEAK_FUNC(sub_82B70AD0);
PPC_FUNC_IMPL(__imp__sub_82B70AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70ADC"))) PPC_WEAK_FUNC(sub_82B70ADC);
PPC_FUNC_IMPL(__imp__sub_82B70ADC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r11,r11,7886
	ctx.r11.u64 = ctx.r11.u64 | 7886;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70d60
	if (ctx.cr6.gt) {
		sub_82B70D60(ctx, base);
		return;
	}
	// beq cr6,0x82b70d54
	if (ctx.cr6.eq) {
		sub_82B70D54(ctx, base);
		return;
	}
	// addis r11,r3,29184
	ctx.r11.s64 = ctx.r3.s64 + 1912602624;
	// addi r11,r11,-7791
	ctx.r11.s64 = ctx.r11.s64 + -7791;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,2840
	ctx.r12.s64 = ctx.r12.s64 + 2840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B70CF4
		return;
	case 1:
		// ERROR: 0x82B70D00
		return;
	case 2:
		// ERROR: 0x82B70D0C
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B70CAC
		return;
	case 27:
		// ERROR: 0x82B70CB8
		return;
	case 28:
		// ERROR: 0x82B70CC4
		return;
	case 29:
		// ERROR: 0x82B70CD0
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B70CDC
		return;
	case 37:
		// ERROR: 0x82B70CE8
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B70D18
		return;
	case 58:
		// ERROR: 0x82B70D24
		return;
	case 59:
		// ERROR: 0x82B70D30
		return;
	case 60:
		// ERROR: 0x82B70D3C
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B70D48
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B70C94
		return;
	case 94:
		// ERROR: 0x82B70CA0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B70B18"))) PPC_WEAK_FUNC(sub_82B70B18);
PPC_FUNC_IMPL(__imp__sub_82B70B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,3316(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3316);
	// lwz r21,3328(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3328);
	// lwz r21,3340(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3340);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,3244(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3244);
	// lwz r21,3256(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3256);
	// lwz r21,3268(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3268);
	// lwz r21,3280(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3280);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,3292(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3292);
	// lwz r21,3304(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3304);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,3352(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3352);
	// lwz r21,3364(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3364);
	// lwz r21,3376(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3376);
	// lwz r21,3388(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3388);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,3400(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3400);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,3220(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3220);
	// lwz r21,3232(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3232);
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,29560
	ctx.r3.s64 = ctx.r11.s64 + 29560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CA0"))) PPC_WEAK_FUNC(sub_82B70CA0);
PPC_FUNC_IMPL(__imp__sub_82B70CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-8088
	ctx.r3.s64 = ctx.r11.s64 + -8088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CAC"))) PPC_WEAK_FUNC(sub_82B70CAC);
PPC_FUNC_IMPL(__imp__sub_82B70CAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,28464
	ctx.r3.s64 = ctx.r11.s64 + 28464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CB8"))) PPC_WEAK_FUNC(sub_82B70CB8);
PPC_FUNC_IMPL(__imp__sub_82B70CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-8520
	ctx.r3.s64 = ctx.r11.s64 + -8520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CC4"))) PPC_WEAK_FUNC(sub_82B70CC4);
PPC_FUNC_IMPL(__imp__sub_82B70CC4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,14560
	ctx.r3.s64 = ctx.r11.s64 + 14560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CD0"))) PPC_WEAK_FUNC(sub_82B70CD0);
PPC_FUNC_IMPL(__imp__sub_82B70CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-32664
	ctx.r3.s64 = ctx.r11.s64 + -32664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CDC"))) PPC_WEAK_FUNC(sub_82B70CDC);
PPC_FUNC_IMPL(__imp__sub_82B70CDC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CE8"))) PPC_WEAK_FUNC(sub_82B70CE8);
PPC_FUNC_IMPL(__imp__sub_82B70CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70CF4"))) PPC_WEAK_FUNC(sub_82B70CF4);
PPC_FUNC_IMPL(__imp__sub_82B70CF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D00"))) PPC_WEAK_FUNC(sub_82B70D00);
PPC_FUNC_IMPL(__imp__sub_82B70D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,32632
	ctx.r3.s64 = ctx.r11.s64 + 32632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D0C"))) PPC_WEAK_FUNC(sub_82B70D0C);
PPC_FUNC_IMPL(__imp__sub_82B70D0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-14040
	ctx.r3.s64 = ctx.r11.s64 + -14040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D18"))) PPC_WEAK_FUNC(sub_82B70D18);
PPC_FUNC_IMPL(__imp__sub_82B70D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D24"))) PPC_WEAK_FUNC(sub_82B70D24);
PPC_FUNC_IMPL(__imp__sub_82B70D24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-14712
	ctx.r3.s64 = ctx.r11.s64 + -14712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D30"))) PPC_WEAK_FUNC(sub_82B70D30);
PPC_FUNC_IMPL(__imp__sub_82B70D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,14064
	ctx.r3.s64 = ctx.r11.s64 + 14064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D3C"))) PPC_WEAK_FUNC(sub_82B70D3C);
PPC_FUNC_IMPL(__imp__sub_82B70D3C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D48"))) PPC_WEAK_FUNC(sub_82B70D48);
PPC_FUNC_IMPL(__imp__sub_82B70D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,-26712
	ctx.r3.s64 = ctx.r11.s64 + -26712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D54"))) PPC_WEAK_FUNC(sub_82B70D54);
PPC_FUNC_IMPL(__imp__sub_82B70D54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,15024
	ctx.r3.s64 = ctx.r11.s64 + 15024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B70D60"))) PPC_WEAK_FUNC(sub_82B70D60);
PPC_FUNC_IMPL(__imp__sub_82B70D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r11,r11,15282
	ctx.r11.u64 = ctx.r11.u64 | 15282;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70e28
	if (ctx.cr6.gt) goto loc_82B70E28;
	// beq cr6,0x82b70e1c
	if (ctx.cr6.eq) goto loc_82B70E1C;
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r11,r11,7897
	ctx.r11.u64 = ctx.r11.u64 | 7897;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b70dd8
	if (ctx.cr6.gt) goto loc_82B70DD8;
	// beq cr6,0x82b70dcc
	if (ctx.cr6.eq) goto loc_82B70DCC;
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r10,r11,7887
	ctx.r10.u64 = ctx.r11.u64 | 7887;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70dc0
	if (ctx.cr0.eq) goto loc_82B70DC0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82b70db4
	if (ctx.cr6.eq) goto loc_82B70DB4;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,-26144
	ctx.r3.s64 = ctx.r11.s64 + -26144;
	// blr 
	return;
loc_82B70DB4:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,18664
	ctx.r3.s64 = ctx.r11.s64 + 18664;
	// blr 
	return;
loc_82B70DC0:
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-32424
	ctx.r3.s64 = ctx.r11.s64 + -32424;
	// blr 
	return;
loc_82B70DCC:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,17704
	ctx.r3.s64 = ctx.r11.s64 + 17704;
	// blr 
	return;
loc_82B70DD8:
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r10,r11,9093
	ctx.r10.u64 = ctx.r11.u64 | 9093;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b70e10
	if (ctx.cr0.eq) goto loc_82B70E10;
	// cmplwi cr6,r11,6140
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6140, ctx.xer);
	// beq cr6,0x82b70e04
	if (ctx.cr6.eq) goto loc_82B70E04;
	// cmplwi cr6,r11,6187
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6187, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,14480
	ctx.r3.s64 = ctx.r11.s64 + 14480;
	// blr 
	return;
loc_82B70E04:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,28200
	ctx.r3.s64 = ctx.r11.s64 + 28200;
	// blr 
	return;
loc_82B70E10:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// blr 
	return;
loc_82B70E1C:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// blr 
	return;
loc_82B70E28:
	// addis r11,r3,29184
	ctx.r11.s64 = ctx.r3.s64 + 1912602624;
	// addi r11,r11,-15347
	ctx.r11.s64 = ctx.r11.s64 + -15347;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,3664
	ctx.r12.s64 = ctx.r12.s64 + 3664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B7100C
		return;
	case 1:
		// ERROR: 0x82B71018
		return;
	case 2:
		// ERROR: 0x82B71024
		return;
	case 3:
		// ERROR: 0x82B71030
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B7103C
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B70FF4
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B71000
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B70E50"))) PPC_WEAK_FUNC(sub_82B70E50);
PPC_FUNC_IMPL(__imp__sub_82B70E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,4108(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4108);
	// lwz r21,4120(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4120);
	// lwz r21,4132(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4132);
	// lwz r21,4144(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4144);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,4156(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4156);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,4084(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4084);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,4096(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4096);
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71000"))) PPC_WEAK_FUNC(sub_82B71000);
PPC_FUNC_IMPL(__imp__sub_82B71000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7100C"))) PPC_WEAK_FUNC(sub_82B7100C);
PPC_FUNC_IMPL(__imp__sub_82B7100C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-25032
	ctx.r3.s64 = ctx.r11.s64 + -25032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71018"))) PPC_WEAK_FUNC(sub_82B71018);
PPC_FUNC_IMPL(__imp__sub_82B71018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r3,r11,-31032
	ctx.r3.s64 = ctx.r11.s64 + -31032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71024"))) PPC_WEAK_FUNC(sub_82B71024);
PPC_FUNC_IMPL(__imp__sub_82B71024) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-8112
	ctx.r3.s64 = ctx.r11.s64 + -8112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71030"))) PPC_WEAK_FUNC(sub_82B71030);
PPC_FUNC_IMPL(__imp__sub_82B71030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r3,r11,18112
	ctx.r3.s64 = ctx.r11.s64 + 18112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7103C"))) PPC_WEAK_FUNC(sub_82B7103C);
PPC_FUNC_IMPL(__imp__sub_82B7103C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-27616
	ctx.r3.s64 = ctx.r11.s64 + -27616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71048"))) PPC_WEAK_FUNC(sub_82B71048);
PPC_FUNC_IMPL(__imp__sub_82B71048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71054"))) PPC_WEAK_FUNC(sub_82B71054);
PPC_FUNC_IMPL(__imp__sub_82B71054) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,19496
	ctx.r11.u64 = ctx.r11.u64 | 19496;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b71604
	if (ctx.cr6.gt) {
		sub_82B71604(ctx, base);
		return;
	}
	// beq cr6,0x82b715f8
	if (ctx.cr6.eq) {
		sub_82B715F8(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,125
	ctx.r11.u64 = ctx.r11.u64 | 125;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b712b8
	if (ctx.cr6.gt) {
		sub_82B712B8(ctx, base);
		return;
	}
	// beq cr6,0x82b712ac
	if (ctx.cr6.eq) {
		sub_82B712AC(ctx, base);
		return;
	}
	// lis r11,-27136
	ctx.r11.s64 = -1778384896;
	// ori r11,r11,111
	ctx.r11.u64 = ctx.r11.u64 | 111;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b7116c
	if (ctx.cr6.gt) goto loc_82B7116C;
	// beq cr6,0x82b71160
	if (ctx.cr6.eq) goto loc_82B71160;
	// lis r11,-27632
	ctx.r11.s64 = -1810890752;
	// ori r11,r11,4148
	ctx.r11.u64 = ctx.r11.u64 | 4148;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b7111c
	if (ctx.cr6.gt) goto loc_82B7111C;
	// beq cr6,0x82b71110
	if (ctx.cr6.eq) goto loc_82B71110;
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r11,r11,39838
	ctx.r11.u64 = ctx.r11.u64 | 39838;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b710f4
	if (ctx.cr6.gt) goto loc_82B710F4;
	// beq cr6,0x82b710e8
	if (ctx.cr6.eq) goto loc_82B710E8;
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r10,r11,21499
	ctx.r10.u64 = ctx.r11.u64 | 21499;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b710dc
	if (ctx.cr0.eq) goto loc_82B710DC;
	// cmplwi cr6,r11,8906
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8906, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-25944
	ctx.r3.s64 = ctx.r11.s64 + -25944;
	// blr 
	return;
loc_82B710DC:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,18024
	ctx.r3.s64 = ctx.r11.s64 + 18024;
	// blr 
	return;
loc_82B710E8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-24704
	ctx.r3.s64 = ctx.r11.s64 + -24704;
	// blr 
	return;
loc_82B710F4:
	// lis r11,-29184
	ctx.r11.s64 = -1912602624;
	// ori r10,r11,40672
	ctx.r10.u64 = ctx.r11.u64 | 40672;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,14168
	ctx.r3.s64 = ctx.r11.s64 + 14168;
	// blr 
	return;
loc_82B71110:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,2280
	ctx.r3.s64 = ctx.r11.s64 + 2280;
	// blr 
	return;
loc_82B7111C:
	// lis r11,-27136
	ctx.r11.s64 = -1778384896;
	// ori r10,r11,47
	ctx.r10.u64 = ctx.r11.u64 | 47;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b71154
	if (ctx.cr0.eq) goto loc_82B71154;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x82b71148
	if (ctx.cr6.eq) goto loc_82B71148;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// addi r3,r11,-17632
	ctx.r3.s64 = ctx.r11.s64 + -17632;
	// blr 
	return;
loc_82B71148:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-20328
	ctx.r3.s64 = ctx.r11.s64 + -20328;
	// blr 
	return;
loc_82B71154:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,5840
	ctx.r3.s64 = ctx.r11.s64 + 5840;
	// blr 
	return;
loc_82B71160:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,18264
	ctx.r3.s64 = ctx.r11.s64 + 18264;
	// blr 
	return;
loc_82B7116C:
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,4500
	ctx.r12.s64 = ctx.r12.s64 + 4500;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B712A0
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B71258
		return;
	case 26:
		// ERROR: 0x82B71264
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B71270
		return;
	case 29:
		// ERROR: 0x82B7127C
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B71288
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B71294
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B71194"))) PPC_WEAK_FUNC(sub_82B71194);
PPC_FUNC_IMPL(__imp__sub_82B71194) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,4768(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4768);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,4696(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4696);
	// lwz r21,4708(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4708);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,4720(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4720);
	// lwz r21,4732(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4732);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,4744(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4744);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,4756(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4756);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-28464
	ctx.r3.s64 = ctx.r11.s64 + -28464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71264"))) PPC_WEAK_FUNC(sub_82B71264);
PPC_FUNC_IMPL(__imp__sub_82B71264) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71270"))) PPC_WEAK_FUNC(sub_82B71270);
PPC_FUNC_IMPL(__imp__sub_82B71270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,18760
	ctx.r3.s64 = ctx.r11.s64 + 18760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7127C"))) PPC_WEAK_FUNC(sub_82B7127C);
PPC_FUNC_IMPL(__imp__sub_82B7127C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-14256
	ctx.r3.s64 = ctx.r11.s64 + -14256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71288"))) PPC_WEAK_FUNC(sub_82B71288);
PPC_FUNC_IMPL(__imp__sub_82B71288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71294"))) PPC_WEAK_FUNC(sub_82B71294);
PPC_FUNC_IMPL(__imp__sub_82B71294) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-29176
	ctx.r3.s64 = ctx.r11.s64 + -29176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B712A0"))) PPC_WEAK_FUNC(sub_82B712A0);
PPC_FUNC_IMPL(__imp__sub_82B712A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B712AC"))) PPC_WEAK_FUNC(sub_82B712AC);
PPC_FUNC_IMPL(__imp__sub_82B712AC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,14512
	ctx.r3.s64 = ctx.r11.s64 + 14512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B712B8"))) PPC_WEAK_FUNC(sub_82B712B8);
PPC_FUNC_IMPL(__imp__sub_82B712B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,9517
	ctx.r11.u64 = ctx.r11.u64 | 9517;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b71550
	if (ctx.cr6.gt) {
		sub_82B71550(ctx, base);
		return;
	}
	// beq cr6,0x82b71544
	if (ctx.cr6.eq) {
		sub_82B71544(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,245
	ctx.r11.u64 = ctx.r11.u64 | 245;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b71500
	if (ctx.cr6.gt) {
		sub_82B71500(ctx, base);
		return;
	}
	// beq cr6,0x82b714f4
	if (ctx.cr6.eq) {
		sub_82B714F4(ctx, base);
		return;
	}
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-133
	ctx.r11.s64 = ctx.r11.s64 + -133;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,4872
	ctx.r12.s64 = ctx.r12.s64 + 4872;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B714DC
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B714E8
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B714D0
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B714C4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B71308"))) PPC_WEAK_FUNC(sub_82B71308);
PPC_FUNC_IMPL(__imp__sub_82B71308) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,5340(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5340);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,5352(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,5328(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5328);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,5316(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5316);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-31648
	ctx.r3.s64 = ctx.r11.s64 + -31648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B714D0"))) PPC_WEAK_FUNC(sub_82B714D0);
PPC_FUNC_IMPL(__imp__sub_82B714D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B714DC"))) PPC_WEAK_FUNC(sub_82B714DC);
PPC_FUNC_IMPL(__imp__sub_82B714DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B714E8"))) PPC_WEAK_FUNC(sub_82B714E8);
PPC_FUNC_IMPL(__imp__sub_82B714E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15056
	ctx.r3.s64 = ctx.r11.s64 + -15056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B714F4"))) PPC_WEAK_FUNC(sub_82B714F4);
PPC_FUNC_IMPL(__imp__sub_82B714F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,18496
	ctx.r3.s64 = ctx.r11.s64 + 18496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71500"))) PPC_WEAK_FUNC(sub_82B71500);
PPC_FUNC_IMPL(__imp__sub_82B71500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,246
	ctx.r10.u64 = ctx.r11.u64 | 246;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b71538
	if (ctx.cr0.eq) goto loc_82B71538;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x82b7152c
	if (ctx.cr6.eq) goto loc_82B7152C;
	// cmplwi cr6,r11,897
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 897, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// blr 
	return;
loc_82B7152C:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r3,r11,11544
	ctx.r3.s64 = ctx.r11.s64 + 11544;
	// blr 
	return;
loc_82B71538:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-31880
	ctx.r3.s64 = ctx.r11.s64 + -31880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71544"))) PPC_WEAK_FUNC(sub_82B71544);
PPC_FUNC_IMPL(__imp__sub_82B71544) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,22856
	ctx.r3.s64 = ctx.r11.s64 + 22856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71550"))) PPC_WEAK_FUNC(sub_82B71550);
PPC_FUNC_IMPL(__imp__sub_82B71550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,10598
	ctx.r11.u64 = ctx.r11.u64 | 10598;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b715b4
	if (ctx.cr6.gt) goto loc_82B715B4;
	// beq cr6,0x82b715a8
	if (ctx.cr6.eq) goto loc_82B715A8;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,9518
	ctx.r10.u64 = ctx.r11.u64 | 9518;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b7159c
	if (ctx.cr0.eq) goto loc_82B7159C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b71590
	if (ctx.cr6.eq) goto loc_82B71590;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// blr 
	return;
loc_82B71590:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,13264
	ctx.r3.s64 = ctx.r11.s64 + 13264;
	// blr 
	return;
loc_82B7159C:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,17312
	ctx.r3.s64 = ctx.r11.s64 + 17312;
	// blr 
	return;
loc_82B715A8:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,31048
	ctx.r3.s64 = ctx.r11.s64 + 31048;
	// blr 
	return;
loc_82B715B4:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,10599
	ctx.r10.u64 = ctx.r11.u64 | 10599;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b715ec
	if (ctx.cr0.eq) goto loc_82B715EC;
	// cmplwi cr6,r11,580
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 580, ctx.xer);
	// beq cr6,0x82b715e0
	if (ctx.cr6.eq) goto loc_82B715E0;
	// cmplwi cr6,r11,1894
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1894, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,3288
	ctx.r3.s64 = ctx.r11.s64 + 3288;
	// blr 
	return;
loc_82B715E0:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// blr 
	return;
loc_82B715EC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,16880
	ctx.r3.s64 = ctx.r11.s64 + 16880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B715F8"))) PPC_WEAK_FUNC(sub_82B715F8);
PPC_FUNC_IMPL(__imp__sub_82B715F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-7560
	ctx.r3.s64 = ctx.r11.s64 + -7560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71604"))) PPC_WEAK_FUNC(sub_82B71604);
PPC_FUNC_IMPL(__imp__sub_82B71604) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,23263
	ctx.r11.u64 = ctx.r11.u64 | 23263;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b717fc
	if (ctx.cr6.gt) {
		sub_82B717FC(ctx, base);
		return;
	}
	// beq cr6,0x82b717f0
	if (ctx.cr6.eq) {
		sub_82B717F0(ctx, base);
		return;
	}
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-23202
	ctx.r11.s64 = ctx.r11.s64 + -23202;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,5696
	ctx.r12.s64 = ctx.r12.s64 + 5696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B71748
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B71754
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B71730
		return;
	case 22:
		// ERROR: 0x82B7173C
		return;
	case 23:
		// ERROR: 0x82B71760
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B7176C
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B717E4
		return;
	case 29:
		// ERROR: 0x82B71778
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B71784
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B71790
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B7179C
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B717A8
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B717B4
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B717C0
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B717CC
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B717D8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B71640"))) PPC_WEAK_FUNC(sub_82B71640);
PPC_FUNC_IMPL(__imp__sub_82B71640) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,5960(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5960);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,5972(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5972);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,5936(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5936);
	// lwz r21,5948(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5948);
	// lwz r21,5984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,5996(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5996);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6116(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6116);
	// lwz r21,6008(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6008);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6020(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6020);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6032(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6032);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6044(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6044);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6056(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6056);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6068(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6068);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6080(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6080);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6092(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6092);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6104(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6104);
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7173C"))) PPC_WEAK_FUNC(sub_82B7173C);
PPC_FUNC_IMPL(__imp__sub_82B7173C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71748"))) PPC_WEAK_FUNC(sub_82B71748);
PPC_FUNC_IMPL(__imp__sub_82B71748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-21888
	ctx.r3.s64 = ctx.r11.s64 + -21888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71754"))) PPC_WEAK_FUNC(sub_82B71754);
PPC_FUNC_IMPL(__imp__sub_82B71754) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r11,-31528
	ctx.r3.s64 = ctx.r11.s64 + -31528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71760"))) PPC_WEAK_FUNC(sub_82B71760);
PPC_FUNC_IMPL(__imp__sub_82B71760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r11,-32072
	ctx.r3.s64 = ctx.r11.s64 + -32072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7176C"))) PPC_WEAK_FUNC(sub_82B7176C);
PPC_FUNC_IMPL(__imp__sub_82B7176C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71778"))) PPC_WEAK_FUNC(sub_82B71778);
PPC_FUNC_IMPL(__imp__sub_82B71778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r11,-32376
	ctx.r3.s64 = ctx.r11.s64 + -32376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71784"))) PPC_WEAK_FUNC(sub_82B71784);
PPC_FUNC_IMPL(__imp__sub_82B71784) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,-17360
	ctx.r3.s64 = ctx.r11.s64 + -17360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71790"))) PPC_WEAK_FUNC(sub_82B71790);
PPC_FUNC_IMPL(__imp__sub_82B71790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,32728
	ctx.r3.s64 = ctx.r11.s64 + 32728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7179C"))) PPC_WEAK_FUNC(sub_82B7179C);
PPC_FUNC_IMPL(__imp__sub_82B7179C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717A8"))) PPC_WEAK_FUNC(sub_82B717A8);
PPC_FUNC_IMPL(__imp__sub_82B717A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-31904
	ctx.r3.s64 = ctx.r11.s64 + -31904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717B4"))) PPC_WEAK_FUNC(sub_82B717B4);
PPC_FUNC_IMPL(__imp__sub_82B717B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717C0"))) PPC_WEAK_FUNC(sub_82B717C0);
PPC_FUNC_IMPL(__imp__sub_82B717C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717CC"))) PPC_WEAK_FUNC(sub_82B717CC);
PPC_FUNC_IMPL(__imp__sub_82B717CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,24888
	ctx.r3.s64 = ctx.r11.s64 + 24888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717D8"))) PPC_WEAK_FUNC(sub_82B717D8);
PPC_FUNC_IMPL(__imp__sub_82B717D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,31680
	ctx.r3.s64 = ctx.r11.s64 + 31680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717E4"))) PPC_WEAK_FUNC(sub_82B717E4);
PPC_FUNC_IMPL(__imp__sub_82B717E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717F0"))) PPC_WEAK_FUNC(sub_82B717F0);
PPC_FUNC_IMPL(__imp__sub_82B717F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,5784
	ctx.r3.s64 = ctx.r11.s64 + 5784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B717FC"))) PPC_WEAK_FUNC(sub_82B717FC);
PPC_FUNC_IMPL(__imp__sub_82B717FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,23382
	ctx.r11.u64 = ctx.r11.u64 | 23382;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b71a5c
	if (ctx.cr6.gt) {
		sub_82B71A5C(ctx, base);
		return;
	}
	// beq cr6,0x82b71a50
	if (ctx.cr6.eq) {
		sub_82B71A50(ctx, base);
		return;
	}
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-23265
	ctx.r11.s64 = ctx.r11.s64 + -23265;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,6200
	ctx.r12.s64 = ctx.r12.s64 + 6200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B71A08
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B71A14
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B71A20
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B73A88
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B719FC
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B71A2C
		return;
	case 111:
		// ERROR: 0x82B71A38
		return;
	case 112:
		// ERROR: 0x82B71A44
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B71838"))) PPC_WEAK_FUNC(sub_82B71838);
PPC_FUNC_IMPL(__imp__sub_82B71838) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,6664(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6664);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6676(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6676);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6688(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6688);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6652(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6652);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,6700(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6700);
	// lwz r21,6712(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6712);
	// lwz r21,6724(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6724);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A08"))) PPC_WEAK_FUNC(sub_82B71A08);
PPC_FUNC_IMPL(__imp__sub_82B71A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,19416
	ctx.r3.s64 = ctx.r11.s64 + 19416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A14"))) PPC_WEAK_FUNC(sub_82B71A14);
PPC_FUNC_IMPL(__imp__sub_82B71A14) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-32056
	ctx.r3.s64 = ctx.r11.s64 + -32056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A20"))) PPC_WEAK_FUNC(sub_82B71A20);
PPC_FUNC_IMPL(__imp__sub_82B71A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,19176
	ctx.r3.s64 = ctx.r11.s64 + 19176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A2C"))) PPC_WEAK_FUNC(sub_82B71A2C);
PPC_FUNC_IMPL(__imp__sub_82B71A2C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,32480
	ctx.r3.s64 = ctx.r11.s64 + 32480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A38"))) PPC_WEAK_FUNC(sub_82B71A38);
PPC_FUNC_IMPL(__imp__sub_82B71A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A44"))) PPC_WEAK_FUNC(sub_82B71A44);
PPC_FUNC_IMPL(__imp__sub_82B71A44) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A50"))) PPC_WEAK_FUNC(sub_82B71A50);
PPC_FUNC_IMPL(__imp__sub_82B71A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71A5C"))) PPC_WEAK_FUNC(sub_82B71A5C);
PPC_FUNC_IMPL(__imp__sub_82B71A5C) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-23385
	ctx.r11.s64 = ctx.r11.s64 + -23385;
	// cmplwi cr6,r11,180
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 180, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,6788
	ctx.r12.s64 = ctx.r12.s64 + 6788;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B71D64
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B71D70
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B71D7C
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B73A88
		return;
	case 53:
		// ERROR: 0x82B73A88
		return;
	case 54:
		// ERROR: 0x82B73A88
		return;
	case 55:
		// ERROR: 0x82B73A88
		return;
	case 56:
		// ERROR: 0x82B73A88
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B73A88
		return;
	case 111:
		// ERROR: 0x82B73A88
		return;
	case 112:
		// ERROR: 0x82B73A88
		return;
	case 113:
		// ERROR: 0x82B73A88
		return;
	case 114:
		// ERROR: 0x82B73A88
		return;
	case 115:
		// ERROR: 0x82B73A88
		return;
	case 116:
		// ERROR: 0x82B73A88
		return;
	case 117:
		// ERROR: 0x82B73A88
		return;
	case 118:
		// ERROR: 0x82B73A88
		return;
	case 119:
		// ERROR: 0x82B73A88
		return;
	case 120:
		// ERROR: 0x82B73A88
		return;
	case 121:
		// ERROR: 0x82B73A88
		return;
	case 122:
		// ERROR: 0x82B73A88
		return;
	case 123:
		// ERROR: 0x82B73A88
		return;
	case 124:
		// ERROR: 0x82B71D58
		return;
	case 125:
		// ERROR: 0x82B73A88
		return;
	case 126:
		// ERROR: 0x82B73A88
		return;
	case 127:
		// ERROR: 0x82B73A88
		return;
	case 128:
		// ERROR: 0x82B73A88
		return;
	case 129:
		// ERROR: 0x82B73A88
		return;
	case 130:
		// ERROR: 0x82B73A88
		return;
	case 131:
		// ERROR: 0x82B73A88
		return;
	case 132:
		// ERROR: 0x82B73A88
		return;
	case 133:
		// ERROR: 0x82B73A88
		return;
	case 134:
		// ERROR: 0x82B73A88
		return;
	case 135:
		// ERROR: 0x82B73A88
		return;
	case 136:
		// ERROR: 0x82B73A88
		return;
	case 137:
		// ERROR: 0x82B73A88
		return;
	case 138:
		// ERROR: 0x82B73A88
		return;
	case 139:
		// ERROR: 0x82B73A88
		return;
	case 140:
		// ERROR: 0x82B73A88
		return;
	case 141:
		// ERROR: 0x82B73A88
		return;
	case 142:
		// ERROR: 0x82B71D88
		return;
	case 143:
		// ERROR: 0x82B73A88
		return;
	case 144:
		// ERROR: 0x82B73A88
		return;
	case 145:
		// ERROR: 0x82B73A88
		return;
	case 146:
		// ERROR: 0x82B73A88
		return;
	case 147:
		// ERROR: 0x82B73A88
		return;
	case 148:
		// ERROR: 0x82B73A88
		return;
	case 149:
		// ERROR: 0x82B73A88
		return;
	case 150:
		// ERROR: 0x82B73A88
		return;
	case 151:
		// ERROR: 0x82B73A88
		return;
	case 152:
		// ERROR: 0x82B73A88
		return;
	case 153:
		// ERROR: 0x82B73A88
		return;
	case 154:
		// ERROR: 0x82B73A88
		return;
	case 155:
		// ERROR: 0x82B73A88
		return;
	case 156:
		// ERROR: 0x82B73A88
		return;
	case 157:
		// ERROR: 0x82B73A88
		return;
	case 158:
		// ERROR: 0x82B73A88
		return;
	case 159:
		// ERROR: 0x82B73A88
		return;
	case 160:
		// ERROR: 0x82B73A88
		return;
	case 161:
		// ERROR: 0x82B73A88
		return;
	case 162:
		// ERROR: 0x82B73A88
		return;
	case 163:
		// ERROR: 0x82B73A88
		return;
	case 164:
		// ERROR: 0x82B73A88
		return;
	case 165:
		// ERROR: 0x82B73A88
		return;
	case 166:
		// ERROR: 0x82B73A88
		return;
	case 167:
		// ERROR: 0x82B73A88
		return;
	case 168:
		// ERROR: 0x82B71DA0
		return;
	case 169:
		// ERROR: 0x82B73A88
		return;
	case 170:
		// ERROR: 0x82B73A88
		return;
	case 171:
		// ERROR: 0x82B73A88
		return;
	case 172:
		// ERROR: 0x82B73A88
		return;
	case 173:
		// ERROR: 0x82B73A88
		return;
	case 174:
		// ERROR: 0x82B73A88
		return;
	case 175:
		// ERROR: 0x82B73A88
		return;
	case 176:
		// ERROR: 0x82B73A88
		return;
	case 177:
		// ERROR: 0x82B73A88
		return;
	case 178:
		// ERROR: 0x82B73A88
		return;
	case 179:
		// ERROR: 0x82B73A88
		return;
	case 180:
		// ERROR: 0x82B71D94
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B71A84"))) PPC_WEAK_FUNC(sub_82B71A84);
PPC_FUNC_IMPL(__imp__sub_82B71A84) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,7524(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7524);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,7536(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7536);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,7548(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7548);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,7512(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7512);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,7560(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7560);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,7584(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7584);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,7572(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7572);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,31456
	ctx.r3.s64 = ctx.r11.s64 + 31456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71D64"))) PPC_WEAK_FUNC(sub_82B71D64);
PPC_FUNC_IMPL(__imp__sub_82B71D64) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,3232
	ctx.r3.s64 = ctx.r11.s64 + 3232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71D70"))) PPC_WEAK_FUNC(sub_82B71D70);
PPC_FUNC_IMPL(__imp__sub_82B71D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r3,r11,-8568
	ctx.r3.s64 = ctx.r11.s64 + -8568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71D7C"))) PPC_WEAK_FUNC(sub_82B71D7C);
PPC_FUNC_IMPL(__imp__sub_82B71D7C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71D88"))) PPC_WEAK_FUNC(sub_82B71D88);
PPC_FUNC_IMPL(__imp__sub_82B71D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71D94"))) PPC_WEAK_FUNC(sub_82B71D94);
PPC_FUNC_IMPL(__imp__sub_82B71D94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-15240
	ctx.r3.s64 = ctx.r11.s64 + -15240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71DA0"))) PPC_WEAK_FUNC(sub_82B71DA0);
PPC_FUNC_IMPL(__imp__sub_82B71DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r3,r11,-23536
	ctx.r3.s64 = ctx.r11.s64 + -23536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71DAC"))) PPC_WEAK_FUNC(sub_82B71DAC);
PPC_FUNC_IMPL(__imp__sub_82B71DAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-31784
	ctx.r3.s64 = ctx.r11.s64 + -31784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B71DB8"))) PPC_WEAK_FUNC(sub_82B71DB8);
PPC_FUNC_IMPL(__imp__sub_82B71DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,34960
	ctx.r11.u64 = ctx.r11.u64 | 34960;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72c34
	if (ctx.cr6.gt) {
		sub_82B72C34(ctx, base);
		return;
	}
	// beq cr6,0x82b72c28
	if (ctx.cr6.eq) {
		sub_82B72C28(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,27091
	ctx.r11.u64 = ctx.r11.u64 | 27091;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b726a4
	if (ctx.cr6.gt) {
		sub_82B726A4(ctx, base);
		return;
	}
	// beq cr6,0x82b72698
	if (ctx.cr6.eq) {
		sub_82B72698(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,24244
	ctx.r11.u64 = ctx.r11.u64 | 24244;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72170
	if (ctx.cr6.gt) {
		sub_82B72170(ctx, base);
		return;
	}
	// beq cr6,0x82b72164
	if (ctx.cr6.eq) {
		sub_82B72164(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,23745
	ctx.r11.u64 = ctx.r11.u64 | 23745;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b720bc
	if (ctx.cr6.gt) {
		sub_82B720BC(ctx, base);
		return;
	}
	// beq cr6,0x82b720b0
	if (ctx.cr6.eq) {
		sub_82B720B0(ctx, base);
		return;
	}
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-23601
	ctx.r11.s64 = ctx.r11.s64 + -23601;
	// cmplwi cr6,r11,135
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 135, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,7728
	ctx.r12.s64 = ctx.r12.s64 + 7728;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B7205C
		return;
	case 1:
		// ERROR: 0x82B73A88
		return;
	case 2:
		// ERROR: 0x82B73A88
		return;
	case 3:
		// ERROR: 0x82B73A88
		return;
	case 4:
		// ERROR: 0x82B73A88
		return;
	case 5:
		// ERROR: 0x82B73A88
		return;
	case 6:
		// ERROR: 0x82B73A88
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73A88
		return;
	case 9:
		// ERROR: 0x82B73A88
		return;
	case 10:
		// ERROR: 0x82B73A88
		return;
	case 11:
		// ERROR: 0x82B73A88
		return;
	case 12:
		// ERROR: 0x82B72050
		return;
	case 13:
		// ERROR: 0x82B73A88
		return;
	case 14:
		// ERROR: 0x82B73A88
		return;
	case 15:
		// ERROR: 0x82B73A88
		return;
	case 16:
		// ERROR: 0x82B73A88
		return;
	case 17:
		// ERROR: 0x82B73A88
		return;
	case 18:
		// ERROR: 0x82B73A88
		return;
	case 19:
		// ERROR: 0x82B73A88
		return;
	case 20:
		// ERROR: 0x82B73A88
		return;
	case 21:
		// ERROR: 0x82B73A88
		return;
	case 22:
		// ERROR: 0x82B73A88
		return;
	case 23:
		// ERROR: 0x82B73A88
		return;
	case 24:
		// ERROR: 0x82B73A88
		return;
	case 25:
		// ERROR: 0x82B73A88
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B73A88
		return;
	case 28:
		// ERROR: 0x82B73A88
		return;
	case 29:
		// ERROR: 0x82B73A88
		return;
	case 30:
		// ERROR: 0x82B73A88
		return;
	case 31:
		// ERROR: 0x82B73A88
		return;
	case 32:
		// ERROR: 0x82B73A88
		return;
	case 33:
		// ERROR: 0x82B73A88
		return;
	case 34:
		// ERROR: 0x82B73A88
		return;
	case 35:
		// ERROR: 0x82B73A88
		return;
	case 36:
		// ERROR: 0x82B73A88
		return;
	case 37:
		// ERROR: 0x82B73A88
		return;
	case 38:
		// ERROR: 0x82B73A88
		return;
	case 39:
		// ERROR: 0x82B73A88
		return;
	case 40:
		// ERROR: 0x82B73A88
		return;
	case 41:
		// ERROR: 0x82B73A88
		return;
	case 42:
		// ERROR: 0x82B73A88
		return;
	case 43:
		// ERROR: 0x82B73A88
		return;
	case 44:
		// ERROR: 0x82B73A88
		return;
	case 45:
		// ERROR: 0x82B73A88
		return;
	case 46:
		// ERROR: 0x82B73A88
		return;
	case 47:
		// ERROR: 0x82B73A88
		return;
	case 48:
		// ERROR: 0x82B73A88
		return;
	case 49:
		// ERROR: 0x82B73A88
		return;
	case 50:
		// ERROR: 0x82B73A88
		return;
	case 51:
		// ERROR: 0x82B73A88
		return;
	case 52:
		// ERROR: 0x82B72068
		return;
	case 53:
		// ERROR: 0x82B72074
		return;
	case 54:
		// ERROR: 0x82B72080
		return;
	case 55:
		// ERROR: 0x82B7208C
		return;
	case 56:
		// ERROR: 0x82B72098
		return;
	case 57:
		// ERROR: 0x82B73A88
		return;
	case 58:
		// ERROR: 0x82B73A88
		return;
	case 59:
		// ERROR: 0x82B73A88
		return;
	case 60:
		// ERROR: 0x82B73A88
		return;
	case 61:
		// ERROR: 0x82B73A88
		return;
	case 62:
		// ERROR: 0x82B73A88
		return;
	case 63:
		// ERROR: 0x82B73A88
		return;
	case 64:
		// ERROR: 0x82B73A88
		return;
	case 65:
		// ERROR: 0x82B73A88
		return;
	case 66:
		// ERROR: 0x82B73A88
		return;
	case 67:
		// ERROR: 0x82B73A88
		return;
	case 68:
		// ERROR: 0x82B73A88
		return;
	case 69:
		// ERROR: 0x82B73A88
		return;
	case 70:
		// ERROR: 0x82B73A88
		return;
	case 71:
		// ERROR: 0x82B73A88
		return;
	case 72:
		// ERROR: 0x82B73A88
		return;
	case 73:
		// ERROR: 0x82B73A88
		return;
	case 74:
		// ERROR: 0x82B73A88
		return;
	case 75:
		// ERROR: 0x82B73A88
		return;
	case 76:
		// ERROR: 0x82B73A88
		return;
	case 77:
		// ERROR: 0x82B73A88
		return;
	case 78:
		// ERROR: 0x82B73A88
		return;
	case 79:
		// ERROR: 0x82B73A88
		return;
	case 80:
		// ERROR: 0x82B73A88
		return;
	case 81:
		// ERROR: 0x82B73A88
		return;
	case 82:
		// ERROR: 0x82B73A88
		return;
	case 83:
		// ERROR: 0x82B73A88
		return;
	case 84:
		// ERROR: 0x82B73A88
		return;
	case 85:
		// ERROR: 0x82B73A88
		return;
	case 86:
		// ERROR: 0x82B73A88
		return;
	case 87:
		// ERROR: 0x82B73A88
		return;
	case 88:
		// ERROR: 0x82B73A88
		return;
	case 89:
		// ERROR: 0x82B73A88
		return;
	case 90:
		// ERROR: 0x82B73A88
		return;
	case 91:
		// ERROR: 0x82B73A88
		return;
	case 92:
		// ERROR: 0x82B73A88
		return;
	case 93:
		// ERROR: 0x82B73A88
		return;
	case 94:
		// ERROR: 0x82B73A88
		return;
	case 95:
		// ERROR: 0x82B73A88
		return;
	case 96:
		// ERROR: 0x82B73A88
		return;
	case 97:
		// ERROR: 0x82B73A88
		return;
	case 98:
		// ERROR: 0x82B73A88
		return;
	case 99:
		// ERROR: 0x82B73A88
		return;
	case 100:
		// ERROR: 0x82B73A88
		return;
	case 101:
		// ERROR: 0x82B73A88
		return;
	case 102:
		// ERROR: 0x82B73A88
		return;
	case 103:
		// ERROR: 0x82B73A88
		return;
	case 104:
		// ERROR: 0x82B73A88
		return;
	case 105:
		// ERROR: 0x82B73A88
		return;
	case 106:
		// ERROR: 0x82B73A88
		return;
	case 107:
		// ERROR: 0x82B73A88
		return;
	case 108:
		// ERROR: 0x82B73A88
		return;
	case 109:
		// ERROR: 0x82B73A88
		return;
	case 110:
		// ERROR: 0x82B73A88
		return;
	case 111:
		// ERROR: 0x82B73A88
		return;
	case 112:
		// ERROR: 0x82B73A88
		return;
	case 113:
		// ERROR: 0x82B73A88
		return;
	case 114:
		// ERROR: 0x82B73A88
		return;
	case 115:
		// ERROR: 0x82B73A88
		return;
	case 116:
		// ERROR: 0x82B73A88
		return;
	case 117:
		// ERROR: 0x82B73A88
		return;
	case 118:
		// ERROR: 0x82B73A88
		return;
	case 119:
		// ERROR: 0x82B73A88
		return;
	case 120:
		// ERROR: 0x82B73A88
		return;
	case 121:
		// ERROR: 0x82B73A88
		return;
	case 122:
		// ERROR: 0x82B73A88
		return;
	case 123:
		// ERROR: 0x82B73A88
		return;
	case 124:
		// ERROR: 0x82B73A88
		return;
	case 125:
		// ERROR: 0x82B73A88
		return;
	case 126:
		// ERROR: 0x82B73A88
		return;
	case 127:
		// ERROR: 0x82B73A88
		return;
	case 128:
		// ERROR: 0x82B73A88
		return;
	case 129:
		// ERROR: 0x82B73A88
		return;
	case 130:
		// ERROR: 0x82B73A88
		return;
	case 131:
		// ERROR: 0x82B73A88
		return;
	case 132:
		// ERROR: 0x82B73A88
		return;
	case 133:
		// ERROR: 0x82B73A88
		return;
	case 134:
		// ERROR: 0x82B73A88
		return;
	case 135:
		// ERROR: 0x82B720A4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B71E30"))) PPC_WEAK_FUNC(sub_82B71E30);
PPC_FUNC_IMPL(__imp__sub_82B71E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,8284(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8284);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,8272(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8272);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,8296(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8296);
	// lwz r21,8308(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8308);
	// lwz r21,8320(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8320);
	// lwz r21,8332(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8332);
	// lwz r21,8344(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8344);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,8356(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8356);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-25088
	ctx.r3.s64 = ctx.r11.s64 + -25088;
	// blr 
	return;
}

