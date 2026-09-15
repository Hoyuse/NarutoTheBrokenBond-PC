#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8223AE08"))) PPC_WEAK_FUNC(sub_8223AE08);
PPC_FUNC_IMPL(__imp__sub_8223AE08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bge cr6,0x8223ae78
	if (!ctx.cr6.lt) goto loc_8223AE78;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x8223ae78
	if (ctx.cr6.gt) goto loc_8223AE78;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223ae38
	if (ctx.cr0.eq) goto loc_8223AE38;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8223AE38:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223ae60
	if (ctx.cr6.eq) goto loc_8223AE60;
	// lbz r8,1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8223ae60
	if (ctx.cr0.eq) goto loc_8223AE60;
	// slw r8,r10,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// divdu r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 / ctx.r8.u64;
	// tdllei r8,0
loc_8223AE60:
	// rlwimi r5,r10,31,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8223AE78:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223AE84"))) PPC_WEAK_FUNC(sub_8223AE84);
PPC_FUNC_IMPL(__imp__sub_8223AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223AE88"))) PPC_WEAK_FUNC(sub_8223AE88);
PPC_FUNC_IMPL(__imp__sub_8223AE88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x8223ae9c
	if (ctx.cr6.lt) goto loc_8223AE9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8223AE9C:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223aecc
	if (ctx.cr0.eq) goto loc_8223AECC;
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223aecc
	if (!ctx.cr0.eq) goto loc_8223AECC;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8223AECC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223AED8"))) PPC_WEAK_FUNC(sub_8223AED8);
PPC_FUNC_IMPL(__imp__sub_8223AED8) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x8223aef0
	if (ctx.cr6.lt) goto loc_8223AEF0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8223AEF0:
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bne cr6,0x8223af00
	if (!ctx.cr6.eq) goto loc_8223AF00;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8223AF00:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8223af28
	if (ctx.cr0.eq) goto loc_8223AF28;
	// rlwinm. r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8223af28
	if (ctx.cr0.eq) goto loc_8223AF28;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_8223AF28:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223AF34"))) PPC_WEAK_FUNC(sub_8223AF34);
PPC_FUNC_IMPL(__imp__sub_8223AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223AF38"))) PPC_WEAK_FUNC(sub_8223AF38);
PPC_FUNC_IMPL(__imp__sub_8223AF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8223AF40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x822399a8
	ctx.lr = 0x8223AF64;
	sub_822399A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b030
	if (ctx.cr0.lt) goto loc_8223B030;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// beq cr6,0x8223b030
	if (ctx.cr6.eq) goto loc_8223B030;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223b008
	if (ctx.cr0.eq) goto loc_8223B008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ad80
	ctx.lr = 0x8223AF90;
	sub_8223AD80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b030
	if (ctx.cr0.lt) goto loc_8223B030;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82239dc0
	ctx.lr = 0x8223AFA8;
	sub_82239DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b030
	if (ctx.cr0.lt) goto loc_8223B030;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8223b038
	if (!ctx.cr6.lt) goto loc_8223B038;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8223b038
	if (ctx.cr6.gt) goto loc_8223B038;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223afec
	if (ctx.cr0.eq) goto loc_8223AFEC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8223b030
	goto loc_8223B030;
loc_8223AFEC:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r10,r8,31,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_8223B008:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8223ae88
	ctx.lr = 0x8223B01C;
	sub_8223AE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b030
	if (ctx.cr0.lt) goto loc_8223B030;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8223B030:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_8223B038:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8223b030
	goto loc_8223B030;
}

__attribute__((alias("__imp__sub_8223B044"))) PPC_WEAK_FUNC(sub_8223B044);
PPC_FUNC_IMPL(__imp__sub_8223B044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B048"))) PPC_WEAK_FUNC(sub_8223B048);
PPC_FUNC_IMPL(__imp__sub_8223B048) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8223a960
	ctx.lr = 0x8223B094;
	sub_8223A960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8223b100
	if (ctx.cr6.lt) goto loc_8223B100;
	// beq cr6,0x8223b0e4
	if (ctx.cr6.eq) goto loc_8223B0E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8223b0c8
	if (ctx.cr6.lt) goto loc_8223B0C8;
	// bne cr6,0x8223b11c
	if (!ctx.cr6.eq) goto loc_8223B11C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223ac50
	ctx.lr = 0x8223B0C4;
	sub_8223AC50(ctx, base);
	// b 0x8223b118
	goto loc_8223B118;
loc_8223B0C8:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8223abc8
	ctx.lr = 0x8223B0E0;
	sub_8223ABC8(ctx, base);
	// b 0x8223b118
	goto loc_8223B118;
loc_8223B0E4:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x8223ab48
	ctx.lr = 0x8223B0FC;
	sub_8223AB48(ctx, base);
	// b 0x8223b118
	goto loc_8223B118;
loc_8223B100:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8223aad0
	ctx.lr = 0x8223B118;
	sub_8223AAD0(ctx, base);
loc_8223B118:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8223B11C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8223B138"))) PPC_WEAK_FUNC(sub_8223B138);
PPC_FUNC_IMPL(__imp__sub_8223B138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B144"))) PPC_WEAK_FUNC(sub_8223B144);
PPC_FUNC_IMPL(__imp__sub_8223B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B148"))) PPC_WEAK_FUNC(sub_8223B148);
PPC_FUNC_IMPL(__imp__sub_8223B148) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,396(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B150"))) PPC_WEAK_FUNC(sub_8223B150);
PPC_FUNC_IMPL(__imp__sub_8223B150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B158"))) PPC_WEAK_FUNC(sub_8223B158);
PPC_FUNC_IMPL(__imp__sub_8223B158) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// b 0x82246958
	sub_82246958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223B160"))) PPC_WEAK_FUNC(sub_8223B160);
PPC_FUNC_IMPL(__imp__sub_8223B160) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// b 0x822472c8
	sub_822472C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223B168"))) PPC_WEAK_FUNC(sub_8223B168);
PPC_FUNC_IMPL(__imp__sub_8223B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82247968
	ctx.lr = 0x8223B188;
	sub_82247968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b1c0
	if (ctx.cr0.lt) goto loc_8223B1C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822383f0
	ctx.lr = 0x8223B1A0;
	sub_822383F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223b1bc
	if (ctx.cr0.eq) goto loc_8223B1BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8223b1c0
	if (!ctx.cr6.gt) goto loc_8223B1C0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8223b1c0
	goto loc_8223B1C0;
loc_8223B1BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B1C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B1D4"))) PPC_WEAK_FUNC(sub_8223B1D4);
PPC_FUNC_IMPL(__imp__sub_8223B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B1D8"))) PPC_WEAK_FUNC(sub_8223B1D8);
PPC_FUNC_IMPL(__imp__sub_8223B1D8) {
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822479b8
	ctx.lr = 0x8223B1FC;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b208
	if (ctx.cr0.lt) goto loc_8223B208;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B208:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B218"))) PPC_WEAK_FUNC(sub_8223B218);
PPC_FUNC_IMPL(__imp__sub_8223B218) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B224"))) PPC_WEAK_FUNC(sub_8223B224);
PPC_FUNC_IMPL(__imp__sub_8223B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B228"))) PPC_WEAK_FUNC(sub_8223B228);
PPC_FUNC_IMPL(__imp__sub_8223B228) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8223b314
	if (ctx.cr6.lt) goto loc_8223B314;
	// beq cr6,0x8223b2bc
	if (ctx.cr6.eq) goto loc_8223B2BC;
	// li r11,46
	ctx.r11.s64 = 46;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8223b250
	if (!ctx.cr6.eq) goto loc_8223B250;
	// li r11,62
	ctx.r11.s64 = 62;
	// b 0x8223b260
	goto loc_8223B260;
loc_8223B250:
	// lwz r10,724(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm. r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223b260
	if (ctx.cr0.eq) goto loc_8223B260;
	// li r11,42
	ctx.r11.s64 = 42;
loc_8223B260:
	// lwz r10,724(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm. r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223b274
	if (ctx.cr0.eq) goto loc_8223B274;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x8223b29c
	goto loc_8223B29C;
loc_8223B274:
	// rlwinm. r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b280
	if (!ctx.cr0.eq) goto loc_8223B280;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_8223B280:
	// rlwinm. r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b29c
	if (!ctx.cr0.eq) goto loc_8223B29C;
	// rlwinm. r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223b298
	if (ctx.cr0.eq) goto loc_8223B298;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// b 0x8223b29c
	goto loc_8223B29C;
loc_8223B298:
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_8223B29C:
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223b350
	if (ctx.cr0.eq) goto loc_8223B350;
	// rlwinm. r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b350
	if (!ctx.cr0.eq) goto loc_8223B350;
	// rlwinm. r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b350
	if (!ctx.cr0.eq) goto loc_8223B350;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8223b350
	goto loc_8223B350;
loc_8223B2BC:
	// lwz r10,724(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// li r11,32
	ctx.r11.s64 = 32;
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223b2d0
	if (ctx.cr0.eq) goto loc_8223B2D0;
	// li r11,36
	ctx.r11.s64 = 36;
loc_8223B2D0:
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223b304
	if (ctx.cr0.eq) goto loc_8223B304;
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r11,r11,770
	ctx.r11.u64 = ctx.r11.u64 | 770;
	// bne 0x8223b2e8
	if (!ctx.cr0.eq) goto loc_8223B2E8;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
loc_8223B2E8:
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223b35c
	if (ctx.cr0.eq) goto loc_8223B35C;
	// rlwinm. r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b35c
	if (!ctx.cr0.eq) goto loc_8223B35C;
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223b35c
	if (!ctx.cr0.eq) goto loc_8223B35C;
	// b 0x8223b30c
	goto loc_8223B30C;
loc_8223B304:
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223b35c
	if (ctx.cr0.eq) goto loc_8223B35C;
loc_8223B30C:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8223b35c
	goto loc_8223B35C;
loc_8223B314:
	// lwz r10,724(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b330
	if (!ctx.cr0.eq) goto loc_8223B330;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b334
	if (!ctx.cr0.eq) goto loc_8223B334;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8223b334
	if (ctx.cr6.eq) goto loc_8223B334;
loc_8223B330:
	// li r11,5
	ctx.r11.s64 = 5;
loc_8223B334:
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b34c
	if (!ctx.cr0.eq) goto loc_8223B34C;
	// rlwinm. r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223b35c
	if (!ctx.cr0.eq) goto loc_8223B35C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8223b35c
	if (ctx.cr6.eq) goto loc_8223B35C;
loc_8223B34C:
	// ori r11,r11,770
	ctx.r11.u64 = ctx.r11.u64 | 770;
loc_8223B350:
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223b35c
	if (!ctx.cr0.eq) goto loc_8223B35C;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
loc_8223B35C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B364"))) PPC_WEAK_FUNC(sub_8223B364);
PPC_FUNC_IMPL(__imp__sub_8223B364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B368"))) PPC_WEAK_FUNC(sub_8223B368);
PPC_FUNC_IMPL(__imp__sub_8223B368) {
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
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247a10
	ctx.lr = 0x8223B3A4;
	sub_82247A10(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247a10
	ctx.lr = 0x8223B3C4;
	sub_82247A10(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247a10
	ctx.lr = 0x8223B3E4;
	sub_82247A10(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8223B408;
	sub_822479F0(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8223B424;
	sub_822479F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8223B448;
	sub_822479F0(ctx, base);
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

__attribute__((alias("__imp__sub_8223B460"))) PPC_WEAK_FUNC(sub_8223B460);
PPC_FUNC_IMPL(__imp__sub_8223B460) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8223B490;
	sub_822479F0(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8223B4AC;
	sub_822479F0(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8223B4C8;
	sub_822479F0(ctx, base);
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

__attribute__((alias("__imp__sub_8223B4DC"))) PPC_WEAK_FUNC(sub_8223B4DC);
PPC_FUNC_IMPL(__imp__sub_8223B4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B4E0"))) PPC_WEAK_FUNC(sub_8223B4E0);
PPC_FUNC_IMPL(__imp__sub_8223B4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8223B4E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r5,127
	ctx.xer.ca = ctx.r5.u32 <= 127;
	ctx.r11.s64 = 127 - ctx.r5.s64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// subfic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r5.s64;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// rlwinm r10,r10,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8223B514:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,400(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 400);
	// li r8,4
	ctx.r8.s64 = 4;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// or r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 | ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822479f0
	ctx.lr = 0x8223B53C;
	sub_822479F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b554
	if (ctx.cr0.lt) goto loc_8223B554;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8223b514
	if (ctx.cr6.lt) goto loc_8223B514;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B554:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223B55C"))) PPC_WEAK_FUNC(sub_8223B55C);
PPC_FUNC_IMPL(__imp__sub_8223B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B560"))) PPC_WEAK_FUNC(sub_8223B560);
PPC_FUNC_IMPL(__imp__sub_8223B560) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223b5c8
	if (ctx.cr6.eq) goto loc_8223B5C8;
	// bne 0x8223b60c
	if (!ctx.cr0.eq) goto loc_8223B60C;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223b5a8
	if (ctx.cr0.eq) goto loc_8223B5A8;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82238488
	ctx.lr = 0x8223B5A8;
	sub_82238488(ctx, base);
loc_8223B5A8:
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b5bc
	if (ctx.cr6.eq) goto loc_8223B5BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82247908
	ctx.lr = 0x8223B5BC;
	sub_82247908(ctx, base);
loc_8223B5BC:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// b 0x8223b608
	goto loc_8223B608;
loc_8223B5C8:
	// beq 0x8223b60c
	if (ctx.cr0.eq) goto loc_8223B60C;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223b5ec
	if (ctx.cr0.eq) goto loc_8223B5EC;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82238488
	ctx.lr = 0x8223B5EC;
	sub_82238488(ctx, base);
loc_8223B5EC:
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b600
	if (ctx.cr6.eq) goto loc_8223B600;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247908
	ctx.lr = 0x8223B600;
	sub_82247908(ctx, base);
loc_8223B600:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
loc_8223B608:
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8223B60C:
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

__attribute__((alias("__imp__sub_8223B620"))) PPC_WEAK_FUNC(sub_8223B620);
PPC_FUNC_IMPL(__imp__sub_8223B620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8223B628;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822479b8
	ctx.lr = 0x8223B658;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b724
	if (ctx.cr0.lt) goto loc_8223B724;
	// ld r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 648);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r8,8
	ctx.r8.s64 = 8;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// ori r6,r6,7
	ctx.r6.u64 = ctx.r6.u64 | 7;
	// std r11,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822479b8
	ctx.lr = 0x8223B694;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b724
	if (ctx.cr0.lt) goto loc_8223B724;
	// ld r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// std r11,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822479b8
	ctx.lr = 0x8223B6D0;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b724
	if (ctx.cr0.lt) goto loc_8223B724;
	// lwz r10,712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// ori r6,r6,6
	ctx.r6.u64 = ctx.r6.u64 | 6;
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822479b8
	ctx.lr = 0x8223B70C;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b724
	if (ctx.cr0.lt) goto loc_8223B724;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
loc_8223B724:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223B72C"))) PPC_WEAK_FUNC(sub_8223B72C);
PPC_FUNC_IMPL(__imp__sub_8223B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B730"))) PPC_WEAK_FUNC(sub_8223B730);
PPC_FUNC_IMPL(__imp__sub_8223B730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8223B738;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223b7e8
	if (ctx.cr6.eq) goto loc_8223B7E8;
	// cmplwi cr6,r31,1020
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1020, ctx.xer);
	// ble cr6,0x8223b764
	if (!ctx.cr6.gt) goto loc_8223B764;
loc_8223B758:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,4336
	ctx.r30.u64 = ctx.r30.u64 | 4336;
	// b 0x8223b868
	goto loc_8223B868;
loc_8223B764:
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82238530
	ctx.lr = 0x8223B77C;
	sub_82238530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223b7a0
	if (ctx.cr0.eq) goto loc_8223B7A0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8223b794
	if (ctx.cr6.gt) goto loc_8223B794;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8223b868
	goto loc_8223B868;
loc_8223B794:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	ctx.r30.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8223b868
	goto loc_8223B868;
loc_8223B7A0:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8223b758
	if (ctx.cr6.gt) goto loc_8223B758;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a60
	ctx.lr = 0x8223B7C0;
	sub_82247A60(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8223b7d4
	if (!ctx.cr0.eq) goto loc_8223B7D4;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x8223b830
	goto loc_8223B830;
loc_8223B7D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x8223B7E4;
	sub_82219130(ctx, base);
	// b 0x8223b7ec
	goto loc_8223B7EC;
loc_8223B7E8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223B7EC:
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223b848
	if (ctx.cr0.eq) goto loc_8223B848;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x82238488
	ctx.lr = 0x8223B810;
	sub_82238488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223b848
	if (ctx.cr0.eq) goto loc_8223B848;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8223b828
	if (ctx.cr6.gt) goto loc_8223B828;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8223b830
	goto loc_8223B830;
loc_8223B828:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	ctx.r30.u64 = ctx.r11.u64 | 2147942400;
loc_8223B830:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223b868
	if (ctx.cr6.eq) goto loc_8223B868;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x8223B844;
	sub_82247A78(ctx, base);
	// b 0x8223b868
	goto loc_8223B868;
loc_8223B848:
	// lwz r4,516(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223b85c
	if (ctx.cr6.eq) goto loc_8223B85C;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x8223B85C;
	sub_82247A78(ctx, base);
loc_8223B85C:
	// stw r29,516(r28)
	PPC_STORE_U32(ctx.r28.u32 + 516, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,520(r28)
	PPC_STORE_U32(ctx.r28.u32 + 520, ctx.r31.u32);
loc_8223B868:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223B874"))) PPC_WEAK_FUNC(sub_8223B874);
PPC_FUNC_IMPL(__imp__sub_8223B874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B878"))) PPC_WEAK_FUNC(sub_8223B878);
PPC_FUNC_IMPL(__imp__sub_8223B878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223b890
	if (ctx.cr0.eq) goto loc_8223B890;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x8223b89c
	goto loc_8223B89C;
loc_8223B890:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223b89c
	if (ctx.cr0.eq) goto loc_8223B89C;
	// li r3,16
	ctx.r3.s64 = 16;
loc_8223B89C:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223b8b0
	if (ctx.cr0.eq) goto loc_8223B8B0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 | 32;
	// blr 
	return;
loc_8223B8B0:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r11,64
	ctx.r3.u64 = ctx.r11.u64 | 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B8C4"))) PPC_WEAK_FUNC(sub_8223B8C4);
PPC_FUNC_IMPL(__imp__sub_8223B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B8C8"))) PPC_WEAK_FUNC(sub_8223B8C8);
PPC_FUNC_IMPL(__imp__sub_8223B8C8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r10,r3,312
	ctx.r10.s64 = ctx.r3.s64 + 312;
	// addi r8,r4,264
	ctx.r8.s64 = ctx.r4.s64 + 264;
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// addi r9,r4,104
	ctx.r9.s64 = ctx.r4.s64 + 104;
	// li r7,4
	ctx.r7.s64 = 4;
loc_8223B8E0:
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ld r6,64(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 64);
	// ld r31,-32(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// std r6,-32(r11)
	PPC_STORE_U64(ctx.r11.u32 + -32, ctx.r6.u64);
	// ld r31,32(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// ld r6,96(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 96);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r31,-16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,32(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stw r6,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r6.u32);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r31,16(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8223b8e0
	if (!ctx.cr0.eq) goto loc_8223B8E0;
	// ld r9,232(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 232);
	// ld r11,248(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 248);
	// ld r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 248);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// lwz r9,336(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// std r11,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, ctx.r11.u64);
	// ld r11,256(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 256);
	// ld r7,240(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 240);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// std r11,256(r3)
	PPC_STORE_U64(ctx.r3.u32 + 256, ctx.r11.u64);
	// lwz r8,328(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// lwz r11,336(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lwz r11,340(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// lwz r9,332(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B9C0"))) PPC_WEAK_FUNC(sub_8223B9C0);
PPC_FUNC_IMPL(__imp__sub_8223B9C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8223B9C8;
	__savegprlr_22(ctx, base);
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// ld r9,232(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 232);
	// addi r8,r4,66
	ctx.r8.s64 = ctx.r4.s64 + 66;
	// ld r23,240(r3)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r3.u32 + 240);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r24,328(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r11,r4,17
	ctx.r11.s64 = ctx.r4.s64 + 17;
	// lwz r25,332(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r7,r4,21
	ctx.r7.s64 = ctx.r4.s64 + 21;
	// ld r26,248(r3)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r3.u32 + 248);
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r27,256(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// addi r11,r4,70
	ctx.r11.s64 = ctx.r4.s64 + 70;
	// lwz r28,336(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// ldx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r3.u32);
	// addi r22,r4,25
	ctx.r22.s64 = ctx.r4.s64 + 25;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,340(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r4,74
	ctx.r9.s64 = ctx.r4.s64 + 74;
	// std r10,232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 232, ctx.r10.u64);
	// addi r10,r4,78
	ctx.r10.s64 = ctx.r4.s64 + 78;
	// ldx r4,r31,r3
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r3.u32);
	// add r8,r23,r4
	ctx.r8.u64 = ctx.r23.u64 + ctx.r4.u64;
	// std r8,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, ctx.r8.u64);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// add r11,r24,r4
	ctx.r11.u64 = ctx.r24.u64 + ctx.r4.u64;
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r11,r25,r4
	ctx.r11.u64 = ctx.r25.u64 + ctx.r4.u64;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// rlwinm r8,r22,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r3.u32);
	// add r11,r4,r26
	ctx.r11.u64 = ctx.r4.u64 + ctx.r26.u64;
	// std r11,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, ctx.r11.u64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ldx r4,r8,r3
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r3.u32);
	// add r11,r27,r4
	ctx.r11.u64 = ctx.r27.u64 + ctx.r4.u64;
	// std r11,256(r3)
	PPC_STORE_U64(ctx.r3.u32 + 256, ctx.r11.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r11,r28,r4
	ctx.r11.u64 = ctx.r28.u64 + ctx.r4.u64;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// stw r4,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r4.u32);
	// stdx r11,r30,r3
	PPC_STORE_U64(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u64);
	// stdx r11,r31,r3
	PPC_STORE_U64(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u64);
	// stwx r11,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r11.u32);
	// stdx r11,r7,r3
	PPC_STORE_U64(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u64);
	// stdx r11,r8,r3
	PPC_STORE_U64(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u64);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223BAB0"))) PPC_WEAK_FUNC(sub_8223BAB0);
PPC_FUNC_IMPL(__imp__sub_8223BAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8223baf8
	if (!ctx.cr6.lt) goto loc_8223BAF8;
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223bad4
	if (!ctx.cr6.eq) goto loc_8223BAD4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8223BAD4:
	// lwz r8,304(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// addi r3,r10,-92
	ctx.r3.s64 = ctx.r10.s64 + -92;
	// rlwinm. r8,r8,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8223baf0
	if (ctx.cr0.eq) goto loc_8223BAF0;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8223BAF0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8223bad4
	goto loc_8223BAD4;
loc_8223BAF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223BB00"))) PPC_WEAK_FUNC(sub_8223BB00);
PPC_FUNC_IMPL(__imp__sub_8223BB00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
	// b 0x8223bb20
	goto loc_8223BB20;
loc_8223BB0C:
	// ld r8,-76(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -76);
	// addi r9,r10,-92
	ctx.r9.s64 = ctx.r10.s64 + -92;
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8223bb34
	if (ctx.cr6.eq) goto loc_8223BB34;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8223BB20:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8223bb40
	if (ctx.cr6.eq) goto loc_8223BB40;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8223bb0c
	if (!ctx.cr0.eq) goto loc_8223BB0C;
	// b 0x8223bb40
	goto loc_8223BB40;
loc_8223BB34:
	// lwz r11,396(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223bb44
	if (!ctx.cr0.eq) goto loc_8223BB44;
loc_8223BB40:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8223BB44:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223BB4C"))) PPC_WEAK_FUNC(sub_8223BB4C);
PPC_FUNC_IMPL(__imp__sub_8223BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223BB50"))) PPC_WEAK_FUNC(sub_8223BB50);
PPC_FUNC_IMPL(__imp__sub_8223BB50) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,95
	ctx.r11.s64 = ctx.r4.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223bb70
	if (ctx.cr6.eq) goto loc_8223BB70;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223bb74
	if (!ctx.cr0.eq) goto loc_8223BB74;
loc_8223BB70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223BB74:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223BB7C"))) PPC_WEAK_FUNC(sub_8223BB7C);
PPC_FUNC_IMPL(__imp__sub_8223BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223BB80"))) PPC_WEAK_FUNC(sub_8223BB80);
PPC_FUNC_IMPL(__imp__sub_8223BB80) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// b 0x8223bbac
	goto loc_8223BBAC;
loc_8223BB9C:
	// lwz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// rlwinm. r9,r9,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223bbc0
	if (ctx.cr0.eq) goto loc_8223BBC0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8223BBAC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8223bb9c
	if (!ctx.cr0.eq) goto loc_8223BB9C;
	// blr 
	return;
loc_8223BBC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223BBC8"))) PPC_WEAK_FUNC(sub_8223BBC8);
PPC_FUNC_IMPL(__imp__sub_8223BBC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 26, ctx.xer);
	// bgt cr6,0x8223be64
	if (ctx.cr6.gt) goto loc_8223BE64;
	// beq cr6,0x8223be50
	if (ctx.cr6.eq) goto loc_8223BE50;
	// cmplwi cr6,r4,23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23, ctx.xer);
	// bgt cr6,0x8223be94
	if (ctx.cr6.gt) goto loc_8223BE94;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27992
	ctx.r12.s64 = ctx.r12.s64 + -27992;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// addi r12,r12,-17372
	ctx.r12.s64 = ctx.r12.s64 + -17372;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8223BC24;
	case 1:
		goto loc_8223BC44;
	case 2:
		goto loc_8223BC58;
	case 3:
		goto loc_8223BC6C;
	case 4:
		goto loc_8223BC80;
	case 5:
		goto loc_8223BC94;
	case 6:
		goto loc_8223BCA8;
	case 7:
		goto loc_8223BCBC;
	case 8:
		goto loc_8223BCD4;
	case 9:
		goto loc_8223BCEC;
	case 10:
		goto loc_8223BD1C;
	case 11:
		goto loc_8223BD30;
	case 12:
		goto loc_8223BE50;
	case 13:
		goto loc_8223BD64;
	case 14:
		goto loc_8223BD94;
	case 15:
		goto loc_8223BDAC;
	case 16:
		goto loc_8223BDB8;
	case 17:
		goto loc_8223BDD0;
	case 18:
		goto loc_8223BDF4;
	case 19:
		goto loc_8223BE18;
	case 20:
		goto loc_8223BE18;
	case 21:
		goto loc_8223BE3C;
	case 22:
		goto loc_8223BE18;
	case 23:
		goto loc_8223BE18;
	default:
		__builtin_unreachable();
	}
loc_8223BC24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BC44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BC58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lbz r11,169(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BC6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lbz r11,170(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BC80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lbz r11,171(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BC94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BCA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BCBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BCD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,4,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BCEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223bd0c
	if (ctx.cr0.eq) goto loc_8223BD0C;
loc_8223BD04:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8223bd10
	goto loc_8223BD10;
loc_8223BD0C:
	// rlwinm r11,r11,7,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x2;
loc_8223BD10:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223bf28
	goto loc_8223BF28;
loc_8223BD1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BD30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,520(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8223bd54
	if (ctx.cr6.lt) goto loc_8223BD54;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// bl 0x82219130
	ctx.lr = 0x8223BD4C;
	sub_82219130(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223bd5c
	goto loc_8223BD5C;
loc_8223BD54:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_8223BD5C:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// b 0x8223bf2c
	goto loc_8223BF2C;
loc_8223BD64:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223bd84
	if (ctx.cr6.eq) goto loc_8223BD84;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BD84:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,1168
	ctx.r3.u64 = ctx.r3.u64 | 1168;
	// b 0x8223bf2c
	goto loc_8223BF2C;
loc_8223BD94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BDAC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x8223bf30
	goto loc_8223BF30;
loc_8223BDB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lhz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 724);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BDD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223bd04
	if (!ctx.cr0.eq) goto loc_8223BD04;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,19,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x2;
	// b 0x8223bd10
	goto loc_8223BD10;
loc_8223BDF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223bd04
	if (!ctx.cr0.eq) goto loc_8223BD04;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,21,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x2;
	// b 0x8223bd10
	goto loc_8223BD10;
loc_8223BE18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// cmpwi cr6,r4,19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19, ctx.xer);
	// bne cr6,0x8223be34
	if (!ctx.cr6.eq) goto loc_8223BE34;
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// b 0x8223bd10
	goto loc_8223BD10;
loc_8223BE34:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// b 0x8223bd10
	goto loc_8223BD10;
loc_8223BE3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// b 0x8223bf14
	goto loc_8223BF14;
loc_8223BE50:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82247af0
	ctx.lr = 0x8223BE60;
	sub_82247AF0(ctx, base);
	// b 0x8223bf30
	goto loc_8223BF30;
loc_8223BE64:
	// cmpwi cr6,r4,4096
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4096, ctx.xer);
	// beq cr6,0x8223bf04
	if (ctx.cr6.eq) goto loc_8223BF04;
	// cmpwi cr6,r4,4097
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4097, ctx.xer);
	// beq cr6,0x8223bef4
	if (ctx.cr6.eq) goto loc_8223BEF4;
	// cmpwi cr6,r4,4098
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4098, ctx.xer);
	// beq cr6,0x8223beec
	if (ctx.cr6.eq) goto loc_8223BEEC;
	// cmpwi cr6,r4,4099
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4099, ctx.xer);
	// beq cr6,0x8223bee4
	if (ctx.cr6.eq) goto loc_8223BEE4;
	// cmpwi cr6,r4,4100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4100, ctx.xer);
	// beq cr6,0x8223bedc
	if (ctx.cr6.eq) goto loc_8223BEDC;
	// cmpwi cr6,r4,4101
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4101, ctx.xer);
	// beq cr6,0x8223bea0
	if (ctx.cr6.eq) goto loc_8223BEA0;
loc_8223BE94:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8223bf30
	goto loc_8223BF30;
loc_8223BEA0:
	// li r6,3
	ctx.r6.s64 = 3;
loc_8223BEA4:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82247a10
	ctx.lr = 0x8223BEB8;
	sub_82247A10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223befc
	if (!ctx.cr0.lt) goto loc_8223BEFC;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4097
	ctx.r11.u64 = ctx.r11.u64 | 4097;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223bf30
	if (!ctx.cr6.eq) goto loc_8223BF30;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x8223bf30
	goto loc_8223BF30;
loc_8223BEDC:
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x8223bea4
	goto loc_8223BEA4;
loc_8223BEE4:
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x8223bea4
	goto loc_8223BEA4;
loc_8223BEEC:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x8223bea4
	goto loc_8223BEA4;
loc_8223BEF4:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8223bea4
	goto loc_8223BEA4;
loc_8223BEFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223bf30
	goto loc_8223BF30;
loc_8223BF04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223bf20
	if (ctx.cr6.lt) goto loc_8223BF20;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
loc_8223BF14:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x8223bf28
	goto loc_8223BF28;
loc_8223BF20:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_8223BF28:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8223BF2C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8223BF30:
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

__attribute__((alias("__imp__sub_8223BF48"))) PPC_WEAK_FUNC(sub_8223BF48);
PPC_FUNC_IMPL(__imp__sub_8223BF48) {
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
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bl 0x82247f88
	ctx.lr = 0x8223BF5C;
	sub_82247F88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223bf70
	if (ctx.cr0.eq) goto loc_8223BF70;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223bf74
	if (!ctx.cr0.eq) goto loc_8223BF74;
loc_8223BF70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223BF74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223BF84"))) PPC_WEAK_FUNC(sub_8223BF84);
PPC_FUNC_IMPL(__imp__sub_8223BF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223BF88"))) PPC_WEAK_FUNC(sub_8223BF88);
PPC_FUNC_IMPL(__imp__sub_8223BF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-519
	ctx.r9.s64 = -34013184;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// ori r9,r9,65530
	ctx.r9.u64 = ctx.r9.u64 | 65530;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// ori r8,r8,3
	ctx.r8.u64 = ctx.r8.u64 | 3;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r7,1000
	ctx.r7.s64 = 1000;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82247910
	ctx.lr = 0x8223C014;
	sub_82247910(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223C024"))) PPC_WEAK_FUNC(sub_8223C024);
PPC_FUNC_IMPL(__imp__sub_8223C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C028"))) PPC_WEAK_FUNC(sub_8223C028);
PPC_FUNC_IMPL(__imp__sub_8223C028) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,169
	ctx.r11.s64 = 169;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82247998
	ctx.lr = 0x8223C05C;
	sub_82247998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223c09c
	if (ctx.cr0.lt) goto loc_8223C09C;
	// lbz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 264);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223c088
	if (ctx.cr6.eq) goto loc_8223C088;
	// rlwinm. r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8223c080
	if (!ctx.cr0.gt) goto loc_8223C080;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8223c084
	if (!ctx.cr6.gt) goto loc_8223C084;
loc_8223C080:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8223C084:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8223C088:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223c098
	if (ctx.cr6.eq) goto loc_8223C098;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8223C098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223C09C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_8223C0B4"))) PPC_WEAK_FUNC(sub_8223C0B4);
PPC_FUNC_IMPL(__imp__sub_8223C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C0B8"))) PPC_WEAK_FUNC(sub_8223C0B8);
PPC_FUNC_IMPL(__imp__sub_8223C0B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne cr6,0x8223c10c
	if (!ctx.cr6.eq) goto loc_8223C10C;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223C10C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248ab8
	ctx.lr = 0x8223C114;
	sub_82248AB8(ctx, base);
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

__attribute__((alias("__imp__sub_8223C128"))) PPC_WEAK_FUNC(sub_8223C128);
PPC_FUNC_IMPL(__imp__sub_8223C128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8223C130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,380
	ctx.r30.s64 = ctx.r29.s64 + 380;
loc_8223C144:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223c180
	if (ctx.cr6.eq) goto loc_8223C180;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c180
	if (ctx.cr0.eq) goto loc_8223C180;
	// lwz r11,396(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c180
	if (ctx.cr0.eq) goto loc_8223C180;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223C180:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8223c144
	if (ctx.cr6.lt) goto loc_8223C144;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223C198"))) PPC_WEAK_FUNC(sub_8223C198);
PPC_FUNC_IMPL(__imp__sub_8223C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8223C1A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r27,248
	ctx.r29.s64 = ctx.r27.s64 + 248;
	// lwz r11,248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 248);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223c250
	if (ctx.cr6.eq) goto loc_8223C250;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223c250
	if (ctx.cr0.eq) goto loc_8223C250;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,-28008
	ctx.r28.s64 = ctx.r11.s64 + -28008;
loc_8223C1CC:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r31,r30,-92
	ctx.r31.s64 = ctx.r30.s64 + -92;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223c204
	if (ctx.cr0.eq) goto loc_8223C204;
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// beq 0x8223c204
	if (ctx.cr0.eq) goto loc_8223C204;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223C204:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r31,376
	ctx.r11.s64 = ctx.r31.s64 + 376;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223c250
	if (ctx.cr6.eq) goto loc_8223C250;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223c1cc
	if (!ctx.cr0.eq) goto loc_8223C1CC;
loc_8223C250:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223C258"))) PPC_WEAK_FUNC(sub_8223C258);
PPC_FUNC_IMPL(__imp__sub_8223C258) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addic. r11,r4,92
	ctx.xer.ca = ctx.r4.u32 > 4294967203;
	ctx.r11.s64 = ctx.r4.s64 + 92;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
loc_8223C26C:
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm. r9,r9,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223c27c
	if (ctx.cr0.eq) goto loc_8223C27C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8223C27C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223c26c
	if (!ctx.cr0.eq) goto loc_8223C26C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223C294"))) PPC_WEAK_FUNC(sub_8223C294);
PPC_FUNC_IMPL(__imp__sub_8223C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C298"))) PPC_WEAK_FUNC(sub_8223C298);
PPC_FUNC_IMPL(__imp__sub_8223C298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8223C2A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r25.u32);
	// lis r21,4096
	ctx.r21.s64 = 268435456;
	// beq 0x8223c2d0
	if (ctx.cr0.eq) goto loc_8223C2D0;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// b 0x8223c2d8
	goto loc_8223C2D8;
loc_8223C2D0:
	// addi r23,r1,100
	ctx.r23.s64 = ctx.r1.s64 + 100;
	// ori r21,r21,1
	ctx.r21.u64 = ctx.r21.u64 | 1;
loc_8223C2D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8223c354
	if (!ctx.cr6.eq) goto loc_8223C354;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r31,r28,248
	ctx.r31.s64 = ctx.r28.s64 + 248;
	// ori r29,r6,4
	ctx.r29.u64 = ctx.r6.u64 | 4;
	// b 0x8223c33c
	goto loc_8223C33C;
loc_8223C2F0:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223c338
	if (!ctx.cr0.eq) goto loc_8223C338;
	// lwz r11,84(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223c338
	if (!ctx.cr6.eq) goto loc_8223C338;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223c298
	ctx.lr = 0x8223C320;
	sub_8223C298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223c540
	if (ctx.cr0.lt) goto loc_8223C540;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8223C338:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8223C33C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8223c53c
	if (ctx.cr6.eq) goto loc_8223C53C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne 0x8223c2f0
	if (!ctx.cr0.eq) goto loc_8223C2F0;
	// b 0x8223c53c
	goto loc_8223C53C;
loc_8223C354:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// beq 0x8223c388
	if (ctx.cr0.eq) goto loc_8223C388;
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// addi r8,r28,380
	ctx.r8.s64 = ctx.r28.s64 + 380;
	// lwz r9,384(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// lwz r8,388(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// lwz r7,392(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// b 0x8223c3a0
	goto loc_8223C3A0;
loc_8223C388:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// std r25,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r25.u64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
loc_8223C3A0:
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223c3d4
	if (!ctx.cr0.eq) goto loc_8223C3D4;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223c3c0
	if (!ctx.cr6.eq) goto loc_8223C3C0;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c3d4
	if (ctx.cr6.eq) goto loc_8223C3D4;
loc_8223C3C0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// oris r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 2147483648;
	// b 0x8223c3d8
	goto loc_8223C3D8;
loc_8223C3D4:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8223C3D8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r22,r1,128
	ctx.r22.s64 = ctx.r1.s64 + 128;
	// ori r29,r11,16
	ctx.r29.u64 = ctx.r11.u64 | 16;
	// ori r24,r10,4097
	ctx.r24.u64 = ctx.r10.u64 | 4097;
loc_8223C3F0:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c52c
	if (ctx.cr6.eq) goto loc_8223C52C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// oris r5,r11,65532
	ctx.r5.u64 = ctx.r11.u64 | 4294705152;
	// oris r31,r11,65016
	ctx.r31.u64 = ctx.r11.u64 | 4260888576;
	// bne cr6,0x8223c47c
	if (!ctx.cr6.eq) goto loc_8223C47C;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// bl 0x822479b8
	ctx.lr = 0x8223C430;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223c540
	if (ctx.cr0.lt) goto loc_8223C540;
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c51c
	if (ctx.cr0.eq) goto loc_8223C51C;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822479b8
	ctx.lr = 0x8223C460;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223c540
	if (ctx.cr0.lt) goto loc_8223C540;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8223c51c
	goto loc_8223C51C;
loc_8223C47C:
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82247a38
	ctx.lr = 0x8223C4A0;
	sub_82247A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223c4b0
	if (!ctx.cr0.lt) goto loc_8223C4B0;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x8223c540
	if (!ctx.cr6.eq) goto loc_8223C540;
loc_8223C4B0:
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c51c
	if (ctx.cr0.eq) goto loc_8223C51C;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82247a38
	ctx.lr = 0x8223C4EC;
	sub_82247A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223c4fc
	if (!ctx.cr0.lt) goto loc_8223C4FC;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x8223c540
	if (!ctx.cr6.eq) goto loc_8223C540;
loc_8223C4FC:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_8223C51C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8223C52C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// blt cr6,0x8223c3f0
	if (ctx.cr6.lt) goto loc_8223C3F0;
loc_8223C53C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8223C540:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223C548"))) PPC_WEAK_FUNC(sub_8223C548);
PPC_FUNC_IMPL(__imp__sub_8223C548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8223C550;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r26,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r25,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r25.u64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8223c6c8
	if (ctx.cr0.eq) goto loc_8223C6C8;
	// bne cr6,0x8223c634
	if (!ctx.cr6.eq) goto loc_8223C634;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r29,r28,248
	ctx.r29.s64 = ctx.r28.s64 + 248;
	// b 0x8223c5d8
	goto loc_8223C5D8;
loc_8223C588:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223c5d4
	if (!ctx.cr0.eq) goto loc_8223C5D4;
	// lwz r11,84(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223c5d4
	if (!ctx.cr6.eq) goto loc_8223C5D4;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223c548
	ctx.lr = 0x8223C5BC;
	sub_8223C548(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223cab4
	if (ctx.cr0.lt) goto loc_8223CAB4;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8223C5D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8223C5D8:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223c5ec
	if (ctx.cr6.eq) goto loc_8223C5EC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne 0x8223c588
	if (!ctx.cr0.eq) goto loc_8223C588;
loc_8223C5EC:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c610
	if (ctx.cr0.eq) goto loc_8223C610;
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// beq 0x8223c608
	if (ctx.cr0.eq) goto loc_8223C608;
	// lwz r10,716(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 716);
	// b 0x8223c628
	goto loc_8223C628;
loc_8223C608:
	// lwz r10,712(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 712);
	// b 0x8223c628
	goto loc_8223C628;
loc_8223C610:
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// beq 0x8223c624
	if (ctx.cr0.eq) goto loc_8223C624;
	// ld r10,656(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 656);
	// b 0x8223c628
	goto loc_8223C628;
loc_8223C624:
	// ld r10,648(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 648);
loc_8223C628:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8223C62C:
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x8223cab0
	goto loc_8223CAB0;
loc_8223C634:
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223cab0
	if (ctx.cr6.eq) goto loc_8223CAB0;
	// lwz r11,396(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223cab0
	if (!ctx.cr0.eq) goto loc_8223CAB0;
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// beq 0x8223c694
	if (ctx.cr0.eq) goto loc_8223C694;
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c668
	if (ctx.cr0.eq) goto loc_8223C668;
	// ori r6,r6,6
	ctx.r6.u64 = ctx.r6.u64 | 6;
	// b 0x8223c66c
	goto loc_8223C66C;
loc_8223C668:
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
loc_8223C66C:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r4,100(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822479b8
	ctx.lr = 0x8223C684;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223cab4
	if (ctx.cr0.lt) goto loc_8223CAB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8223c62c
	goto loc_8223C62C;
loc_8223C694:
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c6a4
	if (ctx.cr0.eq) goto loc_8223C6A4;
	// ori r6,r6,7
	ctx.r6.u64 = ctx.r6.u64 | 7;
	// b 0x8223c6a8
	goto loc_8223C6A8;
loc_8223C6A4:
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
loc_8223C6A8:
	// lwz r4,100(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822479b8
	ctx.lr = 0x8223C6BC;
	sub_822479B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223cab4
	if (ctx.cr0.lt) goto loc_8223CAB4;
	// b 0x8223cab0
	goto loc_8223CAB0;
loc_8223C6C8:
	// bne cr6,0x8223c884
	if (!ctx.cr6.eq) goto loc_8223C884;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r30,r28,248
	ctx.r30.s64 = ctx.r28.s64 + 248;
	// ori r26,r26,8
	ctx.r26.u64 = ctx.r26.u64 | 8;
	// b 0x8223c720
	goto loc_8223C720;
loc_8223C6DC:
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r5,r29,-92
	ctx.r5.s64 = ctx.r29.s64 + -92;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223c71c
	if (!ctx.cr6.eq) goto loc_8223C71C;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223c548
	ctx.lr = 0x8223C704;
	sub_8223C548(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223cab4
	if (ctx.cr0.lt) goto loc_8223CAB4;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8223C71C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8223C720:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8223c734
	if (ctx.cr6.eq) goto loc_8223C734;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x8223c6dc
	if (!ctx.cr0.eq) goto loc_8223C6DC;
loc_8223C734:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c7f4
	if (ctx.cr0.eq) goto loc_8223C7F4;
	// clrlwi. r8,r26,31
	ctx.r8.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8223c764
	if (ctx.cr0.eq) goto loc_8223C764;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rlwinm. r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223c75c
	if (ctx.cr0.eq) goto loc_8223C75C;
	// lwz r10,700(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
loc_8223C754:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8223c784
	goto loc_8223C784;
loc_8223C75C:
	// lwz r10,696(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 696);
	// b 0x8223c754
	goto loc_8223C754;
loc_8223C764:
	// rlwinm. r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223c778
	if (ctx.cr0.eq) goto loc_8223C778;
	// ld r10,624(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 624);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// b 0x8223c754
	goto loc_8223C754;
loc_8223C778:
	// ld r11,616(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 616);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8223C784:
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq cr6,0x8223c7ac
	if (ctx.cr6.eq) goto loc_8223C7AC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223c7a4
	if (ctx.cr6.eq) goto loc_8223C7A4;
	// lwz r11,708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// b 0x8223c7c0
	goto loc_8223C7C0;
loc_8223C7A4:
	// lwz r11,704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	// b 0x8223c7c0
	goto loc_8223C7C0;
loc_8223C7AC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223c7bc
	if (ctx.cr6.eq) goto loc_8223C7BC;
	// ld r11,640(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 640);
	// b 0x8223c7c0
	goto loc_8223C7C0;
loc_8223C7BC:
	// ld r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 632);
loc_8223C7C0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r28,380
	ctx.r8.s64 = ctx.r28.s64 + 380;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,384(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// lwz r8,388(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// lwz r7,392(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// b 0x8223c810
	goto loc_8223C810;
loc_8223C7F4:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r25,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r25.u64);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
loc_8223C810:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r11,r28,552
	ctx.r11.s64 = ctx.r28.s64 + 552;
	// addi r10,r28,664
	ctx.r10.s64 = ctx.r28.s64 + 664;
	// li r7,4
	ctx.r7.s64 = 4;
loc_8223C820:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223c86c
	if (ctx.cr6.eq) goto loc_8223C86C;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrlwi. r9,r26,31
	ctx.r9.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223c850
	if (ctx.cr0.eq) goto loc_8223C850;
	// rlwinm. r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223c848
	if (ctx.cr0.eq) goto loc_8223C848;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x8223c864
	goto loc_8223C864;
loc_8223C848:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8223c864
	goto loc_8223C864;
loc_8223C850:
	// rlwinm. r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223c860
	if (ctx.cr0.eq) goto loc_8223C860;
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// b 0x8223c864
	goto loc_8223C864;
loc_8223C860:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
loc_8223C864:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
loc_8223C86C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8223c820
	if (!ctx.cr0.eq) goto loc_8223C820;
	// b 0x8223cab0
	goto loc_8223CAB0;
loc_8223C884:
	// rlwinm. r3,r26,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223c8cc
	if (ctx.cr0.eq) goto loc_8223C8CC;
	// lwz r10,84(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8223c8a0
	goto loc_8223C8A0;
loc_8223C898:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
loc_8223C8A0:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8223c898
	if (!ctx.cr0.eq) goto loc_8223C898;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8223C8B0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223c8b0
	if (!ctx.cr6.eq) goto loc_8223C8B0;
	// b 0x8223c8d4
	goto loc_8223C8D4;
loc_8223C8CC:
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// li r8,1
	ctx.r8.s64 = 1;
loc_8223C8D4:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c9c8
	if (ctx.cr0.eq) goto loc_8223C9C8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223c99c
	if (ctx.cr6.eq) goto loc_8223C99C;
	// clrlwi r5,r26,31
	ctx.r5.u64 = ctx.r26.u32 & 0x1;
	// rlwinm r4,r26,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_8223C8F4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223c948
	if (ctx.cr6.eq) goto loc_8223C948;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223c92c
	if (ctx.cr6.eq) goto loc_8223C92C;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// beq cr6,0x8223c990
	if (ctx.cr6.eq) goto loc_8223C990;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
loc_8223C924:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8223c98c
	goto loc_8223C98C;
loc_8223C92C:
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// beq cr6,0x8223c990
	if (ctx.cr6.eq) goto loc_8223C990;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// b 0x8223c924
	goto loc_8223C924;
loc_8223C948:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223c970
	if (ctx.cr6.eq) goto loc_8223C970;
	// ld r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// beq cr6,0x8223c990
	if (ctx.cr6.eq) goto loc_8223C990;
	// ld r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// b 0x8223c988
	goto loc_8223C988;
loc_8223C970:
	// ld r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// beq cr6,0x8223c990
	if (ctx.cr6.eq) goto loc_8223C990;
	// ld r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
loc_8223C988:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8223C98C:
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8223C990:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8223c8f4
	if (!ctx.cr0.eq) goto loc_8223C8F4;
loc_8223C99C:
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,384(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// addi r7,r28,380
	ctx.r7.s64 = ctx.r28.s64 + 380;
	// lwz r7,388(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// lwz r6,392(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// b 0x8223c9e4
	goto loc_8223C9E4;
loc_8223C9C8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r25,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r25.u64);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
loc_8223C9E4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223cab0
	if (ctx.cr6.eq) goto loc_8223CAB0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8223C9F4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r10,r11,200
	ctx.r10.s64 = ctx.r11.s64 + 200;
	// addi r9,r11,312
	ctx.r9.s64 = ctx.r11.s64 + 312;
loc_8223CA08:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ca90
	if (ctx.cr6.eq) goto loc_8223CA90;
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223ca50
	if (ctx.cr0.eq) goto loc_8223CA50;
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223ca3c
	if (ctx.cr0.eq) goto loc_8223CA3C;
	// lwz r11,-32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x8223ca84
	if (ctx.cr6.eq) goto loc_8223CA84;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8223ca7c
	goto loc_8223CA7C;
loc_8223CA3C:
	// ld r11,-64(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x8223ca84
	if (ctx.cr6.eq) goto loc_8223CA84;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// b 0x8223ca7c
	goto loc_8223CA7C;
loc_8223CA50:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223ca6c
	if (ctx.cr0.eq) goto loc_8223CA6C;
	// lwz r11,-48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -48);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x8223ca84
	if (ctx.cr6.eq) goto loc_8223CA84;
	// lwz r8,-16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// b 0x8223ca7c
	goto loc_8223CA7C;
loc_8223CA6C:
	// ld r11,-96(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -96);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x8223ca84
	if (ctx.cr6.eq) goto loc_8223CA84;
	// ld r8,-32(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -32);
loc_8223CA7C:
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_8223CA84:
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8223CA90:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8223ca08
	if (!ctx.cr0.eq) goto loc_8223CA08;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x8223c9f4
	if (!ctx.cr0.eq) goto loc_8223C9F4;
loc_8223CAB0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8223CAB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223CABC"))) PPC_WEAK_FUNC(sub_8223CABC);
PPC_FUNC_IMPL(__imp__sub_8223CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223CAC0"))) PPC_WEAK_FUNC(sub_8223CAC0);
PPC_FUNC_IMPL(__imp__sub_8223CAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8223CAC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8223cb88
	if (!ctx.cr6.gt) goto loc_8223CB88;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bgt cr6,0x8223cb88
	if (ctx.cr6.gt) goto loc_8223CB88;
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223cb88
	if (!ctx.cr0.eq) goto loc_8223CB88;
	// addi r29,r30,424
	ctx.r29.s64 = ctx.r30.s64 + 424;
	// ld r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82247d10
	ctx.lr = 0x8223CB04;
	sub_82247D10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223cb90
	if (ctx.cr6.eq) goto loc_8223CB90;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,380
	ctx.r30.s64 = ctx.r30.s64 + 380;
loc_8223CB18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223cb74
	if (ctx.cr6.eq) goto loc_8223CB74;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,393(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 393);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// ld r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// neg r6,r11
	ctx.r6.s64 = -ctx.r11.s64;
	// beq cr6,0x8223cb68
	if (ctx.cr6.eq) goto loc_8223CB68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223CB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223cb6c
	goto loc_8223CB6C;
loc_8223CB68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223CB6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223cb90
	if (ctx.cr6.lt) goto loc_8223CB90;
loc_8223CB74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8223cb18
	if (ctx.cr6.lt) goto loc_8223CB18;
	// b 0x8223cb90
	goto loc_8223CB90;
loc_8223CB88:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8223CB90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223CB98"))) PPC_WEAK_FUNC(sub_8223CB98);
PPC_FUNC_IMPL(__imp__sub_8223CB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8223CBA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// addi r11,r11,-27912
	ctx.r11.s64 = ctx.r11.s64 + -27912;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822663e8
	ctx.lr = 0x8223CBD0;
	sub_822663E8(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x82246740
	ctx.lr = 0x8223CBD8;
	sub_82246740(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82247e58
	ctx.lr = 0x8223CBE0;
	sub_82247E58(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82247a90
	ctx.lr = 0x8223CBF0;
	sub_82247A90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// bl 0x82218a80
	ctx.lr = 0x8223CC2C;
	sub_82218A80(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82218a80
	ctx.lr = 0x8223CC3C;
	sub_82218A80(ctx, base);
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// stb r30,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r30.u8);
	// li r10,254
	ctx.r10.s64 = 254;
	// stb r30,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r30.u8);
	// li r5,84
	ctx.r5.s64 = 84;
	// stb r30,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r30.u8);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// std r30,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r30.u64);
	// std r30,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r30.u64);
	// std r30,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r30.u64);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// bl 0x82218a80
	ctx.lr = 0x8223CCD0;
	sub_82218A80(ctx, base);
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// li r9,3500
	ctx.r9.s64 = 3500;
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r9.u32);
	// lis r9,14336
	ctx.r9.s64 = 939524096;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// std r30,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r30.u64);
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// std r30,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r30.u64);
	// std r30,600(r31)
	PPC_STORE_U64(ctx.r31.u32 + 600, ctx.r30.u64);
	// std r30,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r30.u64);
	// std r30,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r30.u64);
	// std r30,624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 624, ctx.r30.u64);
	// std r30,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r30.u64);
	// std r30,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r30.u64);
	// std r30,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r30.u64);
	// std r30,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r30.u64);
	// std r30,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r30.u64);
	// std r30,672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 672, ctx.r30.u64);
	// std r30,680(r31)
	PPC_STORE_U64(ctx.r31.u32 + 680, ctx.r30.u64);
	// std r30,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.r30.u64);
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stw r9,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223CD7C"))) PPC_WEAK_FUNC(sub_8223CD7C);
PPC_FUNC_IMPL(__imp__sub_8223CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223CD80"))) PPC_WEAK_FUNC(sub_8223CD80);
PPC_FUNC_IMPL(__imp__sub_8223CD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8223CD88;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8223CDB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r29,r11,r31
	ctx.r29.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// and. r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 & ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223cdc8
	if (!ctx.cr0.eq) goto loc_8223CDC8;
	// std r22,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r22.u64);
	// b 0x8223ce14
	goto loc_8223CE14;
loc_8223CDC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb60
	ctx.lr = 0x8223CDD0;
	sub_8222EB60(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8223cde8
	if (ctx.cr6.eq) goto loc_8223CDE8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8223ce38
	if (!ctx.cr6.eq) goto loc_8223CE38;
	// or r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 | ctx.r28.u64;
	// b 0x8223cdfc
	goto loc_8223CDFC;
loc_8223CDE8:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8223ce44
	if (ctx.cr6.eq) goto loc_8223CE44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8223ce44
	if (ctx.cr6.eq) goto loc_8223CE44;
loc_8223CDFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eda0
	ctx.lr = 0x8223CE08;
	sub_8222EDA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223ce38
	if (!ctx.cr0.eq) goto loc_8223CE38;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8223CE14:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8223cdb0
	if (ctx.cr6.lt) goto loc_8223CDB0;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
loc_8223CE2C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_8223CE38:
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,1245
	ctx.r22.u64 = ctx.r22.u64 | 1245;
	// b 0x8223ce2c
	goto loc_8223CE2C;
loc_8223CE44:
	// lis r22,-32747
	ctx.r22.s64 = -2146107392;
	// ori r22,r22,21001
	ctx.r22.u64 = ctx.r22.u64 | 21001;
	// b 0x8223ce2c
	goto loc_8223CE2C;
}

__attribute__((alias("__imp__sub_8223CE50"))) PPC_WEAK_FUNC(sub_8223CE50);
PPC_FUNC_IMPL(__imp__sub_8223CE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8223CE58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r28,248
	ctx.r29.s64 = ctx.r28.s64 + 248;
	// lwz r31,248(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// b 0x8223ceac
	goto loc_8223CEAC;
loc_8223CE70:
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8223ce90
	if (!ctx.cr6.eq) goto loc_8223CE90;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,-68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x8223cea4
	goto loc_8223CEA4;
loc_8223CE90:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// bl 0x82247990
	ctx.lr = 0x8223CE9C;
	sub_82247990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8223CEA4:
	// blt cr6,0x8223cee0
	if (ctx.cr6.lt) goto loc_8223CEE0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8223CEAC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223cebc
	if (ctx.cr6.eq) goto loc_8223CEBC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8223ce70
	if (!ctx.cr0.eq) goto loc_8223CE70;
loc_8223CEBC:
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_8223CED8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_8223CEE0:
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8223ced8
	goto loc_8223CED8;
}

__attribute__((alias("__imp__sub_8223CF00"))) PPC_WEAK_FUNC(sub_8223CF00);
PPC_FUNC_IMPL(__imp__sub_8223CF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8223CF08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8223d13c
	if (ctx.cr6.eq) goto loc_8223D13C;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8223cf34
	if (!ctx.cr6.eq) goto loc_8223CF34;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223cf40
	if (ctx.cr6.eq) goto loc_8223CF40;
loc_8223CF34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223b8c8
	ctx.lr = 0x8223CF3C;
	sub_8223B8C8(ctx, base);
	// b 0x8223d02c
	goto loc_8223D02C;
loc_8223CF40:
	// addi r11,r31,680
	ctx.r11.s64 = ctx.r31.s64 + 680;
	// addi r8,r30,296
	ctx.r8.s64 = ctx.r30.s64 + 296;
	// addi r9,r31,584
	ctx.r9.s64 = ctx.r31.s64 + 584;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// li r7,4
	ctx.r7.s64 = 4;
loc_8223CF54:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ld r5,-32(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + -32);
	// ld r4,-64(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -64);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// std r6,-32(r9)
	PPC_STORE_U64(ctx.r9.u32 + -32, ctx.r6.u64);
	// ld r4,-32(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -32);
	// ld r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r4,-32(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,-16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r6.u32);
	// lwz r4,-16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8223cf54
	if (!ctx.cr0.eq) goto loc_8223CF54;
	// ld r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 248);
	// ld r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 632);
	// ld r7,232(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 232);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 640);
	// lwz r9,704(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// std r8,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r8.u64);
	// ld r7,256(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 256);
	// ld r8,240(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 240);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r10,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r10.u64);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r8,328(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r10.u32);
	// lwz r9,340(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
loc_8223D02C:
	// li r29,0
	ctx.r29.s64 = 0;
	// std r29,104(r30)
	PPC_STORE_U64(ctx.r30.u32 + 104, ctx.r29.u64);
	// std r29,112(r30)
	PPC_STORE_U64(ctx.r30.u32 + 112, ctx.r29.u64);
	// std r29,120(r30)
	PPC_STORE_U64(ctx.r30.u32 + 120, ctx.r29.u64);
	// std r29,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r29.u64);
	// std r29,136(r30)
	PPC_STORE_U64(ctx.r30.u32 + 136, ctx.r29.u64);
	// std r29,144(r30)
	PPC_STORE_U64(ctx.r30.u32 + 144, ctx.r29.u64);
	// std r29,152(r30)
	PPC_STORE_U64(ctx.r30.u32 + 152, ctx.r29.u64);
	// std r29,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r29.u64);
	// std r29,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r29.u64);
	// std r29,176(r30)
	PPC_STORE_U64(ctx.r30.u32 + 176, ctx.r29.u64);
	// std r29,184(r30)
	PPC_STORE_U64(ctx.r30.u32 + 184, ctx.r29.u64);
	// std r29,192(r30)
	PPC_STORE_U64(ctx.r30.u32 + 192, ctx.r29.u64);
	// std r29,200(r30)
	PPC_STORE_U64(ctx.r30.u32 + 200, ctx.r29.u64);
	// std r29,208(r30)
	PPC_STORE_U64(ctx.r30.u32 + 208, ctx.r29.u64);
	// std r29,216(r30)
	PPC_STORE_U64(ctx.r30.u32 + 216, ctx.r29.u64);
	// std r29,224(r30)
	PPC_STORE_U64(ctx.r30.u32 + 224, ctx.r29.u64);
	// std r29,264(r30)
	PPC_STORE_U64(ctx.r30.u32 + 264, ctx.r29.u64);
	// std r29,272(r30)
	PPC_STORE_U64(ctx.r30.u32 + 272, ctx.r29.u64);
	// std r29,280(r30)
	PPC_STORE_U64(ctx.r30.u32 + 280, ctx.r29.u64);
	// std r29,288(r30)
	PPC_STORE_U64(ctx.r30.u32 + 288, ctx.r29.u64);
	// std r29,296(r30)
	PPC_STORE_U64(ctx.r30.u32 + 296, ctx.r29.u64);
	// std r29,304(r30)
	PPC_STORE_U64(ctx.r30.u32 + 304, ctx.r29.u64);
	// std r29,312(r30)
	PPC_STORE_U64(ctx.r30.u32 + 312, ctx.r29.u64);
	// std r29,320(r30)
	PPC_STORE_U64(ctx.r30.u32 + 320, ctx.r29.u64);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d13c
	if (ctx.cr0.eq) goto loc_8223D13C;
	// lwz r26,248(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r27,r31,248
	ctx.r27.s64 = ctx.r31.s64 + 248;
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x8223d0bc
	goto loc_8223D0BC;
loc_8223D0AC:
	// addi r3,r26,-92
	ctx.r3.s64 = ctx.r26.s64 + -92;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8223b9c0
	ctx.lr = 0x8223D0B8;
	sub_8223B9C0(ctx, base);
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_8223D0BC:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8223d0cc
	if (ctx.cr6.eq) goto loc_8223D0CC;
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne 0x8223d0ac
	if (!ctx.cr0.eq) goto loc_8223D0AC;
loc_8223D0CC:
	// addi r11,r28,69
	ctx.r11.s64 = ctx.r28.s64 + 69;
	// ld r7,632(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 632);
	// addi r10,r28,73
	ctx.r10.s64 = ctx.r28.s64 + 73;
	// ld r6,640(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 640);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,704(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// addi r11,r28,166
	ctx.r11.s64 = ctx.r28.s64 + 166;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r28,170
	ctx.r4.s64 = ctx.r28.s64 + 170;
	// ldx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r31.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r7.u64);
	// ldx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// std r6,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r6.u64);
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r6,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r6.u32);
	// lwz r7,708(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r7,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r7.u32);
	// stdx r29,r8,r31
	PPC_STORE_U64(ctx.r8.u32 + ctx.r31.u32, ctx.r29.u64);
	// stdx r29,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r29.u64);
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
loc_8223D13C:
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223D168"))) PPC_WEAK_FUNC(sub_8223D168);
PPC_FUNC_IMPL(__imp__sub_8223D168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8223D170;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r29,95
	ctx.r11.s64 = ctx.r29.s64 + 95;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223d1a0
	if (ctx.cr0.eq) goto loc_8223D1A0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8223D1A0:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223d1b0
	if (ctx.cr0.eq) goto loc_8223D1B0;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r30,r10,2
	ctx.r30.u64 = ctx.r10.u64 | 2;
loc_8223D1B0:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223d1c0
	if (ctx.cr0.eq) goto loc_8223D1C0;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r30,r10,4
	ctx.r30.u64 = ctx.r10.u64 | 4;
loc_8223D1C0:
	// rlwinm r11,r11,0,10,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eb70
	ctx.lr = 0x8223D1DC;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d1f0
	if (!ctx.cr0.eq) goto loc_8223D1F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223d248
	if (!ctx.cr6.eq) goto loc_8223D248;
loc_8223D1F0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eb70
	ctx.lr = 0x8223D204;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d22c
	if (!ctx.cr0.eq) goto loc_8223D22C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d25c
	if (ctx.cr6.eq) goto loc_8223D25C;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// ori r30,r10,16
	ctx.r30.u64 = ctx.r10.u64 | 16;
	// b 0x8223d258
	goto loc_8223D258;
loc_8223D22C:
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x8223d25c
	if (!ctx.cr6.eq) goto loc_8223D25C;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d248
	if (ctx.cr6.eq) goto loc_8223D248;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223d25c
	if (!ctx.cr6.eq) goto loc_8223D25C;
loc_8223D248:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// ori r30,r10,8
	ctx.r30.u64 = ctx.r10.u64 | 8;
loc_8223D258:
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_8223D25C:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,235
	ctx.r4.s64 = 235;
	// rlwinm r11,r11,0,12,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x8222eb70
	ctx.lr = 0x8223D27C;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d29c
	if (!ctx.cr0.eq) goto loc_8223D29C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d29c
	if (ctx.cr6.eq) goto loc_8223D29C;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r30,r10,32
	ctx.r30.u64 = ctx.r10.u64 | 32;
	// b 0x8223d2fc
	goto loc_8223D2FC;
loc_8223D29C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,234
	ctx.r4.s64 = 234;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eb70
	ctx.lr = 0x8223D2B0;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d2d8
	if (!ctx.cr0.eq) goto loc_8223D2D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d308
	if (ctx.cr6.eq) goto loc_8223D308;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// ori r30,r10,64
	ctx.r30.u64 = ctx.r10.u64 | 64;
	// b 0x8223d304
	goto loc_8223D304;
loc_8223D2D8:
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x8223d308
	if (!ctx.cr6.eq) goto loc_8223D308;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d2f4
	if (ctx.cr6.eq) goto loc_8223D2F4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223d308
	if (!ctx.cr6.eq) goto loc_8223D308;
loc_8223D2F4:
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r30,r10,8
	ctx.r30.u64 = ctx.r10.u64 | 8;
loc_8223D2FC:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
loc_8223D304:
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_8223D308:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223d31c
	if (ctx.cr0.eq) goto loc_8223D31C;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r30,r10,128
	ctx.r30.u64 = ctx.r10.u64 | 128;
loc_8223D31C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d32c
	if (ctx.cr0.eq) goto loc_8223D32C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r30,r11,256
	ctx.r30.u64 = ctx.r11.u64 | 256;
loc_8223D32C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223D338"))) PPC_WEAK_FUNC(sub_8223D338);
PPC_FUNC_IMPL(__imp__sub_8223D338) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d3a4
	if (ctx.cr6.eq) goto loc_8223D3A4;
	// lwz r9,724(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,380
	ctx.r10.s64 = ctx.r3.s64 + 380;
	// rlwinm r4,r9,21,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
loc_8223D360:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8223d380
	if (!ctx.cr6.eq) goto loc_8223D380;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8223d360
	if (ctx.cr6.lt) goto loc_8223D360;
	// b 0x8223d398
	goto loc_8223D398;
loc_8223D380:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,4,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_8223D398:
	// bl 0x8223b228
	ctx.lr = 0x8223D39C;
	sub_8223B228(ctx, base);
	// rlwinm r3,r3,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	// b 0x8223d3a8
	goto loc_8223D3A8;
loc_8223D3A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223D3A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D3B8"))) PPC_WEAK_FUNC(sub_8223D3B8);
PPC_FUNC_IMPL(__imp__sub_8223D3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8223D3C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x8222eb60
	ctx.lr = 0x8223D3DC;
	sub_8222EB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223d4c4
	if (ctx.cr0.eq) goto loc_8223D4C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8222eb70
	ctx.lr = 0x8223D3F8;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d414
	if (!ctx.cr0.eq) goto loc_8223D414;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d414
	if (ctx.cr6.eq) goto loc_8223D414;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8223d450
	goto loc_8223D450;
loc_8223D414:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb70
	ctx.lr = 0x8223D428;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d444
	if (!ctx.cr0.eq) goto loc_8223D444;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d450
	if (ctx.cr6.eq) goto loc_8223D450;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x8223d450
	goto loc_8223D450;
loc_8223D444:
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x8223d450
	if (!ctx.cr6.eq) goto loc_8223D450;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8223D450:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,235
	ctx.r4.s64 = 235;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb70
	ctx.lr = 0x8223D464;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d484
	if (!ctx.cr0.eq) goto loc_8223D484;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d484
	if (ctx.cr6.eq) goto loc_8223D484;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// ori r30,r11,8
	ctx.r30.u64 = ctx.r11.u64 | 8;
	// b 0x8223d4c4
	goto loc_8223D4C4;
loc_8223D484:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,234
	ctx.r4.s64 = 234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb70
	ctx.lr = 0x8223D498;
	sub_8222EB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223d4b8
	if (!ctx.cr0.eq) goto loc_8223D4B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d4c4
	if (ctx.cr6.eq) goto loc_8223D4C4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// ori r30,r11,16
	ctx.r30.u64 = ctx.r11.u64 | 16;
	// b 0x8223d4c4
	goto loc_8223D4C4;
loc_8223D4B8:
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x8223d4c4
	if (!ctx.cr6.eq) goto loc_8223D4C4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8223D4C4:
	// add r29,r31,r28
	ctx.r29.u64 = ctx.r31.u64 + ctx.r28.u64;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// lbz r10,720(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 720);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223d528
	if (ctx.cr6.eq) goto loc_8223D528;
	// lwz r3,424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d4fc
	if (ctx.cr6.eq) goto loc_8223D4FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d51c
	if (ctx.cr6.eq) goto loc_8223D51C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8223d50c
	goto loc_8223D50C;
loc_8223D4FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d51c
	if (ctx.cr6.eq) goto loc_8223D51C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_8223D50C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223d520
	goto loc_8223D520;
loc_8223D51C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8223D520:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223d530
	if (ctx.cr6.lt) goto loc_8223D530;
loc_8223D528:
	// stb r30,720(r29)
	PPC_STORE_U8(ctx.r29.u32 + 720, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8223D530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223D538"))) PPC_WEAK_FUNC(sub_8223D538);
PPC_FUNC_IMPL(__imp__sub_8223D538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8223D540;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// rlwinm r27,r10,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r28,236(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r25,r31,240
	ctx.r25.s64 = ctx.r31.s64 + 240;
	// addi r24,r11,68
	ctx.r24.s64 = ctx.r11.s64 + 68;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82247a60
	ctx.lr = 0x8223D590;
	sub_82247A60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8223d5a4
	if (!ctx.cr0.eq) goto loc_8223D5A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8223d768
	goto loc_8223D768;
loc_8223D5A4:
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223d5b8
	if (ctx.cr0.eq) goto loc_8223D5B8;
	// ori r11,r26,1
	ctx.r11.u64 = ctx.r26.u64 | 1;
loc_8223D5B8:
	// rlwinm. r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223d5c4
	if (ctx.cr0.eq) goto loc_8223D5C4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_8223D5C4:
	// rlwinm. r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223d5d4
	if (ctx.cr0.eq) goto loc_8223D5D4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x8223d5e0
	goto loc_8223D5E0;
loc_8223D5D4:
	// rlwinm. r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223d5e0
	if (ctx.cr0.eq) goto loc_8223D5E0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_8223D5E0:
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223d5ec
	if (ctx.cr0.eq) goto loc_8223D5EC;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_8223D5EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,380
	ctx.r9.s64 = ctx.r31.s64 + 380;
loc_8223D5F4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8223d614
	if (!ctx.cr6.eq) goto loc_8223D614;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8223d5f4
	if (ctx.cr6.lt) goto loc_8223D5F4;
	// b 0x8223d630
	goto loc_8223D630;
loc_8223D614:
	// addi r10,r10,95
	ctx.r10.s64 = ctx.r10.s64 + 95;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223d630
	if (ctx.cr0.eq) goto loc_8223D630;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_8223D630:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// addi r26,r31,228
	ctx.r26.s64 = ctx.r31.s64 + 228;
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// stw r22,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r22.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// lwz r9,520(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// sth r9,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r9.u16);
	// sth r11,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r11.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// stb r11,33(r30)
	PPC_STORE_U8(ctx.r30.u32 + 33, ctx.r11.u8);
	// lbz r11,169(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// stb r11,34(r30)
	PPC_STORE_U8(ctx.r30.u32 + 34, ctx.r11.u8);
	// lbz r11,170(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// stb r11,35(r30)
	PPC_STORE_U8(ctx.r30.u32 + 35, ctx.r11.u8);
	// lbz r11,171(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// stb r11,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r11.u8);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d6b8
	if (ctx.cr6.eq) goto loc_8223D6B8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82248ec8
	ctx.lr = 0x8223D6B4;
	sub_82248EC8(ctx, base);
	// b 0x8223d6c8
	goto loc_8223D6C8;
loc_8223D6B8:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82218a80
	ctx.lr = 0x8223D6C8;
	sub_82218A80(ctx, base);
loc_8223D6C8:
	// addi r6,r30,37
	ctx.r6.s64 = ctx.r30.s64 + 37;
	// stw r23,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r23.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r6,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r6.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82247380
	ctx.lr = 0x8223D6F4;
	sub_82247380(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r27,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r27.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82246a10
	ctx.lr = 0x8223D714;
	sub_82246A10(ctx, base);
	// lwz r5,520(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82219130
	ctx.lr = 0x8223D724;
	sub_82219130(ctx, base);
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82247fc0
	ctx.lr = 0x8223D738;
	sub_82247FC0(ctx, base);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r24,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r24.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r28,1147
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1147, ctx.xer);
	// bgt cr6,0x8223d760
	if (ctx.cr6.gt) goto loc_8223D760;
	// subfic r10,r28,1147
	ctx.xer.ca = ctx.r28.u32 <= 1147;
	ctx.r10.s64 = 1147 - ctx.r28.s64;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8223d760
	if (ctx.cr6.lt) goto loc_8223D760;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8223D760:
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223D768:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223D770"))) PPC_WEAK_FUNC(sub_8223D770);
PPC_FUNC_IMPL(__imp__sub_8223D770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8223D778;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// rlwinm. r27,r11,0,28,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8223d7c4
	if (ctx.cr0.eq) goto loc_8223D7C4;
	// lwz r8,724(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// ori r7,r7,65534
	ctx.r7.u64 = ctx.r7.u64 | 65534;
	// stw r8,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r8.u32);
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// oris r8,r8,65016
	ctx.r8.u64 = ctx.r8.u64 | 4260888576;
	// b 0x8223d7d8
	goto loc_8223D7D8;
loc_8223D7C4:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r7,24(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// oris r8,r8,65532
	ctx.r8.u64 = ctx.r8.u64 | 4294705152;
loc_8223D7D8:
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// clrlwi r29,r11,30
	ctx.r29.u64 = ctx.r11.u32 & 0x3;
	// lwz r8,724(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r11,r8,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223d7f0
	if (!ctx.cr0.eq) goto loc_8223D7F0;
	// ori r29,r29,64
	ctx.r29.u64 = ctx.r29.u64 | 64;
loc_8223D7F0:
	// lbz r11,383(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 383);
	// li r4,15
	ctx.r4.s64 = 15;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// clrlwi. r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// beq cr6,0x8223d870
	if (ctx.cr6.eq) goto loc_8223D870;
	// beq 0x8223d828
	if (ctx.cr0.eq) goto loc_8223D828;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x8223d828
	if (ctx.cr6.eq) goto loc_8223D828;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8223d844
	goto loc_8223D844;
loc_8223D828:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// slw r4,r8,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
loc_8223D844:
	// lwz r3,100(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r21,r1,104
	ctx.r21.s64 = ctx.r1.s64 + 104;
	// lwz r11,396(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 396);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// b 0x8223d8a0
	goto loc_8223D8A0;
loc_8223D870:
	// beq 0x8223d884
	if (ctx.cr0.eq) goto loc_8223D884;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x8223d884
	if (ctx.cr6.eq) goto loc_8223D884;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8223d890
	goto loc_8223D890;
loc_8223D884:
	// ori r11,r7,240
	ctx.r11.u64 = ctx.r7.u64 | 240;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
loc_8223D890:
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8223D8A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// beq cr6,0x8223d8c0
	if (ctx.cr6.eq) goto loc_8223D8C0;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
loc_8223D8C0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8223d8e0
	if (ctx.cr6.eq) goto loc_8223D8E0;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r22,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r22.u32);
	// stwx r23,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r23.u32);
loc_8223D8E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223d994
	if (!ctx.cr6.eq) goto loc_8223D994;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// beq cr6,0x8223d904
	if (ctx.cr6.eq) goto loc_8223D904;
	// li r11,7
	ctx.r11.s64 = 7;
	// oris r10,r4,32768
	ctx.r10.u64 = ctx.r4.u64 | 2147483648;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// b 0x8223d924
	goto loc_8223D924;
loc_8223D904:
	// rlwinm r11,r7,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x8223d91c
	if (ctx.cr6.eq) goto loc_8223D91C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x8223d920
	goto loc_8223D920;
loc_8223D91C:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
loc_8223D920:
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
loc_8223D924:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82247910
	ctx.lr = 0x8223D948;
	sub_82247910(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223d96c
	if (!ctx.cr0.lt) goto loc_8223D96C;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223da54
	if (!ctx.cr6.eq) goto loc_8223DA54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,4328
	ctx.r3.u64 = ctx.r3.u64 | 4328;
	// b 0x8223da54
	goto loc_8223DA54;
loc_8223D96C:
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223d994
	if (!ctx.cr0.eq) goto loc_8223D994;
	// lwz r11,396(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 396);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8223d98c
	if (ctx.cr6.eq) goto loc_8223D98C;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// b 0x8223d990
	goto loc_8223D990;
loc_8223D98C:
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_8223D990:
	// stw r11,396(r26)
	PPC_STORE_U32(ctx.r26.u32 + 396, ctx.r11.u32);
loc_8223D994:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8223da50
	if (ctx.cr6.eq) goto loc_8223DA50;
	// lwz r11,396(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223da50
	if (ctx.cr0.eq) goto loc_8223DA50;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r10,r24,280
	ctx.r10.s64 = ctx.r24.s64 + 280;
	// addi r11,r24,136
	ctx.r11.s64 = ctx.r24.s64 + 136;
	// addi r3,r30,380
	ctx.r3.s64 = ctx.r30.s64 + 380;
	// li r4,4
	ctx.r4.s64 = 4;
loc_8223D9C0:
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8223da10
	if (ctx.cr6.eq) goto loc_8223DA10;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8223d9dc
	if (ctx.cr6.eq) goto loc_8223D9DC;
	// cmplw cr6,r25,r6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8223da10
	if (!ctx.cr6.eq) goto loc_8223DA10;
loc_8223D9DC:
	// lwz r8,396(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 396);
	// rlwinm. r8,r8,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8223da10
	if (ctx.cr0.eq) goto loc_8223DA10;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// clrldi r7,r23,32
	ctx.r7.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8223DA10:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8223d9c0
	if (!ctx.cr0.eq) goto loc_8223D9C0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223da50
	if (ctx.cr6.eq) goto loc_8223DA50;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223DA50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8223DA54:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223DA5C"))) PPC_WEAK_FUNC(sub_8223DA5C);
PPC_FUNC_IMPL(__imp__sub_8223DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DA60"))) PPC_WEAK_FUNC(sub_8223DA60);
PPC_FUNC_IMPL(__imp__sub_8223DA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8223DA68;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x8223cd80
	ctx.lr = 0x8223DA9C;
	sub_8223CD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8223db88
	if (ctx.cr0.lt) goto loc_8223DB88;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822481b8
	ctx.lr = 0x8223DAC4;
	sub_822481B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8223db88
	if (ctx.cr0.lt) goto loc_8223DB88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82248a48
	ctx.lr = 0x8223DAE0;
	sub_82248A48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8223daf4
	if (!ctx.cr0.eq) goto loc_8223DAF4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8223db44
	goto loc_8223DB44;
loc_8223DAF4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223db18
	if (!ctx.cr6.eq) goto loc_8223DB18;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x821f7f18
	ctx.lr = 0x8223DB08;
	sub_821F7F18(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8223DB18:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248310
	ctx.lr = 0x8223DB3C;
	sub_82248310(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8223db58
	if (!ctx.cr0.lt) goto loc_8223DB58;
loc_8223DB44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223db88
	if (ctx.cr6.eq) goto loc_8223DB88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248ab8
	ctx.lr = 0x8223DB54;
	sub_82248AB8(ctx, base);
	// b 0x8223db88
	goto loc_8223DB88;
loc_8223DB58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248e58
	ctx.lr = 0x8223DB60;
	sub_82248E58(ctx, base);
	// addi r10,r30,412
	ctx.r10.s64 = ctx.r30.s64 + 412;
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// lwz r10,416(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// lwz r10,416(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r11.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
loc_8223DB88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223DB94"))) PPC_WEAK_FUNC(sub_8223DB94);
PPC_FUNC_IMPL(__imp__sub_8223DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DB98"))) PPC_WEAK_FUNC(sub_8223DB98);
PPC_FUNC_IMPL(__imp__sub_8223DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8223DBA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// slw r4,r11,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223cd80
	ctx.lr = 0x8223DBCC;
	sub_8223CD80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8223dc94
	if (ctx.cr0.lt) goto loc_8223DC94;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248288
	ctx.lr = 0x8223DBE8;
	sub_82248288(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8223dc94
	if (ctx.cr0.lt) goto loc_8223DC94;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82248a48
	ctx.lr = 0x8223DC04;
	sub_82248A48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8223dc18
	if (!ctx.cr0.eq) goto loc_8223DC18;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x8223dc54
	goto loc_8223DC54;
loc_8223DC18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223dc3c
	if (!ctx.cr6.eq) goto loc_8223DC3C;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821f7f18
	ctx.lr = 0x8223DC2C;
	sub_821F7F18(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
loc_8223DC3C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248460
	ctx.lr = 0x8223DC4C;
	sub_82248460(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8223dc68
	if (!ctx.cr0.lt) goto loc_8223DC68;
loc_8223DC54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223dc94
	if (ctx.cr6.eq) goto loc_8223DC94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248ab8
	ctx.lr = 0x8223DC64;
	sub_82248AB8(ctx, base);
	// b 0x8223dc94
	goto loc_8223DC94;
loc_8223DC68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248e58
	ctx.lr = 0x8223DC70;
	sub_82248E58(ctx, base);
	// addi r10,r31,412
	ctx.r10.s64 = ctx.r31.s64 + 412;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
loc_8223DC94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223DCA0"))) PPC_WEAK_FUNC(sub_8223DCA0);
PPC_FUNC_IMPL(__imp__sub_8223DCA0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8223d338
	ctx.lr = 0x8223DCBC;
	sub_8223D338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223dd10
	if (ctx.cr0.eq) goto loc_8223DD10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// bl 0x825e5f60
	ctx.lr = 0x8223DCD0;
	sub_825E5F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223dd08
	if (ctx.cr0.eq) goto loc_8223DD08;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8223dcfc
	if (ctx.cr6.eq) goto loc_8223DCFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e990
	ctx.lr = 0x8223DCE8;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dd18
	if (ctx.cr0.lt) goto loc_8223DD18;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8223dd18
	goto loc_8223DD18;
loc_8223DCFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,997
	ctx.r3.u64 = ctx.r3.u64 | 997;
	// b 0x8223dd18
	goto loc_8223DD18;
loc_8223DD08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223dd18
	goto loc_8223DD18;
loc_8223DD10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
loc_8223DD18:
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

__attribute__((alias("__imp__sub_8223DD2C"))) PPC_WEAK_FUNC(sub_8223DD2C);
PPC_FUNC_IMPL(__imp__sub_8223DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DD30"))) PPC_WEAK_FUNC(sub_8223DD30);
PPC_FUNC_IMPL(__imp__sub_8223DD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8223DD38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,728
	ctx.r4.s64 = 728;
	// li r3,260
	ctx.r3.s64 = 260;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82247a60
	ctx.lr = 0x8223DD5C;
	sub_82247A60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8223dd80
	if (ctx.cr0.eq) goto loc_8223DD80;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cb98
	ctx.lr = 0x8223DD80;
	sub_8223CB98(ctx, base);
loc_8223DD80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223DD8C"))) PPC_WEAK_FUNC(sub_8223DD8C);
PPC_FUNC_IMPL(__imp__sub_8223DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DD90"))) PPC_WEAK_FUNC(sub_8223DD90);
PPC_FUNC_IMPL(__imp__sub_8223DD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8223DD98;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// ble cr6,0x8223ddc0
	if (!ctx.cr6.gt) goto loc_8223DDC0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,4336
	ctx.r3.u64 = ctx.r3.u64 | 4336;
	// b 0x8223def4
	goto loc_8223DEF4;
loc_8223DDC0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8223deec
	if (ctx.cr6.lt) goto loc_8223DEEC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8223deec
	if (!ctx.cr6.lt) goto loc_8223DEEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223de14
	if (ctx.cr6.eq) goto loc_8223DE14;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// clrldi r30,r7,32
	ctx.r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r31,r11,r5
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r5.u32);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stdx r31,r11,r5
	PPC_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u64);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r11,r11,66
	ctx.r11.s64 = ctx.r11.s64 + 66;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r5
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r31,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u32);
	// b 0x8223de7c
	goto loc_8223DE7C;
loc_8223DE14:
	// lwz r30,248(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// addi r28,r3,248
	ctx.r28.s64 = ctx.r3.s64 + 248;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8223de7c
	if (ctx.cr6.eq) goto loc_8223DE7C;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8223de7c
	if (ctx.cr0.eq) goto loc_8223DE7C;
	// clrldi r27,r7,32
	ctx.r27.u64 = ctx.r7.u64 & 0xFFFFFFFF;
loc_8223DE30:
	// lwz r31,24(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r11,r30,-92
	ctx.r11.s64 = ctx.r30.s64 + -92;
	// addi r31,r31,13
	ctx.r31.s64 = ctx.r31.s64 + 13;
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stdx r29,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u64);
	// lwz r31,24(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r31,r31,66
	ctx.r31.s64 = ctx.r31.s64 + 66;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8223de7c
	if (ctx.cr6.eq) goto loc_8223DE7C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223de30
	if (!ctx.cr0.eq) goto loc_8223DE30;
loc_8223DE7C:
	// rlwinm. r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223decc
	if (ctx.cr0.eq) goto loc_8223DECC;
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223dec8
	if (!ctx.cr0.eq) goto loc_8223DEC8;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223deb0
	if (ctx.cr6.eq) goto loc_8223DEB0;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r10,100(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8223deb4
	goto loc_8223DEB4;
loc_8223DEB0:
	// li r11,240
	ctx.r11.s64 = 240;
loc_8223DEB4:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
loc_8223DEC8:
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_8223DECC:
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x8223d770
	ctx.lr = 0x8223DEE8;
	sub_8223D770(ctx, base);
	// b 0x8223def4
	goto loc_8223DEF4;
loc_8223DEEC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
loc_8223DEF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223DEFC"))) PPC_WEAK_FUNC(sub_8223DEFC);
PPC_FUNC_IMPL(__imp__sub_8223DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DF00"))) PPC_WEAK_FUNC(sub_8223DF00);
PPC_FUNC_IMPL(__imp__sub_8223DF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8223DF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8223df34
	if (!ctx.cr6.lt) goto loc_8223DF34;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,1609
	ctx.r29.u64 = ctx.r29.u64 | 1609;
	// b 0x8223dfcc
	goto loc_8223DFCC;
loc_8223DF34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223d338
	ctx.lr = 0x8223DF3C;
	sub_8223D338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8223df50
	if (!ctx.cr0.eq) goto loc_8223DF50;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,117
	ctx.r29.u64 = ctx.r29.u64 | 117;
	// b 0x8223dfcc
	goto loc_8223DFCC;
loc_8223DF50:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ld r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82249988
	ctx.lr = 0x8223DF60;
	sub_82249988(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8223df74
	if (!ctx.cr0.eq) goto loc_8223DF74;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x8223df98
	goto loc_8223DF98;
loc_8223DF74:
	// lwz r11,524(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// addi r30,r29,524
	ctx.r30.s64 = ctx.r29.s64 + 524;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8223dfac
	if (!ctx.cr6.eq) goto loc_8223DFAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82249858
	ctx.lr = 0x8223DF90;
	sub_82249858(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8223dfac
	if (!ctx.cr0.lt) goto loc_8223DFAC;
loc_8223DF98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223dfcc
	if (ctx.cr6.eq) goto loc_8223DFCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249a80
	ctx.lr = 0x8223DFA8;
	sub_82249A80(ctx, base);
	// b 0x8223dfcc
	goto loc_8223DFCC;
loc_8223DFAC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8223DFCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223DFD8"))) PPC_WEAK_FUNC(sub_8223DFD8);
PPC_FUNC_IMPL(__imp__sub_8223DFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8223DFE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r31,380
	ctx.r30.s64 = ctx.r31.s64 + 380;
loc_8223E008:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e174
	if (ctx.cr0.eq) goto loc_8223E174;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223e134
	if (ctx.cr6.eq) goto loc_8223E134;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,396(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// beq 0x8223e084
	if (ctx.cr0.eq) goto loc_8223E084;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// beq cr6,0x8223e084
	if (ctx.cr6.eq) goto loc_8223E084;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82247b80
	ctx.lr = 0x8223E084;
	sub_82247B80(ctx, base);
loc_8223E084:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8223e09c
	if (!ctx.cr6.eq) goto loc_8223E09C;
	// bl 0x82249808
	ctx.lr = 0x8223E098;
	sub_82249808(ctx, base);
	// stw r27,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r27.u32);
loc_8223E09C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8223e184
	if (ctx.cr6.eq) goto loc_8223E184;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e0c4
	if (ctx.cr6.eq) goto loc_8223E0C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223E0C4:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r27,720(r11)
	PPC_STORE_U8(ctx.r11.u32 + 720, ctx.r27.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e0ec
	if (ctx.cr0.eq) goto loc_8223E0EC;
	// lbz r11,171(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r11.u8);
	// b 0x8223e0f8
	goto loc_8223E0F8;
loc_8223E0EC:
	// lbz r11,170(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r11.u8);
loc_8223E0F8:
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82247f48
	ctx.lr = 0x8223E104;
	sub_82247F48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8223cf00
	ctx.lr = 0x8223E114;
	sub_8223CF00(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82248e90
	ctx.lr = 0x8223E11C;
	sub_82248E90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r27.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82249808
	ctx.lr = 0x8223E12C;
	sub_82249808(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// b 0x8223e184
	goto loc_8223E184;
loc_8223E134:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8223e184
	if (ctx.cr6.eq) goto loc_8223E184;
	// add r28,r29,r31
	ctx.r28.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 720);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e184
	if (ctx.cr0.eq) goto loc_8223E184;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e16c
	if (ctx.cr6.eq) goto loc_8223E16C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223E16C:
	// stb r27,720(r28)
	PPC_STORE_U8(ctx.r28.u32 + 720, ctx.r27.u8);
	// b 0x8223e184
	goto loc_8223E184;
loc_8223E174:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223e184
	if (ctx.cr6.eq) goto loc_8223E184;
	// li r22,1
	ctx.r22.s64 = 1;
loc_8223E184:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8223e008
	if (ctx.cr6.lt) goto loc_8223E008;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e1e8
	if (ctx.cr6.eq) goto loc_8223E1E8;
	// lbz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 724);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e1e8
	if (ctx.cr0.eq) goto loc_8223E1E8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8223e1d4
	if (ctx.cr6.eq) goto loc_8223E1D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825e5a30
	ctx.lr = 0x8223E1C4;
	sub_825E5A30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223e1d4
	if (ctx.cr0.eq) goto loc_8223E1D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x8223E1D4;
	sub_8222E990(ctx, base);
loc_8223E1D4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8223e1e8
	if (!ctx.cr6.eq) goto loc_8223E1E8;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8223E1E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223E1F0"))) PPC_WEAK_FUNC(sub_8223E1F0);
PPC_FUNC_IMPL(__imp__sub_8223E1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8223E1F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,95
	ctx.r11.s64 = ctx.r4.s64 + 95;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x8223d168
	ctx.lr = 0x8223E24C;
	sub_8223D168(ctx, base);
	// sth r3,24(r30)
	PPC_STORE_U16(ctx.r30.u32 + 24, ctx.r3.u16);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,26(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26, ctx.r3.u8);
	// addi r4,r30,27
	ctx.r4.s64 = ctx.r30.s64 + 27;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82248ec8
	ctx.lr = 0x8223E274;
	sub_82248EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223E27C"))) PPC_WEAK_FUNC(sub_8223E27C);
PPC_FUNC_IMPL(__imp__sub_8223E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E280"))) PPC_WEAK_FUNC(sub_8223E280);
PPC_FUNC_IMPL(__imp__sub_8223E280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x8223E288;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r28,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r28.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r24,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x8223c028
	ctx.lr = 0x8223E2C8;
	sub_8223C028(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// blt 0x8223e2dc
	if (ctx.cr0.lt) goto loc_8223E2DC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8223E2DC:
	// lwz r11,420(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223e2f0
	if (ctx.cr6.eq) goto loc_8223E2F0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8223e2f4
	goto loc_8223E2F4;
loc_8223E2F0:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8223E2F4:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e31c
	if (ctx.cr0.eq) goto loc_8223E31C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223e31c
	if (ctx.cr6.eq) goto loc_8223E31C;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8223e314
	if (!ctx.cr6.eq) goto loc_8223E314;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8223e31c
	if (!ctx.cr6.eq) goto loc_8223E31C;
loc_8223E314:
	// li r25,-1
	ctx.r25.s64 = -1;
	// b 0x8223e320
	goto loc_8223E320;
loc_8223E31C:
	// li r25,-97
	ctx.r25.s64 = -97;
loc_8223E320:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r14,1
	ctx.r14.s64 = 1;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// std r16,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r16.u64);
	// stw r16,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// beq cr6,0x8223e410
	if (ctx.cr6.eq) goto loc_8223E410;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_8223E34C:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r31,r25,16
	ctx.r31.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// bl 0x8223b878
	ctx.lr = 0x8223E364;
	sub_8223B878(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// and r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 & ctx.r31.u64;
	// rlwinm. r10,r9,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// bne 0x8223e37c
	if (!ctx.cr0.eq) goto loc_8223E37C;
	// andi. r25,r31,65439
	ctx.r25.u64 = ctx.r31.u64 & 65439;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
loc_8223E37C:
	// andi. r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 & 80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223e3b0
	if (ctx.cr0.eq) goto loc_8223E3B0;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// slw r8,r14,r26
	ctx.r8.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r26.u8 & 0x3F));
loc_8223E390:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// blt cr6,0x8223e390
	if (ctx.cr6.lt) goto loc_8223E390;
loc_8223E3B0:
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223e3cc
	if (ctx.cr0.eq) goto loc_8223E3CC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lhzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// sthx r8,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u16);
loc_8223E3CC:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223e3e4
	if (ctx.cr0.eq) goto loc_8223E3E4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lhzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// sthx r8,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u16);
loc_8223E3E4:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r11,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// sthx r9,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8223e34c
	if (ctx.cr6.lt) goto loc_8223E34C;
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
loc_8223E410:
	// lwz r11,724(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 724);
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// rlwinm r20,r11,13,27,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x10;
	// li r17,-1
	ctx.r17.s64 = -1;
loc_8223E424:
	// addi r11,r29,95
	ctx.r11.s64 = ctx.r29.s64 + 95;
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r18,r11,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r18,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223e698
	if (ctx.cr6.eq) goto loc_8223E698;
	// bl 0x8223d168
	ctx.lr = 0x8223E444;
	sub_8223D168(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// andi. r9,r10,80
	ctx.r9.u64 = ctx.r10.u64 & 80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r19,r10,16
	ctx.r19.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8223e46c
	if (ctx.cr0.eq) goto loc_8223E46C;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r9,255
	ctx.r9.s64 = 255;
	// stbx r9,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8223E46C:
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223e6a4
	if (ctx.cr6.eq) goto loc_8223E6A4;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// rlwinm r23,r11,0,27,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// rlwinm r22,r11,0,25,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// addi r25,r1,104
	ctx.r25.s64 = ctx.r1.s64 + 104;
	// addi r24,r1,112
	ctx.r24.s64 = ctx.r1.s64 + 112;
	// lbzx r21,r29,r10
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
loc_8223E498:
	// slw r11,r14,r26
	ctx.r11.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r26.u8 & 0x3F));
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// and. r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// beq 0x8223e4e4
	if (ctx.cr0.eq) goto loc_8223E4E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eb68
	ctx.lr = 0x8223E4C8;
	sub_8222EB68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223e4dc
	if (!ctx.cr0.eq) goto loc_8223E4DC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223e4e4
	if (!ctx.cr6.eq) goto loc_8223E4E4;
loc_8223E4DC:
	// andi. r28,r28,65519
	ctx.r28.u64 = ctx.r28.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// andi. r30,r30,65471
	ctx.r30.u64 = ctx.r30.u64 & 65471;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8223E4E4:
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// bne cr6,0x8223e4f4
	if (!ctx.cr6.eq) goto loc_8223E4F4;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8223e4fc
	goto loc_8223E4FC;
loc_8223E4F4:
	// slw r11,r14,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8223E4FC:
	// lbz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223e530
	if (!ctx.cr0.eq) goto loc_8223E530;
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// bne cr6,0x8223e51c
	if (!ctx.cr6.eq) goto loc_8223E51C;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8223e524
	goto loc_8223E524;
loc_8223E51C:
	// slw r11,r14,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8223E524:
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e538
	if (ctx.cr0.eq) goto loc_8223E538;
loc_8223E530:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8223E538:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// and r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 & ctx.r19.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223e588
	if (ctx.cr0.eq) goto loc_8223E588;
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e588
	if (ctx.cr0.eq) goto loc_8223E588;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r11,r18,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223e570
	if (ctx.cr0.eq) goto loc_8223E570;
	// rlwinm r16,r20,0,27,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10;
loc_8223E570:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e598
	if (ctx.cr0.eq) goto loc_8223E598;
	// rlwinm r15,r20,0,27,27
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10;
	// b 0x8223e598
	goto loc_8223E598;
loc_8223E588:
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// rlwinm r20,r20,0,28,26
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
loc_8223E598:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// and r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 & ctx.r19.u64;
	// clrlwi. r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223e60c
	if (ctx.cr0.eq) goto loc_8223E60C;
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e60c
	if (ctx.cr0.eq) goto loc_8223E60C;
	// lwzx r11,r18,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223e5d0
	if (ctx.cr0.eq) goto loc_8223E5D0;
	// slw r9,r14,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r29.u8 & 0x3F));
	// or r20,r9,r20
	ctx.r20.u64 = ctx.r9.u64 | ctx.r20.u64;
loc_8223E5D0:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e60c
	if (ctx.cr0.eq) goto loc_8223E60C;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223e60c
	if (ctx.cr0.eq) goto loc_8223E60C;
	// lbz r9,393(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 393);
	// slw r8,r14,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r29.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r9,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r9.u8);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// b 0x8223e620
	goto loc_8223E620;
loc_8223E60C:
	// lbz r11,393(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 393);
	// slw r9,r14,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r29.u8 & 0x3F));
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stb r11,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r11.u8);
loc_8223E620:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223e638
	if (!ctx.cr0.eq) goto loc_8223E638;
	// lwz r9,364(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8223e678
	if (ctx.cr6.eq) goto loc_8223E678;
loc_8223E638:
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223e678
	if (!ctx.cr0.eq) goto loc_8223E678;
	// lwz r3,424(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e66c
	if (ctx.cr6.eq) goto loc_8223E66C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8223e670
	goto loc_8223E670;
loc_8223E66C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8223E670:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8223e7b4
	if (ctx.cr6.lt) goto loc_8223E7B4;
loc_8223E678:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223e498
	if (ctx.cr6.lt) goto loc_8223E498;
	// b 0x8223e6a4
	goto loc_8223E6A4;
loc_8223E698:
	// bl 0x8223d3b8
	ctx.lr = 0x8223E69C;
	sub_8223D3B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8223e7b4
	if (ctx.cr0.lt) goto loc_8223E7B4;
loc_8223E6A4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8223e424
	if (ctx.cr6.lt) goto loc_8223E424;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x8223e6c4
	if (!ctx.cr6.eq) goto loc_8223E6C4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x8223e6c4
	if (!ctx.cr6.eq) goto loc_8223E6C4;
	// rlwinm r20,r20,0,28,26
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_8223E6C4:
	// lwz r25,324(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,400(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 400);
	// bl 0x822479b0
	ctx.lr = 0x8223E6D8;
	sub_822479B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8223e7b4
	if (!ctx.cr0.eq) goto loc_8223E7B4;
	// lwz r3,420(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 420);
	// lwz r26,340(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e718
	if (ctx.cr6.eq) goto loc_8223E718;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,348(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x8224a298
	ctx.lr = 0x8223E710;
	sub_8224A298(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8223e7b4
	if (ctx.cr0.lt) goto loc_8223E7B4;
loc_8223E718:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8223e7b4
	if (ctx.cr6.eq) goto loc_8223E7B4;
	// lwz r28,332(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
loc_8223E728:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223e750
	if (ctx.cr0.eq) goto loc_8223E750;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_8223E750:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223e764
	if (ctx.cr0.eq) goto loc_8223E764;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// ori r29,r10,2
	ctx.r29.u64 = ctx.r10.u64 | 2;
loc_8223E764:
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223e77c
	if (!ctx.cr6.eq) goto loc_8223E77C;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223e7a4
	if (ctx.cr0.eq) goto loc_8223E7A4;
loc_8223E77C:
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// beq 0x8223e7a4
	if (ctx.cr0.eq) goto loc_8223E7A4;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223E7A4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne 0x8223e728
	if (!ctx.cr0.eq) goto loc_8223E728;
loc_8223E7B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223E7C0"))) PPC_WEAK_FUNC(sub_8223E7C0);
PPC_FUNC_IMPL(__imp__sub_8223E7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8223E7C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223e7f0
	if (!ctx.cr6.eq) goto loc_8223E7F0;
	// lis r31,-32747
	ctx.r31.s64 = -2146107392;
	// ori r31,r31,20994
	ctx.r31.u64 = ctx.r31.u64 | 20994;
	// b 0x8223e840
	goto loc_8223E840;
loc_8223E7F0:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4103
	ctx.r11.u64 = ctx.r11.u64 | 4103;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223e80c
	if (!ctx.cr6.eq) goto loc_8223E80C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,1232
	ctx.r31.u64 = ctx.r31.u64 | 1232;
	// b 0x8223e840
	goto loc_8223E840;
loc_8223E80C:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4104
	ctx.r11.u64 = ctx.r11.u64 | 4104;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223e828
	if (!ctx.cr6.eq) goto loc_8223E828;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,4320
	ctx.r31.u64 = ctx.r31.u64 | 4320;
	// b 0x8223e840
	goto loc_8223E840;
loc_8223E828:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4119
	ctx.r11.u64 = ctx.r11.u64 | 4119;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223e840
	if (!ctx.cr6.eq) goto loc_8223E840;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,1617
	ctx.r31.u64 = ctx.r31.u64 | 1617;
loc_8223E840:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b560
	ctx.lr = 0x8223E84C;
	sub_8223B560(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223e884
	if (ctx.cr6.eq) goto loc_8223E884;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8223e884
	if (ctx.cr6.lt) goto loc_8223E884;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x8223e884
	if (!ctx.cr6.lt) goto loc_8223E884;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8223e88c
	goto loc_8223E88C;
loc_8223E884:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8223E88C:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x8223e8c4
	if (ctx.cr6.eq) goto loc_8223E8C4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223e8d0
	goto loc_8223E8D0;
loc_8223E8C4:
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r11.u32);
loc_8223E8D0:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r28,r30,248
	ctx.r28.s64 = ctx.r30.s64 + 248;
	// b 0x8223ea1c
	goto loc_8223EA1C;
loc_8223E8DC:
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// addi r31,r29,-92
	ctx.r31.s64 = ctx.r29.s64 + -92;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223e92c
	if (ctx.cr0.eq) goto loc_8223E92C;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223ea18
	if (ctx.cr0.eq) goto loc_8223EA18;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223ea18
	if (ctx.cr0.eq) goto loc_8223EA18;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8223ea18
	if (ctx.cr6.eq) goto loc_8223EA18;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// b 0x8223ea18
	goto loc_8223EA18;
loc_8223E92C:
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223e9b0
	if (ctx.cr0.eq) goto loc_8223E9B0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8223e960
	if (ctx.cr6.eq) goto loc_8223E960;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_8223E960:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// beq cr6,0x8223e9b0
	if (ctx.cr6.eq) goto loc_8223E9B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223E9B0:
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8223e9c8
	if (!ctx.cr6.eq) goto loc_8223E9C8;
	// bl 0x82249808
	ctx.lr = 0x8223E9C0;
	sub_82249808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r11.u32);
loc_8223E9C8:
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ea18
	if (ctx.cr6.eq) goto loc_8223EA18;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8223E9DC:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8223e9dc
	if (!ctx.cr6.eq) goto loc_8223E9DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224a298
	ctx.lr = 0x8223EA10;
	sub_8224A298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223ea44
	if (ctx.cr0.lt) goto loc_8223EA44;
loc_8223EA18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8223EA1C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8223ea30
	if (ctx.cr6.eq) goto loc_8223EA30;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x8223e8dc
	if (!ctx.cr0.eq) goto loc_8223E8DC;
loc_8223EA30:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223dfd8
	ctx.lr = 0x8223EA40;
	sub_8223DFD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223EA44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223EA4C"))) PPC_WEAK_FUNC(sub_8223EA4C);
PPC_FUNC_IMPL(__imp__sub_8223EA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223EA50"))) PPC_WEAK_FUNC(sub_8223EA50);
PPC_FUNC_IMPL(__imp__sub_8223EA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r6,396(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8223ea7c
	if (!ctx.cr6.eq) goto loc_8223EA7C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x8223eaec
	goto loc_8223EAEC;
loc_8223EA7C:
	// lwz r11,396(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223ea94
	if (ctx.cr0.eq) goto loc_8223EA94;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8223eacc
	goto loc_8223EACC;
loc_8223EA94:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,380
	ctx.r9.s64 = ctx.r3.s64 + 380;
loc_8223EAA0:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8223eac0
	if (!ctx.cr6.eq) goto loc_8223EAC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8223eaa0
	if (ctx.cr6.lt) goto loc_8223EAA0;
	// b 0x8223eacc
	goto loc_8223EACC;
loc_8223EAC0:
	// addi r11,r10,95
	ctx.r11.s64 = ctx.r10.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_8223EACC:
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r4,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r4.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8223d770
	ctx.lr = 0x8223EAEC;
	sub_8223D770(ctx, base);
loc_8223EAEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223EAFC"))) PPC_WEAK_FUNC(sub_8223EAFC);
PPC_FUNC_IMPL(__imp__sub_8223EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223EB00"))) PPC_WEAK_FUNC(sub_8223EB00);
PPC_FUNC_IMPL(__imp__sub_8223EB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8223EB08;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223eb28
	if (ctx.cr6.eq) goto loc_8223EB28;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x8223eb2c
	goto loc_8223EB2C;
loc_8223EB28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223EB2C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// xori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 ^ 1;
	// addi r31,r28,380
	ctx.r31.s64 = ctx.r28.s64 + 380;
loc_8223EB44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223eb80
	if (ctx.cr6.eq) goto loc_8223EB80;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223eb80
	if (!ctx.cr0.eq) goto loc_8223EB80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223e1f0
	ctx.lr = 0x8223EB6C;
	sub_8223E1F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwimi r10,r27,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// b 0x8223eb90
	goto loc_8223EB90;
loc_8223EB80:
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82218a80
	ctx.lr = 0x8223EB90;
	sub_82218A80(ctx, base);
loc_8223EB90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,42
	ctx.r29.s64 = ctx.r29.s64 + 42;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8223eb44
	if (ctx.cr6.lt) goto loc_8223EB44;
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ec24
	if (ctx.cr6.eq) goto loc_8223EC24;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223ebc4
	if (!ctx.cr6.eq) goto loc_8223EBC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223ebc8
	goto loc_8223EBC8;
loc_8223EBC4:
	// bl 0x82239370
	ctx.lr = 0x8223EBC8;
	sub_82239370(ctx, base);
loc_8223EBC8:
	// lwz r11,420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// rlwinm r10,r3,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// stb r10,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ebe4
	if (ctx.cr6.eq) goto loc_8223EBE4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8223ebe8
	goto loc_8223EBE8;
loc_8223EBE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223EBE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r11.u8);
	// beq cr6,0x8223ec08
	if (ctx.cr6.eq) goto loc_8223EC08;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r11.u8);
loc_8223EC08:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// li r5,169
	ctx.r5.s64 = 169;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82247970
	ctx.lr = 0x8223EC1C;
	sub_82247970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223ec28
	if (ctx.cr0.lt) goto loc_8223EC28;
loc_8223EC24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223EC28:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223EC30"))) PPC_WEAK_FUNC(sub_8223EC30);
PPC_FUNC_IMPL(__imp__sub_8223EC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8223EC38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,248
	ctx.r31.s64 = ctx.r29.s64 + 248;
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// b 0x8223ecac
	goto loc_8223ECAC;
loc_8223EC4C:
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r11,r30,-92
	ctx.r11.s64 = ctx.r30.s64 + -92;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223eca8
	if (!ctx.cr0.eq) goto loc_8223ECA8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223eca8
	if (!ctx.cr6.eq) goto loc_8223ECA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8223EC70:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223ec70
	if (!ctx.cr6.eq) goto loc_8223EC70;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223e280
	ctx.lr = 0x8223ECA0;
	sub_8223E280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223ecc4
	if (ctx.cr0.lt) goto loc_8223ECC4;
loc_8223ECA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8223ECAC:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8223ecc0
	if (ctx.cr6.eq) goto loc_8223ECC0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne 0x8223ec4c
	if (!ctx.cr0.eq) goto loc_8223EC4C;
loc_8223ECC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223ECC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223ECCC"))) PPC_WEAK_FUNC(sub_8223ECCC);
PPC_FUNC_IMPL(__imp__sub_8223ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223ECD0"))) PPC_WEAK_FUNC(sub_8223ECD0);
PPC_FUNC_IMPL(__imp__sub_8223ECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8223ECD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223ecfc
	if (!ctx.cr0.eq) goto loc_8223ECFC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8223ee88
	if (ctx.cr6.eq) goto loc_8223EE88;
loc_8223ECFC:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223ed18
	if (ctx.cr0.eq) goto loc_8223ED18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ea50
	ctx.lr = 0x8223ED18;
	sub_8223EA50(ctx, base);
loc_8223ED18:
	// li r11,31
	ctx.r11.s64 = 31;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82247988
	ctx.lr = 0x8223ED30;
	sub_82247988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223efa4
	if (ctx.cr0.lt) goto loc_8223EFA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ee54
	if (ctx.cr6.eq) goto loc_8223EE54;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
loc_8223ED4C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x822479a8
	ctx.lr = 0x8223ED5C;
	sub_822479A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ee40
	if (ctx.cr6.eq) goto loc_8223EE40;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_8223ED70:
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223edd8
	if (ctx.cr0.eq) goto loc_8223EDD8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223ED94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// beq cr6,0x8223edd8
	if (ctx.cr6.eq) goto loc_8223EDD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223EDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8223EDD8:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8223edfc
	if (!ctx.cr6.eq) goto loc_8223EDFC;
	// bl 0x82249808
	ctx.lr = 0x8223EDF4;
	sub_82249808(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r25.u32);
loc_8223EDFC:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8223ed70
	if (!ctx.cr6.eq) goto loc_8223ED70;
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ee40
	if (ctx.cr6.eq) goto loc_8223EE40;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224a298
	ctx.lr = 0x8223EE38;
	sub_8224A298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223efa4
	if (ctx.cr0.lt) goto loc_8223EFA4;
loc_8223EE40:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223ed4c
	if (ctx.cr6.lt) goto loc_8223ED4C;
loc_8223EE54:
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82247900
	ctx.lr = 0x8223EE6C;
	sub_82247900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223ee78
	if (!ctx.cr0.lt) goto loc_8223EE78;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8223EE78:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,22,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8223EE88:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8223efa0
	if (ctx.cr6.eq) goto loc_8223EFA0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223ef48
	if (ctx.cr0.eq) goto loc_8223EF48;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223ef48
	if (ctx.cr6.eq) goto loc_8223EF48;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223ef48
	if (ctx.cr0.eq) goto loc_8223EF48;
loc_8223EEC0:
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// beq cr6,0x8223eedc
	if (ctx.cr6.eq) goto loc_8223EEDC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8223EEDC:
	// lwz r11,396(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223ef40
	if (!ctx.cr0.eq) goto loc_8223EF40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cf00
	ctx.lr = 0x8223EEF4;
	sub_8223CF00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82248e90
	ctx.lr = 0x8223EEFC;
	sub_82248E90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stw r25,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r25.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82247f48
	ctx.lr = 0x8223EF10;
	sub_82247F48(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223ef30
	if (ctx.cr0.eq) goto loc_8223EF30;
	// lbz r11,171(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r11.u8);
	// b 0x8223ef3c
	goto loc_8223EF3C;
loc_8223EF30:
	// lbz r11,170(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r11.u8);
loc_8223EF3C:
	// bl 0x82249808
	ctx.lr = 0x8223EF40;
	sub_82249808(ctx, base);
loc_8223EF40:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8223eec0
	if (!ctx.cr6.eq) goto loc_8223EEC0;
loc_8223EF48:
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82247940
	ctx.lr = 0x8223EF50;
	sub_82247940(ctx, base);
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// stw r25,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r25.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r10,r10,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r25,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r25.u32);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
loc_8223EF6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223ef94
	if (ctx.cr6.eq) goto loc_8223EF94;
	// lwz r8,396(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r8,r8,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,396(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r8,r8,0,20,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r8,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r8.u32);
loc_8223EF94:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8223ef6c
	if (!ctx.cr0.eq) goto loc_8223EF6C;
loc_8223EFA0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8223EFA4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223EFAC"))) PPC_WEAK_FUNC(sub_8223EFAC);
PPC_FUNC_IMPL(__imp__sub_8223EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223EFB0"))) PPC_WEAK_FUNC(sub_8223EFB0);
PPC_FUNC_IMPL(__imp__sub_8223EFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8223EFB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223EFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r3,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r3.u8);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// beq 0x8223f03c
	if (ctx.cr0.eq) goto loc_8223F03C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8223f014
	goto loc_8223F014;
loc_8223F00C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8223F014:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223f00c
	if (!ctx.cr0.eq) goto loc_8223F00C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8223F020:
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223f050
	if (ctx.cr0.eq) goto loc_8223F050;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223f020
	if (!ctx.cr6.eq) goto loc_8223F020;
loc_8223F038:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8223F03C:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// bne cr6,0x8223f060
	if (!ctx.cr6.eq) goto loc_8223F060;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8223f07c
	goto loc_8223F07C;
loc_8223F050:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f038
	if (ctx.cr6.eq) goto loc_8223F038;
	// ld r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// b 0x8223f03c
	goto loc_8223F03C;
loc_8223F060:
	// li r11,9
	ctx.r11.s64 = 9;
	// rldicr r10,r27,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 0) & 0xFFFF000000000000;
	// rldicr r11,r11,48,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFF000000000000;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8223f07c
	if (ctx.cr6.eq) goto loc_8223F07C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8223F07C:
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8223F084:
	// addi r11,r30,95
	ctx.r11.s64 = ctx.r30.s64 + 95;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f1e4
	if (ctx.cr6.eq) goto loc_8223F1E4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8223f1e4
	if (ctx.cr6.eq) goto loc_8223F1E4;
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x8223f150
	if (ctx.cr6.eq) goto loc_8223F150;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223f100
	if (ctx.cr0.eq) goto loc_8223F100;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x8223f0c4
	goto loc_8223F0C4;
loc_8223F0BC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
loc_8223F0C4:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8223f0bc
	if (!ctx.cr0.eq) goto loc_8223F0BC;
loc_8223F0CC:
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223f0f0
	if (ctx.cr0.eq) goto loc_8223F0F0;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223f0cc
	if (!ctx.cr6.eq) goto loc_8223F0CC;
loc_8223F0E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1307
	ctx.r3.u64 = ctx.r3.u64 | 1307;
	// b 0x8223f2e0
	goto loc_8223F2E0;
loc_8223F0F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f0e4
	if (ctx.cr6.eq) goto loc_8223F0E4;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8223f104
	goto loc_8223F104;
loc_8223F100:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8223F104:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825e60c0
	ctx.lr = 0x8223F110;
	sub_825E60C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223f14c
	if (ctx.cr0.eq) goto loc_8223F14C;
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x8223f278
	if (!ctx.cr6.eq) goto loc_8223F278;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223f140
	if (ctx.cr6.eq) goto loc_8223F140;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8223f140
	if (ctx.cr6.eq) goto loc_8223F140;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x8223f158
	goto loc_8223F158;
loc_8223F140:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x8223f150
	goto loc_8223F150;
loc_8223F14C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8223F150:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223f16c
	if (ctx.cr6.eq) goto loc_8223F16C;
loc_8223F158:
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// slw r9,r28,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// b 0x8223f170
	goto loc_8223F170;
loc_8223F16C:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8223F170:
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// bne cr6,0x8223f180
	if (!ctx.cr6.eq) goto loc_8223F180;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8223f188
	goto loc_8223F188;
loc_8223F180:
	// slw r11,r28,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8223F188:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8223f208
	if (ctx.cr6.eq) goto loc_8223F208;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r9,r9,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223f1c4
	if (!ctx.cr0.eq) goto loc_8223F1C4;
	// lwzx r24,r29,r25
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
loc_8223F1C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r9,r28,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r30.u8 & 0x3F));
	// beq cr6,0x8223f1d8
	if (ctx.cr6.eq) goto loc_8223F1D8;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x8223f1dc
	goto loc_8223F1DC;
loc_8223F1D8:
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
loc_8223F1DC:
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
	// b 0x8223f208
	goto loc_8223F208;
loc_8223F1E4:
	// lbz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// slw r9,r28,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r30.u8 & 0x3F));
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
	// lwzx r11,r29,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 | ctx.r26.u64;
loc_8223F208:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8223f084
	if (ctx.cr6.lt) goto loc_8223F084;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,17,14,14
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x20000) | (ctx.r10.u64 & 0xFFFFFFFFFFFDFFFF);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// beq cr6,0x8223f2dc
	if (ctx.cr6.eq) goto loc_8223F2DC;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r11,143
	ctx.r11.s64 = 143;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8223d770
	ctx.lr = 0x8223F264;
	sub_8223D770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223f2e0
	if (ctx.cr0.lt) goto loc_8223F2E0;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8223f294
	goto loc_8223F294;
loc_8223F278:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8223f2e0
	if (!ctx.cr6.gt) goto loc_8223F2E0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8223f2e0
	goto loc_8223F2E0;
loc_8223F28C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
loc_8223F294:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8223f28c
	if (!ctx.cr0.eq) goto loc_8223F28C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8223F2A4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223f2a4
	if (!ctx.cr6.eq) goto loc_8223F2A4;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8223e280
	ctx.lr = 0x8223F2D4;
	sub_8223E280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223f2e0
	if (ctx.cr0.lt) goto loc_8223F2E0;
loc_8223F2DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223F2E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F2E8"))) PPC_WEAK_FUNC(sub_8223F2E8);
PPC_FUNC_IMPL(__imp__sub_8223F2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8223F2F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r29,248
	ctx.r30.s64 = ctx.r29.s64 + 248;
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8223f344
	if (ctx.cr6.eq) goto loc_8223F344;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223f344
	if (ctx.cr0.eq) goto loc_8223F344;
loc_8223F318:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223efb0
	ctx.lr = 0x8223F328;
	sub_8223EFB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223f348
	if (ctx.cr0.lt) goto loc_8223F348;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8223f344
	if (ctx.cr6.eq) goto loc_8223F344;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8223f318
	if (!ctx.cr0.eq) goto loc_8223F318;
loc_8223F344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223F348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F350"))) PPC_WEAK_FUNC(sub_8223F350);
PPC_FUNC_IMPL(__imp__sub_8223F350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8223F358;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f394
	if (ctx.cr0.eq) goto loc_8223F394;
	// lwz r3,424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f394
	if (ctx.cr6.eq) goto loc_8223F394;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8223f398
	goto loc_8223F398;
loc_8223F394:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_8223F398:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r28,380
	ctx.r29.s64 = ctx.r28.s64 + 380;
loc_8223F3A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f53c
	if (ctx.cr6.eq) goto loc_8223F53C;
	// lwz r3,424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// addi r27,r28,424
	ctx.r27.s64 = ctx.r28.s64 + 424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f3d4
	if (ctx.cr6.eq) goto loc_8223F3D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223f3d8
	goto loc_8223F3D8;
loc_8223F3D4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8223F3D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223f40c
	if (ctx.cr6.eq) goto loc_8223F40C;
	// bne 0x8223f460
	if (!ctx.cr0.eq) goto loc_8223F460;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// b 0x8223f428
	goto loc_8223F428;
loc_8223F40C:
	// beq 0x8223f460
	if (ctx.cr0.eq) goto loc_8223F460;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
loc_8223F428:
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223eb00
	ctx.lr = 0x8223F434;
	sub_8223EB00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223f460
	if (ctx.cr0.lt) goto loc_8223F460;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,396(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f460
	if (ctx.cr0.eq) goto loc_8223F460;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223F460:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r31,r11,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f53c
	if (ctx.cr0.eq) goto loc_8223F53C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f4a8
	if (ctx.cr6.eq) goto loc_8223F4A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,161
	ctx.r5.s64 = ctx.r1.s64 + 161;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223f4ac
	goto loc_8223F4AC;
loc_8223F4A8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8223F4AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223f53c
	if (ctx.cr6.lt) goto loc_8223F53C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// oris r11,r11,65016
	ctx.r11.u64 = ctx.r11.u64 | 4260888576;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stb r10,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r10.u8);
	// li r8,500
	ctx.r8.s64 = 500;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82247910
	ctx.lr = 0x8223F53C;
	sub_82247910(ctx, base);
loc_8223F53C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8223f3a0
	if (ctx.cr6.lt) goto loc_8223F3A0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F554"))) PPC_WEAK_FUNC(sub_8223F554);
PPC_FUNC_IMPL(__imp__sub_8223F554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F558"))) PPC_WEAK_FUNC(sub_8223F558);
PPC_FUNC_IMPL(__imp__sub_8223F558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8223F560;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f594
	if (ctx.cr6.eq) goto loc_8223F594;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,183
	ctx.r31.u64 = ctx.r31.u64 | 183;
	// b 0x8223f608
	goto loc_8223F608;
loc_8223F594:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224a918
	ctx.lr = 0x8223F59C;
	sub_8224A918(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8223f5b0
	if (!ctx.cr0.eq) goto loc_8223F5B0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8223f5f0
	goto loc_8223F5F0;
loc_8223F5B0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82249fd0
	ctx.lr = 0x8223F5C8;
	sub_82249FD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8223f5f0
	if (ctx.cr0.lt) goto loc_8223F5F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223eb00
	ctx.lr = 0x8223F5D8;
	sub_8223EB00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8223f5f0
	if (ctx.cr0.lt) goto loc_8223F5F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223ec30
	ctx.lr = 0x8223F5E8;
	sub_8223EC30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8223f604
	if (!ctx.cr0.lt) goto loc_8223F604;
loc_8223F5F0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8223f608
	if (ctx.cr6.eq) goto loc_8223F608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8224a970
	ctx.lr = 0x8223F600;
	sub_8224A970(ctx, base);
	// b 0x8223f608
	goto loc_8223F608;
loc_8223F604:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
loc_8223F608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F614"))) PPC_WEAK_FUNC(sub_8223F614);
PPC_FUNC_IMPL(__imp__sub_8223F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F618"))) PPC_WEAK_FUNC(sub_8223F618);
PPC_FUNC_IMPL(__imp__sub_8223F618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8223F620;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8223f64c
	if (ctx.cr6.eq) goto loc_8223F64C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8223f64c
	if (ctx.cr6.eq) goto loc_8223F64C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x8223f6c0
	goto loc_8223F6C0;
loc_8223F64C:
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// xori r30,r10,1
	ctx.r30.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8223f6bc
	if (ctx.cr6.eq) goto loc_8223F6BC;
	// rlwimi r11,r30,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// bl 0x8223eb00
	ctx.lr = 0x8223F678;
	sub_8223EB00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223f698
	if (!ctx.cr0.lt) goto loc_8223F698;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,14,17,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x4000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// b 0x8223f6c0
	goto loc_8223F6C0;
loc_8223F698:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223f6c0
	goto loc_8223F6C0;
loc_8223F6BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223F6C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F6C8"))) PPC_WEAK_FUNC(sub_8223F6C8);
PPC_FUNC_IMPL(__imp__sub_8223F6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8223F6D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8223f6f0
	if (!ctx.cr6.eq) goto loc_8223F6F0;
	// bl 0x8222e968
	ctx.lr = 0x8223F6F0;
	sub_8222E968(ctx, base);
loc_8223F6F0:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// beq 0x8223f728
	if (ctx.cr0.eq) goto loc_8223F728;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82238488
	ctx.lr = 0x8223F71C;
	sub_82238488(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8223F728:
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f73c
	if (ctx.cr6.eq) goto loc_8223F73C;
	// bl 0x8224b028
	ctx.lr = 0x8223F738;
	sub_8224B028(ctx, base);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
loc_8223F73C:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r29,r31,524
	ctx.r29.s64 = ctx.r31.s64 + 524;
loc_8223F744:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223f788
	if (ctx.cr6.eq) goto loc_8223F788;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// bl 0x82249840
	ctx.lr = 0x8223F778;
	sub_82249840(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82249a80
	ctx.lr = 0x8223F780;
	sub_82249A80(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8223f744
	goto loc_8223F744;
loc_8223F788:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f7e0
	if (ctx.cr6.eq) goto loc_8223F7E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8223ecd0
	ctx.lr = 0x8223F7B0;
	sub_8223ECD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223f7e0
	if (!ctx.cr0.lt) goto loc_8223F7E0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f7e0
	if (ctx.cr6.eq) goto loc_8223F7E0;
	// bl 0x82247940
	ctx.lr = 0x8223F7C8;
	sub_82247940(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// rlwinm r11,r11,0,10,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8223F7E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223dfd8
	ctx.lr = 0x8223F7F0;
	sub_8223DFD8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f880
	if (ctx.cr6.eq) goto loc_8223F880;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223f810
	if (!ctx.cr0.eq) goto loc_8223F810;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e5830
	ctx.lr = 0x8223F810;
	sub_825E5830(ctx, base);
loc_8223F810:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x823c5b68
	ctx.lr = 0x8223F818;
	sub_823C5B68(ctx, base);
	// lis r12,-16649
	ctx.r12.s64 = -1091108864;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// ori r12,r12,63551
	ctx.r12.u64 = ctx.r12.u64 | 63551;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82218a80
	ctx.lr = 0x8223F844;
	sub_82218A80(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82218a80
	ctx.lr = 0x8223F854;
	sub_82218A80(ctx, base);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223f874
	if (ctx.cr6.eq) goto loc_8223F874;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x8223F870;
	sub_82247A78(ctx, base);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
loc_8223F874:
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// b 0x8223f898
	goto loc_8223F898;
loc_8223F880:
	// lis r12,-16641
	ctx.r12.s64 = -1090584576;
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// ori r12,r12,64511
	ctx.r12.u64 = ctx.r12.u64 | 64511;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8223F898:
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r29,r31,412
	ctx.r29.s64 = ctx.r31.s64 + 412;
	// b 0x8223f8b4
	goto loc_8223F8B4;
loc_8223F8A4:
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82248540
	ctx.lr = 0x8223F8B0;
	sub_82248540(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8223F8B4:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223f8c4
	if (ctx.cr6.eq) goto loc_8223F8C4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223f8a4
	if (!ctx.cr0.eq) goto loc_8223F8A4;
loc_8223F8C4:
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x82246750
	ctx.lr = 0x8223F8CC;
	sub_82246750(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x82246bf8
	ctx.lr = 0x8223F8D4;
	sub_82246BF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b730
	ctx.lr = 0x8223F8E4;
	sub_8223B730(ctx, base);
	// lis r12,-53
	ctx.r12.s64 = -3473408;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// ori r12,r12,65503
	ctx.r12.u64 = ctx.r12.u64 | 65503;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// std r30,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r30.u64);
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// std r30,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r30.u64);
	// std r30,600(r31)
	PPC_STORE_U64(ctx.r31.u32 + 600, ctx.r30.u64);
	// std r30,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r30.u64);
	// std r30,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r30.u64);
	// std r30,624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 624, ctx.r30.u64);
	// std r30,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r30.u64);
	// std r30,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r30.u64);
	// std r30,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r30.u64);
	// std r30,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r30.u64);
	// std r30,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r30.u64);
	// std r30,672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 672, ctx.r30.u64);
	// std r30,680(r31)
	PPC_STORE_U64(ctx.r31.u32 + 680, ctx.r30.u64);
	// std r30,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.r30.u64);
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8223f988
	if (ctx.cr6.eq) goto loc_8223F988;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223F988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223F990"))) PPC_WEAK_FUNC(sub_8223F990);
PPC_FUNC_IMPL(__imp__sub_8223F990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8223F998;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f9d0
	if (ctx.cr6.eq) goto loc_8223F9D0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r19,r11,2,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x8223f9d4
	goto loc_8223F9D4;
loc_8223F9D0:
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
loc_8223F9D4:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r27,r30,380
	ctx.r27.s64 = ctx.r30.s64 + 380;
loc_8223F9E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fbac
	if (ctx.cr0.eq) goto loc_8223FBAC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222edf0
	ctx.lr = 0x8223FA00;
	sub_8222EDF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223fc84
	if (!ctx.cr0.eq) goto loc_8223FC84;
	// subf r11,r29,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r29.s64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// ld r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82249740
	ctx.lr = 0x8223FA3C;
	sub_82249740(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223fca0
	if (ctx.cr0.eq) goto loc_8223FCA0;
	// add r28,r29,r30
	ctx.r28.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 720);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223fa98
	if (!ctx.cr0.eq) goto loc_8223FA98;
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fa80
	if (ctx.cr6.eq) goto loc_8223FA80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223fa84
	goto loc_8223FA84;
loc_8223FA80:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8223FA84:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8223fcac
	if (ctx.cr6.lt) goto loc_8223FCAC;
	// lbz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 720);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,720(r28)
	PPC_STORE_U8(ctx.r28.u32 + 720, ctx.r11.u8);
loc_8223FA98:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8223fab0
	if (ctx.cr6.eq) goto loc_8223FAB0;
	// lbz r11,171(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 171);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,171(r30)
	PPC_STORE_U8(ctx.r30.u32 + 171, ctx.r11.u8);
	// b 0x8223fabc
	goto loc_8223FABC;
loc_8223FAB0:
	// lbz r11,170(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,170(r30)
	PPC_STORE_U8(ctx.r30.u32 + 170, ctx.r11.u8);
loc_8223FABC:
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fae0
	if (ctx.cr6.eq) goto loc_8223FAE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223fae4
	goto loc_8223FAE4;
loc_8223FAE0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8223FAE4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223fb0c
	if (ctx.cr6.eq) goto loc_8223FB0C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
loc_8223FB0C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8223fb24
	if (ctx.cr6.eq) goto loc_8223FB24;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
loc_8223FB24:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8223fb3c
	if (!ctx.cr6.eq) goto loc_8223FB3C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82248e58
	ctx.lr = 0x8223FB34;
	sub_82248E58(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r11.u32);
loc_8223FB3C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8223fb80
	if (ctx.cr6.eq) goto loc_8223FB80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82248e80
	ctx.lr = 0x8223FB50;
	sub_82248E80(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r10,376(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r10.u32);
	// lwz r10,380(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// stw r10,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r10.u32);
	// lwz r10,384(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 384);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// lwz r10,388(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 388);
	// stw r10,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r10.u32);
loc_8223FB80:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8223ce50
	ctx.lr = 0x8223FB90;
	sub_8223CE50(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223efb0
	ctx.lr = 0x8223FBA0;
	sub_8223EFB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8223fc78
	if (ctx.cr0.lt) goto loc_8223FC78;
	// b 0x8223fc60
	goto loc_8223FC60;
loc_8223FBAC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223fc60
	if (!ctx.cr6.eq) goto loc_8223FC60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eb60
	ctx.lr = 0x8223FBC0;
	sub_8222EB60(ctx, base);
	// add r28,r29,r30
	ctx.r28.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lbz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 720);
	// beq 0x8223fc20
	if (ctx.cr0.eq) goto loc_8223FC20;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223fc60
	if (!ctx.cr0.eq) goto loc_8223FC60;
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fc04
	if (ctx.cr6.eq) goto loc_8223FC04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223fc08
	goto loc_8223FC08;
loc_8223FC04:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8223FC08:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8223fc78
	if (ctx.cr6.lt) goto loc_8223FC78;
	// lbz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 720);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,720(r28)
	PPC_STORE_U8(ctx.r28.u32 + 720, ctx.r11.u8);
	// b 0x8223fc60
	goto loc_8223FC60;
loc_8223FC20:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fc60
	if (ctx.cr0.eq) goto loc_8223FC60;
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fc50
	if (ctx.cr6.eq) goto loc_8223FC50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223fc54
	goto loc_8223FC54;
loc_8223FC50:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8223FC54:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8223fc78
	if (ctx.cr6.lt) goto loc_8223FC78;
	// stb r22,720(r28)
	PPC_STORE_U8(ctx.r28.u32 + 720, ctx.r22.u8);
loc_8223FC60:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8223f9e0
	if (ctx.cr6.lt) goto loc_8223F9E0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8223FC78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
loc_8223FC84:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8223fc94
	if (ctx.cr6.gt) goto loc_8223FC94;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223fc78
	goto loc_8223FC78;
loc_8223FC94:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8223fc78
	goto loc_8223FC78;
loc_8223FCA0:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8223fc78
	goto loc_8223FC78;
loc_8223FCAC:
	// addi r11,r29,95
	ctx.r11.s64 = ctx.r29.s64 + 95;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82249808
	ctx.lr = 0x8223FCBC;
	sub_82249808(ctx, base);
	// stwx r22,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r22.u32);
	// b 0x8223fc78
	goto loc_8223FC78;
}

__attribute__((alias("__imp__sub_8223FCC4"))) PPC_WEAK_FUNC(sub_8223FCC4);
PPC_FUNC_IMPL(__imp__sub_8223FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FCC8"))) PPC_WEAK_FUNC(sub_8223FCC8);
PPC_FUNC_IMPL(__imp__sub_8223FCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8223FCD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r28,248
	ctx.r29.s64 = ctx.r28.s64 + 248;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// b 0x8223fd50
	goto loc_8223FD50;
loc_8223FCE4:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r31,r30,-92
	ctx.r31.s64 = ctx.r30.s64 + -92;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223fd08
	if (ctx.cr0.eq) goto loc_8223FD08;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223f618
	ctx.lr = 0x8223FD04;
	sub_8223F618(ctx, base);
	// b 0x8223fd3c
	goto loc_8223FD3C;
loc_8223FD08:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223fd3c
	if (ctx.cr0.eq) goto loc_8223FD3C;
	// rlwinm r10,r11,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// beq 0x8223fd3c
	if (ctx.cr0.eq) goto loc_8223FD3C;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223FD3C:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8223FD50:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8223fd64
	if (ctx.cr6.eq) goto loc_8223FD64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne 0x8223fce4
	if (!ctx.cr0.eq) goto loc_8223FCE4;
loc_8223FD64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223FD6C"))) PPC_WEAK_FUNC(sub_8223FD6C);
PPC_FUNC_IMPL(__imp__sub_8223FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FD70"))) PPC_WEAK_FUNC(sub_8223FD70);
PPC_FUNC_IMPL(__imp__sub_8223FD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8223FD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8223fd94
	if (!ctx.cr6.lt) goto loc_8223FD94;
	// bl 0x8223f6c8
	ctx.lr = 0x8223FD90;
	sub_8223F6C8(ctx, base);
	// b 0x8223feb8
	goto loc_8223FEB8;
loc_8223FD94:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8223dfd8
	ctx.lr = 0x8223FDA0;
	sub_8223DFD8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fde4
	if (ctx.cr6.eq) goto loc_8223FDE4;
	// bl 0x823c5b68
	ctx.lr = 0x8223FDB4;
	sub_823C5B68(ctx, base);
	// lis r12,-16393
	ctx.r12.s64 = -1074331648;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r5,60
	ctx.r5.s64 = 60;
	// ori r12,r12,64511
	ctx.r12.u64 = ctx.r12.u64 | 64511;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82218a80
	ctx.lr = 0x8223FDE0;
	sub_82218A80(ctx, base);
	// b 0x8223fdf4
	goto loc_8223FDF4;
loc_8223FDE4:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8223FDF4:
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// bl 0x82246bf8
	ctx.lr = 0x8223FE04;
	sub_82246BF8(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x82246750
	ctx.lr = 0x8223FE0C;
	sub_82246750(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// rlwinm r11,r11,0,12,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// std r30,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r30.u64);
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// std r30,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r30.u64);
	// std r30,600(r31)
	PPC_STORE_U64(ctx.r31.u32 + 600, ctx.r30.u64);
	// std r30,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r30.u64);
	// std r30,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r30.u64);
	// std r30,624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 624, ctx.r30.u64);
	// std r30,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r30.u64);
	// std r30,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r30.u64);
	// std r30,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r30.u64);
	// std r30,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r30.u64);
	// std r30,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r30.u64);
	// std r30,672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 672, ctx.r30.u64);
	// std r30,680(r31)
	PPC_STORE_U64(ctx.r31.u32 + 680, ctx.r30.u64);
	// std r30,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.r30.u64);
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8223fe94
	if (ctx.cr6.eq) goto loc_8223FE94;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8223fe94
	if (ctx.cr6.eq) goto loc_8223FE94;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8223FE94:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223FEB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223FEC0"))) PPC_WEAK_FUNC(sub_8223FEC0);
PPC_FUNC_IMPL(__imp__sub_8223FEC0) {
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
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223feec
	if (!ctx.cr0.eq) goto loc_8223FEEC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x8223ff38
	goto loc_8223FF38;
loc_8223FEEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8223ff04
	if (ctx.cr6.eq) goto loc_8223FF04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x8223ff38
	goto loc_8223FF38;
loc_8223FF04:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223ff2c
	if (ctx.cr6.eq) goto loc_8223FF2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ea50
	ctx.lr = 0x8223FF24;
	sub_8223EA50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223ff38
	if (ctx.cr0.lt) goto loc_8223FF38;
loc_8223FF2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fcc8
	ctx.lr = 0x8223FF34;
	sub_8223FCC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223FF38:
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

__attribute__((alias("__imp__sub_8223FF4C"))) PPC_WEAK_FUNC(sub_8223FF4C);
PPC_FUNC_IMPL(__imp__sub_8223FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FF50"))) PPC_WEAK_FUNC(sub_8223FF50);
PPC_FUNC_IMPL(__imp__sub_8223FF50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27912
	ctx.r11.s64 = ctx.r11.s64 + -27912;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ff8c
	if (ctx.cr6.eq) goto loc_8223FF8C;
	// bl 0x823c5b68
	ctx.lr = 0x8223FF88;
	sub_823C5B68(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8223FF8C:
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1235
	ctx.r4.u64 = ctx.r4.u64 | 1235;
	// bl 0x8223f6c8
	ctx.lr = 0x8223FF9C;
	sub_8223F6C8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8224b2a0
	ctx.lr = 0x8223FFA4;
	sub_8224B2A0(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r10,-664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -664);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8223ffbc
	if (!ctx.cr6.eq) goto loc_8223FFBC;
	// stw r30,-664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -664, ctx.r30.u32);
loc_8223FFBC:
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82247aa0
	ctx.lr = 0x8223FFC4;
	sub_82247AA0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82492d68
	ctx.lr = 0x8223FFCC;
	sub_82492D68(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x82246a08
	ctx.lr = 0x8223FFD4;
	sub_82246A08(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x82247378
	ctx.lr = 0x8223FFDC;
	sub_82247378(ctx, base);
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

__attribute__((alias("__imp__sub_8223FFF4"))) PPC_WEAK_FUNC(sub_8223FFF4);
PPC_FUNC_IMPL(__imp__sub_8223FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FFF8"))) PPC_WEAK_FUNC(sub_8223FFF8);
PPC_FUNC_IMPL(__imp__sub_8223FFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82240000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240038
	if (ctx.cr6.eq) goto loc_82240038;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,-656
	ctx.r10.s64 = ctx.r10.s64 + -656;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82240030
	if (ctx.cr6.eq) goto loc_82240030;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82240030:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82240150
	goto loc_82240150;
loc_82240038:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240140
	if (ctx.cr6.eq) goto loc_82240140;
	// lwz r9,724(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r31,380
	ctx.r10.s64 = ctx.r31.s64 + 380;
	// rlwinm r4,r9,21,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
loc_82240058:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82240078
	if (!ctx.cr6.eq) goto loc_82240078;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82240058
	if (ctx.cr6.lt) goto loc_82240058;
	// b 0x82240090
	goto loc_82240090;
loc_82240078:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,4,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_82240090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b228
	ctx.lr = 0x82240098;
	sub_8223B228(ctx, base);
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// lbz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822400cc
	if (!ctx.cr6.eq) goto loc_822400CC;
	// lbz r10,173(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// lbz r9,169(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822400cc
	if (!ctx.cr6.eq) goto loc_822400CC;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82240140
	if (ctx.cr6.eq) goto loc_82240140;
loc_822400CC:
	// lbz r10,169(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// stw r4,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stb r10,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r10.u8);
	// std r29,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r29.u64);
	// std r29,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r29.u64);
	// std r29,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r29.u64);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// lbz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5778
	ctx.lr = 0x82240104;
	sub_825E5778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240130
	if (ctx.cr0.eq) goto loc_82240130;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82240130
	if (ctx.cr6.eq) goto loc_82240130;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x8224011C;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82240150
	if (ctx.cr0.lt) goto loc_82240150;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82240150
	goto loc_82240150;
loc_82240130:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,14560
	ctx.r11.s64 = ctx.r11.s64 + 14560;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x8224014c
	goto loc_8224014C;
loc_82240140:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822438e0
	ctx.lr = 0x8224014C;
	sub_822438E0(ctx, base);
loc_8224014C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82240150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240158"))) PPC_WEAK_FUNC(sub_82240158);
PPC_FUNC_IMPL(__imp__sub_82240158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82240160;
	__savegprlr_22(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,4
	ctx.r22.s64 = 4;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bge cr6,0x82240190
	if (!ctx.cr6.lt) goto loc_82240190;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x82240530
	goto loc_82240530;
loc_82240190:
	// addi r25,r31,380
	ctx.r25.s64 = ctx.r31.s64 + 380;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_822401A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822401ec
	if (ctx.cr6.eq) goto loc_822401EC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e1f0
	ctx.lr = 0x822401C4;
	sub_8223E1F0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stwx r30,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x822401fc
	goto loc_822401FC;
loc_822401EC:
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82218a80
	ctx.lr = 0x822401FC;
	sub_82218A80(ctx, base);
loc_822401FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,42
	ctx.r27.s64 = ctx.r27.s64 + 42;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x822401a8
	if (ctx.cr6.lt) goto loc_822401A8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240260
	if (ctx.cr6.eq) goto loc_82240260;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825e58e0
	ctx.lr = 0x82240230;
	sub_825E58E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240254
	if (ctx.cr0.eq) goto loc_82240254;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82240240;
	sub_8222E990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240530
	if (ctx.cr0.lt) goto loc_82240530;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82240530
	goto loc_82240530;
loc_82240254:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82240260:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240454
	if (ctx.cr6.eq) goto loc_82240454;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8224027c
	if (!ctx.cr6.eq) goto loc_8224027C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82240280
	goto loc_82240280;
loc_8224027C:
	// bl 0x82239370
	ctx.lr = 0x82240280;
	sub_82239370(ctx, base);
loc_82240280:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r9,r3,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// stb r9,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224029c
	if (ctx.cr6.eq) goto loc_8224029C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822402a0
	goto loc_822402A0;
loc_8224029C:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_822402A0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r10.u8);
	// beq cr6,0x822402c4
	if (ctx.cr6.eq) goto loc_822402C4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x822402c8
	goto loc_822402C8;
loc_822402C4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_822402C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822402d8
	if (ctx.cr6.eq) goto loc_822402D8;
	// ori r11,r10,16
	ctx.r11.u64 = ctx.r10.u64 | 16;
	// stb r11,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r11.u8);
loc_822402D8:
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d538
	ctx.lr = 0x82240308;
	sub_8223D538(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240518
	if (ctx.cr0.lt) goto loc_82240518;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b368
	ctx.lr = 0x8224031C;
	sub_8223B368(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// addi r29,r31,400
	ctx.r29.s64 = ctx.r31.s64 + 400;
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r24,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r24.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,169
	ctx.r5.s64 = 169;
	// sth r22,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bl 0x82247868
	ctx.lr = 0x82240368;
	sub_82247868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b460
	ctx.lr = 0x82240378;
	sub_8223B460(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8224051c
	if (ctx.cr6.lt) goto loc_8224051C;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r31,548
	ctx.r7.s64 = ctx.r31.s64 + 548;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8224039C;
	sub_822479F0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822403dc
	if (!ctx.cr6.eq) goto loc_822403DC;
	// addi r29,r31,408
	ctx.r29.s64 = ctx.r31.s64 + 408;
	// li r6,1199
	ctx.r6.s64 = 1199;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,1001
	ctx.r5.s64 = 1001;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8224b0c8
	ctx.lr = 0x822403C4;
	sub_8224B0C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8224051c
	if (ctx.cr0.lt) goto loc_8224051C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8224ab70
	ctx.lr = 0x822403DC;
	sub_8224AB70(ctx, base);
loc_822403DC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x822403E8;
	sub_82247A78(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,520(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// bl 0x82238488
	ctx.lr = 0x82240400;
	sub_82238488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82240424
	if (ctx.cr0.eq) goto loc_82240424;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82240418
	if (ctx.cr6.gt) goto loc_82240418;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82240530
	goto loc_82240530;
loc_82240418:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	ctx.r30.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82240530
	goto loc_82240530;
loc_82240424:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// beq 0x82240510
	if (ctx.cr0.eq) goto loc_82240510;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82240448;
	sub_8223FFF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240530
	if (ctx.cr0.lt) goto loc_82240530;
	// b 0x82240510
	goto loc_82240510;
loc_82240454:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82240478
	if (ctx.cr0.eq) goto loc_82240478;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82240470;
	sub_8223FFF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8224051c
	if (ctx.cr0.lt) goto loc_8224051C;
loc_82240478:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822404A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_822404AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240504
	if (ctx.cr6.eq) goto loc_82240504;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82238518
	ctx.lr = 0x822404C0;
	sub_82238518(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82247e90
	ctx.lr = 0x822404D0;
	sub_82247E90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240504:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822404ac
	if (!ctx.cr0.eq) goto loc_822404AC;
loc_82240510:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_82240518:
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8224051C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82240530
	if (ctx.cr6.eq) goto loc_82240530;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x82240530;
	sub_82247A78(ctx, base);
loc_82240530:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x8224053C;
	sub_8223F6C8(ctx, base);
	// b 0x82240510
	goto loc_82240510;
}

__attribute__((alias("__imp__sub_82240540"))) PPC_WEAK_FUNC(sub_82240540);
PPC_FUNC_IMPL(__imp__sub_82240540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82240548;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82240560
	if (!ctx.cr6.lt) goto loc_82240560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x82240794
	goto loc_82240794;
loc_82240560:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82240578
	if (!ctx.cr6.eq) goto loc_82240578;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,1235
	ctx.r30.u64 = ctx.r30.u64 | 1235;
	// b 0x82240794
	goto loc_82240794;
loc_82240578:
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r31,380
	ctx.r28.s64 = ctx.r31.s64 + 380;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82240590:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822405d4
	if (ctx.cr6.eq) goto loc_822405D4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e1f0
	ctx.lr = 0x822405AC;
	sub_8223E1F0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stwx r30,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x822405e4
	goto loc_822405E4;
loc_822405D4:
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82218a80
	ctx.lr = 0x822405E4;
	sub_82218A80(ctx, base);
loc_822405E4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,42
	ctx.r27.s64 = ctx.r27.s64 + 42;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82240590
	if (ctx.cr6.lt) goto loc_82240590;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8224060c
	if (!ctx.cr6.eq) goto loc_8224060C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82240610
	goto loc_82240610;
loc_8224060C:
	// bl 0x82239370
	ctx.lr = 0x82240610;
	sub_82239370(ctx, base);
loc_82240610:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r9,r3,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// stb r9,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224062c
	if (ctx.cr6.eq) goto loc_8224062C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82240630
	goto loc_82240630;
loc_8224062C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82240630:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r10.u8);
	// beq cr6,0x82240654
	if (ctx.cr6.eq) goto loc_82240654;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x82240658
	goto loc_82240658;
loc_82240654:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82240658:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240668
	if (ctx.cr6.eq) goto loc_82240668;
	// ori r11,r10,16
	ctx.r11.u64 = ctx.r10.u64 | 16;
	// stb r11,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r11.u8);
loc_82240668:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825e58e0
	ctx.lr = 0x82240680;
	sub_825E58E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822406a4
	if (ctx.cr0.eq) goto loc_822406A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82240690;
	sub_8222E990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240794
	if (ctx.cr0.lt) goto loc_82240794;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82240794
	goto loc_82240794;
loc_822406A4:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,1000
	ctx.r30.s64 = 1000;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x822383c0
	ctx.lr = 0x822406CC;
	sub_822383C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822406f0
	if (ctx.cr0.eq) goto loc_822406F0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822406e4
	if (ctx.cr6.gt) goto loc_822406E4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82240794
	goto loc_82240794;
loc_822406E4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	ctx.r30.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82240794
	goto loc_82240794;
loc_822406F0:
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b368
	ctx.lr = 0x82240700;
	sub_8223B368(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r29,r31,400
	ctx.r29.s64 = ctx.r31.s64 + 400;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// sth r6,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,169
	ctx.r6.s64 = 169;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822478c8
	ctx.lr = 0x8224073C;
	sub_822478C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b460
	ctx.lr = 0x8224074C;
	sub_8223B460(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82240794
	if (ctx.cr6.lt) goto loc_82240794;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r31,548
	ctx.r7.s64 = ctx.r31.s64 + 548;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x82240770;
	sub_822479F0(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822407a0
	if (ctx.cr0.eq) goto loc_822407A0;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x8224078C;
	sub_8223FFF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x822407a0
	if (!ctx.cr0.lt) goto loc_822407A0;
loc_82240794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x822407A0;
	sub_8223F6C8(ctx, base);
loc_822407A0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822407A8"))) PPC_WEAK_FUNC(sub_822407A8);
PPC_FUNC_IMPL(__imp__sub_822407A8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x822407f0
	if (!ctx.cr6.lt) goto loc_822407F0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82244748
	ctx.lr = 0x822407E4;
	sub_82244748(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82240a04
	if (ctx.cr0.eq) goto loc_82240A04;
loc_822407F0:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82240948
	if (ctx.cr0.eq) goto loc_82240948;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x82240948
	if (!ctx.cr6.lt) goto loc_82240948;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223eb00
	ctx.lr = 0x82240818;
	sub_8223EB00(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240864
	if (ctx.cr6.eq) goto loc_82240864;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r5,520(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// bl 0x82238488
	ctx.lr = 0x82240850;
	sub_82238488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82240864
	if (!ctx.cr0.eq) goto loc_82240864;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82240864:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822408f0
	if (!ctx.cr6.eq) goto loc_822408F0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d538
	ctx.lr = 0x8224089C;
	sub_8223D538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822408f0
	if (ctx.cr0.lt) goto loc_822408F0;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// addi r30,r31,408
	ctx.r30.s64 = ctx.r31.s64 + 408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822408cc
	if (!ctx.cr6.eq) goto loc_822408CC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1199
	ctx.r6.s64 = 1199;
	// li r5,1001
	ctx.r5.s64 = 1001;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8224b0c8
	ctx.lr = 0x822408CC;
	sub_8224B0C8(ctx, base);
loc_822408CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822408e4
	if (ctx.cr6.lt) goto loc_822408E4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8224ab70
	ctx.lr = 0x822408E4;
	sub_8224AB70(ctx, base);
loc_822408E4:
	// li r3,260
	ctx.r3.s64 = 260;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82247a78
	ctx.lr = 0x822408F0;
	sub_82247A78(ctx, base);
loc_822408F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82240918
	if (ctx.cr6.eq) goto loc_82240918;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82240918
	if (ctx.cr6.eq) goto loc_82240918;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82240950
	if (!ctx.cr6.eq) goto loc_82240950;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82240950
	if (ctx.cr0.eq) goto loc_82240950;
loc_82240918:
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82219130
	ctx.lr = 0x82240930;
	sub_82219130(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ea50
	ctx.lr = 0x82240944;
	sub_8223EA50(ctx, base);
	// b 0x82240950
	goto loc_82240950;
loc_82240948:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82240950:
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82240ad0
	if (ctx.cr0.eq) goto loc_82240AD0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// beq cr6,0x82240abc
	if (ctx.cr6.eq) goto loc_82240ABC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82240a78
	if (ctx.cr6.eq) goto loc_82240A78;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r11,r31,524
	ctx.r11.s64 = ctx.r31.s64 + 524;
	// beq cr6,0x82240a2c
	if (ctx.cr6.eq) goto loc_82240A2C;
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82240ad0
	if (!ctx.cr6.eq) goto loc_82240AD0;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5830
	ctx.lr = 0x822409BC;
	sub_825E5830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240a1c
	if (ctx.cr0.eq) goto loc_82240A1C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82240a1c
	if (ctx.cr6.eq) goto loc_82240A1C;
loc_822409CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x822409D4;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822409e4
	if (ctx.cr0.lt) goto loc_822409E4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_822409E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82240a04
	if (ctx.cr6.eq) goto loc_82240A04;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244748
	ctx.lr = 0x82240A04;
	sub_82244748(ctx, base);
loc_82240A04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_82240A1C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,-656
	ctx.r11.s64 = ctx.r11.s64 + -656;
loc_82240A24:
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x82240a04
	goto loc_82240A04;
loc_82240A2C:
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82240ad0
	if (!ctx.cr6.eq) goto loc_82240AD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5cf0
	ctx.lr = 0x82240A5C;
	sub_825E5CF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240a6c
	if (ctx.cr0.eq) goto loc_82240A6C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x822409cc
	if (!ctx.cr6.eq) goto loc_822409CC;
loc_82240A6C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// b 0x82240a24
	goto loc_82240A24;
loc_82240A78:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5c58
	ctx.lr = 0x82240AA0;
	sub_825E5C58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240ab0
	if (ctx.cr0.eq) goto loc_82240AB0;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x822409cc
	if (!ctx.cr6.eq) goto loc_822409CC;
loc_82240AB0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,19232
	ctx.r11.s64 = ctx.r11.s64 + 19232;
	// b 0x82240a24
	goto loc_82240A24;
loc_82240ABC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243728
	ctx.lr = 0x82240AC4;
	sub_82243728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822409e4
	if (!ctx.cr0.eq) goto loc_822409E4;
	// b 0x82240a04
	goto loc_82240A04;
loc_82240AD0:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82240af8
	if (ctx.cr0.eq) goto loc_82240AF8;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82244ce8
	ctx.lr = 0x82240AEC;
	sub_82244CE8(ctx, base);
loc_82240AEC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822409e4
	if (ctx.cr0.lt) goto loc_822409E4;
	// b 0x82240a04
	goto loc_82240A04;
loc_82240AF8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82240a04
	if (ctx.cr0.eq) goto loc_82240A04;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82240B10;
	sub_8223FFF8(ctx, base);
	// b 0x82240aec
	goto loc_82240AEC;
}

__attribute__((alias("__imp__sub_82240B14"))) PPC_WEAK_FUNC(sub_82240B14);
PPC_FUNC_IMPL(__imp__sub_82240B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240B18"))) PPC_WEAK_FUNC(sub_82240B18);
PPC_FUNC_IMPL(__imp__sub_82240B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82240B20;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240b5c
	if (ctx.cr6.eq) goto loc_82240B5C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,1609
	ctx.r30.u64 = ctx.r30.u64 | 1609;
	// b 0x82240e38
	goto loc_82240E38;
loc_82240B5C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r21,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r21.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cd80
	ctx.lr = 0x82240BA4;
	sub_8223CD80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240e18
	if (ctx.cr0.lt) goto loc_82240E18;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82240bc4
	if (!ctx.cr6.lt) goto loc_82240BC4;
	// lis r30,-32747
	ctx.r30.s64 = -2146107392;
	// ori r30,r30,20994
	ctx.r30.u64 = ctx.r30.u64 | 20994;
	// b 0x82240e18
	goto loc_82240E18;
loc_82240BC4:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82240c28
	if (ctx.cr6.eq) goto loc_82240C28;
	// lwz r27,324(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82240BE4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32778
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32778, ctx.xer);
	// bne cr6,0x82240c08
	if (!ctx.cr6.eq) goto loc_82240C08;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82240c00
	if (!ctx.cr6.eq) goto loc_82240C00;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82240C00:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82240c14
	goto loc_82240C14;
loc_82240C08:
	// cmplwi cr6,r11,32779
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32779, ctx.xer);
	// bne cr6,0x82240c14
	if (!ctx.cr6.eq) goto loc_82240C14;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82240C14:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82240be4
	if (!ctx.cr0.eq) goto loc_82240BE4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82240c34
	if (!ctx.cr6.eq) goto loc_82240C34;
loc_82240C28:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x82240e18
	goto loc_82240E18;
loc_82240C34:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82240c28
	if (ctx.cr6.eq) goto loc_82240C28;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82240c5c
	if (ctx.cr6.eq) goto loc_82240C5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82240c64
	if (ctx.cr6.eq) goto loc_82240C64;
loc_82240C50:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,117
	ctx.r30.u64 = ctx.r30.u64 | 117;
	// b 0x82240e18
	goto loc_82240E18;
loc_82240C5C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82240c50
	if (ctx.cr6.eq) goto loc_82240C50;
loc_82240C64:
	// addi r25,r31,228
	ctx.r25.s64 = ctx.r31.s64 + 228;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82246c50
	ctx.lr = 0x82240C7C;
	sub_82246C50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240e18
	if (ctx.cr0.lt) goto loc_82240E18;
	// addi r26,r31,240
	ctx.r26.s64 = ctx.r31.s64 + 240;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822467a0
	ctx.lr = 0x82240C9C;
	sub_822467A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240e18
	if (ctx.cr0.lt) goto loc_82240E18;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r23,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r23.u8);
	// oris r7,r11,16384
	ctx.r7.u64 = ctx.r11.u64 | 1073741824;
	// stb r22,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r22.u8);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r7,r7,1024
	ctx.r7.u64 = ctx.r7.u64 | 1024;
	// subf r11,r8,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r8.s64;
	// stw r7,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r7.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8223b228
	ctx.lr = 0x82240CD4;
	sub_8223B228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r27,r29,0,29,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82240cf4
	if (ctx.cr0.eq) goto loc_82240CF4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82240cf4
	if (!ctx.cr6.eq) goto loc_82240CF4;
	// lis r30,-32747
	ctx.r30.s64 = -2146107392;
	// ori r30,r30,21001
	ctx.r30.u64 = ctx.r30.u64 | 21001;
	// b 0x82240e18
	goto loc_82240E18;
loc_82240CF4:
	// rlwimi r7,r29,10,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r29.u32, 10) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r7.u32);
	// rlwinm r8,r29,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f990
	ctx.lr = 0x82240D1C;
	sub_8223F990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240e18
	if (ctx.cr0.lt) goto loc_82240E18;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r28,r31,380
	ctx.r28.s64 = ctx.r31.s64 + 380;
loc_82240D2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240d58
	if (ctx.cr6.eq) goto loc_82240D58;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82247318
	ctx.lr = 0x82240D48;
	sub_82247318(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822469a8
	ctx.lr = 0x82240D58;
	sub_822469A8(ctx, base);
loc_82240D58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82240d2c
	if (ctx.cr6.lt) goto loc_82240D2C;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821f7f18
	ctx.lr = 0x82240D70;
	sub_821F7F18(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82240da4
	if (!ctx.cr6.eq) goto loc_82240DA4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82240da4
	if (!ctx.cr6.eq) goto loc_82240DA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240158
	ctx.lr = 0x82240DA0;
	sub_82240158(ctx, base);
	// b 0x82240e34
	goto loc_82240E34;
loc_82240DA4:
	// lbz r9,169(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stb r9,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r9.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// std r21,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r21.u64);
	// std r21,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r21.u64);
	// std r21,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r21.u64);
	// stw r21,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r21.u32);
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// lbz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// bl 0x825e55c8
	ctx.lr = 0x82240DF0;
	sub_825E55C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240e28
	if (ctx.cr0.eq) goto loc_82240E28;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82240e28
	if (ctx.cr6.eq) goto loc_82240E28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x82240E08;
	sub_8222E990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82240e18
	if (ctx.cr0.lt) goto loc_82240E18;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82240E18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x82240E24;
	sub_8223F6C8(ctx, base);
	// b 0x82240e38
	goto loc_82240E38;
loc_82240E28:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_82240E34:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82240E38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240E44"))) PPC_WEAK_FUNC(sub_82240E44);
PPC_FUNC_IMPL(__imp__sub_82240E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240E48"))) PPC_WEAK_FUNC(sub_82240E48);
PPC_FUNC_IMPL(__imp__sub_82240E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82240E50;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240e7c
	if (ctx.cr6.eq) goto loc_82240E7C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,1609
	ctx.r30.u64 = ctx.r30.u64 | 1609;
	// b 0x822410e0
	goto loc_822410E0;
loc_82240E7C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cd80
	ctx.lr = 0x82240EC4;
	sub_8223CD80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822410c0
	if (ctx.cr0.lt) goto loc_822410C0;
	// lwz r7,60(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82240ee8
	if (!ctx.cr6.lt) goto loc_82240EE8;
	// lis r30,-32747
	ctx.r30.s64 = -2146107392;
	// ori r30,r30,20994
	ctx.r30.u64 = ctx.r30.u64 | 20994;
	// b 0x822410c0
	goto loc_822410C0;
loc_82240EE8:
	// lwz r8,80(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82240f50
	if (ctx.cr6.eq) goto loc_82240F50;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
loc_82240EFC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,32778
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32778, ctx.xer);
	// bne cr6,0x82240f40
	if (!ctx.cr6.eq) goto loc_82240F40;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82240f2c
	if (!ctx.cr6.eq) goto loc_82240F2C;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82240f40
	if (ctx.cr6.eq) goto loc_82240F40;
loc_82240F20:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,117
	ctx.r30.u64 = ctx.r30.u64 | 117;
	// b 0x822410c0
	goto loc_822410C0;
loc_82240F2C:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82240f40
	if (!ctx.cr6.eq) goto loc_82240F40;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82240f20
	if (ctx.cr6.eq) goto loc_82240F20;
loc_82240F40:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82240efc
	if (ctx.cr6.lt) goto loc_82240EFC;
loc_82240F50:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
	// bl 0x8223b228
	ctx.lr = 0x82240F84;
	sub_8223B228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82240fa4
	if (ctx.cr0.eq) goto loc_82240FA4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82240fa4
	if (!ctx.cr6.eq) goto loc_82240FA4;
	// lis r30,-32747
	ctx.r30.s64 = -2146107392;
	// ori r30,r30,21001
	ctx.r30.u64 = ctx.r30.u64 | 21001;
	// b 0x822410c0
	goto loc_822410C0;
loc_82240FA4:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r28,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// rlwimi r11,r28,10,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 10) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// li r6,254
	ctx.r6.s64 = 254;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f990
	ctx.lr = 0x82240FD0;
	sub_8223F990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822410c0
	if (ctx.cr0.lt) goto loc_822410C0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,380
	ctx.r29.s64 = ctx.r31.s64 + 380;
loc_82240FE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241010
	if (ctx.cr6.eq) goto loc_82241010;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x8224100c
	if (ctx.cr6.eq) goto loc_8224100C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8224100C:
	// bl 0x8222eab8
	ctx.lr = 0x82241010;
	sub_8222EAB8(ctx, base);
loc_82241010:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82240fe0
	if (ctx.cr6.lt) goto loc_82240FE0;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821f7f18
	ctx.lr = 0x82241028;
	sub_821F7F18(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// li r5,60
	ctx.r5.s64 = 60;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x82219130
	ctx.lr = 0x8224104C;
	sub_82219130(ctx, base);
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// stb r6,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r6.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r26,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r26.u64);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// std r26,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r26.u64);
	// std r26,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r26.u64);
	// stw r26,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r26.u32);
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// lbz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// bl 0x825e55c8
	ctx.lr = 0x82241098;
	sub_825E55C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822410d0
	if (ctx.cr0.eq) goto loc_822410D0;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x822410d0
	if (ctx.cr6.eq) goto loc_822410D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x822410B0;
	sub_8222E990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822410c0
	if (ctx.cr0.lt) goto loc_822410C0;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_822410C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x822410CC;
	sub_8223F6C8(ctx, base);
	// b 0x822410e0
	goto loc_822410E0;
loc_822410D0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 + 1344;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_822410E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822410EC"))) PPC_WEAK_FUNC(sub_822410EC);
PPC_FUNC_IMPL(__imp__sub_822410EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822410F0"))) PPC_WEAK_FUNC(sub_822410F0);
PPC_FUNC_IMPL(__imp__sub_822410F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x822410F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82241124
	if (ctx.cr6.eq) goto loc_82241124;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,1609
	ctx.r30.u64 = ctx.r30.u64 | 1609;
	// b 0x822412f4
	goto loc_822412F4;
loc_82241124:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cd80
	ctx.lr = 0x8224116C;
	sub_8223CD80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822412d4
	if (ctx.cr0.lt) goto loc_822412D4;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8223b228
	ctx.lr = 0x82241198;
	sub_8223B228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822411b8
	if (ctx.cr0.eq) goto loc_822411B8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822411b8
	if (!ctx.cr6.eq) goto loc_822411B8;
	// lis r30,-32747
	ctx.r30.s64 = -2146107392;
	// ori r30,r30,21001
	ctx.r30.u64 = ctx.r30.u64 | 21001;
	// b 0x822412d4
	goto loc_822412D4;
loc_822411B8:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r28,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// rlwimi r11,r28,10,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 10) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// li r6,254
	ctx.r6.s64 = 254;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,80(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// bl 0x8223f990
	ctx.lr = 0x822411E4;
	sub_8223F990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822412d4
	if (ctx.cr0.lt) goto loc_822412D4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r31,380
	ctx.r29.s64 = ctx.r31.s64 + 380;
loc_822411F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241224
	if (ctx.cr6.eq) goto loc_82241224;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82241220
	if (ctx.cr6.eq) goto loc_82241220;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82241220:
	// bl 0x8222eab8
	ctx.lr = 0x82241224;
	sub_8222EAB8(ctx, base);
loc_82241224:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x822411f4
	if (ctx.cr6.lt) goto loc_822411F4;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821f7f18
	ctx.lr = 0x8224123C;
	sub_821F7F18(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// addi r4,r26,20
	ctx.r4.s64 = ctx.r26.s64 + 20;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r5,60
	ctx.r5.s64 = 60;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x82219130
	ctx.lr = 0x82241260;
	sub_82219130(ctx, base);
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// stb r6,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r6.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r27,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r27.u64);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// std r27,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r27.u64);
	// std r27,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r27.u64);
	// stw r27,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r27.u32);
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// lbz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// bl 0x825e55c8
	ctx.lr = 0x822412AC;
	sub_825E55C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822412e4
	if (ctx.cr0.eq) goto loc_822412E4;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x822412e4
	if (ctx.cr6.eq) goto loc_822412E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x822412C4;
	sub_8222E990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822412d4
	if (ctx.cr0.lt) goto loc_822412D4;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_822412D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x822412E0;
	sub_8223F6C8(ctx, base);
	// b 0x822412f4
	goto loc_822412F4;
loc_822412E4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 + 1344;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_822412F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241300"))) PPC_WEAK_FUNC(sub_82241300);
PPC_FUNC_IMPL(__imp__sub_82241300) {
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
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82241318:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82241318
	if (!ctx.cr0.eq) goto loc_82241318;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82241354
	if (!ctx.cr6.eq) goto loc_82241354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ff50
	ctx.lr = 0x82241348;
	sub_8223FF50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x82241354;
	sub_82247A78(ctx, base);
loc_82241354:
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

__attribute__((alias("__imp__sub_82241368"))) PPC_WEAK_FUNC(sub_82241368);
PPC_FUNC_IMPL(__imp__sub_82241368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82241370;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82241398;
	sub_8223FFF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82241478
	if (ctx.cr0.lt) goto loc_82241478;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822413e4
	if (ctx.cr6.lt) goto loc_822413E4;
	// beq cr6,0x822413d8
	if (ctx.cr6.eq) goto loc_822413D8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822413d0
	if (!ctx.cr6.eq) goto loc_822413D0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822413d0
	if (ctx.cr6.eq) goto loc_822413D0;
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822413d8
	if (!ctx.cr0.eq) goto loc_822413D8;
loc_822413D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822413dc
	goto loc_822413DC;
loc_822413D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822413DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b560
	ctx.lr = 0x822413E4;
	sub_8223B560(ctx, base);
loc_822413E4:
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241474
	if (ctx.cr6.eq) goto loc_82241474;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223d538
	ctx.lr = 0x82241414;
	sub_8223D538(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82241438
	if (ctx.cr0.lt) goto loc_82241438;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// bl 0x82247960
	ctx.lr = 0x82241430;
	sub_82247960(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82241450
	if (!ctx.cr0.lt) goto loc_82241450;
loc_82241438:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82241478
	if (ctx.cr6.eq) goto loc_82241478;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x8224144C;
	sub_82247A78(ctx, base);
	// b 0x82241478
	goto loc_82241478;
loc_82241450:
	// lwz r3,408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241468
	if (ctx.cr6.eq) goto loc_82241468;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8224ab70
	ctx.lr = 0x82241468;
	sub_8224AB70(ctx, base);
loc_82241468:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x82241474;
	sub_82247A78(ctx, base);
loc_82241474:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82241478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241484"))) PPC_WEAK_FUNC(sub_82241484);
PPC_FUNC_IMPL(__imp__sub_82241484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241488"))) PPC_WEAK_FUNC(sub_82241488);
PPC_FUNC_IMPL(__imp__sub_82241488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82241490;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r7,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r26.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82241528
	if (ctx.cr6.eq) goto loc_82241528;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
loc_822414EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x82248e58
	ctx.lr = 0x822414F8;
	sub_82248E58(ctx, base);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// lwz r29,88(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// or r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 | ctx.r25.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822414ec
	if (!ctx.cr6.eq) goto loc_822414EC;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// b 0x82241588
	goto loc_82241588;
loc_82241528:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r6,532(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b4e0
	ctx.lr = 0x82241540;
	sub_8223B4E0(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,536(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b4e0
	ctx.lr = 0x82241558;
	sub_8223B4E0(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,540(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b4e0
	ctx.lr = 0x82241570;
	sub_8223B4E0(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,544(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b4e0
	ctx.lr = 0x82241588;
	sub_8223B4E0(ctx, base);
loc_82241588:
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r20,0
	ctx.r20.s64 = 0;
	// add r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r23,r1,160
	ctx.r23.s64 = ctx.r1.s64 + 160;
	// addi r25,r19,27
	ctx.r25.s64 = ctx.r19.s64 + 27;
loc_822415A8:
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x822418a0
	if (ctx.cr6.eq) goto loc_822418A0;
	// lhz r11,-3(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + -3);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// beq 0x822415f4
	if (ctx.cr0.eq) goto loc_822415F4;
	// lbz r11,171(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 171);
	// lbz r10,169(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 169);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82241604
	if (ctx.cr6.lt) goto loc_82241604;
	// lbz r11,170(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// lbz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822418c8
	if (!ctx.cr6.lt) goto loc_822418C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82241604
	goto loc_82241604;
loc_822415F4:
	// lbz r11,170(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// lbz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822418c8
	if (!ctx.cr6.lt) goto loc_822418C8;
loc_82241604:
	// rlwinm. r21,r29,31,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x82241618
	if (ctx.cr0.eq) goto loc_82241618;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822418d4
	if (!ctx.cr6.eq) goto loc_822418D4;
loc_82241618:
	// rlwinm r11,r29,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x822418d4
	if (ctx.cr6.eq) goto loc_822418D4;
	// rlwinm r11,r29,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x822418d4
	if (ctx.cr6.eq) goto loc_822418D4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r29,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// std r4,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r4.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82249740
	ctx.lr = 0x82241668;
	sub_82249740(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82241960
	if (ctx.cr0.eq) goto loc_82241960;
	// lwz r11,-19(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19);
	// rlwinm r5,r29,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80;
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,396(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwimi r8,r29,23,6,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 23) & 0x2000000) | (ctx.r8.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r11,-15(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15);
	// rlwinm r7,r29,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r6,r29,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// lwz r29,380(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,-11(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// rlwinm r3,r8,0,12,6
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFE0FFFFF;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// lwz r11,-7(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lbz r11,168(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 168);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwimi r9,r10,2,25,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x60) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwinm r11,r9,2,23,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1C0;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8224172c
	if (ctx.cr6.eq) goto loc_8224172C;
	// rlwimi r11,r5,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// beq 0x8224172c
	if (ctx.cr0.eq) goto loc_8224172C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224172C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224172C:
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b168
	ctx.lr = 0x8224173C;
	sub_8223B168(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241a98
	if (ctx.cr0.lt) goto loc_82241A98;
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// addi r26,r30,424
	ctx.r26.s64 = ctx.r30.s64 + 424;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224177c
	if (ctx.cr6.eq) goto loc_8224177C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82241780
	goto loc_82241780;
loc_8224177C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82241780:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82241a98
	if (ctx.cr6.lt) goto loc_82241A98;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// li r17,1
	ctx.r17.s64 = 1;
	// bl 0x82247bb0
	ctx.lr = 0x82241798;
	sub_82247BB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241a98
	if (ctx.cr0.lt) goto loc_82241A98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,-1(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + -1);
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// bl 0x82247e90
	ctx.lr = 0x822417B0;
	sub_82247E90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241a98
	if (ctx.cr0.lt) goto loc_82241A98;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// bl 0x8223efb0
	ctx.lr = 0x822417CC;
	sub_8223EFB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241a98
	if (ctx.cr0.lt) goto loc_82241A98;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822417f0
	if (ctx.cr6.eq) goto loc_822417F0;
	// lbz r11,171(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 171);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,171(r30)
	PPC_STORE_U8(ctx.r30.u32 + 171, ctx.r11.u8);
	// b 0x822417fc
	goto loc_822417FC;
loc_822417F0:
	// lbz r11,170(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,170(r30)
	PPC_STORE_U8(ctx.r30.u32 + 170, ctx.r11.u8);
loc_822417FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248e58
	ctx.lr = 0x82241804;
	sub_82248E58(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82241820
	if (!ctx.cr6.eq) goto loc_82241820;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x822479a0
	ctx.lr = 0x8224181C;
	sub_822479A0(ctx, base);
	// b 0x82241850
	goto loc_82241850;
loc_82241820:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82248e80
	ctx.lr = 0x8224182C;
	sub_82248E80(ctx, base);
	// addi r11,r31,376
	ctx.r11.s64 = ctx.r31.s64 + 376;
	// lwz r11,376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
loc_82241850:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82241874
	if (ctx.cr6.eq) goto loc_82241874;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82241874
	if (!ctx.cr6.eq) goto loc_82241874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248e58
	ctx.lr = 0x82241870;
	sub_82248E58(ctx, base);
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
loc_82241874:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223ce50
	ctx.lr = 0x82241880;
	sub_8223CE50(ctx, base);
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_822418A0:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r25,r25,42
	ctx.r25.s64 = ctx.r25.s64 + 42;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 4, ctx.xer);
	// blt cr6,0x822415a8
	if (ctx.cr6.lt) goto loc_822415A8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8224196c
	if (!ctx.cr6.eq) goto loc_8224196C;
	// lis r29,-32747
	ctx.r29.s64 = -2146107392;
	// ori r29,r29,10
	ctx.r29.u64 = ctx.r29.u64 | 10;
	// b 0x822418e0
	goto loc_822418E0;
loc_822418C8:
	// lis r29,-32747
	ctx.r29.s64 = -2146107392;
	// ori r29,r29,20994
	ctx.r29.u64 = ctx.r29.u64 | 20994;
	// b 0x822418e0
	goto loc_822418E0;
loc_822418D4:
	// lis r29,-32747
	ctx.r29.s64 = -2146107392;
	// ori r29,r29,10
	ctx.r29.u64 = ctx.r29.u64 | 10;
loc_822418DC:
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_822418E0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82241b74
	if (ctx.cr6.eq) goto loc_82241B74;
	// addi r28,r30,256
	ctx.r28.s64 = ctx.r30.s64 + 256;
loc_822418EC:
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// add r9,r16,r21
	ctx.r9.u64 = ctx.r16.u64 + ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82241924
	if (!ctx.cr6.eq) goto loc_82241924;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82241924
	if (!ctx.cr6.eq) goto loc_82241924;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x822479a0
	ctx.lr = 0x82241924;
	sub_822479A0(ctx, base);
loc_82241924:
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241944
	if (ctx.cr6.eq) goto loc_82241944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241944:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241b24
	if (ctx.cr0.eq) goto loc_82241B24;
	// lbz r11,171(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r30)
	PPC_STORE_U8(ctx.r30.u32 + 171, ctx.r11.u8);
	// b 0x82241b30
	goto loc_82241B30;
loc_82241960:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82241a98
	goto loc_82241A98;
loc_8224196C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x822419c8
	if (!ctx.cr6.eq) goto loc_822419C8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223e280
	ctx.lr = 0x82241990;
	sub_8223E280(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241b74
	if (ctx.cr0.lt) goto loc_82241B74;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82241cbc
	if (ctx.cr6.eq) goto loc_82241CBC;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_822419A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82249808
	ctx.lr = 0x822419B0;
	sub_82249808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822419a8
	if (!ctx.cr0.eq) goto loc_822419A8;
	// b 0x82241cbc
	goto loc_82241CBC;
loc_822419C8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82241a08
	if (ctx.cr6.eq) goto loc_82241A08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82241a08
	if (ctx.cr6.eq) goto loc_82241A08;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822419f0
	if (ctx.cr6.eq) goto loc_822419F0;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,1609
	ctx.r29.u64 = ctx.r29.u64 | 1609;
	// b 0x822418e0
	goto loc_822418E0;
loc_822419F0:
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82241a08
	if (!ctx.cr0.eq) goto loc_82241A08;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,4320
	ctx.r29.u64 = ctx.r29.u64 | 4320;
	// b 0x822418e0
	goto loc_822418E0;
loc_82241A08:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x825e5988
	ctx.lr = 0x82241A20;
	sub_825E5988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82241a44
	if (ctx.cr0.eq) goto loc_82241A44;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82241A30;
	sub_8222E990(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x822418e0
	if (ctx.cr0.lt) goto loc_822418E0;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x822418e0
	goto loc_822418E0;
loc_82241A44:
	// add r28,r16,r21
	ctx.r28.u64 = ctx.r16.u64 + ctx.r21.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223e280
	ctx.lr = 0x82241A6C;
	sub_8223E280(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241afc
	if (ctx.cr0.lt) goto loc_82241AFC;
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241ba0
	if (ctx.cr0.eq) goto loc_82241BA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241368
	ctx.lr = 0x82241A90;
	sub_82241368(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82241b9c
	if (!ctx.cr0.lt) goto loc_82241B9C;
loc_82241A98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82241aec
	if (ctx.cr6.eq) goto loc_82241AEC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82241ab4
	if (ctx.cr6.eq) goto loc_82241AB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// bl 0x82247f48
	ctx.lr = 0x82241AB4;
	sub_82247F48(ctx, base);
loc_82241AB4:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82241adc
	if (ctx.cr6.eq) goto loc_82241ADC;
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241adc
	if (ctx.cr6.eq) goto loc_82241ADC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241ADC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82249808
	ctx.lr = 0x82241AEC;
	sub_82249808(ctx, base);
loc_82241AEC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822418dc
	if (ctx.cr6.eq) goto loc_822418DC;
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82241AFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x825e5ad8
	ctx.lr = 0x82241B10;
	sub_825E5AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822418e0
	if (ctx.cr0.eq) goto loc_822418E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82241B20;
	sub_8222E990(ctx, base);
	// b 0x822418e0
	goto loc_822418E0;
loc_82241B24:
	// lbz r11,170(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r30)
	PPC_STORE_U8(ctx.r30.u32 + 170, ctx.r11.u8);
loc_82241B30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82247f48
	ctx.lr = 0x82241B3C;
	sub_82247F48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223cf00
	ctx.lr = 0x82241B4C;
	sub_8223CF00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248e90
	ctx.lr = 0x82241B54;
	sub_82248E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82249808
	ctx.lr = 0x82241B64;
	sub_82249808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249808
	ctx.lr = 0x82241B6C;
	sub_82249808(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x822418ec
	if (!ctx.cr6.eq) goto loc_822418EC;
loc_82241B74:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82241cc0
	if (ctx.cr6.eq) goto loc_82241CC0;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82241B80:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82249808
	ctx.lr = 0x82241B90;
	sub_82249808(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82241b80
	if (!ctx.cr6.eq) goto loc_82241B80;
	// b 0x82241cc0
	goto loc_82241CC0;
loc_82241B9C:
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82241BA0:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82241cbc
	if (ctx.cr6.eq) goto loc_82241CBC;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
loc_82241BB0:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82241c9c
	if (ctx.cr6.lt) goto loc_82241C9C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82241c6c
	if (ctx.cr6.eq) goto loc_82241C6C;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r11,396
	ctx.r10.s64 = ctx.r11.s64 + 396;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// beq cr6,0x82241c0c
	if (ctx.cr6.eq) goto loc_82241C0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241C0C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x825e5ad8
	ctx.lr = 0x82241C2C;
	sub_825E5AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82241c3c
	if (ctx.cr0.eq) goto loc_82241C3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82241C3C;
	sub_8222E990(ctx, base);
loc_82241C3C:
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241c9c
	if (ctx.cr6.eq) goto loc_82241C9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224a298
	ctx.lr = 0x82241C68;
	sub_8224A298(ctx, base);
	// b 0x82241c9c
	goto loc_82241C9C;
loc_82241C6C:
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241C9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82249808
	ctx.lr = 0x82241CA4;
	sub_82249808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82241bb0
	if (ctx.cr6.lt) goto loc_82241BB0;
loc_82241CBC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82241CC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241CCC"))) PPC_WEAK_FUNC(sub_82241CCC);
PPC_FUNC_IMPL(__imp__sub_82241CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241CD0"))) PPC_WEAK_FUNC(sub_82241CD0);
PPC_FUNC_IMPL(__imp__sub_82241CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82241CD8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,37
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 37, ctx.xer);
	// blt cr6,0x82242148
	if (ctx.cr6.lt) goto loc_82242148;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r4,37
	ctx.r8.s64 = ctx.r4.s64 + 37;
	// addi r7,r5,-37
	ctx.r7.s64 = ctx.r5.s64 + -37;
	// lhz r23,28(r4)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// lhz r22,30(r4)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ld r25,8(r4)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lwz r19,16(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r24,20(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r21,24(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lbz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// lbz r28,33(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// lbz r27,34(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 34);
	// lbz r10,35(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 35);
	// lbz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// beq cr6,0x82241d4c
	if (ctx.cr6.eq) goto loc_82241D4C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1306
	ctx.r3.u64 = ctx.r3.u64 | 1306;
	// b 0x822422b4
	goto loc_822422B4;
loc_82241D4C:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82241d64
	if (ctx.cr6.eq) goto loc_82241D64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
	// b 0x822422b4
	goto loc_822422B4;
loc_82241D64:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82242148
	if (ctx.cr6.gt) goto loc_82242148;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82242148
	if (ctx.cr6.gt) goto loc_82242148;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82241d94
	if (!ctx.cr6.eq) goto loc_82241D94;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82242148
	if (ctx.cr6.eq) goto loc_82242148;
loc_82241D94:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82241da4
	if (!ctx.cr6.eq) goto loc_82241DA4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82242148
	if (ctx.cr6.eq) goto loc_82242148;
loc_82241DA4:
	// rlwinm. r10,r26,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82241db4
	if (ctx.cr0.eq) goto loc_82241DB4;
	// rlwinm. r11,r26,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242148
	if (!ctx.cr0.eq) goto loc_82242148;
loc_82241DB4:
	// rlwinm. r20,r26,0,27,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x82241dc4
	if (ctx.cr0.eq) goto loc_82241DC4;
	// rlwinm. r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242148
	if (!ctx.cr0.eq) goto loc_82242148;
loc_82241DC4:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82241dd4
	if (!ctx.cr6.eq) goto loc_82241DD4;
	// rlwinm. r11,r26,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242148
	if (ctx.cr0.eq) goto loc_82242148;
loc_82241DD4:
	// cmplwi cr6,r23,1020
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1020, ctx.xer);
	// bgt cr6,0x82242148
	if (ctx.cr6.gt) goto loc_82242148;
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 31, ctx.xer);
	// bgt cr6,0x82242148
	if (ctx.cr6.gt) goto loc_82242148;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82242014
	if (ctx.cr6.eq) goto loc_82242014;
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// beq 0x82241e0c
	if (ctx.cr0.eq) goto loc_82241E0C;
	// rlwinm. r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82241e14
	if (!ctx.cr0.eq) goto loc_82241E14;
loc_82241E00:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,21001
	ctx.r3.u64 = ctx.r3.u64 | 21001;
	// b 0x822422b4
	goto loc_822422B4;
loc_82241E0C:
	// rlwinm. r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82241f1c
	if (!ctx.cr0.eq) goto loc_82241F1C;
loc_82241E14:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82241e74
	if (!ctx.cr6.eq) goto loc_82241E74;
	// clrlwi. r9,r26,31
	ctx.r9.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82241e30
	if (ctx.cr0.eq) goto loc_82241E30;
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82241e38
	if (!ctx.cr0.eq) goto loc_82241E38;
	// b 0x82241eb4
	goto loc_82241EB4;
loc_82241E30:
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82241eb4
	if (!ctx.cr0.eq) goto loc_82241EB4;
loc_82241E38:
	// rlwinm. r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82241e4c
	if (ctx.cr0.eq) goto loc_82241E4C;
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82241e54
	if (!ctx.cr0.eq) goto loc_82241E54;
	// b 0x82241eb4
	goto loc_82241EB4;
loc_82241E4C:
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82241eb4
	if (!ctx.cr0.eq) goto loc_82241EB4;
loc_82241E54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82241e64
	if (ctx.cr6.eq) goto loc_82241E64;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82241e70
	goto loc_82241E70;
loc_82241E64:
	// rlwinm. r10,r26,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82241ea4
	if (ctx.cr0.eq) goto loc_82241EA4;
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82241E70:
	// beq 0x82241eb4
	if (ctx.cr0.eq) goto loc_82241EB4;
loc_82241E74:
	// addi r29,r31,380
	ctx.r29.s64 = ctx.r31.s64 + 380;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82241E80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82241ec8
	if (ctx.cr6.eq) goto loc_82241EC8;
	// lwz r9,396(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r8,r26,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82241ec0
	if (ctx.cr0.eq) goto loc_82241EC0;
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82241e00
	if (ctx.cr0.eq) goto loc_82241E00;
	// b 0x82241ec8
	goto loc_82241EC8;
loc_82241EA4:
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82241eb4
	if (!ctx.cr0.eq) goto loc_82241EB4;
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241e74
	if (ctx.cr0.eq) goto loc_82241E74;
loc_82241EB4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1610
	ctx.r3.u64 = ctx.r3.u64 | 1610;
	// b 0x822422b4
	goto loc_822422B4;
loc_82241EC0:
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82241f1c
	if (!ctx.cr0.eq) goto loc_82241F1C;
loc_82241EC8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82241e80
	if (ctx.cr6.lt) goto loc_82241E80;
	// lbz r9,170(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// subf r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82241f10
	if (ctx.cr6.lt) goto loc_82241F10;
	// lbz r11,171(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822420a0
	if (!ctx.cr6.lt) goto loc_822420A0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subf r10,r6,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82241f28
	if (!ctx.cr6.lt) goto loc_82241F28;
loc_82241F10:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,20994
	ctx.r3.u64 = ctx.r3.u64 | 20994;
	// b 0x822422b4
	goto loc_822422B4;
loc_82241F1C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1365
	ctx.r3.u64 = ctx.r3.u64 | 1365;
	// b 0x822422b4
	goto loc_822422B4;
loc_82241F28:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r6,r31,392
	ctx.r6.s64 = ctx.r31.s64 + 392;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82241F38:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82241f9c
	if (ctx.cr6.eq) goto loc_82241F9C;
	// lwz r9,396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r5,r9,0,2,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82241f9c
	if (ctx.cr0.eq) goto loc_82241F9C;
	// rlwinm r9,r9,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lbz r9,170(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r10,171(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stwx r3,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r5,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r10,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r10.u8);
	// stb r9,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82241fa8
	if (!ctx.cr6.lt) goto loc_82241FA8;
loc_82241F9C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bne 0x82241f38
	if (!ctx.cr0.eq) goto loc_82241F38;
loc_82241FA8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e5a30
	ctx.lr = 0x82241FBC;
	sub_825E5A30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82241fe4
	if (!ctx.cr0.eq) goto loc_82241FE4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e58e0
	ctx.lr = 0x82241FDC;
	sub_825E58E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82242000
	if (ctx.cr0.eq) goto loc_82242000;
loc_82241FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82241FEC;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822422b4
	if (ctx.cr0.lt) goto loc_822422B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822422b4
	goto loc_822422B4;
loc_82242000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223eb00
	ctx.lr = 0x82242008;
	sub_8223EB00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822422b4
	if (ctx.cr0.lt) goto loc_822422B4;
	// b 0x822420a0
	goto loc_822420A0;
loc_82242014:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822422b0
	if (ctx.cr6.eq) goto loc_822422B0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822422b0
	if (ctx.cr6.eq) goto loc_822422B0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242040
	if (ctx.cr0.eq) goto loc_82242040;
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242048
	if (!ctx.cr0.eq) goto loc_82242048;
	// b 0x82242148
	goto loc_82242148;
loc_82242040:
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242148
	if (!ctx.cr0.eq) goto loc_82242148;
loc_82242048:
	// addi r29,r31,380
	ctx.r29.s64 = ctx.r31.s64 + 380;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82242054:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242074
	if (!ctx.cr6.eq) goto loc_82242074;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82242054
	if (ctx.cr6.lt) goto loc_82242054;
	// b 0x822420a0
	goto loc_822420A0;
loc_82242074:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242098
	if (ctx.cr0.eq) goto loc_82242098;
	// rlwinm. r11,r26,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822420a0
	if (!ctx.cr0.eq) goto loc_822420A0;
	// b 0x82242148
	goto loc_82242148;
loc_82242098:
	// rlwinm. r11,r26,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242148
	if (!ctx.cr0.eq) goto loc_82242148;
loc_822420A0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stb r28,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r28.u8);
	// rlwimi r11,r26,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// std r25,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r25.u64);
	// rlwinm r8,r26,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	// stb r27,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r27.u8);
	// rlwimi r9,r11,2,27,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwinm r11,r10,0,6,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC3FFFFFF;
	// rlwinm r9,r9,2,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x70;
	// addi r28,r31,228
	ctx.r28.s64 = ctx.r31.s64 + 228;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r8,23,0,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0xFF800000;
	// li r9,0
	ctx.r9.s64 = 0;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,276
	ctx.r6.s64 = ctx.r1.s64 + 276;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822474c0
	ctx.lr = 0x82242104;
	sub_822474C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822422b4
	if (ctx.cr0.lt) goto loc_822422B4;
	// addi r27,r31,240
	ctx.r27.s64 = ctx.r31.s64 + 240;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,276
	ctx.r6.s64 = ctx.r1.s64 + 276;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82246a60
	ctx.lr = 0x82242134;
	sub_82246A60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822422b4
	if (ctx.cr0.lt) goto loc_822422B4;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82242154
	if (!ctx.cr6.gt) goto loc_82242154;
loc_82242148:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x822422b4
	goto loc_822422B4;
loc_82242154:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b730
	ctx.lr = 0x82242164;
	sub_8223B730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822422b4
	if (ctx.cr0.lt) goto loc_822422B4;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// add r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 + ctx.r11.u64;
	// subf r11,r23,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r23.s64;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// beq cr6,0x822421a4
	if (ctx.cr6.eq) goto loc_822421A4;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82248008
	ctx.lr = 0x82242198;
	sub_82248008(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822422b4
	if (ctx.cr0.lt) goto loc_822422B4;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
loc_822421A4:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// add r10,r22,r4
	ctx.r10.u64 = ctx.r22.u64 + ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// stw r10,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
loc_822421BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822421e8
	if (ctx.cr6.eq) goto loc_822421E8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82247318
	ctx.lr = 0x822421D8;
	sub_82247318(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822469a8
	ctx.lr = 0x822421E8;
	sub_822469A8(ctx, base);
loc_822421E8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x822421bc
	if (ctx.cr6.lt) goto loc_822421BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fff8
	ctx.lr = 0x82242200;
	sub_8223FFF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822422b4
	if (ctx.cr0.lt) goto loc_822422B4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8224224c
	if (ctx.cr6.lt) goto loc_8224224C;
	// beq cr6,0x82242240
	if (ctx.cr6.eq) goto loc_82242240;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82242238
	if (!ctx.cr6.eq) goto loc_82242238;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82242238
	if (ctx.cr6.eq) goto loc_82242238;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242240
	if (!ctx.cr0.eq) goto loc_82242240;
loc_82242238:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82242244
	goto loc_82242244;
loc_82242240:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82242244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b560
	ctx.lr = 0x8224224C;
	sub_8223B560(ctx, base);
loc_8224224C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x822422b0
	if (!ctx.cr6.eq) goto loc_822422B0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82242280
	if (ctx.cr6.eq) goto loc_82242280;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822472c8
	ctx.lr = 0x82242268;
	sub_822472C8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822422b0
	if (ctx.cr0.eq) goto loc_822422B0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x822422a8
	goto loc_822422A8;
loc_82242280:
	// rlwinm. r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822422b0
	if (ctx.cr0.eq) goto loc_822422B0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82246958
	ctx.lr = 0x82242294;
	sub_82246958(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822422b0
	if (ctx.cr0.eq) goto loc_822422B0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_822422A8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822422B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822422B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822422B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822422BC"))) PPC_WEAK_FUNC(sub_822422BC);
PPC_FUNC_IMPL(__imp__sub_822422BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822422C0"))) PPC_WEAK_FUNC(sub_822422C0);
PPC_FUNC_IMPL(__imp__sub_822422C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822422C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242308
	if (ctx.cr6.eq) goto loc_82242308;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,14560
	ctx.r10.s64 = ctx.r10.s64 + 14560;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82242308
	if (ctx.cr6.eq) goto loc_82242308;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,1960
	ctx.r10.s64 = ctx.r10.s64 + 1960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82242308
	if (ctx.cr6.eq) goto loc_82242308;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x822423dc
	goto loc_822423DC;
loc_82242308:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b560
	ctx.lr = 0x82242314;
	sub_8223B560(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822423cc
	if (ctx.cr6.eq) goto loc_822423CC;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822423bc
	if (!ctx.cr6.eq) goto loc_822423BC;
	// std r29,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r29.u64);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r29,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r29.u64);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5c58
	ctx.lr = 0x82242380;
	sub_825E5C58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822423ac
	if (ctx.cr0.eq) goto loc_822423AC;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x822423ac
	if (ctx.cr6.eq) goto loc_822423AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x82242398;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822423dc
	if (ctx.cr0.lt) goto loc_822423DC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822423dc
	goto loc_822423DC;
loc_822423AC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,19232
	ctx.r11.s64 = ctx.r11.s64 + 19232;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x822423d8
	goto loc_822423D8;
loc_822423BC:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x822423d8
	goto loc_822423D8;
loc_822423CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244b20
	ctx.lr = 0x822423D8;
	sub_82244B20(ctx, base);
loc_822423D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822423DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822423E4"))) PPC_WEAK_FUNC(sub_822423E4);
PPC_FUNC_IMPL(__imp__sub_822423E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822423E8"))) PPC_WEAK_FUNC(sub_822423E8);
PPC_FUNC_IMPL(__imp__sub_822423E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x822423F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8224241c
	if (!ctx.cr6.lt) goto loc_8224241C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x8224270c
	goto loc_8224270C;
loc_8224241C:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82242434
	if (!ctx.cr6.eq) goto loc_82242434;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,1235
	ctx.r31.u64 = ctx.r31.u64 | 1235;
	// b 0x8224270c
	goto loc_8224270C;
loc_82242434:
	// lwz r10,724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82242494
	if (!ctx.cr0.eq) goto loc_82242494;
	// li r3,260
	ctx.r3.s64 = 260;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x82247a78
	ctx.lr = 0x8224244C;
	sub_82247A78(ctx, base);
	// stw r28,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223ea50
	ctx.lr = 0x82242464;
	sub_8223EA50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822426fc
	if (ctx.cr0.lt) goto loc_822426FC;
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82242744
	if (ctx.cr0.eq) goto loc_82242744;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82242488;
	sub_8223FFF8(ctx, base);
loc_82242488:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822426fc
	if (ctx.cr0.lt) goto loc_822426FC;
	// b 0x82242744
	goto loc_82242744;
loc_82242494:
	// lwz r10,248(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r29,r30,248
	ctx.r29.s64 = ctx.r30.s64 + 248;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8224259c
	if (ctx.cr6.eq) goto loc_8224259C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8224259c
	if (ctx.cr0.eq) goto loc_8224259C;
loc_822424B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r31,-92
	ctx.r6.s64 = ctx.r31.s64 + -92;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822424c8
	if (ctx.cr6.eq) goto loc_822424C8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_822424C8:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r3,16(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82242544
	if (ctx.cr6.eq) goto loc_82242544;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
loc_822424E8:
	// lwz r7,-4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82242530
	if (ctx.cr6.eq) goto loc_82242530;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82242500:
	// ld r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r27,r3
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x82242520
	if (ctx.cr6.eq) goto loc_82242520;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82242500
	if (ctx.cr6.lt) goto loc_82242500;
	// b 0x82242530
	goto loc_82242530;
loc_82242520:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stdx r28,r11,r8
	PPC_STORE_U64(ctx.r11.u32 + ctx.r8.u32, ctx.r28.u64);
loc_82242530:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// bne 0x822424e8
	if (!ctx.cr0.eq) goto loc_822424E8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82242590
	if (!ctx.cr6.eq) goto loc_82242590;
loc_82242544:
	// lwz r11,396(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242600
	if (!ctx.cr0.eq) goto loc_82242600;
	// lwz r10,92(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// lwz r9,96(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,96(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r9,92(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r11.u32);
	// stw r11,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r11.u32);
	// stw r8,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r8.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82242590:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822424b0
	if (!ctx.cr6.eq) goto loc_822424B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8224259C:
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822425f0
	if (ctx.cr6.eq) goto loc_822425F0;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
loc_822425B4:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822425e4
	if (ctx.cr6.eq) goto loc_822425E4;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_822425C8:
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// bne cr6,0x8224260c
	if (!ctx.cr6.eq) goto loc_8224260C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822425c8
	if (ctx.cr6.lt) goto loc_822425C8;
loc_822425E4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bne 0x822425b4
	if (!ctx.cr0.eq) goto loc_822425B4;
loc_822425F0:
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x822425F8;
	sub_82247A78(ctx, base);
	// stw r28,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r28.u32);
	// b 0x82242680
	goto loc_82242680;
loc_82242600:
	// lis r31,-32747
	ctx.r31.s64 = -2146107392;
	// ori r31,r31,10
	ctx.r31.u64 = ctx.r31.u64 | 10;
	// b 0x822426fc
	goto loc_822426FC;
loc_8224260C:
	// lis r31,-32747
	ctx.r31.s64 = -2146107392;
	// ori r31,r31,10
	ctx.r31.u64 = ctx.r31.u64 | 10;
	// b 0x82242700
	goto loc_82242700;
loc_82242618:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8224262c
	if (!ctx.cr6.eq) goto loc_8224262C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82242650
	goto loc_82242650;
loc_8224262C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82242650:
	// addi r31,r11,-92
	ctx.r31.s64 = ctx.r11.s64 + -92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223ce50
	ctx.lr = 0x82242660;
	sub_8223CE50(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242680
	if (!ctx.cr0.eq) goto loc_82242680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245d28
	ctx.lr = 0x82242678;
	sub_82245D28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822426fc
	if (ctx.cr0.lt) goto loc_822426FC;
loc_82242680:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82242618
	if (!ctx.cr6.eq) goto loc_82242618;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223ea50
	ctx.lr = 0x822426A4;
	sub_8223EA50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822426fc
	if (ctx.cr0.lt) goto loc_822426FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822422c0
	ctx.lr = 0x822426B4;
	sub_822422C0(ctx, base);
	// b 0x82242488
	goto loc_82242488;
loc_822426B8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822426cc
	if (!ctx.cr6.eq) goto loc_822426CC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x822426f0
	goto loc_822426F0;
loc_822426CC:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822426F0:
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223ce50
	ctx.lr = 0x822426FC;
	sub_8223CE50(ctx, base);
loc_822426FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82242700:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822426b8
	if (!ctx.cr6.eq) goto loc_822426B8;
loc_8224270C:
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82242724
	if (ctx.cr6.eq) goto loc_82242724;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x82242720;
	sub_82247A78(ctx, base);
	// stw r28,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r28.u32);
loc_82242724:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82242744
	if (ctx.cr6.eq) goto loc_82242744;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82244748
	ctx.lr = 0x82242744;
	sub_82244748(ctx, base);
loc_82242744:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224274C"))) PPC_WEAK_FUNC(sub_8224274C);
PPC_FUNC_IMPL(__imp__sub_8224274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242750"))) PPC_WEAK_FUNC(sub_82242750);
PPC_FUNC_IMPL(__imp__sub_82242750) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// bne cr6,0x82242838
	if (!ctx.cr6.eq) goto loc_82242838;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82242788:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,42
	ctx.r10.s64 = ctx.r10.s64 + 42;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82242788
	if (!ctx.cr0.eq) goto loc_82242788;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241488
	ctx.lr = 0x822427BC;
	sub_82241488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242838
	if (ctx.cr0.lt) goto loc_82242838;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224286c
	if (ctx.cr0.eq) goto loc_8224286C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822427ec
	if (ctx.cr6.eq) goto loc_822427EC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822427ec
	if (ctx.cr6.eq) goto loc_822427EC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8224286c
	if (!ctx.cr6.eq) goto loc_8224286C;
loc_822427EC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x822479a8
	ctx.lr = 0x822427FC;
	sub_822479A8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r4,396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x8223d770
	ctx.lr = 0x82242830;
	sub_8223D770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224286c
	if (!ctx.cr0.lt) goto loc_8224286C;
loc_82242838:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242868
	if (!ctx.cr0.eq) goto loc_82242868;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82247980
	ctx.lr = 0x82242850;
	sub_82247980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224286c
	if (ctx.cr0.lt) goto loc_8224286C;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// b 0x8224286c
	goto loc_8224286C;
loc_82242868:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224286C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82242884"))) PPC_WEAK_FUNC(sub_82242884);
PPC_FUNC_IMPL(__imp__sub_82242884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242888"))) PPC_WEAK_FUNC(sub_82242888);
PPC_FUNC_IMPL(__imp__sub_82242888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82242890;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r11.u32);
	// lwz r31,20(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82242954
	if (ctx.cr6.eq) goto loc_82242954;
	// addi r28,r30,256
	ctx.r28.s64 = ctx.r30.s64 + 256;
loc_822428B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223cf00
	ctx.lr = 0x822428CC;
	sub_8223CF00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248e90
	ctx.lr = 0x822428D4;
	sub_82248E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82247f48
	ctx.lr = 0x822428E8;
	sub_82247F48(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242904
	if (ctx.cr0.eq) goto loc_82242904;
	// lbz r11,171(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r30)
	PPC_STORE_U8(ctx.r30.u32 + 171, ctx.r11.u8);
	// b 0x82242910
	goto loc_82242910;
loc_82242904:
	// lbz r11,170(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r30)
	PPC_STORE_U8(ctx.r30.u32 + 170, ctx.r11.u8);
loc_82242910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249808
	ctx.lr = 0x82242918;
	sub_82249808(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822428b8
	if (!ctx.cr6.eq) goto loc_822428B8;
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82242948
	if (!ctx.cr0.eq) goto loc_82242948;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242948
	if (ctx.cr0.eq) goto loc_82242948;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241368
	ctx.lr = 0x82242948;
	sub_82241368(ctx, base);
loc_82242948:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8223b620
	ctx.lr = 0x82242954;
	sub_8223B620(ctx, base);
loc_82242954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224295C"))) PPC_WEAK_FUNC(sub_8224295C);
PPC_FUNC_IMPL(__imp__sub_8224295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242960"))) PPC_WEAK_FUNC(sub_82242960);
PPC_FUNC_IMPL(__imp__sub_82242960) {
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
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// ori r4,r4,1235
	ctx.r4.u64 = ctx.r4.u64 | 1235;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223f6c8
	ctx.lr = 0x8224298C;
	sub_8223F6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241300
	ctx.lr = 0x82242994;
	sub_82241300(ctx, base);
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

__attribute__((alias("__imp__sub_822429A8"))) PPC_WEAK_FUNC(sub_822429A8);
PPC_FUNC_IMPL(__imp__sub_822429A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822429fc
	if (ctx.cr6.eq) goto loc_822429FC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822429f0
	if (!ctx.cr6.eq) goto loc_822429F0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822429f0
	if (ctx.cr6.eq) goto loc_822429F0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822429fc
	if (!ctx.cr0.eq) goto loc_822429FC;
loc_822429F0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x82242c1c
	goto loc_82242C1C;
loc_822429FC:
	// addi r11,r4,95
	ctx.r11.s64 = ctx.r4.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82242a34
	if (ctx.cr6.eq) goto loc_82242A34;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242a2c
	if (ctx.cr0.eq) goto loc_82242A2C;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x82242c1c
	goto loc_82242C1C;
loc_82242A2C:
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82242c1c
	goto loc_82242C1C;
loc_82242A34:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// slw r30,r11,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223cd80
	ctx.lr = 0x82242A54;
	sub_8223CD80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242c1c
	if (ctx.cr0.lt) goto loc_82242C1C;
	// lbz r11,170(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82242a80
	if (ctx.cr6.lt) goto loc_82242A80;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,20994
	ctx.r3.u64 = ctx.r3.u64 | 20994;
	// b 0x82242c1c
	goto loc_82242C1C;
loc_82242A80:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82242A8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82242aa8
	if (ctx.cr6.eq) goto loc_82242AA8;
	// lwz r7,88(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82242aa8
	if (!ctx.cr6.eq) goto loc_82242AA8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82242AA8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82242a8c
	if (!ctx.cr0.eq) goto loc_82242A8C;
	// lwz r11,396(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r8,r11,4,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82242ad8
	if (ctx.cr0.eq) goto loc_82242AD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82242ad8
	if (ctx.cr6.eq) goto loc_82242AD8;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,21001
	ctx.r3.u64 = ctx.r3.u64 | 21001;
	// b 0x82242c1c
	goto loc_82242C1C;
loc_82242AD8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,254
	ctx.r6.s64 = 254;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f990
	ctx.lr = 0x82242AF0;
	sub_8223F990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242c1c
	if (ctx.cr0.lt) goto loc_82242C1C;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242b3c
	if (ctx.cr6.eq) goto loc_82242B3C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e58e0
	ctx.lr = 0x82242B18;
	sub_825E58E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82242b3c
	if (ctx.cr0.eq) goto loc_82242B3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82242B28;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242c1c
	if (ctx.cr0.lt) goto loc_82242C1C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82242c1c
	goto loc_82242C1C;
loc_82242B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223eb00
	ctx.lr = 0x82242B44;
	sub_8223EB00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242c1c
	if (ctx.cr0.lt) goto loc_82242C1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82242B5C;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242c1c
	if (ctx.cr0.lt) goto loc_82242C1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f2e8
	ctx.lr = 0x82242B70;
	sub_8223F2E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242c1c
	if (ctx.cr0.lt) goto loc_82242C1C;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242ba4
	if (ctx.cr6.eq) goto loc_82242BA4;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// b 0x82242c18
	goto loc_82242C18;
loc_82242BA4:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82238518
	ctx.lr = 0x82242BB0;
	sub_82238518(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82247e90
	ctx.lr = 0x82242BCC;
	sub_82247E90(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// addi r10,r10,95
	ctx.r10.s64 = ctx.r10.s64 + 95;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242C18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82242C1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82242C34"))) PPC_WEAK_FUNC(sub_82242C34);
PPC_FUNC_IMPL(__imp__sub_82242C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242C38"))) PPC_WEAK_FUNC(sub_82242C38);
PPC_FUNC_IMPL(__imp__sub_82242C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82242C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242c64
	if (!ctx.cr0.eq) goto loc_82242C64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x82242d28
	goto loc_82242D28;
loc_82242C64:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82242d20
	if (ctx.cr6.lt) goto loc_82242D20;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x82242d20
	if (ctx.cr6.gt) goto loc_82242D20;
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246858
	ctx.lr = 0x82242C88;
	sub_82246858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242d28
	if (ctx.cr0.lt) goto loc_82242D28;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82242d28
	if (ctx.cr6.eq) goto loc_82242D28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82246958
	ctx.lr = 0x82242CA4;
	sub_82246958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,380
	ctx.r28.s64 = ctx.r31.s64 + 380;
loc_82242CB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242ccc
	if (ctx.cr6.eq) goto loc_82242CCC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246728
	ctx.lr = 0x82242CCC;
	sub_82246728(ctx, base);
loc_82242CCC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82242cb0
	if (ctx.cr6.lt) goto loc_82242CB0;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242d00
	if (ctx.cr6.eq) goto loc_82242D00;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82242CF8;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82242d28
	if (ctx.cr0.lt) goto loc_82242D28;
loc_82242D00:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82242d28
	goto loc_82242D28;
loc_82242D20:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
loc_82242D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242D30"))) PPC_WEAK_FUNC(sub_82242D30);
PPC_FUNC_IMPL(__imp__sub_82242D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82242D38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242d5c
	if (!ctx.cr0.eq) goto loc_82242D5C;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,1314
	ctx.r27.u64 = ctx.r27.u64 | 1314;
	// b 0x82242e1c
	goto loc_82242E1C;
loc_82242D5C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82242e14
	if (ctx.cr6.lt) goto loc_82242E14;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x82242e14
	if (ctx.cr6.gt) goto loc_82242E14;
	// addi r30,r31,228
	ctx.r30.s64 = ctx.r31.s64 + 228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246f80
	ctx.lr = 0x82242D80;
	sub_82246F80(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82242e1c
	if (ctx.cr0.lt) goto loc_82242E1C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82242e1c
	if (ctx.cr6.eq) goto loc_82242E1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822472c8
	ctx.lr = 0x82242D9C;
	sub_822472C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,380
	ctx.r28.s64 = ctx.r31.s64 + 380;
loc_82242DA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242dc4
	if (ctx.cr6.eq) goto loc_82242DC4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82246b98
	ctx.lr = 0x82242DC4;
	sub_82246B98(ctx, base);
loc_82242DC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82242da8
	if (ctx.cr6.lt) goto loc_82242DA8;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242df8
	if (ctx.cr6.eq) goto loc_82242DF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82242DF0;
	sub_82241368(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82242e1c
	if (ctx.cr0.lt) goto loc_82242E1C;
loc_82242DF8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82242e1c
	goto loc_82242E1C;
loc_82242E14:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,1609
	ctx.r27.u64 = ctx.r27.u64 | 1609;
loc_82242E1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242E28"))) PPC_WEAK_FUNC(sub_82242E28);
PPC_FUNC_IMPL(__imp__sub_82242E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82242E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,4097
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4097, ctx.xer);
	// bgt cr6,0x822435a4
	if (ctx.cr6.gt) goto loc_822435A4;
	// beq cr6,0x8224359c
	if (ctx.cr6.eq) goto loc_8224359C;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bgt cr6,0x822435c4
	if (ctx.cr6.gt) goto loc_822435C4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27968
	ctx.r12.s64 = ctx.r12.s64 + -27968;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// addi r12,r12,11904
	ctx.r12.s64 = ctx.r12.s64 + 11904;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82242E80;
	case 1:
		goto loc_82242ED8;
	case 2:
		goto loc_82242F60;
	case 3:
		goto loc_822435C4;
	case 4:
		goto loc_822435C4;
	case 5:
		goto loc_822435C4;
	case 6:
		goto loc_82242FE8;
	case 7:
		goto loc_82243078;
	case 8:
		goto loc_82243108;
	case 9:
		goto loc_82243198;
	case 10:
		goto loc_82243250;
	case 11:
		goto loc_82243268;
	case 12:
		goto loc_822435C4;
	case 13:
		goto loc_822435C4;
	case 14:
		goto loc_822432A8;
	case 15:
		goto loc_822432D8;
	case 16:
		goto loc_822432E4;
	case 17:
		goto loc_82243394;
	case 18:
		goto loc_82243408;
	case 19:
		goto loc_82243464;
	case 20:
		goto loc_82243464;
	case 21:
		goto loc_822434FC;
	case 22:
		goto loc_82243464;
	case 23:
		goto loc_82243464;
	case 24:
		goto loc_8224355C;
	case 25:
		goto loc_8224355C;
	default:
		__builtin_unreachable();
	}
loc_82242E80:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82242ebc
	if (ctx.cr6.eq) goto loc_82242EBC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822431d0
	if (!ctx.cr6.eq) goto loc_822431D0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8222e840
	ctx.lr = 0x82242EA4;
	sub_8222E840(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8224360c
	if (!ctx.cr0.eq) goto loc_8224360C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82243610
	goto loc_82243610;
loc_82242EBC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// bl 0x823c5b68
	ctx.lr = 0x82242ECC;
	sub_823C5B68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8224360c
	goto loc_8224360C;
loc_82242ED8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82242f4c
	if (ctx.cr6.eq) goto loc_82242F4C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82242f04
	if (ctx.cr6.eq) goto loc_82242F04;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82242f04
	if (ctx.cr6.eq) goto loc_82242F04;
loc_82242EF8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x82243610
	goto loc_82243610;
loc_82242F04:
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243274
	if (ctx.cr0.eq) goto loc_82243274;
	// lbz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// lbz r10,170(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82242fa4
	if (ctx.cr6.lt) goto loc_82242FA4;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82242F3C;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224360c
	if (!ctx.cr0.lt) goto loc_8224360C;
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// b 0x82243610
	goto loc_82243610;
loc_82242F4C:
	// lbz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// b 0x8224360c
	goto loc_8224360C;
loc_82242F60:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82242fd4
	if (ctx.cr6.eq) goto loc_82242FD4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82242f80
	if (ctx.cr6.eq) goto loc_82242F80;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82242ef8
	if (!ctx.cr6.eq) goto loc_82242EF8;
loc_82242F80:
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243274
	if (ctx.cr0.eq) goto loc_82243274;
	// lbz r30,169(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// lbz r10,171(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82242fb0
	if (!ctx.cr6.lt) goto loc_82242FB0;
loc_82242FA4:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,20994
	ctx.r3.u64 = ctx.r3.u64 | 20994;
	// b 0x82243610
	goto loc_82243610;
loc_82242FB0:
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82242FC4;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224360c
	if (!ctx.cr0.lt) goto loc_8224360C;
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// b 0x82243610
	goto loc_82243610;
loc_82242FD4:
	// lbz r10,169(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
	// b 0x8224360c
	goto loc_8224360C;
loc_82242FE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82242ef8
	if (!ctx.cr6.eq) goto loc_82242EF8;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243018
	if (ctx.cr6.eq) goto loc_82243018;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8224301c
	if (!ctx.cr6.eq) goto loc_8224301C;
loc_82243018:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8224301C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82243030
	if (ctx.cr6.eq) goto loc_82243030;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82243034
	if (!ctx.cr6.eq) goto loc_82243034;
loc_82243030:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82243034:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82243054
	if (ctx.cr6.eq) goto loc_82243054;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82247b38
	ctx.lr = 0x8224304C;
	sub_82247B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243610
	if (ctx.cr0.lt) goto loc_82243610;
loc_82243054:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82243070
	if (!ctx.cr6.eq) goto loc_82243070;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243070
	if (ctx.cr0.eq) goto loc_82243070;
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82243070:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x8224360c
	goto loc_8224360C;
loc_82243078:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243090
	if (ctx.cr6.eq) goto loc_82243090;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243274
	if (ctx.cr0.eq) goto loc_82243274;
loc_82243090:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822430d8
	if (ctx.cr6.eq) goto loc_822430D8;
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x822430C4;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82243610
	if (!ctx.cr0.lt) goto loc_82243610;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// b 0x8224338c
	goto loc_8224338C;
loc_822430D8:
	// beq 0x822431d0
	if (ctx.cr0.eq) goto loc_822431D0;
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x822430F4;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82243610
	if (!ctx.cr0.lt) goto loc_82243610;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// b 0x8224338c
	goto loc_8224338C;
loc_82243108:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243120
	if (ctx.cr6.eq) goto loc_82243120;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243274
	if (ctx.cr0.eq) goto loc_82243274;
loc_82243120:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82243168
	if (ctx.cr6.eq) goto loc_82243168;
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82243154;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82243610
	if (!ctx.cr0.lt) goto loc_82243610;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// b 0x8224338c
	goto loc_8224338C;
loc_82243168:
	// beq 0x822431d0
	if (ctx.cr0.eq) goto loc_822431D0;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82243184;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82243610
	if (!ctx.cr0.lt) goto loc_82243610;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// b 0x8224338c
	goto loc_8224338C;
loc_82243198:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822431b0
	if (ctx.cr6.eq) goto loc_822431B0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243274
	if (ctx.cr0.eq) goto loc_82243274;
loc_822431B0:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822431c4
	if (!ctx.cr0.eq) goto loc_822431C4;
	// rlwinm r30,r11,7,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x2;
loc_822431C4:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x822431d8
	if (!ctx.cr6.eq) goto loc_822431D8;
loc_822431D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82243610
	goto loc_82243610;
loc_822431D8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822431fc
	if (ctx.cr6.eq) goto loc_822431FC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822431f0
	if (ctx.cr6.eq) goto loc_822431F0;
	// rlwinm r11,r11,0,6,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF3FFFFFF;
	// b 0x82243204
	goto loc_82243204;
loc_822431F0:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,26,4,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xC000000) | (ctx.r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// b 0x82243204
	goto loc_82243204;
loc_822431FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,27,4,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0xC000000) | (ctx.r11.u64 & 0xFFFFFFFFF3FFFFFF);
loc_82243204:
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x82243218;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82243610
	if (!ctx.cr0.lt) goto loc_82243610;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,28,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,0,6,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF3FFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8224338c
	goto loc_8224338C;
loc_82243250:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8224360c
	goto loc_8224360C;
loc_82243268:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243280
	if (!ctx.cr0.eq) goto loc_82243280;
loc_82243274:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x82243610
	goto loc_82243610;
loc_82243280:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b730
	ctx.lr = 0x8224328C;
	sub_8223B730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243610
	if (ctx.cr0.lt) goto loc_82243610;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241368
	ctx.lr = 0x822432A4;
	sub_82241368(ctx, base);
	// b 0x82243610
	goto loc_82243610;
loc_822432A8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822432cc
	if (ctx.cr6.eq) goto loc_822432CC;
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
loc_822432C4:
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x8224360c
	goto loc_8224360C;
loc_822432CC:
	// beq 0x822431d0
	if (ctx.cr0.eq) goto loc_822431D0;
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// b 0x822432c4
	goto loc_822432C4;
loc_822432D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82243610
	goto loc_82243610;
loc_822432E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82242ef8
	if (ctx.cr6.eq) goto loc_82242EF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8224334c
	if (ctx.cr6.eq) goto loc_8224334C;
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// beq cr6,0x8224360c
	if (ctx.cr6.eq) goto loc_8224360C;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x82243338;
	sub_822479F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224360c
	if (!ctx.cr0.lt) goto loc_8224360C;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// b 0x8224338c
	goto loc_8224338C;
loc_8224334C:
	// beq 0x822431d0
	if (ctx.cr0.eq) goto loc_822431D0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// beq cr6,0x8224360c
	if (ctx.cr6.eq) goto loc_8224360C;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x8224337C;
	sub_822479F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224360c
	if (!ctx.cr0.lt) goto loc_8224360C;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
loc_8224338C:
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x82243610
	goto loc_82243610;
loc_82243394:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82242ef8
	if (!ctx.cr6.eq) goto loc_82242EF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// blt cr6,0x822433dc
	if (ctx.cr6.lt) goto loc_822433DC;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822433cc
	if (ctx.cr6.eq) goto loc_822433CC;
	// bne 0x822433c4
	if (!ctx.cr0.eq) goto loc_822433C4;
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822431d0
	if (ctx.cr0.eq) goto loc_822431D0;
loc_822433C4:
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// b 0x822432c4
	goto loc_822432C4;
loc_822433CC:
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,15,16,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 15) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// b 0x822432c4
	goto loc_822432C4;
loc_822433DC:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822433fc
	if (!ctx.cr6.eq) goto loc_822433FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
	// b 0x82243610
	goto loc_82243610;
loc_822433FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// b 0x822432c4
	goto loc_822432C4;
loc_82243408:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82242ef8
	if (!ctx.cr6.eq) goto loc_82242EF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// blt cr6,0x82243450
	if (ctx.cr6.lt) goto loc_82243450;
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82243440
	if (ctx.cr6.eq) goto loc_82243440;
	// bne 0x82243438
	if (!ctx.cr0.eq) goto loc_82243438;
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822431d0
	if (ctx.cr0.eq) goto loc_822431D0;
loc_82243438:
	// rlwinm r11,r11,0,20,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// b 0x822432c4
	goto loc_822432C4;
loc_82243440:
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,13,18,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// b 0x822432c4
	goto loc_822432C4;
loc_82243450:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822431d0
	if (!ctx.cr0.eq) goto loc_822431D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,18,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// b 0x822432c4
	goto loc_822432C4;
loc_82243464:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8224347c
	if (!ctx.cr6.eq) goto loc_8224347C;
	// addi r30,r31,532
	ctx.r30.s64 = ctx.r31.s64 + 532;
	// li r11,18
	ctx.r11.s64 = 18;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82243490
	goto loc_82243490;
loc_8224347C:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x822434e4
	if (!ctx.cr6.eq) goto loc_822434E4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82243488:
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r30,r31,544
	ctx.r30.s64 = ctx.r31.s64 + 544;
loc_82243490:
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x822435c4
	if (ctx.cr6.lt) goto loc_822435C4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822435c4
	if (ctx.cr6.gt) goto loc_822435C4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822434dc
	if (ctx.cr6.eq) goto loc_822434DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b4e0
	ctx.lr = 0x822434D4;
	sub_8223B4E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243610
	if (ctx.cr0.lt) goto loc_82243610;
loc_822434DC:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x8224360c
	goto loc_8224360C;
loc_822434E4:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82243488
	if (!ctx.cr6.eq) goto loc_82243488;
	// addi r30,r31,540
	ctx.r30.s64 = ctx.r31.s64 + 540;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82243490
	goto loc_82243490;
loc_822434FC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x822435c4
	if (ctx.cr6.lt) goto loc_822435C4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822435c4
	if (ctx.cr6.gt) goto loc_822435C4;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822431d0
	if (ctx.cr6.eq) goto loc_822431D0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243554
	if (ctx.cr6.eq) goto loc_82243554;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x82243548;
	sub_822479F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243610
	if (ctx.cr0.lt) goto loc_82243610;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82243554:
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// b 0x8224360c
	goto loc_8224360C;
loc_8224355C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82242ef8
	if (!ctx.cr6.eq) goto loc_82242EF8;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82243580
	if (ctx.cr6.eq) goto loc_82243580;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82243584
	if (!ctx.cr6.eq) goto loc_82243584;
loc_82243580:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82243584:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82247ce0
	ctx.lr = 0x82243598;
	sub_82247CE0(ctx, base);
	// b 0x82243610
	goto loc_82243610;
loc_8224359C:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x822435ec
	goto loc_822435EC;
loc_822435A4:
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// beq cr6,0x822435e8
	if (ctx.cr6.eq) goto loc_822435E8;
	// cmpwi cr6,r11,4099
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4099, ctx.xer);
	// beq cr6,0x822435e0
	if (ctx.cr6.eq) goto loc_822435E0;
	// cmpwi cr6,r11,4100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4100, ctx.xer);
	// beq cr6,0x822435d8
	if (ctx.cr6.eq) goto loc_822435D8;
	// cmpwi cr6,r11,4101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4101, ctx.xer);
	// beq cr6,0x822435d0
	if (ctx.cr6.eq) goto loc_822435D0;
loc_822435C4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82243610
	goto loc_82243610;
loc_822435D0:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x822435ec
	goto loc_822435EC;
loc_822435D8:
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x822435ec
	goto loc_822435EC;
loc_822435E0:
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x822435ec
	goto loc_822435EC;
loc_822435E8:
	// li r6,2
	ctx.r6.s64 = 2;
loc_822435EC:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822479f0
	ctx.lr = 0x82243604;
	sub_822479F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243610
	if (ctx.cr0.lt) goto loc_82243610;
loc_8224360C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82243610:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243618"))) PPC_WEAK_FUNC(sub_82243618);
PPC_FUNC_IMPL(__imp__sub_82243618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82243620;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-664(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -664);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243660
	if (ctx.cr6.eq) goto loc_82243660;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,183
	ctx.r30.u64 = ctx.r30.u64 | 183;
	// b 0x82243718
	goto loc_82243718;
loc_82243660:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224b420
	ctx.lr = 0x82243668;
	sub_8224B420(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822436fc
	if (ctx.cr0.lt) goto loc_822436FC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8223dd30
	ctx.lr = 0x82243688;
	sub_8223DD30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822436a8
	if (ctx.cr0.eq) goto loc_822436A8;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8222e840
	ctx.lr = 0x8224369C;
	sub_8222E840(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822436b4
	if (!ctx.cr0.eq) goto loc_822436B4;
loc_822436A8:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x822436dc
	goto loc_822436DC;
loc_822436B4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822436c8
	if (ctx.cr6.eq) goto loc_822436C8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bne cr6,0x822436cc
	if (!ctx.cr6.eq) goto loc_822436CC;
loc_822436C8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_822436CC:
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82247ca8
	ctx.lr = 0x822436D4;
	sub_82247CA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82243710
	if (!ctx.cr0.lt) goto loc_82243710;
loc_822436DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822436fc
	if (ctx.cr6.eq) goto loc_822436FC;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82241300
	ctx.lr = 0x822436F8;
	sub_82241300(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_822436FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243718
	if (ctx.cr6.eq) goto loc_82243718;
	// bl 0x8224b2a0
	ctx.lr = 0x8224370C;
	sub_8224B2A0(ctx, base);
	// b 0x82243718
	goto loc_82243718;
loc_82243710:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r31,-664(r25)
	PPC_STORE_U32(ctx.r25.u32 + -664, ctx.r31.u32);
loc_82243718:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243728"))) PPC_WEAK_FUNC(sub_82243728);
PPC_FUNC_IMPL(__imp__sub_82243728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82243730;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243784
	if (ctx.cr6.eq) goto loc_82243784;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,14560
	ctx.r10.s64 = ctx.r10.s64 + 14560;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82243764
	if (ctx.cr6.eq) goto loc_82243764;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,1960
	ctx.r10.s64 = ctx.r10.s64 + 1960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82243778
	if (!ctx.cr6.eq) goto loc_82243778;
loc_82243764:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x82243864
	goto loc_82243864;
loc_82243778:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x82243864
	goto loc_82243864;
loc_82243784:
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e5b80
	ctx.lr = 0x822437A0;
	sub_825E5B80(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x822437bc
	if (ctx.cr6.eq) goto loc_822437BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x822437B0;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243864
	if (ctx.cr0.lt) goto loc_82243864;
	// b 0x822437c8
	goto loc_822437C8;
loc_822437BC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822437d4
	if (!ctx.cr6.eq) goto loc_822437D4;
loc_822437C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82243864
	goto loc_82243864;
loc_822437D4:
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a60
	ctx.lr = 0x822437DC;
	sub_82247A60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// bne 0x822437f4
	if (!ctx.cr0.eq) goto loc_822437F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82243864
	goto loc_82243864;
loc_822437F4:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r29,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r29.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r29,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r29.u64);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// ld r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5b80
	ctx.lr = 0x82243828;
	sub_825E5B80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82243854
	if (ctx.cr0.eq) goto loc_82243854;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82243854
	if (ctx.cr6.eq) goto loc_82243854;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x82243840;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243864
	if (ctx.cr0.lt) goto loc_82243864;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82243864
	goto loc_82243864;
loc_82243854:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,9192
	ctx.r11.s64 = ctx.r11.s64 + 9192;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_82243864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224386C"))) PPC_WEAK_FUNC(sub_8224386C);
PPC_FUNC_IMPL(__imp__sub_8224386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243870"))) PPC_WEAK_FUNC(sub_82243870);
PPC_FUNC_IMPL(__imp__sub_82243870) {
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
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// b 0x8224388c
	goto loc_8224388C;
loc_82243884:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8224388C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82243884
	if (!ctx.cr0.eq) goto loc_82243884;
loc_82243894:
	// lwz r11,396(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,396(r4)
	PPC_STORE_U32(ctx.r4.u32 + 396, ctx.r11.u32);
	// lwz r4,88(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82243894
	if (!ctx.cr6.eq) goto loc_82243894;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// bne 0x822438c8
	if (!ctx.cr0.eq) goto loc_822438C8;
	// bl 0x82243728
	ctx.lr = 0x822438C0;
	sub_82243728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822438cc
	if (ctx.cr0.lt) goto loc_822438CC;
loc_822438C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822438CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822438DC"))) PPC_WEAK_FUNC(sub_822438DC);
PPC_FUNC_IMPL(__imp__sub_822438DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822438E0"))) PPC_WEAK_FUNC(sub_822438E0);
PPC_FUNC_IMPL(__imp__sub_822438E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243a78
	if (ctx.cr0.eq) goto loc_82243A78;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// beq cr6,0x82243a64
	if (ctx.cr6.eq) goto loc_82243A64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82243a20
	if (ctx.cr6.eq) goto loc_82243A20;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r11,r31,524
	ctx.r11.s64 = ctx.r31.s64 + 524;
	// beq cr6,0x822439d4
	if (ctx.cr6.eq) goto loc_822439D4;
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82243a78
	if (!ctx.cr6.eq) goto loc_82243A78;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5830
	ctx.lr = 0x82243964;
	sub_825E5830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822439c4
	if (ctx.cr0.eq) goto loc_822439C4;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x822439c4
	if (ctx.cr6.eq) goto loc_822439C4;
loc_82243974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x8224397C;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224398c
	if (ctx.cr0.lt) goto loc_8224398C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8224398C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822439ac
	if (ctx.cr6.eq) goto loc_822439AC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244748
	ctx.lr = 0x822439AC;
	sub_82244748(ctx, base);
loc_822439AC:
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
loc_822439C4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,-656
	ctx.r11.s64 = ctx.r11.s64 + -656;
loc_822439CC:
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x822439ac
	goto loc_822439AC;
loc_822439D4:
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82243a78
	if (!ctx.cr6.eq) goto loc_82243A78;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5cf0
	ctx.lr = 0x82243A04;
	sub_825E5CF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82243a14
	if (ctx.cr0.eq) goto loc_82243A14;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82243974
	if (!ctx.cr6.eq) goto loc_82243974;
loc_82243A14:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// b 0x822439cc
	goto loc_822439CC;
loc_82243A20:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5c58
	ctx.lr = 0x82243A48;
	sub_825E5C58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82243a58
	if (ctx.cr0.eq) goto loc_82243A58;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82243974
	if (!ctx.cr6.eq) goto loc_82243974;
loc_82243A58:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,19232
	ctx.r11.s64 = ctx.r11.s64 + 19232;
	// b 0x822439cc
	goto loc_822439CC;
loc_82243A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243728
	ctx.lr = 0x82243A6C;
	sub_82243728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224398c
	if (!ctx.cr0.eq) goto loc_8224398C;
	// b 0x822439ac
	goto loc_822439AC;
loc_82243A78:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243ab8
	if (ctx.cr0.eq) goto loc_82243AB8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bne cr6,0x82243aa4
	if (!ctx.cr6.eq) goto loc_82243AA4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1232
	ctx.r3.u64 = ctx.r3.u64 | 1232;
	// b 0x8224398c
	goto loc_8224398C;
loc_82243AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244ce8
	ctx.lr = 0x82243AAC;
	sub_82244CE8(ctx, base);
loc_82243AAC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224398c
	if (ctx.cr0.lt) goto loc_8224398C;
	// b 0x822439ac
	goto loc_822439AC;
loc_82243AB8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822439ac
	if (ctx.cr0.eq) goto loc_822439AC;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82243AD0;
	sub_8223FFF8(ctx, base);
	// b 0x82243aac
	goto loc_82243AAC;
}

__attribute__((alias("__imp__sub_82243AD4"))) PPC_WEAK_FUNC(sub_82243AD4);
PPC_FUNC_IMPL(__imp__sub_82243AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243AD8"))) PPC_WEAK_FUNC(sub_82243AD8);
PPC_FUNC_IMPL(__imp__sub_82243AD8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82243618
	sub_82243618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243AE8"))) PPC_WEAK_FUNC(sub_82243AE8);
PPC_FUNC_IMPL(__imp__sub_82243AE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243b18
	if (!ctx.cr0.eq) goto loc_82243B18;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x82243c08
	goto loc_82243C08;
loc_82243B18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82243b30
	if (ctx.cr6.eq) goto loc_82243B30;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x82243c08
	goto loc_82243C08;
loc_82243B30:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82243bd0
	if (!ctx.cr6.eq) goto loc_82243BD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ea50
	ctx.lr = 0x82243B54;
	sub_8223EA50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243c08
	if (ctx.cr0.lt) goto loc_82243C08;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// addi r5,r31,188
	ctx.r5.s64 = ctx.r31.s64 + 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82247988
	ctx.lr = 0x82243B70;
	sub_82247988(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// bl 0x8223b560
	ctx.lr = 0x82243B8C;
	sub_8223B560(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82243BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82243c04
	if (!ctx.cr6.eq) goto loc_82243C04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243728
	ctx.lr = 0x82243BCC;
	sub_82243728(ctx, base);
	// b 0x82243bfc
	goto loc_82243BFC;
loc_82243BD0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243bf4
	if (ctx.cr6.eq) goto loc_82243BF4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ea50
	ctx.lr = 0x82243BEC;
	sub_8223EA50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243c08
	if (ctx.cr0.lt) goto loc_82243C08;
loc_82243BF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822422c0
	ctx.lr = 0x82243BFC;
	sub_822422C0(ctx, base);
loc_82243BFC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243c08
	if (ctx.cr0.lt) goto loc_82243C08;
loc_82243C04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82243C08:
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

__attribute__((alias("__imp__sub_82243C20"))) PPC_WEAK_FUNC(sub_82243C20);
PPC_FUNC_IMPL(__imp__sub_82243C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82243C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243c6c
	if (ctx.cr6.eq) goto loc_82243C6C;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,14560
	ctx.r10.s64 = ctx.r10.s64 + 14560;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82243c6c
	if (ctx.cr6.eq) goto loc_82243C6C;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,1960
	ctx.r10.s64 = ctx.r10.s64 + 1960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82243c6c
	if (ctx.cr6.eq) goto loc_82243C6C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x82243de4
	goto loc_82243DE4;
loc_82243C6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b560
	ctx.lr = 0x82243C78;
	sub_8223B560(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82243cb4
	if (ctx.cr6.eq) goto loc_82243CB4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82243cb4
	if (ctx.cr6.eq) goto loc_82243CB4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82243CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82243CB4:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243cc8
	if (ctx.cr0.eq) goto loc_82243CC8;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82243CC8:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243cec
	if (ctx.cr0.eq) goto loc_82243CEC;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82218a80
	ctx.lr = 0x82243CEC;
	sub_82218A80(ctx, base);
loc_82243CEC:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243d1c
	if (ctx.cr0.eq) goto loc_82243D1C;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82238488
	ctx.lr = 0x82243D10;
	sub_82238488(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82243D1C:
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243d34
	if (ctx.cr6.eq) goto loc_82243D34;
	// bl 0x8224b028
	ctx.lr = 0x82243D30;
	sub_8224B028(ctx, base);
	// stw r29,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r29.u32);
loc_82243D34:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243dd4
	if (ctx.cr6.eq) goto loc_82243DD4;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82243dc4
	if (!ctx.cr6.eq) goto loc_82243DC4;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r11,r31,524
	ctx.r11.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82243de0
	if (!ctx.cr6.eq) goto loc_82243DE0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// std r29,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r29.u64);
	// std r29,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r29.u64);
	// std r29,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r29.u64);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5830
	ctx.lr = 0x82243D88;
	sub_825E5830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82243db4
	if (ctx.cr0.eq) goto loc_82243DB4;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82243db4
	if (ctx.cr6.eq) goto loc_82243DB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x82243DA0;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243de4
	if (ctx.cr0.lt) goto loc_82243DE4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82243de4
	goto loc_82243DE4;
loc_82243DB4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,-656
	ctx.r11.s64 = ctx.r11.s64 + -656;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x82243de0
	goto loc_82243DE0;
loc_82243DC4:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x82243de0
	goto loc_82243DE0;
loc_82243DD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fd70
	ctx.lr = 0x82243DE0;
	sub_8223FD70(ctx, base);
loc_82243DE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82243DE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243DEC"))) PPC_WEAK_FUNC(sub_82243DEC);
PPC_FUNC_IMPL(__imp__sub_82243DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243DF0"))) PPC_WEAK_FUNC(sub_82243DF0);
PPC_FUNC_IMPL(__imp__sub_82243DF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82243eb4
	if (ctx.cr6.lt) goto loc_82243EB4;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243eb4
	if (!ctx.cr0.eq) goto loc_82243EB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b560
	ctx.lr = 0x82243E28;
	sub_8223B560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fcc8
	ctx.lr = 0x82243E30;
	sub_8223FCC8(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243e50
	if (ctx.cr0.eq) goto loc_82243E50;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82244ce8
	ctx.lr = 0x82243E4C;
	sub_82244CE8(ctx, base);
	// b 0x82243e68
	goto loc_82243E68;
loc_82243E50:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82243e74
	if (ctx.cr0.eq) goto loc_82243E74;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82243E68;
	sub_8223FFF8(ctx, base);
loc_82243E68:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243f40
	if (ctx.cr0.lt) goto loc_82243F40;
	// b 0x82243e78
	goto loc_82243E78;
loc_82243E74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82243E78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82243eb0
	if (ctx.cr6.lt) goto loc_82243EB0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82243EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82243f4c
	goto loc_82243F4C;
loc_82243EB0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82243EB4:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82243EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82243f24
	if (ctx.cr6.eq) goto loc_82243F24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223ecd0
	ctx.lr = 0x82243F08;
	sub_8223ECD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82243f40
	if (ctx.cr0.lt) goto loc_82243F40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223dfd8
	ctx.lr = 0x82243F20;
	sub_8223DFD8(ctx, base);
	// b 0x82243f4c
	goto loc_82243F4C;
loc_82243F24:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8223dfd8
	ctx.lr = 0x82243F2C;
	sub_8223DFD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243c20
	ctx.lr = 0x82243F38;
	sub_82243C20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82243f4c
	if (!ctx.cr0.lt) goto loc_82243F4C;
loc_82243F40:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x82243F4C;
	sub_8223F6C8(ctx, base);
loc_82243F4C:
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

__attribute__((alias("__imp__sub_82243F64"))) PPC_WEAK_FUNC(sub_82243F64);
PPC_FUNC_IMPL(__imp__sub_82243F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243F68"))) PPC_WEAK_FUNC(sub_82243F68);
PPC_FUNC_IMPL(__imp__sub_82243F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82243F70;
	__savegprlr_26(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r29,24(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822441f0
	if (!ctx.cr6.eq) goto loc_822441F0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82247978
	ctx.lr = 0x82243FA8;
	sub_82247978(ctx, base);
	// addi r27,r31,380
	ctx.r27.s64 = ctx.r31.s64 + 380;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82243FB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243ff0
	if (ctx.cr6.eq) goto loc_82243FF0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82238518
	ctx.lr = 0x82243FDC;
	sub_82238518(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82247b50
	ctx.lr = 0x82243FE8;
	sub_82247B50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
loc_82243FF0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82243fb8
	if (ctx.cr6.lt) goto loc_82243FB8;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822440cc
	if (ctx.cr0.eq) goto loc_822440CC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82244038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82244038:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82244040:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82244058
	if (ctx.cr6.eq) goto loc_82244058;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82247e90
	ctx.lr = 0x82244058;
	sub_82247E90(ctx, base);
loc_82244058:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82244040
	if (!ctx.cr0.eq) goto loc_82244040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223eb00
	ctx.lr = 0x8224406C;
	sub_8223EB00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8224407C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822440b8
	if (ctx.cr6.eq) goto loc_822440B8;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822440B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822440B8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8224407c
	if (!ctx.cr0.eq) goto loc_8224407C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82244378
	goto loc_82244378;
loc_822440CC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x82241cd0
	ctx.lr = 0x822440E0;
	sub_82241CD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
	// li r11,31
	ctx.r11.s64 = 31;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x82247988
	ctx.lr = 0x82244100;
	sub_82247988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82244134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822441d8
	if (ctx.cr6.eq) goto loc_822441D8;
	// addi r30,r1,304
	ctx.r30.s64 = ctx.r1.s64 + 304;
loc_82244148:
	// li r11,169
	ctx.r11.s64 = 169;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82247998
	ctx.lr = 0x82244164;
	sub_82247998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// bne cr6,0x822441e4
	if (!ctx.cr6.eq) goto loc_822441E4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82244184:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,42
	ctx.r10.s64 = ctx.r10.s64 + 42;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82244184
	if (!ctx.cr0.eq) goto loc_82244184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241488
	ctx.lr = 0x822441BC;
	sub_82241488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82244148
	if (ctx.cr6.lt) goto loc_82244148;
loc_822441D8:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82244038
	if (!ctx.cr6.eq) goto loc_82244038;
loc_822441E4:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82244378
	goto loc_82244378;
loc_822441F0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82244258
	if (!ctx.cr6.eq) goto loc_82244258;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82244244
	if (!ctx.cr6.eq) goto loc_82244244;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e7c0
	ctx.lr = 0x82244214;
	sub_8223E7C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82247988
	ctx.lr = 0x82244230;
	sub_82247988(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// oris r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 | 5242880;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
loc_82244244:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x82244378
	goto loc_82244378;
loc_82244258:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82247950
	ctx.lr = 0x8224426C;
	sub_82247950(ctx, base);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82247940
	ctx.lr = 0x82244274;
	sub_82247940(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r26.u32);
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// std r26,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r26.u64);
	// li r10,4
	ctx.r10.s64 = 4;
	// std r26,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r26.u64);
	// stw r26,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r26.u32);
	// stw r26,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r26.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_8224429C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822442c4
	if (ctx.cr6.eq) goto loc_822442C4;
	// lwz r8,396(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm r8,r8,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,396(r9)
	PPC_STORE_U32(ctx.r9.u32 + 396, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,396(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm r8,r8,0,20,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r8,396(r9)
	PPC_STORE_U32(ctx.r9.u32 + 396, ctx.r8.u32);
loc_822442C4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8224429c
	if (!ctx.cr0.eq) goto loc_8224429C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822442ec
	if (ctx.cr6.eq) goto loc_822442EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822442ec
	if (ctx.cr6.eq) goto loc_822442EC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82244360
	goto loc_82244360;
loc_822442EC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82244300
	if (ctx.cr6.lt) goto loc_82244300;
	// lis r30,-32747
	ctx.r30.s64 = -2146107392;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
	// b 0x82244360
	goto loc_82244360;
loc_82244300:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4103
	ctx.r11.u64 = ctx.r11.u64 | 4103;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82244358
	if (ctx.cr6.eq) goto loc_82244358;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4104
	ctx.r11.u64 = ctx.r11.u64 | 4104;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8224432c
	if (!ctx.cr6.eq) goto loc_8224432C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,4320
	ctx.r30.u64 = ctx.r30.u64 | 4320;
	// b 0x82244360
	goto loc_82244360;
loc_8224432C:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4116
	ctx.r11.u64 = ctx.r11.u64 | 4116;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82244358
	if (ctx.cr6.eq) goto loc_82244358;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4119
	ctx.r11.u64 = ctx.r11.u64 | 4119;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82244358
	if (!ctx.cr6.eq) goto loc_82244358;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,1617
	ctx.r30.u64 = ctx.r30.u64 | 1617;
	// b 0x82244360
	goto loc_82244360;
loc_82244358:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,1232
	ctx.r30.u64 = ctx.r30.u64 | 1232;
loc_82244360:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243c20
	ctx.lr = 0x8224436C;
	sub_82243C20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244378
	if (ctx.cr0.lt) goto loc_82244378;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82244378:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244380"))) PPC_WEAK_FUNC(sub_82244380);
PPC_FUNC_IMPL(__imp__sub_82244380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82244388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r29,524
	ctx.r10.s64 = ctx.r29.s64 + 524;
	// lwz r11,524(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82244518
	if (ctx.cr6.eq) goto loc_82244518;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82244518
	if (ctx.cr0.eq) goto loc_82244518;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// beq cr6,0x822443c4
	if (ctx.cr6.eq) goto loc_822443C4;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
loc_822443C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822498d0
	ctx.lr = 0x822443CC;
	sub_822498D0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,997
	ctx.r11.u64 = ctx.r11.u64 | 997;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82244518
	if (ctx.cr6.eq) goto loc_82244518;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82249a80
	ctx.lr = 0x82244408;
	sub_82249A80(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82244420
	if (ctx.cr6.eq) goto loc_82244420;
	// addi r3,r28,-4
	ctx.r3.s64 = ctx.r28.s64 + -4;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82249858
	ctx.lr = 0x8224441C;
	sub_82249858(ctx, base);
	// b 0x82244518
	goto loc_82244518;
loc_82244420:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82244498
	if (!ctx.cr6.eq) goto loc_82244498;
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82244518
	if (!ctx.cr6.eq) goto loc_82244518;
	// std r30,200(r29)
	PPC_STORE_U64(ctx.r29.u32 + 200, ctx.r30.u64);
	// addi r31,r29,200
	ctx.r31.s64 = ctx.r29.s64 + 200;
	// std r30,208(r29)
	PPC_STORE_U64(ctx.r29.u32 + 208, ctx.r30.u64);
	// std r30,216(r29)
	PPC_STORE_U64(ctx.r29.u32 + 216, ctx.r30.u64);
	// stw r30,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x825e5cf0
	ctx.lr = 0x82244458;
	sub_825E5CF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224448c
	if (ctx.cr0.eq) goto loc_8224448C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8224448c
	if (ctx.cr6.eq) goto loc_8224448C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e990
	ctx.lr = 0x82244470;
	sub_8222E990(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82244480
	if (ctx.cr0.lt) goto loc_82244480;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
loc_82244480:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82243df0
	ctx.lr = 0x82244488;
	sub_82243DF0(ctx, base);
	// b 0x82244518
	goto loc_82244518;
loc_8224448C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// b 0x82244514
	goto loc_82244514;
loc_82244498:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82244518
	if (!ctx.cr6.eq) goto loc_82244518;
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82244518
	if (!ctx.cr6.eq) goto loc_82244518;
	// lwz r11,724(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 724);
	// addi r31,r29,200
	ctx.r31.s64 = ctx.r29.s64 + 200;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 724, ctx.r11.u32);
	// std r30,200(r29)
	PPC_STORE_U64(ctx.r29.u32 + 200, ctx.r30.u64);
	// std r30,208(r29)
	PPC_STORE_U64(ctx.r29.u32 + 208, ctx.r30.u64);
	// std r30,216(r29)
	PPC_STORE_U64(ctx.r29.u32 + 216, ctx.r30.u64);
	// stw r30,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r30.u32);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x825e5830
	ctx.lr = 0x822444D8;
	sub_825E5830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224450c
	if (ctx.cr0.eq) goto loc_8224450C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8224450c
	if (ctx.cr6.eq) goto loc_8224450C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e990
	ctx.lr = 0x822444F0;
	sub_8222E990(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82244500
	if (ctx.cr0.lt) goto loc_82244500;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
loc_82244500:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223fd70
	ctx.lr = 0x82244508;
	sub_8223FD70(ctx, base);
	// b 0x82244518
	goto loc_82244518;
loc_8224450C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,-656
	ctx.r11.s64 = ctx.r11.s64 + -656;
loc_82244514:
	// stw r11,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r11.u32);
loc_82244518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244520"))) PPC_WEAK_FUNC(sub_82244520);
PPC_FUNC_IMPL(__imp__sub_82244520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82244528;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224456c
	if (ctx.cr6.eq) goto loc_8224456C;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,14560
	ctx.r10.s64 = ctx.r10.s64 + 14560;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8224456c
	if (ctx.cr6.eq) goto loc_8224456C;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,1960
	ctx.r10.s64 = ctx.r10.s64 + 1960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8224456c
	if (ctx.cr6.eq) goto loc_8224456C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x822446ac
	goto loc_822446AC;
loc_8224456C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b560
	ctx.lr = 0x82244578;
	sub_8223B560(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822445A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224469c
	if (ctx.cr6.eq) goto loc_8224469C;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r28,r31,248
	ctx.r28.s64 = ctx.r31.s64 + 248;
	// b 0x82244600
	goto loc_82244600;
loc_822445C0:
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// addi r30,r29,-92
	ctx.r30.s64 = ctx.r29.s64 + -92;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822445fc
	if (ctx.cr0.eq) goto loc_822445FC;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822445fc
	if (ctx.cr0.eq) goto loc_822445FC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822445F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r11.u32);
loc_822445FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82244600:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82244614
	if (ctx.cr6.eq) goto loc_82244614;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x822445c0
	if (!ctx.cr0.eq) goto loc_822445C0;
loc_82244614:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224468c
	if (!ctx.cr6.eq) goto loc_8224468C;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r11,r31,524
	ctx.r11.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822446a8
	if (!ctx.cr6.eq) goto loc_822446A8;
	// std r27,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r27.u64);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r27,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r27.u64);
	// std r27,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r27.u64);
	// stw r27,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e5cf0
	ctx.lr = 0x82244650;
	sub_825E5CF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224467c
	if (ctx.cr0.eq) goto loc_8224467C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8224467c
	if (ctx.cr6.eq) goto loc_8224467C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x82244668;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822446ac
	if (ctx.cr0.lt) goto loc_822446AC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822446ac
	goto loc_822446AC;
loc_8224467C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x822446a8
	goto loc_822446A8;
loc_8224468C:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x822446a8
	goto loc_822446A8;
loc_8224469C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243df0
	ctx.lr = 0x822446A8;
	sub_82243DF0(ctx, base);
loc_822446A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822446AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822446B4"))) PPC_WEAK_FUNC(sub_822446B4);
PPC_FUNC_IMPL(__imp__sub_822446B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822446B8"))) PPC_WEAK_FUNC(sub_822446B8);
PPC_FUNC_IMPL(__imp__sub_822446B8) {
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
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822446e4
	if (!ctx.cr0.eq) goto loc_822446E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x82244730
	goto loc_82244730;
loc_822446E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822446fc
	if (ctx.cr6.eq) goto loc_822446FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x82244730
	goto loc_82244730;
loc_822446FC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82244724
	if (ctx.cr6.eq) goto loc_82244724;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ea50
	ctx.lr = 0x8224471C;
	sub_8223EA50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244730
	if (ctx.cr0.lt) goto loc_82244730;
loc_82244724:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244520
	ctx.lr = 0x82244730;
	sub_82244520(ctx, base);
loc_82244730:
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

__attribute__((alias("__imp__sub_82244744"))) PPC_WEAK_FUNC(sub_82244744);
PPC_FUNC_IMPL(__imp__sub_82244744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244748"))) PPC_WEAK_FUNC(sub_82244748);
PPC_FUNC_IMPL(__imp__sub_82244748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82244750;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82244a20
	if (ctx.cr6.eq) goto loc_82244A20;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x82244a20
	if (ctx.cr6.eq) goto loc_82244A20;
	// cmpwi cr6,r7,9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 9, ctx.xer);
	// beq cr6,0x82244a04
	if (ctx.cr6.eq) goto loc_82244A04;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bne cr6,0x822447a0
	if (!ctx.cr6.eq) goto loc_822447A0;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822447a0
	if (ctx.cr0.eq) goto loc_822447A0;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_822447A0:
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// beq cr6,0x82244a20
	if (ctx.cr6.eq) goto loc_82244A20;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x822447d4
	if (!ctx.cr6.eq) goto loc_822447D4;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r10,r10,14560
	ctx.r10.s64 = ctx.r10.s64 + 14560;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82244874
	if (!ctx.cr6.eq) goto loc_82244874;
loc_822447C8:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82244a04
	if (!ctx.cr0.eq) goto loc_82244A04;
loc_822447D4:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x82244840
	if (!ctx.cr6.eq) goto loc_82244840;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244840
	if (ctx.cr6.eq) goto loc_82244840;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82244888
	if (!ctx.cr6.eq) goto loc_82244888;
	// lbz r10,171(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// addi r8,r31,380
	ctx.r8.s64 = ctx.r31.s64 + 380;
	// lbz r11,170(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// li r9,4
	ctx.r9.s64 = 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8224480C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224481c
	if (ctx.cr6.eq) goto loc_8224481C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8224481C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8224480c
	if (!ctx.cr0.eq) goto loc_8224480C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244888
	if (ctx.cr6.eq) goto loc_82244888;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82244888
	if (!ctx.cr0.eq) goto loc_82244888;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82244840:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x822448e0
	if (!ctx.cr6.eq) goto loc_822448E0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822448e0
	if (ctx.cr0.eq) goto loc_822448E0;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822448e0
	if (ctx.cr6.eq) goto loc_822448E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r31,248
	ctx.r30.s64 = ctx.r31.s64 + 248;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// b 0x822448c4
	goto loc_822448C4;
loc_82244874:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r10,r10,1960
	ctx.r10.s64 = ctx.r10.s64 + 1960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82244a04
	if (!ctx.cr6.eq) goto loc_82244A04;
	// b 0x822447c8
	goto loc_822447C8;
loc_82244888:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244520
	ctx.lr = 0x82244894;
	sub_82244520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822449fc
	if (ctx.cr0.lt) goto loc_822449FC;
	// b 0x82244a20
	goto loc_82244A20;
loc_822448A0:
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822448c0
	if (!ctx.cr0.eq) goto loc_822448C0;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822448c0
	if (!ctx.cr0.eq) goto loc_822448C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243870
	ctx.lr = 0x822448C0;
	sub_82243870(ctx, base);
loc_822448C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_822448C4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822448d8
	if (ctx.cr6.eq) goto loc_822448D8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x822448a0
	if (!ctx.cr0.eq) goto loc_822448A0;
loc_822448D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_822448E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b560
	ctx.lr = 0x822448EC;
	sub_8223B560(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blt cr6,0x8224491c
	if (ctx.cr6.lt) goto loc_8224491C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82244914
	if (ctx.cr6.eq) goto loc_82244914;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8224491c
	if (!ctx.cr6.eq) goto loc_8224491C;
loc_82244914:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,1235
	ctx.r26.u64 = ctx.r26.u64 | 1235;
loc_8224491C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82244944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822449a4
	if (ctx.cr6.eq) goto loc_822449A4;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r28,r31,248
	ctx.r28.s64 = ctx.r31.s64 + 248;
	// b 0x82244990
	goto loc_82244990;
loc_82244958:
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// addi r30,r29,-92
	ctx.r30.s64 = ctx.r29.s64 + -92;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224498c
	if (ctx.cr0.eq) goto loc_8224498C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82244980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r11.u32);
loc_8224498C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82244990:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822449a4
	if (ctx.cr6.eq) goto loc_822449A4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x82244958
	if (!ctx.cr0.eq) goto loc_82244958;
loc_822449A4:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822449dc
	if (ctx.cr6.eq) goto loc_822449DC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223ecd0
	ctx.lr = 0x822449C0;
	sub_8223ECD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822449fc
	if (ctx.cr0.lt) goto loc_822449FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223dfd8
	ctx.lr = 0x822449D8;
	sub_8223DFD8(ctx, base);
	// b 0x82244a24
	goto loc_82244A24;
loc_822449DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8223dfd8
	ctx.lr = 0x822449E8;
	sub_8223DFD8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243c20
	ctx.lr = 0x822449F4;
	sub_82243C20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82244a24
	if (!ctx.cr0.lt) goto loc_82244A24;
loc_822449FC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82244a24
	if (ctx.cr6.eq) goto loc_82244A24;
loc_82244A04:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82244a14
	if (ctx.cr6.lt) goto loc_82244A14;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,1235
	ctx.r26.u64 = ctx.r26.u64 | 1235;
loc_82244A14:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x82244A20;
	sub_8223F6C8(ctx, base);
loc_82244A20:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82244A24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244A30"))) PPC_WEAK_FUNC(sub_82244A30);
PPC_FUNC_IMPL(__imp__sub_82244A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82244A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82244b10
	if (ctx.cr6.eq) goto loc_82244B10;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,380
	ctx.r29.s64 = ctx.r30.s64 + 380;
loc_82244A54:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82244a70
	if (!ctx.cr6.eq) goto loc_82244A70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223d3b8
	ctx.lr = 0x82244A6C;
	sub_8223D3B8(ctx, base);
	// b 0x82244ae4
	goto loc_82244AE4;
loc_82244A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb60
	ctx.lr = 0x82244A78;
	sub_8222EB60(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82244a94
	if (ctx.cr6.eq) goto loc_82244A94;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82244aa8
	if (ctx.cr6.eq) goto loc_82244AA8;
loc_82244A88:
	// lis r6,-32761
	ctx.r6.s64 = -2147024896;
	// ori r6,r6,1245
	ctx.r6.u64 = ctx.r6.u64 | 1245;
	// b 0x82244b00
	goto loc_82244B00;
loc_82244A94:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82244af8
	if (ctx.cr6.eq) goto loc_82244AF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82244af8
	if (ctx.cr6.eq) goto loc_82244AF8;
loc_82244AA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eda0
	ctx.lr = 0x82244AB4;
	sub_8222EDA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82244a88
	if (!ctx.cr0.eq) goto loc_82244A88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82244ae4
	if (ctx.cr6.eq) goto loc_82244AE4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82244a88
	if (ctx.cr6.eq) goto loc_82244A88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82244a88
	if (ctx.cr6.eq) goto loc_82244A88;
loc_82244AE4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82244a54
	if (ctx.cr6.lt) goto loc_82244A54;
	// b 0x82244b10
	goto loc_82244B10;
loc_82244AF8:
	// lis r6,-32747
	ctx.r6.s64 = -2146107392;
	// ori r6,r6,21001
	ctx.r6.u64 = ctx.r6.u64 | 21001;
loc_82244B00:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82244748
	ctx.lr = 0x82244B10;
	sub_82244748(ctx, base);
loc_82244B10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244B1C"))) PPC_WEAK_FUNC(sub_82244B1C);
PPC_FUNC_IMPL(__imp__sub_82244B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244B20"))) PPC_WEAK_FUNC(sub_82244B20);
PPC_FUNC_IMPL(__imp__sub_82244B20) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82244b64
	if (!ctx.cr6.lt) goto loc_82244B64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82244B40:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82244bf4
	if (ctx.cr6.eq) goto loc_82244BF4;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244748
	ctx.lr = 0x82244B60;
	sub_82244748(ctx, base);
	// b 0x82244bf4
	goto loc_82244BF4;
loc_82244B64:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82244b7c
	if (!ctx.cr6.eq) goto loc_82244B7C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1235
	ctx.r3.u64 = ctx.r3.u64 | 1235;
	// b 0x82244b40
	goto loc_82244B40;
loc_82244B7C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82244ba0
	if (ctx.cr6.eq) goto loc_82244BA0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244ba0
	if (ctx.cr0.eq) goto loc_82244BA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b560
	ctx.lr = 0x82244BA0;
	sub_8223B560(ctx, base);
loc_82244BA0:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82244c08
	if (ctx.cr0.eq) goto loc_82244C08;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82244ce8
	ctx.lr = 0x82244BBC;
	sub_82244CE8(ctx, base);
loc_82244BBC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244b40
	if (ctx.cr0.lt) goto loc_82244B40;
loc_82244BC4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82244BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82244BF4:
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
loc_82244C08:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82244bc4
	if (ctx.cr0.eq) goto loc_82244BC4;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223fff8
	ctx.lr = 0x82244C20;
	sub_8223FFF8(ctx, base);
	// b 0x82244bbc
	goto loc_82244BBC;
}

__attribute__((alias("__imp__sub_82244C24"))) PPC_WEAK_FUNC(sub_82244C24);
PPC_FUNC_IMPL(__imp__sub_82244C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244C28"))) PPC_WEAK_FUNC(sub_82244C28);
PPC_FUNC_IMPL(__imp__sub_82244C28) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82244748
	sub_82244748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244C34"))) PPC_WEAK_FUNC(sub_82244C34);
PPC_FUNC_IMPL(__imp__sub_82244C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244C38"))) PPC_WEAK_FUNC(sub_82244C38);
PPC_FUNC_IMPL(__imp__sub_82244C38) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// beq cr6,0x82244ccc
	if (ctx.cr6.eq) goto loc_82244CCC;
	// cmplwi cr6,r4,17
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17, ctx.xer);
	// beq cr6,0x82244cbc
	if (ctx.cr6.eq) goto loc_82244CBC;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82244c94
	if (ctx.cr6.eq) goto loc_82244C94;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82244cb4
	if (!ctx.cr6.gt) goto loc_82244CB4;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82244cb4
	if (ctx.cr6.gt) goto loc_82244CB4;
	// bl 0x8223ec30
	ctx.lr = 0x82244C90;
	sub_8223EC30(ctx, base);
	// b 0x82244cd4
	goto loc_82244CD4;
loc_82244C94:
	// stw r5,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r5.u32);
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82238a08
	ctx.lr = 0x82244CA4;
	sub_82238A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244cb4
	if (ctx.cr0.eq) goto loc_82244CB4;
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
loc_82244CB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82244cd4
	goto loc_82244CD4;
loc_82244CBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f2e8
	ctx.lr = 0x82244CC8;
	sub_8223F2E8(ctx, base);
	// b 0x82244cd4
	goto loc_82244CD4;
loc_82244CCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244a30
	ctx.lr = 0x82244CD4;
	sub_82244A30(ctx, base);
loc_82244CD4:
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

__attribute__((alias("__imp__sub_82244CE8"))) PPC_WEAK_FUNC(sub_82244CE8);
PPC_FUNC_IMPL(__imp__sub_82244CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82244CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82244d70
	if (ctx.cr6.eq) goto loc_82244D70;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,19232
	ctx.r11.s64 = ctx.r11.s64 + 19232;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82244d50
	if (ctx.cr6.eq) goto loc_82244D50;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82244d30
	if (!ctx.cr6.eq) goto loc_82244D30;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82244d54
	if (ctx.cr0.eq) goto loc_82244D54;
loc_82244D30:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,14560
	ctx.r11.s64 = ctx.r11.s64 + 14560;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82244d50
	if (ctx.cr6.eq) goto loc_82244D50;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,1960
	ctx.r11.s64 = ctx.r11.s64 + 1960;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82244d64
	if (!ctx.cr6.eq) goto loc_82244D64;
loc_82244D50:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
loc_82244D54:
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x82244e74
	goto loc_82244E74;
loc_82244D64:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x82244e74
	goto loc_82244E74;
loc_82244D70:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244e64
	if (ctx.cr6.eq) goto loc_82244E64;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x82244D98;
	sub_82219130(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218a80
	ctx.lr = 0x82244DA8;
	sub_82218A80(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82244dcc
	if (ctx.cr0.eq) goto loc_82244DCC;
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82244ddc
	goto loc_82244DDC;
loc_82244DCC:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,254
	ctx.r4.s64 = 254;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_82244DDC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82244e04
	if (ctx.cr6.eq) goto loc_82244E04;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82244e04
	if (ctx.cr6.eq) goto loc_82244E04;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82244e64
	if (!ctx.cr6.eq) goto loc_82244E64;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244e64
	if (ctx.cr0.eq) goto loc_82244E64;
loc_82244E04:
	// std r28,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r28.u64);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// std r28,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r28.u64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// std r28,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r28.u64);
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e6108
	ctx.lr = 0x82244E28;
	sub_825E6108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244e54
	if (ctx.cr0.eq) goto loc_82244E54;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82244e54
	if (ctx.cr6.eq) goto loc_82244E54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e990
	ctx.lr = 0x82244E40;
	sub_8222E990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82244e74
	if (ctx.cr0.lt) goto loc_82244E74;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82244e74
	goto loc_82244E74;
loc_82244E54:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r11,r11,1960
	ctx.r11.s64 = ctx.r11.s64 + 1960;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x82244e70
	goto loc_82244E70;
loc_82244E64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822407a8
	ctx.lr = 0x82244E70;
	sub_822407A8(ctx, base);
loc_82244E70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82244E74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244E7C"))) PPC_WEAK_FUNC(sub_82244E7C);
PPC_FUNC_IMPL(__imp__sub_82244E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244E80"))) PPC_WEAK_FUNC(sub_82244E80);
PPC_FUNC_IMPL(__imp__sub_82244E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82244E88;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r30,20(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// lis r11,-517
	ctx.r11.s64 = -33882112;
	// lwz r4,24(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// ori r11,r11,65530
	ctx.r11.u64 = ctx.r11.u64 | 65530;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82244ee8
	if (!ctx.cr6.eq) goto loc_82244EE8;
	// lwz r3,420(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82244ed4
	if (!ctx.cr0.eq) goto loc_82244ED4;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
loc_82244ED4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,40(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// lwz r5,36(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// bl 0x8224a680
	ctx.lr = 0x82244EE4;
	sub_8224A680(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_82244EE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,400(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 400);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82247a30
	ctx.lr = 0x82244EFC;
	sub_82247A30(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82244f10
	goto loc_82244F10;
loc_82244F04:
	// lwz r30,88(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
loc_82244F10:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82244f04
	if (!ctx.cr6.eq) goto loc_82244F04;
	// lwz r10,40(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82245778
	if (ctx.cr6.lt) goto loc_82245778;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822456bc
	if (ctx.cr6.lt) goto loc_822456BC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822454f8
	if (ctx.cr6.eq) goto loc_822454F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822453cc
	if (ctx.cr6.lt) goto loc_822453CC;
	// beq cr6,0x8224537c
	if (ctx.cr6.eq) goto loc_8224537C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// rlwinm r11,r10,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// bgt cr6,0x822450e0
	if (ctx.cr6.gt) goto loc_822450E0;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x822450b0
	if (ctx.cr6.eq) goto loc_822450B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82245050
	if (ctx.cr6.eq) goto loc_82245050;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82245010
	if (ctx.cr6.eq) goto loc_82245010;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82244fd8
	if (ctx.cr6.eq) goto loc_82244FD8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r11,396(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 396);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82244fbc
	if (ctx.cr6.eq) goto loc_82244FBC;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
loc_82244FBC:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82244520
	ctx.lr = 0x82244FD4;
	sub_82244520(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_82244FD8:
	// lwz r11,396(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 396);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82244ff0
	if (ctx.cr6.eq) goto loc_82244FF0;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
loc_82244FF0:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82245004
	if (ctx.cr6.eq) goto loc_82245004;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
loc_82245004:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822422c0
	ctx.lr = 0x8224500C;
	sub_822422C0(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_82245010:
	// lwz r11,724(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82245778
	if (!ctx.cr0.eq) goto loc_82245778;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82243870
	ctx.lr = 0x8224504C;
	sub_82243870(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_82245050:
	// lwz r11,396(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 396);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822450A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82243728
	ctx.lr = 0x822450AC;
	sub_82243728(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_822450B0:
	// lwz r11,396(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 396);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822450c8
	if (ctx.cr6.eq) goto loc_822450C8;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
loc_822450C8:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8223fcc8
	ctx.lr = 0x822450DC;
	sub_8223FCC8(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_822450E0:
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// beq cr6,0x822452f8
	if (ctx.cr6.eq) goto loc_822452F8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x82245288
	if (ctx.cr6.eq) goto loc_82245288;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x82245778
	if (ctx.cr6.lt) goto loc_82245778;
	// lbz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// bge cr6,0x82245778
	if (!ctx.cr6.lt) goto loc_82245778;
	// addi r11,r26,95
	ctx.r11.s64 = ctx.r26.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x8224513c
	goto loc_8224513C;
loc_82245134:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8224513C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82245134
	if (!ctx.cr0.eq) goto loc_82245134;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// li r21,1
	ctx.r21.s64 = 1;
loc_8224514C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224516C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// slw r10,r21,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r3.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 255, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// bne cr6,0x82245194
	if (!ctx.cr6.eq) goto loc_82245194;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8224519c
	goto loc_8224519C;
loc_82245194:
	// slw r11,r21,r26
	ctx.r11.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r26.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8224519C:
	// rlwinm r10,r11,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// lbz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82245254
	if (ctx.cr6.eq) goto loc_82245254;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r10.u8 & 0x3F));
	// beq cr6,0x822451e0
	if (ctx.cr6.eq) goto loc_822451E0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x822451e4
	goto loc_822451E4;
loc_822451E0:
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
loc_822451E4:
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82245244
	if (ctx.cr6.eq) goto loc_82245244;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822451F4:
	// addi r10,r11,95
	ctx.r10.s64 = ctx.r11.s64 + 95;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82245230
	if (ctx.cr6.eq) goto loc_82245230;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82245218
	if (!ctx.cr6.eq) goto loc_82245218;
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x82245220
	goto loc_82245220;
loc_82245218:
	// slw r10,r21,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82245220:
	// lbz r8,392(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82245240
	if (ctx.cr0.eq) goto loc_82245240;
loc_82245230:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822451f4
	if (ctx.cr6.lt) goto loc_822451F4;
	// b 0x82245244
	goto loc_82245244;
loc_82245240:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82245244:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// rlwimi r11,r9,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82245254:
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8224514c
	if (!ctx.cr6.eq) goto loc_8224514C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8223e280
	ctx.lr = 0x82245284;
	sub_8223E280(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_82245288:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82245778
	if (!ctx.cr6.lt) goto loc_82245778;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822452a8
	if (!ctx.cr6.eq) goto loc_822452A8;
	// lwz r11,724(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 724);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82245778
	if (!ctx.cr0.eq) goto loc_82245778;
loc_822452A8:
	// lwz r11,396(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 396);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822452c0
	if (ctx.cr6.eq) goto loc_822452C0;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
loc_822452C0:
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ori r4,r4,1226
	ctx.r4.u64 = ctx.r4.u64 | 1226;
	// bl 0x8223e7c0
	ctx.lr = 0x822452D0;
	sub_8223E7C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82245778
	if (ctx.cr0.lt) goto loc_82245778;
	// lwz r11,724(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 724);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,724(r20)
	PPC_STORE_U32(ctx.r20.u32 + 724, ctx.r11.u32);
	// bl 0x8223ecd0
	ctx.lr = 0x822452F4;
	sub_8223ECD0(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_822452F8:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82245778
	if (!ctx.cr6.lt) goto loc_82245778;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82245320
	if (!ctx.cr6.eq) goto loc_82245320;
	// lwz r11,724(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 724);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82245778
	if (!ctx.cr0.eq) goto loc_82245778;
loc_82245320:
	// lwz r11,724(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 724);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82245778
	if (!ctx.cr0.eq) goto loc_82245778;
	// lwz r10,28(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82245340
	if (!ctx.cr6.eq) goto loc_82245340;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
loc_82245340:
	// cmplwi cr6,r8,24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 24, ctx.xer);
	// blt cr6,0x82245778
	if (ctx.cr6.lt) goto loc_82245778;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r3,r20,116
	ctx.r3.s64 = ctx.r20.s64 + 116;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// li r5,36
	ctx.r5.s64 = 36;
	// std r11,108(r20)
	PPC_STORE_U64(ctx.r20.u32 + 108, ctx.r11.u64);
	// bl 0x82219130
	ctx.lr = 0x82245360;
	sub_82219130(ctx, base);
	// addi r3,r20,152
	ctx.r3.s64 = ctx.r20.s64 + 152;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82219130
	ctx.lr = 0x82245370;
	sub_82219130(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82244ce8
	ctx.lr = 0x82245378;
	sub_82244CE8(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_8224537C:
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// lwz r3,424(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 424);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822453C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82245778
	goto loc_82245778;
loc_822453CC:
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// ble cr6,0x82245778
	if (!ctx.cr6.gt) goto loc_82245778;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r26,r8,-5
	ctx.r26.s64 = ctx.r8.s64 + -5;
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r29,5
	ctx.r25.s64 = ctx.r29.s64 + 5;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82245778
	if (!ctx.cr6.lt) goto loc_82245778;
	// lwz r11,248(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 248);
	// addi r28,r20,248
	ctx.r28.s64 = ctx.r20.s64 + 248;
	// b 0x8224542c
	goto loc_8224542C;
loc_822453F8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,-92
	ctx.r31.s64 = ctx.r30.s64 + -92;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82245428
	if (!ctx.cr6.eq) goto loc_82245428;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224541C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82245444
	if (ctx.cr6.eq) goto loc_82245444;
loc_82245428:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8224542C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne 0x822453f8
	if (!ctx.cr0.eq) goto loc_822453F8;
	// b 0x82245778
	goto loc_82245778;
loc_82245444:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 + 280;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// addi r4,r20,380
	ctx.r4.s64 = ctx.r20.s64 + 380;
	// li r21,1
	ctx.r21.s64 = 1;
loc_82245474:
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// lbz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// slw r8,r21,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r8.u8 & 0x3F));
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822454c8
	if (ctx.cr0.eq) goto loc_822454C8;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822454c8
	if (ctx.cr6.eq) goto loc_822454C8;
	// lwz r7,396(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 396);
	// rlwinm. r7,r7,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822454c8
	if (ctx.cr0.eq) goto loc_822454C8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// clrldi r7,r26,32
	ctx.r7.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_822454C8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x82245474
	if (ctx.cr6.lt) goto loc_82245474;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82245760
	goto loc_82245760;
loc_822454F8:
	// lwz r11,724(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224550c
	if (ctx.cr0.eq) goto loc_8224550C;
	// lwz r23,396(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 396);
	// b 0x82245530
	goto loc_82245530;
loc_8224550C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r20,380
	ctx.r11.s64 = ctx.r20.s64 + 380;
loc_82245514:
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82245538
	if (!ctx.cr6.eq) goto loc_82245538;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82245514
	if (ctx.cr6.lt) goto loc_82245514;
loc_82245530:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
loc_82245538:
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// ble cr6,0x82245778
	if (!ctx.cr6.gt) goto loc_82245778;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r24,r29,5
	ctx.r24.s64 = ctx.r29.s64 + 5;
	// addi r25,r8,-5
	ctx.r25.s64 = ctx.r8.s64 + -5;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82245638
	if (ctx.cr6.eq) goto loc_82245638;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// lwz r11,248(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 248);
	// addi r27,r20,248
	ctx.r27.s64 = ctx.r20.s64 + 248;
	// b 0x822455b0
	goto loc_822455B0;
loc_82245574:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r29,-92
	ctx.r31.s64 = ctx.r29.s64 + -92;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822455ac
	if (!ctx.cr6.eq) goto loc_822455AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822455c8
	if (!ctx.cr0.eq) goto loc_822455C8;
loc_822455AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_822455B0:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x82245574
	if (!ctx.cr0.eq) goto loc_82245574;
	// b 0x82245778
	goto loc_82245778;
loc_822455C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82245648
	if (ctx.cr0.eq) goto loc_82245648;
	// lwz r10,396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrldi r9,r25,32
	ctx.r9.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// ldx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stdx r10,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// b 0x8224575c
	goto loc_8224575C;
loc_82245638:
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x82245778
	if (!ctx.cr6.eq) goto loc_82245778;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82245648:
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r10,44(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// beq 0x8224566c
	if (ctx.cr0.eq) goto loc_8224566C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8224566C:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82245678
	if (ctx.cr0.eq) goto loc_82245678;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82245678:
	// lwz r10,32(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82245688
	if (!ctx.cr6.eq) goto loc_82245688;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82245688:
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r8,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r8.u8);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8223d770
	ctx.lr = 0x822456B8;
	sub_8223D770(ctx, base);
	// b 0x82245778
	goto loc_82245778;
loc_822456BC:
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245778
	if (ctx.cr0.eq) goto loc_82245778;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r30,280
	ctx.r10.s64 = ctx.r30.s64 + 280;
	// addi r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 + 136;
	// addi r3,r20,380
	ctx.r3.s64 = ctx.r20.s64 + 380;
	// li r21,1
	ctx.r21.s64 = 1;
loc_822456E4:
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// lbz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// slw r7,r21,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r7.u8 & 0x3F));
	// and. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82245738
	if (ctx.cr0.eq) goto loc_82245738;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82245738
	if (ctx.cr6.eq) goto loc_82245738;
	// lwz r6,396(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 396);
	// rlwinm. r6,r6,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82245738
	if (ctx.cr0.eq) goto loc_82245738;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82245738:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x822456e4
	if (ctx.cr6.lt) goto loc_822456E4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82245778
	if (ctx.cr6.eq) goto loc_82245778;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_8224575C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82245760:
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245778:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245780"))) PPC_WEAK_FUNC(sub_82245780);
PPC_FUNC_IMPL(__imp__sub_82245780) {
	PPC_FUNC_PROLOGUE();
	// b 0x82244c38
	sub_82244C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245784"))) PPC_WEAK_FUNC(sub_82245784);
PPC_FUNC_IMPL(__imp__sub_82245784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245788"))) PPC_WEAK_FUNC(sub_82245788);
PPC_FUNC_IMPL(__imp__sub_82245788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82245790;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822457dc
	if (!ctx.cr6.eq) goto loc_822457DC;
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// ori r4,r4,1226
	ctx.r4.u64 = ctx.r4.u64 | 1226;
	// bl 0x8223e7c0
	ctx.lr = 0x822457B4;
	sub_8223E7C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82245970
	if (ctx.cr0.lt) goto loc_82245970;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x8223ecd0
	ctx.lr = 0x822457D8;
	sub_8223ECD0(ctx, base);
	// b 0x82245970
	goto loc_82245970;
loc_822457DC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822457f8
	if (ctx.cr6.lt) goto loc_822457F8;
loc_822457E4:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82249808
	ctx.lr = 0x822457EC;
	sub_82249808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// b 0x8224596c
	goto loc_8224596C;
loc_822457F8:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8224580c
	if (!ctx.cr6.eq) goto loc_8224580C;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822457e4
	if (!ctx.cr0.eq) goto loc_822457E4;
loc_8224580C:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r28,r31,248
	ctx.r28.s64 = ctx.r31.s64 + 248;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822458cc
	if (ctx.cr6.eq) goto loc_822458CC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822458cc
	if (ctx.cr0.eq) goto loc_822458CC;
loc_8224582C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r27,-92
	ctx.r29.s64 = ctx.r27.s64 + -92;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82245844
	if (ctx.cr6.eq) goto loc_82245844;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82245844:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822458c4
	if (ctx.cr6.eq) goto loc_822458C4;
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82245868
	if (!ctx.cr6.eq) goto loc_82245868;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x822458c4
	if (!ctx.cr6.eq) goto loc_822458C4;
loc_82245868:
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822458c4
	if (ctx.cr0.eq) goto loc_822458C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822458c0
	if (ctx.cr6.eq) goto loc_822458C0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224589c
	if (ctx.cr6.eq) goto loc_8224589C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82247990
	ctx.lr = 0x82245894;
	sub_82247990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822458a4
	goto loc_822458A4;
loc_8224589C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822458A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822458c0
	if (ctx.cr6.lt) goto loc_822458C0;
	// bne cr6,0x822458c4
	if (!ctx.cr6.eq) goto loc_822458C4;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822458c4
	if (!ctx.cr6.lt) goto loc_822458C4;
loc_822458C0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822458C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8224582c
	if (!ctx.cr6.eq) goto loc_8224582C;
loc_822458CC:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r11.u32);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// beq 0x82245944
	if (ctx.cr0.eq) goto loc_82245944;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82249808
	ctx.lr = 0x82245914;
	sub_82249808(ctx, base);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248e58
	ctx.lr = 0x82245920;
	sub_82248E58(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82219130
	ctx.lr = 0x82245930;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244ce8
	ctx.lr = 0x82245938;
	sub_82244CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245954
	if (!ctx.cr0.lt) goto loc_82245954;
	// b 0x82245970
	goto loc_82245970;
loc_82245944:
	// bl 0x82249808
	ctx.lr = 0x82245948;
	sub_82249808(ctx, base);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248e58
	ctx.lr = 0x82245954;
	sub_82248E58(ctx, base);
loc_82245954:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224596C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224596C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245970:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245978"))) PPC_WEAK_FUNC(sub_82245978);
PPC_FUNC_IMPL(__imp__sub_82245978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82245980;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r28,95
	ctx.r11.s64 = ctx.r28.s64 + 95;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822459ac
	if (ctx.cr6.eq) goto loc_822459AC;
	// lwz r7,396(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r7,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822459b8
	if (!ctx.cr0.eq) goto loc_822459B8;
loc_822459AC:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,1245
	ctx.r30.u64 = ctx.r30.u64 | 1245;
	// b 0x82245b14
	goto loc_82245B14;
loc_822459B8:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// li r10,4
	ctx.r10.s64 = 4;
loc_822459C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822459e0
	if (ctx.cr6.eq) goto loc_822459E0;
	// lwz r9,396(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r9,r9,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822459e0
	if (ctx.cr0.eq) goto loc_822459E0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_822459E0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822459c4
	if (!ctx.cr0.eq) goto loc_822459C4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82245a00
	if (ctx.cr6.gt) goto loc_82245A00;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x82245b14
	goto loc_82245B14;
loc_82245A00:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245a4c
	if (ctx.cr6.eq) goto loc_82245A4C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82245a4c
	if (ctx.cr6.lt) goto loc_82245A4C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82245a4c
	if (!ctx.cr6.lt) goto loc_82245A4C;
	// rlwinm. r11,r7,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245a4c
	if (ctx.cr0.eq) goto loc_82245A4C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
loc_82245A4C:
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82245aa0
	if (!ctx.cr6.eq) goto loc_82245AA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245788
	ctx.lr = 0x82245A78;
	sub_82245788(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82245b14
	if (ctx.cr0.lt) goto loc_82245B14;
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82245a98
	if (ctx.cr6.eq) goto loc_82245A98;
	// lwz r11,396(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82245aa0
	if (!ctx.cr0.eq) goto loc_82245AA0;
loc_82245A98:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82245b14
	goto loc_82245B14;
loc_82245AA0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x8223eb00
	ctx.lr = 0x82245AD8;
	sub_8223EB00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82245b14
	if (ctx.cr0.lt) goto loc_82245B14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f2e8
	ctx.lr = 0x82245AEC;
	sub_8223F2E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82245b14
	if (ctx.cr0.lt) goto loc_82245B14;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82245b14
	if (!ctx.cr6.eq) goto loc_82245B14;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r11,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223dfd8
	ctx.lr = 0x82245B14;
	sub_8223DFD8(ctx, base);
loc_82245B14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245B20"))) PPC_WEAK_FUNC(sub_82245B20);
PPC_FUNC_IMPL(__imp__sub_82245B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82245B28;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82245c38
	if (ctx.cr6.eq) goto loc_82245C38;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
loc_82245B4C:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// ori r11,r11,1536
	ctx.r11.u64 = ctx.r11.u64 | 1536;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245bb4
	if (!ctx.cr6.eq) goto loc_82245BB4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82245bb4
	if (ctx.cr6.lt) goto loc_82245BB4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82245bb4
	if (!ctx.cr6.lt) goto loc_82245BB4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82245BB4:
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82245bdc
	if (!ctx.cr6.eq) goto loc_82245BDC;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82245bdc
	if (ctx.cr6.eq) goto loc_82245BDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245788
	ctx.lr = 0x82245BDC;
	sub_82245788(ctx, base);
loc_82245BDC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// beq cr6,0x82245c2c
	if (ctx.cr6.eq) goto loc_82245C2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245C2C:
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82245b4c
	if (!ctx.cr6.eq) goto loc_82245B4C;
loc_82245C38:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825e5ad8
	ctx.lr = 0x82245C4C;
	sub_825E5AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245c5c
	if (ctx.cr0.eq) goto loc_82245C5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82245C5C;
	sub_8222E990(ctx, base);
loc_82245C5C:
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245c88
	if (ctx.cr6.eq) goto loc_82245C88;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224a298
	ctx.lr = 0x82245C88;
	sub_8224A298(ctx, base);
loc_82245C88:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82245d1c
	if (!ctx.cr6.eq) goto loc_82245D1C;
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82245cfc
	if (ctx.cr6.eq) goto loc_82245CFC;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// li r9,8
	ctx.r9.s64 = 8;
	// ori r6,r10,4113
	ctx.r6.u64 = ctx.r10.u64 | 4113;
	// stw r11,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r11.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r6,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r6.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223ecd0
	ctx.lr = 0x82245CE8;
	sub_8223ECD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223dfd8
	ctx.lr = 0x82245CF8;
	sub_8223DFD8(ctx, base);
	// b 0x82245d1c
	goto loc_82245D1C;
loc_82245CFC:
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245d1c
	if (ctx.cr0.eq) goto loc_82245D1C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,396(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82245d1c
	if (!ctx.cr0.eq) goto loc_82245D1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82243870
	ctx.lr = 0x82245D1C;
	sub_82243870(ctx, base);
loc_82245D1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245D24"))) PPC_WEAK_FUNC(sub_82245D24);
PPC_FUNC_IMPL(__imp__sub_82245D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245D28"))) PPC_WEAK_FUNC(sub_82245D28);
PPC_FUNC_IMPL(__imp__sub_82245D28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82247980
	ctx.lr = 0x82245D50;
	sub_82247980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245d74
	if (!ctx.cr0.lt) goto loc_82245D74;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4119
	ctx.r11.u64 = ctx.r11.u64 | 4119;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82245da8
	if (!ctx.cr6.eq) goto loc_82245DA8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1617
	ctx.r3.u64 = ctx.r3.u64 | 1617;
	// b 0x82245da8
	goto loc_82245DA8;
loc_82245D74:
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82245d94
	goto loc_82245D94;
loc_82245D8C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_82245D94:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82245d8c
	if (!ctx.cr6.eq) goto loc_82245D8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245b20
	ctx.lr = 0x82245DA4;
	sub_82245B20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245DA8:
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

__attribute__((alias("__imp__sub_82245DC0"))) PPC_WEAK_FUNC(sub_82245DC0);
PPC_FUNC_IMPL(__imp__sub_82245DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82245DC8;
	__savegprlr_18(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// blt cr6,0x822463ac
	if (ctx.cr6.lt) goto loc_822463AC;
	// lwz r20,24(r19)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82245DF8:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,42
	ctx.r10.s64 = ctx.r10.s64 + 42;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82245df8
	if (!ctx.cr0.eq) goto loc_82245DF8;
	// lwz r21,20(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82245f40
	if (!ctx.cr6.eq) goto loc_82245F40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// bl 0x82247978
	ctx.lr = 0x82245E28;
	sub_82247978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822463ac
	if (ctx.cr0.lt) goto loc_822463AC;
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822463ac
	if (!ctx.cr6.eq) goto loc_822463AC;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// addi r31,r28,380
	ctx.r31.s64 = ctx.r28.s64 + 380;
loc_82245E4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245f28
	if (ctx.cr6.eq) goto loc_82245F28;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82245ef8
	if (ctx.cr0.eq) goto loc_82245EF8;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82245ef8
	if (ctx.cr6.eq) goto loc_82245EF8;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82238518
	ctx.lr = 0x82245E88;
	sub_82238518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,424
	ctx.r3.s64 = ctx.r28.s64 + 424;
	// bl 0x82247b50
	ctx.lr = 0x82245E94;
	sub_82247B50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822463ac
	if (ctx.cr0.lt) goto loc_822463AC;
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r28,256
	ctx.r3.s64 = ctx.r28.s64 + 256;
	// bl 0x82247e90
	ctx.lr = 0x82245EAC;
	sub_82247E90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822463ac
	if (ctx.cr0.lt) goto loc_822463AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223eb00
	ctx.lr = 0x82245EBC;
	sub_8223EB00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822463ac
	if (ctx.cr0.lt) goto loc_822463AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245EF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245f28
	if (ctx.cr0.eq) goto loc_82245F28;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82245f28
	if (!ctx.cr6.eq) goto loc_82245F28;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r11,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223dfd8
	ctx.lr = 0x82245F28;
	sub_8223DFD8(ctx, base);
loc_82245F28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82245e4c
	if (ctx.cr6.lt) goto loc_82245E4C;
	// b 0x822463ac
	goto loc_822463AC;
loc_82245F40:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// addi r23,r1,160
	ctx.r23.s64 = ctx.r1.s64 + 160;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
loc_82245F50:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,88(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ldx r9,r27,r29
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + ctx.r29.u32);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8224608c
	if (ctx.cr6.eq) goto loc_8224608C;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246214
	if (ctx.cr0.eq) goto loc_82246214;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// std r10,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r10.u64);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245fe0
	if (!ctx.cr6.eq) goto loc_82245FE0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82245fe0
	if (ctx.cr6.lt) goto loc_82245FE0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82245fe0
	if (!ctx.cr6.lt) goto loc_82245FE0;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82245FE0:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82245fec
	if (!ctx.cr6.eq) goto loc_82245FEC;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82245FEC:
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82246004
	if (!ctx.cr6.eq) goto loc_82246004;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82245788
	ctx.lr = 0x82246004;
	sub_82245788(ctx, base);
loc_82246004:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224601C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r11.u32);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r3,424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246054
	if (ctx.cr6.eq) goto loc_82246054;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246054:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,256
	ctx.r3.s64 = ctx.r28.s64 + 256;
	// bl 0x82247f48
	ctx.lr = 0x82246060;
	sub_82247F48(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224607c
	if (ctx.cr0.eq) goto loc_8224607C;
	// lbz r11,171(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r28)
	PPC_STORE_U8(ctx.r28.u32 + 171, ctx.r11.u8);
	// b 0x82246214
	goto loc_82246214;
loc_8224607C:
	// lbz r11,170(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r28)
	PPC_STORE_U8(ctx.r28.u32 + 170, ctx.r11.u8);
	// b 0x82246214
	goto loc_82246214;
loc_8224608C:
	// mulli r10,r11,42
	ctx.r10.s64 = ctx.r11.s64 * 42;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// add r30,r10,r20
	ctx.r30.u64 = ctx.r10.u64 + ctx.r20.u64;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// beq 0x822460bc
	if (ctx.cr0.eq) goto loc_822460BC;
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x822460d0
	if (!ctx.cr0.eq) goto loc_822460D0;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x822460cc
	goto loc_822460CC;
loc_822460BC:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x822460d0
	if (ctx.cr0.eq) goto loc_822460D0;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
loc_822460CC:
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_822460D0:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm. r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r9,168(r20)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + 168);
	// beq 0x822460f0
	if (ctx.cr0.eq) goto loc_822460F0;
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82246100
	if (!ctx.cr0.eq) goto loc_82246100;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// b 0x822460fc
	goto loc_822460FC;
loc_822460F0:
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82246100
	if (ctx.cr0.eq) goto loc_82246100;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
loc_822460FC:
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82246100:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82246120
	if (ctx.cr6.eq) goto loc_82246120;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ori r11,r9,2048
	ctx.r11.u64 = ctx.r9.u64 | 2048;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82246120:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82246140
	if (ctx.cr6.eq) goto loc_82246140;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// ori r11,r9,2048
	ctx.r11.u64 = ctx.r9.u64 | 2048;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82246140:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82246160
	if (ctx.cr6.eq) goto loc_82246160;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// ori r11,r9,2048
	ctx.r11.u64 = ctx.r9.u64 | 2048;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82246160:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82246180
	if (ctx.cr6.eq) goto loc_82246180;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// ori r11,r9,2048
	ctx.r11.u64 = ctx.r9.u64 | 2048;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82246180:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r11,r10,2,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// rlwinm r7,r10,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// rlwimi r8,r11,2,24,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// rlwinm r10,r8,2,22,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x380;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x822461f4
	if (ctx.cr6.eq) goto loc_822461F4;
	// rlwimi r11,r5,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// beq 0x822461f4
	if (ctx.cr0.eq) goto loc_822461F4;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822461F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822461F4:
	// lbz r10,394(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 394);
	// lbz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224620c
	if (ctx.cr6.eq) goto loc_8224620C;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82246320
	if (!ctx.cr6.eq) goto loc_82246320;
loc_8224620C:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stdx r18,r27,r29
	PPC_STORE_U64(ctx.r27.u32 + ctx.r29.u32, ctx.r18.u64);
loc_82246214:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82245f50
	if (!ctx.cr6.eq) goto loc_82245F50;
	// lwz r11,20(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224623c
	if (ctx.cr6.eq) goto loc_8224623C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,16(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// lwz r3,400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// bl 0x822479a0
	ctx.lr = 0x8224623C;
	sub_822479A0(ctx, base);
loc_8224623C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822462f8
	if (ctx.cr6.eq) goto loc_822462F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825e5ad8
	ctx.lr = 0x82246258;
	sub_825E5AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224626c
	if (ctx.cr0.eq) goto loc_8224626C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222e990
	ctx.lr = 0x82246268;
	sub_8222E990(ctx, base);
	// b 0x82246320
	goto loc_82246320;
loc_8224626C:
	// lwz r3,420(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246298
	if (ctx.cr6.eq) goto loc_82246298;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224a298
	ctx.lr = 0x82246298;
	sub_8224A298(ctx, base);
loc_82246298:
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822462bc
	if (ctx.cr0.eq) goto loc_822462BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241368
	ctx.lr = 0x822462B4;
	sub_82241368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82246320
	if (ctx.cr0.lt) goto loc_82246320;
loc_822462BC:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822462CC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8223cf00
	ctx.lr = 0x822462E8;
	sub_8223CF00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248e90
	ctx.lr = 0x822462F0;
	sub_82248E90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822462cc
	if (!ctx.cr6.eq) goto loc_822462CC;
loc_822462F8:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,16(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241488
	ctx.lr = 0x82246318;
	sub_82241488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82246374
	if (!ctx.cr0.lt) goto loc_82246374;
loc_82246320:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82246350
	if (ctx.cr6.eq) goto loc_82246350;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82246334:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82249808
	ctx.lr = 0x82246344;
	sub_82249808(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// bne cr6,0x82246334
	if (!ctx.cr6.eq) goto loc_82246334;
loc_82246350:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822463ac
	if (ctx.cr6.eq) goto loc_822463AC;
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822463ac
	if (!ctx.cr0.eq) goto loc_822463AC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82245d28
	ctx.lr = 0x82246370;
	sub_82245D28(ctx, base);
	// b 0x822463ac
	goto loc_822463AC;
loc_82246374:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822463ac
	if (ctx.cr6.eq) goto loc_822463AC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82246388:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r18,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r18.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82249808
	ctx.lr = 0x822463A0;
	sub_82249808(ctx, base);
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82246388
	if (!ctx.cr6.eq) goto loc_82246388;
loc_822463AC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822463B4"))) PPC_WEAK_FUNC(sub_822463B4);
PPC_FUNC_IMPL(__imp__sub_822463B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822463B8"))) PPC_WEAK_FUNC(sub_822463B8);
PPC_FUNC_IMPL(__imp__sub_822463B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822463C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82246504
	goto loc_82246504;
loc_822463D0:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822463e4
	if (ctx.cr0.eq) goto loc_822463E4;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246510
	if (ctx.cr0.eq) goto loc_82246510;
loc_822463E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82247948
	ctx.lr = 0x822463F4;
	sub_82247948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82246510
	if (!ctx.cr0.eq) goto loc_82246510;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822464dc
	if (ctx.cr6.eq) goto loc_822464DC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x822464b8
	if (ctx.cr6.eq) goto loc_822464B8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822464a8
	if (ctx.cr6.eq) goto loc_822464A8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82246480
	if (ctx.cr6.eq) goto loc_82246480;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82246474
	if (ctx.cr6.eq) goto loc_82246474;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82246450
	if (ctx.cr6.eq) goto loc_82246450;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x822464e8
	if (!ctx.cr6.eq) goto loc_822464E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245dc0
	ctx.lr = 0x8224644C;
	sub_82245DC0(ctx, base);
	// b 0x822464e4
	goto loc_822464E4;
loc_82246450:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822464e8
	if (ctx.cr6.eq) goto loc_822464E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x82241cd0
	ctx.lr = 0x82246470;
	sub_82241CD0(ctx, base);
	// b 0x822464e4
	goto loc_822464E4;
loc_82246474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82242888
	ctx.lr = 0x8224647C;
	sub_82242888(ctx, base);
	// b 0x822464e4
	goto loc_822464E4;
loc_82246480:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822464e8
	if (ctx.cr6.eq) goto loc_822464E8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245b20
	ctx.lr = 0x822464A4;
	sub_82245B20(ctx, base);
	// b 0x822464e4
	goto loc_822464E4;
loc_822464A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82242750
	ctx.lr = 0x822464B0;
	sub_82242750(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822464e4
	goto loc_822464E4;
loc_822464B8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243f68
	ctx.lr = 0x822464C4;
	sub_82243F68(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822464e4
	if (ctx.cr6.eq) goto loc_822464E4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x822464f0
	goto loc_822464F0;
loc_822464DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244e80
	ctx.lr = 0x822464E4;
	sub_82244E80(ctx, base);
loc_822464E4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822464E8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82247950
	ctx.lr = 0x822464F0;
	sub_82247950(ctx, base);
loc_822464F0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82246504
	if (!ctx.cr6.lt) goto loc_82246504;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x82246504;
	sub_8223F6C8(ctx, base);
loc_82246504:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822463d0
	if (!ctx.cr6.eq) goto loc_822463D0;
loc_82246510:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r28,r31,380
	ctx.r28.s64 = ctx.r31.s64 + 380;
	// ori r29,r11,65534
	ctx.r29.u64 = ctx.r11.u64 | 65534;
loc_8224651C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224657c
	if (ctx.cr6.eq) goto loc_8224657C;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82246550
	if (ctx.cr0.eq) goto loc_82246550;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// rlwinm r10,r10,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// oris r4,r9,65532
	ctx.r4.u64 = ctx.r9.u64 | 4294705152;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82247938
	ctx.lr = 0x82246550;
	sub_82247938(ctx, base);
loc_82246550:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224657c
	if (ctx.cr0.eq) goto loc_8224657C;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// oris r4,r9,65016
	ctx.r4.u64 = ctx.r9.u64 | 4260888576;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82247938
	ctx.lr = 0x8224657C;
	sub_82247938(ctx, base);
loc_8224657C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8224651c
	if (ctx.cr6.lt) goto loc_8224651C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246594"))) PPC_WEAK_FUNC(sub_82246594);
PPC_FUNC_IMPL(__imp__sub_82246594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246598"))) PPC_WEAK_FUNC(sub_82246598);
PPC_FUNC_IMPL(__imp__sub_82246598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822465A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822465dc
	if (ctx.cr6.eq) goto loc_822465DC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c0a18c
	ctx.lr = 0x822465C4;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822465dc
	if (ctx.cr0.eq) goto loc_822465DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82244c38
	ctx.lr = 0x822465DC;
	sub_82244C38(ctx, base);
loc_822465DC:
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82246634
	if (!ctx.cr6.lt) goto loc_82246634;
	// bl 0x8222eb60
	ctx.lr = 0x822465EC;
	sub_8222EB60(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82246634
	if (!ctx.cr6.eq) goto loc_82246634;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82246610
	if (ctx.cr6.eq) goto loc_82246610;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 452);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8224662c
	if (ctx.cr6.eq) goto loc_8224662C;
loc_82246610:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r31,432
	ctx.r5.s64 = ctx.r31.s64 + 432;
	// lwz r4,428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224662C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224662C:
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
loc_82246634:
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82246688
	if (ctx.cr6.eq) goto loc_82246688;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82246688
	if (ctx.cr6.eq) goto loc_82246688;
	// bl 0x8222e990
	ctx.lr = 0x82246654;
	sub_8222E990(ctx, base);
	// rlwinm. r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82246670
	if (!ctx.cr0.eq) goto loc_82246670;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82246670
	if (!ctx.cr6.gt) goto loc_82246670;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r4,r11,32775
	ctx.r4.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82246674
	goto loc_82246674;
loc_82246670:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82246674:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82246688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246688:
	// lwz r30,412(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r29,r31,412
	ctx.r29.s64 = ctx.r31.s64 + 412;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822466c4
	if (ctx.cr6.eq) goto loc_822466C4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x822466c4
	if (ctx.cr0.eq) goto loc_822466C4;
loc_822466A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822466b8
	if (ctx.cr6.eq) goto loc_822466B8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822466B8:
	// bl 0x82248b20
	ctx.lr = 0x822466BC;
	sub_82248B20(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822466a0
	if (!ctx.cr6.eq) goto loc_822466A0;
loc_822466C4:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822466dc
	if (ctx.cr6.eq) goto loc_822466DC;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r4,r11,9,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x8224a0c0
	ctx.lr = 0x822466DC;
	sub_8224A0C0(ctx, base);
loc_822466DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f350
	ctx.lr = 0x822466E4;
	sub_8223F350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822463b8
	ctx.lr = 0x822466EC;
	sub_822463B8(ctx, base);
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246714
	if (ctx.cr6.eq) goto loc_82246714;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224b050
	ctx.lr = 0x82246704;
	sub_8224B050(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82246714
	if (!ctx.cr0.lt) goto loc_82246714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f6c8
	ctx.lr = 0x82246714;
	sub_8223F6C8(ctx, base);
loc_82246714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244380
	ctx.lr = 0x8224671C;
	sub_82244380(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246724"))) PPC_WEAK_FUNC(sub_82246724);
PPC_FUNC_IMPL(__imp__sub_82246724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246728"))) PPC_WEAK_FUNC(sub_82246728);
PPC_FUNC_IMPL(__imp__sub_82246728) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8222eab8
	sub_8222EAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224673C"))) PPC_WEAK_FUNC(sub_8224673C);
PPC_FUNC_IMPL(__imp__sub_8224673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246740"))) PPC_WEAK_FUNC(sub_82246740);
PPC_FUNC_IMPL(__imp__sub_82246740) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246750"))) PPC_WEAK_FUNC(sub_82246750);
PPC_FUNC_IMPL(__imp__sub_82246750) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82246784
	if (ctx.cr6.eq) goto loc_82246784;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x82246780;
	sub_82247A78(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82246784:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822467A0"))) PPC_WEAK_FUNC(sub_822467A0);
PPC_FUNC_IMPL(__imp__sub_822467A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x822467A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82246844
	if (ctx.cr6.eq) goto loc_82246844;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// bgt cr6,0x82246844
	if (ctx.cr6.gt) goto loc_82246844;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822467dc
	if (ctx.cr6.eq) goto loc_822467DC;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
loc_822467DC:
	// rlwinm r4,r28,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a60
	ctx.lr = 0x822467E8;
	sub_82247A60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822467fc
	if (!ctx.cr0.eq) goto loc_822467FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224684c
	goto loc_8224684C;
loc_822467FC:
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82246810;
	sub_82219130(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8224682c
	if (ctx.cr6.eq) goto loc_8224682C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8224682C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82246750
	ctx.lr = 0x82246834;
	sub_82246750(ctx, base);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224684c
	goto loc_8224684C;
loc_82246844:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8224684C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246854"))) PPC_WEAK_FUNC(sub_82246854);
PPC_FUNC_IMPL(__imp__sub_82246854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246858"))) PPC_WEAK_FUNC(sub_82246858);
PPC_FUNC_IMPL(__imp__sub_82246858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82246860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822468a8
	if (ctx.cr6.eq) goto loc_822468A8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82246888:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822468d4
	if (ctx.cr6.eq) goto loc_822468D4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82246888
	if (ctx.cr6.lt) goto loc_82246888;
loc_822468A8:
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x822468c8
	if (!ctx.cr6.lt) goto loc_822468C8;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// li r3,260
	ctx.r3.s64 = 260;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82247a60
	ctx.lr = 0x822468C0;
	sub_82247A60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822468fc
	if (!ctx.cr0.eq) goto loc_822468FC;
loc_822468C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224694c
	goto loc_8224694C;
loc_822468D4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822468f4
	if (ctx.cr6.eq) goto loc_822468F4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82246948
	goto loc_82246948;
loc_822468F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224694c
	goto loc_8224694C;
loc_822468FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82219130
	ctx.lr = 0x82246910;
	sub_82219130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,260
	ctx.r3.s64 = 260;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82247a78
	ctx.lr = 0x82246944;
	sub_82247A78(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82246948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224694C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246954"))) PPC_WEAK_FUNC(sub_82246954);
PPC_FUNC_IMPL(__imp__sub_82246954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246958"))) PPC_WEAK_FUNC(sub_82246958);
PPC_FUNC_IMPL(__imp__sub_82246958) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82246978:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82246998
	if (ctx.cr6.eq) goto loc_82246998;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82246978
	if (ctx.cr6.lt) goto loc_82246978;
	// blr 
	return;
loc_82246998:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822469A4"))) PPC_WEAK_FUNC(sub_822469A4);
PPC_FUNC_IMPL(__imp__sub_822469A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822469A8"))) PPC_WEAK_FUNC(sub_822469A8);
PPC_FUNC_IMPL(__imp__sub_822469A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822469B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822469fc
	if (!ctx.cr6.gt) goto loc_822469FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822469D0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8222eab8
	ctx.lr = 0x822469E8;
	sub_8222EAB8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822469d0
	if (ctx.cr6.lt) goto loc_822469D0;
loc_822469FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246A04"))) PPC_WEAK_FUNC(sub_82246A04);
PPC_FUNC_IMPL(__imp__sub_82246A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246A08"))) PPC_WEAK_FUNC(sub_82246A08);
PPC_FUNC_IMPL(__imp__sub_82246A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82246750
	sub_82246750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246A0C"))) PPC_WEAK_FUNC(sub_82246A0C);
PPC_FUNC_IMPL(__imp__sub_82246A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246A10"))) PPC_WEAK_FUNC(sub_82246A10);
PPC_FUNC_IMPL(__imp__sub_82246A10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82246a24
	if (!ctx.cr6.eq) goto loc_82246A24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82246A24:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82246a58
	if (ctx.cr6.eq) goto loc_82246A58;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_82246A38:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82246a38
	if (!ctx.cr0.eq) goto loc_82246A38;
loc_82246A58:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246A60"))) PPC_WEAK_FUNC(sub_82246A60);
PPC_FUNC_IMPL(__imp__sub_82246A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82246A68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82246b84
	if (ctx.cr6.eq) goto loc_82246B84;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// bgt cr6,0x82246b84
	if (ctx.cr6.gt) goto loc_82246B84;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r31,r29,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82246b84
	if (ctx.cr6.lt) goto loc_82246B84;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82246b04
	if (ctx.cr6.eq) goto loc_82246B04;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82246abc
	if (ctx.cr6.eq) goto loc_82246ABC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r9,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r11.s64;
	// b 0x82246ac0
	goto loc_82246AC0;
loc_82246ABC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82246AC0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82246adc
	if (!ctx.cr6.gt) goto loc_82246ADC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x82246b8c
	goto loc_82246B8C;
loc_82246ADC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82246b34
	goto loc_82246B34;
loc_82246B04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246750
	ctx.lr = 0x82246B0C;
	sub_82246750(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a60
	ctx.lr = 0x82246B18;
	sub_82247A60(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82246b30
	if (!ctx.cr0.eq) goto loc_82246B30;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82246b8c
	goto loc_82246B8C;
loc_82246B30:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82246B34:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82246b7c
	if (ctx.cr6.eq) goto loc_82246B7C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82246B44:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// bne 0x82246b44
	if (!ctx.cr0.eq) goto loc_82246B44;
loc_82246B7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82246b8c
	goto loc_82246B8C;
loc_82246B84:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
loc_82246B8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246B94"))) PPC_WEAK_FUNC(sub_82246B94);
PPC_FUNC_IMPL(__imp__sub_82246B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246B98"))) PPC_WEAK_FUNC(sub_82246B98);
PPC_FUNC_IMPL(__imp__sub_82246B98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82246be8
	if (ctx.cr6.eq) goto loc_82246BE8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82246bd4
	if (ctx.cr6.eq) goto loc_82246BD4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82246bd4
	if (ctx.cr6.eq) goto loc_82246BD4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82246bdc
	if (ctx.cr6.eq) goto loc_82246BDC;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82246be8
	if (ctx.cr6.eq) goto loc_82246BE8;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82246bdc
	if (ctx.cr6.eq) goto loc_82246BDC;
loc_82246BD4:
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82246bec
	goto loc_82246BEC;
loc_82246BDC:
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82246bf0
	goto loc_82246BF0;
loc_82246BE8:
	// li r5,4
	ctx.r5.s64 = 4;
loc_82246BEC:
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
loc_82246BF0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8222eb50
	sub_8222EB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246BF8"))) PPC_WEAK_FUNC(sub_82246BF8);
PPC_FUNC_IMPL(__imp__sub_82246BF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82246c2c
	if (ctx.cr6.eq) goto loc_82246C2C;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a78
	ctx.lr = 0x82246C28;
	sub_82247A78(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82246C2C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82246C4C"))) PPC_WEAK_FUNC(sub_82246C4C);
PPC_FUNC_IMPL(__imp__sub_82246C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246C50"))) PPC_WEAK_FUNC(sub_82246C50);
PPC_FUNC_IMPL(__imp__sub_82246C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82246C58;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82246C88:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82246d3c
	if (ctx.cr6.eq) goto loc_82246D3C;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82246CA8:
	// lbz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82246d30
	if (!ctx.cr0.gt) goto loc_82246D30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82246d24
	if (!ctx.cr6.gt) goto loc_82246D24;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82246ce8
	if (ctx.cr6.eq) goto loc_82246CE8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82246d24
	if (ctx.cr6.eq) goto loc_82246D24;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82246ce0
	if (ctx.cr6.eq) goto loc_82246CE0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82246d24
	if (ctx.cr6.eq) goto loc_82246D24;
	// b 0x82246d30
	goto loc_82246D30;
loc_82246CE0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82246d18
	goto loc_82246D18;
loc_82246CE8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82246d64
	if (!ctx.cr0.eq) goto loc_82246D64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246d14
	if (ctx.cr6.eq) goto loc_82246D14;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82246d18
	if (ctx.cr0.eq) goto loc_82246D18;
loc_82246D14:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82246D18:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x82246d64
	if (ctx.cr6.gt) goto loc_82246D64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82246D24:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
loc_82246D30:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82246ca8
	if (ctx.cr6.lt) goto loc_82246CA8;
loc_82246D3C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x82246c88
	if (ctx.cr6.lt) goto loc_82246C88;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82246d5c
	if (!ctx.cr6.eq) goto loc_82246D5C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82246bf8
	ctx.lr = 0x82246D58;
	sub_82246BF8(ctx, base);
	// b 0x82246f70
	goto loc_82246F70;
loc_82246D5C:
	// cmplwi cr6,r21,1024
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1024, ctx.xer);
	// ble cr6,0x82246d70
	if (!ctx.cr6.gt) goto loc_82246D70;
loc_82246D64:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82246f74
	goto loc_82246F74;
loc_82246D70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a60
	ctx.lr = 0x82246D7C;
	sub_82247A60(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82246d90
	if (!ctx.cr0.eq) goto loc_82246D90;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82246f74
	goto loc_82246F74;
loc_82246D90:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82218a80
	ctx.lr = 0x82246DA0;
	sub_82218A80(ctx, base);
	// mulli r11,r21,24
	ctx.r11.s64 = ctx.r21.s64 * 24;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
loc_82246DB4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r23,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r25,r23,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246f50
	if (ctx.cr6.eq) goto loc_82246F50;
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// addi r30,r25,16
	ctx.r30.s64 = ctx.r25.s64 + 16;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_82246DD8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lbz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// stb r11,-8(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8, ctx.r11.u8);
	// lbz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82246f28
	if (ctx.cr6.eq) goto loc_82246F28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82246f18
	if (ctx.cr6.eq) goto loc_82246F18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82246f08
	if (ctx.cr6.eq) goto loc_82246F08;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82246e80
	if (ctx.cr6.eq) goto loc_82246E80;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82246e74
	if (ctx.cr6.eq) goto loc_82246E74;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82246e40
	if (ctx.cr6.eq) goto loc_82246E40;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82246f48
	if (!ctx.cr6.eq) goto loc_82246F48;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82246f34
	goto loc_82246F34;
loc_82246E40:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x82246E5C;
	sub_82219130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82246f34
	goto loc_82246F34;
loc_82246E74:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82246f30
	goto loc_82246F30;
loc_82246E80:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x82246E9C;
	sub_82219130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246ec4
	if (ctx.cr6.eq) goto loc_82246EC4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82246ec8
	if (ctx.cr0.eq) goto loc_82246EC8;
loc_82246EC4:
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
loc_82246EC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// addi r29,r28,2
	ctx.r29.s64 = ctx.r28.s64 + 2;
	// bl 0x8222f268
	ctx.lr = 0x82246EFC;
	sub_8222F268(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82246f34
	goto loc_82246F34;
loc_82246F08:
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// b 0x82246f34
	goto loc_82246F34;
loc_82246F18:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// b 0x82246f34
	goto loc_82246F34;
loc_82246F28:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82246F30:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82246F34:
	// addi r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 5;
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
loc_82246F48:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x82246dd8
	if (!ctx.cr0.eq) goto loc_82246DD8;
loc_82246F50:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// blt cr6,0x82246db4
	if (ctx.cr6.lt) goto loc_82246DB4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82246bf8
	ctx.lr = 0x82246F64;
	sub_82246BF8(ctx, base);
	// stw r24,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r24.u32);
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// stw r28,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r28.u32);
loc_82246F70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246F74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82246F7C"))) PPC_WEAK_FUNC(sub_82246F7C);
PPC_FUNC_IMPL(__imp__sub_82246F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246F80"))) PPC_WEAK_FUNC(sub_82246F80);
PPC_FUNC_IMPL(__imp__sub_82246F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82246F88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82246fd0
	if (ctx.cr6.eq) goto loc_82246FD0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82246FB0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82246fe4
	if (ctx.cr6.eq) goto loc_82246FE4;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82246fb0
	if (ctx.cr6.lt) goto loc_82246FB0;
loc_82246FD0:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x822472a0
	if (ctx.cr6.lt) goto loc_822472A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822472bc
	goto loc_822472BC;
loc_82246FE4:
	// mulli r27,r11,24
	ctx.r27.s64 = ctx.r11.s64 * 24;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82247008
	if (ctx.cr6.eq) goto loc_82247008;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822472bc
	goto loc_822472BC;
loc_82247008:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82247288
	if (ctx.cr6.eq) goto loc_82247288;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82247270
	if (ctx.cr6.eq) goto loc_82247270;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82247258
	if (ctx.cr6.eq) goto loc_82247258;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8224712c
	if (ctx.cr6.eq) goto loc_8224712C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82247114
	if (ctx.cr6.eq) goto loc_82247114;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82247050
	if (ctx.cr6.eq) goto loc_82247050;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
loc_82247044:
	// bne cr6,0x82247280
	if (!ctx.cr6.eq) goto loc_82247280;
loc_82247048:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822472bc
	goto loc_822472BC;
loc_82247050:
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822470a4
	if (!ctx.cr6.eq) goto loc_822470A4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82247098
	if (ctx.cr0.eq) goto loc_82247098;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82247078:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82247098
	if (!ctx.cr0.eq) goto loc_82247098;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82247078
	if (!ctx.cr6.eq) goto loc_82247078;
loc_82247098:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82247048
	if (ctx.cr0.eq) goto loc_82247048;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
loc_822470A4:
	// bgt cr6,0x822470dc
	if (ctx.cr6.gt) goto loc_822470DC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82219130
	ctx.lr = 0x822470CC;
	sub_82219130(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// b 0x82247298
	goto loc_82247298;
loc_822470DC:
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82246c50
	ctx.lr = 0x822470F8;
	sub_82246C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822472b8
	if (!ctx.cr0.lt) goto loc_822472B8;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82247104:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x822472bc
	goto loc_822472BC;
loc_82247114:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82247048
	if (ctx.cr6.eq) goto loc_82247048;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x822472b8
	goto loc_822472B8;
loc_8224712C:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8224717c
	if (!ctx.cr6.eq) goto loc_8224717C;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82247174
	if (ctx.cr0.eq) goto loc_82247174;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82247154:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82247174
	if (!ctx.cr0.eq) goto loc_82247174;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82247154
	if (!ctx.cr6.eq) goto loc_82247154;
loc_82247174:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82247048
	if (ctx.cr0.eq) goto loc_82247048;
loc_8224717C:
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x8222f268
	ctx.lr = 0x822471A8;
	sub_8222F268(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8224722c
	if (ctx.cr6.gt) goto loc_8224722C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x8222f268
	ctx.lr = 0x822471F0;
	sub_8222F268(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r9,r27,r10
	ctx.r9.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// bl 0x82219130
	ctx.lr = 0x8224721C;
	sub_82219130(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// b 0x822472b8
	goto loc_822472B8;
loc_8224722C:
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82246c50
	ctx.lr = 0x82247248;
	sub_82246C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822472b8
	if (!ctx.cr0.lt) goto loc_822472B8;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82247104
	goto loc_82247104;
loc_82247258:
	// lfd f0,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lfd f13,16(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82247048
	if (ctx.cr6.eq) goto loc_82247048;
	// stfd f0,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.f0.u64);
	// b 0x822472b8
	goto loc_822472B8;
loc_82247270:
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// b 0x82247044
	goto loc_82247044;
loc_82247280:
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// b 0x822472b8
	goto loc_822472B8;
loc_82247288:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82247048
	if (ctx.cr6.eq) goto loc_82247048;
loc_82247298:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x822472b8
	goto loc_822472B8;
loc_822472A0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246c50
	ctx.lr = 0x822472B0;
	sub_82246C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822472bc
	if (ctx.cr0.lt) goto loc_822472BC;
loc_822472B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822472BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822472C4"))) PPC_WEAK_FUNC(sub_822472C4);
PPC_FUNC_IMPL(__imp__sub_822472C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822472C8"))) PPC_WEAK_FUNC(sub_822472C8);
PPC_FUNC_IMPL(__imp__sub_822472C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822472E8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82247308
	if (ctx.cr6.eq) goto loc_82247308;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822472e8
	if (ctx.cr6.lt) goto loc_822472E8;
	// blr 
	return;
loc_82247308:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247314"))) PPC_WEAK_FUNC(sub_82247314);
PPC_FUNC_IMPL(__imp__sub_82247314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247318"))) PPC_WEAK_FUNC(sub_82247318);
PPC_FUNC_IMPL(__imp__sub_82247318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82247320;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8224736c
	if (!ctx.cr6.gt) goto loc_8224736C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82247344:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82246b98
	ctx.lr = 0x82247358;
	sub_82246B98(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82247344
	if (ctx.cr6.lt) goto loc_82247344;
loc_8224736C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247374"))) PPC_WEAK_FUNC(sub_82247374);
PPC_FUNC_IMPL(__imp__sub_82247374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247378"))) PPC_WEAK_FUNC(sub_82247378);
PPC_FUNC_IMPL(__imp__sub_82247378) {
	PPC_FUNC_PROLOGUE();
	// b 0x82246bf8
	sub_82246BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224737C"))) PPC_WEAK_FUNC(sub_8224737C);
PPC_FUNC_IMPL(__imp__sub_8224737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247380"))) PPC_WEAK_FUNC(sub_82247380);
PPC_FUNC_IMPL(__imp__sub_82247380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82247388;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8224739c
	if (!ctx.cr6.eq) goto loc_8224739C;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8224739C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822474b4
	if (ctx.cr6.eq) goto loc_822474B4;
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_822473AC:
	// lwz r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// stb r8,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r8.u8);
	// lbz r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82247498
	if (ctx.cr6.eq) goto loc_82247498;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82247484
	if (ctx.cr6.eq) goto loc_82247484;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82247484
	if (ctx.cr6.eq) goto loc_82247484;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82247434
	if (ctx.cr6.eq) goto loc_82247434;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x82247498
	if (ctx.cr6.eq) goto loc_82247498;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x82247484
	if (!ctx.cr6.eq) goto loc_82247484;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// addi r29,r9,-2
	ctx.r29.s64 = ctx.r9.s64 + -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x82247424;
	sub_82219130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r7,r11,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// b 0x822474a8
	goto loc_822474A8;
loc_82247434:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r9,-2
	ctx.r29.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x8222f268
	ctx.lr = 0x82247470;
	sub_8222F268(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r7,r11,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// b 0x822474a8
	goto loc_822474A8;
loc_82247484:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r7,r9,-8
	ctx.r7.s64 = ctx.r9.s64 + -8;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// b 0x822474a8
	goto loc_822474A8;
loc_82247498:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822474A8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x822473ac
	if (!ctx.cr0.eq) goto loc_822473AC;
loc_822474B4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822474C0"))) PPC_WEAK_FUNC(sub_822474C0);
PPC_FUNC_IMPL(__imp__sub_822474C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x822474C8;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r21,1024
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1024, ctx.xer);
	// bgt cr6,0x8224758c
	if (ctx.cr6.gt) goto loc_8224758C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r20,r9,65001
	ctx.r20.u64 = ctx.r9.u64 | 65001;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8224760c
	if (ctx.cr6.eq) goto loc_8224760C;
loc_82247514:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8224758c
	if (ctx.cr6.lt) goto loc_8224758C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r30,r11,-5
	ctx.r30.s64 = ctx.r11.s64 + -5;
	// addi r22,r22,24
	ctx.r22.s64 = ctx.r22.s64 + 24;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822475ec
	if (ctx.cr6.eq) goto loc_822475EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82247568
	if (ctx.cr6.eq) goto loc_82247568;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82247568
	if (ctx.cr6.eq) goto loc_82247568;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82247598
	if (ctx.cr6.eq) goto loc_82247598;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822475ec
	if (ctx.cr6.eq) goto loc_822475EC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82247570
	if (ctx.cr6.eq) goto loc_82247570;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8224758c
	if (!ctx.cr6.eq) goto loc_8224758C;
loc_82247568:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x822475f0
	goto loc_822475F0;
loc_82247570:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x822475f0
	if (!ctx.cr6.gt) goto loc_822475F0;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x822475f0
	if (!ctx.cr6.gt) goto loc_822475F0;
loc_8224758C:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82247860
	goto loc_82247860;
loc_82247598:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x822475f0
	if (!ctx.cr6.gt) goto loc_822475F0;
	// lhz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x822475f0
	if (!ctx.cr6.gt) goto loc_822475F0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8222f128
	ctx.lr = 0x822475CC;
	sub_8222F128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224758c
	if (ctx.cr0.lt) goto loc_8224758C;
	// cmplwi cr6,r3,512
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 512, ctx.xer);
	// bgt cr6,0x8224758c
	if (ctx.cr6.gt) goto loc_8224758C;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r22,r11,3
	ctx.r22.s64 = ctx.r11.s64 + 3;
	// b 0x822475f0
	goto loc_822475F0;
loc_822475EC:
	// li r31,4
	ctx.r31.s64 = 4;
loc_822475F0:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8224758c
	if (ctx.cr6.lt) goto loc_8224758C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82247514
	if (ctx.cr6.lt) goto loc_82247514;
loc_8224760C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82247664
	if (ctx.cr6.eq) goto loc_82247664;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8224762c
	if (ctx.cr6.eq) goto loc_8224762C;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// b 0x82247630
	goto loc_82247630;
loc_8224762C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247630:
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8224785c
	if (ctx.cr6.eq) goto loc_8224785C;
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82247654
	if (!ctx.cr6.gt) goto loc_82247654;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x82247860
	goto loc_82247860;
loc_82247654:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// b 0x8224769c
	goto loc_8224769C;
loc_82247664:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82246bf8
	ctx.lr = 0x8224766C;
	sub_82246BF8(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8224785c
	if (ctx.cr6.eq) goto loc_8224785C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82247a60
	ctx.lr = 0x82247680;
	sub_82247A60(ctx, base);
	// stw r3,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82247698
	if (!ctx.cr0.eq) goto loc_82247698;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82247860
	goto loc_82247860;
loc_82247698:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8224769C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218a80
	ctx.lr = 0x822476AC;
	sub_82218A80(ctx, base);
	// mulli r11,r21,24
	ctx.r11.s64 = ctx.r21.s64 * 24;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r25,r11,r22
	ctx.r25.s64 = ctx.r22.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r29,0(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r27,0(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// beq cr6,0x8224782c
	if (ctx.cr6.eq) goto loc_8224782C;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_822476D0:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r10,r27,-5
	ctx.r10.s64 = ctx.r27.s64 + -5;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lbz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8224780c
	if (ctx.cr6.eq) goto loc_8224780C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x822477f4
	if (ctx.cr6.eq) goto loc_822477F4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x822477f4
	if (ctx.cr6.eq) goto loc_822477F4;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82247768
	if (ctx.cr6.eq) goto loc_82247768;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x8224780c
	if (ctx.cr6.eq) goto loc_8224780C;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x822477f4
	if (!ctx.cr6.eq) goto loc_822477F4;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r10,-2
	ctx.r27.s64 = ctx.r10.s64 + -2;
	// addi r26,r9,2
	ctx.r26.s64 = ctx.r9.s64 + 2;
	// bl 0x82219130
	ctx.lr = 0x82247754;
	sub_82219130(ctx, base);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// b 0x82247820
	goto loc_82247820;
loc_82247768:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi. r7,r28,31
	ctx.r7.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
	// addi r27,r10,-2
	ctx.r27.s64 = ctx.r10.s64 + -2;
	// addi r24,r9,2
	ctx.r24.s64 = ctx.r9.s64 + 2;
	// beq 0x82247784
	if (ctx.cr0.eq) goto loc_82247784;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82247784:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8222f128
	ctx.lr = 0x822477A8;
	sub_8222F128(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8222f268
	ctx.lr = 0x822477E8;
	sub_8222F268(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x82247820
	goto loc_82247820;
loc_822477F4:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// addi r27,r10,-8
	ctx.r27.s64 = ctx.r10.s64 + -8;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// b 0x82247820
	goto loc_82247820;
loc_8224780C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r27,r10,-4
	ctx.r27.s64 = ctx.r10.s64 + -4;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_82247820:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x822476d0
	if (!ctx.cr0.eq) goto loc_822476D0;
loc_8224782C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8224784c
	if (ctx.cr6.eq) goto loc_8224784C;
	// stw r28,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r28.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// b 0x82247854
	goto loc_82247854;
loc_8224784C:
	// stw r21,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r21.u32);
	// stw r11,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r11.u32);
loc_82247854:
	// stw r29,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r29.u32);
	// stw r27,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r27.u32);
loc_8224785C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247860:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247868"))) PPC_WEAK_FUNC(sub_82247868);
PPC_FUNC_IMPL(__imp__sub_82247868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82247888
	if (!ctx.cr6.eq) goto loc_82247888;
	// li r6,128
	ctx.r6.s64 = 128;
loc_82247888:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82251b98
	ctx.lr = 0x822478B4;
	sub_82251B98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822478C8"))) PPC_WEAK_FUNC(sub_822478C8);
PPC_FUNC_IMPL(__imp__sub_822478C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82251b98
	ctx.lr = 0x822478F0;
	sub_82251B98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247900"))) PPC_WEAK_FUNC(sub_82247900);
PPC_FUNC_IMPL(__imp__sub_82247900) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224eb68
	sub_8224EB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247904"))) PPC_WEAK_FUNC(sub_82247904);
PPC_FUNC_IMPL(__imp__sub_82247904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247908"))) PPC_WEAK_FUNC(sub_82247908);
PPC_FUNC_IMPL(__imp__sub_82247908) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224c738
	sub_8224C738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224790C"))) PPC_WEAK_FUNC(sub_8224790C);
PPC_FUNC_IMPL(__imp__sub_8224790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247910"))) PPC_WEAK_FUNC(sub_82247910);
PPC_FUNC_IMPL(__imp__sub_82247910) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8224c7b0
	ctx.lr = 0x82247928;
	sub_8224C7B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247938"))) PPC_WEAK_FUNC(sub_82247938);
PPC_FUNC_IMPL(__imp__sub_82247938) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224ca20
	sub_8224CA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224793C"))) PPC_WEAK_FUNC(sub_8224793C);
PPC_FUNC_IMPL(__imp__sub_8224793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247940"))) PPC_WEAK_FUNC(sub_82247940);
PPC_FUNC_IMPL(__imp__sub_82247940) {
	PPC_FUNC_PROLOGUE();
	// b 0x82252030
	sub_82252030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247944"))) PPC_WEAK_FUNC(sub_82247944);
PPC_FUNC_IMPL(__imp__sub_82247944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247948"))) PPC_WEAK_FUNC(sub_82247948);
PPC_FUNC_IMPL(__imp__sub_82247948) {
	PPC_FUNC_PROLOGUE();
	// b 0x82253818
	sub_82253818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224794C"))) PPC_WEAK_FUNC(sub_8224794C);
PPC_FUNC_IMPL(__imp__sub_8224794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247950"))) PPC_WEAK_FUNC(sub_82247950);
PPC_FUNC_IMPL(__imp__sub_82247950) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r4,-740
	ctx.r3.s64 = ctx.r4.s64 + -740;
	// b 0x82251fe0
	sub_82251FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224795C"))) PPC_WEAK_FUNC(sub_8224795C);
PPC_FUNC_IMPL(__imp__sub_8224795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247960"))) PPC_WEAK_FUNC(sub_82247960);
PPC_FUNC_IMPL(__imp__sub_82247960) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224ebe8
	sub_8224EBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247964"))) PPC_WEAK_FUNC(sub_82247964);
PPC_FUNC_IMPL(__imp__sub_82247964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247968"))) PPC_WEAK_FUNC(sub_82247968);
PPC_FUNC_IMPL(__imp__sub_82247968) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224ed98
	sub_8224ED98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224796C"))) PPC_WEAK_FUNC(sub_8224796C);
PPC_FUNC_IMPL(__imp__sub_8224796C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247970"))) PPC_WEAK_FUNC(sub_82247970);
PPC_FUNC_IMPL(__imp__sub_82247970) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224ee38
	sub_8224EE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247974"))) PPC_WEAK_FUNC(sub_82247974);
PPC_FUNC_IMPL(__imp__sub_82247974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247978"))) PPC_WEAK_FUNC(sub_82247978);
PPC_FUNC_IMPL(__imp__sub_82247978) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224cb90
	sub_8224CB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224797C"))) PPC_WEAK_FUNC(sub_8224797C);
PPC_FUNC_IMPL(__imp__sub_8224797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247980"))) PPC_WEAK_FUNC(sub_82247980);
PPC_FUNC_IMPL(__imp__sub_82247980) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224f048
	sub_8224F048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247984"))) PPC_WEAK_FUNC(sub_82247984);
PPC_FUNC_IMPL(__imp__sub_82247984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247988"))) PPC_WEAK_FUNC(sub_82247988);
PPC_FUNC_IMPL(__imp__sub_82247988) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224cbd0
	sub_8224CBD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224798C"))) PPC_WEAK_FUNC(sub_8224798C);
PPC_FUNC_IMPL(__imp__sub_8224798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247990"))) PPC_WEAK_FUNC(sub_82247990);
PPC_FUNC_IMPL(__imp__sub_82247990) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224f198
	sub_8224F198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247994"))) PPC_WEAK_FUNC(sub_82247994);
PPC_FUNC_IMPL(__imp__sub_82247994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247998"))) PPC_WEAK_FUNC(sub_82247998);
PPC_FUNC_IMPL(__imp__sub_82247998) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224f258
	sub_8224F258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224799C"))) PPC_WEAK_FUNC(sub_8224799C);
PPC_FUNC_IMPL(__imp__sub_8224799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822479A0"))) PPC_WEAK_FUNC(sub_822479A0);
PPC_FUNC_IMPL(__imp__sub_822479A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224f398
	sub_8224F398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822479A4"))) PPC_WEAK_FUNC(sub_822479A4);
PPC_FUNC_IMPL(__imp__sub_822479A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822479A8"))) PPC_WEAK_FUNC(sub_822479A8);
PPC_FUNC_IMPL(__imp__sub_822479A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224f400
	sub_8224F400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822479AC"))) PPC_WEAK_FUNC(sub_822479AC);
PPC_FUNC_IMPL(__imp__sub_822479AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822479B0"))) PPC_WEAK_FUNC(sub_822479B0);
PPC_FUNC_IMPL(__imp__sub_822479B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224f470
	sub_8224F470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822479B4"))) PPC_WEAK_FUNC(sub_822479B4);
PPC_FUNC_IMPL(__imp__sub_822479B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822479B8"))) PPC_WEAK_FUNC(sub_822479B8);
PPC_FUNC_IMPL(__imp__sub_822479B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822479d0
	if (ctx.cr0.eq) goto loc_822479D0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x8224f4d8
	sub_8224F4D8(ctx, base);
	return;
loc_822479D0:
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822479e4
	if (ctx.cr0.eq) goto loc_822479E4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8224f658
	sub_8224F658(ctx, base);
	return;
loc_822479E4:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822479F0"))) PPC_WEAK_FUNC(sub_822479F0);
PPC_FUNC_IMPL(__imp__sub_822479F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822479fc
	if (ctx.cr6.eq) goto loc_822479FC;
	// b 0x8224f6e0
	sub_8224F6E0(ctx, base);
	return;
loc_822479FC:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x8224c678
	sub_8224C678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247A0C"))) PPC_WEAK_FUNC(sub_82247A0C);
PPC_FUNC_IMPL(__imp__sub_82247A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247A10"))) PPC_WEAK_FUNC(sub_82247A10);
PPC_FUNC_IMPL(__imp__sub_82247A10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247a1c
	if (ctx.cr6.eq) goto loc_82247A1C;
	// b 0x8224fa20
	sub_8224FA20(ctx, base);
	return;
loc_82247A1C:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x8224b490
	sub_8224B490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247A2C"))) PPC_WEAK_FUNC(sub_82247A2C);
PPC_FUNC_IMPL(__imp__sub_82247A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

