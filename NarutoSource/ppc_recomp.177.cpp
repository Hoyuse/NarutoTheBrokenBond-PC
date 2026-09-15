#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B7205C"))) PPC_WEAK_FUNC(sub_82B7205C);
PPC_FUNC_IMPL(__imp__sub_82B7205C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,28952
	ctx.r3.s64 = ctx.r11.s64 + 28952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72068"))) PPC_WEAK_FUNC(sub_82B72068);
PPC_FUNC_IMPL(__imp__sub_82B72068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-10592
	ctx.r3.s64 = ctx.r11.s64 + -10592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72074"))) PPC_WEAK_FUNC(sub_82B72074);
PPC_FUNC_IMPL(__imp__sub_82B72074) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-10912
	ctx.r3.s64 = ctx.r11.s64 + -10912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72080"))) PPC_WEAK_FUNC(sub_82B72080);
PPC_FUNC_IMPL(__imp__sub_82B72080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7208C"))) PPC_WEAK_FUNC(sub_82B7208C);
PPC_FUNC_IMPL(__imp__sub_82B7208C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72098"))) PPC_WEAK_FUNC(sub_82B72098);
PPC_FUNC_IMPL(__imp__sub_82B72098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,26824
	ctx.r3.s64 = ctx.r11.s64 + 26824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B720A4"))) PPC_WEAK_FUNC(sub_82B720A4);
PPC_FUNC_IMPL(__imp__sub_82B720A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r3,r11,-15504
	ctx.r3.s64 = ctx.r11.s64 + -15504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B720B0"))) PPC_WEAK_FUNC(sub_82B720B0);
PPC_FUNC_IMPL(__imp__sub_82B720B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r3,r11,-15600
	ctx.r3.s64 = ctx.r11.s64 + -15600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B720BC"))) PPC_WEAK_FUNC(sub_82B720BC);
PPC_FUNC_IMPL(__imp__sub_82B720BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,24221
	ctx.r11.u64 = ctx.r11.u64 | 24221;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72120
	if (ctx.cr6.gt) goto loc_82B72120;
	// beq cr6,0x82b72114
	if (ctx.cr6.eq) goto loc_82B72114;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,23771
	ctx.r10.u64 = ctx.r11.u64 | 23771;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72108
	if (ctx.cr0.eq) goto loc_82B72108;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b720fc
	if (ctx.cr6.eq) goto loc_82B720FC;
	// cmplwi cr6,r11,449
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 449, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,30688
	ctx.r3.s64 = ctx.r11.s64 + 30688;
	// blr 
	return;
loc_82B720FC:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,26944
	ctx.r3.s64 = ctx.r11.s64 + 26944;
	// blr 
	return;
loc_82B72108:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,27800
	ctx.r3.s64 = ctx.r11.s64 + 27800;
	// blr 
	return;
loc_82B72114:
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-7840
	ctx.r3.s64 = ctx.r11.s64 + -7840;
	// blr 
	return;
loc_82B72120:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,24222
	ctx.r10.u64 = ctx.r11.u64 | 24222;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72158
	if (ctx.cr0.eq) goto loc_82B72158;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b7214c
	if (ctx.cr6.eq) goto loc_82B7214C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,19336
	ctx.r3.s64 = ctx.r11.s64 + 19336;
	// blr 
	return;
loc_82B7214C:
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-32024
	ctx.r3.s64 = ctx.r11.s64 + -32024;
	// blr 
	return;
loc_82B72158:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,15240
	ctx.r3.s64 = ctx.r11.s64 + 15240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72164"))) PPC_WEAK_FUNC(sub_82B72164);
PPC_FUNC_IMPL(__imp__sub_82B72164) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,31808
	ctx.r3.s64 = ctx.r11.s64 + 31808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72170"))) PPC_WEAK_FUNC(sub_82B72170);
PPC_FUNC_IMPL(__imp__sub_82B72170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,24510
	ctx.r11.u64 = ctx.r11.u64 | 24510;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b725f0
	if (ctx.cr6.gt) {
		sub_82B725F0(ctx, base);
		return;
	}
	// beq cr6,0x82b725e4
	if (ctx.cr6.eq) {
		sub_82B725E4(ctx, base);
		return;
	}
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-24245
	ctx.r11.s64 = ctx.r11.s64 + -24245;
	// cmplwi cr6,r11,245
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 245, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,8620
	ctx.r12.s64 = ctx.r12.s64 + 8620;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B72584
		return;
	case 1:
		// ERROR: 0x82B72590
		return;
	case 2:
		// ERROR: 0x82B7259C
		return;
	case 3:
		// ERROR: 0x82B725A8
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
		// ERROR: 0x82B725C0
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
		// ERROR: 0x82B725B4
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
		// ERROR: 0x82B73A88
		return;
	case 218:
		// ERROR: 0x82B73A88
		return;
	case 219:
		// ERROR: 0x82B73A88
		return;
	case 220:
		// ERROR: 0x82B73A88
		return;
	case 221:
		// ERROR: 0x82B73A88
		return;
	case 222:
		// ERROR: 0x82B73A88
		return;
	case 223:
		// ERROR: 0x82B73A88
		return;
	case 224:
		// ERROR: 0x82B73A88
		return;
	case 225:
		// ERROR: 0x82B73A88
		return;
	case 226:
		// ERROR: 0x82B73A88
		return;
	case 227:
		// ERROR: 0x82B73A88
		return;
	case 228:
		// ERROR: 0x82B73A88
		return;
	case 229:
		// ERROR: 0x82B73A88
		return;
	case 230:
		// ERROR: 0x82B73A88
		return;
	case 231:
		// ERROR: 0x82B73A88
		return;
	case 232:
		// ERROR: 0x82B73A88
		return;
	case 233:
		// ERROR: 0x82B73A88
		return;
	case 234:
		// ERROR: 0x82B73A88
		return;
	case 235:
		// ERROR: 0x82B73A88
		return;
	case 236:
		// ERROR: 0x82B73A88
		return;
	case 237:
		// ERROR: 0x82B73A88
		return;
	case 238:
		// ERROR: 0x82B73A88
		return;
	case 239:
		// ERROR: 0x82B73A88
		return;
	case 240:
		// ERROR: 0x82B73A88
		return;
	case 241:
		// ERROR: 0x82B73A88
		return;
	case 242:
		// ERROR: 0x82B73A88
		return;
	case 243:
		// ERROR: 0x82B725CC
		return;
	case 244:
		// ERROR: 0x82B73A88
		return;
	case 245:
		// ERROR: 0x82B725D8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B721AC"))) PPC_WEAK_FUNC(sub_82B721AC);
PPC_FUNC_IMPL(__imp__sub_82B721AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,9604(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9604);
	// lwz r21,9616(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9616);
	// lwz r21,9628(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9628);
	// lwz r21,9640(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9640);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,9664(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9664);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,9652(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9652);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,9676(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9676);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,9688(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9688);
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-7520
	ctx.r3.s64 = ctx.r11.s64 + -7520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72590"))) PPC_WEAK_FUNC(sub_82B72590);
PPC_FUNC_IMPL(__imp__sub_82B72590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,15472
	ctx.r3.s64 = ctx.r11.s64 + 15472;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7259C"))) PPC_WEAK_FUNC(sub_82B7259C);
PPC_FUNC_IMPL(__imp__sub_82B7259C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-31784
	ctx.r3.s64 = ctx.r11.s64 + -31784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B725A8"))) PPC_WEAK_FUNC(sub_82B725A8);
PPC_FUNC_IMPL(__imp__sub_82B725A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B725B4"))) PPC_WEAK_FUNC(sub_82B725B4);
PPC_FUNC_IMPL(__imp__sub_82B725B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r11,-8544
	ctx.r3.s64 = ctx.r11.s64 + -8544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B725C0"))) PPC_WEAK_FUNC(sub_82B725C0);
PPC_FUNC_IMPL(__imp__sub_82B725C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r3,r11,-14232
	ctx.r3.s64 = ctx.r11.s64 + -14232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B725CC"))) PPC_WEAK_FUNC(sub_82B725CC);
PPC_FUNC_IMPL(__imp__sub_82B725CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B725D8"))) PPC_WEAK_FUNC(sub_82B725D8);
PPC_FUNC_IMPL(__imp__sub_82B725D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,6672
	ctx.r3.s64 = ctx.r11.s64 + 6672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B725E4"))) PPC_WEAK_FUNC(sub_82B725E4);
PPC_FUNC_IMPL(__imp__sub_82B725E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,24976
	ctx.r3.s64 = ctx.r11.s64 + 24976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B725F0"))) PPC_WEAK_FUNC(sub_82B725F0);
PPC_FUNC_IMPL(__imp__sub_82B725F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,27087
	ctx.r11.u64 = ctx.r11.u64 | 27087;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72654
	if (ctx.cr6.gt) goto loc_82B72654;
	// beq cr6,0x82b72648
	if (ctx.cr6.eq) goto loc_82B72648;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,24511
	ctx.r10.u64 = ctx.r11.u64 | 24511;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b7263c
	if (ctx.cr0.eq) goto loc_82B7263C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82b72630
	if (ctx.cr6.eq) goto loc_82B72630;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// blr 
	return;
loc_82B72630:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,22064
	ctx.r3.s64 = ctx.r11.s64 + 22064;
	// blr 
	return;
loc_82B7263C:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,2520
	ctx.r3.s64 = ctx.r11.s64 + 2520;
	// blr 
	return;
loc_82B72648:
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// blr 
	return;
loc_82B72654:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,27088
	ctx.r10.u64 = ctx.r11.u64 | 27088;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b7268c
	if (ctx.cr0.eq) goto loc_82B7268C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b72680
	if (ctx.cr6.eq) goto loc_82B72680;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r3,r11,21144
	ctx.r3.s64 = ctx.r11.s64 + 21144;
	// blr 
	return;
loc_82B72680:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-3768
	ctx.r3.s64 = ctx.r11.s64 + -3768;
	// blr 
	return;
loc_82B7268C:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-20480
	ctx.r3.s64 = ctx.r11.s64 + -20480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72698"))) PPC_WEAK_FUNC(sub_82B72698);
PPC_FUNC_IMPL(__imp__sub_82B72698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B726A4"))) PPC_WEAK_FUNC(sub_82B726A4);
PPC_FUNC_IMPL(__imp__sub_82B726A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,27359
	ctx.r11.u64 = ctx.r11.u64 | 27359;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72ab8
	if (ctx.cr6.gt) {
		sub_82B72AB8(ctx, base);
		return;
	}
	// beq cr6,0x82b72aac
	if (ctx.cr6.eq) {
		sub_82B72AAC(ctx, base);
		return;
	}
	// addis r11,r3,25088
	ctx.r11.s64 = ctx.r3.s64 + 1644167168;
	// addi r11,r11,-27093
	ctx.r11.s64 = ctx.r11.s64 + -27093;
	// cmplwi cr6,r11,194
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 194, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,9952
	ctx.r12.s64 = ctx.r12.s64 + 9952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B72A64
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
		// ERROR: 0x82B72A70
		return;
	case 54:
		// ERROR: 0x82B72A7C
		return;
	case 55:
		// ERROR: 0x82B72A88
		return;
	case 56:
		// ERROR: 0x82B72A94
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
		// ERROR: 0x82B72AA0
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
		// ERROR: 0x82B72A28
		return;
	case 180:
		// ERROR: 0x82B72A34
		return;
	case 181:
		// ERROR: 0x82B72A40
		return;
	case 182:
		// ERROR: 0x82B72A4C
		return;
	case 183:
		// ERROR: 0x82B72A58
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
		// ERROR: 0x82B729EC
		return;
	case 191:
		// ERROR: 0x82B729F8
		return;
	case 192:
		// ERROR: 0x82B72A04
		return;
	case 193:
		// ERROR: 0x82B72A10
		return;
	case 194:
		// ERROR: 0x82B72A1C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B726E0"))) PPC_WEAK_FUNC(sub_82B726E0);
PPC_FUNC_IMPL(__imp__sub_82B726E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,10852(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10852);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,10864(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10864);
	// lwz r21,10876(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10876);
	// lwz r21,10888(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10888);
	// lwz r21,10900(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10900);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,10912(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10912);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,10792(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10792);
	// lwz r21,10804(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10804);
	// lwz r21,10816(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10816);
	// lwz r21,10828(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10828);
	// lwz r21,10840(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10840);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,10732(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10732);
	// lwz r21,10744(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10744);
	// lwz r21,10756(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10756);
	// lwz r21,10768(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10768);
	// lwz r21,10780(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10780);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B729F8"))) PPC_WEAK_FUNC(sub_82B729F8);
PPC_FUNC_IMPL(__imp__sub_82B729F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-25824
	ctx.r3.s64 = ctx.r11.s64 + -25824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A04"))) PPC_WEAK_FUNC(sub_82B72A04);
PPC_FUNC_IMPL(__imp__sub_82B72A04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,14368
	ctx.r3.s64 = ctx.r11.s64 + 14368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A10"))) PPC_WEAK_FUNC(sub_82B72A10);
PPC_FUNC_IMPL(__imp__sub_82B72A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,2032
	ctx.r3.s64 = ctx.r11.s64 + 2032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A1C"))) PPC_WEAK_FUNC(sub_82B72A1C);
PPC_FUNC_IMPL(__imp__sub_82B72A1C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-29728
	ctx.r3.s64 = ctx.r11.s64 + -29728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A28"))) PPC_WEAK_FUNC(sub_82B72A28);
PPC_FUNC_IMPL(__imp__sub_82B72A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-28760
	ctx.r3.s64 = ctx.r11.s64 + -28760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A34"))) PPC_WEAK_FUNC(sub_82B72A34);
PPC_FUNC_IMPL(__imp__sub_82B72A34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,14040
	ctx.r3.s64 = ctx.r11.s64 + 14040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A40"))) PPC_WEAK_FUNC(sub_82B72A40);
PPC_FUNC_IMPL(__imp__sub_82B72A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A4C"))) PPC_WEAK_FUNC(sub_82B72A4C);
PPC_FUNC_IMPL(__imp__sub_82B72A4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-28808
	ctx.r3.s64 = ctx.r11.s64 + -28808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A58"))) PPC_WEAK_FUNC(sub_82B72A58);
PPC_FUNC_IMPL(__imp__sub_82B72A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A64"))) PPC_WEAK_FUNC(sub_82B72A64);
PPC_FUNC_IMPL(__imp__sub_82B72A64) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A70"))) PPC_WEAK_FUNC(sub_82B72A70);
PPC_FUNC_IMPL(__imp__sub_82B72A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-1920
	ctx.r3.s64 = ctx.r11.s64 + -1920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A7C"))) PPC_WEAK_FUNC(sub_82B72A7C);
PPC_FUNC_IMPL(__imp__sub_82B72A7C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,-16528
	ctx.r3.s64 = ctx.r11.s64 + -16528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A88"))) PPC_WEAK_FUNC(sub_82B72A88);
PPC_FUNC_IMPL(__imp__sub_82B72A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,-8648
	ctx.r3.s64 = ctx.r11.s64 + -8648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72A94"))) PPC_WEAK_FUNC(sub_82B72A94);
PPC_FUNC_IMPL(__imp__sub_82B72A94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72AA0"))) PPC_WEAK_FUNC(sub_82B72AA0);
PPC_FUNC_IMPL(__imp__sub_82B72AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-9504
	ctx.r3.s64 = ctx.r11.s64 + -9504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72AAC"))) PPC_WEAK_FUNC(sub_82B72AAC);
PPC_FUNC_IMPL(__imp__sub_82B72AAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,28600
	ctx.r3.s64 = ctx.r11.s64 + 28600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72AB8"))) PPC_WEAK_FUNC(sub_82B72AB8);
PPC_FUNC_IMPL(__imp__sub_82B72AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,33545
	ctx.r11.u64 = ctx.r11.u64 | 33545;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72b80
	if (ctx.cr6.gt) goto loc_82B72B80;
	// beq cr6,0x82b72b74
	if (ctx.cr6.eq) goto loc_82B72B74;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,33458
	ctx.r11.u64 = ctx.r11.u64 | 33458;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72b30
	if (ctx.cr6.gt) goto loc_82B72B30;
	// beq cr6,0x82b72b24
	if (ctx.cr6.eq) goto loc_82B72B24;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,27383
	ctx.r10.u64 = ctx.r11.u64 | 27383;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72b18
	if (ctx.cr0.eq) goto loc_82B72B18;
	// cmplwi cr6,r11,922
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 922, ctx.xer);
	// beq cr6,0x82b72b0c
	if (ctx.cr6.eq) goto loc_82B72B0C;
	// cmplwi cr6,r11,923
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 923, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-2760
	ctx.r3.s64 = ctx.r11.s64 + -2760;
	// blr 
	return;
loc_82B72B0C:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,13640
	ctx.r3.s64 = ctx.r11.s64 + 13640;
	// blr 
	return;
loc_82B72B18:
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,11152
	ctx.r3.s64 = ctx.r11.s64 + 11152;
	// blr 
	return;
loc_82B72B24:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,25944
	ctx.r3.s64 = ctx.r11.s64 + 25944;
	// blr 
	return;
loc_82B72B30:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,33482
	ctx.r10.u64 = ctx.r11.u64 | 33482;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72b68
	if (ctx.cr0.eq) goto loc_82B72B68;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b72b5c
	if (ctx.cr6.eq) goto loc_82B72B5C;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// blr 
	return;
loc_82B72B5C:
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-29512
	ctx.r3.s64 = ctx.r11.s64 + -29512;
	// blr 
	return;
loc_82B72B68:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
	// blr 
	return;
loc_82B72B74:
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-24952
	ctx.r3.s64 = ctx.r11.s64 + -24952;
	// blr 
	return;
loc_82B72B80:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,33561
	ctx.r11.u64 = ctx.r11.u64 | 33561;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72be4
	if (ctx.cr6.gt) goto loc_82B72BE4;
	// beq cr6,0x82b72bd8
	if (ctx.cr6.eq) goto loc_82B72BD8;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,33546
	ctx.r10.u64 = ctx.r11.u64 | 33546;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72bcc
	if (ctx.cr0.eq) goto loc_82B72BCC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b72bc0
	if (ctx.cr6.eq) goto loc_82B72BC0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// blr 
	return;
loc_82B72BC0:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// blr 
	return;
loc_82B72BCC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// blr 
	return;
loc_82B72BD8:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// blr 
	return;
loc_82B72BE4:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,33562
	ctx.r10.u64 = ctx.r11.u64 | 33562;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72c1c
	if (ctx.cr0.eq) goto loc_82B72C1C;
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// beq cr6,0x82b72c10
	if (ctx.cr6.eq) goto loc_82B72C10;
	// cmplwi cr6,r11,832
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 832, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r3,r11,-9728
	ctx.r3.s64 = ctx.r11.s64 + -9728;
	// blr 
	return;
loc_82B72C10:
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// addi r3,r11,-23760
	ctx.r3.s64 = ctx.r11.s64 + -23760;
	// blr 
	return;
loc_82B72C1C:
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r3,r11,27968
	ctx.r3.s64 = ctx.r11.s64 + 27968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72C28"))) PPC_WEAK_FUNC(sub_82B72C28);
PPC_FUNC_IMPL(__imp__sub_82B72C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r3,r11,-23960
	ctx.r3.s64 = ctx.r11.s64 + -23960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72C34"))) PPC_WEAK_FUNC(sub_82B72C34);
PPC_FUNC_IMPL(__imp__sub_82B72C34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,36110
	ctx.r11.u64 = ctx.r11.u64 | 36110;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b734e8
	if (ctx.cr6.gt) {
		sub_82B734E8(ctx, base);
		return;
	}
	// beq cr6,0x82b734dc
	if (ctx.cr6.eq) {
		sub_82B734DC(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,35561
	ctx.r11.u64 = ctx.r11.u64 | 35561;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72ec8
	if (ctx.cr6.gt) {
		sub_82B72EC8(ctx, base);
		return;
	}
	// beq cr6,0x82b72ebc
	if (ctx.cr6.eq) {
		sub_82B72EBC(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,35106
	ctx.r11.u64 = ctx.r11.u64 | 35106;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72e14
	if (ctx.cr6.gt) {
		sub_82B72E14(ctx, base);
		return;
	}
	// beq cr6,0x82b72e08
	if (ctx.cr6.eq) {
		sub_82B72E08(ctx, base);
		return;
	}
	// addis r11,r3,25087
	ctx.r11.s64 = ctx.r3.s64 + 1644101632;
	// addi r11,r11,30575
	ctx.r11.s64 = ctx.r11.s64 + 30575;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,11416
	ctx.r12.s64 = ctx.r12.s64 + 11416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B72DA8
		return;
	case 1:
		// ERROR: 0x82B72DB4
		return;
	case 2:
		// ERROR: 0x82B72DC0
		return;
	case 3:
		// ERROR: 0x82B72DCC
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
		// ERROR: 0x82B72DD8
		return;
	case 19:
		// ERROR: 0x82B72DE4
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
		// ERROR: 0x82B72DF0
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
		// ERROR: 0x82B72DFC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B72C98"))) PPC_WEAK_FUNC(sub_82B72C98);
PPC_FUNC_IMPL(__imp__sub_82B72C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,11688(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11688);
	// lwz r21,11700(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11700);
	// lwz r21,11712(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11712);
	// lwz r21,11724(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11724);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,11736(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11736);
	// lwz r21,11748(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11748);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,11760(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11760);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,11772(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11772);
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72DB4"))) PPC_WEAK_FUNC(sub_82B72DB4);
PPC_FUNC_IMPL(__imp__sub_82B72DB4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,14960
	ctx.r3.s64 = ctx.r11.s64 + 14960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72DC0"))) PPC_WEAK_FUNC(sub_82B72DC0);
PPC_FUNC_IMPL(__imp__sub_82B72DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,18880
	ctx.r3.s64 = ctx.r11.s64 + 18880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72DCC"))) PPC_WEAK_FUNC(sub_82B72DCC);
PPC_FUNC_IMPL(__imp__sub_82B72DCC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,-28992
	ctx.r3.s64 = ctx.r11.s64 + -28992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72DD8"))) PPC_WEAK_FUNC(sub_82B72DD8);
PPC_FUNC_IMPL(__imp__sub_82B72DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,3624
	ctx.r3.s64 = ctx.r11.s64 + 3624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72DE4"))) PPC_WEAK_FUNC(sub_82B72DE4);
PPC_FUNC_IMPL(__imp__sub_82B72DE4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,17320
	ctx.r3.s64 = ctx.r11.s64 + 17320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72DF0"))) PPC_WEAK_FUNC(sub_82B72DF0);
PPC_FUNC_IMPL(__imp__sub_82B72DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,6320
	ctx.r3.s64 = ctx.r11.s64 + 6320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72DFC"))) PPC_WEAK_FUNC(sub_82B72DFC);
PPC_FUNC_IMPL(__imp__sub_82B72DFC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,7200
	ctx.r3.s64 = ctx.r11.s64 + 7200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72E08"))) PPC_WEAK_FUNC(sub_82B72E08);
PPC_FUNC_IMPL(__imp__sub_82B72E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,-15096
	ctx.r3.s64 = ctx.r11.s64 + -15096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72E14"))) PPC_WEAK_FUNC(sub_82B72E14);
PPC_FUNC_IMPL(__imp__sub_82B72E14) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,35110
	ctx.r11.u64 = ctx.r11.u64 | 35110;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b72e78
	if (ctx.cr6.gt) goto loc_82B72E78;
	// beq cr6,0x82b72e6c
	if (ctx.cr6.eq) goto loc_82B72E6C;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,35107
	ctx.r10.u64 = ctx.r11.u64 | 35107;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72e60
	if (ctx.cr0.eq) goto loc_82B72E60;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b72e54
	if (ctx.cr6.eq) goto loc_82B72E54;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r11,-15280
	ctx.r3.s64 = ctx.r11.s64 + -15280;
	// blr 
	return;
loc_82B72E54:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,17928
	ctx.r3.s64 = ctx.r11.s64 + 17928;
	// blr 
	return;
loc_82B72E60:
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
	// blr 
	return;
loc_82B72E6C:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,24736
	ctx.r3.s64 = ctx.r11.s64 + 24736;
	// blr 
	return;
loc_82B72E78:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,35115
	ctx.r10.u64 = ctx.r11.u64 | 35115;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b72eb0
	if (ctx.cr0.eq) goto loc_82B72EB0;
	// cmplwi cr6,r11,444
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 444, ctx.xer);
	// beq cr6,0x82b72ea4
	if (ctx.cr6.eq) goto loc_82B72EA4;
	// cmplwi cr6,r11,445
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 445, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r3,r11,17064
	ctx.r3.s64 = ctx.r11.s64 + 17064;
	// blr 
	return;
loc_82B72EA4:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r11,15552
	ctx.r3.s64 = ctx.r11.s64 + 15552;
	// blr 
	return;
loc_82B72EB0:
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-6344
	ctx.r3.s64 = ctx.r11.s64 + -6344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72EBC"))) PPC_WEAK_FUNC(sub_82B72EBC);
PPC_FUNC_IMPL(__imp__sub_82B72EBC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,3384
	ctx.r3.s64 = ctx.r11.s64 + 3384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B72EC8"))) PPC_WEAK_FUNC(sub_82B72EC8);
PPC_FUNC_IMPL(__imp__sub_82B72EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,35721
	ctx.r11.u64 = ctx.r11.u64 | 35721;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b731ec
	if (ctx.cr6.gt) {
		sub_82B731EC(ctx, base);
		return;
	}
	// beq cr6,0x82b731e0
	if (ctx.cr6.eq) {
		sub_82B731E0(ctx, base);
		return;
	}
	// addis r11,r3,25087
	ctx.r11.s64 = ctx.r3.s64 + 1644101632;
	// addi r11,r11,29974
	ctx.r11.s64 = ctx.r11.s64 + 29974;
	// cmplwi cr6,r11,158
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 158, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,12036
	ctx.r12.s64 = ctx.r12.s64 + 12036;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B731B0
		return;
	case 1:
		// ERROR: 0x82B731BC
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
		// ERROR: 0x82B731C8
		return;
	case 26:
		// ERROR: 0x82B73A88
		return;
	case 27:
		// ERROR: 0x82B731D4
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
		// ERROR: 0x82B73180
		return;
	case 156:
		// ERROR: 0x82B7318C
		return;
	case 157:
		// ERROR: 0x82B73198
		return;
	case 158:
		// ERROR: 0x82B731A4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B72F04"))) PPC_WEAK_FUNC(sub_82B72F04);
PPC_FUNC_IMPL(__imp__sub_82B72F04) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,12720(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12720);
	// lwz r21,12732(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12732);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,12744(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12744);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,12756(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12756);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,12672(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12672);
	// lwz r21,12684(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12684);
	// lwz r21,12696(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12696);
	// lwz r21,12708(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12708);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-30384
	ctx.r3.s64 = ctx.r11.s64 + -30384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7318C"))) PPC_WEAK_FUNC(sub_82B7318C);
PPC_FUNC_IMPL(__imp__sub_82B7318C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-21328
	ctx.r3.s64 = ctx.r11.s64 + -21328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73198"))) PPC_WEAK_FUNC(sub_82B73198);
PPC_FUNC_IMPL(__imp__sub_82B73198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,3552
	ctx.r3.s64 = ctx.r11.s64 + 3552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B731A4"))) PPC_WEAK_FUNC(sub_82B731A4);
PPC_FUNC_IMPL(__imp__sub_82B731A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-30432
	ctx.r3.s64 = ctx.r11.s64 + -30432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B731B0"))) PPC_WEAK_FUNC(sub_82B731B0);
PPC_FUNC_IMPL(__imp__sub_82B731B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B731BC"))) PPC_WEAK_FUNC(sub_82B731BC);
PPC_FUNC_IMPL(__imp__sub_82B731BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B731C8"))) PPC_WEAK_FUNC(sub_82B731C8);
PPC_FUNC_IMPL(__imp__sub_82B731C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-28848
	ctx.r3.s64 = ctx.r11.s64 + -28848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B731D4"))) PPC_WEAK_FUNC(sub_82B731D4);
PPC_FUNC_IMPL(__imp__sub_82B731D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B731E0"))) PPC_WEAK_FUNC(sub_82B731E0);
PPC_FUNC_IMPL(__imp__sub_82B731E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B731EC"))) PPC_WEAK_FUNC(sub_82B731EC);
PPC_FUNC_IMPL(__imp__sub_82B731EC) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,25087
	ctx.r11.s64 = ctx.r3.s64 + 1644101632;
	// addi r11,r11,29814
	ctx.r11.s64 = ctx.r11.s64 + 29814;
	// cmplwi cr6,r11,156
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 156, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,12820
	ctx.r12.s64 = ctx.r12.s64 + 12820;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B73488
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
		// ERROR: 0x82B734D0
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
		// ERROR: 0x82B73494
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
		// ERROR: 0x82B734A0
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
		// ERROR: 0x82B734AC
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
		// ERROR: 0x82B734B8
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
		// ERROR: 0x82B734C4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B73214"))) PPC_WEAK_FUNC(sub_82B73214);
PPC_FUNC_IMPL(__imp__sub_82B73214) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,13448(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13448);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,13520(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13520);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,13460(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13460);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,13472(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13472);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,13484(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13484);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,13496(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13496);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,13508(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13508);
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73494"))) PPC_WEAK_FUNC(sub_82B73494);
PPC_FUNC_IMPL(__imp__sub_82B73494) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,-29832
	ctx.r3.s64 = ctx.r11.s64 + -29832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B734A0"))) PPC_WEAK_FUNC(sub_82B734A0);
PPC_FUNC_IMPL(__imp__sub_82B734A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,31896
	ctx.r3.s64 = ctx.r11.s64 + 31896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B734AC"))) PPC_WEAK_FUNC(sub_82B734AC);
PPC_FUNC_IMPL(__imp__sub_82B734AC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B734B8"))) PPC_WEAK_FUNC(sub_82B734B8);
PPC_FUNC_IMPL(__imp__sub_82B734B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,31320
	ctx.r3.s64 = ctx.r11.s64 + 31320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B734C4"))) PPC_WEAK_FUNC(sub_82B734C4);
PPC_FUNC_IMPL(__imp__sub_82B734C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B734D0"))) PPC_WEAK_FUNC(sub_82B734D0);
PPC_FUNC_IMPL(__imp__sub_82B734D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,17488
	ctx.r3.s64 = ctx.r11.s64 + 17488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B734DC"))) PPC_WEAK_FUNC(sub_82B734DC);
PPC_FUNC_IMPL(__imp__sub_82B734DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-14920
	ctx.r3.s64 = ctx.r11.s64 + -14920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B734E8"))) PPC_WEAK_FUNC(sub_82B734E8);
PPC_FUNC_IMPL(__imp__sub_82B734E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-13312
	ctx.r11.s64 = -872415232;
	// ori r11,r11,137
	ctx.r11.u64 = ctx.r11.u64 | 137;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b7393c
	if (ctx.cr6.gt) {
		sub_82B7393C(ctx, base);
		return;
	}
	// beq cr6,0x82b73930
	if (ctx.cr6.eq) {
		sub_82B73930(ctx, base);
		return;
	}
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r11,r11,37458
	ctx.r11.u64 = ctx.r11.u64 | 37458;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b73880
	if (ctx.cr6.gt) {
		sub_82B73880(ctx, base);
		return;
	}
	// beq cr6,0x82b73874
	if (ctx.cr6.eq) {
		sub_82B73874(ctx, base);
		return;
	}
	// addis r11,r3,25087
	ctx.r11.s64 = ctx.r3.s64 + 1644101632;
	// addi r11,r11,28263
	ctx.r11.s64 = ctx.r11.s64 + 28263;
	// cmplwi cr6,r11,182
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 182, ctx.xer);
	// bgt cr6,0x82b73a88
	if (ctx.cr6.gt) {
		// ERROR 82B73A88
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,13624
	ctx.r12.s64 = ctx.r12.s64 + 13624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B73844
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
		// ERROR: 0x82B7385C
		return;
	case 7:
		// ERROR: 0x82B73A88
		return;
	case 8:
		// ERROR: 0x82B73868
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
		// ERROR: 0x82B7382C
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
		// ERROR: 0x82B73850
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
		// ERROR: 0x82B73814
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
		// ERROR: 0x82B73838
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
		// ERROR: 0x82B73820
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B73538"))) PPC_WEAK_FUNC(sub_82B73538);
PPC_FUNC_IMPL(__imp__sub_82B73538) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,14404(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14404);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14428(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14428);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14440(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14440);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14380(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14380);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14416(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14416);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14356(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14356);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14392(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14392);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14984(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14984);
	// lwz r21,14368(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14368);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73820"))) PPC_WEAK_FUNC(sub_82B73820);
PPC_FUNC_IMPL(__imp__sub_82B73820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7382C"))) PPC_WEAK_FUNC(sub_82B7382C);
PPC_FUNC_IMPL(__imp__sub_82B7382C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73838"))) PPC_WEAK_FUNC(sub_82B73838);
PPC_FUNC_IMPL(__imp__sub_82B73838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-9640
	ctx.r3.s64 = ctx.r11.s64 + -9640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73844"))) PPC_WEAK_FUNC(sub_82B73844);
PPC_FUNC_IMPL(__imp__sub_82B73844) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3112
	ctx.r3.s64 = ctx.r11.s64 + -3112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73850"))) PPC_WEAK_FUNC(sub_82B73850);
PPC_FUNC_IMPL(__imp__sub_82B73850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-15784
	ctx.r3.s64 = ctx.r11.s64 + -15784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7385C"))) PPC_WEAK_FUNC(sub_82B7385C);
PPC_FUNC_IMPL(__imp__sub_82B7385C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-25136
	ctx.r3.s64 = ctx.r11.s64 + -25136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73868"))) PPC_WEAK_FUNC(sub_82B73868);
PPC_FUNC_IMPL(__imp__sub_82B73868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73874"))) PPC_WEAK_FUNC(sub_82B73874);
PPC_FUNC_IMPL(__imp__sub_82B73874) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-12624
	ctx.r3.s64 = ctx.r11.s64 + -12624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73880"))) PPC_WEAK_FUNC(sub_82B73880);
PPC_FUNC_IMPL(__imp__sub_82B73880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-24320
	ctx.r11.s64 = -1593835520;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b738e4
	if (ctx.cr6.gt) goto loc_82B738E4;
	// beq cr6,0x82b738d8
	if (ctx.cr6.eq) goto loc_82B738D8;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r10,r11,40408
	ctx.r10.u64 = ctx.r11.u64 | 40408;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b738cc
	if (ctx.cr0.eq) goto loc_82B738CC;
	// cmplwi cr6,r11,1514
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1514, ctx.xer);
	// beq cr6,0x82b738c0
	if (ctx.cr6.eq) goto loc_82B738C0;
	// cmplwi cr6,r11,3157
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3157, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// blr 
	return;
loc_82B738C0:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-22616
	ctx.r3.s64 = ctx.r11.s64 + -22616;
	// blr 
	return;
loc_82B738CC:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,-26552
	ctx.r3.s64 = ctx.r11.s64 + -26552;
	// blr 
	return;
loc_82B738D8:
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r3,r11,3248
	ctx.r3.s64 = ctx.r11.s64 + 3248;
	// blr 
	return;
loc_82B738E4:
	// lis r11,-24320
	ctx.r11.s64 = -1593835520;
	// ori r10,r11,13
	ctx.r10.u64 = ctx.r11.u64 | 13;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b73924
	if (ctx.cr6.eq) goto loc_82B73924;
	// lis r11,-23808
	ctx.r11.s64 = -1560281088;
	// ori r10,r11,83
	ctx.r10.u64 = ctx.r11.u64 | 83;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b73918
	if (ctx.cr0.eq) goto loc_82B73918;
	// cmplwi cr6,r11,553
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 553, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) {
		// ERROR 82B73A88
		return;
	}
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-1688
	ctx.r3.s64 = ctx.r11.s64 + -1688;
	// blr 
	return;
loc_82B73918:
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// blr 
	return;
loc_82B73924:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// addi r3,r11,-18680
	ctx.r3.s64 = ctx.r11.s64 + -18680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73930"))) PPC_WEAK_FUNC(sub_82B73930);
PPC_FUNC_IMPL(__imp__sub_82B73930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,8000
	ctx.r3.s64 = ctx.r11.s64 + 8000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7393C"))) PPC_WEAK_FUNC(sub_82B7393C);
PPC_FUNC_IMPL(__imp__sub_82B7393C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-8192
	ctx.r11.s64 = -536870912;
	// ori r11,r11,6066
	ctx.r11.u64 = ctx.r11.u64 | 6066;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b73a04
	if (ctx.cr6.gt) goto loc_82B73A04;
	// beq cr6,0x82b739f8
	if (ctx.cr6.eq) goto loc_82B739F8;
	// lis r11,-8192
	ctx.r11.s64 = -536870912;
	// ori r11,r11,6056
	ctx.r11.u64 = ctx.r11.u64 | 6056;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b739b4
	if (ctx.cr6.gt) goto loc_82B739B4;
	// beq cr6,0x82b739a8
	if (ctx.cr6.eq) goto loc_82B739A8;
	// lis r11,-8192
	ctx.r11.s64 = -536870912;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b7399c
	if (ctx.cr0.eq) goto loc_82B7399C;
	// cmplwi cr6,r11,5929
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5929, ctx.xer);
	// beq cr6,0x82b73990
	if (ctx.cr6.eq) goto loc_82B73990;
	// cmplwi cr6,r11,5930
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5930, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) goto loc_82B73A88;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-496
	ctx.r3.s64 = ctx.r11.s64 + -496;
	// blr 
	return;
loc_82B73990:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// blr 
	return;
loc_82B7399C:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-15328
	ctx.r3.s64 = ctx.r11.s64 + -15328;
	// blr 
	return;
loc_82B739A8:
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// blr 
	return;
loc_82B739B4:
	// lis r11,-8192
	ctx.r11.s64 = -536870912;
	// ori r10,r11,6058
	ctx.r10.u64 = ctx.r11.u64 | 6058;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b739ec
	if (ctx.cr0.eq) goto loc_82B739EC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b739e0
	if (ctx.cr6.eq) goto loc_82B739E0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) goto loc_82B73A88;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,-23480
	ctx.r3.s64 = ctx.r11.s64 + -23480;
	// blr 
	return;
loc_82B739E0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,-23232
	ctx.r3.s64 = ctx.r11.s64 + -23232;
	// blr 
	return;
loc_82B739EC:
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// blr 
	return;
loc_82B739F8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,-23528
	ctx.r3.s64 = ctx.r11.s64 + -23528;
	// blr 
	return;
loc_82B73A04:
	// lis r11,-8192
	ctx.r11.s64 = -536870912;
	// ori r11,r11,6916
	ctx.r11.u64 = ctx.r11.u64 | 6916;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b73a68
	if (ctx.cr6.gt) goto loc_82B73A68;
	// beq cr6,0x82b73a5c
	if (ctx.cr6.eq) goto loc_82B73A5C;
	// lis r11,-8192
	ctx.r11.s64 = -536870912;
	// ori r10,r11,6179
	ctx.r10.u64 = ctx.r11.u64 | 6179;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b73a50
	if (ctx.cr0.eq) goto loc_82B73A50;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82b73a44
	if (ctx.cr6.eq) goto loc_82B73A44;
	// cmplwi cr6,r11,713
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 713, ctx.xer);
	// bne cr6,0x82b73a88
	if (!ctx.cr6.eq) goto loc_82B73A88;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// blr 
	return;
loc_82B73A44:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,32112
	ctx.r3.s64 = ctx.r11.s64 + 32112;
	// blr 
	return;
loc_82B73A50:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// blr 
	return;
loc_82B73A5C:
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r3,r11,3936
	ctx.r3.s64 = ctx.r11.s64 + 3936;
	// blr 
	return;
loc_82B73A68:
	// lis r11,-8192
	ctx.r11.s64 = -536870912;
	// ori r10,r11,6917
	ctx.r10.u64 = ctx.r11.u64 | 6917;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b73aa8
	if (ctx.cr0.eq) goto loc_82B73AA8;
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// beq cr6,0x82b73a9c
	if (ctx.cr6.eq) goto loc_82B73A9C;
	// cmplwi cr6,r11,253
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 253, ctx.xer);
	// beq cr6,0x82b73a90
	if (ctx.cr6.eq) goto loc_82B73A90;
loc_82B73A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B73A90:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,-23144
	ctx.r3.s64 = ctx.r11.s64 + -23144;
	// blr 
	return;
loc_82B73A9C:
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// blr 
	return;
loc_82B73AA8:
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r3,r11,22840
	ctx.r3.s64 = ctx.r11.s64 + 22840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73AB4"))) PPC_WEAK_FUNC(sub_82B73AB4);
PPC_FUNC_IMPL(__imp__sub_82B73AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B73AB8"))) PPC_WEAK_FUNC(sub_82B73AB8);
PPC_FUNC_IMPL(__imp__sub_82B73AB8) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82b73b20
	if (ctx.cr6.gt) {
		sub_82B73B20(ctx, base);
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,15072
	ctx.r12.s64 = ctx.r12.s64 + 15072;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B73B18
		return;
	case 1:
		// ERROR: 0x82B73B18
		return;
	case 2:
		// ERROR: 0x82B73B18
		return;
	case 3:
		// ERROR: 0x82B73B20
		return;
	case 4:
		// ERROR: 0x82B73B20
		return;
	case 5:
		// ERROR: 0x82B73B20
		return;
	case 6:
		// ERROR: 0x82B73B20
		return;
	case 7:
		// ERROR: 0x82B73B20
		return;
	case 8:
		// ERROR: 0x82B73B20
		return;
	case 9:
		// ERROR: 0x82B73B20
		return;
	case 10:
		// ERROR: 0x82B73B20
		return;
	case 11:
		// ERROR: 0x82B73B18
		return;
	case 12:
		// ERROR: 0x82B73B18
		return;
	case 13:
		// ERROR: 0x82B73B18
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B73AE0"))) PPC_WEAK_FUNC(sub_82B73AE0);
PPC_FUNC_IMPL(__imp__sub_82B73AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,15128(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15128);
	// lwz r21,15128(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15128);
	// lwz r21,15128(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15128);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15136(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15136);
	// lwz r21,15128(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15128);
	// lwz r21,15128(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15128);
	// lwz r21,15128(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15128);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73B20"))) PPC_WEAK_FUNC(sub_82B73B20);
PPC_FUNC_IMPL(__imp__sub_82B73B20) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73B28"))) PPC_WEAK_FUNC(sub_82B73B28);
PPC_FUNC_IMPL(__imp__sub_82B73B28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-39
	ctx.r11.s64 = ctx.r3.s64 + -39;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82b73b78
	if (ctx.cr6.gt) {
		sub_82B73B78(ctx, base);
		return;
	}
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,15180
	ctx.r12.s64 = ctx.r12.s64 + 15180;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82B73B70
		return;
	case 1:
		// ERROR: 0x82B73B70
		return;
	case 2:
		// ERROR: 0x82B73B78
		return;
	case 3:
		// ERROR: 0x82B73B70
		return;
	case 4:
		// ERROR: 0x82B73B70
		return;
	case 5:
		// ERROR: 0x82B73B78
		return;
	case 6:
		// ERROR: 0x82B73B78
		return;
	case 7:
		// ERROR: 0x82B73B78
		return;
	case 8:
		// ERROR: 0x82B73B70
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82B73B4C"))) PPC_WEAK_FUNC(sub_82B73B4C);
PPC_FUNC_IMPL(__imp__sub_82B73B4C) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,15216(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15216);
	// lwz r21,15216(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15216);
	// lwz r21,15224(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15224);
	// lwz r21,15216(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15216);
	// lwz r21,15216(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15216);
	// lwz r21,15224(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15224);
	// lwz r21,15224(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15224);
	// lwz r21,15224(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15224);
	// lwz r21,15216(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15216);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73B78"))) PPC_WEAK_FUNC(sub_82B73B78);
PPC_FUNC_IMPL(__imp__sub_82B73B78) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73B80"))) PPC_WEAK_FUNC(sub_82B73B80);
PPC_FUNC_IMPL(__imp__sub_82B73B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b73bbc
	if (ctx.cr6.eq) goto loc_82B73BBC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd500
	ctx.lr = 0x82B73BB0;
	sub_82BCD500(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82b73bbc
	if (ctx.cr6.eq) goto loc_82B73BBC;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82B73BBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73BD0"))) PPC_WEAK_FUNC(sub_82B73BD0);
PPC_FUNC_IMPL(__imp__sub_82B73BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// bne cr6,0x82b73c08
	if (!ctx.cr6.eq) goto loc_82B73C08;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b73c40
	if (ctx.cr6.eq) goto loc_82B73C40;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x82b73c40
	if (ctx.cr6.gt) goto loc_82B73C40;
loc_82B73BF4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B73C08:
	// cmpwi cr6,r3,47
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 47, ctx.xer);
	// bne cr6,0x82b73c40
	if (!ctx.cr6.eq) goto loc_82B73C40;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82b73bf4
	if (ctx.cr6.eq) goto loc_82B73BF4;
	// rlwinm r11,r4,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// lis r10,-4096
	ctx.r10.s64 = -268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b73bf4
	if (!ctx.cr6.eq) goto loc_82B73BF4;
	// clrlwi r4,r4,4
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B73C40:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82B73C50;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b73bf4
	if (ctx.cr6.eq) goto loc_82B73BF4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82B73C60;
	sub_82BCD500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73C70"))) PPC_WEAK_FUNC(sub_82B73C70);
PPC_FUNC_IMPL(__imp__sub_82B73C70) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73C78"))) PPC_WEAK_FUNC(sub_82B73C78);
PPC_FUNC_IMPL(__imp__sub_82B73C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b73cc8
	if (ctx.cr6.eq) goto loc_82B73CC8;
	// lwz r6,12480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// ble cr6,0x82b73ccc
	if (!ctx.cr6.gt) goto loc_82B73CCC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82B73CB4;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b73ccc
	if (ctx.cr6.eq) goto loc_82B73CCC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82B73CC4;
	sub_82BCD500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B73CC8:
	// lwz r6,12480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
loc_82B73CCC:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b73ce8
	if (!ctx.cr6.eq) goto loc_82B73CE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82b73d14
	goto loc_82B73D14;
loc_82B73CE8:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// ble cr6,0x82b73d10
	if (!ctx.cr6.gt) goto loc_82B73D10;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82B73CF8;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b73d10
	if (ctx.cr6.eq) goto loc_82B73D10;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82B73D08;
	sub_82BCD500(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x82b73d14
	goto loc_82B73D14;
loc_82B73D10:
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
loc_82B73D14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73D2C"))) PPC_WEAK_FUNC(sub_82B73D2C);
PPC_FUNC_IMPL(__imp__sub_82B73D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B73D30"))) PPC_WEAK_FUNC(sub_82B73D30);
PPC_FUNC_IMPL(__imp__sub_82B73D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,12480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b73d64
	if (!ctx.cr6.eq) goto loc_82B73D64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82b73d94
	goto loc_82B73D94;
loc_82B73D64:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// ble cr6,0x82b73d90
	if (!ctx.cr6.gt) goto loc_82B73D90;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82B73D74;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b73d90
	if (ctx.cr6.eq) goto loc_82B73D90;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82B73D84;
	sub_82BCD500(ctx, base);
	// lwz r6,12480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82b73d94
	goto loc_82B73D94;
loc_82B73D90:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82B73D94:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b73dac
	if (!ctx.cr6.eq) goto loc_82B73DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82b73dd8
	goto loc_82B73DD8;
loc_82B73DAC:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// ble cr6,0x82b73dd4
	if (!ctx.cr6.gt) goto loc_82B73DD4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82B73DBC;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b73dd4
	if (ctx.cr6.eq) goto loc_82B73DD4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82B73DCC;
	sub_82BCD500(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x82b73dd8
	goto loc_82B73DD8;
loc_82B73DD4:
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
loc_82B73DD8:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73DF4"))) PPC_WEAK_FUNC(sub_82B73DF4);
PPC_FUNC_IMPL(__imp__sub_82B73DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B73DF8"))) PPC_WEAK_FUNC(sub_82B73DF8);
PPC_FUNC_IMPL(__imp__sub_82B73DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82b73b28
	ctx.lr = 0x82B73E0C;
	sub_82B73B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b73e48
	if (ctx.cr6.eq) goto loc_82B73E48;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b73e30
	if (!ctx.cr6.eq) goto loc_82B73E30;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B73E30:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82b73bd0
	ctx.lr = 0x82B73E38;
	sub_82B73BD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B73E48:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73E5C"))) PPC_WEAK_FUNC(sub_82B73E5C);
PPC_FUNC_IMPL(__imp__sub_82B73E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B73E60"))) PPC_WEAK_FUNC(sub_82B73E60);
PPC_FUNC_IMPL(__imp__sub_82B73E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b73f30
	if (ctx.cr6.eq) goto loc_82B73F30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b73f30
	if (ctx.cr6.eq) goto loc_82B73F30;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b73f10
	if (ctx.cr6.eq) goto loc_82B73F10;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r10,18344
	ctx.r6.s64 = ctx.r10.s64 + 18344;
loc_82B73EB8:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b73f00
	if (ctx.cr6.eq) goto loc_82B73F00;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// clrlwi r4,r3,2
	ctx.r4.u64 = ctx.r3.u32 & 0x3FFFFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r9,r3,4,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xC;
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82B73F00:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82b73eb8
	if (!ctx.cr0.eq) goto loc_82B73EB8;
loc_82B73F10:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,15828
	ctx.r30.s64 = ctx.r11.s64 + 15828;
	// lwz r3,15828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// bl 0x8280ad10
	ctx.lr = 0x82B73F24;
	sub_8280AD10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8280ad80
	ctx.lr = 0x82B73F30;
	sub_8280AD80(ctx, base);
loc_82B73F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B73F48"))) PPC_WEAK_FUNC(sub_82B73F48);
PPC_FUNC_IMPL(__imp__sub_82B73F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82B73F50;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b741ac
	if (ctx.cr6.eq) goto loc_82B741AC;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-31946
	ctx.r7.s64 = -2093613056;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// addi r24,r10,-15760
	ctx.r24.s64 = ctx.r10.s64 + -15760;
	// addi r19,r9,-16924
	ctx.r19.s64 = ctx.r9.s64 + -16924;
	// addi r18,r8,-16976
	ctx.r18.s64 = ctx.r8.s64 + -16976;
	// addi r23,r7,-14944
	ctx.r23.s64 = ctx.r7.s64 + -14944;
	// addi r22,r11,18344
	ctx.r22.s64 = ctx.r11.s64 + 18344;
loc_82B73F9C:
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r20,r28,4
	ctx.r20.s64 = ctx.r28.s64 + 4;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// add r29,r11,r16
	ctx.r29.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r27,41
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 41, ctx.xer);
	// bne cr6,0x82b74014
	if (!ctx.cr6.eq) goto loc_82B74014;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// rlwinm r11,r10,4,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xC;
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ble cr6,0x82b74014
	if (!ctx.cr6.gt) goto loc_82B74014;
loc_82B73FD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b73d30
	ctx.lr = 0x82B73FE4;
	sub_82B73D30(ctx, base);
	// lhz r11,82(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 82);
	// addi r10,r22,2
	ctx.r10.s64 = ctx.r22.s64 + 2;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r7,2
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// lhzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x82b73fd8
	if (ctx.cr6.lt) goto loc_82B73FD8;
loc_82B74014:
	// addi r11,r27,-39
	ctx.r11.s64 = ctx.r27.s64 + -39;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82b740b4
	if (ctx.cr6.gt) goto loc_82B740B4;
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,16440
	ctx.r12.s64 = ctx.r12.s64 + 16440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82B7405C;
	case 1:
		goto loc_82B7405C;
	case 2:
		goto loc_82B740B4;
	case 3:
		goto loc_82B7405C;
	case 4:
		goto loc_82B7405C;
	case 5:
		goto loc_82B740B4;
	case 6:
		goto loc_82B740B4;
	case 7:
		goto loc_82B740B4;
	case 8:
		goto loc_82B7405C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,16476(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16476);
	// lwz r21,16476(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16476);
	// lwz r21,16564(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16564);
	// lwz r21,16476(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16476);
	// lwz r21,16476(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16476);
	// lwz r21,16564(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16564);
	// lwz r21,16564(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16564);
	// lwz r21,16564(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16564);
	// lwz r21,16476(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16476);
loc_82B7405C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// rlwinm r11,r10,4,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xC;
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82b7418c
	if (!ctx.cr6.gt) goto loc_82B7418C;
loc_82B74078:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b7408c
	if (!ctx.cr6.eq) goto loc_82B7408C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82b74094
	goto loc_82B74094;
loc_82B7408C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b73bd0
	ctx.lr = 0x82B74094;
	sub_82B73BD0(ctx, base);
loc_82B74094:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b74078
	if (ctx.cr6.lt) goto loc_82B74078;
	// b 0x82b7418c
	goto loc_82B7418C;
loc_82B740B4:
	// cmpwi cr6,r27,53
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 53, ctx.xer);
	// bne cr6,0x82b7418c
	if (!ctx.cr6.eq) goto loc_82B7418C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// rlwinm r11,r10,4,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xC;
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82b7418c
	if (!ctx.cr6.gt) goto loc_82B7418C;
loc_82B740D8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b74134
	if (ctx.cr6.eq) goto loc_82B74134;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74134
	if (ctx.cr6.eq) goto loc_82B74134;
	// addi r3,r24,28
	ctx.r3.s64 = ctx.r24.s64 + 28;
	// lwz r29,12480(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82B74100;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc5990
	ctx.lr = 0x82B7411C;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r24,28
	ctx.r3.s64 = ctx.r24.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82B74128;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82b74134
	if (ctx.cr6.eq) goto loc_82B74134;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_82B74134:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b74154
	if (!ctx.cr6.eq) goto loc_82B74154;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bcac98
	ctx.lr = 0x82B74150;
	sub_82BCAC98(ctx, base);
	// stw r26,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r26.u32);
loc_82B74154:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82b74174
	if (!ctx.cr6.eq) goto loc_82B74174;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bcac98
	ctx.lr = 0x82B74170;
	sub_82BCAC98(ctx, base);
	// stw r26,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r26.u32);
loc_82B74174:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,124
	ctx.r30.s64 = ctx.r30.s64 + 124;
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b740d8
	if (ctx.cr6.lt) goto loc_82B740D8;
loc_82B7418C:
	// lhz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r23
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r23.u32);
	// sth r8,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r8.u16);
	// bne 0x82b73f9c
	if (!ctx.cr0.eq) goto loc_82B73F9C;
loc_82B741AC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B741B4"))) PPC_WEAK_FUNC(sub_82B741B4);
PPC_FUNC_IMPL(__imp__sub_82B741B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B741B8"))) PPC_WEAK_FUNC(sub_82B741B8);
PPC_FUNC_IMPL(__imp__sub_82B741B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B741C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 7;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82b74330
	if (ctx.cr6.eq) goto loc_82B74330;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r29,r11,-14944
	ctx.r29.s64 = ctx.r11.s64 + -14944;
loc_82B741E8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b74298
	if (!ctx.cr6.eq) goto loc_82B74298;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b74228
	if (ctx.cr6.eq) goto loc_82B74228;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x82b74228
	if (!ctx.cr6.eq) goto loc_82B74228;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x82b74298
	goto loc_82B74298;
loc_82B74228:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// addi r11,r3,-39
	ctx.r11.s64 = ctx.r3.s64 + -39;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82b74294
	if (ctx.cr6.gt) goto loc_82B74294;
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,16984
	ctx.r12.s64 = ctx.r12.s64 + 16984;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82B7427C;
	case 1:
		goto loc_82B7427C;
	case 2:
		goto loc_82B74294;
	case 3:
		goto loc_82B7427C;
	case 4:
		goto loc_82B7427C;
	case 5:
		goto loc_82B74294;
	case 6:
		goto loc_82B74294;
	case 7:
		goto loc_82B74294;
	case 8:
		goto loc_82B7427C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,17020(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17020);
	// lwz r21,17020(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17020);
	// lwz r21,17044(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17044);
	// lwz r21,17020(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17020);
	// lwz r21,17020(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17020);
	// lwz r21,17044(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17044);
	// lwz r21,17044(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17044);
	// lwz r21,17044(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17044);
	// lwz r21,17020(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17020);
loc_82B7427C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b7428c
	if (!ctx.cr6.eq) goto loc_82B7428C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b74290
	goto loc_82B74290;
loc_82B7428C:
	// bl 0x82b73bd0
	ctx.lr = 0x82B74290;
	sub_82B73BD0(ctx, base);
loc_82B74290:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B74294:
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_82B74298:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bgt cr6,0x82b742fc
	if (ctx.cr6.gt) goto loc_82B742FC;
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// addi r12,r12,17092
	ctx.r12.s64 = ctx.r12.s64 + 17092;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82B74310;
	case 1:
		goto loc_82B74310;
	case 2:
		goto loc_82B74310;
	case 3:
		goto loc_82B742FC;
	case 4:
		goto loc_82B742FC;
	case 5:
		goto loc_82B742FC;
	case 6:
		goto loc_82B742FC;
	case 7:
		goto loc_82B742FC;
	case 8:
		goto loc_82B742FC;
	case 9:
		goto loc_82B742FC;
	case 10:
		goto loc_82B742FC;
	case 11:
		goto loc_82B74310;
	case 12:
		goto loc_82B74310;
	case 13:
		goto loc_82B74310;
	default:
		__builtin_unreachable();
	}
	// lwz r21,17168(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17168);
	// lwz r21,17168(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17168);
	// lwz r21,17168(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17168);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17148(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17148);
	// lwz r21,17168(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17168);
	// lwz r21,17168(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17168);
	// lwz r21,17168(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17168);
loc_82B742FC:
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
loc_82B74310:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lhzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 7;
	// lbz r8,7(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi cr6,r8,31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 31, ctx.xer);
	// bne cr6,0x82b741e8
	if (!ctx.cr6.eq) goto loc_82B741E8;
loc_82B74330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B74338"))) PPC_WEAK_FUNC(sub_82B74338);
PPC_FUNC_IMPL(__imp__sub_82B74338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82B74340;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r23,0(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82b74594
	if (ctx.cr6.eq) goto loc_82B74594;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x82B74368;
	sub_82219130(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7438c
	if (ctx.cr6.eq) goto loc_82B7438C;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82b73f48
	ctx.lr = 0x82B7438C;
	sub_82B73F48(ctx, base);
loc_82B7438C:
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b74554
	if (!ctx.cr6.gt) goto loc_82B74554;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// addi r25,r11,18344
	ctx.r25.s64 = ctx.r11.s64 + 18344;
	// addi r20,r10,-14944
	ctx.r20.s64 = ctx.r10.s64 + -14944;
loc_82B743B8:
	// lwz r7,60(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b743fc
	if (ctx.cr6.eq) goto loc_82B743FC;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwzx r9,r9,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
loc_82B743D8:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82b743fc
	if (ctx.cr6.eq) goto loc_82B743FC;
	// lwz r5,60(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82b743d8
	if (ctx.cr6.lt) goto loc_82B743D8;
loc_82B743FC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82b74528
	if (ctx.cr6.eq) goto loc_82B74528;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r9,14(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 14);
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// bne cr6,0x82b7442c
	if (!ctx.cr6.eq) goto loc_82B7442C;
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r20
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r20.u32);
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
loc_82B7442C:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82b74458
	if (!ctx.cr6.gt) goto loc_82B74458;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82B74458:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r28,r30,2,30,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82b744c8
	if (!ctx.cr6.eq) goto loc_82B744C8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b7448c
	if (ctx.cr6.eq) goto loc_82B7448C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82B7448C;
	sub_82219130(ctx, base);
loc_82B7448C:
	// lwz r9,60(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r25,2
	ctx.r7.s64 = ctx.r25.s64 + 2;
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r30,2
	ctx.r6.u64 = ctx.r30.u32 & 0x3FFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// b 0x82b74520
	goto loc_82B74520;
loc_82B744C8:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r10,r30,2
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFFFFF;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r6,r8,2
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// rlwinm r11,r8,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82b744ec
	if (!ctx.cr6.gt) goto loc_82B744EC;
	// clrlwi r10,r9,2
	ctx.r10.u64 = ctx.r9.u32 & 0x3FFFFFFF;
loc_82B744EC:
	// addi r5,r25,2
	ctx.r5.s64 = ctx.r25.s64 + 2;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,44(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r10,2
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhzx r6,r6,r5
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
loc_82B74520:
	// bl 0x82219130
	ctx.lr = 0x82B74524;
	sub_82219130(ctx, base);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82B74528:
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b74554
	if (ctx.cr6.eq) goto loc_82B74554;
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b743b8
	if (ctx.cr6.lt) goto loc_82B743B8;
loc_82B74554:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// ble cr6,0x82b74594
	if (!ctx.cr6.gt) goto loc_82B74594;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x82bbd760
	ctx.lr = 0x82B7457C;
	sub_82BBD760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b74594
	if (ctx.cr6.eq) goto loc_82B74594;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x82120a70
	ctx.lr = 0x82B7458C;
	sub_82120A70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r11.u32);
loc_82B74594:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7459C"))) PPC_WEAK_FUNC(sub_82B7459C);
PPC_FUNC_IMPL(__imp__sub_82B7459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B745A0"))) PPC_WEAK_FUNC(sub_82B745A0);
PPC_FUNC_IMPL(__imp__sub_82B745A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82B745A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b74620
	if (!ctx.cr6.gt) goto loc_82B74620;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B745C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b7460c
	if (ctx.cr6.eq) goto loc_82B7460C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7460c
	if (ctx.cr6.eq) goto loc_82B7460C;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b7460c
	if (!ctx.cr6.eq) goto loc_82B7460C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b741b8
	ctx.lr = 0x82B7460C;
	sub_82B741B8(ctx, base);
loc_82B7460C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b745c4
	if (ctx.cr6.lt) goto loc_82B745C4;
loc_82B74620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B74628"))) PPC_WEAK_FUNC(sub_82B74628);
PPC_FUNC_IMPL(__imp__sub_82B74628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b74680
	if (ctx.cr6.eq) goto loc_82B74680;
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b74680
	if (!ctx.cr6.eq) goto loc_82B74680;
	// bl 0x82b745a0
	ctx.lr = 0x82B74654;
	sub_82B745A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74678
	if (ctx.cr6.eq) goto loc_82B74678;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b74678
	if (ctx.cr6.eq) goto loc_82B74678;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82b73f48
	ctx.lr = 0x82B74678;
	sub_82B73F48(ctx, base);
loc_82B74678:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
loc_82B74680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B74694"))) PPC_WEAK_FUNC(sub_82B74694);
PPC_FUNC_IMPL(__imp__sub_82B74694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B74698"))) PPC_WEAK_FUNC(sub_82B74698);
PPC_FUNC_IMPL(__imp__sub_82B74698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B746A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b74774
	if (ctx.cr6.eq) goto loc_82B74774;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b74774
	if (!ctx.cr6.eq) goto loc_82B74774;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B746D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7476c
	if (ctx.cr6.eq) goto loc_82B7476C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7470c
	if (ctx.cr6.eq) goto loc_82B7470C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82B74708;
	sub_82120040(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82B7470C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b74728
	if (ctx.cr6.eq) goto loc_82B74728;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82B74724;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_82B74728:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74758
	if (ctx.cr6.eq) goto loc_82B74758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b74338
	ctx.lr = 0x82B7473C;
	sub_82B74338(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82b78140
	ctx.lr = 0x82B74744;
	sub_82B78140(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B74750;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82B74758:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x82B7476C;
	sub_82219130(ctx, base);
loc_82B7476C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B74774;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B74774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7477C"))) PPC_WEAK_FUNC(sub_82B7477C);
PPC_FUNC_IMPL(__imp__sub_82B7477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B74780"))) PPC_WEAK_FUNC(sub_82B74780);
PPC_FUNC_IMPL(__imp__sub_82B74780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b747ac
	if (ctx.cr6.eq) goto loc_82B747AC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b74628
	ctx.lr = 0x82B747A4;
	sub_82B74628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b74698
	ctx.lr = 0x82B747AC;
	sub_82B74698(ctx, base);
loc_82B747AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B747C0"))) PPC_WEAK_FUNC(sub_82B747C0);
PPC_FUNC_IMPL(__imp__sub_82B747C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b747f0
	if (!ctx.cr6.eq) goto loc_82B747F0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82B747F0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82B74804;
	sub_82BFD450(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74814
	if (ctx.cr6.eq) goto loc_82B74814;
	// bl 0x82c013c8
	ctx.lr = 0x82B74814;
	sub_82C013C8(ctx, base);
loc_82B74814:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B74828"))) PPC_WEAK_FUNC(sub_82B74828);
PPC_FUNC_IMPL(__imp__sub_82B74828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82B74830;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,12476(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b74884
	if (ctx.cr6.eq) goto loc_82B74884;
	// lwz r11,12496(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82b74884
	if (!ctx.cr6.eq) goto loc_82B74884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// bl 0x82bcd500
	ctx.lr = 0x82B74868;
	sub_82BCD500(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82b74884
	if (ctx.cr6.eq) goto loc_82B74884;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82B74884:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82120040
	ctx.lr = 0x82B74890;
	sub_82120040(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B748A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82b748a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B748A8;
	// lwz r11,12480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,12(r27)
	PPC_STORE_U16(ctx.r27.u32 + 12, ctx.r10.u16);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b748d0
	if (!ctx.cr6.eq) goto loc_82B748D0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82B748D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82B748E8;
	sub_82BFD450(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74bdc
	if (ctx.cr6.eq) goto loc_82B74BDC;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lwz r7,12456(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82b7494c
	if (ctx.cr6.eq) goto loc_82B7494C;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
loc_82B7494C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32026
	ctx.r9.s64 = -2098855936;
	// addi r6,r9,-28192
	ctx.r6.s64 = ctx.r9.s64 + -28192;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r11,12468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12468);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x82b674a8
	ctx.lr = 0x82B74974;
	sub_82B674A8(ctx, base);
	// stw r3,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r3.u32);
	// addi r31,r8,4
	ctx.r31.s64 = ctx.r8.s64 + 4;
	// lbz r4,1(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r10,3(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r4,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r4.u8);
	// stb r3,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r3.u8);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82b749cc
	if (ctx.cr6.eq) goto loc_82B749CC;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B749CC:
	// lwz r11,12476(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// lwz r8,12496(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// beq cr6,0x82b749f0
	if (ctx.cr6.eq) goto loc_82B749F0;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82b749f0
	if (!ctx.cr6.eq) goto loc_82B749F0;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82b74a44
	goto loc_82B74A44;
loc_82B749F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b74a44
	if (ctx.cr6.eq) goto loc_82B74A44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82B74A04;
	sub_82120040(ctx, base);
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74a3c
	if (ctx.cr6.eq) goto loc_82B74A3C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82B74A1C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bcea38
	ctx.lr = 0x82B74A2C;
	sub_82BCEA38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82b74a1c
	if (!ctx.cr0.eq) goto loc_82B74A1C;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B74A3C:
	// lwz r7,12456(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// lwz r8,12496(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12496);
loc_82B74A44:
	// lwz r11,12476(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b74a58
	if (ctx.cr6.eq) goto loc_82B74A58;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82b74aec
	if (ctx.cr6.eq) goto loc_82B74AEC;
loc_82B74A58:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82b74aa8
	if (ctx.cr6.eq) goto loc_82B74AA8;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B74AA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74aec
	if (ctx.cr6.eq) goto loc_82B74AEC;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b74aec
	if (ctx.cr6.eq) goto loc_82B74AEC;
loc_82B74AC0:
	// lwz r9,12476(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b74ad4
	if (ctx.cr6.eq) goto loc_82B74AD4;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82b74ad8
	if (ctx.cr6.eq) goto loc_82B74AD8;
loc_82B74AD4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_82B74AD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b74ae4
	if (ctx.cr6.eq) goto loc_82B74AE4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82B74AE4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b74ac0
	if (!ctx.cr0.eq) goto loc_82B74AC0;
loc_82B74AEC:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82b74b40
	if (ctx.cr6.eq) goto loc_82B74B40;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B74B40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// beq cr6,0x82b74b88
	if (ctx.cr6.eq) goto loc_82B74B88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120040
	ctx.lr = 0x82B74B58;
	sub_82120040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b74b80
	if (ctx.cr6.eq) goto loc_82B74B80;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x82B74B78;
	sub_82219130(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stb r26,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r26.u8);
loc_82B74B80:
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82B74B88:
	// lwz r11,12476(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b74bdc
	if (!ctx.cr6.eq) goto loc_82B74BDC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b74bdc
	if (ctx.cr6.eq) goto loc_82B74BDC;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821203b0
	ctx.lr = 0x82B74BB0;
	sub_821203B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b74bdc
	if (ctx.cr6.eq) goto loc_82B74BDC;
	// li r11,40
	ctx.r11.s64 = 40;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// divwu. r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b74bdc
	if (ctx.cr0.eq) goto loc_82B74BDC;
loc_82B74BC8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b74bd4
	if (ctx.cr6.eq) goto loc_82B74BD4;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
loc_82B74BD4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b74bc8
	if (!ctx.cr0.eq) goto loc_82B74BC8;
loc_82B74BDC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B74BE8"))) PPC_WEAK_FUNC(sub_82B74BE8);
PPC_FUNC_IMPL(__imp__sub_82B74BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82B74BF0;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82120040
	ctx.lr = 0x82B74C04;
	sub_82120040(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82B74C14;
	sub_82218A80(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b74c2c
	if (!ctx.cr6.eq) goto loc_82B74C2C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82B74C2C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82B74C44;
	sub_82BFD450(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7564c
	if (ctx.cr6.eq) goto loc_82B7564C;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821203b0
	ctx.lr = 0x82B74C64;
	sub_821203B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r11,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r11.u32);
	// lis r19,-31942
	ctx.r19.s64 = -2093350912;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b74d6c
	if (ctx.cr6.eq) goto loc_82B74D6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r31,r11,1
	ctx.r31.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82120040
	ctx.lr = 0x82B74C90;
	sub_82120040(ctx, base);
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r3,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82b74d78
	if (ctx.cr6.eq) goto loc_82B74D78;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82B74CA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// beq cr6,0x82b74cf4
	if (ctx.cr6.eq) goto loc_82B74CF4;
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r6,90(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
loc_82B74CF4:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// beq cr6,0x82b74d4c
	if (ctx.cr6.eq) goto loc_82B74D4C;
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r6,90(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
loc_82B74D4C:
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// bne 0x82b74ca8
	if (!ctx.cr0.eq) goto loc_82B74CA8;
	// b 0x82b74d78
	goto loc_82B74D78;
loc_82B74D6C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
	// stw r18,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r18.u32);
loc_82B74D78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// beq cr6,0x82b74dc8
	if (ctx.cr6.eq) goto loc_82B74DC8;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B74DC8:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r18,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r18.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// divwu r10,r30,r11
	ctx.r10.u32 = ctx.r30.u32 / ctx.r11.u32;
	// stw r10,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r10.u32);
	// beq cr6,0x82b74f38
	if (ctx.cr6.eq) goto loc_82B74F38;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82B74DEC;
	sub_82120040(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r3.u32);
	// bl 0x82218a80
	ctx.lr = 0x82B74DFC;
	sub_82218A80(ctx, base);
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b74f38
	if (!ctx.cr6.gt) goto loc_82B74F38;
loc_82B74E14:
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r6,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r6.u8);
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// stb r8,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r8.u8);
	// stb r5,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r5.u8);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82b74e60
	if (ctx.cr6.eq) goto loc_82B74E60;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
loc_82B74E60:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// stb r5,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r5.u8);
	// stb r6,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r6.u8);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82b74eb4
	if (ctx.cr6.eq) goto loc_82B74EB4;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
loc_82B74EB4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82b74ee8
	if (ctx.cr6.eq) goto loc_82B74EE8;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82B74EE8:
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// sth r9,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r9.u16);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82b74f1c
	if (ctx.cr6.eq) goto loc_82B74F1C;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82B74F1C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sth r11,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r9,12(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b74e14
	if (ctx.cr6.lt) goto loc_82B74E14;
loc_82B74F38:
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x82b74f84
	if (ctx.cr6.eq) goto loc_82B74F84;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_82B74F84:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// stw r18,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r18.u32);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b750d0
	if (ctx.cr6.eq) goto loc_82B750D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82B74FAC;
	sub_82120040(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r3.u32);
	// bl 0x82218a80
	ctx.lr = 0x82B74FBC;
	sub_82218A80(ctx, base);
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,24(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// ble cr6,0x82b750cc
	if (!ctx.cr6.gt) goto loc_82B750CC;
	// bl 0x82120380
	ctx.lr = 0x82B74FD4;
	sub_82120380(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r26,12476(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12476);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r25,12496(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12496);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
	// addi r30,r11,14560
	ctx.r30.s64 = ctx.r11.s64 + 14560;
loc_82B74FF0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82b7504c
	if (ctx.cr6.eq) goto loc_82B7504C;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x82b75044
	if (ctx.cr6.eq) goto loc_82B75044;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_82B75044:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82b7509c
	goto loc_82B7509C;
loc_82B7504C:
	// li r5,30
	ctx.r5.s64 = 30;
	// stb r18,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r18.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82219130
	ctx.lr = 0x82B75060;
	sub_82219130(ctx, base);
	// addi r31,r31,30
	ctx.r31.s64 = ctx.r31.s64 + 30;
	// stb r18,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r18.u8);
	// li r10,30
	ctx.r10.s64 = 30;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
loc_82B75074:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r5,r11,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// xor r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// bne 0x82b75074
	if (!ctx.cr0.eq) goto loc_82B75074;
loc_82B7509C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82b750b0
	if (ctx.cr6.eq) goto loc_82B750B0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// beq cr6,0x82b750b4
	if (ctx.cr6.eq) goto loc_82B750B4;
loc_82B750B0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B750B4:
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b74ff0
	if (ctx.cr6.lt) goto loc_82B74FF0;
	// b 0x82b750d8
	goto loc_82B750D8;
loc_82B750CC:
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
loc_82B750D0:
	// lwz r25,12496(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12496);
	// lwz r26,12476(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12476);
loc_82B750D8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82b750f0
	if (ctx.cr6.eq) goto loc_82B750F0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x82b750f0
	if (!ctx.cr6.eq) goto loc_82B750F0;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82b75140
	goto loc_82B75140;
loc_82B750F0:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82b75140
	if (ctx.cr6.eq) goto loc_82B75140;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B75140:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82b7515c
	if (ctx.cr6.eq) goto loc_82B7515C;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// beq cr6,0x82b75160
	if (ctx.cr6.eq) goto loc_82B75160;
loc_82B7515C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B75160:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b75404
	if (ctx.cr6.eq) goto loc_82B75404;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82b75178
	if (ctx.cr6.eq) goto loc_82B75178;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// beq cr6,0x82b75404
	if (ctx.cr6.eq) goto loc_82B75404;
loc_82B75178:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82B75184;
	sub_82120040(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82B75194;
	sub_82218A80(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// lwz r7,12476(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12476);
	// lwz r4,12496(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12496);
	// divwu. r6,r30,r11
	ctx.r6.u32 = ctx.r30.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
	// beq 0x82b752fc
	if (ctx.cr0.eq) goto loc_82B752FC;
	// addi r8,r28,8
	ctx.r8.s64 = ctx.r28.s64 + 8;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82B751B4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b751c4
	if (ctx.cr6.eq) goto loc_82B751C4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82b751c8
	if (ctx.cr6.eq) goto loc_82B751C8;
loc_82B751C4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B751C8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b751e0
	if (ctx.cr6.eq) goto loc_82B751E0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82b751e0
	if (!ctx.cr6.eq) goto loc_82B751E0;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82b75230
	goto loc_82B75230;
loc_82B751E0:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// stb r3,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r3.u8);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82b75230
	if (ctx.cr6.eq) goto loc_82B75230;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r3,90(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B75230:
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b7524c
	if (ctx.cr6.eq) goto loc_82B7524C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82b7524c
	if (!ctx.cr6.eq) goto loc_82B7524C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82b7529c
	goto loc_82B7529C;
loc_82B7524C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// stb r3,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r3.u8);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82b7529c
	if (ctx.cr6.eq) goto loc_82B7529C;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r3,90(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B7529C:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b752b0
	if (ctx.cr6.eq) goto loc_82B752B0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82b752b4
	if (ctx.cr6.eq) goto loc_82B752B4;
loc_82B752B0:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82B752B4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b752c4
	if (ctx.cr6.eq) goto loc_82B752C4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82b752c8
	if (ctx.cr6.eq) goto loc_82B752C8;
loc_82B752C4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82B752C8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b752d8
	if (ctx.cr6.eq) goto loc_82B752D8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82b752dc
	if (ctx.cr6.eq) goto loc_82B752DC;
loc_82B752D8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B752DC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b752ec
	if (ctx.cr6.eq) goto loc_82B752EC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82b752f0
	if (ctx.cr6.eq) goto loc_82B752F0;
loc_82B752EC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B752F0:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bne 0x82b751b4
	if (!ctx.cr0.eq) goto loc_82B751B4;
loc_82B752FC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b753a0
	if (ctx.cr6.eq) goto loc_82B753A0;
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82B7530C:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75350
	if (ctx.cr6.eq) goto loc_82B75350;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B7531C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b7531c
	if (!ctx.cr6.eq) goto loc_82B7531C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82b7534c
	if (ctx.cr6.eq) goto loc_82B7534C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82b75350
	if (ctx.cr6.eq) goto loc_82B75350;
loc_82B7534C:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82B75350:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75394
	if (ctx.cr6.eq) goto loc_82B75394;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B75360:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b75360
	if (!ctx.cr6.eq) goto loc_82B75360;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82b75390
	if (ctx.cr6.eq) goto loc_82B75390;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82b75394
	if (ctx.cr6.eq) goto loc_82B75394;
loc_82B75390:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82B75394:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne 0x82b7530c
	if (!ctx.cr0.eq) goto loc_82B7530C;
loc_82B753A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b75404
	if (ctx.cr6.eq) goto loc_82B75404;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r30,-17448(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r29,-17440(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82B753C0;
	sub_821FD9D8(ctx, base);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,-17444(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17444);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B753F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b75400
	if (ctx.cr6.eq) goto loc_82B75400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82B75400;
	sub_821FD9E0(ctx, base);
loc_82B75400:
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
loc_82B75404:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// beq cr6,0x82b75454
	if (ctx.cr6.eq) goto loc_82B75454;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B75454:
	// stw r30,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r18,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r18.u32);
	// beq cr6,0x82b754a8
	if (ctx.cr6.eq) goto loc_82B754A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82B75470;
	sub_82120040(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b7548c
	if (ctx.cr6.eq) goto loc_82B7548C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82B7548C;
	sub_82219130(ctx, base);
loc_82B7548C:
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82b754a8
	if (ctx.cr6.eq) goto loc_82B754A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd0820
	ctx.lr = 0x82B754A8;
	sub_82BD0820(ctx, base);
loc_82B754A8:
	// addi r30,r20,28
	ctx.r30.s64 = ctx.r20.s64 + 28;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82B754B0:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// beq cr6,0x82b75500
	if (ctx.cr6.eq) goto loc_82B75500;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B75500:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b75524
	if (ctx.cr6.eq) goto loc_82B75524;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,18472
	ctx.r5.s64 = ctx.r11.s64 + 18472;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82B75520;
	sub_82BCE5D8(ctx, base);
	// lwz r21,12456(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
loc_82B75524:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82b754b0
	if (!ctx.cr0.eq) goto loc_82B754B0;
	// stw r18,48(r20)
	PPC_STORE_U32(ctx.r20.u32 + 48, ctx.r18.u32);
	// stw r18,52(r20)
	PPC_STORE_U32(ctx.r20.u32 + 52, ctx.r18.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b7564c
	if (ctx.cr6.eq) goto loc_82B7564C;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// beq cr6,0x82b75598
	if (ctx.cr6.eq) goto loc_82B75598;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B75598:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b7564c
	if (ctx.cr6.eq) goto loc_82B7564C;
	// stw r30,48(r20)
	PPC_STORE_U32(ctx.r20.u32 + 48, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82B755B0;
	sub_82120040(ctx, base);
	// stw r3,52(r20)
	PPC_STORE_U32(ctx.r20.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b7564c
	if (ctx.cr6.eq) goto loc_82B7564C;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_82B755C0:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r7,12456(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12456);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// beq cr6,0x82b75614
	if (ctx.cr6.eq) goto loc_82B75614;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B75614:
	// lwz r11,52(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7563c
	if (ctx.cr6.eq) goto loc_82B7563C;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,18472
	ctx.r5.s64 = ctx.r10.s64 + 18472;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82B75638;
	sub_82BCE5D8(ctx, base);
	// b 0x82b75640
	goto loc_82B75640;
loc_82B7563C:
	// stwx r18,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r18.u32);
loc_82B75640:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82b755c0
	if (!ctx.cr0.eq) goto loc_82B755C0;
loc_82B7564C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B75658"))) PPC_WEAK_FUNC(sub_82B75658);
PPC_FUNC_IMPL(__imp__sub_82B75658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82120040
	ctx.lr = 0x82B7567C;
	sub_82120040(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82B7568C;
	sub_82218A80(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b756a4
	if (!ctx.cr6.eq) goto loc_82B756A4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82B756A4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82B756BC;
	sub_82BFD450(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7572c
	if (ctx.cr6.eq) goto loc_82B7572C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821203b0
	ctx.lr = 0x82B756D4;
	sub_821203B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b756f8
	if (ctx.cr6.eq) goto loc_82B756F8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82b756f8
	if (ctx.cr6.eq) goto loc_82B756F8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,13208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13208);
	// bl 0x82b76e80
	ctx.lr = 0x82B756F8;
	sub_82B76E80(ctx, base);
loc_82B756F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821203b0
	ctx.lr = 0x82B75704;
	sub_821203B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7572c
	if (ctx.cr6.eq) goto loc_82B7572C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82b7572c
	if (ctx.cr6.eq) goto loc_82B7572C;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,19432
	ctx.r5.s64 = ctx.r11.s64 + 19432;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// bl 0x82bce5d8
	ctx.lr = 0x82B7572C;
	sub_82BCE5D8(ctx, base);
loc_82B7572C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B75748"))) PPC_WEAK_FUNC(sub_82B75748);
PPC_FUNC_IMPL(__imp__sub_82B75748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82B75750;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x82B75764;
	sub_82120040(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r22,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
	// stw r22,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
	// stw r22,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r22.u32);
	// stw r22,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r22.u32);
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b75794
	if (!ctx.cr6.eq) goto loc_82B75794;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82B75794:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82B757AC;
	sub_82BFD450(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75830
	if (ctx.cr6.eq) goto loc_82B75830;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lis r11,11887
	ctx.r11.s64 = 779026432;
	// ori r9,r11,26211
	ctx.r9.u64 = ctx.r11.u64 | 26211;
loc_82B757D4:
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lbz r5,5(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lbz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r3,7(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stb r7,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// stb r5,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// stb r3,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r3.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b75810
	if (!ctx.cr6.eq) goto loc_82B75810;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82B75810:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82b757d4
	if (!ctx.cr0.eq) goto loc_82B757D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b75830
	if (ctx.cr6.eq) goto loc_82B75830;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82B7582C;
	sub_82120040(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
loc_82B75830:
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b75998
	if (ctx.cr6.eq) goto loc_82B75998;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// addi r24,r11,-16860
	ctx.r24.s64 = ctx.r11.s64 + -16860;
	// addi r26,r10,-16868
	ctx.r26.s64 = ctx.r10.s64 + -16868;
	// addi r23,r9,-16876
	ctx.r23.s64 = ctx.r9.s64 + -16876;
loc_82B75868:
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r6,12456(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82b758bc
	if (ctx.cr6.eq) goto loc_82B758BC;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B758BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r6,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r6.u8);
	// beq cr6,0x82b75984
	if (ctx.cr6.eq) goto loc_82B75984;
	// stb r22,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r22.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8221b9e0
	ctx.lr = 0x82B758FC;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b75918
	if (!ctx.cr6.eq) goto loc_82B75918;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,19432
	ctx.r5.s64 = ctx.r11.s64 + 19432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82b75978
	goto loc_82B75978;
loc_82B75918:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8221b9e0
	ctx.lr = 0x82B75924;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b75954
	if (!ctx.cr6.eq) goto loc_82B75954;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,18472
	ctx.r5.s64 = ctx.r10.s64 + 18472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82B7594C;
	sub_82BCE5D8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x82b75984
	goto loc_82B75984;
loc_82B75954:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8221b9e0
	ctx.lr = 0x82B75960;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b75984
	if (!ctx.cr6.eq) goto loc_82B75984;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,18368
	ctx.r5.s64 = ctx.r11.s64 + 18368;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B75978:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82B75984;
	sub_82BCE5D8(ctx, base);
loc_82B75984:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b75868
	if (ctx.cr6.lt) goto loc_82B75868;
loc_82B75998:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B759A4"))) PPC_WEAK_FUNC(sub_82B759A4);
PPC_FUNC_IMPL(__imp__sub_82B759A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B759A8"))) PPC_WEAK_FUNC(sub_82B759A8);
PPC_FUNC_IMPL(__imp__sub_82B759A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,22104
	ctx.r5.s64 = ctx.r11.s64 + 22104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82B759D8;
	sub_82BCE5D8(ctx, base);
	// bl 0x82bce6a8
	ctx.lr = 0x82B759DC;
	sub_82BCE6A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b759f0
	if (!ctx.cr6.eq) goto loc_82B759F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b75a40
	goto loc_82B75A40;
loc_82B759F0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x82b74628
	ctx.lr = 0x82B759FC;
	sub_82B74628(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b74698
	ctx.lr = 0x82B75A04;
	sub_82B74698(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b77f10
	ctx.lr = 0x82B75A10;
	sub_82B77F10(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b75a28
	if (!ctx.cr6.eq) goto loc_82B75A28;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82B75A28:
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b75a3c
	if (!ctx.cr6.eq) goto loc_82B75A3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b73e60
	ctx.lr = 0x82B75A3C;
	sub_82B73E60(ctx, base);
loc_82B75A3C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B75A40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B75A58"))) PPC_WEAK_FUNC(sub_82B75A58);
PPC_FUNC_IMPL(__imp__sub_82B75A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82B75A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82B75A78;
	sub_82219130(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B75A88"))) PPC_WEAK_FUNC(sub_82B75A88);
PPC_FUNC_IMPL(__imp__sub_82B75A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82B75A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82219130
	ctx.lr = 0x82B75AB0;
	sub_82219130(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B75AC4"))) PPC_WEAK_FUNC(sub_82B75AC4);
PPC_FUNC_IMPL(__imp__sub_82B75AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B75AC8"))) PPC_WEAK_FUNC(sub_82B75AC8);
PPC_FUNC_IMPL(__imp__sub_82B75AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B75AE4"))) PPC_WEAK_FUNC(sub_82B75AE4);
PPC_FUNC_IMPL(__imp__sub_82B75AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B75AE8"))) PPC_WEAK_FUNC(sub_82B75AE8);
PPC_FUNC_IMPL(__imp__sub_82B75AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B75AF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r28,r27,36
	ctx.r28.s64 = ctx.r27.s64 + 36;
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_82B75B20:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b75b38
	if (ctx.cr6.eq) goto loc_82B75B38;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b75b3c
	if (ctx.cr6.eq) goto loc_82B75B3C;
loc_82B75B38:
	// twi 31,r0,22
loc_82B75B3C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b75be0
	if (ctx.cr6.eq) goto loc_82B75BE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b75b54
	if (!ctx.cr6.eq) goto loc_82B75B54;
	// twi 31,r0,22
loc_82B75B54:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b75b64
	if (!ctx.cr6.eq) goto loc_82B75B64;
	// twi 31,r0,22
loc_82B75B64:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b75b74
	if (!ctx.cr6.eq) goto loc_82B75B74;
	// twi 31,r0,22
loc_82B75B74:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82b75bd4
	if (ctx.cr6.eq) goto loc_82B75BD4;
loc_82B75B88:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82B75BC0;
	sub_82219130(ctx, base);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r30,44(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b75b88
	if (!ctx.cr6.eq) goto loc_82B75B88;
loc_82B75BD4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212f8d8
	ctx.lr = 0x82B75BDC;
	sub_8212F8D8(ctx, base);
	// b 0x82b75b20
	goto loc_82B75B20;
loc_82B75BE0:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r28,r27,24
	ctx.r28.s64 = ctx.r27.s64 + 24;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_82B75BFC:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b75c14
	if (ctx.cr6.eq) goto loc_82B75C14;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b75c18
	if (ctx.cr6.eq) goto loc_82B75C18;
loc_82B75C14:
	// twi 31,r0,22
loc_82B75C18:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b75cb8
	if (ctx.cr6.eq) goto loc_82B75CB8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b75c30
	if (!ctx.cr6.eq) goto loc_82B75C30;
	// twi 31,r0,22
loc_82B75C30:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b75c40
	if (!ctx.cr6.eq) goto loc_82B75C40;
	// twi 31,r0,22
loc_82B75C40:
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b75c50
	if (!ctx.cr6.eq) goto loc_82B75C50;
	// twi 31,r0,22
loc_82B75C50:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82b75cac
	if (ctx.cr6.eq) goto loc_82B75CAC;
loc_82B75C60:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82B75C98;
	sub_82219130(ctx, base);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r30,44(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b75c60
	if (!ctx.cr6.eq) goto loc_82B75C60;
loc_82B75CAC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212f8d8
	ctx.lr = 0x82B75CB4;
	sub_8212F8D8(ctx, base);
	// b 0x82b75bfc
	goto loc_82B75BFC;
loc_82B75CB8:
	// lis r11,19791
	ctx.r11.s64 = 1297022976;
	// stw r29,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,18753
	ctx.r9.u64 = ctx.r11.u64 | 18753;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B75CDC"))) PPC_WEAK_FUNC(sub_82B75CDC);
PPC_FUNC_IMPL(__imp__sub_82B75CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B75CE0"))) PPC_WEAK_FUNC(sub_82B75CE0);
PPC_FUNC_IMPL(__imp__sub_82B75CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82B75CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_82B75D10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75d28
	if (ctx.cr6.eq) goto loc_82B75D28;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b75d2c
	if (ctx.cr6.eq) goto loc_82B75D2C;
loc_82B75D28:
	// twi 31,r0,22
loc_82B75D2C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b75d80
	if (ctx.cr6.eq) goto loc_82B75D80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b75d44
	if (!ctx.cr6.eq) goto loc_82B75D44;
	// twi 31,r0,22
loc_82B75D44:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b75d54
	if (!ctx.cr6.eq) goto loc_82B75D54;
	// twi 31,r0,22
loc_82B75D54:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75d74
	if (ctx.cr6.eq) goto loc_82B75D74;
loc_82B75D64:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b75d64
	if (!ctx.cr6.eq) goto loc_82B75D64;
loc_82B75D74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212f8d8
	ctx.lr = 0x82B75D7C;
	sub_8212F8D8(ctx, base);
	// b 0x82b75d10
	goto loc_82B75D10;
loc_82B75D80:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_82B75D9C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75db4
	if (ctx.cr6.eq) goto loc_82B75DB4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b75db8
	if (ctx.cr6.eq) goto loc_82B75DB8;
loc_82B75DB4:
	// twi 31,r0,22
loc_82B75DB8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b75e08
	if (ctx.cr6.eq) goto loc_82B75E08;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b75dd0
	if (!ctx.cr6.eq) goto loc_82B75DD0;
	// twi 31,r0,22
loc_82B75DD0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b75de0
	if (!ctx.cr6.eq) goto loc_82B75DE0;
	// twi 31,r0,22
loc_82B75DE0:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75dfc
	if (ctx.cr6.eq) goto loc_82B75DFC;
loc_82B75DEC:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b75dec
	if (!ctx.cr6.eq) goto loc_82B75DEC;
loc_82B75DFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212f8d8
	ctx.lr = 0x82B75E04;
	sub_8212F8D8(ctx, base);
	// b 0x82b75d9c
	goto loc_82B75D9C;
loc_82B75E08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B75E14"))) PPC_WEAK_FUNC(sub_82B75E14);
PPC_FUNC_IMPL(__imp__sub_82B75E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B75E18"))) PPC_WEAK_FUNC(sub_82B75E18);
PPC_FUNC_IMPL(__imp__sub_82B75E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B75E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B75E38;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_82B75E58:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b75e70
	if (ctx.cr6.eq) goto loc_82B75E70;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b75e74
	if (ctx.cr6.eq) goto loc_82B75E74;
loc_82B75E70:
	// twi 31,r0,22
loc_82B75E74:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b75eb0
	if (ctx.cr6.eq) goto loc_82B75EB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b75e8c
	if (!ctx.cr6.eq) goto loc_82B75E8C;
	// twi 31,r0,22
loc_82B75E8C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b75e9c
	if (!ctx.cr6.eq) goto loc_82B75E9C;
	// twi 31,r0,22
loc_82B75E9C:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// bl 0x8212f8d8
	ctx.lr = 0x82B75EAC;
	sub_8212F8D8(ctx, base);
	// b 0x82b75e58
	goto loc_82B75E58;
loc_82B75EB0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212b7a8
	ctx.lr = 0x82B75EC0;
	sub_8212B7A8(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// bl 0x8212bcf0
	ctx.lr = 0x82B75EE4;
	sub_8212BCF0(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B75EF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B75EF8"))) PPC_WEAK_FUNC(sub_82B75EF8);
PPC_FUNC_IMPL(__imp__sub_82B75EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B75F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,-15760
	ctx.r26.s64 = ctx.r11.s64 + -15760;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B75F18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212b7a8
	ctx.lr = 0x82B75F28;
	sub_8212B7A8(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x8212b7a8
	ctx.lr = 0x82B75F58;
	sub_8212B7A8(ctx, base);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212b7a8
	ctx.lr = 0x82B75F84;
	sub_8212B7A8(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// bl 0x8212bcf0
	ctx.lr = 0x82B75FA8;
	sub_8212BCF0(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B75FCC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b75fe0
	if (ctx.cr6.eq) goto loc_82B75FE0;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b75fe4
	if (ctx.cr6.eq) goto loc_82B75FE4;
loc_82B75FE0:
	// twi 31,r0,22
loc_82B75FE4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b76028
	if (ctx.cr6.eq) goto loc_82B76028;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b75ff8
	if (!ctx.cr6.eq) goto loc_82B75FF8;
	// twi 31,r0,22
loc_82B75FF8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b76008
	if (!ctx.cr6.eq) goto loc_82B76008;
	// twi 31,r0,22
loc_82B76008:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8212bf78
	ctx.lr = 0x82B76010;
	sub_8212BF78(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b76020
	if (!ctx.cr6.eq) goto loc_82B76020;
	// twi 31,r0,22
loc_82B76020:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82b75fcc
	goto loc_82B75FCC;
loc_82B76028:
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B76034;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7603C"))) PPC_WEAK_FUNC(sub_82B7603C);
PPC_FUNC_IMPL(__imp__sub_82B7603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76040"))) PPC_WEAK_FUNC(sub_82B76040);
PPC_FUNC_IMPL(__imp__sub_82B76040) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_82B76064:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b76074
	if (ctx.cr6.eq) goto loc_82B76074;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82b76078
	if (ctx.cr6.eq) goto loc_82B76078;
loc_82B76074:
	// twi 31,r0,22
loc_82B76078:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b7608c
	if (!ctx.cr6.eq) goto loc_82B7608C;
	// twi 31,r0,22
loc_82B7608C:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b7609c
	if (!ctx.cr6.eq) goto loc_82B7609C;
	// twi 31,r0,22
loc_82B7609C:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b760b8
	if (ctx.cr6.lt) goto loc_82B760B8;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b760cc
	if (ctx.cr6.lt) goto loc_82B760CC;
loc_82B760B8:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b760c4
	if (!ctx.cr6.eq) goto loc_82B760C4;
	// twi 31,r0,22
loc_82B760C4:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82b76064
	goto loc_82B76064;
loc_82B760CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B760E8"))) PPC_WEAK_FUNC(sub_82B760E8);
PPC_FUNC_IMPL(__imp__sub_82B760E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_82B76108:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b76118
	if (ctx.cr6.eq) goto loc_82B76118;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82b7611c
	if (ctx.cr6.eq) goto loc_82B7611C;
loc_82B76118:
	// twi 31,r0,22
loc_82B7611C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b76130
	if (!ctx.cr6.eq) goto loc_82B76130;
	// twi 31,r0,22
loc_82B76130:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b76140
	if (!ctx.cr6.eq) goto loc_82B76140;
	// twi 31,r0,22
loc_82B76140:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b7615c
	if (ctx.cr6.lt) goto loc_82B7615C;
	// addi r10,r10,12288
	ctx.r10.s64 = ctx.r10.s64 + 12288;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b76170
	if (ctx.cr6.lt) goto loc_82B76170;
loc_82B7615C:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b76168
	if (!ctx.cr6.eq) goto loc_82B76168;
	// twi 31,r0,22
loc_82B76168:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82b76108
	goto loc_82B76108;
loc_82B76170:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7618C"))) PPC_WEAK_FUNC(sub_82B7618C);
PPC_FUNC_IMPL(__imp__sub_82B7618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76190"))) PPC_WEAK_FUNC(sub_82B76190);
PPC_FUNC_IMPL(__imp__sub_82B76190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82135070
	ctx.lr = 0x82B761C4;
	sub_82135070(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b761e4
	if (ctx.cr6.eq) goto loc_82B761E4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82b761e8
	if (ctx.cr6.eq) goto loc_82B761E8;
loc_82B761E4:
	// twi 31,r0,22
loc_82B761E8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b761fc
	if (!ctx.cr6.eq) goto loc_82B761FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b76220
	goto loc_82B76220;
loc_82B761FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b76208
	if (!ctx.cr6.eq) goto loc_82B76208;
	// twi 31,r0,22
loc_82B76208:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b76218
	if (!ctx.cr6.eq) goto loc_82B76218;
	// twi 31,r0,22
loc_82B76218:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B76220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B76238"))) PPC_WEAK_FUNC(sub_82B76238);
PPC_FUNC_IMPL(__imp__sub_82B76238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82B76240;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r24,r11,-15760
	ctx.r24.s64 = ctx.r11.s64 + -15760;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B76258;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b763f8
	if (ctx.cr6.eq) goto loc_82B763F8;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r28,36
	ctx.r26.s64 = ctx.r28.s64 + 36;
	// stw r27,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r27.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_82B7628C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b762a4
	if (ctx.cr6.eq) goto loc_82B762A4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82b762a8
	if (ctx.cr6.eq) goto loc_82B762A8;
loc_82B762A4:
	// twi 31,r0,22
loc_82B762A8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b763f8
	if (ctx.cr6.eq) goto loc_82B763F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b762c0
	if (!ctx.cr6.eq) goto loc_82B762C0;
	// twi 31,r0,22
loc_82B762C0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b762d0
	if (!ctx.cr6.eq) goto loc_82B762D0;
	// twi 31,r0,22
loc_82B762D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x8212f8d8
	ctx.lr = 0x82B762DC;
	sub_8212F8D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7628c
	if (ctx.cr6.eq) goto loc_82B7628C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b763f0
	if (ctx.cr6.eq) goto loc_82B763F0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b763f0
	if (ctx.cr6.eq) goto loc_82B763F0;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b763f0
	if (ctx.cr6.eq) goto loc_82B763F0;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b763f0
	if (ctx.cr6.eq) goto loc_82B763F0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b763f0
	if (ctx.cr6.eq) goto loc_82B763F0;
loc_82B7632C:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82b763dc
	if (!ctx.cr6.lt) goto loc_82B763DC;
	// mulli r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 * 52;
	// lwz r23,4(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 260, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// bl 0x82b76190
	ctx.lr = 0x82B76358;
	sub_82B76190(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r10,40(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r9,32(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,36(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lfs f0,24(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,28(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f10,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f9,12(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f8,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f7,20(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82b77660
	ctx.lr = 0x82B763C4;
	sub_82B77660(ctx, base);
	// lwz r7,44(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// bl 0x82b760e8
	ctx.lr = 0x82B763D8;
	sub_82B760E8(ctx, base);
	// b 0x82b763e0
	goto loc_82B763E0;
loc_82B763DC:
	// stw r25,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r25.u32);
loc_82B763E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b7632c
	if (!ctx.cr6.eq) goto loc_82B7632C;
	// b 0x82b7628c
	goto loc_82B7628C;
loc_82B763F0:
	// stw r25,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r25.u32);
	// b 0x82b7628c
	goto loc_82B7628C;
loc_82B763F8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B76400;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B76408"))) PPC_WEAK_FUNC(sub_82B76408);
PPC_FUNC_IMPL(__imp__sub_82B76408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82B76410;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82135070
	ctx.lr = 0x82B76434;
	sub_82135070(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b76454
	if (ctx.cr6.eq) goto loc_82B76454;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b76458
	if (ctx.cr6.eq) goto loc_82B76458;
loc_82B76454:
	// twi 31,r0,22
loc_82B76458:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b764ec
	if (ctx.cr6.eq) goto loc_82B764EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b76470
	if (!ctx.cr6.eq) goto loc_82B76470;
	// twi 31,r0,22
loc_82B76470:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b76480
	if (!ctx.cr6.eq) goto loc_82B76480;
	// twi 31,r0,22
loc_82B76480:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b764d0
	if (ctx.cr6.eq) goto loc_82B764D0;
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b764b4
	if (ctx.cr6.eq) goto loc_82B764B4;
loc_82B764A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b764a0
	if (!ctx.cr6.eq) goto loc_82B764A0;
loc_82B764B4:
	// stw r29,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// stw r10,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82B764D0:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// stw r10,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82B764EC:
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82135070
	ctx.lr = 0x82B76500;
	sub_82135070(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b76520
	if (ctx.cr6.eq) goto loc_82B76520;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b76524
	if (ctx.cr6.eq) goto loc_82B76524;
loc_82B76520:
	// twi 31,r0,22
loc_82B76524:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b76580
	if (ctx.cr6.eq) goto loc_82B76580;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b7653c
	if (!ctx.cr6.eq) goto loc_82B7653C;
	// twi 31,r0,22
loc_82B7653C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b7654c
	if (!ctx.cr6.eq) goto loc_82B7654C;
	// twi 31,r0,22
loc_82B7654C:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b7656c
	if (ctx.cr6.eq) goto loc_82B7656C;
loc_82B7655C:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b7655c
	if (!ctx.cr6.eq) goto loc_82B7655C;
loc_82B7656C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// stw r10,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82B76580:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212af78
	ctx.lr = 0x82B7658C;
	sub_8212AF78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B765A0"))) PPC_WEAK_FUNC(sub_82B765A0);
PPC_FUNC_IMPL(__imp__sub_82B765A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x8212bd88
	ctx.lr = 0x82B765B4;
	sub_8212BD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B765D0"))) PPC_WEAK_FUNC(sub_82B765D0);
PPC_FUNC_IMPL(__imp__sub_82B765D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8212bb88
	ctx.lr = 0x82B765E4;
	sub_8212BB88(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82B765F4;
	sub_82218A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7660C"))) PPC_WEAK_FUNC(sub_82B7660C);
PPC_FUNC_IMPL(__imp__sub_82B7660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76610"))) PPC_WEAK_FUNC(sub_82B76610);
PPC_FUNC_IMPL(__imp__sub_82B76610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B76618;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B76638;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212bb88
	ctx.lr = 0x82B76640;
	sub_8212BB88(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82B76650;
	sub_82218A80(ctx, base);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lfs f11,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f10,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// lfs f9,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// lfs f7,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r27)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r10,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r10.u32);
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r9,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r9.u32);
	// lwz r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r8,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r8.u32);
	// bl 0x82b76408
	ctx.lr = 0x82B766B8;
	sub_82B76408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B766C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B766C8"))) PPC_WEAK_FUNC(sub_82B766C8);
PPC_FUNC_IMPL(__imp__sub_82B766C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82B766D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B766EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b7672c
	if (!ctx.cr6.eq) goto loc_82B7672C;
loc_82B76704:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82b76718
	if (!ctx.cr6.lt) goto loc_82B76718;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82b76720
	goto loc_82B76720;
loc_82B76718:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B76720:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b76704
	if (ctx.cr6.eq) goto loc_82B76704;
loc_82B7672C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b76754
	if (ctx.cr6.eq) goto loc_82B76754;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b76754
	if (ctx.cr6.lt) goto loc_82B76754;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// b 0x82b76760
	goto loc_82B76760;
loc_82B76754:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
loc_82B76760:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b76780
	if (ctx.cr6.eq) goto loc_82B76780;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b76784
	if (ctx.cr6.eq) goto loc_82B76784;
loc_82B76780:
	// twi 31,r0,22
loc_82B76784:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82b7686c
	if (ctx.cr6.eq) goto loc_82B7686C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b7679c
	if (!ctx.cr6.eq) goto loc_82B7679C;
	// twi 31,r0,22
loc_82B7679C:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b767ac
	if (!ctx.cr6.eq) goto loc_82B767AC;
	// twi 31,r0,22
loc_82B767AC:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8212b0c8
	ctx.lr = 0x82B767C0;
	sub_8212B0C8(ctx, base);
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82135070
	ctx.lr = 0x82B767D4;
	sub_82135070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b767f8
	if (ctx.cr6.eq) goto loc_82B767F8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b767fc
	if (ctx.cr6.eq) goto loc_82B767FC;
loc_82B767F8:
	// twi 31,r0,22
loc_82B767FC:
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b7686c
	if (ctx.cr6.eq) goto loc_82B7686C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b76814
	if (!ctx.cr6.eq) goto loc_82B76814;
	// twi 31,r0,22
loc_82B76814:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b76824
	if (!ctx.cr6.eq) goto loc_82B76824;
	// twi 31,r0,22
loc_82B76824:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,16(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8212b0c8
	ctx.lr = 0x82B76838;
	sub_8212B0C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b76860
	if (ctx.cr6.eq) goto loc_82B76860;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8212af78
	ctx.lr = 0x82B76850;
	sub_8212AF78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82B76860:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b76040
	ctx.lr = 0x82B7686C;
	sub_82B76040(ctx, base);
loc_82B7686C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B76874;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7687C"))) PPC_WEAK_FUNC(sub_82B7687C);
PPC_FUNC_IMPL(__imp__sub_82B7687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76880"))) PPC_WEAK_FUNC(sub_82B76880);
PPC_FUNC_IMPL(__imp__sub_82B76880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B76888;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-15760
	ctx.r27.s64 = ctx.r11.s64 + -15760;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// bl 0x82c09bec
	ctx.lr = 0x82B768B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b76984
	if (ctx.cr6.eq) goto loc_82B76984;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b76984
	if (ctx.cr6.eq) goto loc_82B76984;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8212bd88
	ctx.lr = 0x82B768D0;
	sub_8212BD88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82135070
	ctx.lr = 0x82B768F4;
	sub_82135070(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b76914
	if (ctx.cr6.eq) goto loc_82B76914;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b76918
	if (ctx.cr6.eq) goto loc_82B76918;
loc_82B76914:
	// twi 31,r0,22
loc_82B76918:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b7695c
	if (ctx.cr6.eq) goto loc_82B7695C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b76930
	if (!ctx.cr6.eq) goto loc_82B76930;
	// twi 31,r0,22
loc_82B76930:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b76940
	if (!ctx.cr6.eq) goto loc_82B76940;
	// twi 31,r0,22
loc_82B76940:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x8212b0c8
	ctx.lr = 0x82B76954;
	sub_8212B0C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_82B7695C:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8212af78
	ctx.lr = 0x82B76968;
	sub_8212AF78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// bl 0x8212af78
	ctx.lr = 0x82B7697C;
	sub_8212AF78(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_82B76984:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B7698C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B76994"))) PPC_WEAK_FUNC(sub_82B76994);
PPC_FUNC_IMPL(__imp__sub_82B76994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76998"))) PPC_WEAK_FUNC(sub_82B76998);
PPC_FUNC_IMPL(__imp__sub_82B76998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82B769A0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82b75e18
	ctx.lr = 0x82B769B8;
	sub_82B75E18(ctx, base);
	// cmplwi cr6,r24,12
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12, ctx.xer);
	// blt cr6,0x82b76b34
	if (ctx.cr6.lt) goto loc_82B76B34;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82219130
	ctx.lr = 0x82B769D0;
	sub_82219130(ctx, base);
	// lis r11,19791
	ctx.r11.s64 = 1297022976;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r10,r11,18753
	ctx.r10.u64 = ctx.r11.u64 | 18753;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b76b34
	if (!ctx.cr6.eq) goto loc_82B76B34;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82b76b24
	if (ctx.cr6.lt) goto loc_82B76B24;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b76b24
	if (ctx.cr6.eq) goto loc_82B76B24;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// li r29,56
	ctx.r29.s64 = 56;
	// li r28,16
	ctx.r28.s64 = 16;
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
loc_82B76A18:
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bgt cr6,0x82b76b34
	if (ctx.cr6.gt) goto loc_82B76B34;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// bgt cr6,0x82b76b34
	if (ctx.cr6.gt) goto loc_82B76B34;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82219130
	ctx.lr = 0x82B76A9C;
	sub_82219130(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f7,196(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x82b76610
	ctx.lr = 0x82B76B18;
	sub_82B76610(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82b76a18
	if (ctx.cr6.lt) goto loc_82B76A18;
loc_82B76B24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82B76B34:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b75e18
	ctx.lr = 0x82B76B3C;
	sub_82B75E18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B76B4C"))) PPC_WEAK_FUNC(sub_82B76B4C);
PPC_FUNC_IMPL(__imp__sub_82B76B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76B50"))) PPC_WEAK_FUNC(sub_82B76B50);
PPC_FUNC_IMPL(__imp__sub_82B76B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82132890
	ctx.lr = 0x82B76B6C;
	sub_82132890(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82132890
	ctx.lr = 0x82B76B74;
	sub_82132890(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8212b058
	ctx.lr = 0x82B76B7C;
	sub_8212B058(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8212ba80
	ctx.lr = 0x82B76B84;
	sub_8212BA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212ba80
	ctx.lr = 0x82B76B8C;
	sub_8212BA80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B76BA0"))) PPC_WEAK_FUNC(sub_82B76BA0);
PPC_FUNC_IMPL(__imp__sub_82B76BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B76BA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// bl 0x82120ae0
	ctx.lr = 0x82B76BC0;
	sub_82120AE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76bcc
	if (ctx.cr6.eq) goto loc_82B76BCC;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82B76BCC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76bd8
	if (ctx.cr0.eq) goto loc_82B76BD8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82B76BD8:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// bl 0x82120ae0
	ctx.lr = 0x82B76BF8;
	sub_82120AE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76c04
	if (ctx.cr6.eq) goto loc_82B76C04;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82B76C04:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76c10
	if (ctx.cr0.eq) goto loc_82B76C10;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82B76C10:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// bl 0x82122f90
	ctx.lr = 0x82B76C28;
	sub_82122F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76c34
	if (ctx.cr6.eq) goto loc_82B76C34;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82B76C34:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76c40
	if (ctx.cr0.eq) goto loc_82B76C40;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B76C40:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76c4c
	if (ctx.cr0.eq) goto loc_82B76C4C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B76C4C:
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r30,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r30.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stb r29,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r11,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r11.u8);
	// bl 0x82122f90
	ctx.lr = 0x82B76C8C;
	sub_82122F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76c98
	if (ctx.cr6.eq) goto loc_82B76C98;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82B76C98:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76ca4
	if (ctx.cr0.eq) goto loc_82B76CA4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B76CA4:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76cb0
	if (ctx.cr0.eq) goto loc_82B76CB0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B76CB0:
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// stb r30,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r30.u8);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stb r29,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stb r11,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r11.u8);
	// bl 0x82122f90
	ctx.lr = 0x82B76CEC;
	sub_82122F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76cf8
	if (ctx.cr6.eq) goto loc_82B76CF8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82B76CF8:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76d04
	if (ctx.cr0.eq) goto loc_82B76D04;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B76D04:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b76d10
	if (ctx.cr0.eq) goto loc_82B76D10;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82B76D10:
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// stb r30,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r30.u8);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// stb r29,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x8212bb88
	ctx.lr = 0x82B76D48;
	sub_8212BB88(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82B76D58;
	sub_82218A80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b760e8
	ctx.lr = 0x82B76D64;
	sub_82B760E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212bd88
	ctx.lr = 0x82B76D6C;
	sub_8212BD88(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// bl 0x82b76040
	ctx.lr = 0x82B76D84;
	sub_82B76040(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B76D8C"))) PPC_WEAK_FUNC(sub_82B76D8C);
PPC_FUNC_IMPL(__imp__sub_82B76D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76D90"))) PPC_WEAK_FUNC(sub_82B76D90);
PPC_FUNC_IMPL(__imp__sub_82B76D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r31,13212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b76dec
	if (ctx.cr6.eq) goto loc_82B76DEC;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82132890
	ctx.lr = 0x82B76DBC;
	sub_82132890(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82132890
	ctx.lr = 0x82B76DC4;
	sub_82132890(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8212b058
	ctx.lr = 0x82B76DCC;
	sub_8212B058(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8212ba80
	ctx.lr = 0x82B76DD4;
	sub_8212BA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212ba80
	ctx.lr = 0x82B76DDC;
	sub_8212BA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82B76DE4;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13212, ctx.r11.u32);
loc_82B76DEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B76E04"))) PPC_WEAK_FUNC(sub_82B76E04);
PPC_FUNC_IMPL(__imp__sub_82B76E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76E08"))) PPC_WEAK_FUNC(sub_82B76E08);
PPC_FUNC_IMPL(__imp__sub_82B76E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b76e60
	if (!ctx.cr6.eq) goto loc_82B76E60;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82120040
	ctx.lr = 0x82B76E34;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76e58
	if (ctx.cr6.eq) goto loc_82B76E58;
	// bl 0x82b76ba0
	ctx.lr = 0x82B76E40;
	sub_82B76BA0(ctx, base);
	// stw r3,13212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B76E58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13212, ctx.r11.u32);
loc_82B76E60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B76E74"))) PPC_WEAK_FUNC(sub_82B76E74);
PPC_FUNC_IMPL(__imp__sub_82B76E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76E78"))) PPC_WEAK_FUNC(sub_82B76E78);
PPC_FUNC_IMPL(__imp__sub_82B76E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B76E7C"))) PPC_WEAK_FUNC(sub_82B76E7C);
PPC_FUNC_IMPL(__imp__sub_82B76E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76E80"))) PPC_WEAK_FUNC(sub_82B76E80);
PPC_FUNC_IMPL(__imp__sub_82B76E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B76E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82137170
	ctx.lr = 0x82B76EA0;
	sub_82137170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76f24
	if (ctx.cr6.eq) goto loc_82B76F24;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82B76EB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b76ecc
	if (ctx.cr6.eq) goto loc_82B76ECC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b76ed0
	if (ctx.cr6.lt) goto loc_82B76ED0;
loc_82B76ECC:
	// twi 31,r0,22
loc_82B76ED0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b76ef4
	if (ctx.cr6.eq) goto loc_82B76EF4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82b76eb0
	if (ctx.cr6.lt) goto loc_82B76EB0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82B76EF4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b76f14
	if (ctx.cr6.eq) goto loc_82B76F14;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b76f18
	if (ctx.cr6.lt) goto loc_82B76F18;
loc_82B76F14:
	// twi 31,r0,22
loc_82B76F18:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82B76F24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B76F2C"))) PPC_WEAK_FUNC(sub_82B76F2C);
PPC_FUNC_IMPL(__imp__sub_82B76F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76F30"))) PPC_WEAK_FUNC(sub_82B76F30);
PPC_FUNC_IMPL(__imp__sub_82B76F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B76F38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82138898
	ctx.lr = 0x82B76F44;
	sub_82138898(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82137170
	ctx.lr = 0x82B76F50;
	sub_82137170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b76fa8
	if (ctx.cr6.eq) goto loc_82B76FA8;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B76F60:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b76f80
	if (ctx.cr6.eq) goto loc_82B76F80;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b76f84
	if (ctx.cr6.lt) goto loc_82B76F84;
loc_82B76F80:
	// twi 31,r0,22
loc_82B76F84:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82b78438
	ctx.lr = 0x82B76F90;
	sub_82B78438(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82137170
	ctx.lr = 0x82B76FA0;
	sub_82137170(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82b76f60
	if (ctx.cr6.lt) goto loc_82B76F60;
loc_82B76FA8:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82b76fc8
	if (!ctx.cr6.gt) goto loc_82B76FC8;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
loc_82B76FC8:
	// beq cr6,0x82b76fec
	if (ctx.cr6.eq) goto loc_82B76FEC;
	// subf r11,r5,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r3
	ctx.r31.u64 = ctx.r6.u64 + ctx.r3.u64;
	// ble 0x82b76fe8
	if (!ctx.cr0.gt) goto loc_82B76FE8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8221b920
	ctx.lr = 0x82B76FE8;
	sub_8221B920(ctx, base);
loc_82B76FE8:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82B76FEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B76FF4"))) PPC_WEAK_FUNC(sub_82B76FF4);
PPC_FUNC_IMPL(__imp__sub_82B76FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B76FF8"))) PPC_WEAK_FUNC(sub_82B76FF8);
PPC_FUNC_IMPL(__imp__sub_82B76FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82B77000;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8212aa68
	ctx.lr = 0x82B77018;
	sub_8212AA68(ctx, base);
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212aa68
	ctx.lr = 0x82B77028;
	sub_8212AA68(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// beq cr6,0x82b771c8
	if (ctx.cr6.eq) goto loc_82B771C8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
loc_82B77040:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r9,3(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r8,1(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r7,2(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,12456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12456);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82b77090
	if (ctx.cr6.eq) goto loc_82B77090;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82B77090:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82137170
	ctx.lr = 0x82B770A0;
	sub_82137170(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82b770b4
	if (ctx.cr6.lt) goto loc_82B770B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82121b48
	ctx.lr = 0x82B770B4;
	sub_82121B48(ctx, base);
loc_82B770B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b770d4
	if (ctx.cr6.eq) goto loc_82B770D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b77154
	if (ctx.cr6.lt) goto loc_82B77154;
loc_82B770D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b770ec
	if (!ctx.cr6.eq) goto loc_82B770EC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// b 0x82b770f8
	goto loc_82B770F8;
loc_82B770EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_82B770F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77128
	if (ctx.cr6.eq) goto loc_82B77128;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b77128
	if (!ctx.cr6.lt) goto loc_82B77128;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82b77154
	goto loc_82B77154;
loc_82B77128:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b77138
	if (!ctx.cr6.gt) goto loc_82B77138;
	// twi 31,r0,22
loc_82B77138:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8212ab58
	ctx.lr = 0x82B77154;
	sub_8212AB58(ctx, base);
loc_82B77154:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b77174
	if (ctx.cr6.eq) goto loc_82B77174;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b77178
	if (ctx.cr6.lt) goto loc_82B77178;
loc_82B77174:
	// twi 31,r0,22
loc_82B77178:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r4,r27,r10
	ctx.r4.u64 = ctx.r27.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7719c
	if (ctx.cr6.eq) goto loc_82B7719C;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b771a0
	if (ctx.cr6.lt) goto loc_82B771A0;
loc_82B7719C:
	// twi 31,r0,22
loc_82B771A0:
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,22344
	ctx.r5.s64 = ctx.r10.s64 + 22344;
	// bl 0x82bce5d8
	ctx.lr = 0x82B771B8;
	sub_82BCE5D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82b77040
	if (ctx.cr6.lt) goto loc_82B77040;
loc_82B771C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B771D4"))) PPC_WEAK_FUNC(sub_82B771D4);
PPC_FUNC_IMPL(__imp__sub_82B771D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B771D8"))) PPC_WEAK_FUNC(sub_82B771D8);
PPC_FUNC_IMPL(__imp__sub_82B771D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b77200
	if (!ctx.cr6.eq) goto loc_82B77200;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82B77200:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82B77214;
	sub_82BFD450(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r3,13208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13208);
	// bl 0x82b76ff8
	ctx.lr = 0x82B7722C;
	sub_82B76FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7723C"))) PPC_WEAK_FUNC(sub_82B7723C);
PPC_FUNC_IMPL(__imp__sub_82B7723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77240"))) PPC_WEAK_FUNC(sub_82B77240);
PPC_FUNC_IMPL(__imp__sub_82B77240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B77248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1024
	ctx.r11.s64 = -67108864;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// ori r29,r11,7
	ctx.r29.u64 = ctx.r11.u64 | 7;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r6,20
	ctx.r6.s64 = 1310720;
	// addi r5,r10,26640
	ctx.r5.s64 = ctx.r10.s64 + 26640;
	// lwz r3,12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// addi r4,r9,-16988
	ctx.r4.s64 = ctx.r9.s64 + -16988;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ori r6,r6,57235
	ctx.r6.u64 = ctx.r6.u64 | 57235;
	// bl 0x82bce488
	ctx.lr = 0x82B7727C;
	sub_82BCE488(ctx, base);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b7729c
	if (ctx.cr6.eq) goto loc_82B7729C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// bl 0x82bcd9f8
	ctx.lr = 0x82B7729C;
	sub_82BCD9F8(ctx, base);
loc_82B7729C:
	// lis r11,-32073
	ctx.r11.s64 = -2101936128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,29144
	ctx.r5.s64 = ctx.r11.s64 + 29144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82B772B8;
	sub_82BCE5D8(ctx, base);
	// bl 0x82bce6a8
	ctx.lr = 0x82B772BC;
	sub_82BCE6A8(ctx, base);
	// lwz r11,12476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12476);
	// lwz r3,12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b772d0
	if (ctx.cr6.eq) goto loc_82B772D0;
	// bl 0x82bcd270
	ctx.lr = 0x82B772D0;
	sub_82BCD270(ctx, base);
loc_82B772D0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b772e0
	if (ctx.cr6.eq) goto loc_82B772E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bce260
	ctx.lr = 0x82B772E0;
	sub_82BCE260(ctx, base);
loc_82B772E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B772E8"))) PPC_WEAK_FUNC(sub_82B772E8);
PPC_FUNC_IMPL(__imp__sub_82B772E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b77240
	sub_82B77240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B772EC"))) PPC_WEAK_FUNC(sub_82B772EC);
PPC_FUNC_IMPL(__imp__sub_82B772EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B772F0"))) PPC_WEAK_FUNC(sub_82B772F0);
PPC_FUNC_IMPL(__imp__sub_82B772F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B772F4"))) PPC_WEAK_FUNC(sub_82B772F4);
PPC_FUNC_IMPL(__imp__sub_82B772F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B772F8"))) PPC_WEAK_FUNC(sub_82B772F8);
PPC_FUNC_IMPL(__imp__sub_82B772F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B772FC"))) PPC_WEAK_FUNC(sub_82B772FC);
PPC_FUNC_IMPL(__imp__sub_82B772FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77300"))) PPC_WEAK_FUNC(sub_82B77300);
PPC_FUNC_IMPL(__imp__sub_82B77300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77304"))) PPC_WEAK_FUNC(sub_82B77304);
PPC_FUNC_IMPL(__imp__sub_82B77304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77308"))) PPC_WEAK_FUNC(sub_82B77308);
PPC_FUNC_IMPL(__imp__sub_82B77308) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77310"))) PPC_WEAK_FUNC(sub_82B77310);
PPC_FUNC_IMPL(__imp__sub_82B77310) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77318"))) PPC_WEAK_FUNC(sub_82B77318);
PPC_FUNC_IMPL(__imp__sub_82B77318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B7731C"))) PPC_WEAK_FUNC(sub_82B7731C);
PPC_FUNC_IMPL(__imp__sub_82B7731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77320"))) PPC_WEAK_FUNC(sub_82B77320);
PPC_FUNC_IMPL(__imp__sub_82B77320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77324"))) PPC_WEAK_FUNC(sub_82B77324);
PPC_FUNC_IMPL(__imp__sub_82B77324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77328"))) PPC_WEAK_FUNC(sub_82B77328);
PPC_FUNC_IMPL(__imp__sub_82B77328) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82b77660
	sub_82B77660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B77338"))) PPC_WEAK_FUNC(sub_82B77338);
PPC_FUNC_IMPL(__imp__sub_82B77338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// stw r10,13192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13192, ctx.r10.u32);
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
	// lwz r3,-17552(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17552);
	// bl 0x82b77b28
	ctx.lr = 0x82B7736C;
	sub_82B77B28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77388"))) PPC_WEAK_FUNC(sub_82B77388);
PPC_FUNC_IMPL(__imp__sub_82B77388) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82b77d30
	sub_82B77D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B77390"))) PPC_WEAK_FUNC(sub_82B77390);
PPC_FUNC_IMPL(__imp__sub_82B77390) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82b77d30
	sub_82B77D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B77398"))) PPC_WEAK_FUNC(sub_82B77398);
PPC_FUNC_IMPL(__imp__sub_82B77398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bebe30
	ctx.lr = 0x82B773A8;
	sub_82BEBE30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B773BC"))) PPC_WEAK_FUNC(sub_82B773BC);
PPC_FUNC_IMPL(__imp__sub_82B773BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B773C0"))) PPC_WEAK_FUNC(sub_82B773C0);
PPC_FUNC_IMPL(__imp__sub_82B773C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b773ec
	if (ctx.cr6.eq) goto loc_82B773EC;
	// bl 0x82120a70
	ctx.lr = 0x82B773E4;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13204, ctx.r11.u32);
loc_82B773EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77400"))) PPC_WEAK_FUNC(sub_82B77400);
PPC_FUNC_IMPL(__imp__sub_82B77400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b77430
	if (!ctx.cr6.eq) goto loc_82B77430;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82120040
	ctx.lr = 0x82B7742C;
	sub_82120040(ctx, base);
	// stw r3,13204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13204, ctx.r3.u32);
loc_82B77430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77444"))) PPC_WEAK_FUNC(sub_82B77444);
PPC_FUNC_IMPL(__imp__sub_82B77444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77448"))) PPC_WEAK_FUNC(sub_82B77448);
PPC_FUNC_IMPL(__imp__sub_82B77448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
	// bl 0x82c04a18
	ctx.lr = 0x82B77468;
	sub_82C04A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77484"))) PPC_WEAK_FUNC(sub_82B77484);
PPC_FUNC_IMPL(__imp__sub_82B77484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77488"))) PPC_WEAK_FUNC(sub_82B77488);
PPC_FUNC_IMPL(__imp__sub_82B77488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
	// bl 0x82b78cf8
	ctx.lr = 0x82B774A8;
	sub_82B78CF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B774C4"))) PPC_WEAK_FUNC(sub_82B774C4);
PPC_FUNC_IMPL(__imp__sub_82B774C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B774C8"))) PPC_WEAK_FUNC(sub_82B774C8);
PPC_FUNC_IMPL(__imp__sub_82B774C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,13176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13176, ctx.r4.u32);
	// stw r3,13172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13172, ctx.r3.u32);
	// beq cr6,0x82b774ec
	if (ctx.cr6.eq) goto loc_82B774EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82B774EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B774F4"))) PPC_WEAK_FUNC(sub_82B774F4);
PPC_FUNC_IMPL(__imp__sub_82B774F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B774F8"))) PPC_WEAK_FUNC(sub_82B774F8);
PPC_FUNC_IMPL(__imp__sub_82B774F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B774FC"))) PPC_WEAK_FUNC(sub_82B774FC);
PPC_FUNC_IMPL(__imp__sub_82B774FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77500"))) PPC_WEAK_FUNC(sub_82B77500);
PPC_FUNC_IMPL(__imp__sub_82B77500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77504"))) PPC_WEAK_FUNC(sub_82B77504);
PPC_FUNC_IMPL(__imp__sub_82B77504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77508"))) PPC_WEAK_FUNC(sub_82B77508);
PPC_FUNC_IMPL(__imp__sub_82B77508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-14944
	ctx.r31.s64 = ctx.r11.s64 + -14944;
	// ori r5,r5,50946
	ctx.r5.u64 = ctx.r5.u64 | 50946;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218a80
	ctx.lr = 0x82B77534;
	sub_82218A80(ctx, base);
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,26596
	ctx.r9.s64 = ctx.r11.s64 + 26596;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B77544:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 + 44;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// sthx r7,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u16);
	// blt cr6,0x82b77544
	if (ctx.cr6.lt) goto loc_82B77544;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,18344
	ctx.r9.s64 = ctx.r11.s64 + 18344;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B7757C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r9,108
	ctx.r5.s64 = ctx.r9.s64 + 108;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// sthx r7,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u16);
	// blt cr6,0x82b7757c
	if (ctx.cr6.lt) goto loc_82B7757C;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,18456
	ctx.r9.s64 = ctx.r11.s64 + 18456;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B775B4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r9,150
	ctx.r5.s64 = ctx.r9.s64 + 150;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// sthx r7,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u16);
	// blt cr6,0x82b775b4
	if (ctx.cr6.lt) goto loc_82B775B4;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,18608
	ctx.r9.s64 = ctx.r11.s64 + 18608;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B775EC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r9,3870
	ctx.r5.s64 = ctx.r9.s64 + 3870;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// sthx r7,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u16);
	// blt cr6,0x82b775ec
	if (ctx.cr6.lt) goto loc_82B775EC;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,22480
	ctx.r9.s64 = ctx.r11.s64 + 22480;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B77624:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r9,66
	ctx.r5.s64 = ctx.r9.s64 + 66;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// sthx r7,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u16);
	// blt cr6,0x82b77624
	if (ctx.cr6.lt) goto loc_82B77624;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77660"))) PPC_WEAK_FUNC(sub_82B77660);
PPC_FUNC_IMPL(__imp__sub_82B77660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82B77668;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77704
	if (ctx.cr6.eq) goto loc_82B77704;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b77704
	if (ctx.cr6.eq) goto loc_82B77704;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77704
	if (ctx.cr6.eq) goto loc_82B77704;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b77704
	if (ctx.cr6.eq) goto loc_82B77704;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b776c0
	if (!ctx.cr6.eq) goto loc_82B776C0;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b77704
	if (ctx.cr6.eq) goto loc_82B77704;
loc_82B776C0:
	// lbz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r9,r5,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b77704
	if (ctx.cr6.eq) goto loc_82B77704;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r9,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b7772c
	if (ctx.cr6.eq) goto loc_82B7772C;
	// cmpwi cr6,r17,4
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 4, ctx.xer);
	// beq cr6,0x82b7773c
	if (ctx.cr6.eq) goto loc_82B7773C;
	// cmpwi cr6,r17,5
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 5, ctx.xer);
	// beq cr6,0x82b7772c
	if (ctx.cr6.eq) goto loc_82B7772C;
	// cmpwi cr6,r17,6
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 6, ctx.xer);
	// bne cr6,0x82b77710
	if (!ctx.cr6.eq) goto loc_82B77710;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b77804
	if (!ctx.cr6.eq) goto loc_82B77804;
loc_82B77704:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
loc_82B77710:
	// cmpwi cr6,r17,12
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 12, ctx.xer);
	// beq cr6,0x82b77804
	if (ctx.cr6.eq) goto loc_82B77804;
	// cmpwi cr6,r17,9
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 9, ctx.xer);
	// beq cr6,0x82b77804
	if (ctx.cr6.eq) goto loc_82B77804;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
loc_82B7772C:
	// cmpwi cr6,r17,4
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 4, ctx.xer);
	// beq cr6,0x82b7773c
	if (ctx.cr6.eq) goto loc_82B7773C;
	// cmpwi cr6,r17,5
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 5, ctx.xer);
	// bne cr6,0x82b77804
	if (!ctx.cr6.eq) goto loc_82B77804;
loc_82B7773C:
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b77704
	if (!ctx.cr6.eq) goto loc_82B77704;
	// cmpwi cr6,r17,5
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 5, ctx.xer);
	// bne cr6,0x82b777f8
	if (!ctx.cr6.eq) goto loc_82B777F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82b77774
	if (!ctx.cr6.gt) goto loc_82B77774;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b7778c
	if (ctx.cr6.eq) goto loc_82B7778C;
	// b 0x82b77804
	goto loc_82B77804;
loc_82B77774:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82b7778c
	if (!ctx.cr6.gt) goto loc_82B7778C;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b77798
	if (ctx.cr6.eq) goto loc_82B77798;
loc_82B7778C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b7779c
	if (!ctx.cr6.eq) goto loc_82B7779C;
loc_82B77798:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B7779C:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82b777e8
	if (!ctx.cr6.gt) goto loc_82B777E8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_82B777B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b777d0
	if (ctx.cr6.eq) goto loc_82B777D0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x82b777e4
	if (ctx.cr6.eq) goto loc_82B777E4;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82b777f8
	if (ctx.cr6.eq) goto loc_82B777F8;
loc_82B777D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82b777b0
	if (ctx.cr6.lt) goto loc_82B777B0;
	// b 0x82b777e8
	goto loc_82B777E8;
loc_82B777E4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82B777E8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b77804
	if (ctx.cr6.eq) goto loc_82B77804;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82b77804
	if (!ctx.cr6.eq) goto loc_82B77804;
loc_82B777F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r5,r11,0,31,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r5.u64 & 0xFE);
	// stb r5,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r5.u8);
loc_82B77804:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r22,r11,-15760
	ctx.r22.s64 = ctx.r11.s64 + -15760;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B77814;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r18,13176(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13176);
	// lwz r21,13188(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r20,13180(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r19,13172(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13172);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b778b8
	if (!ctx.cr6.lt) goto loc_82B778B8;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b778b8
	if (ctx.cr6.eq) goto loc_82B778B8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r30,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r30.u32);
	// stw r31,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r31.u32);
	// stw r31,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r31.u32);
	// stw r10,13176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13176, ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// stw r11,13172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13172, ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b778b8
	if (ctx.cr6.eq) goto loc_82B778B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B778B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82b77958
	if (ctx.cr6.eq) goto loc_82B77958;
loc_82B778B8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b77958
	if (!ctx.cr6.gt) goto loc_82B77958;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B778CC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b77944
	if (ctx.cr6.eq) goto loc_82B77944;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x82b77944
	if (!ctx.cr6.eq) goto loc_82B77944;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,13176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13176, ctx.r11.u32);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,13172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13172, ctx.r10.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82b77944
	if (ctx.cr6.eq) goto loc_82B77944;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B77944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B77944:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b778cc
	if (ctx.cr6.lt) goto loc_82B778CC;
loc_82B77958:
	// stw r21,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r21.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r21,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r21.u32);
	// stw r20,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r20.u32);
	// stw r20,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r20.u32);
	// stw r19,13172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13172, ctx.r19.u32);
	// stw r18,13176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13176, ctx.r18.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x82B77978;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B77984"))) PPC_WEAK_FUNC(sub_82B77984);
PPC_FUNC_IMPL(__imp__sub_82B77984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77988"))) PPC_WEAK_FUNC(sub_82B77988);
PPC_FUNC_IMPL(__imp__sub_82B77988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B779A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r4,13200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13200);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b77a38
	if (ctx.cr6.eq) goto loc_82B77A38;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82b779d4
	if (!ctx.cr6.gt) goto loc_82B779D4;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
loc_82B779D4:
	// beq cr6,0x82b77a38
	if (ctx.cr6.eq) goto loc_82B77A38;
	// li r7,80
	ctx.r7.s64 = 80;
	// subf r11,r8,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r8.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// divw r11,r11,r7
	ctx.r11.s32 = ctx.r11.s32 / ctx.r7.s32;
	// cmplw cr6,r8,r8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82b77a34
	if (ctx.cr6.eq) goto loc_82B77A34;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82B77A04:
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r7,10
	ctx.r7.s64 = 10;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82B77A14:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82b77a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B77A14;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82b77a04
	if (!ctx.cr6.eq) goto loc_82B77A04;
loc_82B77A34:
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
loc_82B77A38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B77A40;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77A54"))) PPC_WEAK_FUNC(sub_82B77A54);
PPC_FUNC_IMPL(__imp__sub_82B77A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77A58"))) PPC_WEAK_FUNC(sub_82B77A58);
PPC_FUNC_IMPL(__imp__sub_82B77A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B77A80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r8,13200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13200);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b77b04
	if (ctx.cr6.eq) goto loc_82B77B04;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82B77AA0:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b77b04
	if (ctx.cr6.eq) goto loc_82B77B04;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r4,r6
	ctx.r11.s32 = ctx.r4.s32 / ctx.r6.s32;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b77b04
	if (!ctx.cr6.lt) goto loc_82B77B04;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b77af8
	if (ctx.cr6.eq) goto loc_82B77AF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b77af4
	if (ctx.cr6.eq) goto loc_82B77AF4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82b77af4
	if (ctx.cr6.eq) goto loc_82B77AF4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82b77af8
	if (!ctx.cr6.eq) goto loc_82B77AF8;
loc_82B77AF4:
	// stw r5,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
loc_82B77AF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,80
	ctx.r7.s64 = ctx.r7.s64 + 80;
	// b 0x82b77aa0
	goto loc_82B77AA0;
loc_82B77B04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B77B0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77B24"))) PPC_WEAK_FUNC(sub_82B77B24);
PPC_FUNC_IMPL(__imp__sub_82B77B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77B28"))) PPC_WEAK_FUNC(sub_82B77B28);
PPC_FUNC_IMPL(__imp__sub_82B77B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82B77B30;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b77c84
	if (ctx.cr6.eq) goto loc_82B77C84;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77c84
	if (ctx.cr6.eq) goto loc_82B77C84;
	// lbz r11,15(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b77c84
	if (!ctx.cr6.eq) goto loc_82B77C84;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r22,r11,-15760
	ctx.r22.s64 = ctx.r11.s64 + -15760;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B77B6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,13184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13184, ctx.r29.u32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// stw r29,13180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13180, ctx.r29.u32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// stw r11,13196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13196, ctx.r11.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lis r27,-32030
	ctx.r27.s64 = -2099118080;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
loc_82B77BA0:
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// stw r31,13168(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13168, ctx.r31.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,18452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 18452, ctx.r11.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77c70
	if (ctx.cr6.eq) goto loc_82B77C70;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,13172(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13172, ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r11,13176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13176, ctx.r11.u32);
	// beq cr6,0x82b77c70
	if (ctx.cr6.eq) goto loc_82B77C70;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B77BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82b77c7c
	if (ctx.cr6.eq) goto loc_82B77C7C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b77c28
	if (ctx.cr6.eq) goto loc_82B77C28;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77c28
	if (ctx.cr6.eq) goto loc_82B77C28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b77c1c
	if (ctx.cr6.eq) goto loc_82B77C1C;
	// lwz r11,13176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13176);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// b 0x82b77c28
	goto loc_82B77C28;
loc_82B77C1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,13176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13176);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82B77C28:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82b77c7c
	if (ctx.cr6.eq) goto loc_82B77C7C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82b77c90
	if (ctx.cr6.eq) goto loc_82B77C90;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82b77c48
	if (!ctx.cr6.eq) goto loc_82B77C48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x82b77c70
	goto loc_82B77C70;
loc_82B77C48:
	// lwz r11,18452(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18452);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82b77c70
	if (ctx.cr6.eq) goto loc_82B77C70;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bge cr6,0x82b77c70
	if (!ctx.cr6.lt) goto loc_82B77C70;
	// subfic r11,r11,12
	ctx.xer.ca = ctx.r11.u32 <= 12;
	ctx.r11.s64 = 12 - ctx.r11.s64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b77c70
	if (ctx.cr6.lt) goto loc_82B77C70;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82B77C70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x82b77ba0
	if (ctx.cr6.lt) goto loc_82B77BA0;
loc_82B77C7C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B77C84;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B77C84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_82B77C90:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B77C98;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B77CA4"))) PPC_WEAK_FUNC(sub_82B77CA4);
PPC_FUNC_IMPL(__imp__sub_82B77CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77CA8"))) PPC_WEAK_FUNC(sub_82B77CA8);
PPC_FUNC_IMPL(__imp__sub_82B77CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B77CC8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// stw r11,13172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13172, ctx.r11.u32);
	// lis r4,-31942
	ctx.r4.s64 = -2093350912;
	// lis r3,-31942
	ctx.r3.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,13188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13180, ctx.r10.u32);
	// stw r9,13184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13184, ctx.r9.u32);
	// stw r10,13192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13192, ctx.r10.u32);
	// stw r9,13196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13196, ctx.r9.u32);
	// stw r11,13168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13168, ctx.r11.u32);
	// bl 0x82b77988
	ctx.lr = 0x82B77D10;
	sub_82B77988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B77D18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B77D2C"))) PPC_WEAK_FUNC(sub_82B77D2C);
PPC_FUNC_IMPL(__imp__sub_82B77D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77D30"))) PPC_WEAK_FUNC(sub_82B77D30);
PPC_FUNC_IMPL(__imp__sub_82B77D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B77D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B77D50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r11,13336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b77d98
	if (!ctx.cr6.eq) goto loc_82B77D98;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6d08
	ctx.lr = 0x82B77D84;
	sub_827E6D08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B77D8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82B77D98:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// beq cr6,0x82b77dc4
	if (ctx.cr6.eq) goto loc_82B77DC4;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// beq cr6,0x82b77dbc
	if (ctx.cr6.eq) goto loc_82B77DBC;
	// addi r3,r11,252
	ctx.r3.s64 = ctx.r11.s64 + 252;
	// b 0x82b77dc8
	goto loc_82B77DC8;
loc_82B77DBC:
	// addi r3,r11,284
	ctx.r3.s64 = ctx.r11.s64 + 284;
	// b 0x82b77dc8
	goto loc_82B77DC8;
loc_82B77DC4:
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
loc_82B77DC8:
	// bl 0x8212a980
	ctx.lr = 0x82B77DCC;
	sub_8212A980(ctx, base);
loc_82B77DCC:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B77DD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b77de8
	if (ctx.cr6.eq) goto loc_82B77DE8;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82b77dec
	goto loc_82B77DEC;
loc_82B77DE8:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_82B77DEC:
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77ec0
	if (ctx.cr6.eq) goto loc_82B77EC0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b77e1c
	if (ctx.cr6.eq) goto loc_82B77E1C;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// b 0x82b77e2c
	goto loc_82B77E2C;
loc_82B77E1C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
loc_82B77E2C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r11,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b77dd8
	if (ctx.cr6.eq) goto loc_82B77DD8;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b77dd8
	if (!ctx.cr6.eq) goto loc_82B77DD8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rlwinm r6,r7,0,17,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82b77dd8
	if (!ctx.cr6.eq) goto loc_82B77DD8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77dd8
	if (ctx.cr6.eq) goto loc_82B77DD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b77dd8
	if (ctx.cr6.eq) goto loc_82B77DD8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b77dd8
	if (ctx.cr6.eq) goto loc_82B77DD8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82b77dd8
	if (!ctx.cr6.lt) goto loc_82B77DD8;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b77dd8
	if (ctx.cr6.eq) goto loc_82B77DD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b77660
	ctx.lr = 0x82B77EB8;
	sub_82B77660(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x82b77dcc
	goto loc_82B77DCC;
loc_82B77EC0:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,13192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13192, ctx.r11.u32);
	// stw r10,13188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13188, ctx.r10.u32);
	// bl 0x827e6d08
	ctx.lr = 0x82B77EE0;
	sub_827E6D08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B77EE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cntlzw r7,r30
	ctx.r7.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B77EFC"))) PPC_WEAK_FUNC(sub_82B77EFC);
PPC_FUNC_IMPL(__imp__sub_82B77EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77F00"))) PPC_WEAK_FUNC(sub_82B77F00);
PPC_FUNC_IMPL(__imp__sub_82B77F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// b 0x827eef18
	sub_827EEF18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B77F0C"))) PPC_WEAK_FUNC(sub_82B77F0C);
PPC_FUNC_IMPL(__imp__sub_82B77F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B77F10"))) PPC_WEAK_FUNC(sub_82B77F10);
PPC_FUNC_IMPL(__imp__sub_82B77F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82B77F18;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b78120
	if (ctx.cr6.eq) goto loc_82B78120;
	// lwz r20,0(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82b78120
	if (ctx.cr6.eq) goto loc_82B78120;
	// lis r19,-31945
	ctx.r19.s64 = -2093547520;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,-17552(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17552);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82b77fcc
	if (ctx.cr6.eq) goto loc_82B77FCC;
	// addi r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 + 24;
	// subfic r8,r26,4
	ctx.xer.ca = ctx.r26.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r26.s64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82B77F5C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b78128
	if (ctx.cr6.eq) goto loc_82B78128;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82b77fa8
	if (ctx.cr6.eq) goto loc_82B77FA8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// bne cr6,0x82b77fa8
	if (!ctx.cr6.eq) goto loc_82B77FA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b77fa8
	if (ctx.cr6.eq) goto loc_82B77FA8;
	// stw r7,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r7.u32);
loc_82B77FA8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82b77f5c
	if (!ctx.cr0.eq) goto loc_82B77F5C;
	// lwz r3,56(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b77fcc
	if (ctx.cr6.eq) goto loc_82B77FCC;
	// bl 0x82120a70
	ctx.lr = 0x82B77FC4;
	sub_82120A70(ctx, base);
	// stw r25,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r25.u32);
	// stw r25,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r25.u32);
loc_82B77FCC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b78120
	if (ctx.cr6.eq) goto loc_82B78120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// addi r21,r11,-15760
	ctx.r21.s64 = ctx.r11.s64 + -15760;
	// ble cr6,0x82b78018
	if (!ctx.cr6.gt) goto loc_82B78018;
	// addi r3,r21,980
	ctx.r3.s64 = ctx.r21.s64 + 980;
	// lwz r22,44(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r31,r26,44
	ctx.r31.s64 = ctx.r26.s64 + 44;
	// bl 0x82c09bec
	ctx.lr = 0x82B78004;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r3,r22,4
	ctx.r3.s64 = ctx.r22.s64 + 4;
	// bl 0x82bbd5d0
	ctx.lr = 0x82B78018;
	sub_82BBD5D0(ctx, base);
loc_82B78018:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b78104
	if (!ctx.cr6.gt) goto loc_82B78104;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r24,r11,18344
	ctx.r24.s64 = ctx.r11.s64 + 18344;
loc_82B78034:
	// lwz r11,-17552(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17552);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82b78060
	if (!ctx.cr6.eq) goto loc_82B78060;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82b78060
	if (!ctx.cr6.eq) goto loc_82B78060;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82b780ec
	if (ctx.cr6.eq) goto loc_82B780EC;
loc_82B78060:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,44(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// bne cr6,0x82b78084
	if (!ctx.cr6.eq) goto loc_82B78084;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82B78084:
	// lwz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b780ec
	if (ctx.cr6.eq) goto loc_82B780EC;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r29,r28,2,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b780b8
	if (ctx.cr6.eq) goto loc_82B780B8;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82B780B8;
	sub_82219130(ctx, base);
loc_82B780B8:
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r28,2
	ctx.r6.u64 = ctx.r28.u32 & 0x3FFFFFFF;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// mullw r5,r11,r6
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// bl 0x82219130
	ctx.lr = 0x82B780EC;
	sub_82219130(ctx, base);
loc_82B780EC:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b78034
	if (ctx.cr6.lt) goto loc_82B78034;
loc_82B78104:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// ble cr6,0x82b78120
	if (!ctx.cr6.gt) goto loc_82B78120;
	// addi r3,r21,980
	ctx.r3.s64 = ctx.r21.s64 + 980;
	// bl 0x82c09bdc
	ctx.lr = 0x82B7811C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r22,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r22.u32);
loc_82B78120:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
loc_82B78128:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82b77fa8
	goto loc_82B77FA8;
}

__attribute__((alias("__imp__sub_82B78130"))) PPC_WEAK_FUNC(sub_82B78130);
PPC_FUNC_IMPL(__imp__sub_82B78130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-17552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17552);
	// b 0x82b77f10
	sub_82B77F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B78140"))) PPC_WEAK_FUNC(sub_82B78140);
PPC_FUNC_IMPL(__imp__sub_82B78140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b781c4
	if (ctx.cr6.eq) goto loc_82B781C4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd448
	ctx.lr = 0x82B7816C;
	sub_82BCD448(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7817c
	if (ctx.cr6.eq) goto loc_82B7817C;
	// bl 0x82120a70
	ctx.lr = 0x82B7817C;
	sub_82120A70(ctx, base);
loc_82B7817C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7818c
	if (ctx.cr6.eq) goto loc_82B7818C;
	// bl 0x82120a70
	ctx.lr = 0x82B7818C;
	sub_82120A70(ctx, base);
loc_82B7818C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7819c
	if (ctx.cr6.eq) goto loc_82B7819C;
	// bl 0x82120a70
	ctx.lr = 0x82B7819C;
	sub_82120A70(ctx, base);
loc_82B7819C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b781ac
	if (ctx.cr6.eq) goto loc_82B781AC;
	// bl 0x82120a70
	ctx.lr = 0x82B781AC;
	sub_82120A70(ctx, base);
loc_82B781AC:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b781bc
	if (ctx.cr6.eq) goto loc_82B781BC;
	// bl 0x82120a70
	ctx.lr = 0x82B781BC;
	sub_82120A70(ctx, base);
loc_82B781BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82B781C4;
	sub_82120A70(ctx, base);
loc_82B781C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B781D8"))) PPC_WEAK_FUNC(sub_82B781D8);
PPC_FUNC_IMPL(__imp__sub_82B781D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B781E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78370
	if (ctx.cr6.eq) goto loc_82B78370;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B7820C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82120040
	ctx.lr = 0x82B78220;
	sub_82120040(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82219130
	ctx.lr = 0x82B78230;
	sub_82219130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b78290
	if (ctx.cr6.eq) goto loc_82B78290;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82B78260;
	sub_82120040(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82120040
	ctx.lr = 0x82B78278;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82219130
	ctx.lr = 0x82B78290;
	sub_82219130(ctx, base);
loc_82B78290:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7834c
	if (ctx.cr6.eq) goto loc_82B7834C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82120040
	ctx.lr = 0x82B782A8;
	sub_82120040(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82219130
	ctx.lr = 0x82B782B8;
	sub_82219130(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b782e4
	if (ctx.cr6.eq) goto loc_82B782E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82B782D0;
	sub_82120040(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x82B782E4;
	sub_82219130(ctx, base);
loc_82B782E4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7834c
	if (ctx.cr6.eq) goto loc_82B7834C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82B78304;
	sub_82120040(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x82219130
	ctx.lr = 0x82B78324;
	sub_82219130(ctx, base);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x82B78334;
	sub_82120040(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x82219130
	ctx.lr = 0x82B7834C;
	sub_82219130(ctx, base);
loc_82B7834C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// bl 0x82b77f10
	ctx.lr = 0x82B78368;
	sub_82B77F10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B78370;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B78370:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B78378"))) PPC_WEAK_FUNC(sub_82B78378);
PPC_FUNC_IMPL(__imp__sub_82B78378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82B78380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B78398;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b78428
	if (ctx.cr6.eq) goto loc_82B78428;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82b783cc
	if (!ctx.cr6.eq) goto loc_82B783CC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82B783CC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd448
	ctx.lr = 0x82B783DC;
	sub_82BCD448(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b783ec
	if (ctx.cr6.eq) goto loc_82B783EC;
	// bl 0x82120a70
	ctx.lr = 0x82B783EC;
	sub_82120A70(ctx, base);
loc_82B783EC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b78400
	if (ctx.cr6.eq) goto loc_82B78400;
	// bl 0x82b78140
	ctx.lr = 0x82B783FC;
	sub_82B78140(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82B78400:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b78410
	if (ctx.cr6.eq) goto loc_82B78410;
	// bl 0x82120a70
	ctx.lr = 0x82B78410;
	sub_82120A70(ctx, base);
loc_82B78410:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b78420
	if (ctx.cr6.eq) goto loc_82B78420;
	// bl 0x82120a70
	ctx.lr = 0x82B78420;
	sub_82120A70(ctx, base);
loc_82B78420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82B78428;
	sub_82120A70(ctx, base);
loc_82B78428:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B78430;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B78438"))) PPC_WEAK_FUNC(sub_82B78438);
PPC_FUNC_IMPL(__imp__sub_82B78438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82B78440;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82b784d0
	if (!ctx.cr6.gt) goto loc_82B784D0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B78468:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// lwz r30,12480(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12480);
	// lwzx r25,r29,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82c09bec
	ctx.lr = 0x82B7847C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,4132
	ctx.r4.s64 = ctx.r30.s64 + 4132;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bc58e0
	ctx.lr = 0x82B7848C;
	sub_82BC58E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b784b4
	if (ctx.cr6.eq) goto loc_82B784B4;
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc58e0
	ctx.lr = 0x82B784B4;
	sub_82BC58E0(ctx, base);
loc_82B784B4:
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82B784BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b78468
	if (ctx.cr6.lt) goto loc_82B78468;
loc_82B784D0:
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// lwz r30,12480(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82B784DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,4132
	ctx.r4.s64 = ctx.r30.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc58e0
	ctx.lr = 0x82B784EC;
	sub_82BC58E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b78514
	if (ctx.cr6.eq) goto loc_82B78514;
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc58e0
	ctx.lr = 0x82B78514;
	sub_82BC58E0(ctx, base);
loc_82B78514:
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82B7851C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b78140
	ctx.lr = 0x82B78524;
	sub_82B78140(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82b785d4
	if (!ctx.cr6.gt) goto loc_82B785D4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_82B78548:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b785c0
	if (ctx.cr6.eq) goto loc_82B785C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82b785c0
	if (!ctx.cr6.eq) goto loc_82B785C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78590
	if (ctx.cr6.eq) goto loc_82B78590;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82120a70
	ctx.lr = 0x82B78590;
	sub_82120A70(ctx, base);
loc_82B78590:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b785a8
	if (ctx.cr6.eq) goto loc_82B785A8;
	// bl 0x82120a70
	ctx.lr = 0x82B785A8;
	sub_82120A70(ctx, base);
loc_82B785A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b785c0
	if (ctx.cr6.eq) goto loc_82B785C0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82120a70
	ctx.lr = 0x82B785C0;
	sub_82120A70(ctx, base);
loc_82B785C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b78548
	if (ctx.cr6.lt) goto loc_82B78548;
loc_82B785D4:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b78638
	if (ctx.cr6.eq) goto loc_82B78638;
	// lwz r29,-17448(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17448);
	// lwz r25,-17440(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17440);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82B785FC;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B78628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b78638
	if (ctx.cr6.eq) goto loc_82B78638;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82B78638;
	sub_821FD9E0(ctx, base);
loc_82B78638:
	// lwz r30,-17448(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17448);
	// lwz r29,-17440(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82B78648;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B78674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b78684
	if (ctx.cr6.eq) goto loc_82B78684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82B78684;
	sub_821FD9E0(ctx, base);
loc_82B78684:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7868C"))) PPC_WEAK_FUNC(sub_82B7868C);
PPC_FUNC_IMPL(__imp__sub_82B7868C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B78690"))) PPC_WEAK_FUNC(sub_82B78690);
PPC_FUNC_IMPL(__imp__sub_82B78690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82B78698;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x82b78868
	if (ctx.cr6.eq) goto loc_82B78868;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b78868
	if (ctx.cr6.eq) goto loc_82B78868;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B78718;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// lfs f0,-30732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30732);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// blt cr6,0x82b78760
	if (ctx.cr6.lt) goto loc_82B78760;
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f30,f0,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82b78788
	goto loc_82B78788;
loc_82B78760:
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f30,f0,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82B78788:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// lwz r31,13200(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13200);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82B787A0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b78818
	if (ctx.cr6.eq) goto loc_82B78818;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r11,r4,r7
	ctx.r11.s32 = ctx.r4.s32 / ctx.r7.s32;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b78818
	if (!ctx.cr6.lt) goto loc_82B78818;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b787d4
	if (ctx.cr6.eq) goto loc_82B787D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// b 0x82b787a0
	goto loc_82B787A0;
loc_82B787D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// std r5,64(r10)
	PPC_STORE_U64(ctx.r10.u32 + 64, ctx.r5.u64);
	// std r6,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r6.u64);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82B787FC;
	sub_82219130(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b78860
	if (!ctx.cr6.eq) goto loc_82B78860;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82b78860
	goto loc_82B78860;
loc_82B78818:
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x82219130
	ctx.lr = 0x82B7883C;
	sub_82219130(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b78854
	if (!ctx.cr6.eq) goto loc_82B78854;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82B78854:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a2e0
	ctx.lr = 0x82B78860;
	sub_8212A2E0(ctx, base);
loc_82B78860:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B78868;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B78868:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B78878"))) PPC_WEAK_FUNC(sub_82B78878);
PPC_FUNC_IMPL(__imp__sub_82B78878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b7894c
	if (ctx.cr6.eq) goto loc_82B7894C;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82b7894c
	if (ctx.cr6.eq) goto loc_82B7894C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7894c
	if (ctx.cr6.eq) goto loc_82B7894C;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b7894c
	if (ctx.cr6.eq) goto loc_82B7894C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b7894c
	if (ctx.cr6.eq) goto loc_82B7894C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b7894c
	if (ctx.cr6.eq) goto loc_82B7894C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b78900
	if (!ctx.cr6.eq) goto loc_82B78900;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82b78900
	if (!ctx.cr6.eq) goto loc_82B78900;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_82B78900:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82b7893c
	if (!ctx.cr6.lt) goto loc_82B7893C;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x82B7891C;
	sub_82219130(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b77660
	ctx.lr = 0x82B78938;
	sub_82B77660(ctx, base);
	// b 0x82b7894c
	goto loc_82B7894C;
loc_82B7893C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b78690
	ctx.lr = 0x82B7894C;
	sub_82B78690(ctx, base);
loc_82B7894C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B78964"))) PPC_WEAK_FUNC(sub_82B78964);
PPC_FUNC_IMPL(__imp__sub_82B78964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B78968"))) PPC_WEAK_FUNC(sub_82B78968);
PPC_FUNC_IMPL(__imp__sub_82B78968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82B78970;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r24,r11,-15760
	ctx.r24.s64 = ctx.r11.s64 + -15760;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B78984;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,80
	ctx.r26.s64 = 80;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// ld r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lis r11,76
	ctx.r11.s64 = 4980736;
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,13200(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// ori r25,r11,19264
	ctx.r25.u64 = ctx.r11.u64 | 19264;
loc_82B789B8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78a54
	if (ctx.cr6.eq) goto loc_82B78A54;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r8,r26
	ctx.r11.s32 = ctx.r8.s32 / ctx.r26.s32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b78a54
	if (!ctx.cr6.lt) goto loc_82B78A54;
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b78a48
	if (ctx.cr6.eq) goto loc_82B78A48;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r10,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b78a48
	if (!ctx.cr6.eq) goto loc_82B78A48;
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// cmpd cr6,r30,r10
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x82b78a48
	if (ctx.cr6.lt) goto loc_82B78A48;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r6,260(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 260);
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bge cr6,0x82b78a38
	if (!ctx.cr6.lt) goto loc_82B78A38;
	// stw r27,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r27.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82b78878
	ctx.lr = 0x82B78A28;
	sub_82B78878(ctx, base);
	// lwz r9,13200(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// b 0x82b789b8
	goto loc_82B789B8;
loc_82B78A38:
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmpd cr6,r10,r25
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r25.s64, ctx.xer);
	// ble cr6,0x82b78a48
	if (!ctx.cr6.gt) goto loc_82B78A48;
	// stw r27,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r27.u32);
loc_82B78A48:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// b 0x82b789b8
	goto loc_82B789B8;
loc_82B78A54:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B78A5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B78A64"))) PPC_WEAK_FUNC(sub_82B78A64);
PPC_FUNC_IMPL(__imp__sub_82B78A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B78A68"))) PPC_WEAK_FUNC(sub_82B78A68);
PPC_FUNC_IMPL(__imp__sub_82B78A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x8212a980
	ctx.lr = 0x82B78AA8;
	sub_8212A980(ctx, base);
loc_82B78AA8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B78AB4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b78ac4
	if (ctx.cr6.eq) goto loc_82B78AC4;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x82b78ac8
	goto loc_82B78AC8;
loc_82B78AC4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82B78AC8:
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78b58
	if (ctx.cr6.eq) goto loc_82B78B58;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b78af8
	if (ctx.cr6.eq) goto loc_82B78AF8;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82b78b08
	goto loc_82B78B08;
loc_82B78AF8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
loc_82B78B08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r9,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b78ab4
	if (ctx.cr6.eq) goto loc_82B78AB4;
	// rlwinm r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b78ab4
	if (!ctx.cr6.eq) goto loc_82B78AB4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r9,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b78ab4
	if (ctx.cr6.eq) goto loc_82B78AB4;
	// rlwinm r9,r9,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b78ab4
	if (ctx.cr6.eq) goto loc_82B78AB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82b78878
	ctx.lr = 0x82B78B54;
	sub_82B78878(ctx, base);
	// b 0x82b78aa8
	goto loc_82B78AA8;
loc_82B78B58:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b78b70
	if (ctx.cr6.eq) goto loc_82B78B70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x827e6668
	ctx.lr = 0x82B78B6C;
	sub_827E6668(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B78B70:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b78b80
	if (ctx.cr6.eq) goto loc_82B78B80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827e65a8
	ctx.lr = 0x82B78B80;
	sub_827E65A8(ctx, base);
loc_82B78B80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B78B94"))) PPC_WEAK_FUNC(sub_82B78B94);
PPC_FUNC_IMPL(__imp__sub_82B78B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B78B98"))) PPC_WEAK_FUNC(sub_82B78B98);
PPC_FUNC_IMPL(__imp__sub_82B78B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82b78c38
	if (ctx.cr6.eq) goto loc_82B78C38;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78c38
	if (ctx.cr6.eq) goto loc_82B78C38;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B78C08:
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82b78c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B78C08;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// lwz r11,13188(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13188);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b78878
	ctx.lr = 0x82B78C38;
	sub_82B78878(ctx, base);
loc_82B78C38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B78C48"))) PPC_WEAK_FUNC(sub_82B78C48);
PPC_FUNC_IMPL(__imp__sub_82B78C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82b78ce4
	if (ctx.cr6.eq) goto loc_82B78CE4;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78ce4
	if (ctx.cr6.eq) goto loc_82B78CE4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B78CB8:
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82b78cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B78CB8;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lwz r11,13188(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13188);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b78878
	ctx.lr = 0x82B78CE4;
	sub_82B78878(ctx, base);
loc_82B78CE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B78CF4"))) PPC_WEAK_FUNC(sub_82B78CF4);
PPC_FUNC_IMPL(__imp__sub_82B78CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B78CF8"))) PPC_WEAK_FUNC(sub_82B78CF8);
PPC_FUNC_IMPL(__imp__sub_82B78CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82B78D00;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r23,r11,-15760
	ctx.r23.s64 = ctx.r11.s64 + -15760;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82B78D14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lbz r11,12463(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12463);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stb r8,12463(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12463, ctx.r8.u8);
	// lwz r3,13212(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13212);
	// bl 0x82b76238
	ctx.lr = 0x82B78D48;
	sub_82B76238(ctx, base);
	// bl 0x82b78968
	ctx.lr = 0x82B78D4C;
	sub_82B78968(ctx, base);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13412);
	// addi r3,r11,252
	ctx.r3.s64 = ctx.r11.s64 + 252;
	// bl 0x8212a980
	ctx.lr = 0x82B78D60;
	sub_8212A980(ctx, base);
	// lwz r11,13412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13412);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r24,684(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
loc_82B78D70:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B78D78:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b78d8c
	if (ctx.cr6.eq) goto loc_82B78D8C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82b78d90
	goto loc_82B78D90;
loc_82B78D8C:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_82B78D90:
	// subfc r10,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79004
	if (ctx.cr6.eq) goto loc_82B79004;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b78dc0
	if (ctx.cr6.eq) goto loc_82B78DC0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82b78dd0
	goto loc_82B78DD0;
loc_82B78DC0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_82B78DD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78d78
	if (ctx.cr6.eq) goto loc_82B78D78;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b78d78
	if (!ctx.cr6.eq) goto loc_82B78D78;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// beq cr6,0x82b78e1c
	if (ctx.cr6.eq) goto loc_82B78E1C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b78e68
	if (!ctx.cr6.lt) goto loc_82B78E68;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82b78e38
	goto loc_82B78E38;
loc_82B78E1C:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b78e68
	if (!ctx.cr6.lt) goto loc_82B78E68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82B78E38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b78e68
	if (ctx.cr6.eq) goto loc_82B78E68;
	// dcbt r0,r11
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212aa00
	ctx.lr = 0x82B78E50;
	sub_8212AA00(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78e68
	if (ctx.cr6.eq) goto loc_82B78E68;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// dcbt r0,r11
loc_82B78E68:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 40);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78eb0
	if (ctx.cr6.eq) goto loc_82B78EB0;
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,19(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// beq cr6,0x82b78ea0
	if (ctx.cr6.eq) goto loc_82B78EA0;
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r8,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r8.u8);
	// b 0x82b78d70
	goto loc_82B78D70;
loc_82B78EA0:
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r8,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r8.u8);
	// b 0x82b78d70
	goto loc_82B78D70;
loc_82B78EB0:
	// lbz r11,19(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// clrlwi r8,r24,31
	ctx.r8.u64 = ctx.r24.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// beq cr6,0x82b78ed0
	if (ctx.cr6.eq) goto loc_82B78ED0;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b78ed4
	goto loc_82B78ED4;
loc_82B78ED0:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
loc_82B78ED4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b78d78
	if (!ctx.cr6.eq) goto loc_82B78D78;
	// lhz r10,46(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 46);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82b78f20
	if (ctx.cr6.eq) goto loc_82B78F20;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b78f20
	if (!ctx.cr6.eq) goto loc_82B78F20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b78f10
	if (ctx.cr6.eq) goto loc_82B78F10;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r10,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r10.u8);
	// b 0x82b78d70
	goto loc_82B78D70;
loc_82B78F10:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r10,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r10.u8);
	// b 0x82b78d70
	goto loc_82B78D70;
loc_82B78F20:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78fa4
	if (ctx.cr6.eq) goto loc_82B78FA4;
loc_82B78F34:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b78f94
	if (ctx.cr6.eq) goto loc_82B78F94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b78f94
	if (ctx.cr6.eq) goto loc_82B78F94;
	// lbz r11,19(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b78f6c
	if (ctx.cr6.eq) goto loc_82B78F6C;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82b78f70
	goto loc_82B78F70;
loc_82B78F6C:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
loc_82B78F70:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b78f94
	if (!ctx.cr6.eq) goto loc_82B78F94;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 + 28;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82b78f34
	if (!ctx.cr6.eq) goto loc_82B78F34;
	// b 0x82b78f9c
	goto loc_82B78F9C;
loc_82B78F94:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b78fa4
	if (ctx.cr6.eq) goto loc_82B78FA4;
loc_82B78F9C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82B78FA4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82b78fbc
	if (ctx.cr6.eq) goto loc_82B78FBC;
	// lbz r11,19(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x82b78fc4
	goto loc_82B78FC4;
loc_82B78FBC:
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
loc_82B78FC4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r9,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b78d70
	if (ctx.cr6.eq) goto loc_82B78D70;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b78d70
	if (ctx.cr6.eq) goto loc_82B78D70;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r31.u32);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// stw r31,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b78d70
	if (!ctx.cr6.eq) goto loc_82B78D70;
	// bl 0x82b77b28
	ctx.lr = 0x82B78FFC;
	sub_82B77B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b78d70
	if (!ctx.cr6.eq) goto loc_82B78D70;
loc_82B79004:
	// lwz r11,13412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13412);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r10,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r10.u32);
	// stw r9,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r9.u32);
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79038
	if (ctx.cr6.eq) goto loc_82B79038;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6668
	ctx.lr = 0x82B79038;
	sub_827E6668(ctx, base);
loc_82B79038:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7904c
	if (ctx.cr6.eq) goto loc_82B7904C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827e65a8
	ctx.lr = 0x82B7904C;
	sub_827E65A8(ctx, base);
loc_82B7904C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82B79054;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7905C"))) PPC_WEAK_FUNC(sub_82B7905C);
PPC_FUNC_IMPL(__imp__sub_82B7905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B79060"))) PPC_WEAK_FUNC(sub_82B79060);
PPC_FUNC_IMPL(__imp__sub_82B79060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B79064"))) PPC_WEAK_FUNC(sub_82B79064);
PPC_FUNC_IMPL(__imp__sub_82B79064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B79068"))) PPC_WEAK_FUNC(sub_82B79068);
PPC_FUNC_IMPL(__imp__sub_82B79068) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8222ee68
	sub_8222EE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79078"))) PPC_WEAK_FUNC(sub_82B79078);
PPC_FUNC_IMPL(__imp__sub_82B79078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82b790b8
	if (ctx.cr6.lt) goto loc_82B790B8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x82b790b8
	if (ctx.cr6.gt) goto loc_82B790B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// bl 0x8222eb70
	ctx.lr = 0x82B790A0;
	sub_8222EB70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b790b8
	if (ctx.cr6.eq) goto loc_82B790B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82b790bc
	if (ctx.cr6.eq) goto loc_82B790BC;
loc_82B790B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B790BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B790CC"))) PPC_WEAK_FUNC(sub_82B790CC);
PPC_FUNC_IMPL(__imp__sub_82B790CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B790D0"))) PPC_WEAK_FUNC(sub_82B790D0);
PPC_FUNC_IMPL(__imp__sub_82B790D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B790D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79204
	if (ctx.cr6.lt) goto loc_82B79204;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79204
	if (ctx.cr6.gt) goto loc_82B79204;
	// bl 0x821201b0
	ctx.lr = 0x82B790F4;
	sub_821201B0(ctx, base);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b79204
	if (ctx.cr6.eq) goto loc_82B79204;
	// bl 0x821201b0
	ctx.lr = 0x82B79104;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79170
	if (ctx.cr6.eq) goto loc_82B79170;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B7912C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79204
	if (!ctx.cr6.lt) goto loc_82B79204;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79204
	if (ctx.cr6.eq) goto loc_82B79204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82b791ec
	goto loc_82B791EC;
loc_82B79170:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79204
	if (!ctx.cr6.gt) goto loc_82B79204;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79184:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b791b4
	if (ctx.cr6.eq) goto loc_82B791B4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B791AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b791bc
	goto loc_82B791BC;
loc_82B791B4:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B791BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b791e0
	if (ctx.cr6.eq) goto loc_82B791E0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79184
	if (ctx.cr6.lt) goto loc_82B79184;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82B791E0:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B791EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b79204
	if (ctx.cr6.eq) goto loc_82B79204;
	// bl 0x821201b0
	ctx.lr = 0x82B791F8;
	sub_821201B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x82bc1428
	ctx.lr = 0x82B79204;
	sub_82BC1428(ctx, base);
loc_82B79204:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7920C"))) PPC_WEAK_FUNC(sub_82B7920C);
PPC_FUNC_IMPL(__imp__sub_82B7920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B79210"))) PPC_WEAK_FUNC(sub_82B79210);
PPC_FUNC_IMPL(__imp__sub_82B79210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B79218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79304
	if (ctx.cr6.lt) goto loc_82B79304;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79304
	if (ctx.cr6.gt) goto loc_82B79304;
	// bl 0x821201b0
	ctx.lr = 0x82B79234;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7929c
	if (ctx.cr6.eq) goto loc_82B7929C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B7925C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79304
	if (!ctx.cr6.lt) goto loc_82B79304;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79304
	if (ctx.cr6.eq) goto loc_82B79304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b7931c
	goto loc_82B7931C;
loc_82B7929C:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79304
	if (!ctx.cr6.gt) goto loc_82B79304;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B792B0:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b792e0
	if (ctx.cr6.eq) goto loc_82B792E0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B792D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b792e8
	goto loc_82B792E8;
loc_82B792E0:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B792E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79310
	if (ctx.cr6.eq) goto loc_82B79310;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b792b0
	if (ctx.cr6.lt) goto loc_82B792B0;
loc_82B79304:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82B79310:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B7931C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79304
	if (ctx.cr6.eq) goto loc_82B79304;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79330"))) PPC_WEAK_FUNC(sub_82B79330);
PPC_FUNC_IMPL(__imp__sub_82B79330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B79338;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79448
	if (ctx.cr6.lt) goto loc_82B79448;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79448
	if (ctx.cr6.gt) goto loc_82B79448;
	// bl 0x821201b0
	ctx.lr = 0x82B79358;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b793c0
	if (ctx.cr6.eq) goto loc_82B793C0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79448
	if (!ctx.cr6.lt) goto loc_82B79448;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B793A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79448
	if (ctx.cr6.eq) goto loc_82B79448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B793BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b7943c
	goto loc_82B7943C;
loc_82B793C0:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79448
	if (!ctx.cr6.gt) goto loc_82B79448;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B793D4:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79404
	if (ctx.cr6.eq) goto loc_82B79404;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B793FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b7940c
	goto loc_82B7940C;
loc_82B79404:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B7940C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79430
	if (ctx.cr6.eq) goto loc_82B79430;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b793d4
	if (ctx.cr6.lt) goto loc_82B793D4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82B79430:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B7943C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79448
	if (ctx.cr6.eq) goto loc_82B79448;
	// stw r26,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r26.u32);
loc_82B79448:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79450"))) PPC_WEAK_FUNC(sub_82B79450);
PPC_FUNC_IMPL(__imp__sub_82B79450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B79458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b7953c
	if (ctx.cr6.gt) goto loc_82B7953C;
	// bl 0x821201b0
	ctx.lr = 0x82B7946C;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b794d4
	if (ctx.cr6.eq) goto loc_82B794D4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b7953c
	if (!ctx.cr6.lt) goto loc_82B7953C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B794B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7953c
	if (ctx.cr6.eq) goto loc_82B7953C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B794D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b79554
	goto loc_82B79554;
loc_82B794D4:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b7953c
	if (!ctx.cr6.gt) goto loc_82B7953C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B794E8:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79518
	if (ctx.cr6.eq) goto loc_82B79518;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b79520
	goto loc_82B79520;
loc_82B79518:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B79520:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79548
	if (ctx.cr6.eq) goto loc_82B79548;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b794e8
	if (ctx.cr6.lt) goto loc_82B794E8;
loc_82B7953C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82B79548:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B79554:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b7953c
	if (ctx.cr6.eq) goto loc_82B7953C;
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B7956C"))) PPC_WEAK_FUNC(sub_82B7956C);
PPC_FUNC_IMPL(__imp__sub_82B7956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B79570"))) PPC_WEAK_FUNC(sub_82B79570);
PPC_FUNC_IMPL(__imp__sub_82B79570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B79578;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79688
	if (ctx.cr6.lt) goto loc_82B79688;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79688
	if (ctx.cr6.gt) goto loc_82B79688;
	// bl 0x821201b0
	ctx.lr = 0x82B79598;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79600
	if (ctx.cr6.eq) goto loc_82B79600;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B795C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79688
	if (!ctx.cr6.lt) goto loc_82B79688;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B795E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79688
	if (ctx.cr6.eq) goto loc_82B79688;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B795FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b7967c
	goto loc_82B7967C;
loc_82B79600:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79688
	if (!ctx.cr6.gt) goto loc_82B79688;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79614:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79644
	if (ctx.cr6.eq) goto loc_82B79644;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B7963C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b7964c
	goto loc_82B7964C;
loc_82B79644:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B7964C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79670
	if (ctx.cr6.eq) goto loc_82B79670;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79614
	if (ctx.cr6.lt) goto loc_82B79614;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82B79670:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B7967C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79688
	if (ctx.cr6.eq) goto loc_82B79688;
	// stb r26,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r26.u8);
loc_82B79688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79690"))) PPC_WEAK_FUNC(sub_82B79690);
PPC_FUNC_IMPL(__imp__sub_82B79690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B79698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79784
	if (ctx.cr6.lt) goto loc_82B79784;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79784
	if (ctx.cr6.gt) goto loc_82B79784;
	// bl 0x821201b0
	ctx.lr = 0x82B796B4;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b7971c
	if (ctx.cr6.eq) goto loc_82B7971C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B796DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79784
	if (!ctx.cr6.lt) goto loc_82B79784;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79784
	if (ctx.cr6.eq) goto loc_82B79784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b7979c
	goto loc_82B7979C;
loc_82B7971C:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79784
	if (!ctx.cr6.gt) goto loc_82B79784;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79730:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79760
	if (ctx.cr6.eq) goto loc_82B79760;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b79768
	goto loc_82B79768;
loc_82B79760:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B79768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79790
	if (ctx.cr6.eq) goto loc_82B79790;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79730
	if (ctx.cr6.lt) goto loc_82B79730;
loc_82B79784:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82B79790:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B7979C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79784
	if (ctx.cr6.eq) goto loc_82B79784;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B797B0"))) PPC_WEAK_FUNC(sub_82B797B0);
PPC_FUNC_IMPL(__imp__sub_82B797B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B797B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b798c8
	if (ctx.cr6.lt) goto loc_82B798C8;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b798c8
	if (ctx.cr6.gt) goto loc_82B798C8;
	// bl 0x821201b0
	ctx.lr = 0x82B797D8;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79840
	if (ctx.cr6.eq) goto loc_82B79840;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b798c8
	if (!ctx.cr6.lt) goto loc_82B798C8;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b798c8
	if (ctx.cr6.eq) goto loc_82B798C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B7983C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b798bc
	goto loc_82B798BC;
loc_82B79840:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b798c8
	if (!ctx.cr6.gt) goto loc_82B798C8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79854:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79884
	if (ctx.cr6.eq) goto loc_82B79884;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B7987C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b7988c
	goto loc_82B7988C;
loc_82B79884:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B7988C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b798b0
	if (ctx.cr6.eq) goto loc_82B798B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79854
	if (ctx.cr6.lt) goto loc_82B79854;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82B798B0:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B798BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b798c8
	if (ctx.cr6.eq) goto loc_82B798C8;
	// stw r26,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r26.u32);
loc_82B798C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B798D0"))) PPC_WEAK_FUNC(sub_82B798D0);
PPC_FUNC_IMPL(__imp__sub_82B798D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B798D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b799e8
	if (ctx.cr6.lt) goto loc_82B799E8;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b799e8
	if (ctx.cr6.gt) goto loc_82B799E8;
	// bl 0x821201b0
	ctx.lr = 0x82B798F8;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79960
	if (ctx.cr6.eq) goto loc_82B79960;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b799e8
	if (!ctx.cr6.lt) goto loc_82B799E8;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b799e8
	if (ctx.cr6.eq) goto loc_82B799E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B7995C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b799dc
	goto loc_82B799DC;
loc_82B79960:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b799e8
	if (!ctx.cr6.gt) goto loc_82B799E8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79974:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b799a4
	if (ctx.cr6.eq) goto loc_82B799A4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B7999C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b799ac
	goto loc_82B799AC;
loc_82B799A4:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B799AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b799d0
	if (ctx.cr6.eq) goto loc_82B799D0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79974
	if (ctx.cr6.lt) goto loc_82B79974;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82B799D0:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B799DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b799e8
	if (ctx.cr6.eq) goto loc_82B799E8;
	// stb r26,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r26.u8);
loc_82B799E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B799F0"))) PPC_WEAK_FUNC(sub_82B799F0);
PPC_FUNC_IMPL(__imp__sub_82B799F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B799F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79ae4
	if (ctx.cr6.lt) goto loc_82B79AE4;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79ae4
	if (ctx.cr6.gt) goto loc_82B79AE4;
	// bl 0x821201b0
	ctx.lr = 0x82B79A14;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79a7c
	if (ctx.cr6.eq) goto loc_82B79A7C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79ae4
	if (!ctx.cr6.lt) goto loc_82B79AE4;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79ae4
	if (ctx.cr6.eq) goto loc_82B79AE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b79afc
	goto loc_82B79AFC;
loc_82B79A7C:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79ae4
	if (!ctx.cr6.gt) goto loc_82B79AE4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79A90:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79ac0
	if (ctx.cr6.eq) goto loc_82B79AC0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b79ac8
	goto loc_82B79AC8;
loc_82B79AC0:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B79AC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79af0
	if (ctx.cr6.eq) goto loc_82B79AF0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79a90
	if (ctx.cr6.lt) goto loc_82B79A90;
loc_82B79AE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82B79AF0:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B79AFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79ae4
	if (ctx.cr6.eq) goto loc_82B79AE4;
	// lbz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 94);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79B14"))) PPC_WEAK_FUNC(sub_82B79B14);
PPC_FUNC_IMPL(__imp__sub_82B79B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B79B18"))) PPC_WEAK_FUNC(sub_82B79B18);
PPC_FUNC_IMPL(__imp__sub_82B79B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B79B20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79c30
	if (ctx.cr6.lt) goto loc_82B79C30;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79c30
	if (ctx.cr6.gt) goto loc_82B79C30;
	// bl 0x821201b0
	ctx.lr = 0x82B79B40;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79ba8
	if (ctx.cr6.eq) goto loc_82B79BA8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79c30
	if (!ctx.cr6.lt) goto loc_82B79C30;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79c30
	if (ctx.cr6.eq) goto loc_82B79C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b79c24
	goto loc_82B79C24;
loc_82B79BA8:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79c30
	if (!ctx.cr6.gt) goto loc_82B79C30;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79BBC:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79bec
	if (ctx.cr6.eq) goto loc_82B79BEC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b79bf4
	goto loc_82B79BF4;
loc_82B79BEC:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B79BF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79c18
	if (ctx.cr6.eq) goto loc_82B79C18;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79bbc
	if (ctx.cr6.lt) goto loc_82B79BBC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82B79C18:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B79C24:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79c30
	if (ctx.cr6.eq) goto loc_82B79C30;
	// stb r26,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r26.u8);
loc_82B79C30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79C38"))) PPC_WEAK_FUNC(sub_82B79C38);
PPC_FUNC_IMPL(__imp__sub_82B79C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B79C40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79d2c
	if (ctx.cr6.lt) goto loc_82B79D2C;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79d2c
	if (ctx.cr6.gt) goto loc_82B79D2C;
	// bl 0x821201b0
	ctx.lr = 0x82B79C5C;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79cc4
	if (ctx.cr6.eq) goto loc_82B79CC4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79d2c
	if (!ctx.cr6.lt) goto loc_82B79D2C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79d2c
	if (ctx.cr6.eq) goto loc_82B79D2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b79d44
	goto loc_82B79D44;
loc_82B79CC4:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79d2c
	if (!ctx.cr6.gt) goto loc_82B79D2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79CD8:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79d08
	if (ctx.cr6.eq) goto loc_82B79D08;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b79d10
	goto loc_82B79D10;
loc_82B79D08:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B79D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79d38
	if (ctx.cr6.eq) goto loc_82B79D38;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79cd8
	if (ctx.cr6.lt) goto loc_82B79CD8;
loc_82B79D2C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82B79D38:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B79D44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79d2c
	if (ctx.cr6.eq) goto loc_82B79D2C;
	// lbz r11,93(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 93);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79D5C"))) PPC_WEAK_FUNC(sub_82B79D5C);
PPC_FUNC_IMPL(__imp__sub_82B79D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B79D60"))) PPC_WEAK_FUNC(sub_82B79D60);
PPC_FUNC_IMPL(__imp__sub_82B79D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82B79D68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b79e78
	if (ctx.cr6.lt) goto loc_82B79E78;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79e78
	if (ctx.cr6.gt) goto loc_82B79E78;
	// bl 0x821201b0
	ctx.lr = 0x82B79D88;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79df0
	if (ctx.cr6.eq) goto loc_82B79DF0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79e78
	if (!ctx.cr6.lt) goto loc_82B79E78;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79e78
	if (ctx.cr6.eq) goto loc_82B79E78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b79e6c
	goto loc_82B79E6C;
loc_82B79DF0:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79e78
	if (!ctx.cr6.gt) goto loc_82B79E78;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79E04:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79e34
	if (ctx.cr6.eq) goto loc_82B79E34;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b79e3c
	goto loc_82B79E3C;
loc_82B79E34:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B79E3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79e60
	if (ctx.cr6.eq) goto loc_82B79E60;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79e04
	if (ctx.cr6.lt) goto loc_82B79E04;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82B79E60:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B79E6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79e78
	if (ctx.cr6.eq) goto loc_82B79E78;
	// stb r26,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r26.u8);
loc_82B79E78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B79E80"))) PPC_WEAK_FUNC(sub_82B79E80);
PPC_FUNC_IMPL(__imp__sub_82B79E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82B79E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bgt cr6,0x82b79f6c
	if (ctx.cr6.gt) goto loc_82B79F6C;
	// bl 0x821201b0
	ctx.lr = 0x82B79E9C;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b79f04
	if (ctx.cr6.eq) goto loc_82B79F04;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b79f6c
	if (!ctx.cr6.lt) goto loc_82B79F6C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B79EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79f6c
	if (ctx.cr6.eq) goto loc_82B79F6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b79f84
	goto loc_82B79F84;
loc_82B79F04:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b79f6c
	if (!ctx.cr6.gt) goto loc_82B79F6C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B79F18:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b79f48
	if (ctx.cr6.eq) goto loc_82B79F48;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B79F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b79f50
	goto loc_82B79F50;
loc_82B79F48:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B79F50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b79f78
	if (ctx.cr6.eq) goto loc_82B79F78;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b79f18
	if (ctx.cr6.lt) goto loc_82B79F18;
loc_82B79F6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82B79F78:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82B79F84:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b79f6c
	if (ctx.cr6.eq) goto loc_82B79F6C;
	// lbz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

