#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822570B4"))) PPC_WEAK_FUNC(sub_822570B4);
PPC_FUNC_IMPL(__imp__sub_822570B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822570B8"))) PPC_WEAK_FUNC(sub_822570B8);
PPC_FUNC_IMPL(__imp__sub_822570B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82257104
	goto loc_82257104;
loc_822570E0:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82257110
	if (ctx.cr6.eq) goto loc_82257110;
	// rldicl r11,r11,62,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_82257104:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822570e0
	if (!ctx.cr6.eq) goto loc_822570E0;
	// blr 
	return;
loc_82257110:
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82256c00
	sub_82256C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225711C"))) PPC_WEAK_FUNC(sub_8225711C);
PPC_FUNC_IMPL(__imp__sub_8225711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257120"))) PPC_WEAK_FUNC(sub_82257120);
PPC_FUNC_IMPL(__imp__sub_82257120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257158
	if (!ctx.cr6.eq) goto loc_82257158;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257158
	if (!ctx.cr6.eq) goto loc_82257158;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257158
	if (!ctx.cr6.eq) goto loc_82257158;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257158
	if (!ctx.cr6.eq) goto loc_82257158;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82257158:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8225715C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_82257164:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82257180
	if (!ctx.cr6.eq) goto loc_82257180;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82257164
	if (ctx.cr6.lt) goto loc_82257164;
loc_82257180:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822571b0
	if (!ctx.cr6.eq) goto loc_822571B0;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822571b0
	if (!ctx.cr6.eq) goto loc_822571B0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822571b0
	if (!ctx.cr6.eq) goto loc_822571B0;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822571b8
	if (ctx.cr6.eq) goto loc_822571B8;
loc_822571B0:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x8225715c
	goto loc_8225715C;
loc_822571B8:
	// b 0x82256c00
	sub_82256C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822571BC"))) PPC_WEAK_FUNC(sub_822571BC);
PPC_FUNC_IMPL(__imp__sub_822571BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822571C0"))) PPC_WEAK_FUNC(sub_822571C0);
PPC_FUNC_IMPL(__imp__sub_822571C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x822571C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r11,r11,-26584
	ctx.r11.s64 = ctx.r11.s64 + -26584;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r10,r10,-27236
	ctx.r10.s64 = ctx.r10.s64 + -27236;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// addi r9,r9,-27244
	ctx.r9.s64 = ctx.r9.s64 + -27244;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r29,r31,348
	ctx.r29.s64 = ctx.r31.s64 + 348;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// bl 0x822567b0
	ctx.lr = 0x82257238;
	sub_822567B0(ctx, base);
	// addi r27,r31,400
	ctx.r27.s64 = ctx.r31.s64 + 400;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822567b0
	ctx.lr = 0x8225724C;
	sub_822567B0(ctx, base);
	// addi r10,r26,32
	ctx.r10.s64 = ctx.r26.s64 + 32;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8225fd20
	ctx.lr = 0x8225726C;
	sub_8225FD20(ctx, base);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82c09bcc
	ctx.lr = 0x8225727C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r10,r31,288
	ctx.r10.s64 = ctx.r31.s64 + 288;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// bl 0x822567b0
	ctx.lr = 0x822572B8;
	sub_822567B0(ctx, base);
	// addi r11,r31,340
	ctx.r11.s64 = ctx.r31.s64 + 340;
	// stw r23,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// bl 0x822567b0
	ctx.lr = 0x822572E4;
	sub_822567B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r22,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r22.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x82c09bcc
	ctx.lr = 0x822572F8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// beq cr6,0x82257330
	if (ctx.cr6.eq) goto loc_82257330;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82257338
	if (!ctx.cr0.eq) goto loc_82257338;
	// b 0x82257334
	goto loc_82257334;
loc_82257330:
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
loc_82257334:
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_82257338:
	// sth r11,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225fba8
	ctx.lr = 0x82257344;
	sub_8225FBA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82257350"))) PPC_WEAK_FUNC(sub_82257350);
PPC_FUNC_IMPL(__imp__sub_82257350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82257358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-27236
	ctx.r11.s64 = ctx.r11.s64 + -27236;
	// addi r10,r10,-27244
	ctx.r10.s64 = ctx.r10.s64 + -27244;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,348
	ctx.r29.s64 = ctx.r31.s64 + 348;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82492d68
	ctx.lr = 0x82257384;
	sub_82492D68(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82256ca8
	ctx.lr = 0x8225738C;
	sub_82256CA8(ctx, base);
	// lwz r3,444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822573a4
	if (ctx.cr6.eq) goto loc_822573A4;
	// bl 0x82256ca8
	ctx.lr = 0x8225739C;
	sub_82256CA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
loc_822573A4:
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x82256ca8
	ctx.lr = 0x822573AC;
	sub_82256CA8(ctx, base);
	// addi r30,r31,400
	ctx.r30.s64 = ctx.r31.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82492d68
	ctx.lr = 0x822573B8;
	sub_82492D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225fbf8
	ctx.lr = 0x822573C0;
	sub_8225FBF8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8224b2a0
	ctx.lr = 0x822573C8;
	sub_8224B2A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82492d68
	ctx.lr = 0x822573D0;
	sub_82492D68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82492d68
	ctx.lr = 0x822573D8;
	sub_82492D68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-26584
	ctx.r11.s64 = ctx.r11.s64 + -26584;
	// addi r10,r10,-27252
	ctx.r10.s64 = ctx.r10.s64 + -27252;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822573F8"))) PPC_WEAK_FUNC(sub_822573F8);
PPC_FUNC_IMPL(__imp__sub_822573F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82257400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r30,244
	ctx.r29.s64 = ctx.r30.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257418;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r10,448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r11,26,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x80000000;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 448, ctx.r11.u32);
	// bne cr6,0x8225749c
	if (!ctx.cr6.eq) goto loc_8225749C;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// addi r31,r30,288
	ctx.r31.s64 = ctx.r30.s64 + 288;
	// b 0x82257494
	goto loc_82257494;
loc_82257448:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8225745c
	if (!ctx.cr6.eq) goto loc_8225745C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225747c
	goto loc_8225747C;
loc_8225745C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225747C:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82256ca8
	ctx.lr = 0x82257484;
	sub_82256CA8(ctx, base);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82257494:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82257448
	if (!ctx.cr6.eq) goto loc_82257448;
loc_8225749C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x822574A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822574B0"))) PPC_WEAK_FUNC(sub_822574B0);
PPC_FUNC_IMPL(__imp__sub_822574B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822574B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,244
	ctx.r29.s64 = ctx.r31.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x822574D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r28,r31,172
	ctx.r28.s64 = ctx.r31.s64 + 172;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x822574DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225f210
	ctx.lr = 0x822574E4;
	sub_8225F210(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// ld r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 144);
	// bl 0x822570b8
	ctx.lr = 0x822574F0;
	sub_822570B8(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 + 176;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82257534
	if (ctx.cr6.eq) goto loc_82257534;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8225ec38
	ctx.lr = 0x82257534;
	sub_8225EC38(ctx, base);
loc_82257534:
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82257570
	if (ctx.cr6.eq) goto loc_82257570;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8225ba38
	ctx.lr = 0x82257570;
	sub_8225BA38(ctx, base);
loc_82257570:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257578;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257580;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256ca8
	ctx.lr = 0x82257588;
	sub_82256CA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82257594"))) PPC_WEAK_FUNC(sub_82257594);
PPC_FUNC_IMPL(__imp__sub_82257594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257598"))) PPC_WEAK_FUNC(sub_82257598);
PPC_FUNC_IMPL(__imp__sub_82257598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822575A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r31,288
	ctx.r10.s64 = ctx.r31.s64 + 288;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822575cc
	if (!ctx.cr6.eq) goto loc_822575CC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x822575ec
	goto loc_822575EC;
loc_822575CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_822575EC:
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82260f90
	ctx.lr = 0x82257604;
	sub_82260F90(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,34
	ctx.r11.s64 = 34;
	// lwz r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// addi r4,r31,238
	ctx.r4.s64 = ctx.r31.s64 + 238;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lhz r11,18(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// sth r11,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r11.u16);
	// bl 0x822608d8
	ctx.lr = 0x8225764C;
	sub_822608D8(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82257660
	if (!ctx.cr6.eq) goto loc_82257660;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82257660:
	// stw r11,230(r31)
	PPC_STORE_U32(ctx.r31.u32 + 230, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,234(r31)
	PPC_STORE_U32(ctx.r31.u32 + 234, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82257674"))) PPC_WEAK_FUNC(sub_82257674);
PPC_FUNC_IMPL(__imp__sub_82257674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257678"))) PPC_WEAK_FUNC(sub_82257678);
PPC_FUNC_IMPL(__imp__sub_82257678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82257680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r29,300
	ctx.r10.s64 = ctx.r29.s64 + 300;
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822576dc
	if (ctx.cr6.eq) goto loc_822576DC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822576ac
	if (!ctx.cr6.eq) goto loc_822576AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822576cc
	goto loc_822576CC;
loc_822576AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_822576CC:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_822576D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r11.u32);
	// b 0x82257740
	goto loc_82257740;
loc_822576DC:
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// addi r30,r29,340
	ctx.r30.s64 = ctx.r29.s64 + 340;
	// b 0x82257734
	goto loc_82257734;
loc_822576E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822576fc
	if (!ctx.cr6.eq) goto loc_822576FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225771c
	goto loc_8225771C;
loc_822576FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225771C:
	// addi r31,r11,-176
	ctx.r31.s64 = ctx.r11.s64 + -176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ec38
	ctx.lr = 0x82257728;
	sub_8225EC38(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82257748
	if (!ctx.cr0.eq) goto loc_82257748;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82257734:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822576e8
	if (!ctx.cr6.eq) goto loc_822576E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82257740:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82257748:
	// stw r31,392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 392, ctx.r31.u32);
	// b 0x822576d0
	goto loc_822576D0;
}

__attribute__((alias("__imp__sub_82257750"))) PPC_WEAK_FUNC(sub_82257750);
PPC_FUNC_IMPL(__imp__sub_82257750) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82257678
	ctx.lr = 0x8225776C;
	sub_82257678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82257824
	if (ctx.cr0.eq) goto loc_82257824;
	// addi r30,r31,364
	ctx.r30.s64 = ctx.r31.s64 + 364;
loc_82257778:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// addi r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 24;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82238800
	ctx.lr = 0x822577B8;
	sub_82238800(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822577d8
	if (!ctx.cr6.eq) goto loc_822577D8;
	// bl 0x82238860
	ctx.lr = 0x822577C4;
	sub_82238860(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x822577f8
	if (ctx.cr6.eq) goto loc_822577F8;
	// bl 0x8224b228
	ctx.lr = 0x822577D0;
	sub_8224B228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822577dc
	goto loc_822577DC;
loc_822577D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822577DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256eb0
	ctx.lr = 0x822577E4;
	sub_82256EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257678
	ctx.lr = 0x822577EC;
	sub_82257678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82257778
	if (!ctx.cr0.eq) goto loc_82257778;
	// b 0x82257824
	goto loc_82257824;
loc_822577F8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_822577FC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822577fc
	if (!ctx.cr0.eq) goto loc_822577FC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// bl 0x82261270
	ctx.lr = 0x82257824;
	sub_82261270(ctx, base);
loc_82257824:
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

__attribute__((alias("__imp__sub_8225783C"))) PPC_WEAK_FUNC(sub_8225783C);
PPC_FUNC_IMPL(__imp__sub_8225783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257840"))) PPC_WEAK_FUNC(sub_82257840);
PPC_FUNC_IMPL(__imp__sub_82257840) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225786c
	if (!ctx.cr6.eq) goto loc_8225786C;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// ori r4,r4,4099
	ctx.r4.u64 = ctx.r4.u64 | 4099;
	// b 0x8225789c
	goto loc_8225789C;
loc_8225786C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,364
	ctx.r4.s64 = ctx.r31.s64 + 364;
	// bl 0x82238718
	ctx.lr = 0x82257880;
	sub_82238718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82257890
	if (ctx.cr0.eq) goto loc_82257890;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8225789c
	goto loc_8225789C;
loc_82257890:
	// bl 0x82238860
	ctx.lr = 0x82257894;
	sub_82238860(ctx, base);
	// bl 0x8224b228
	ctx.lr = 0x82257898;
	sub_8224B228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8225789C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256eb0
	ctx.lr = 0x822578A4;
	sub_82256EB0(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822578b8
	if (!ctx.cr0.eq) goto loc_822578B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257750
	ctx.lr = 0x822578B8;
	sub_82257750(ctx, base);
loc_822578B8:
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

__attribute__((alias("__imp__sub_822578CC"))) PPC_WEAK_FUNC(sub_822578CC);
PPC_FUNC_IMPL(__imp__sub_822578CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822578D0"))) PPC_WEAK_FUNC(sub_822578D0);
PPC_FUNC_IMPL(__imp__sub_822578D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822578D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f7f18
	ctx.lr = 0x822578E4;
	sub_821F7F18(ctx, base);
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 824, ctx.r3.u32);
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rldimi r7,r9,32,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFF00000000) | (ctx.r7.u64 & 0xFFFF0000FFFFFFFF);
	// clrlwi r9,r7,30
	ctx.r9.u64 = ctx.r7.u32 & 0x3;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82257938
	goto loc_82257938;
loc_8225791C:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x82257948
	if (ctx.cr6.eq) goto loc_82257948;
	// rldicl r8,r8,62,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82257938:
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225791c
	if (!ctx.cr6.eq) goto loc_8225791C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82257948:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225795c
	if (ctx.cr6.eq) goto loc_8225795C;
	// addic. r30,r11,-144
	ctx.xer.ca = ctx.r11.u32 > 143;
	ctx.r30.s64 = ctx.r11.s64 + -144;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82257968
	if (!ctx.cr0.eq) goto loc_82257968;
loc_8225795C:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822579c4
	if (ctx.cr0.eq) goto loc_822579C4;
loc_82257968:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82257998
	if (!ctx.cr6.eq) goto loc_82257998;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x822612f0
	ctx.lr = 0x82257980;
	sub_822612F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822579c4
	if (ctx.cr0.lt) goto loc_822579C4;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x82256ca8
	ctx.lr = 0x82257990;
	sub_82256CA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_82257998:
	// lwz r4,444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822579b0
	if (ctx.cr6.eq) goto loc_822579B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225fab0
	ctx.lr = 0x822579AC;
	sub_8225FAB0(ctx, base);
	// b 0x822579b8
	goto loc_822579B8;
loc_822579B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256f08
	ctx.lr = 0x822579B8;
	sub_82256F08(ctx, base);
loc_822579B8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822579c4
	if (ctx.cr0.eq) goto loc_822579C4;
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
loc_822579C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822579CC"))) PPC_WEAK_FUNC(sub_822579CC);
PPC_FUNC_IMPL(__imp__sub_822579CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822579D0"))) PPC_WEAK_FUNC(sub_822579D0);
PPC_FUNC_IMPL(__imp__sub_822579D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x822579D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4096
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4096, ctx.xer);
	// bgt cr6,0x82257cd0
	if (ctx.cr6.gt) goto loc_82257CD0;
	// beq cr6,0x82257cc0
	if (ctx.cr6.eq) goto loc_82257CC0;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82257d94
	if (ctx.cr6.gt) goto loc_82257D94;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27280
	ctx.r12.s64 = ctx.r12.s64 + -27280;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// addi r12,r12,31264
	ctx.r12.s64 = ctx.r12.s64 + 31264;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82257A20;
	case 1:
		goto loc_82257A40;
	case 2:
		goto loc_82257A5C;
	case 3:
		goto loc_82257A68;
	case 4:
		goto loc_82257A78;
	case 5:
		goto loc_82257A88;
	case 6:
		goto loc_82257A98;
	case 7:
		goto loc_82257AA8;
	case 8:
		goto loc_82257AB8;
	case 9:
		goto loc_82257AC8;
	case 10:
		goto loc_82257AD8;
	case 11:
		goto loc_82257AE8;
	case 12:
		goto loc_82257AF8;
	case 13:
		goto loc_82257B08;
	case 14:
		goto loc_82257B18;
	case 15:
		goto loc_82257B28;
	case 16:
		goto loc_82257B38;
	case 17:
		goto loc_82257B48;
	case 18:
		goto loc_82257B58;
	case 19:
		goto loc_82257B68;
	case 20:
		goto loc_82257B78;
	case 21:
		goto loc_82257C14;
	case 22:
		goto loc_82257C24;
	case 23:
		goto loc_82257C34;
	case 24:
		goto loc_82257C44;
	case 25:
		goto loc_82257C54;
	case 26:
		goto loc_82257CA0;
	case 27:
		goto loc_82257CB0;
	default:
		__builtin_unreachable();
	}
loc_82257A20:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bge cr6,0x82257d9c
	if (!ctx.cr6.lt) goto loc_82257D9C;
loc_82257A38:
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257A40:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// ble cr6,0x82257d9c
	if (!ctx.cr6.gt) goto loc_82257D9C;
	// b 0x82257a38
	goto loc_82257A38;
loc_82257A5C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82257a38
	goto loc_82257A38;
loc_82257A68:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257A78:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257A88:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257A98:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257AA8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257AB8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257AC8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257AD8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r11.u16);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257AE8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257AF8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 162, ctx.r11.u16);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B08:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B18:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B28:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B38:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B48:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B58:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B68:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257B78:
	// addi r28,r31,244
	ctx.r28.s64 = ctx.r31.s64 + 244;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257B8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r27,r31,172
	ctx.r27.s64 = ctx.r31.s64 + 172;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257B98;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82257c00
	if (!ctx.cr6.gt) goto loc_82257C00;
	// addi r26,r31,288
	ctx.r26.s64 = ctx.r31.s64 + 288;
loc_82257BAC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82257bc0
	if (!ctx.cr6.eq) goto loc_82257BC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82257be0
	goto loc_82257BE0;
loc_82257BC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82257BE0:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82256ca8
	ctx.lr = 0x82257BE8;
	sub_82256CA8(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82257bac
	if (ctx.cr6.gt) goto loc_82257BAC;
loc_82257C00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257C08;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82257C08:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257C10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257C14:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257C24:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257C34:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257C44:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257C54:
	// addi r28,r31,172
	ctx.r28.s64 = ctx.r31.s64 + 172;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257C68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82257c08
	if (ctx.cr6.eq) goto loc_82257C08;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82257c94
	if (ctx.cr6.eq) goto loc_82257C94;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// b 0x82257c98
	goto loc_82257C98;
loc_82257C94:
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
loc_82257C98:
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// b 0x82257c08
	goto loc_82257C08;
loc_82257CA0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257CB0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257CC0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257CD0:
	// addi r11,r4,-4097
	ctx.r11.s64 = ctx.r4.s64 + -4097;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82257d94
	if (ctx.cr6.gt) goto loc_82257D94;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27296
	ctx.r12.s64 = ctx.r12.s64 + -27296;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// addi r12,r12,32004
	ctx.r12.s64 = ctx.r12.s64 + 32004;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82257D04;
	case 1:
		goto loc_82257D94;
	case 2:
		goto loc_82257D14;
	case 3:
		goto loc_82257D24;
	case 4:
		goto loc_82257D34;
	case 5:
		goto loc_82257D44;
	case 6:
		goto loc_82257D54;
	case 7:
		goto loc_82257D64;
	case 8:
		goto loc_82257D74;
	case 9:
		goto loc_82257D84;
	default:
		__builtin_unreachable();
	}
loc_82257D04:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D14:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D24:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D34:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D44:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r11.u16);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D54:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D64:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D74:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D84:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x82257d9c
	goto loc_82257D9C;
loc_82257D94:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
loc_82257D9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82257DA8"))) PPC_WEAK_FUNC(sub_82257DA8);
PPC_FUNC_IMPL(__imp__sub_82257DA8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82257350
	ctx.lr = 0x82257DC8;
	sub_82257350(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82257dd8
	if (ctx.cr0.eq) goto loc_82257DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x82257DD8;
	sub_821200C8(ctx, base);
loc_82257DD8:
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

__attribute__((alias("__imp__sub_82257DF4"))) PPC_WEAK_FUNC(sub_82257DF4);
PPC_FUNC_IMPL(__imp__sub_82257DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257DF8"))) PPC_WEAK_FUNC(sub_82257DF8);
PPC_FUNC_IMPL(__imp__sub_82257DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82257E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r31,244
	ctx.r28.s64 = ctx.r31.s64 + 244;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257E14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,172
	ctx.r29.s64 = ctx.r31.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257E20;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// oris r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 1610612736;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// beq 0x82257e54
	if (ctx.cr0.eq) goto loc_82257E54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257E44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256e38
	ctx.lr = 0x82257E4C;
	sub_82256E38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257E54;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82257E54:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257e88
	if (ctx.cr6.eq) goto loc_82257E88;
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
loc_82257E64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82257120
	ctx.lr = 0x82257E6C;
	sub_82257120(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x822574b0
	ctx.lr = 0x82257E7C;
	sub_822574B0(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257e64
	if (!ctx.cr6.eq) goto loc_82257E64;
loc_82257E88:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82238620
	ctx.lr = 0x82257E90;
	sub_82238620(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r31,300
	ctx.r30.s64 = ctx.r31.s64 + 300;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// b 0x82257ee4
	goto loc_82257EE4;
loc_82257EA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82257eb8
	if (!ctx.cr6.eq) goto loc_82257EB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82257ed8
	goto loc_82257ED8;
loc_82257EB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82257ED8:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82256ca8
	ctx.lr = 0x82257EE0;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82257EE4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82257ea4
	if (!ctx.cr6.eq) goto loc_82257EA4;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// b 0x82257f44
	goto loc_82257F44;
loc_82257EF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82257f0c
	if (!ctx.cr6.eq) goto loc_82257F0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82257f2c
	goto loc_82257F2C;
loc_82257F0C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82257F2C:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82256ca8
	ctx.lr = 0x82257F34;
	sub_82256CA8(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82257F44:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82257ef8
	if (!ctx.cr6.eq) goto loc_82257EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822614e8
	ctx.lr = 0x82257F54;
	sub_822614E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257F5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82257F60:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257f78
	if (!ctx.cr6.eq) goto loc_82257F78;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257fa4
	if (ctx.cr6.eq) goto loc_82257FA4;
loc_82257F78:
	// cmplwi cr6,r30,1000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1000, ctx.xer);
	// bge cr6,0x82257fa4
	if (!ctx.cr6.lt) goto loc_82257FA4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257F88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8224b300
	ctx.lr = 0x82257F94;
	sub_8224B300(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82257F9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82257f60
	goto loc_82257F60;
loc_82257FA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82257FAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x82257FB4;
	sub_82256CA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82257FC0"))) PPC_WEAK_FUNC(sub_82257FC0);
PPC_FUNC_IMPL(__imp__sub_82257FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82257FC8;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82258008
	if (!ctx.cr6.eq) goto loc_82258008;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// sth r30,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
loc_82258008:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82219130
	ctx.lr = 0x82258014;
	sub_82219130(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82258028
	if (!ctx.cr0.eq) goto loc_82258028;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
loc_82258028:
	// addi r27,r31,244
	ctx.r27.s64 = ctx.r31.s64 + 244;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82258034;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r31,312
	ctx.r29.s64 = ctx.r31.s64 + 312;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// rldimi r8,r9,32,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFF00000000) | (ctx.r8.u64 & 0xFFFF0000FFFFFFFF);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// b 0x8225808c
	goto loc_8225808C;
loc_82258068:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r26.u64, ctx.xer);
	// beq cr6,0x82258098
	if (ctx.cr6.eq) goto loc_82258098;
	// rldicl r9,r9,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8225808C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82258068
	if (!ctx.cr6.eq) goto loc_82258068;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82258098:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822580ac
	if (ctx.cr6.eq) goto loc_822580AC;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4100
	ctx.r30.u64 = ctx.r30.u64 | 4100;
	// b 0x82258140
	goto loc_82258140;
loc_822580AC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225f560
	ctx.lr = 0x822580D0;
	sub_8225F560(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82258140
	if (ctx.cr0.lt) goto loc_82258140;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// bl 0x82256ba0
	ctx.lr = 0x822580EC;
	sub_82256BA0(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82258100:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82258100
	if (!ctx.cr0.eq) goto loc_82258100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82258124;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// bl 0x8225c640
	ctx.lr = 0x82258138;
	sub_8225C640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8225816c
	if (!ctx.cr0.lt) goto loc_8225816C;
loc_82258140:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82258154
	if (ctx.cr6.eq) goto loc_82258154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822574b0
	ctx.lr = 0x82258154;
	sub_822574B0(ctx, base);
loc_82258154:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82258164
	if (ctx.cr6.eq) goto loc_82258164;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82258164;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82258164:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// b 0x82258178
	goto loc_82258178;
loc_8225816C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_82258178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258184"))) PPC_WEAK_FUNC(sub_82258184);
PPC_FUNC_IMPL(__imp__sub_82258184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258188"))) PPC_WEAK_FUNC(sub_82258188);
PPC_FUNC_IMPL(__imp__sub_82258188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82258190;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822581d4
	if (!ctx.cr6.eq) goto loc_822581D4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r27,r1,84
	ctx.r27.s64 = ctx.r1.s64 + 84;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// sth r30,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
loc_822581D4:
	// addi r28,r31,244
	ctx.r28.s64 = ctx.r31.s64 + 244;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x822581E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r8,296(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r29,r31,312
	ctx.r29.s64 = ctx.r31.s64 + 312;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lhz r9,18(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 18);
	// rldimi r7,r9,32,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFF00000000) | (ctx.r7.u64 & 0xFFFF0000FFFFFFFF);
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// b 0x82258248
	goto loc_82258248;
loc_82258224:
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r11,r26
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r26.u64, ctx.xer);
	// beq cr6,0x82258254
	if (ctx.cr6.eq) goto loc_82258254;
	// rldicl r9,r9,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82258248:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82258224
	if (!ctx.cr6.eq) goto loc_82258224;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82258254:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82258268
	if (ctx.cr6.eq) goto loc_82258268;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4100
	ctx.r30.u64 = ctx.r30.u64 | 4100;
	// b 0x822582f8
	goto loc_822582F8;
loc_82258268:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225f560
	ctx.lr = 0x82258288;
	sub_8225F560(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822582f8
	if (ctx.cr0.lt) goto loc_822582F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// bl 0x82256ba0
	ctx.lr = 0x822582A4;
	sub_82256BA0(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822582B8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822582b8
	if (!ctx.cr0.eq) goto loc_822582B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x822582DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// bl 0x8225c640
	ctx.lr = 0x822582F0;
	sub_8225C640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82258324
	if (!ctx.cr0.lt) goto loc_82258324;
loc_822582F8:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225830c
	if (ctx.cr6.eq) goto loc_8225830C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822574b0
	ctx.lr = 0x8225830C;
	sub_822574B0(ctx, base);
loc_8225830C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8225831c
	if (ctx.cr6.eq) goto loc_8225831C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225831C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225831C:
	// stw r20,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r20.u32);
	// b 0x82258330
	goto loc_82258330;
loc_82258324:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_82258330:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225833C"))) PPC_WEAK_FUNC(sub_8225833C);
PPC_FUNC_IMPL(__imp__sub_8225833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258340"))) PPC_WEAK_FUNC(sub_82258340);
PPC_FUNC_IMPL(__imp__sub_82258340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82258348;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,1200
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1200, ctx.xer);
	// ble cr6,0x8225836c
	if (!ctx.cr6.gt) goto loc_8225836C;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x8225845c
	goto loc_8225845C;
loc_8225836C:
	// addi r30,r31,172
	ctx.r30.s64 = ctx.r31.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82258378;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lhz r10,18(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r5,44(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwz r4,40(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// bl 0x82260f90
	ctx.lr = 0x822583AC;
	sub_82260F90(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,13(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// bl 0x82c09bdc
	ctx.lr = 0x822583BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822615b0
	ctx.lr = 0x822583C4;
	sub_822615B0(ctx, base);
	// addi r28,r31,244
	ctx.r28.s64 = ctx.r31.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x822583D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82258448
	if (ctx.cr6.lt) goto loc_82258448;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82258448
	if (!ctx.cr0.eq) goto loc_82258448;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82261820
	ctx.lr = 0x82258400;
	sub_82261820(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82258438
	if (!ctx.cr6.eq) goto loc_82258438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257750
	ctx.lr = 0x82258438;
	sub_82257750(ctx, base);
loc_82258438:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82258440;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225845c
	goto loc_8225845C;
loc_82258448:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256ca8
	ctx.lr = 0x82258450;
	sub_82256CA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82258458;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8225845C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258464"))) PPC_WEAK_FUNC(sub_82258464);
PPC_FUNC_IMPL(__imp__sub_82258464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258468"))) PPC_WEAK_FUNC(sub_82258468);
PPC_FUNC_IMPL(__imp__sub_82258468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82258470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8224b300
	ctx.lr = 0x82258484;
	sub_8224B300(ctx, base);
	// addi r29,r31,172
	ctx.r29.s64 = ctx.r31.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82258490;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82258550
	if (!ctx.cr0.eq) goto loc_82258550;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82258550
	if (!ctx.cr0.eq) goto loc_82258550;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822584f0
	if (ctx.cr6.eq) goto loc_822584F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257598
	ctx.lr = 0x822584B8;
	sub_82257598(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
loc_822584C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822584c0
	if (!ctx.cr0.eq) goto loc_822584C0;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// li r30,0
	ctx.r30.s64 = 0;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// b 0x8225855c
	goto loc_8225855C;
loc_822584F0:
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// b 0x82258544
	goto loc_82258544;
loc_822584F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8225850c
	if (!ctx.cr6.eq) goto loc_8225850C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225852c
	goto loc_8225852C;
loc_8225850C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225852C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// bl 0x8225ba38
	ctx.lr = 0x82258538;
	sub_8225BA38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8225855c
	if (!ctx.cr6.eq) goto loc_8225855C;
loc_82258544:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822584f8
	if (!ctx.cr6.eq) goto loc_822584F8;
loc_82258550:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8225855C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82258564;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258578"))) PPC_WEAK_FUNC(sub_82258578);
PPC_FUNC_IMPL(__imp__sub_82258578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82258580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,244
	ctx.r29.s64 = ctx.r31.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82258598;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822585b4
	if (ctx.cr0.eq) goto loc_822585B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225ec38
	ctx.lr = 0x822585AC;
	sub_8225EC38(ctx, base);
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// b 0x822585e8
	goto loc_822585E8;
loc_822585B4:
	// addi r10,r31,340
	ctx.r10.s64 = ctx.r31.s64 + 340;
	// addi r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 + 176;
	// stw r10,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r10.u32);
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stw r10,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r10.u32);
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822585e8
	if (!ctx.cr6.eq) goto loc_822585E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257750
	ctx.lr = 0x822585E8;
	sub_82257750(ctx, base);
loc_822585E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x822585F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822585F8"))) PPC_WEAK_FUNC(sub_822585F8);
PPC_FUNC_IMPL(__imp__sub_822585F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82258600;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r31,416
	ctx.r27.s64 = ctx.r31.s64 + 416;
	// addi r30,r31,444
	ctx.r30.s64 = ctx.r31.s64 + 444;
	// lwz r26,168(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
loc_82258618:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82258660
	if (!ctx.cr6.eq) goto loc_82258660;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x822612f0
	ctx.lr = 0x82258630;
	sub_822612F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82258660
	if (!ctx.cr0.lt) goto loc_82258660;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82258644:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82258644
	if (!ctx.cr0.eq) goto loc_82258644;
loc_82258660:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82238770
	ctx.lr = 0x82258694;
	sub_82238770(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822586e4
	if (!ctx.cr6.eq) goto loc_822586E4;
	// bl 0x82238860
	ctx.lr = 0x822586A0;
	sub_82238860(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,997
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 997, ctx.xer);
	// beq cr6,0x82258708
	if (ctx.cr6.eq) goto loc_82258708;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x822567b0
	ctx.lr = 0x822586BC;
	sub_822567B0(ctx, base);
	// cmpwi cr6,r28,10040
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10040, ctx.xer);
	// beq cr6,0x82258618
	if (ctx.cr6.eq) goto loc_82258618;
	// cmpwi cr6,r28,10054
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10054, ctx.xer);
	// beq cr6,0x82258618
	if (ctx.cr6.eq) goto loc_82258618;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82256ca8
	ctx.lr = 0x822586D4;
	sub_82256CA8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8224b228
	ctx.lr = 0x822586E0;
	sub_8224B228(ctx, base);
	// b 0x8225875c
	goto loc_8225875C;
loc_822586E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8225872c
	if (ctx.cr6.eq) goto loc_8225872C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x822578d0
	ctx.lr = 0x82258704;
	sub_822578D0(ctx, base);
	// b 0x82258618
	goto loc_82258618;
loc_82258708:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8225870C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225870c
	if (!ctx.cr0.eq) goto loc_8225870C;
	// b 0x8225874c
	goto loc_8225874C;
loc_8225872C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82258730:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82258730
	if (!ctx.cr0.eq) goto loc_82258730;
loc_8225874C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82261270
	ctx.lr = 0x82258758;
	sub_82261270(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8225875C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258764"))) PPC_WEAK_FUNC(sub_82258764);
PPC_FUNC_IMPL(__imp__sub_82258764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258768"))) PPC_WEAK_FUNC(sub_82258768);
PPC_FUNC_IMPL(__imp__sub_82258768) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225879c
	if (!ctx.cr6.eq) goto loc_8225879C;
	// lwz r3,444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// bl 0x82256ca8
	ctx.lr = 0x82258790;
	sub_82256CA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// b 0x822587d4
	goto loc_822587D4;
loc_8225879C:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,416
	ctx.r4.s64 = ctx.r31.s64 + 416;
	// bl 0x82238718
	ctx.lr = 0x822587B0;
	sub_82238718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822587cc
	if (ctx.cr0.eq) goto loc_822587CC;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x822578d0
	ctx.lr = 0x822587CC;
	sub_822578D0(ctx, base);
loc_822587CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822585f8
	ctx.lr = 0x822587D4;
	sub_822585F8(ctx, base);
loc_822587D4:
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

__attribute__((alias("__imp__sub_822587E8"))) PPC_WEAK_FUNC(sub_822587E8);
PPC_FUNC_IMPL(__imp__sub_822587E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822587F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82258808;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r31,328
	ctx.r11.s64 = ctx.r31.s64 + 328;
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82258824
	if (!ctx.cr6.eq) goto loc_82258824;
	// bl 0x82257840
	ctx.lr = 0x82258820;
	sub_82257840(ctx, base);
	// b 0x82258828
	goto loc_82258828;
loc_82258824:
	// bl 0x82258768
	ctx.lr = 0x82258828;
	sub_82258768(ctx, base);
loc_82258828:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82258830;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x82258838;
	sub_82256CA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258840"))) PPC_WEAK_FUNC(sub_82258840);
PPC_FUNC_IMPL(__imp__sub_82258840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82258848;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82238608
	ctx.lr = 0x82258860;
	sub_82238608(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// beq cr6,0x822588cc
	if (ctx.cr6.eq) goto loc_822588CC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 276);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// sth r8,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x822386a0
	ctx.lr = 0x822588A0;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822588cc
	if (ctx.cr6.eq) goto loc_822588CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x82238630
	ctx.lr = 0x822588C4;
	sub_82238630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822588dc
	if (ctx.cr0.eq) goto loc_822588DC;
loc_822588CC:
	// bl 0x82238860
	ctx.lr = 0x822588D0;
	sub_82238860(ctx, base);
	// bl 0x8224b228
	ctx.lr = 0x822588D4;
	sub_8224B228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82258904
	goto loc_82258904;
loc_822588DC:
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bec
	ctx.lr = 0x822588E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822585f8
	ctx.lr = 0x822588F0;
	sub_822585F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x822588FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82258920
	if (!ctx.cr6.lt) goto loc_82258920;
loc_82258904:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82258924
	if (ctx.cr6.eq) goto loc_82258924;
	// bl 0x82238620
	ctx.lr = 0x82258914;
	sub_82238620(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// b 0x82258924
	goto loc_82258924;
loc_82258920:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82258924:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258930"))) PPC_WEAK_FUNC(sub_82258930);
PPC_FUNC_IMPL(__imp__sub_82258930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82258938;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8224b420
	ctx.lr = 0x82258968;
	sub_8224B420(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822589f8
	if (ctx.cr0.lt) goto loc_822589F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x822612f0
	ctx.lr = 0x8225897C;
	sub_822612F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822589f8
	if (ctx.cr0.lt) goto loc_822589F8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822615b0
	ctx.lr = 0x8225898C;
	sub_822615B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822589f8
	if (ctx.cr0.lt) goto loc_822589F8;
	// li r4,456
	ctx.r4.s64 = 456;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247a60
	ctx.lr = 0x822589A0;
	sub_82247A60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822589b4
	if (!ctx.cr0.eq) goto loc_822589B4;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x822589f8
	goto loc_822589F8;
loc_822589B4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822571c0
	ctx.lr = 0x822589CC;
	sub_822571C0(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822614d8
	ctx.lr = 0x822589E0;
	sub_822614D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822589f8
	if (ctx.cr0.lt) goto loc_822589F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82258840
	ctx.lr = 0x822589F0;
	sub_82258840(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82258a58
	if (!ctx.cr0.lt) goto loc_82258A58;
loc_822589F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82258a08
	if (ctx.cr6.eq) goto loc_82258A08;
	// bl 0x82256ca8
	ctx.lr = 0x82258A08;
	sub_82256CA8(ctx, base);
loc_82258A08:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82258a18
	if (ctx.cr6.eq) goto loc_82258A18;
	// bl 0x82256ca8
	ctx.lr = 0x82258A18;
	sub_82256CA8(ctx, base);
loc_82258A18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82258a44
	if (ctx.cr6.eq) goto loc_82258A44;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82258a34
	if (ctx.cr6.eq) goto loc_82258A34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822614e8
	ctx.lr = 0x82258A34;
	sub_822614E8(ctx, base);
loc_82258A34:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x82258A44;
	sub_82256CA8(ctx, base);
loc_82258A44:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82258a64
	if (ctx.cr6.eq) goto loc_82258A64;
	// bl 0x8224b2a0
	ctx.lr = 0x82258A54;
	sub_8224B2A0(ctx, base);
	// b 0x82258a64
	goto loc_82258A64;
loc_82258A58:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82258A64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258A70"))) PPC_WEAK_FUNC(sub_82258A70);
PPC_FUNC_IMPL(__imp__sub_82258A70) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x822574b0
	sub_822574B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258A7C"))) PPC_WEAK_FUNC(sub_82258A7C);
PPC_FUNC_IMPL(__imp__sub_82258A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258A80"))) PPC_WEAK_FUNC(sub_82258A80);
PPC_FUNC_IMPL(__imp__sub_82258A80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82256da0
	sub_82256DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258A98"))) PPC_WEAK_FUNC(sub_82258A98);
PPC_FUNC_IMPL(__imp__sub_82258A98) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,22
	ctx.r11.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82258ac0
	if (!ctx.cr6.lt) goto loc_82258AC0;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x82258ac0
	if (ctx.cr6.lt) goto loc_82258AC0;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// b 0x82258ad8
	goto loc_82258AD8;
loc_82258AC0:
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// blt cr6,0x82258adc
	if (ctx.cr6.lt) goto loc_82258ADC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82258adc
	if (!ctx.cr6.lt) goto loc_82258ADC;
	// addi r11,r10,1024
	ctx.r11.s64 = ctx.r10.s64 + 1024;
loc_82258AD8:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
loc_82258ADC:
	// rlwinm r11,r4,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFC00;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258AEC"))) PPC_WEAK_FUNC(sub_82258AEC);
PPC_FUNC_IMPL(__imp__sub_82258AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258AF0"))) PPC_WEAK_FUNC(sub_82258AF0);
PPC_FUNC_IMPL(__imp__sub_82258AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258b08
	if (ctx.cr6.eq) goto loc_82258B08;
loc_82258B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82258B08:
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// beq 0x82258b34
	if (ctx.cr0.eq) goto loc_82258B34;
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258b00
	if (ctx.cr0.eq) goto loc_82258B00;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258b40
	if (ctx.cr6.eq) goto loc_82258B40;
	// b 0x82258b00
	goto loc_82258B00;
loc_82258B34:
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82258B40:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258B48"))) PPC_WEAK_FUNC(sub_82258B48);
PPC_FUNC_IMPL(__imp__sub_82258B48) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82258b5c
	if (ctx.cr6.lt) goto loc_82258B5C;
loc_82258B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82258B5C:
	// rlwinm r10,r3,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82258b54
	if (!ctx.cr6.lt) goto loc_82258B54;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82258b94
	if (!ctx.cr0.eq) goto loc_82258B94;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82258B94:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258B9C"))) PPC_WEAK_FUNC(sub_82258B9C);
PPC_FUNC_IMPL(__imp__sub_82258B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258BA0"))) PPC_WEAK_FUNC(sub_82258BA0);
PPC_FUNC_IMPL(__imp__sub_82258BA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82258bbc
	if (!ctx.cr6.eq) goto loc_82258BBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82258BBC:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82258bdc
	if (!ctx.cr6.eq) goto loc_82258BDC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82258BDC:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258BF8"))) PPC_WEAK_FUNC(sub_82258BF8);
PPC_FUNC_IMPL(__imp__sub_82258BF8) {
	PPC_FUNC_PROLOGUE();
loc_82258BF8:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82258c28
	if (!ctx.cr6.eq) goto loc_82258C28;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258c58
	if (ctx.cr6.eq) goto loc_82258C58;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82258c30
	goto loc_82258C30;
loc_82258C28:
	// rlwinm r11,r11,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
loc_82258C30:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258bf8
	if (ctx.cr0.eq) goto loc_82258BF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82258C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258C60"))) PPC_WEAK_FUNC(sub_82258C60);
PPC_FUNC_IMPL(__imp__sub_82258C60) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258ca0
	if (ctx.cr0.eq) goto loc_82258CA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r31,8192
	ctx.r31.s64 = 536870912;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822628e8
	ctx.lr = 0x82258C9C;
	sub_822628E8(ctx, base);
	// b 0x82258cbc
	goto loc_82258CBC;
loc_82258CA0:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822628e8
	ctx.lr = 0x82258CBC;
	sub_822628E8(ctx, base);
loc_82258CBC:
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

__attribute__((alias("__imp__sub_82258CD0"))) PPC_WEAK_FUNC(sub_82258CD0);
PPC_FUNC_IMPL(__imp__sub_82258CD0) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82258cf8
	if (ctx.cr6.eq) goto loc_82258CF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82258d50
	goto loc_82258D50;
loc_82258CF8:
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258d10
	if (ctx.cr0.eq) goto loc_82258D10;
	// bl 0x82261a98
	ctx.lr = 0x82258D0C;
	sub_82261A98(ctx, base);
	// b 0x82258d28
	goto loc_82258D28;
loc_82258D10:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82261aa0
	ctx.lr = 0x82258D28;
	sub_82261AA0(ctx, base);
loc_82258D28:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82258D30:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82258d30
	if (!ctx.cr0.eq) goto loc_82258D30;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
loc_82258D50:
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

__attribute__((alias("__imp__sub_82258D64"))) PPC_WEAK_FUNC(sub_82258D64);
PPC_FUNC_IMPL(__imp__sub_82258D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258D68"))) PPC_WEAK_FUNC(sub_82258D68);
PPC_FUNC_IMPL(__imp__sub_82258D68) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82256ca8
	ctx.lr = 0x82258D84;
	sub_82256CA8(ctx, base);
	// lhz r11,1082(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1082);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,1082(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1082, ctx.r11.u16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82258da4
	if (!ctx.cr6.eq) goto loc_82258DA4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82258db8
	goto loc_82258DB8;
loc_82258DA4:
	// bl 0x821f7f18
	ctx.lr = 0x82258DA8;
	sub_821F7F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82262720
	ctx.lr = 0x82258DB8;
	sub_82262720(ctx, base);
loc_82258DB8:
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

__attribute__((alias("__imp__sub_82258DCC"))) PPC_WEAK_FUNC(sub_82258DCC);
PPC_FUNC_IMPL(__imp__sub_82258DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258DD0"))) PPC_WEAK_FUNC(sub_82258DD0);
PPC_FUNC_IMPL(__imp__sub_82258DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1040(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// addi r11,r3,1040
	ctx.r11.s64 = ctx.r3.s64 + 1040;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82258e50
	if (ctx.cr6.eq) goto loc_82258E50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82258df8
	if (ctx.cr6.eq) goto loc_82258DF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82258DF8:
	// lhz r10,820(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 820);
	// lhz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 896);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82258e48
	if (!ctx.cr0.gt) goto loc_82258E48;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82258e40
	if (ctx.cr6.lt) goto loc_82258E40;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82258e30
	if (!ctx.cr6.lt) goto loc_82258E30;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82258e3c
	goto loc_82258E3C;
loc_82258E30:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82258E3C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82258E40:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82258e4c
	goto loc_82258E4C;
loc_82258E48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82258E4C:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_82258E50:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258E58"))) PPC_WEAK_FUNC(sub_82258E58);
PPC_FUNC_IMPL(__imp__sub_82258E58) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82258e6c
	if (!ctx.cr6.lt) goto loc_82258E6C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82258e98
	goto loc_82258E98;
loc_82258E6C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// bge cr6,0x82258e88
	if (!ctx.cr6.lt) goto loc_82258E88;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x82258e94
	goto loc_82258E94;
loc_82258E88:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
loc_82258E94:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82258E98:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r9,898(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 898);
	// lhz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 896);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258EB4"))) PPC_WEAK_FUNC(sub_82258EB4);
PPC_FUNC_IMPL(__imp__sub_82258EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258EB8"))) PPC_WEAK_FUNC(sub_82258EB8);
PPC_FUNC_IMPL(__imp__sub_82258EB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1040
	ctx.r11.s64 = ctx.r3.s64 + 1040;
	// lhz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 896);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82258ee0
	if (ctx.cr6.eq) goto loc_82258EE0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82258EE0:
	// lhz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 820);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258F00"))) PPC_WEAK_FUNC(sub_82258F00);
PPC_FUNC_IMPL(__imp__sub_82258F00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// addi r10,r3,1008
	ctx.r10.s64 = ctx.r3.s64 + 1008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258f64
	if (ctx.cr6.eq) goto loc_82258F64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82258f64
	if (ctx.cr0.eq) goto loc_82258F64;
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
loc_82258F1C:
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82258f50
	if (!ctx.cr6.lt) goto loc_82258F50;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82258f84
	if (!ctx.cr6.eq) goto loc_82258F84;
	// lhz r9,332(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 332);
	// lhz r7,316(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 316);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x82258f84
	if (!ctx.cr6.lt) goto loc_82258F84;
loc_82258F50:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258f64
	if (ctx.cr6.eq) goto loc_82258F64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82258f1c
	if (!ctx.cr0.eq) goto loc_82258F1C;
loc_82258F64:
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82258F84:
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258FA4"))) PPC_WEAK_FUNC(sub_82258FA4);
PPC_FUNC_IMPL(__imp__sub_82258FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258FA8"))) PPC_WEAK_FUNC(sub_82258FA8);
PPC_FUNC_IMPL(__imp__sub_82258FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1012);
	// addi r10,r3,1008
	ctx.r10.s64 = ctx.r3.s64 + 1008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225900c
	if (ctx.cr6.eq) goto loc_8225900C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225900c
	if (ctx.cr0.eq) goto loc_8225900C;
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
loc_82258FC4:
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82258ff8
	if (!ctx.cr6.lt) goto loc_82258FF8;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8225902c
	if (!ctx.cr6.eq) goto loc_8225902C;
	// lhz r9,332(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 332);
	// lhz r7,316(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 316);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// blt cr6,0x8225902c
	if (ctx.cr6.lt) goto loc_8225902C;
loc_82258FF8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225900c
	if (ctx.cr6.eq) goto loc_8225900C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82258fc4
	if (!ctx.cr0.eq) goto loc_82258FC4;
loc_8225900C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8225902C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225904C"))) PPC_WEAK_FUNC(sub_8225904C);
PPC_FUNC_IMPL(__imp__sub_8225904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259050"))) PPC_WEAK_FUNC(sub_82259050);
PPC_FUNC_IMPL(__imp__sub_82259050) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1044(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// addi r11,r3,1040
	ctx.r11.s64 = ctx.r3.s64 + 1040;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82259094
	if (ctx.cr6.eq) goto loc_82259094;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82259094
	if (ctx.cr0.eq) goto loc_82259094;
	// lhz r9,828(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 828);
loc_8225906C:
	// lhz r8,820(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 820);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r8,32768
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32768, ctx.xer);
	// blt cr6,0x822590c4
	if (ctx.cr6.lt) goto loc_822590C4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82259094
	if (ctx.cr6.eq) goto loc_82259094;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8225906c
	if (!ctx.cr0.eq) goto loc_8225906C;
loc_82259094:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822590B0:
	// lhz r11,1068(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1068);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,1068(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1068, ctx.r11.u16);
	// blr 
	return;
loc_822590C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82259094
	if (ctx.cr6.eq) goto loc_82259094;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822590b0
	goto loc_822590B0;
}

__attribute__((alias("__imp__sub_822590EC"))) PPC_WEAK_FUNC(sub_822590EC);
PPC_FUNC_IMPL(__imp__sub_822590EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822590F0"))) PPC_WEAK_FUNC(sub_822590F0);
PPC_FUNC_IMPL(__imp__sub_822590F0) {
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
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822627c0
	ctx.lr = 0x8225910C;
	sub_822627C0(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x822627c0
	ctx.lr = 0x82259114;
	sub_822627C0(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x822627c0
	ctx.lr = 0x8225911C;
	sub_822627C0(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822627c0
	ctx.lr = 0x82259124;
	sub_822627C0(ctx, base);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82259144"))) PPC_WEAK_FUNC(sub_82259144);
PPC_FUNC_IMPL(__imp__sub_82259144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259148"))) PPC_WEAK_FUNC(sub_82259148);
PPC_FUNC_IMPL(__imp__sub_82259148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82259150;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82259174;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,476
	ctx.r29.s64 = ctx.r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x82259190;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822591b8
	if (!ctx.cr0.eq) goto loc_822591B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623a0
	ctx.lr = 0x822591A4;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822591b8
	if (!ctx.cr0.eq) goto loc_822591B8;
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4111
	ctx.r31.u64 = ctx.r31.u64 | 4111;
	// b 0x822591cc
	goto loc_822591CC;
loc_822591B8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82264140
	ctx.lr = 0x822591C8;
	sub_82264140(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822591CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x822591D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822591E0"))) PPC_WEAK_FUNC(sub_822591E0);
PPC_FUNC_IMPL(__imp__sub_822591E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822591E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82259204;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r11,r30,-8192
	ctx.r11.s64 = ctx.r30.s64 + -536870912;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822592b0
	if (ctx.cr6.gt) goto loc_822592B0;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27216
	ctx.r12.s64 = ctx.r12.s64 + -27216;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,-28104
	ctx.r12.s64 = ctx.r12.s64 + -28104;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82259238;
	case 1:
		goto loc_82259248;
	case 2:
		goto loc_82259250;
	case 3:
		goto loc_82259260;
	case 4:
		goto loc_82259278;
	case 5:
		goto loc_82259280;
	case 6:
		goto loc_82259288;
	case 7:
		goto loc_82259290;
	case 8:
		goto loc_82259298;
	case 9:
		goto loc_822592A0;
	default:
		__builtin_unreachable();
	}
loc_82259238:
	// ld r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 808);
loc_8225923C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822592b8
	goto loc_822592B8;
loc_82259248:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// b 0x8225923c
	goto loc_8225923C;
loc_82259250:
	// lwz r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// lwz r10,1180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8225923c
	goto loc_8225923C;
loc_82259260:
	// ld r11,1208(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1208);
	// ld r10,1200(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1200);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8225926C:
	// li r30,0
	ctx.r30.s64 = 0;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// b 0x822592b8
	goto loc_822592B8;
loc_82259278:
	// lwz r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// b 0x8225923c
	goto loc_8225923C;
loc_82259280:
	// ld r11,1208(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1208);
	// b 0x8225926c
	goto loc_8225926C;
loc_82259288:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// b 0x8225923c
	goto loc_8225923C;
loc_82259290:
	// ld r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1216);
	// b 0x8225926c
	goto loc_8225926C;
loc_82259298:
	// lwz r11,1192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// b 0x8225923c
	goto loc_8225923C;
loc_822592A0:
	// lhz r11,1066(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// lhz r10,1062(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1062);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x8225923c
	goto loc_8225923C;
loc_822592B0:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
loc_822592B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x822592C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822592CC"))) PPC_WEAK_FUNC(sub_822592CC);
PPC_FUNC_IMPL(__imp__sub_822592CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822592D0"))) PPC_WEAK_FUNC(sub_822592D0);
PPC_FUNC_IMPL(__imp__sub_822592D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822592D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x822595fc
	if (ctx.cr6.gt) goto loc_822595FC;
	// beq cr6,0x822595e8
	if (ctx.cr6.eq) goto loc_822595E8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x822596e4
	if (ctx.cr6.gt) goto loc_822596E4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27184
	ctx.r12.s64 = ctx.r12.s64 + -27184;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,-27864
	ctx.r12.s64 = ctx.r12.s64 + -27864;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82259328;
	case 1:
		goto loc_82259358;
	case 2:
		goto loc_822596E4;
	case 3:
		goto loc_8225936C;
	case 4:
		goto loc_822593DC;
	case 5:
		goto loc_822593F0;
	case 6:
		goto loc_822596E4;
	case 7:
		goto loc_822596E4;
	case 8:
		goto loc_82259404;
	case 9:
		goto loc_82259418;
	case 10:
		goto loc_8225942C;
	case 11:
		goto loc_82259440;
	case 12:
		goto loc_82259454;
	case 13:
		goto loc_82259468;
	case 14:
		goto loc_822596E4;
	case 15:
		goto loc_8225947C;
	case 16:
		goto loc_82259490;
	case 17:
		goto loc_822594A4;
	case 18:
		goto loc_822594F4;
	case 19:
		goto loc_82259544;
	case 20:
		goto loc_822596E4;
	case 21:
		goto loc_82259558;
	case 22:
		goto loc_8225956C;
	case 23:
		goto loc_82259580;
	case 24:
		goto loc_82259594;
	case 25:
		goto loc_822595A8;
	case 26:
		goto loc_822595C0;
	case 27:
		goto loc_822595D4;
	default:
		__builtin_unreachable();
	}
loc_82259328:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
loc_82259338:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8225934c
	goto loc_8225934C;
loc_82259344:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4097
	ctx.r3.u64 = ctx.r3.u64 | 4097;
loc_8225934C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x822596ec
	goto loc_822596EC;
loc_82259358:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// b 0x82259338
	goto loc_82259338;
loc_8225936C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8225937c
	if (!ctx.cr6.eq) goto loc_8225937C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// b 0x822593c4
	goto loc_822593C4;
loc_8225937C:
	// addi r29,r3,476
	ctx.r29.s64 = ctx.r3.s64 + 476;
	// addi r5,r3,536
	ctx.r5.s64 = ctx.r3.s64 + 536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x82259398;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822593c0
	if (!ctx.cr0.eq) goto loc_822593C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623a0
	ctx.lr = 0x822593AC;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822593c0
	if (!ctx.cr0.eq) goto loc_822593C0;
loc_822593B4:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4111
	ctx.r3.u64 = ctx.r3.u64 | 4111;
	// b 0x822596ec
	goto loc_822596EC;
loc_822593C0:
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
loc_822593C4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
loc_822593D0:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225934c
	goto loc_8225934C;
loc_822593DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// b 0x82259338
	goto loc_82259338;
loc_822593F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// b 0x82259338
	goto loc_82259338;
loc_82259404:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82259338
	goto loc_82259338;
loc_82259418:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lhz r11,1058(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1058);
	// b 0x82259338
	goto loc_82259338;
loc_8225942C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lhz r11,1060(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1060);
	// b 0x82259338
	goto loc_82259338;
loc_82259440:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lhz r11,1062(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1062);
	// b 0x82259338
	goto loc_82259338;
loc_82259454:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lhz r11,1064(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1064);
	// b 0x82259338
	goto loc_82259338;
loc_82259468:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x82259338
	goto loc_82259338;
loc_8225947C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// b 0x82259338
	goto loc_82259338;
loc_82259490:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82259338
	goto loc_82259338;
loc_822594A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822594b4
	if (!ctx.cr6.eq) goto loc_822594B4;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x822593c4
	goto loc_822593C4;
loc_822594B4:
	// addi r29,r3,476
	ctx.r29.s64 = ctx.r3.s64 + 476;
	// addi r5,r3,536
	ctx.r5.s64 = ctx.r3.s64 + 536;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x822594D0;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822594ec
	if (!ctx.cr0.eq) goto loc_822594EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623a0
	ctx.lr = 0x822594E4;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822593b4
	if (ctx.cr0.eq) goto loc_822593B4;
loc_822594EC:
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x822593c4
	goto loc_822593C4;
loc_822594F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82259504
	if (!ctx.cr6.eq) goto loc_82259504;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x822593c4
	goto loc_822593C4;
loc_82259504:
	// addi r29,r3,476
	ctx.r29.s64 = ctx.r3.s64 + 476;
	// addi r5,r3,536
	ctx.r5.s64 = ctx.r3.s64 + 536;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x82259520;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225953c
	if (!ctx.cr0.eq) goto loc_8225953C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623a0
	ctx.lr = 0x82259534;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822593b4
	if (ctx.cr0.eq) goto loc_822593B4;
loc_8225953C:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x822593c4
	goto loc_822593C4;
loc_82259544:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x82259338
	goto loc_82259338;
loc_82259558:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x82259338
	goto loc_82259338;
loc_8225956C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x82259338
	goto loc_82259338;
loc_82259580:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// b 0x82259338
	goto loc_82259338;
loc_82259594:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x82259338
	goto loc_82259338;
loc_822595A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,1176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// b 0x82259338
	goto loc_82259338;
loc_822595C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// b 0x82259338
	goto loc_82259338;
loc_822595D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// b 0x82259338
	goto loc_82259338;
loc_822595E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// b 0x82259338
	goto loc_82259338;
loc_822595FC:
	// addi r11,r5,-4098
	ctx.r11.s64 = ctx.r5.s64 + -4098;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x822596e4
	if (ctx.cr6.gt) goto loc_822596E4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27200
	ctx.r12.s64 = ctx.r12.s64 + -27200;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,-27088
	ctx.r12.s64 = ctx.r12.s64 + -27088;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82259630;
	case 1:
		goto loc_82259658;
	case 2:
		goto loc_8225966C;
	case 3:
		goto loc_82259680;
	case 4:
		goto loc_82259694;
	case 5:
		goto loc_822596A8;
	case 6:
		goto loc_822596E4;
	case 7:
		goto loc_822596BC;
	case 8:
		goto loc_822596D0;
	default:
		__builtin_unreachable();
	}
loc_82259630:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,1176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82259650
	if (ctx.cr0.eq) goto loc_82259650;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// b 0x822593d0
	goto loc_822593D0;
loc_82259650:
	// lwz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// b 0x822593d0
	goto loc_822593D0;
loc_82259658:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// b 0x82259338
	goto loc_82259338;
loc_8225966C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lhz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// b 0x82259338
	goto loc_82259338;
loc_82259680:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// b 0x82259338
	goto loc_82259338;
loc_82259694:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lhz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 128);
	// b 0x82259338
	goto loc_82259338;
loc_822596A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// b 0x82259338
	goto loc_82259338;
loc_822596BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x82259338
	goto loc_82259338;
loc_822596D0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82259344
	if (ctx.cr6.lt) goto loc_82259344;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// b 0x82259338
	goto loc_82259338;
loc_822596E4:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
loc_822596EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822596F4"))) PPC_WEAK_FUNC(sub_822596F4);
PPC_FUNC_IMPL(__imp__sub_822596F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822596F8"))) PPC_WEAK_FUNC(sub_822596F8);
PPC_FUNC_IMPL(__imp__sub_822596F8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225974c
	if (!ctx.cr0.eq) goto loc_8225974C;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82259740
	if (!ctx.cr6.eq) goto loc_82259740;
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225974c
	if (!ctx.cr0.eq) goto loc_8225974C;
	// lwz r10,580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r10.u32);
	// b 0x8225974c
	goto loc_8225974C;
loc_82259740:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r10.u32);
loc_8225974C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,1074(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1074);
	// bl 0x82265598
	ctx.lr = 0x82259758;
	sub_82265598(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x82259784;
	sub_82256CA8(ctx, base);
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

__attribute__((alias("__imp__sub_82259798"))) PPC_WEAK_FUNC(sub_82259798);
PPC_FUNC_IMPL(__imp__sub_82259798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// addi r8,r3,572
	ctx.r8.s64 = ctx.r3.s64 + 572;
	// b 0x822597e4
	goto loc_822597E4;
loc_822597A4:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822597e0
	if (!ctx.cr6.eq) goto loc_822597E0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r7,r10,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x822597e0
	if (!ctx.cr0.eq) goto loc_822597E0;
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822597e0
	if (!ctx.cr0.eq) goto loc_822597E0;
	// lwz r10,580(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_822597E0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_822597E4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne 0x822597a4
	if (!ctx.cr0.eq) goto loc_822597A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822597FC"))) PPC_WEAK_FUNC(sub_822597FC);
PPC_FUNC_IMPL(__imp__sub_822597FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259800"))) PPC_WEAK_FUNC(sub_82259800);
PPC_FUNC_IMPL(__imp__sub_82259800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82259808;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// sth r11,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r11.u16);
	// lwz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82259880
	if (!ctx.cr6.gt) goto loc_82259880;
	// lwz r31,572(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// addi r30,r3,572
	ctx.r30.s64 = ctx.r3.s64 + 572;
	// b 0x82259870
	goto loc_82259870;
loc_82259838:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225986c
	if (!ctx.cr6.eq) goto loc_8225986C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225986c
	if (!ctx.cr0.eq) goto loc_8225986C;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225986c
	if (!ctx.cr0.eq) goto loc_8225986C;
	// ld r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82265850
	ctx.lr = 0x8225986C;
	sub_82265850(ctx, base);
loc_8225986C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82259870:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82259880
	if (ctx.cr6.eq) goto loc_82259880;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82259838
	if (!ctx.cr0.eq) goto loc_82259838;
loc_82259880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82259888"))) PPC_WEAK_FUNC(sub_82259888);
PPC_FUNC_IMPL(__imp__sub_82259888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// addi r10,r3,572
	ctx.r10.s64 = ctx.r3.s64 + 572;
	// b 0x822598cc
	goto loc_822598CC;
loc_82259894:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822598c8
	if (!ctx.cr6.eq) goto loc_822598C8;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822598c8
	if (!ctx.cr6.eq) goto loc_822598C8;
	// lhz r8,34(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r5,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r5.u16);
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// sth r8,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r8.u16);
loc_822598C8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_822598CC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne 0x82259894
	if (!ctx.cr0.eq) goto loc_82259894;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822598E4"))) PPC_WEAK_FUNC(sub_822598E4);
PPC_FUNC_IMPL(__imp__sub_822598E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822598E8"))) PPC_WEAK_FUNC(sub_822598E8);
PPC_FUNC_IMPL(__imp__sub_822598E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x822598F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r22,r31,40
	ctx.r22.s64 = ctx.r31.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82259920;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,476
	ctx.r29.s64 = ctx.r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x8225993C;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82259964
	if (!ctx.cr0.eq) goto loc_82259964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623a0
	ctx.lr = 0x82259950;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82259964
	if (!ctx.cr0.eq) goto loc_82259964;
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4111
	ctx.r31.u64 = ctx.r31.u64 | 4111;
	// b 0x82259984
	goto loc_82259984;
loc_82259964:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822643d8
	ctx.lr = 0x82259980;
	sub_822643D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82259984:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225998C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82259998"))) PPC_WEAK_FUNC(sub_82259998);
PPC_FUNC_IMPL(__imp__sub_82259998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822599A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82247a60
	ctx.lr = 0x822599BC;
	sub_82247A60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822599cc
	if (!ctx.cr0.eq) goto loc_822599CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82259a00
	goto loc_82259A00;
loc_822599CC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822599f4
	if (ctx.cr6.eq) goto loc_822599F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82219130
	ctx.lr = 0x822599E8;
	sub_82219130(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82247a78
	ctx.lr = 0x822599F4;
	sub_82247A78(ctx, base);
loc_822599F4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82259A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82259A08"))) PPC_WEAK_FUNC(sub_82259A08);
PPC_FUNC_IMPL(__imp__sub_82259A08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82259a8c
	goto loc_82259A8C;
loc_82259A14:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bge cr6,0x82259a4c
	if (!ctx.cr6.lt) goto loc_82259A4C;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r5,r6
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x82259a4c
	if (!ctx.cr6.lt) goto loc_82259A4C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82259A4C:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwx r10,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82259A8C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82259a14
	if (ctx.cr6.lt) goto loc_82259A14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82259A9C"))) PPC_WEAK_FUNC(sub_82259A9C);
PPC_FUNC_IMPL(__imp__sub_82259A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259AA0"))) PPC_WEAK_FUNC(sub_82259AA0);
PPC_FUNC_IMPL(__imp__sub_82259AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82259AA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82259c30
	if (!ctx.cr6.eq) goto loc_82259C30;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x82256ca8
	ctx.lr = 0x82259AC4;
	sub_82256CA8(ctx, base);
	// lhz r9,1066(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r9,1066(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1066, ctx.r9.u16);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r29,428(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r9,1176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm. r9,r9,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82259b88
	if (ctx.cr0.eq) goto loc_82259B88;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// beq cr6,0x82259b40
	if (ctx.cr6.eq) goto loc_82259B40;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82261088
	ctx.lr = 0x82259B1C;
	sub_82261088(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82260970
	ctx.lr = 0x82259B2C;
	sub_82260970(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82259b40
	if (!ctx.cr6.eq) goto loc_82259B40;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82259B40:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,40
	ctx.r8.s64 = 40;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,7
	ctx.r6.s64 = 7;
	// lbz r5,676(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 676);
	// addi r4,r31,676
	ctx.r4.s64 = ctx.r31.s64 + 676;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// addi r11,r31,1124
	ctx.r11.s64 = ctx.r31.s64 + 1124;
	// stw r8,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r8.u32);
	// stw r6,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r6.u32);
	// stw r9,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// stw r7,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r7.u32);
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// stw r28,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r28.u32);
	// stw r30,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r30.u32);
	// stw r10,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r10.u32);
	// stb r5,1124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1124, ctx.r5.u8);
	// b 0x82259c10
	goto loc_82259C10;
loc_82259B88:
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// beq cr6,0x82259bc8
	if (ctx.cr6.eq) goto loc_82259BC8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82261148
	ctx.lr = 0x82259BAC;
	sub_82261148(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82259bc4
	if (ctx.cr6.eq) goto loc_82259BC4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x82259bc8
	goto loc_82259BC8;
loc_82259BC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82259BC8:
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,40
	ctx.r7.s64 = 40;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r31,676
	ctx.r9.s64 = ctx.r31.s64 + 676;
	// lbz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 676);
	// addi r9,r31,1124
	ctx.r9.s64 = ctx.r31.s64 + 1124;
	// stw r7,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r7.u32);
	// stw r5,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r5.u32);
	// stw r8,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r8.u32);
	// stw r6,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r6.u32);
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// stw r28,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r28.u32);
	// stw r4,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r4.u32);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// stw r10,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r10.u32);
	// stb r3,1124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1124, ctx.r3.u8);
loc_82259C10:
	// lbz r11,677(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 677);
	// stb r11,1125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1125, ctx.r11.u8);
	// lbz r11,678(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 678);
	// stb r11,1126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1126, ctx.r11.u8);
	// lbz r11,679(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 679);
	// stb r11,1127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1127, ctx.r11.u8);
	// stw r29,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r29.u32);
	// b 0x82259cec
	goto loc_82259CEC;
loc_82259C30:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,40
	ctx.r11.s64 = 40;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// addi r11,r31,676
	ctx.r11.s64 = ctx.r31.s64 + 676;
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// addi r11,r31,1124
	ctx.r11.s64 = ctx.r31.s64 + 1124;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// bne cr6,0x82259c94
	if (!ctx.cr6.eq) goto loc_82259C94;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r7,676(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 676);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r6,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r6.u32);
	// stw r10,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r10.u32);
	// stw r9,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r9.u32);
	// stw r5,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r5.u32);
	// stw r28,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r28.u32);
	// stw r8,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r8.u32);
	// stb r7,1124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1124, ctx.r7.u8);
	// b 0x82259cd0
	goto loc_82259CD0;
loc_82259C94:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r6,676(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 676);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r5,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r5.u32);
	// stw r9,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// stw r8,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r8.u32);
	// stw r4,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r4.u32);
	// stw r10,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r10.u32);
	// stw r7,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r7.u32);
	// stb r6,1124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1124, ctx.r6.u8);
loc_82259CD0:
	// lbz r11,677(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 677);
	// stb r11,1125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1125, ctx.r11.u8);
	// lbz r11,678(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 678);
	// stb r11,1126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1126, ctx.r11.u8);
	// lbz r11,679(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 679);
	// stb r11,1127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1127, ctx.r11.u8);
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
loc_82259CEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82259CF4"))) PPC_WEAK_FUNC(sub_82259CF4);
PPC_FUNC_IMPL(__imp__sub_82259CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259CF8"))) PPC_WEAK_FUNC(sub_82259CF8);
PPC_FUNC_IMPL(__imp__sub_82259CF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,1066(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1066);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82259d24
	if (!ctx.cr6.eq) goto loc_82259D24;
	// lwz r10,560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// cmplwi cr6,r10,1184
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1184, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82259D24:
	// lhz r10,1056(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1056);
	// lhz r9,1070(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1070);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lhz r8,1074(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1074);
	// lhz r7,1080(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1080);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bne cr6,0x82259d68
	if (!ctx.cr6.eq) goto loc_82259D68;
	// lhz r11,1004(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1004);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82259D68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82259D70"))) PPC_WEAK_FUNC(sub_82259D70);
PPC_FUNC_IMPL(__imp__sub_82259D70) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,468(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259dc0
	if (ctx.cr6.eq) goto loc_82259DC0;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259dac
	if (ctx.cr6.lt) goto loc_82259DAC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82259dbc
	goto loc_82259DBC;
loc_82259DAC:
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82259dbc
	if (!ctx.cr6.lt) goto loc_82259DBC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82259DBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82259DC0:
	// lwz r9,472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259df8
	if (ctx.cr6.eq) goto loc_82259DF8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259de4
	if (ctx.cr6.lt) goto loc_82259DE4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82259df4
	goto loc_82259DF4;
loc_82259DE4:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82259df4
	if (!ctx.cr6.lt) goto loc_82259DF4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82259DF4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82259DF8:
	// lhz r7,1074(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1074);
	// lhz r11,1056(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1056);
	// lwz r9,1052(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1052);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lhz r30,1080(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1080);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82259e4c
	if (ctx.cr6.lt) goto loc_82259E4C;
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259e4c
	if (ctx.cr6.eq) goto loc_82259E4C;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259e38
	if (ctx.cr6.lt) goto loc_82259E38;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82259e48
	goto loc_82259E48;
loc_82259E38:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82259e48
	if (!ctx.cr6.lt) goto loc_82259E48;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82259E48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82259E4C:
	// lwz r11,616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82259e94
	if (!ctx.cr6.eq) goto loc_82259E94;
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82259e94
	if (!ctx.cr6.gt) goto loc_82259E94;
	// lwz r11,136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259e94
	if (ctx.cr6.eq) goto loc_82259E94;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259e80
	if (ctx.cr6.lt) goto loc_82259E80;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82259e90
	goto loc_82259E90;
loc_82259E80:
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82259e90
	if (!ctx.cr6.lt) goto loc_82259E90;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82259E90:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82259E94:
	// lhz r11,1086(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1086);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82259edc
	if (!ctx.cr6.lt) goto loc_82259EDC;
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259edc
	if (ctx.cr6.eq) goto loc_82259EDC;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259ec8
	if (ctx.cr6.lt) goto loc_82259EC8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82259ed8
	goto loc_82259ED8;
loc_82259EC8:
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82259ed8
	if (!ctx.cr6.lt) goto loc_82259ED8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82259ED8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82259EDC:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82259EEC"))) PPC_WEAK_FUNC(sub_82259EEC);
PPC_FUNC_IMPL(__imp__sub_82259EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259EF0"))) PPC_WEAK_FUNC(sub_82259EF0);
PPC_FUNC_IMPL(__imp__sub_82259EF0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r31,1008
	ctx.r10.s64 = ctx.r31.s64 + 1008;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82259f20
	if (ctx.cr6.eq) goto loc_82259F20;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82259f2c
	if (!ctx.cr0.eq) goto loc_82259F2C;
loc_82259F20:
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x822627c0
	ctx.lr = 0x82259F28;
	sub_822627C0(ctx, base);
	// b 0x82259f90
	goto loc_82259F90;
loc_82259F2C:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82259f5c
	if (ctx.cr6.lt) goto loc_82259F5C;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x822627c0
	ctx.lr = 0x82259F4C;
	sub_822627C0(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// b 0x82259f90
	goto loc_82259F90;
loc_82259F5C:
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82259f74
	if (ctx.cr0.eq) goto loc_82259F74;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82259f90
	if (ctx.cr6.eq) goto loc_82259F90;
loc_82259F74:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82259f84
	if (ctx.cr6.lt) goto loc_82259F84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82259F84:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82262720
	ctx.lr = 0x82259F90;
	sub_82262720(ctx, base);
loc_82259F90:
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

__attribute__((alias("__imp__sub_82259FA4"))) PPC_WEAK_FUNC(sub_82259FA4);
PPC_FUNC_IMPL(__imp__sub_82259FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259FA8"))) PPC_WEAK_FUNC(sub_82259FA8);
PPC_FUNC_IMPL(__imp__sub_82259FA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// lbz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// rlwinm r11,r11,0,12,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF8FFFFF;
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// stb r10,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r10.u8);
	// beq 0x8225a00c
	if (ctx.cr0.eq) goto loc_8225A00C;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// bl 0x82259d70
	ctx.lr = 0x82259FEC;
	sub_82259D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// beq 0x8225a008
	if (ctx.cr0.eq) goto loc_8225A008;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82262720
	ctx.lr = 0x8225A004;
	sub_82262720(ctx, base);
	// b 0x8225a00c
	goto loc_8225A00C;
loc_8225A008:
	// bl 0x822627c0
	ctx.lr = 0x8225A00C;
	sub_822627C0(ctx, base);
loc_8225A00C:
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

__attribute__((alias("__imp__sub_8225A020"))) PPC_WEAK_FUNC(sub_8225A020);
PPC_FUNC_IMPL(__imp__sub_8225A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8225A028;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lhz r4,896(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 896);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// addi r26,r31,896
	ctx.r26.s64 = ctx.r31.s64 + 896;
	// bl 0x82258a98
	ctx.lr = 0x8225A058;
	sub_82258A98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82258eb8
	ctx.lr = 0x8225A064;
	sub_82258EB8(ctx, base);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// lhz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225a088
	if (!ctx.cr6.lt) goto loc_8225A088;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8225a094
	if (ctx.cr6.gt) goto loc_8225A094;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
loc_8225A088:
	// bne cr6,0x8225a10c
	if (!ctx.cr6.eq) goto loc_8225A10C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8225a10c
	if (ctx.cr6.eq) goto loc_8225A10C;
loc_8225A094:
	// lhz r28,1070(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1070);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82258a98
	ctx.lr = 0x8225A0A4;
	sub_82258A98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// cmpwi cr6,r27,-256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -256, ctx.xer);
	// blt cr6,0x8225a10c
	if (ctx.cr6.lt) goto loc_8225A10C;
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 256, ctx.xer);
	// bgt cr6,0x8225a10c
	if (ctx.cr6.gt) goto loc_8225A10C;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8225a10c
	if (ctx.cr0.lt) goto loc_8225A10C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8225a118
	if (ctx.cr6.eq) goto loc_8225A118;
	// lwz r28,268(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82265b90
	ctx.lr = 0x8225A0F4;
	sub_82265B90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8225a124
	if (ctx.cr0.gt) goto loc_8225A124;
loc_8225A10C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225A110:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_8225A118:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8225A124:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r29,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r29.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r30,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r30.u16);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// bl 0x82265950
	ctx.lr = 0x8225A140;
	sub_82265950(ctx, base);
	// b 0x8225a110
	goto loc_8225A110;
}

__attribute__((alias("__imp__sub_8225A144"))) PPC_WEAK_FUNC(sub_8225A144);
PPC_FUNC_IMPL(__imp__sub_8225A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A148"))) PPC_WEAK_FUNC(sub_8225A148);
PPC_FUNC_IMPL(__imp__sub_8225A148) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1172);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8225a178
	if (!ctx.cr6.eq) goto loc_8225A178;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// stb r10,1172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1172, ctx.r10.u8);
	// b 0x822627c0
	sub_822627C0(ctx, base);
	return;
loc_8225A178:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8225a188
	if (!ctx.cr6.eq) goto loc_8225A188;
	// lhz r4,1060(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1060);
	// b 0x8225a18c
	goto loc_8225A18C;
loc_8225A188:
	// lhz r4,1058(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1058);
loc_8225A18C:
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225a1b4
	if (ctx.cr0.eq) goto loc_8225A1B4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8225A1B4:
	// b 0x82262720
	sub_82262720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A1B8"))) PPC_WEAK_FUNC(sub_8225A1B8);
PPC_FUNC_IMPL(__imp__sub_8225A1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225A1BC"))) PPC_WEAK_FUNC(sub_8225A1BC);
PPC_FUNC_IMPL(__imp__sub_8225A1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A1C0"))) PPC_WEAK_FUNC(sub_8225A1C0);
PPC_FUNC_IMPL(__imp__sub_8225A1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8225A1C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8225a1e8
	if (!ctx.cr6.lt) goto loc_8225A1E8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8225a214
	goto loc_8225A214;
loc_8225A1E8:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// bge cr6,0x8225a204
	if (!ctx.cr6.lt) goto loc_8225A204;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x8225a210
	goto loc_8225A210;
loc_8225A204:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
loc_8225A210:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8225A214:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r11,1074(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1074);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x8225a240
	if (!ctx.cr6.lt) goto loc_8225A240;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8225a3e8
	goto loc_8225A3E8;
loc_8225A240:
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// rlwinm r10,r29,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225a2a8
	if (ctx.cr6.eq) goto loc_8225A2A8;
	// lwz r31,516(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// addi r30,r28,516
	ctx.r30.s64 = ctx.r28.s64 + 516;
	// b 0x8225a26c
	goto loc_8225A26C;
loc_8225A25C:
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822642c0
	ctx.lr = 0x8225A268;
	sub_822642C0(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8225A26C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225a27c
	if (ctx.cr6.eq) goto loc_8225A27C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8225a25c
	if (!ctx.cr0.eq) goto loc_8225A25C;
loc_8225A27C:
	// lwz r31,524(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// addi r30,r28,524
	ctx.r30.s64 = ctx.r28.s64 + 524;
	// b 0x8225a298
	goto loc_8225A298;
loc_8225A288:
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822642c0
	ctx.lr = 0x8225A294;
	sub_822642C0(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8225A298:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225a2a8
	if (ctx.cr6.eq) goto loc_8225A2A8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8225a288
	if (!ctx.cr0.eq) goto loc_8225A288;
loc_8225A2A8:
	// lwz r11,1176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1176);
	// addi r31,r28,1032
	ctx.r31.s64 = ctx.r28.s64 + 1032;
	// sth r29,1074(r28)
	PPC_STORE_U16(ctx.r28.u32 + 1074, ctx.r29.u16);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r27,1052(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1052, ctx.r27.u32);
	// stw r11,1176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1176, ctx.r11.u32);
	// lwz r11,1032(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1032);
	// b 0x8225a340
	goto loc_8225A340;
loc_8225A2C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8225a2d8
	if (!ctx.cr6.eq) goto loc_8225A2D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225A2D8:
	// lhz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// subf r11,r29,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r29.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8225a348
	if (ctx.cr6.lt) goto loc_8225A348;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261b28
	ctx.lr = 0x8225A2FC;
	sub_82261B28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8225a328
	if (ctx.cr6.eq) goto loc_8225A328;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225A328:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225A330;
	sub_82256CA8(ctx, base);
	// lhz r11,1066(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1066);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1066(r28)
	PPC_STORE_U16(ctx.r28.u32 + 1066, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8225A340:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8225a2c8
	if (!ctx.cr6.eq) goto loc_8225A2C8;
loc_8225A348:
	// lhz r10,1074(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1074);
	// addi r30,r28,572
	ctx.r30.s64 = ctx.r28.s64 + 572;
	// lwz r11,572(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 572);
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// beq cr6,0x8225a3e4
	if (ctx.cr6.eq) goto loc_8225A3E4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225a3e4
	if (ctx.cr0.eq) goto loc_8225A3E4;
loc_8225A384:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r31,-8
	ctx.r29.s64 = ctx.r31.s64 + -8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225a39c
	if (ctx.cr6.eq) goto loc_8225A39C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8225A39C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225a3dc
	if (!ctx.cr6.eq) goto loc_8225A3DC;
	// ld r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 28);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82265850
	ctx.lr = 0x8225A3BC;
	sub_82265850(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82258af0
	ctx.lr = 0x8225A3C8;
	sub_82258AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225a3dc
	if (ctx.cr0.eq) goto loc_8225A3DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822596f8
	ctx.lr = 0x8225A3DC;
	sub_822596F8(ctx, base);
loc_8225A3DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8225a384
	if (!ctx.cr6.eq) goto loc_8225A384;
loc_8225A3E4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8225A3E8:
	// lhz r11,1056(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1056);
	// lhz r10,1074(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1074);
	// lhz r9,1080(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1080);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225a458
	if (ctx.cr6.lt) goto loc_8225A458;
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8225a458
	if (ctx.cr6.eq) goto loc_8225A458;
	// lwz r11,1052(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1052);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blt cr6,0x8225a428
	if (ctx.cr6.lt) goto loc_8225A428;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8225A428:
	// lwz r11,420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// addi r3,r28,364
	ctx.r3.s64 = ctx.r28.s64 + 364;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225a450
	if (ctx.cr0.eq) goto loc_8225A450;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225a458
	if (ctx.cr6.lt) goto loc_8225A458;
loc_8225A450:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82262720
	ctx.lr = 0x8225A458;
	sub_82262720(ctx, base);
loc_8225A458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A464"))) PPC_WEAK_FUNC(sub_8225A464);
PPC_FUNC_IMPL(__imp__sub_8225A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A468"))) PPC_WEAK_FUNC(sub_8225A468);
PPC_FUNC_IMPL(__imp__sub_8225A468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8225A470;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// rlwinm. r10,r6,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// beq 0x8225a4dc
	if (ctx.cr0.eq) goto loc_8225A4DC;
	// lhz r4,896(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 896);
	// rlwinm. r10,r11,0,17,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// bne 0x8225a590
	if (!ctx.cr0.eq) goto loc_8225A590;
	// bl 0x82258a98
	ctx.lr = 0x8225A4B0;
	sub_82258A98(ctx, base);
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8225a590
	if (!ctx.cr0.gt) goto loc_8225A590;
	// lhz r10,1064(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1064);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8225a590
	if (ctx.cr6.gt) goto loc_8225A590;
	// lbz r11,14(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 14);
	// sth r3,12(r25)
	PPC_STORE_U16(ctx.r25.u32 + 12, ctx.r3.u16);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,14(r25)
	PPC_STORE_U8(ctx.r25.u32 + 14, ctx.r11.u8);
	// b 0x8225a548
	goto loc_8225A548;
loc_8225A4DC:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82258b48
	ctx.lr = 0x8225A4EC;
	sub_82258B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225a590
	if (ctx.cr0.eq) goto loc_8225A590;
	// lbz r11,14(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 14);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq 0x8225a554
	if (ctx.cr0.eq) goto loc_8225A554;
	// bge cr6,0x8225a590
	if (!ctx.cr6.lt) goto loc_8225A590;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr. r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8225a530
	if (ctx.cr0.eq) goto loc_8225A530;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stbx r10,r28,r26
	PPC_STORE_U8(ctx.r28.u32 + ctx.r26.u32, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8225A530:
	// lbz r10,14(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 14);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// sth r11,12(r25)
	PPC_STORE_U16(ctx.r25.u32 + 12, ctx.r11.u16);
	// stb r10,14(r25)
	PPC_STORE_U8(ctx.r25.u32 + 14, ctx.r10.u8);
loc_8225A548:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8225A54C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_8225A554:
	// bgt cr6,0x8225a590
	if (ctx.cr6.gt) goto loc_8225A590;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225a590
	if (!ctx.cr6.lt) goto loc_8225A590;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8225a530
	if (ctx.cr6.eq) goto loc_8225A530;
loc_8225A574:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8225a590
	if (!ctx.cr0.eq) goto loc_8225A590;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225a574
	if (ctx.cr6.lt) goto loc_8225A574;
	// b 0x8225a530
	goto loc_8225A530;
loc_8225A590:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225a54c
	goto loc_8225A54C;
}

__attribute__((alias("__imp__sub_8225A598"))) PPC_WEAK_FUNC(sub_8225A598);
PPC_FUNC_IMPL(__imp__sub_8225A598) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225A5A0;
	__savegprlr_29(ctx, base);
	// clrlwi. r30,r7,24
	ctx.r30.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x8225a630
	if (ctx.cr0.eq) goto loc_8225A630;
loc_8225A5AC:
	// lbzx r11,r7,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225a624
	if (ctx.cr0.eq) goto loc_8225A624;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225a624
	if (!ctx.cr6.eq) goto loc_8225A624;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8225a610
	if (!ctx.cr6.lt) goto loc_8225A610;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_8225A5D8:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r31,14(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// rlwinm. r29,r31,0,28,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8225a600
	if (ctx.cr0.eq) goto loc_8225A600;
	// rlwinm. r31,r31,0,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225a600
	if (ctx.cr0.eq) goto loc_8225A600;
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r31,r7,1
	ctx.r31.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8225a638
	if (ctx.cr6.gt) goto loc_8225A638;
loc_8225A600:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8225a5d8
	if (ctx.cr6.lt) goto loc_8225A5D8;
loc_8225A610:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8225A624:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8225a5ac
	if (ctx.cr6.lt) goto loc_8225A5AC;
loc_8225A630:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8225A634:
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8225A638:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225a634
	goto loc_8225A634;
}

__attribute__((alias("__imp__sub_8225A640"))) PPC_WEAK_FUNC(sub_8225A640);
PPC_FUNC_IMPL(__imp__sub_8225A640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225A648;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8225a6cc
	if (!ctx.cr6.lt) goto loc_8225A6CC;
	// addi r29,r31,592
	ctx.r29.s64 = ctx.r31.s64 + 592;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822625c8
	ctx.lr = 0x8225A67C;
	sub_822625C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225a6d4
	if (ctx.cr0.lt) goto loc_8225A6D4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82263020
	ctx.lr = 0x8225A6A4;
	sub_82263020(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225a6d4
	if (ctx.cr0.lt) goto loc_8225A6D4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r31,640
	ctx.r6.s64 = ctx.r31.s64 + 640;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82263088
	ctx.lr = 0x8225A6C4;
	sub_82263088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225a6e8
	if (!ctx.cr0.eq) goto loc_8225A6E8;
loc_8225A6CC:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4109
	ctx.r30.u64 = ctx.r30.u64 | 4109;
loc_8225A6D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82261410
	ctx.lr = 0x8225A6E4;
	sub_82261410(ctx, base);
	// b 0x8225a74c
	goto loc_8225A74C;
loc_8225A6E8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,624
	ctx.r9.s64 = ctx.r31.s64 + 624;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,652(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lhz r10,680(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 680);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r10,680(r31)
	PPC_STORE_U16(ctx.r31.u32 + 680, ctx.r10.u16);
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
loc_8225A74C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A758"))) PPC_WEAK_FUNC(sub_8225A758);
PPC_FUNC_IMPL(__imp__sub_8225A758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225A760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,592
	ctx.r29.s64 = ctx.r31.s64 + 592;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x822625c8
	ctx.lr = 0x8225A78C;
	sub_822625C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225a810
	if (ctx.cr0.lt) goto loc_8225A810;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82263020
	ctx.lr = 0x8225A7AC;
	sub_82263020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225a810
	if (ctx.cr0.lt) goto loc_8225A810;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,624
	ctx.r9.s64 = ctx.r31.s64 + 624;
	// addi r8,r30,338
	ctx.r8.s64 = ctx.r30.s64 + 338;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FFFFFC;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// lhzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u16);
loc_8225A810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A818"))) PPC_WEAK_FUNC(sub_8225A818);
PPC_FUNC_IMPL(__imp__sub_8225A818) {
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
	// lwz r11,1048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8225a934
	if (ctx.cr6.eq) goto loc_8225A934;
	// lhz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225a8d8
	if (!ctx.cr0.eq) goto loc_8225A8D8;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// bl 0x82261b98
	ctx.lr = 0x8225A85C;
	sub_82261B98(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x8225A888;
	sub_82256CA8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x8225A8B4;
	sub_82256CA8(ctx, base);
	// lhz r11,1066(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1066);
	// lwz r10,1192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1192);
	// addi r3,r30,688
	ctx.r3.s64 = ctx.r30.s64 + 688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,1066(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1066, ctx.r11.u16);
	// stw r10,1192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1192, ctx.r10.u32);
	// bl 0x82266150
	ctx.lr = 0x8225A8D4;
	sub_82266150(ctx, base);
	// b 0x8225a934
	goto loc_8225A934;
loc_8225A8D8:
	// lhz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8225a934
	if (ctx.cr0.lt) goto loc_8225A934;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8225a934
	if (!ctx.cr6.lt) goto loc_8225A934;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x82258f00
	ctx.lr = 0x8225A934;
	sub_82258F00(ctx, base);
loc_8225A934:
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

__attribute__((alias("__imp__sub_8225A94C"))) PPC_WEAK_FUNC(sub_8225A94C);
PPC_FUNC_IMPL(__imp__sub_8225A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A950"))) PPC_WEAK_FUNC(sub_8225A950);
PPC_FUNC_IMPL(__imp__sub_8225A950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225A958;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,1048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1048);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8225a98c
	if (!ctx.cr6.eq) goto loc_8225A98C;
	// lhz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// andi. r11,r11,49151
	ctx.r11.u64 = ctx.r11.u64 & 49151;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// b 0x8225a9b8
	goto loc_8225A9B8;
loc_8225A98C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x8225A9B8;
	sub_82256CA8(ctx, base);
loc_8225A9B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r11,r11,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x8225aa24
	if (ctx.cr6.lt) goto loc_8225AA24;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8225aa24
	if (ctx.cr6.gt) goto loc_8225AA24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r10,r10,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r10.s64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225aa24
	if (ctx.cr6.lt) goto loc_8225AA24;
	// lwz r11,700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8225AA24:
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225aa38
	if (ctx.cr0.eq) goto loc_8225AA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261aa8
	ctx.lr = 0x8225AA38;
	sub_82261AA8(ctx, base);
loc_8225AA38:
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225aacc
	if (ctx.cr0.eq) goto loc_8225AACC;
	// lwz r11,1036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1036);
	// addi r10,r28,1032
	ctx.r10.s64 = ctx.r28.s64 + 1032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225aa58
	if (!ctx.cr6.eq) goto loc_8225AA58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225AA58:
	// lhz r9,332(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225aa8c
	if (ctx.cr6.eq) goto loc_8225AA8C;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
loc_8225AA68:
	// lhz r8,324(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// extsh. r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8225aaa8
	if (!ctx.cr0.gt) goto loc_8225AAA8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225aa8c
	if (ctx.cr6.eq) goto loc_8225AA8C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225aa68
	if (!ctx.cr0.eq) goto loc_8225AA68;
loc_8225AA8C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// b 0x8225aae0
	goto loc_8225AAE0;
loc_8225AAA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225aa8c
	if (ctx.cr6.eq) goto loc_8225AA8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x8225aae0
	goto loc_8225AAE0;
loc_8225AACC:
	// lhz r11,1066(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1066);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1066(r28)
	PPC_STORE_U16(ctx.r28.u32 + 1066, ctx.r11.u16);
	// bl 0x82256ca8
	ctx.lr = 0x8225AAE0;
	sub_82256CA8(ctx, base);
loc_8225AAE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AAE8"))) PPC_WEAK_FUNC(sub_8225AAE8);
PPC_FUNC_IMPL(__imp__sub_8225AAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r4.u32);
	// xor r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// beq 0x8225ab0c
	if (ctx.cr0.eq) goto loc_8225AB0C;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x8225ab14
	goto loc_8225AB14;
loc_8225AB0C:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
loc_8225AB14:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFF;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// oris r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r10,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// std r8,632(r3)
	PPC_STORE_U64(ctx.r3.u32 + 632, ctx.r8.u64);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,896(r3)
	PPC_STORE_U16(ctx.r3.u32 + 896, ctx.r10.u16);
	// sth r10,898(r3)
	PPC_STORE_U16(ctx.r3.u32 + 898, ctx.r10.u16);
	// sth r7,900(r3)
	PPC_STORE_U16(ctx.r3.u32 + 900, ctx.r7.u16);
	// sth r11,1056(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1056, ctx.r11.u16);
	// sth r11,1070(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1070, ctx.r11.u16);
	// sth r11,1072(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1072, ctx.r11.u16);
	// sth r11,1074(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1074, ctx.r11.u16);
	// sth r9,1086(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1086, ctx.r9.u16);
	// sth r11,998(r3)
	PPC_STORE_U16(ctx.r3.u32 + 998, ctx.r11.u16);
	// sth r11,1000(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1000, ctx.r11.u16);
	// sth r9,1002(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1002, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225AB64"))) PPC_WEAK_FUNC(sub_8225AB64);
PPC_FUNC_IMPL(__imp__sub_8225AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AB68"))) PPC_WEAK_FUNC(sub_8225AB68);
PPC_FUNC_IMPL(__imp__sub_8225AB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225AB70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821f7f18
	ctx.lr = 0x8225AB80;
	sub_821F7F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r4,r29,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r29.s64;
	// bl 0x82265c58
	ctx.lr = 0x8225AB94;
	sub_82265C58(ctx, base);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259d70
	ctx.lr = 0x8225ABB0;
	sub_82259D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225abc8
	if (ctx.cr0.eq) goto loc_8225ABC8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x82262720
	ctx.lr = 0x8225ABC8;
	sub_82262720(ctx, base);
loc_8225ABC8:
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// lwz r9,1176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// li r8,250
	ctx.r8.s64 = 250;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// andi. r11,r11,250
	ctx.r11.u64 = ctx.r11.u64 & 250;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 67108864;
	// stb r8,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r8.u8);
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
	// bl 0x822627c0
	ctx.lr = 0x8225ABF8;
	sub_822627C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AC00"))) PPC_WEAK_FUNC(sub_8225AC00);
PPC_FUNC_IMPL(__imp__sub_8225AC00) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// lwz r10,436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// lwz r9,432(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lwz r5,444(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// xor r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r31,396(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261898
	ctx.lr = 0x8225AC34;
	sub_82261898(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8225AC38:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225ac38
	if (!ctx.cr0.eq) goto loc_8225AC38;
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

__attribute__((alias("__imp__sub_8225AC6C"))) PPC_WEAK_FUNC(sub_8225AC6C);
PPC_FUNC_IMPL(__imp__sub_8225AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AC70"))) PPC_WEAK_FUNC(sub_8225AC70);
PPC_FUNC_IMPL(__imp__sub_8225AC70) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// lwz r10,436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// lwz r9,432(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// xor r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r31,396(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822618f8
	ctx.lr = 0x8225ACA0;
	sub_822618F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8225ACA4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225aca4
	if (!ctx.cr0.eq) goto loc_8225ACA4;
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

__attribute__((alias("__imp__sub_8225ACD8"))) PPC_WEAK_FUNC(sub_8225ACD8);
PPC_FUNC_IMPL(__imp__sub_8225ACD8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r9,7
	ctx.r9.s64 = 7;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8225acfc
	if (!ctx.cr6.eq) goto loc_8225ACFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8225ad10
	goto loc_8225AD10;
loc_8225ACFC:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8225AD10:
	// lhz r11,38(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225ad24
	if (!ctx.cr0.eq) goto loc_8225AD24;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225ad40
	goto loc_8225AD40;
loc_8225AD24:
	// lha r11,32(r5)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 32));
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8225AD40:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225AD4C"))) PPC_WEAK_FUNC(sub_8225AD4C);
PPC_FUNC_IMPL(__imp__sub_8225AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AD50"))) PPC_WEAK_FUNC(sub_8225AD50);
PPC_FUNC_IMPL(__imp__sub_8225AD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8225AD58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82258dd0
	ctx.lr = 0x8225AD6C;
	sub_82258DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82258e58
	ctx.lr = 0x8225AD7C;
	sub_82258E58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225ada4
	if (ctx.cr6.eq) goto loc_8225ADA4;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225ad9c
	if (!ctx.cr6.eq) goto loc_8225AD9C;
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
loc_8225AD9C:
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// b 0x8225ada8
	goto loc_8225ADA8;
loc_8225ADA4:
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
loc_8225ADA8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r31,966
	ctx.r10.s64 = ctx.r31.s64 + 966;
	// addi r9,r31,896
	ctx.r9.s64 = ctx.r31.s64 + 896;
	// lhz r6,1056(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r30,396(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822619b8
	ctx.lr = 0x8225ADD0;
	sub_822619B8(ctx, base);
	// lhz r10,1064(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225adec
	if (ctx.cr6.lt) goto loc_8225ADEC;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x8225ae08
	goto loc_8225AE08;
loc_8225ADEC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225ae0c
	if (ctx.cr6.eq) goto loc_8225AE0C;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225ae0c
	if (!ctx.cr6.eq) goto loc_8225AE0C;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
loc_8225AE08:
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_8225AE0C:
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// bl 0x822627c0
	ctx.lr = 0x8225AE20;
	sub_822627C0(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8225AE24:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225ae24
	if (!ctx.cr0.eq) goto loc_8225AE24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AE4C"))) PPC_WEAK_FUNC(sub_8225AE4C);
PPC_FUNC_IMPL(__imp__sub_8225AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AE50"))) PPC_WEAK_FUNC(sub_8225AE50);
PPC_FUNC_IMPL(__imp__sub_8225AE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225AE58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82258dd0
	ctx.lr = 0x8225AE64;
	sub_82258DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82258e58
	ctx.lr = 0x8225AE74;
	sub_82258E58(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r31,896
	ctx.r6.s64 = ctx.r31.s64 + 896;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r30,396(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261958
	ctx.lr = 0x8225AE94;
	sub_82261958(ctx, base);
	// lhz r10,1064(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225aeb0
	if (ctx.cr6.lt) goto loc_8225AEB0;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_8225AEB0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8225AEB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225aeb4
	if (!ctx.cr0.eq) goto loc_8225AEB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AEDC"))) PPC_WEAK_FUNC(sub_8225AEDC);
PPC_FUNC_IMPL(__imp__sub_8225AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AEE0"))) PPC_WEAK_FUNC(sub_8225AEE0);
PPC_FUNC_IMPL(__imp__sub_8225AEE0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225AEFC;
	sub_82256CA8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225af20
	if (!ctx.cr6.eq) goto loc_8225AF20;
	// bl 0x821f7f18
	ctx.lr = 0x8225AF0C;
	sub_821F7F18(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x82262720
	ctx.lr = 0x8225AF20;
	sub_82262720(ctx, base);
loc_8225AF20:
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

__attribute__((alias("__imp__sub_8225AF34"))) PPC_WEAK_FUNC(sub_8225AF34);
PPC_FUNC_IMPL(__imp__sub_8225AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AF38"))) PPC_WEAK_FUNC(sub_8225AF38);
PPC_FUNC_IMPL(__imp__sub_8225AF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225AF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821f7f18
	ctx.lr = 0x8225AF50;
	sub_821F7F18(ctx, base);
	// lhz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 336);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225af6c
	if (!ctx.cr0.eq) goto loc_8225AF6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225AF68;
	sub_82256CA8(ctx, base);
	// b 0x8225b018
	goto loc_8225B018;
loc_8225AF6C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r29,r11,27,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8225af88
	if (!ctx.cr6.eq) goto loc_8225AF88;
	// lhz r9,1078(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1078);
	// b 0x8225af9c
	goto loc_8225AF9C;
loc_8225AF88:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8225af98
	if (!ctx.cr6.eq) goto loc_8225AF98;
	// lhz r9,1076(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1076);
	// b 0x8225af9c
	goto loc_8225AF9C;
loc_8225AF98:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8225AF9C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// subf r6,r10,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82266318
	ctx.lr = 0x8225AFCC;
	sub_82266318(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// bne cr6,0x8225b008
	if (!ctx.cr6.eq) goto loc_8225B008;
	// addis r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -2147483648;
	// addi r11,r31,1016
	ctx.r11.s64 = ctx.r31.s64 + 1016;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r10.u32);
	// b 0x8225b018
	goto loc_8225B018;
loc_8225B008:
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82258fa8
	ctx.lr = 0x8225B018;
	sub_82258FA8(ctx, base);
loc_8225B018:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259ef0
	ctx.lr = 0x8225B024;
	sub_82259EF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B02C"))) PPC_WEAK_FUNC(sub_8225B02C);
PPC_FUNC_IMPL(__imp__sub_8225B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B030"))) PPC_WEAK_FUNC(sub_8225B030);
PPC_FUNC_IMPL(__imp__sub_8225B030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225B038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b0ac
	if (ctx.cr0.eq) goto loc_8225B0AC;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b0ac
	if (ctx.cr0.eq) goto loc_8225B0AC;
	// bl 0x821f7f18
	ctx.lr = 0x8225B064;
	sub_821F7F18(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r6,r10,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,456(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82266318
	ctx.lr = 0x8225B09C;
	sub_82266318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x82262720
	ctx.lr = 0x8225B0AC;
	sub_82262720(ctx, base);
loc_8225B0AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225B0B4;
	sub_82256CA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B0BC"))) PPC_WEAK_FUNC(sub_8225B0BC);
PPC_FUNC_IMPL(__imp__sub_8225B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B0C0"))) PPC_WEAK_FUNC(sub_8225B0C0);
PPC_FUNC_IMPL(__imp__sub_8225B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225B0C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r31,476
	ctx.r29.s64 = ctx.r31.s64 + 476;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82262200
	ctx.lr = 0x8225B0EC;
	sub_82262200(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225b194
	if (ctx.cr0.lt) goto loc_8225B194;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82264c00
	ctx.lr = 0x8225B134;
	sub_82264C00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8225b14c
	if (!ctx.cr0.lt) goto loc_8225B14C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82262318
	ctx.lr = 0x8225B148;
	sub_82262318(ctx, base);
	// b 0x8225b194
	goto loc_8225B194;
loc_8225B14C:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r9,r31,524
	ctx.r9.s64 = ctx.r31.s64 + 524;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// rlwinm r11,r10,3,5,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFFFF8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
loc_8225B194:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B1A0"))) PPC_WEAK_FUNC(sub_8225B1A0);
PPC_FUNC_IMPL(__imp__sub_8225B1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225B1A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,14(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 14);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b298
	if (ctx.cr0.eq) goto loc_8225B298;
	// lhz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r9,830(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 830);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r30,r11,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8225b284
	if (ctx.cr0.eq) goto loc_8225B284;
	// addi r28,r4,66
	ctx.r28.s64 = ctx.r4.s64 + 66;
loc_8225B1EC:
	// lbz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rlwinm. r8,r31,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8225b210
	if (ctx.cr0.eq) goto loc_8225B210;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// b 0x8225b224
	goto loc_8225B224;
loc_8225B210:
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
loc_8225B224:
	// bgt cr6,0x8225b238
	if (ctx.cr6.gt) goto loc_8225B238;
	// rlwinm. r8,r31,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8225b238
	if (!ctx.cr0.eq) goto loc_8225B238;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8225B238:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225b1ec
	if (ctx.cr6.lt) goto loc_8225B1EC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8225b284
	if (!ctx.cr6.eq) goto loc_8225B284;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// beq cr6,0x8225b308
	if (ctx.cr6.eq) goto loc_8225B308;
	// lwz r11,672(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,672(r27)
	PPC_STORE_U32(ctx.r27.u32 + 672, ctx.r11.u32);
	// b 0x8225b308
	goto loc_8225B308;
loc_8225B284:
	// lhz r11,828(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 828);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8225b29c
	goto loc_8225B29C;
loc_8225B298:
	// lhz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
loc_8225B29C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82258eb8
	ctx.lr = 0x8225B2A4;
	sub_82258EB8(ctx, base);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x8225b2c4
	if (ctx.cr6.lt) goto loc_8225B2C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225b308
	goto loc_8225B308;
loc_8225B2C4:
	// lwz r10,1176(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1176);
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8225b2e4
	if (ctx.cr0.eq) goto loc_8225B2E4;
	// lhz r8,1084(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1084);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8225b2f0
	if (ctx.cr6.lt) goto loc_8225B2F0;
loc_8225B2E4:
	// oris r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 262144;
	// sth r9,1084(r27)
	PPC_STORE_U16(ctx.r27.u32 + 1084, ctx.r9.u16);
	// stw r11,1176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1176, ctx.r11.u32);
loc_8225B2F0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8225b304
	if (ctx.cr6.eq) goto loc_8225B304;
	// lwz r11,672(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,672(r27)
	PPC_STORE_U32(ctx.r27.u32 + 672, ctx.r11.u32);
loc_8225B304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B308:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B310"))) PPC_WEAK_FUNC(sub_8225B310);
PPC_FUNC_IMPL(__imp__sub_8225B310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8225B318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,18(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 18);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r8,830(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 830);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// beq 0x8225b344
	if (ctx.cr0.eq) goto loc_8225B344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8225b384
	goto loc_8225B384;
loc_8225B344:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225b384
	if (ctx.cr0.eq) goto loc_8225B384;
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,42
	ctx.r10.s64 = ctx.r10.s64 + 42;
loc_8225B360:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225b384
	if (!ctx.cr0.eq) goto loc_8225B384;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// bne 0x8225b360
	if (!ctx.cr0.eq) goto loc_8225B360;
loc_8225B384:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8225b418
	if (ctx.cr6.eq) goto loc_8225B418;
	// addi r31,r4,66
	ctx.r31.s64 = ctx.r4.s64 + 66;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_8225B394:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225b40c
	if (!ctx.cr0.eq) goto loc_8225B40C;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225b40c
	if (ctx.cr0.eq) goto loc_8225B40C;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b40c
	if (ctx.cr0.eq) goto loc_8225B40C;
	// lhz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8225b40c
	if (ctx.cr6.gt) goto loc_8225B40C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8225b40c
	if (ctx.cr6.gt) goto loc_8225B40C;
	// lwz r11,-10(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10);
	// lwz r10,596(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 596);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225b404
	if (!ctx.cr6.lt) goto loc_8225B404;
	// lwz r10,592(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x8225b404
	if (!ctx.cr6.gt) goto loc_8225B404;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8225b408
	goto loc_8225B408;
loc_8225B404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B408:
	// bl 0x82263448
	ctx.lr = 0x8225B40C;
	sub_82263448(ctx, base);
loc_8225B40C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x8225b394
	if (!ctx.cr0.eq) goto loc_8225B394;
loc_8225B418:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B420"))) PPC_WEAK_FUNC(sub_8225B420);
PPC_FUNC_IMPL(__imp__sub_8225B420) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// addi r3,r30,476
	ctx.r3.s64 = ctx.r30.s64 + 476;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82262318
	ctx.lr = 0x8225B46C;
	sub_82262318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265310
	ctx.lr = 0x8225B474;
	sub_82265310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225B47C;
	sub_82256CA8(ctx, base);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8225B4A0"))) PPC_WEAK_FUNC(sub_8225B4A0);
PPC_FUNC_IMPL(__imp__sub_8225B4A0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x82258eb8
	ctx.lr = 0x8225B4BC;
	sub_82258EB8(ctx, base);
	// lhz r11,1084(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1084);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8225b518
	if (ctx.cr6.lt) goto loc_8225B518;
	// lwz r11,1176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1176);
	// addi r30,r9,624
	ctx.r30.s64 = ctx.r9.s64 + 624;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r11,1176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1176, ctx.r11.u32);
	// lwz r11,624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 624);
	// b 0x8225b504
	goto loc_8225B504;
loc_8225B4EC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b500
	if (ctx.cr0.eq) goto loc_8225B500;
	// bl 0x82263448
	ctx.lr = 0x8225B500;
	sub_82263448(ctx, base);
loc_8225B500:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8225B504:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225b518
	if (ctx.cr6.eq) goto loc_8225B518;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne 0x8225b4ec
	if (!ctx.cr0.eq) goto loc_8225B4EC;
loc_8225B518:
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

__attribute__((alias("__imp__sub_8225B530"))) PPC_WEAK_FUNC(sub_8225B530);
PPC_FUNC_IMPL(__imp__sub_8225B530) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stb r9,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r9.u8);
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// bl 0x822590f0
	ctx.lr = 0x8225B56C;
	sub_822590F0(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// lwz r10,1176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// rlwimi r10,r30,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8225B59C"))) PPC_WEAK_FUNC(sub_8225B59C);
PPC_FUNC_IMPL(__imp__sub_8225B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B5A0"))) PPC_WEAK_FUNC(sub_8225B5A0);
PPC_FUNC_IMPL(__imp__sub_8225B5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225B5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82266798
	ctx.lr = 0x8225B5BC;
	sub_82266798(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// bl 0x82266798
	ctx.lr = 0x8225B5D4;
	sub_82266798(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r30,r31,1008
	ctx.r30.s64 = ctx.r31.s64 + 1008;
	// b 0x8225b620
	goto loc_8225B620;
loc_8225B5E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b5f4
	if (!ctx.cr6.eq) goto loc_8225B5F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225b614
	goto loc_8225B614;
loc_8225B5F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225B614:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82256ca8
	ctx.lr = 0x8225B61C;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225B620:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b5e0
	if (!ctx.cr6.eq) goto loc_8225B5E0;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// b 0x8225b674
	goto loc_8225B674;
loc_8225B634:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b648
	if (!ctx.cr6.eq) goto loc_8225B648;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225b668
	goto loc_8225B668;
loc_8225B648:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225B668:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82256ca8
	ctx.lr = 0x8225B670;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225B674:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b634
	if (!ctx.cr6.eq) goto loc_8225B634;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// addi r30,r31,1024
	ctx.r30.s64 = ctx.r31.s64 + 1024;
	// b 0x8225b6e4
	goto loc_8225B6E4;
loc_8225B688:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b69c
	if (!ctx.cr6.eq) goto loc_8225B69C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225b6bc
	goto loc_8225B6BC;
loc_8225B69C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225B6BC:
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82261b98
	ctx.lr = 0x8225B6CC;
	sub_82261B98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225B6D4;
	sub_82256CA8(ctx, base);
	// lhz r11,1066(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1066(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1066, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225B6E4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b688
	if (!ctx.cr6.eq) goto loc_8225B688;
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// addi r30,r31,1032
	ctx.r30.s64 = ctx.r31.s64 + 1032;
	// b 0x8225b754
	goto loc_8225B754;
loc_8225B6F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b70c
	if (!ctx.cr6.eq) goto loc_8225B70C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225b72c
	goto loc_8225B72C;
loc_8225B70C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225B72C:
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82261c08
	ctx.lr = 0x8225B73C;
	sub_82261C08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225B744;
	sub_82256CA8(ctx, base);
	// lhz r11,1066(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1066(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1066, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225B754:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225b6f8
	if (!ctx.cr6.eq) goto loc_8225B6F8;
	// lwz r30,516(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r29,r31,516
	ctx.r29.s64 = ctx.r31.s64 + 516;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8225b79c
	if (ctx.cr6.eq) goto loc_8225B79C;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8225b79c
	if (ctx.cr0.eq) goto loc_8225B79C;
loc_8225B774:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8225b78c
	if (ctx.cr6.eq) goto loc_8225B78C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8225B78C:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822645e8
	ctx.lr = 0x8225B794;
	sub_822645E8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8225b774
	if (!ctx.cr6.eq) goto loc_8225B774;
loc_8225B79C:
	// lwz r30,524(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r29,r31,524
	ctx.r29.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8225b7dc
	if (ctx.cr6.eq) goto loc_8225B7DC;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8225b7dc
	if (ctx.cr0.eq) goto loc_8225B7DC;
loc_8225B7B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8225b7cc
	if (ctx.cr6.eq) goto loc_8225B7CC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8225B7CC:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822645e8
	ctx.lr = 0x8225B7D4;
	sub_822645E8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8225b7b4
	if (!ctx.cr6.eq) goto loc_8225B7B4;
loc_8225B7DC:
	// addi r30,r31,624
	ctx.r30.s64 = ctx.r31.s64 + 624;
	// lwz r31,624(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225b818
	if (ctx.cr6.eq) goto loc_8225B818;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8225b818
	if (ctx.cr0.eq) goto loc_8225B818;
loc_8225B7F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225b80c
	if (ctx.cr6.eq) goto loc_8225B80C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8225B80C:
	// bl 0x822638c0
	ctx.lr = 0x8225B810;
	sub_822638C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8225b7f4
	if (!ctx.cr6.eq) goto loc_8225B7F4;
loc_8225B818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B820"))) PPC_WEAK_FUNC(sub_8225B820);
PPC_FUNC_IMPL(__imp__sub_8225B820) {
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
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225b860
	if (!ctx.cr0.eq) goto loc_8225B860;
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_8225B860:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,1074(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1074);
	// bl 0x82265458
	ctx.lr = 0x8225B86C;
	sub_82265458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225b880
	if (ctx.cr0.eq) goto loc_8225B880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822596f8
	ctx.lr = 0x8225B880;
	sub_822596F8(ctx, base);
loc_8225B880:
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

__attribute__((alias("__imp__sub_8225B898"))) PPC_WEAK_FUNC(sub_8225B898);
PPC_FUNC_IMPL(__imp__sub_8225B898) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq 0x8225b8f0
	if (ctx.cr0.eq) goto loc_8225B8F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82259a08
	ctx.lr = 0x8225B8F0;
	sub_82259A08(ctx, base);
loc_8225B8F0:
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

__attribute__((alias("__imp__sub_8225B908"))) PPC_WEAK_FUNC(sub_8225B908);
PPC_FUNC_IMPL(__imp__sub_8225B908) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27124
	ctx.r11.s64 = ctx.r11.s64 + -27124;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82253f90
	ctx.lr = 0x8225B93C;
	sub_82253F90(ctx, base);
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

__attribute__((alias("__imp__sub_8225B954"))) PPC_WEAK_FUNC(sub_8225B954);
PPC_FUNC_IMPL(__imp__sub_8225B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B958"))) PPC_WEAK_FUNC(sub_8225B958);
PPC_FUNC_IMPL(__imp__sub_8225B958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225B960;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27116
	ctx.r11.s64 = ctx.r11.s64 + -27116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225b990
	if (ctx.cr6.eq) goto loc_8225B990;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82247a78
	ctx.lr = 0x8225B98C;
	sub_82247A78(ctx, base);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
loc_8225B990:
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x822620e0
	ctx.lr = 0x8225B998;
	sub_822620E0(ctx, base);
	// lwz r4,612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225b9b0
	if (ctx.cr6.eq) goto loc_8225B9B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82247a78
	ctx.lr = 0x8225B9AC;
	sub_82247A78(ctx, base);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
loc_8225B9B0:
	// addi r3,r31,592
	ctx.r3.s64 = ctx.r31.s64 + 592;
	// bl 0x822624d0
	ctx.lr = 0x8225B9B8;
	sub_822624D0(ctx, base);
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262718
	ctx.lr = 0x8225B9C4;
	sub_82262718(ctx, base);
	// addi r29,r31,244
	ctx.r29.s64 = ctx.r31.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82262718
	ctx.lr = 0x8225B9D0;
	sub_82262718(ctx, base);
	// addi r28,r31,304
	ctx.r28.s64 = ctx.r31.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82262718
	ctx.lr = 0x8225B9DC;
	sub_82262718(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82256ca8
	ctx.lr = 0x8225B9E4;
	sub_82256CA8(ctx, base);
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82492d68
	ctx.lr = 0x8225B9F0;
	sub_82492D68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// addi r28,r11,-26584
	ctx.r28.s64 = ctx.r11.s64 + -26584;
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// bl 0x82492d68
	ctx.lr = 0x8225BA04;
	sub_82492D68(ctx, base);
	// stw r28,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r28.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82492d68
	ctx.lr = 0x8225BA10;
	sub_82492D68(ctx, base);
	// stw r28,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r28.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82492d68
	ctx.lr = 0x8225BA1C;
	sub_82492D68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// addi r11,r11,-27252
	ctx.r11.s64 = ctx.r11.s64 + -27252;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225BA34"))) PPC_WEAK_FUNC(sub_8225BA34);
PPC_FUNC_IMPL(__imp__sub_8225BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BA38"))) PPC_WEAK_FUNC(sub_8225BA38);
PPC_FUNC_IMPL(__imp__sub_8225BA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8225BA40;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225BA58;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225bcac
	if (ctx.cr6.eq) goto loc_8225BCAC;
	// lwz r10,1176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225bcac
	if (!ctx.cr0.eq) goto loc_8225BCAC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8225baa8
	if (ctx.cr6.eq) goto loc_8225BAA8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8225baa8
	if (ctx.cr6.eq) goto loc_8225BAA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259aa0
	ctx.lr = 0x8225BA90;
	sub_82259AA0(ctx, base);
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8225bc88
	if (!ctx.cr6.eq) goto loc_8225BC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b5a0
	ctx.lr = 0x8225BAA4;
	sub_8225B5A0(ctx, base);
	// b 0x8225bc88
	goto loc_8225BC88;
loc_8225BAA8:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r26,r31,516
	ctx.r26.s64 = ctx.r31.s64 + 516;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8225bb64
	if (ctx.cr6.eq) goto loc_8225BB64;
	// addi r29,r31,524
	ctx.r29.s64 = ctx.r31.s64 + 524;
	// addi r28,r31,1164
	ctx.r28.s64 = ctx.r31.s64 + 1164;
	// addi r27,r31,1088
	ctx.r27.s64 = ctx.r31.s64 + 1088;
loc_8225BAC4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8225bad8
	if (!ctx.cr6.eq) goto loc_8225BAD8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8225baf8
	goto loc_8225BAF8;
loc_8225BAD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225BAF8:
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82264698
	ctx.lr = 0x8225BB28;
	sub_82264698(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225bb58
	if (ctx.cr0.eq) goto loc_8225BB58;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8225bc20
	if (!ctx.cr6.eq) goto loc_8225BC20;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bc20
	if (ctx.cr6.eq) goto loc_8225BC20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82263cc0
	ctx.lr = 0x8225BB58;
	sub_82263CC0(ctx, base);
loc_8225BB58:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8225bac4
	if (!ctx.cr6.eq) goto loc_8225BAC4;
loc_8225BB64:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bbd4
	if (ctx.cr6.eq) goto loc_8225BBD4;
	// addi r27,r31,612
	ctx.r27.s64 = ctx.r31.s64 + 612;
	// addi r29,r31,1164
	ctx.r29.s64 = ctx.r31.s64 + 1164;
	// addi r28,r31,1088
	ctx.r28.s64 = ctx.r31.s64 + 1088;
loc_8225BB7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b898
	ctx.lr = 0x8225BB84;
	sub_8225B898(ctx, base);
	// addi r30,r3,-32
	ctx.r30.s64 = ctx.r3.s64 + -32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82263520
	ctx.lr = 0x8225BB98;
	sub_82263520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225bbc8
	if (ctx.cr0.eq) goto loc_8225BBC8;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8225bc48
	if (!ctx.cr6.eq) goto loc_8225BC48;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bc48
	if (ctx.cr6.eq) goto loc_8225BC48;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82263830
	ctx.lr = 0x8225BBC8;
	sub_82263830(ctx, base);
loc_8225BBC8:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225bb7c
	if (!ctx.cr6.eq) goto loc_8225BB7C;
loc_8225BBD4:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bbf0
	if (!ctx.cr0.eq) goto loc_8225BBF0;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bc70
	if (ctx.cr0.eq) goto loc_8225BC70;
loc_8225BBF0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225bc70
	if (!ctx.cr6.eq) goto loc_8225BC70;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82258c60
	ctx.lr = 0x8225BC18;
	sub_82258C60(ctx, base);
	// stw r23,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r23.u32);
	// b 0x8225bc88
	goto loc_8225BC88;
loc_8225BC20:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8225BC24:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225bc24
	if (!ctx.cr0.eq) goto loc_8225BC24;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x8225bc88
	goto loc_8225BC88;
loc_8225BC48:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8225BC4C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225bc4c
	if (!ctx.cr0.eq) goto loc_8225BC4C;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x8225bc88
	goto loc_8225BC88;
loc_8225BC70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8225bcac
	if (ctx.cr6.eq) goto loc_8225BCAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259aa0
	ctx.lr = 0x8225BC88;
	sub_82259AA0(ctx, base);
loc_8225BC88:
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x8225BC9C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r31,1088
	ctx.r11.s64 = ctx.r31.s64 + 1088;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x8225bcd0
	goto loc_8225BCD0;
loc_8225BCAC:
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x8225BCC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225BCD0;
	sub_82256CA8(ctx, base);
loc_8225BCD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225BCDC"))) PPC_WEAK_FUNC(sub_8225BCDC);
PPC_FUNC_IMPL(__imp__sub_8225BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BCE0"))) PPC_WEAK_FUNC(sub_8225BCE0);
PPC_FUNC_IMPL(__imp__sub_8225BCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225BCE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8225bd10
	if (!ctx.cr6.eq) goto loc_8225BD10;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82c09bdc
	ctx.lr = 0x8225BD0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8225be7c
	goto loc_8225BE7C;
loc_8225BD10:
	// lwz r10,1176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225bd94
	if (!ctx.cr0.eq) goto loc_8225BD94;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8225bd5c
	if (!ctx.cr6.eq) goto loc_8225BD5C;
	// lwz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r11,r31,516
	ctx.r11.s64 = ctx.r31.s64 + 516;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225bd5c
	if (!ctx.cr6.eq) goto loc_8225BD5C;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225bd5c
	if (!ctx.cr6.eq) goto loc_8225BD5C;
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bd5c
	if (!ctx.cr0.eq) goto loc_8225BD5C;
	// lwz r11,888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bd94
	if (ctx.cr0.eq) goto loc_8225BD94;
loc_8225BD5C:
	// rlwinm. r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bd94
	if (!ctx.cr0.eq) goto loc_8225BD94;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8225BD68:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225bd68
	if (!ctx.cr0.eq) goto loc_8225BD68;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// li r29,1
	ctx.r29.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_8225BD94:
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225be4c
	if (!ctx.cr0.eq) goto loc_8225BE4C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225be4c
	if (ctx.cr6.eq) goto loc_8225BE4C;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225be0c
	if (!ctx.cr0.eq) goto loc_8225BE0C;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225be0c
	if (!ctx.cr0.eq) goto loc_8225BE0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259cf8
	ctx.lr = 0x8225BDCC;
	sub_82259CF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225be0c
	if (ctx.cr0.eq) goto loc_8225BE0C;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x82266288
	ctx.lr = 0x8225BDDC;
	sub_82266288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// ble cr6,0x8225be00
	if (!ctx.cr6.gt) goto loc_8225BE00;
	// bl 0x821f7f18
	ctx.lr = 0x8225BDEC;
	sub_821F7F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82262720
	ctx.lr = 0x8225BDFC;
	sub_82262720(ctx, base);
	// b 0x8225be0c
	goto loc_8225BE0C;
loc_8225BE00:
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
loc_8225BE0C:
	// lbz r11,1173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1173);
	// lbz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225be4c
	if (ctx.cr0.eq) goto loc_8225BE4C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8225BE20:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225be20
	if (!ctx.cr0.eq) goto loc_8225BE20;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// li r28,1
	ctx.r28.s64 = 1;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_8225BE4C:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82c09bdc
	ctx.lr = 0x8225BE54;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225be68
	if (ctx.cr6.eq) goto loc_8225BE68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82256d30
	ctx.lr = 0x8225BE68;
	sub_82256D30(ctx, base);
loc_8225BE68:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8225be7c
	if (ctx.cr6.eq) goto loc_8225BE7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82258578
	ctx.lr = 0x8225BE7C;
	sub_82258578(ctx, base);
loc_8225BE7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225BE84"))) PPC_WEAK_FUNC(sub_8225BE84);
PPC_FUNC_IMPL(__imp__sub_8225BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BE88"))) PPC_WEAK_FUNC(sub_8225BE88);
PPC_FUNC_IMPL(__imp__sub_8225BE88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225bee4
	if (!ctx.cr6.eq) goto loc_8225BEE4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225bed8
	if (ctx.cr6.lt) goto loc_8225BED8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bed8
	if (ctx.cr6.eq) goto loc_8225BED8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32646
	ctx.r9.s64 = -2139488256;
	// stb r11,1173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1173, ctx.r11.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1172, ctx.r11.u8);
	// ori r11,r9,4103
	ctx.r11.u64 = ctx.r9.u64 | 4103;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x822590f0
	sub_822590F0(ctx, base);
	return;
loc_8225BED8:
	// lbz r11,1172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1172);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8225befc
	goto loc_8225BEFC;
loc_8225BEE4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lbz r11,1172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1172);
	// bne cr6,0x8225bef8
	if (!ctx.cr6.eq) goto loc_8225BEF8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x8225befc
	goto loc_8225BEFC;
loc_8225BEF8:
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_8225BEFC:
	// stb r11,1172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1172, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225BF04"))) PPC_WEAK_FUNC(sub_8225BF04);
PPC_FUNC_IMPL(__imp__sub_8225BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BF08"))) PPC_WEAK_FUNC(sub_8225BF08);
PPC_FUNC_IMPL(__imp__sub_8225BF08) {
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
	// lwz r30,1176(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bfe8
	if (ctx.cr0.eq) goto loc_8225BFE8;
	// lwz r9,456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bf9c
	if (ctx.cr6.eq) goto loc_8225BF9C;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// blt cr6,0x8225bf58
	if (ctx.cr6.lt) goto loc_8225BF58;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// b 0x8225bf5c
	goto loc_8225BF5C;
loc_8225BF58:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_8225BF5C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225bf9c
	if (ctx.cr6.lt) goto loc_8225BF9C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225c090
	if (ctx.cr6.eq) goto loc_8225C090;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// stb r11,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822590f0
	ctx.lr = 0x8225BF98;
	sub_822590F0(ctx, base);
	// b 0x8225c090
	goto loc_8225C090;
loc_8225BF9C:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8225bfac
	if (ctx.cr6.eq) goto loc_8225BFAC;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x82266150
	ctx.lr = 0x8225BFAC;
	sub_82266150(ctx, base);
loc_8225BFAC:
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lbz r9,1172(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// rlwinm. r8,r11,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// stb r9,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r9.u8);
	// beq 0x8225c090
	if (ctx.cr0.eq) goto loc_8225C090;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// b 0x8225c090
	goto loc_8225C090;
loc_8225BFE8:
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c024
	if (!ctx.cr0.eq) goto loc_8225C024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259d70
	ctx.lr = 0x8225BFFC;
	sub_82259D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c090
	if (ctx.cr0.eq) goto loc_8225C090;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c024
	if (ctx.cr6.eq) goto loc_8225C024;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x82262720
	ctx.lr = 0x8225C020;
	sub_82262720(ctx, base);
	// b 0x8225c090
	goto loc_8225C090;
loc_8225C024:
	// lhz r8,1056(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,1074(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1074);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwimi r30,r10,23,8,10
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xE00000) | (ctx.r30.u64 & 0xFFFFFFFFFF1FFFFF);
	// lbz r7,1172(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,1080(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1080);
	// ori r10,r7,64
	ctx.r10.u64 = ctx.r7.u64 | 64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stb r10,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r10.u8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8225c088
	if (ctx.cr6.lt) goto loc_8225C088;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c088
	if (ctx.cr6.eq) goto loc_8225C088;
	// lwz r10,1052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// oris r11,r30,16
	ctx.r11.u64 = ctx.r30.u64 | 1048576;
	// bge cr6,0x8225c08c
	if (!ctx.cr6.lt) goto loc_8225C08C;
loc_8225C088:
	// rlwinm r11,r30,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
loc_8225C08C:
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_8225C090:
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

__attribute__((alias("__imp__sub_8225C0A8"))) PPC_WEAK_FUNC(sub_8225C0A8);
PPC_FUNC_IMPL(__imp__sub_8225C0A8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8225c138
	if (ctx.cr6.eq) goto loc_8225C138;
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c0e4
	if (!ctx.cr6.eq) goto loc_8225C0E4;
	// bl 0x8225be88
	ctx.lr = 0x8225C0E0;
	sub_8225BE88(ctx, base);
	// b 0x8225c138
	goto loc_8225C138;
loc_8225C0E4:
	// addi r10,r31,244
	ctx.r10.s64 = ctx.r31.s64 + 244;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c0fc
	if (!ctx.cr6.eq) goto loc_8225C0FC;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x8225c110
	goto loc_8225C110;
loc_8225C0FC:
	// addi r10,r31,304
	ctx.r10.s64 = ctx.r31.s64 + 304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c118
	if (!ctx.cr6.eq) goto loc_8225C118;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_8225C110:
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// b 0x8225c138
	goto loc_8225C138;
loc_8225C118:
	// addi r10,r31,364
	ctx.r10.s64 = ctx.r31.s64 + 364;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c130
	if (!ctx.cr6.eq) goto loc_8225C130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bf08
	ctx.lr = 0x8225C12C;
	sub_8225BF08(ctx, base);
	// b 0x8225c138
	goto loc_8225C138;
loc_8225C130:
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// bl 0x82264928
	ctx.lr = 0x8225C138;
	sub_82264928(ctx, base);
loc_8225C138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225C140;
	sub_8225BCE0(ctx, base);
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

__attribute__((alias("__imp__sub_8225C154"))) PPC_WEAK_FUNC(sub_8225C154);
PPC_FUNC_IMPL(__imp__sub_8225C154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C158"))) PPC_WEAK_FUNC(sub_8225C158);
PPC_FUNC_IMPL(__imp__sub_8225C158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225C160;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82266980
	ctx.lr = 0x8225C170;
	sub_82266980(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,896
	ctx.r30.s64 = ctx.r31.s64 + 896;
loc_8225C178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,90(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// bl 0x82265950
	ctx.lr = 0x8225C184;
	sub_82265950(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8225c1a0
	if (!ctx.cr6.eq) goto loc_8225C1A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,90(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// bl 0x822659c8
	ctx.lr = 0x8225C198;
	sub_822659C8(ctx, base);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm r29,r11,14,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
loc_8225C1A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82258bf8
	ctx.lr = 0x8225C1A8;
	sub_82258BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c178
	if (!ctx.cr0.eq) goto loc_8225C178;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225c1c0
	if (ctx.cr6.eq) goto loc_8225C1C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b4a0
	ctx.lr = 0x8225C1C0;
	sub_8225B4A0(ctx, base);
loc_8225C1C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C1C8"))) PPC_WEAK_FUNC(sub_8225C1C8);
PPC_FUNC_IMPL(__imp__sub_8225C1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x8225C1D0;
	__savegprlr_16(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lhz r11,830(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r24,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// lhz r11,830(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r24,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r24.u8);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lhz r10,830(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// lhz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 832);
	// lhz r11,830(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,830(r31)
	PPC_STORE_U16(ctx.r31.u32 + 830, ctx.r11.u16);
	// sth r10,832(r31)
	PPC_STORE_U16(ctx.r31.u32 + 832, ctx.r10.u16);
	// lwz r6,96(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x82266f88
	ctx.lr = 0x8225C268;
	sub_82266F88(ctx, base);
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
	// addi r19,r1,160
	ctx.r19.s64 = ctx.r1.s64 + 160;
loc_8225C27C:
	// lhz r25,8(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// add r10,r25,r28
	ctx.r10.u64 = ctx.r25.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x8225c57c
	if (ctx.cr6.gt) goto loc_8225C57C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8225c2c0
	if (ctx.cr6.eq) goto loc_8225C2C0;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x8225c57c
	if (ctx.cr6.gt) goto loc_8225C57C;
	// lbz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// subf r8,r25,r20
	ctx.r8.s64 = ctx.r20.s64 - ctx.r25.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// subf r20,r28,r8
	ctx.r20.s64 = ctx.r8.s64 - ctx.r28.s64;
	// clrlwi r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r9.u8);
	// b 0x8225c2cc
	goto loc_8225C2CC;
loc_8225C2C0:
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r21,r10,24
	ctx.r21.u64 = ctx.r10.u32 & 0xFF;
loc_8225C2CC:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r30,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// stbx r24,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r24.u8);
	// beq cr6,0x8225c488
	if (ctx.cr6.eq) goto loc_8225C488;
	// lbz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// rlwinm. r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq 0x8225c300
	if (ctx.cr0.eq) goto loc_8225C300;
	// beq cr6,0x8225c57c
	if (ctx.cr6.eq) goto loc_8225C57C;
	// b 0x8225c304
	goto loc_8225C304;
loc_8225C300:
	// bne cr6,0x8225c57c
	if (!ctx.cr6.eq) goto loc_8225C57C;
loc_8225C304:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// beq cr6,0x8225c3d0
	if (ctx.cr6.eq) goto loc_8225C3D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8225c390
	if (ctx.cr6.eq) goto loc_8225C390;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225c368
	if (ctx.cr6.eq) goto loc_8225C368;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82267238
	ctx.lr = 0x8225C32C;
	sub_82267238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lhz r7,828(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 828);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225a468
	ctx.lr = 0x8225C364;
	sub_8225A468(ctx, base);
	// b 0x8225c480
	goto loc_8225C480;
loc_8225C368:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822672a0
	ctx.lr = 0x8225C370;
	sub_822672A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8225c57c
	if (ctx.cr6.gt) goto loc_8225C57C;
	// b 0x8225c488
	goto loc_8225C488;
loc_8225C390:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822671f8
	ctx.lr = 0x8225C398;
	sub_822671F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r25,r25,-6
	ctx.r25.s64 = ctx.r25.s64 + -6;
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// lwz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8225c57c
	if (!ctx.cr6.eq) goto loc_8225C57C;
	// addi r3,r26,592
	ctx.r3.s64 = ctx.r26.s64 + 592;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82262660
	ctx.lr = 0x8225C3C4;
	sub_82262660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c57c
	if (!ctx.cr0.eq) goto loc_8225C57C;
	// b 0x8225c488
	goto loc_8225C488;
loc_8225C3D0:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82267258
	ctx.lr = 0x8225C3D8;
	sub_82267258(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// beq 0x8225c400
	if (ctx.cr0.eq) goto loc_8225C400;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225c57c
	if (!ctx.cr0.eq) goto loc_8225C57C;
	// b 0x8225c408
	goto loc_8225C408;
loc_8225C400:
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
loc_8225C408:
	// rlwinm r3,r11,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// bl 0x822671e0
	ctx.lr = 0x8225C410;
	sub_822671E0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r3,r11,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// bl 0x822671e0
	ctx.lr = 0x8225C424;
	sub_822671E0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r25,r3,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r3.s64;
	// lwz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8225c57c
	if (!ctx.cr6.eq) goto loc_8225C57C;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c488
	if (ctx.cr0.eq) goto loc_8225C488;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lhz r18,828(r31)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r31.u32 + 828);
	// addi r17,r1,96
	ctx.r17.s64 = ctx.r1.s64 + 96;
	// addi r16,r1,128
	ctx.r16.s64 = ctx.r1.s64 + 128;
	// bl 0x82267290
	ctx.lr = 0x8225C458;
	sub_82267290(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// bl 0x8225a468
	ctx.lr = 0x8225C480;
	sub_8225A468(ctx, base);
loc_8225C480:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
loc_8225C488:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c4c8
	if (ctx.cr6.eq) goto loc_8225C4C8;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c4c8
	if (!ctx.cr0.eq) goto loc_8225C4C8;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225a598
	ctx.lr = 0x8225C4C0;
	sub_8225A598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c57c
	if (ctx.cr0.eq) goto loc_8225C57C;
loc_8225C4C8:
	// subf r10,r25,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r25.s64;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// subf. r27,r28,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// beq 0x8225c56c
	if (ctx.cr0.eq) goto loc_8225C56C;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bge cr6,0x8225c57c
	if (!ctx.cr6.lt) goto loc_8225C57C;
	// lhz r11,830(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r24,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// lhz r11,830(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r24,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r24.u8);
	// lhz r10,830(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// lhz r11,830(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 830);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,830(r31)
	PPC_STORE_U16(ctx.r31.u32 + 830, ctx.r11.u16);
	// lhz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 832);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,832(r31)
	PPC_STORE_U16(ctx.r31.u32 + 832, ctx.r11.u16);
	// lwz r6,96(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x82266f88
	ctx.lr = 0x8225C558;
	sub_82266F88(ctx, base);
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c27c
	if (!ctx.cr0.eq) goto loc_8225C27C;
	// b 0x8225c57c
	goto loc_8225C57C;
loc_8225C56C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c580
	if (ctx.cr6.eq) goto loc_8225C580;
loc_8225C57C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8225C580:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C588"))) PPC_WEAK_FUNC(sub_8225C588);
PPC_FUNC_IMPL(__imp__sub_8225C588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225C590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,656
	ctx.r29.s64 = ctx.r30.s64 + 656;
	// lwz r31,656(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// b 0x8225c608
	goto loc_8225C608;
loc_8225C5A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82267258
	ctx.lr = 0x8225C5B8;
	sub_82267258(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,680(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 680);
	// lhz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c614
	if (!ctx.cr6.eq) goto loc_8225C614;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266400
	ctx.lr = 0x8225C5D8;
	sub_82266400(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x8225a640
	ctx.lr = 0x8225C5FC;
	sub_8225A640(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8225c634
	if (ctx.cr0.lt) goto loc_8225C634;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8225C608:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8225c5a8
	if (!ctx.cr6.eq) goto loc_8225C5A8;
	// b 0x8225c634
	goto loc_8225C634;
loc_8225C614:
	// lhz r10,680(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 680);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8225c634
	if (ctx.cr6.lt) goto loc_8225C634;
	// lis r28,-32646
	ctx.r28.s64 = -2139488256;
	// ori r28,r28,4109
	ctx.r28.u64 = ctx.r28.u64 | 4109;
loc_8225C634:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C640"))) PPC_WEAK_FUNC(sub_8225C640);
PPC_FUNC_IMPL(__imp__sub_8225C640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8225C648;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8225c680
	if (ctx.cr6.eq) goto loc_8225C680;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8225C66C:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// bne 0x8225c66c
	if (!ctx.cr0.eq) goto loc_8225C66C;
loc_8225C680:
	// addi r22,r25,40
	ctx.r22.s64 = ctx.r25.s64 + 40;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225C68C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// ori r26,r11,65534
	ctx.r26.u64 = ctx.r11.u64 | 65534;
loc_8225C69C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c6e0
	if (ctx.cr0.eq) goto loc_8225C6E0;
	// subfic r11,r30,127
	ctx.xer.ca = ctx.r30.u32 <= 127;
	ctx.r11.s64 = 127 - ctx.r30.s64;
	// rlwinm r27,r11,24,0,7
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
loc_8225C6B4:
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bl 0x8225b0c0
	ctx.lr = 0x8225C6C8;
	sub_8225B0C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225c77c
	if (ctx.cr0.lt) goto loc_8225C77C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225c6b4
	if (ctx.cr6.lt) goto loc_8225C6B4;
loc_8225C6E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8225c69c
	if (ctx.cr6.lt) goto loc_8225C69C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8225c778
	if (ctx.cr6.eq) goto loc_8225C778;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r25,592
	ctx.r3.s64 = ctx.r25.s64 + 592;
	// bl 0x822625a8
	ctx.lr = 0x8225C704;
	sub_822625A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c718
	if (!ctx.cr0.eq) goto loc_8225C718;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8225c77c
	goto loc_8225C77C;
loc_8225C718:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8225C720:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c768
	if (ctx.cr0.eq) goto loc_8225C768;
	// subfic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r30.s64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 2147483648;
loc_8225C73C:
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 | ctx.r28.u64;
	// bl 0x8225a758
	ctx.lr = 0x8225C750;
	sub_8225A758(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225c77c
	if (ctx.cr0.lt) goto loc_8225C77C;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225c73c
	if (ctx.cr6.lt) goto loc_8225C73C;
loc_8225C768:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8225c720
	if (ctx.cr6.lt) goto loc_8225C720;
loc_8225C778:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225C77C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225C784;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C790"))) PPC_WEAK_FUNC(sub_8225C790);
PPC_FUNC_IMPL(__imp__sub_8225C790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8225C798;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r28,r31,1024
	ctx.r28.s64 = ctx.r31.s64 + 1024;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225c81c
	if (ctx.cr6.eq) goto loc_8225C81C;
	// extsh r30,r22
	ctx.r30.s64 = ctx.r22.s16;
loc_8225C7D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8225c7e4
	if (!ctx.cr6.eq) goto loc_8225C7E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C7E4:
	// lhz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8225c81c
	if (!ctx.cr0.lt) goto loc_8225C81C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225a950
	ctx.lr = 0x8225C80C;
	sub_8225A950(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8225c7d4
	if (!ctx.cr6.eq) goto loc_8225C7D4;
loc_8225C81C:
	// lhz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1004);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c858
	if (ctx.cr0.eq) goto loc_8225C858;
	// lhz r4,1070(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1070);
	// clrlwi r29,r22,16
	ctx.r29.u64 = ctx.r22.u32 & 0xFFFF;
loc_8225C830:
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8225c858
	if (ctx.cr6.lt) goto loc_8225C858;
	// addi r3,r31,966
	ctx.r3.s64 = ctx.r31.s64 + 966;
	// bl 0x82266b70
	ctx.lr = 0x8225C84C;
	sub_82266B70(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8225c830
	goto loc_8225C830;
loc_8225C858:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8225ca30
	if (ctx.cr6.eq) goto loc_8225CA30;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,1072(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x8225c88c
	if (!ctx.cr6.lt) goto loc_8225C88C;
	// sth r11,1072(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1072, ctx.r11.u16);
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8225c890
	goto loc_8225C890;
loc_8225C88C:
	// li r25,0
	ctx.r25.s64 = 0;
loc_8225C890:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8225c940
	if (!ctx.cr6.eq) goto loc_8225C940;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8225C8A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8225c8d4
	if (ctx.cr6.eq) goto loc_8225C8D4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,966
	ctx.r3.s64 = ctx.r31.s64 + 966;
	// bl 0x82266ab8
	ctx.lr = 0x8225C8B4;
	sub_82266AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c8d4
	if (ctx.cr0.eq) goto loc_8225C8D4;
	// lwz r11,1192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r11.u32);
	// bl 0x82266150
	ctx.lr = 0x8225C8D0;
	sub_82266150(ctx, base);
loc_8225C8D0:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8225C8D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r29,-8
	ctx.r30.s64 = ctx.r29.s64 + -8;
	// bne cr6,0x8225c8e4
	if (!ctx.cr6.eq) goto loc_8225C8E4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225C8E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225c9c4
	if (ctx.cr6.eq) goto loc_8225C9C4;
	// lhz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// lhz r10,2(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c9c4
	if (!ctx.cr6.eq) goto loc_8225C9C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225c910
	if (ctx.cr6.eq) goto loc_8225C910;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8225C910:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c990
	if (ctx.cr0.eq) goto loc_8225C990;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225a950
	ctx.lr = 0x8225C93C;
	sub_8225A950(ctx, base);
	// b 0x8225c9ac
	goto loc_8225C9AC;
loc_8225C940:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c8a0
	if (ctx.cr0.eq) goto loc_8225C8A0;
	// lhz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 324);
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c8a0
	if (!ctx.cr6.eq) goto loc_8225C8A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225c974
	if (ctx.cr6.eq) goto loc_8225C974;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8225C974:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8225c8d4
	if (ctx.cr6.eq) goto loc_8225C8D4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225a818
	ctx.lr = 0x8225C98C;
	sub_8225A818(ctx, base);
	// b 0x8225c8d0
	goto loc_8225C8D0;
loc_8225C990:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8225c9b0
	if (ctx.cr6.eq) goto loc_8225C9B0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225a818
	ctx.lr = 0x8225C9AC;
	sub_8225A818(ctx, base);
loc_8225C9AC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8225C9B0:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225ca1c
	if (ctx.cr6.eq) goto loc_8225CA1C;
	// addi r30,r29,-8
	ctx.r30.s64 = ctx.r29.s64 + -8;
	// b 0x8225ca1c
	goto loc_8225CA1C;
loc_8225C9C4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c9e8
	if (ctx.cr0.eq) goto loc_8225C9E8;
	// addi r3,r31,966
	ctx.r3.s64 = ctx.r31.s64 + 966;
	// lhz r4,2(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// bl 0x82266b70
	ctx.lr = 0x8225C9E4;
	sub_82266B70(ctx, base);
	// b 0x8225ca1c
	goto loc_8225CA1C;
loc_8225C9E8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8225ca1c
	if (ctx.cr6.eq) goto loc_8225CA1C;
	// addi r3,r31,966
	ctx.r3.s64 = ctx.r31.s64 + 966;
	// lhz r4,2(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// bl 0x82266ab8
	ctx.lr = 0x8225C9FC;
	sub_82266AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ca1c
	if (ctx.cr0.eq) goto loc_8225CA1C;
	// lwz r11,1192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r11.u32);
	// bl 0x82266150
	ctx.lr = 0x8225CA18;
	sub_82266150(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_8225CA1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82258ba0
	ctx.lr = 0x8225CA24;
	sub_82258BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c8e4
	if (!ctx.cr0.eq) goto loc_8225C8E4;
	// b 0x8225ca4c
	goto loc_8225CA4C;
loc_8225CA30:
	// lhz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1072);
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x8225ca4c
	if (!ctx.cr6.lt) goto loc_8225CA4C;
	// sth r22,1072(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1072, ctx.r22.u16);
loc_8225CA4C:
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225ca64
	if (!ctx.cr0.eq) goto loc_8225CA64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259ef0
	ctx.lr = 0x8225CA64;
	sub_82259EF0(ctx, base);
loc_8225CA64:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8225ca94
	if (ctx.cr6.eq) goto loc_8225CA94;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82265ef0
	ctx.lr = 0x8225CA90;
	sub_82265EF0(ctx, base);
	// stw r24,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r24.u32);
loc_8225CA94:
	// sth r22,1070(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1070, ctx.r22.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225CAA4"))) PPC_WEAK_FUNC(sub_8225CAA4);
PPC_FUNC_IMPL(__imp__sub_8225CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225CAA8"))) PPC_WEAK_FUNC(sub_8225CAA8);
PPC_FUNC_IMPL(__imp__sub_8225CAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225CAB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225cbd4
	if (!ctx.cr6.eq) goto loc_8225CBD4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82260c90
	ctx.lr = 0x8225CAD8;
	sub_82260C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225cbd4
	if (ctx.cr0.eq) goto loc_8225CBD4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r29,1070(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1070);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r10,r10,8,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x300;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82258a98
	ctx.lr = 0x8225CB04;
	sub_82258A98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// cmpwi cr6,r27,-256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -256, ctx.xer);
	// blt cr6,0x8225cbd4
	if (ctx.cr6.lt) goto loc_8225CBD4;
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 256, ctx.xer);
	// bgt cr6,0x8225cbd4
	if (ctx.cr6.gt) goto loc_8225CBD4;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8225cbd4
	if (ctx.cr0.lt) goto loc_8225CBD4;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225cb6c
	if (ctx.cr6.eq) goto loc_8225CB6C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265b90
	ctx.lr = 0x8225CB50;
	sub_82265B90(ctx, base);
	// lhz r11,1056(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8225cbd4
	if (!ctx.cr0.gt) goto loc_8225CBD4;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// b 0x8225cb70
	goto loc_8225CB70;
loc_8225CB6C:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8225CB70:
	// lwz r29,824(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r29,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r29.u32);
	// bl 0x821f7f18
	ctx.lr = 0x8225CB7C;
	sub_821F7F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8225cbc8
	if (ctx.cr6.lt) goto loc_8225CBC8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c790
	ctx.lr = 0x8225CBA0;
	sub_8225C790(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8225a1c0
	ctx.lr = 0x8225CBC0;
	sub_8225A1C0(ctx, base);
	// or. r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cbd4
	if (!ctx.cr0.eq) goto loc_8225CBD4;
loc_8225CBC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x822661f0
	ctx.lr = 0x8225CBD4;
	sub_822661F0(ctx, base);
loc_8225CBD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225CBE0"))) PPC_WEAK_FUNC(sub_8225CBE0);
PPC_FUNC_IMPL(__imp__sub_8225CBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8225CBE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8225ce44
	if (ctx.cr6.eq) goto loc_8225CE44;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ce44
	if (ctx.cr0.eq) goto loc_8225CE44;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r4,40(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// bl 0x82261088
	ctx.lr = 0x8225CC28;
	sub_82261088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ce44
	if (ctx.cr0.eq) goto loc_8225CE44;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8225ce44
	if (ctx.cr6.lt) goto loc_8225CE44;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1607
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1607, ctx.xer);
	// bgt cr6,0x8225ce44
	if (ctx.cr6.gt) goto loc_8225CE44;
	// lhz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x8225ce44
	if (ctx.cr6.gt) goto loc_8225CE44;
	// lhz r11,7(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 7);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8225ce44
	if (ctx.cr6.lt) goto loc_8225CE44;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,60000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60000, ctx.xer);
	// bgt cr6,0x8225ce44
	if (ctx.cr6.gt) goto loc_8225CE44;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8225ce44
	if (ctx.cr6.gt) goto loc_8225CE44;
	// lwz r11,29(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225ce44
	if (ctx.cr0.eq) goto loc_8225CE44;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8225ce44
	if (ctx.cr6.gt) goto loc_8225CE44;
	// lwz r11,9(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9);
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8225ce44
	if (!ctx.cr6.eq) goto loc_8225CE44;
	// lwz r11,25(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8225ce44
	if (!ctx.cr6.eq) goto loc_8225CE44;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82260970
	ctx.lr = 0x8225CCC4;
	sub_82260970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ce44
	if (ctx.cr0.eq) goto loc_8225CE44;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8225ce44
	if (ctx.cr6.gt) goto loc_8225CE44;
	// lbz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r10.u8);
	// lwz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// bne cr6,0x8225ce44
	if (!ctx.cr6.eq) goto loc_8225CE44;
	// lhz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,1080(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1080, ctx.r10.u16);
	// lhz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5);
	// sth r10,1076(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1076, ctx.r10.u16);
	// lhz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 7);
	// sth r10,1078(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1078, ctx.r10.u16);
	// lwz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// bl 0x8225aae8
	ctx.lr = 0x8225CD2C;
	sub_8225AAE8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225cd6c
	if (ctx.cr6.eq) goto loc_8225CD6C;
	// addi r3,r31,592
	ctx.r3.s64 = ctx.r31.s64 + 592;
	// bl 0x822625a8
	ctx.lr = 0x8225CD40;
	sub_822625A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225cd6c
	if (!ctx.cr0.eq) goto loc_8225CD6C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225ce44
	if (ctx.cr6.eq) goto loc_8225CE44;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8225ce34
	goto loc_8225CE34;
loc_8225CD6C:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
loc_8225CD74:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225cdc4
	if (ctx.cr0.eq) goto loc_8225CDC4;
	// subfic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r29.s64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 2147483648;
loc_8225CD90:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bl 0x8225a758
	ctx.lr = 0x8225CDAC;
	sub_8225A758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ce1c
	if (ctx.cr0.lt) goto loc_8225CE1C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225cd90
	if (ctx.cr6.lt) goto loc_8225CD90;
loc_8225CDC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x8225cd74
	if (ctx.cr6.lt) goto loc_8225CD74;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,17(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// bl 0x821f7f18
	ctx.lr = 0x8225CDE0;
	sub_821F7F18(ctx, base);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8225cdf8
	if (!ctx.cr6.gt) goto loc_8225CDF8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8225CDF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ab68
	ctx.lr = 0x8225CE04;
	sub_8225AB68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225ce44
	if (ctx.cr6.eq) goto loc_8225CE44;
	// stw r25,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225ce48
	goto loc_8225CE48;
loc_8225CE1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225ce44
	if (ctx.cr6.eq) goto loc_8225CE44;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8225CE34:
	// stb r26,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r26.u8);
	// bl 0x822590f0
	ctx.lr = 0x8225CE44;
	sub_822590F0(ctx, base);
loc_8225CE44:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8225CE48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225CE50"))) PPC_WEAK_FUNC(sub_8225CE50);
PPC_FUNC_IMPL(__imp__sub_8225CE50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225cecc
	if (!ctx.cr6.eq) goto loc_8225CECC;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225cecc
	if (ctx.cr6.eq) goto loc_8225CECC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822610f0
	ctx.lr = 0x8225CE9C;
	sub_822610F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225cecc
	if (ctx.cr0.eq) goto loc_8225CECC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225cecc
	if (!ctx.cr6.eq) goto loc_8225CECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7);
	// bl 0x8225ab68
	ctx.lr = 0x8225CECC;
	sub_8225AB68(ctx, base);
loc_8225CECC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8225CEE4"))) PPC_WEAK_FUNC(sub_8225CEE4);
PPC_FUNC_IMPL(__imp__sub_8225CEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225CEE8"))) PPC_WEAK_FUNC(sub_8225CEE8);
PPC_FUNC_IMPL(__imp__sub_8225CEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225CEF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225cf94
	if (!ctx.cr6.eq) goto loc_8225CF94;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cf94
	if (ctx.cr0.eq) goto loc_8225CF94;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82261148
	ctx.lr = 0x8225CF30;
	sub_82261148(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225cf94
	if (ctx.cr0.eq) goto loc_8225CF94;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225cf94
	if (!ctx.cr6.eq) goto loc_8225CF94;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225cf7c
	if (ctx.cr6.eq) goto loc_8225CF7C;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// stb r30,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r30.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r30.u8);
	// ori r11,r11,4104
	ctx.r11.u64 = ctx.r11.u64 | 4104;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x822590f0
	ctx.lr = 0x8225CF7C;
	sub_822590F0(ctx, base);
loc_8225CF7C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225cf94
	if (ctx.cr6.eq) goto loc_8225CF94;
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225cf98
	goto loc_8225CF98;
loc_8225CF94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225CF98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225CFA0"))) PPC_WEAK_FUNC(sub_8225CFA0);
PPC_FUNC_IMPL(__imp__sub_8225CFA0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225cffc
	if (ctx.cr6.eq) goto loc_8225CFFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8225cfe8
	if (!ctx.cr6.eq) goto loc_8225CFE8;
	// lwz r11,1176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cffc
	if (ctx.cr0.eq) goto loc_8225CFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1173, ctx.r11.u8);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,1172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1172, ctx.r11.u8);
	// bl 0x822590f0
	ctx.lr = 0x8225CFE4;
	sub_822590F0(ctx, base);
	// b 0x8225cffc
	goto loc_8225CFFC;
loc_8225CFE8:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,4113
	ctx.r11.u64 = ctx.r11.u64 | 4113;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bl 0x8225b530
	ctx.lr = 0x8225CFFC;
	sub_8225B530(ctx, base);
loc_8225CFFC:
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

__attribute__((alias("__imp__sub_8225D010"))) PPC_WEAK_FUNC(sub_8225D010);
PPC_FUNC_IMPL(__imp__sub_8225D010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225D018;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225d248
	if (!ctx.cr6.eq) goto loc_8225D248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82260e10
	ctx.lr = 0x8225D040;
	sub_82260E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225d248
	if (ctx.cr0.eq) goto loc_8225D248;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r1,98
	ctx.r9.s64 = ctx.r1.s64 + 98;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r29,3(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r6,r6,8,22,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0x300;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r29,r29,8,22,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0x300;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | ctx.r28.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8225a020
	ctx.lr = 0x8225D0A8;
	sub_8225A020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225d248
	if (ctx.cr0.eq) goto loc_8225D248;
	// lwz r28,824(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r28,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// bl 0x821f7f18
	ctx.lr = 0x8225D0BC;
	sub_821F7F18(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8225d108
	if (ctx.cr6.lt) goto loc_8225D108;
	// lhz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c790
	ctx.lr = 0x8225D0E8;
	sub_8225C790(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8225a1c0
	ctx.lr = 0x8225D104;
	sub_8225A1C0(ctx, base);
	// b 0x8225d114
	goto loc_8225D114;
loc_8225D108:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x822661f0
	ctx.lr = 0x8225D114;
	sub_822661F0(ctx, base);
loc_8225D114:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225d130
	if (ctx.cr6.eq) goto loc_8225D130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lhz r4,98(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// bl 0x8225c158
	ctx.lr = 0x8225D130;
	sub_8225C158(ctx, base);
loc_8225D130:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225d158
	if (ctx.cr0.eq) goto loc_8225D158;
	// lwz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7);
	// lbz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stb r10,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r10.u8);
	// b 0x8225d248
	goto loc_8225D248;
loc_8225D158:
	// lwz r10,1176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225d248
	if (ctx.cr0.eq) goto loc_8225D248;
	// lwz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7);
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225d198
	if (ctx.cr6.eq) goto loc_8225D198;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x8225d248
	if (ctx.cr6.gt) goto loc_8225D248;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8225d248
	if (!ctx.cr6.gt) goto loc_8225D248;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// b 0x8225d248
	goto loc_8225D248;
loc_8225D198:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// subf r4,r11,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8225d1b0
	if (ctx.cr6.lt) goto loc_8225D1B0;
	// lwz r4,700(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
loc_8225D1B0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r5,456(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82265ef0
	ctx.lr = 0x8225D1D0;
	sub_82265EF0(ctx, base);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225d21c
	if (ctx.cr0.eq) goto loc_8225D21C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// rlwimi r11,r10,22,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d20c
	if (ctx.cr0.eq) goto loc_8225D20C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8225d248
	if (ctx.cr6.lt) goto loc_8225D248;
loc_8225D20C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82262720
	ctx.lr = 0x8225D218;
	sub_82262720(ctx, base);
	// b 0x8225d248
	goto loc_8225D248;
loc_8225D21C:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8225d240
	if (ctx.cr0.eq) goto loc_8225D240;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x8225b530
	ctx.lr = 0x8225D23C;
	sub_8225B530(ctx, base);
	// b 0x8225d248
	goto loc_8225D248;
loc_8225D240:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82259fa8
	ctx.lr = 0x8225D248;
	sub_82259FA8(ctx, base);
loc_8225D248:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225D254"))) PPC_WEAK_FUNC(sub_8225D254);
PPC_FUNC_IMPL(__imp__sub_8225D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225D258"))) PPC_WEAK_FUNC(sub_8225D258);
PPC_FUNC_IMPL(__imp__sub_8225D258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225D260;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r30,1008
	ctx.r8.s64 = ctx.r30.s64 + 1008;
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8225d284
	if (!ctx.cr6.eq) goto loc_8225D284;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8225d47c
	goto loc_8225D47C;
loc_8225D284:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8225d298
	if (!ctx.cr6.eq) goto loc_8225D298;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225D298:
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225d2d4
	if (ctx.cr6.lt) goto loc_8225D2D4;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225d2c4
	if (ctx.cr6.lt) goto loc_8225D2C4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8225D2C4:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// bl 0x82262720
	ctx.lr = 0x8225D2D0;
	sub_82262720(ctx, base);
	// b 0x8225d348
	goto loc_8225D348;
loc_8225D2D4:
	// lwz r10,1192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1192);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,1192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1192, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// beq cr6,0x8225d350
	if (ctx.cr6.eq) goto loc_8225D350;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r9,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r9.s64;
	// blt cr6,0x8225d30c
	if (ctx.cr6.lt) goto loc_8225D30C;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// b 0x8225d310
	goto loc_8225D310;
loc_8225D30C:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
loc_8225D310:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225d350
	if (ctx.cr6.lt) goto loc_8225D350;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225d348
	if (ctx.cr6.eq) goto loc_8225D348;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// stb r29,1173(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1173, ctx.r29.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r29,1172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1172, ctx.r29.u8);
	// ori r11,r11,4103
	ctx.r11.u64 = ctx.r11.u64 | 4103;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x822590f0
	ctx.lr = 0x8225D348;
	sub_822590F0(ctx, base);
loc_8225D348:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x8225d47c
	goto loc_8225D47C;
loc_8225D350:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8225d37c
	if (ctx.cr6.eq) goto loc_8225D37C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225D37C:
	// addi r3,r30,688
	ctx.r3.s64 = ctx.r30.s64 + 688;
	// bl 0x82266150
	ctx.lr = 0x8225D384;
	sub_82266150(ctx, base);
	// lhz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225d3e8
	if (!ctx.cr0.eq) goto loc_8225D3E8;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// bl 0x82261b98
	ctx.lr = 0x8225D3A0;
	sub_82261B98(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x8225D3CC;
	sub_82256CA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225D3D4;
	sub_82256CA8(ctx, base);
	// lhz r11,1066(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1066);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1066(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1066, ctx.r11.u16);
	// b 0x8225d47c
	goto loc_8225D47C;
loc_8225D3E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82258dd0
	ctx.lr = 0x8225D3F0;
	sub_82258DD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82258e58
	ctx.lr = 0x8225D400;
	sub_82258E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r7,r30,1224
	ctx.r7.s64 = ctx.r30.s64 + 1224;
	// lhz r5,1056(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1056);
	// addi r6,r30,896
	ctx.r6.s64 = ctx.r30.s64 + 896;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261c78
	ctx.lr = 0x8225D41C;
	sub_82261C78(ctx, base);
	// lhz r11,1064(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1064);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225d438
	if (ctx.cr6.lt) goto loc_8225D438;
	// lwz r11,1176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1176);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,1176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1176, ctx.r11.u32);
loc_8225D438:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8225d454
	if (ctx.cr6.eq) goto loc_8225D454;
	// lbz r11,1172(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1172);
	// addi r3,r30,304
	ctx.r3.s64 = ctx.r30.s64 + 304;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1172, ctx.r11.u8);
	// bl 0x822627c0
	ctx.lr = 0x8225D454;
	sub_822627C0(ctx, base);
loc_8225D454:
	// lwz r11,1184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1184);
	// ld r10,1208(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1184, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1208(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1208, ctx.r11.u64);
loc_8225D47C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225D488"))) PPC_WEAK_FUNC(sub_8225D488);
PPC_FUNC_IMPL(__imp__sub_8225D488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x8225D490;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhz r11,1066(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225d9c0
	if (ctx.cr0.eq) goto loc_8225D9C0;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lhz r9,1074(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1074);
	// lhz r7,1070(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1070);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lhz r6,1080(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1080);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8225d9c0
	if (ctx.cr6.gt) goto loc_8225D9C0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82261658
	ctx.lr = 0x8225D4E8;
	sub_82261658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225d9bc
	if (ctx.cr0.lt) goto loc_8225D9BC;
	// addi r21,r31,966
	ctx.r21.s64 = ctx.r31.s64 + 966;
	// lhz r3,1056(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// addi r20,r31,896
	ctx.r20.s64 = ctx.r31.s64 + 896;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8225acd8
	ctx.lr = 0x8225D508;
	sub_8225ACD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r11,r11,1264
	ctx.xer.ca = ctx.r11.u32 <= 1264;
	ctx.r11.s64 = 1264 - ctx.r11.s64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82258dd0
	ctx.lr = 0x8225D51C;
	sub_82258DD0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82258e58
	ctx.lr = 0x8225D52C;
	sub_82258E58(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r30,254
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 254, ctx.xer);
	// bge cr6,0x8225d588
	if (!ctx.cr6.lt) goto loc_8225D588;
	// lhz r11,1066(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225d588
	if (ctx.cr0.eq) goto loc_8225D588;
	// lhz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1080);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225d588
	if (!ctx.cr6.lt) goto loc_8225D588;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8225d578
	if (ctx.cr0.eq) goto loc_8225D578;
	// lhz r9,1064(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// clrlwi r8,r18,16
	ctx.r8.u64 = ctx.r18.u32 & 0xFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225d588
	if (ctx.cr6.lt) goto loc_8225D588;
loc_8225D578:
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225d588
	if (!ctx.cr0.eq) goto loc_8225D588;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d590
	if (ctx.cr0.eq) goto loc_8225D590;
loc_8225D588:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_8225D590:
	// lhz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r11.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225d5cc
	if (!ctx.cr6.lt) goto loc_8225D5CC;
	// lhz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// lhz r9,1066(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8225d5cc
	if (!ctx.cr6.gt) goto loc_8225D5CC;
	// lhz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1080);
	// lhz r9,126(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8225d5cc
	if (!ctx.cr6.gt) goto loc_8225D5CC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8225d5d4
	if (ctx.cr6.eq) goto loc_8225D5D4;
loc_8225D5CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8225D5D4:
	// lhz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1004);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d5e8
	if (ctx.cr0.eq) goto loc_8225D5E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8225D5E8:
	// bl 0x821f7f18
	ctx.lr = 0x8225D5EC;
	sub_821F7F18(ctx, base);
	// lhz r11,1086(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1086);
	// lwz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8225d6ec
	if (ctx.cr6.eq) goto loc_8225D6EC;
loc_8225D618:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8225d6e4
	if (ctx.cr6.lt) goto loc_8225D6E4;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// bge cr6,0x8225d6e4
	if (!ctx.cr6.lt) goto loc_8225D6E4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8225d6e4
	if (ctx.cr6.eq) goto loc_8225D6E4;
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// lwz r11,-20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225d65c
	if (ctx.cr6.eq) goto loc_8225D65C;
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// addi r10,r7,32
	ctx.r10.s64 = ctx.r7.s64 + 32;
	// b 0x8225d668
	goto loc_8225D668;
loc_8225D65C:
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8225D668:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r28,r26,16
	ctx.r28.u64 = ctx.r26.u32 & 0xFFFF;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 | ctx.r28.u64;
	// rlwinm r9,r27,5,11,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0x1FFFE0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r30,r11,1224
	ctx.r30.s64 = ctx.r11.s64 + 1224;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// sth r29,1238(r11)
	PPC_STORE_U16(ctx.r11.u32 + 1238, ctx.r29.u16);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// clrlwi r25,r27,16
	ctx.r25.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x82263db0
	ctx.lr = 0x8225D6AC;
	sub_82263DB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225d6d8
	if (ctx.cr6.eq) goto loc_8225D6D8;
	// rlwinm. r11,r29,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// beq 0x8225d6d0
	if (ctx.cr0.eq) goto loc_8225D6D0;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8225d6d8
	goto loc_8225D6D8;
loc_8225D6D0:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
loc_8225D6D8:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225d618
	if (!ctx.cr6.eq) goto loc_8225D618;
loc_8225D6E4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8225d6fc
	if (!ctx.cr6.eq) goto loc_8225D6FC;
loc_8225D6EC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82256ca8
	ctx.lr = 0x8225D6F4;
	sub_82256CA8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8225d9c0
	goto loc_8225D9C0;
loc_8225D6FC:
	// clrlwi. r29,r26,16
	ctx.r29.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r31,1224
	ctx.r30.s64 = ctx.r31.s64 + 1224;
	// beq 0x8225d760
	if (ctx.cr0.eq) goto loc_8225D760;
loc_8225D708:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d728
	if (ctx.cr0.eq) goto loc_8225D728;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,1056(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259888
	ctx.lr = 0x8225D728;
	sub_82259888(ctx, base);
loc_8225D728:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// lhz r5,1056(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82267b50
	ctx.lr = 0x8225D754;
	sub_82267B50(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8225d708
	if (!ctx.cr0.eq) goto loc_8225D708;
loc_8225D760:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi. r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r30,r31,1736
	ctx.r30.s64 = ctx.r31.s64 + 1736;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x8225d7d4
	if (ctx.cr0.eq) goto loc_8225D7D4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8225D77C:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d79c
	if (ctx.cr0.eq) goto loc_8225D79C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,1056(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259888
	ctx.lr = 0x8225D79C;
	sub_82259888(ctx, base);
loc_8225D79C:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// lhz r5,1056(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82267b50
	ctx.lr = 0x8225D7C8;
	sub_82267B50(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8225d77c
	if (!ctx.cr0.eq) goto loc_8225D77C;
loc_8225D7D4:
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r11,1086(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1086);
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225d834
	if (ctx.cr6.eq) goto loc_8225D834;
	// ld r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 808);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x8225d820
	if (ctx.cr0.eq) goto loc_8225D820;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225d828
	if (ctx.cr6.lt) goto loc_8225D828;
loc_8225D820:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82262720
	ctx.lr = 0x8225D828;
	sub_82262720(ctx, base);
loc_8225D828:
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,1086(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1086, ctx.r11.u16);
	// b 0x8225d858
	goto loc_8225D858;
loc_8225D834:
	// lhz r10,1074(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1074);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8225d858
	if (ctx.cr6.lt) goto loc_8225D858;
	// sth r10,1086(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1086, ctx.r10.u16);
loc_8225D858:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lhz r9,1056(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x82261a18
	ctx.lr = 0x8225D884;
	sub_82261A18(ctx, base);
	// lhz r10,38(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 38);
	// lhz r11,1056(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// rlwinm. r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225d8b4
	if (!ctx.cr0.eq) goto loc_8225D8B4;
	// lhz r10,36(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 36);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// ble cr6,0x8225d8b4
	if (!ctx.cr6.gt) goto loc_8225D8B4;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// sth r11,36(r21)
	PPC_STORE_U16(ctx.r21.u32 + 36, ctx.r11.u16);
loc_8225D8B4:
	// lhz r11,1056(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r11.u16);
	// bne cr6,0x8225d8dc
	if (!ctx.cr6.eq) goto loc_8225D8DC;
	// lhz r11,330(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225d93c
	if (ctx.cr0.eq) goto loc_8225D93C;
loc_8225D8DC:
	// addi r9,r31,1024
	ctx.r9.s64 = ctx.r31.s64 + 1024;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,1028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,1028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r11.u32);
loc_8225D904:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225d904
	if (!ctx.cr0.eq) goto loc_8225D904;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 336);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// sth r10,336(r11)
	PPC_STORE_U16(ctx.r11.u32 + 336, ctx.r10.u16);
	// lhz r11,1066(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r11,1066(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1066, ctx.r11.u16);
loc_8225D93C:
	// lhz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// clrlwi r10,r18,16
	ctx.r10.u64 = ctx.r18.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// blt cr6,0x8225d958
	if (ctx.cr6.lt) goto loc_8225D958;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x8225d95c
	goto loc_8225D95C;
loc_8225D958:
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
loc_8225D95C:
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// bl 0x822627c0
	ctx.lr = 0x8225D974;
	sub_822627C0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225d98c
	if (ctx.cr6.eq) goto loc_8225D98C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259fa8
	ctx.lr = 0x8225D98C;
	sub_82259FA8(ctx, base);
loc_8225D98C:
	// lwz r11,1180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,1200(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1200);
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1200, ctx.r11.u64);
	// b 0x8225d9c0
	goto loc_8225D9C0;
loc_8225D9BC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8225D9C0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225D9C8"))) PPC_WEAK_FUNC(sub_8225D9C8);
PPC_FUNC_IMPL(__imp__sub_8225D9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225D9D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r29,1040
	ctx.r31.s64 = ctx.r29.s64 + 1040;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1040(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1040);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8225d9f4
	if (ctx.cr6.eq) goto loc_8225D9F4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8225D9F4:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225da44
	if (ctx.cr6.eq) goto loc_8225DA44;
	// lhz r10,834(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 834);
	// rlwinm. r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225dcf4
	if (!ctx.cr0.eq) goto loc_8225DCF4;
	// lhz r10,1068(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1068);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,1068(r29)
	PPC_STORE_U16(ctx.r29.u32 + 1068, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x8225DA40;
	sub_82256CA8(ctx, base);
	// b 0x8225dcf4
	goto loc_8225DCF4;
loc_8225DA44:
	// lhz r28,828(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 828);
	// lbz r11,1176(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1176);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// clrlwi r26,r11,31
	ctx.r26.u64 = ctx.r11.u32 & 0x1;
loc_8225DA54:
	// lhz r11,834(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 834);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225da68
	if (ctx.cr0.eq) goto loc_8225DA68;
	// lhz r27,828(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 828);
	// li r26,1
	ctx.r26.s64 = 1;
loc_8225DA68:
	// lhz r11,1068(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1068);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1068(r29)
	PPC_STORE_U16(ctx.r29.u32 + 1068, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8225daa0
	if (ctx.cr6.eq) goto loc_8225DAA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225DAA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225DAA8;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8225dad8
	if (ctx.cr6.eq) goto loc_8225DAD8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8225dac4
	if (!ctx.cr6.eq) goto loc_8225DAC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225DAC4:
	// lhz r10,824(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 824);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8225da54
	if (ctx.cr0.eq) goto loc_8225DA54;
	// b 0x8225dadc
	goto loc_8225DADC;
loc_8225DAD8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225DADC:
	// lwz r11,1176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1176);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225daf0
	if (ctx.cr0.eq) goto loc_8225DAF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b4a0
	ctx.lr = 0x8225DAF0;
	sub_8225B4A0(ctx, base);
loc_8225DAF0:
	// lwz r6,1176(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1176);
	// rlwinm. r11,r6,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225db04
	if (!ctx.cr0.eq) goto loc_8225DB04;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8225dcf4
	if (ctx.cr6.eq) goto loc_8225DCF4;
loc_8225DB04:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225dcf4
	if (ctx.cr6.eq) goto loc_8225DCF4;
	// lhz r8,896(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 896);
	// subf r11,r28,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r28.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8225db5c
	if (!ctx.cr0.gt) goto loc_8225DB5C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8225db54
	if (ctx.cr6.lt) goto loc_8225DB54;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8225db44
	if (!ctx.cr6.lt) goto loc_8225DB44;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8225db50
	goto loc_8225DB50;
loc_8225DB44:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8225DB50:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8225DB54:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8225db60
	goto loc_8225DB60;
loc_8225DB5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225DB60:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225dbb8
	if (ctx.cr6.eq) goto loc_8225DBB8;
	// lhz r11,828(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 828);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8225dbb8
	if (!ctx.cr0.gt) goto loc_8225DBB8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8225dbb4
	if (ctx.cr6.lt) goto loc_8225DBB4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8225dba4
	if (!ctx.cr6.lt) goto loc_8225DBA4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8225dbb0
	goto loc_8225DBB0;
loc_8225DBA4:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8225DBB0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8225DBB4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8225DBB8:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225dbd8
	if (!ctx.cr6.eq) goto loc_8225DBD8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8225dcf4
	if (ctx.cr6.eq) goto loc_8225DCF4;
	// oris r11,r6,256
	ctx.r11.u64 = ctx.r6.u64 | 16777216;
	// b 0x8225dca8
	goto loc_8225DCA8;
loc_8225DBD8:
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8225dc14
	if (ctx.cr6.lt) goto loc_8225DC14;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// bge cr6,0x8225dc04
	if (!ctx.cr6.lt) goto loc_8225DC04;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x8225dc10
	goto loc_8225DC10;
loc_8225DC04:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
loc_8225DC10:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
loc_8225DC14:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8225dc50
	if (ctx.cr6.eq) goto loc_8225DC50;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r31,104(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// oris r11,r6,256
	ctx.r11.u64 = ctx.r6.u64 | 16777216;
	// blt cr6,0x8225dc4c
	if (ctx.cr6.lt) goto loc_8225DC4C;
	// rlwinm r11,r6,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_8225DC4C:
	// stw r11,1176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1176, ctx.r11.u32);
loc_8225DC50:
	// lwz r8,1176(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1176);
	// rlwinm. r11,r8,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225dc94
	if (ctx.cr0.eq) goto loc_8225DC94;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r11,898(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 898);
	// lhz r9,896(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 896);
	// lhz r6,1064(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1064);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8225dc94
	if (!ctx.cr6.lt) goto loc_8225DC94;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8225dc90
	if (!ctx.cr6.gt) goto loc_8225DC90;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8225DC90:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8225DC94:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8225dcf4
	if (ctx.cr6.eq) goto loc_8225DCF4;
	// rlwinm. r11,r8,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225dcb0
	if (ctx.cr0.eq) goto loc_8225DCB0;
	// oris r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 | 2097152;
loc_8225DCA8:
	// stw r11,1176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1176, ctx.r11.u32);
	// b 0x8225dcf4
	goto loc_8225DCF4;
loc_8225DCB0:
	// oris r11,r8,64
	ctx.r11.u64 = ctx.r8.u64 | 4194304;
	// stw r11,1176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1176, ctx.r11.u32);
	// bl 0x821f7f18
	ctx.lr = 0x8225DCBC;
	sub_821F7F18(ctx, base);
	// lwz r10,420(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// addi r11,r29,364
	ctx.r11.s64 = ctx.r29.s64 + 364;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// beq 0x8225dce8
	if (ctx.cr0.eq) goto loc_8225DCE8;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225dcf4
	if (ctx.cr6.lt) goto loc_8225DCF4;
loc_8225DCE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82262720
	ctx.lr = 0x8225DCF4;
	sub_82262720(ctx, base);
loc_8225DCF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225DCFC"))) PPC_WEAK_FUNC(sub_8225DCFC);
PPC_FUNC_IMPL(__imp__sub_8225DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225DD00"))) PPC_WEAK_FUNC(sub_8225DD00);
PPC_FUNC_IMPL(__imp__sub_8225DD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8225DD08;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r23,r31,40
	ctx.r23.s64 = ctx.r31.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225DD34;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,476
	ctx.r29.s64 = ctx.r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x8225DD50;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225dd78
	if (!ctx.cr0.eq) goto loc_8225DD78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623a0
	ctx.lr = 0x8225DD64;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225dd78
	if (!ctx.cr0.eq) goto loc_8225DD78;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4111
	ctx.r30.u64 = ctx.r30.u64 | 4111;
	// b 0x8225dd98
	goto loc_8225DD98;
loc_8225DD78:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82263bf0
	ctx.lr = 0x8225DD90;
	sub_82263BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8225dda4
	if (!ctx.cr0.lt) goto loc_8225DDA4;
loc_8225DD98:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225DDA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8225ddac
	goto loc_8225DDAC;
loc_8225DDA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225DDAC;
	sub_8225BCE0(ctx, base);
loc_8225DDAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225DDB8"))) PPC_WEAK_FUNC(sub_8225DDB8);
PPC_FUNC_IMPL(__imp__sub_8225DDB8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8225de4c
	if (ctx.cr6.eq) goto loc_8225DE4C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r30,612
	ctx.r3.s64 = ctx.r30.s64 + 612;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 616, ctx.r11.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225de4c
	if (!ctx.cr6.lt) goto loc_8225DE4C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x82259a08
	ctx.lr = 0x8225DE4C;
	sub_82259A08(ctx, base);
loc_8225DE4C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r10,2,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82262ee8
	ctx.lr = 0x8225DE70;
	sub_82262EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225DE78;
	sub_82256CA8(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8225DE9C"))) PPC_WEAK_FUNC(sub_8225DE9C);
PPC_FUNC_IMPL(__imp__sub_8225DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225DEA0"))) PPC_WEAK_FUNC(sub_8225DEA0);
PPC_FUNC_IMPL(__imp__sub_8225DEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225DEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225DEC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8225ded4
	if (ctx.cr6.lt) goto loc_8225DED4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8225df1c
	goto loc_8225DF1C;
loc_8225DED4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225df30
	if (ctx.cr6.eq) goto loc_8225DF30;
	// addi r29,r31,476
	ctx.r29.s64 = ctx.r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x8225DEF8;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225df28
	if (!ctx.cr0.eq) goto loc_8225DF28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623a0
	ctx.lr = 0x8225DF0C;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225df28
	if (!ctx.cr0.eq) goto loc_8225DF28;
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4111
	ctx.r31.u64 = ctx.r31.u64 | 4111;
loc_8225DF1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225DF24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8225df74
	goto loc_8225DF74;
loc_8225DF28:
	// bl 0x82264198
	ctx.lr = 0x8225DF2C;
	sub_82264198(ctx, base);
	// b 0x8225df68
	goto loc_8225DF68;
loc_8225DF30:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225df68
	if (ctx.cr6.eq) goto loc_8225DF68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225DF44:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82264198
	ctx.lr = 0x8225DF54;
	sub_82264198(ctx, base);
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225df44
	if (ctx.cr6.lt) goto loc_8225DF44;
loc_8225DF68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225DF70;
	sub_8225BCE0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225DF74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225DF80"))) PPC_WEAK_FUNC(sub_8225DF80);
PPC_FUNC_IMPL(__imp__sub_8225DF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8225DF88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x8225e218
	if (ctx.cr6.gt) goto loc_8225E218;
	// beq cr6,0x8225e204
	if (ctx.cr6.eq) goto loc_8225E204;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x8225e250
	if (ctx.cr6.gt) goto loc_8225E250;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27152
	ctx.r12.s64 = ctx.r12.s64 + -27152;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,-8236
	ctx.r12.s64 = ctx.r12.s64 + -8236;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8225DFD4;
	case 1:
		goto loc_8225DFE8;
	case 2:
		goto loc_8225E250;
	case 3:
		goto loc_8225DFFC;
	case 4:
		goto loc_8225E060;
	case 5:
		goto loc_8225E074;
	case 6:
		goto loc_8225E250;
	case 7:
		goto loc_8225E250;
	case 8:
		goto loc_8225E088;
	case 9:
		goto loc_8225E250;
	case 10:
		goto loc_8225E250;
	case 11:
		goto loc_8225E250;
	case 12:
		goto loc_8225E250;
	case 13:
		goto loc_8225E094;
	case 14:
		goto loc_8225E250;
	case 15:
		goto loc_8225E250;
	case 16:
		goto loc_8225E250;
	case 17:
		goto loc_8225E0A0;
	case 18:
		goto loc_8225E0F8;
	case 19:
		goto loc_8225E150;
	case 20:
		goto loc_8225E250;
	case 21:
		goto loc_8225E15C;
	case 22:
		goto loc_8225E168;
	case 23:
		goto loc_8225E174;
	case 24:
		goto loc_8225E180;
	case 25:
		goto loc_8225E18C;
	case 26:
		goto loc_8225E1EC;
	case 27:
		goto loc_8225E1F8;
	default:
		__builtin_unreachable();
	}
loc_8225DFD4:
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82265c10
	ctx.lr = 0x8225DFE4;
	sub_82265C10(ctx, base);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225DFE8:
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82265c28
	ctx.lr = 0x8225DFF8;
	sub_82265C28(ctx, base);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225DFFC:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8225e014
	if (!ctx.cr6.eq) goto loc_8225E014;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E014:
	// addi r28,r31,476
	ctx.r28.s64 = ctx.r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822623f0
	ctx.lr = 0x8225E030;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225e058
	if (!ctx.cr0.eq) goto loc_8225E058;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822623a0
	ctx.lr = 0x8225E044;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225e058
	if (!ctx.cr0.eq) goto loc_8225E058;
loc_8225E04C:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4111
	ctx.r30.u64 = ctx.r30.u64 | 4111;
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E058:
	// stw r27,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r27.u32);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E060:
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82265da8
	ctx.lr = 0x8225E070;
	sub_82265DA8(ctx, base);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E074:
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82265df8
	ctx.lr = 0x8225E084;
	sub_82265DF8(ctx, base);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E088:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E094:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E0A0:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8225e0b8
	if (!ctx.cr6.eq) goto loc_8225E0B8;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E0B8:
	// addi r28,r31,476
	ctx.r28.s64 = ctx.r31.s64 + 476;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822623f0
	ctx.lr = 0x8225E0D4;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225e0f0
	if (!ctx.cr0.eq) goto loc_8225E0F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822623a0
	ctx.lr = 0x8225E0E8;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e04c
	if (ctx.cr0.eq) goto loc_8225E04C;
loc_8225E0F0:
	// stw r27,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r27.u32);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E0F8:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8225e110
	if (!ctx.cr6.eq) goto loc_8225E110;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E110:
	// addi r28,r31,476
	ctx.r28.s64 = ctx.r31.s64 + 476;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822623f0
	ctx.lr = 0x8225E12C;
	sub_822623F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225e148
	if (!ctx.cr0.eq) goto loc_8225E148;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822623a0
	ctx.lr = 0x8225E140;
	sub_822623A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e04c
	if (ctx.cr0.eq) goto loc_8225E04C;
loc_8225E148:
	// stw r27,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r27.u32);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E150:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E15C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E168:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E174:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E180:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E18C:
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225E1A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8225e1cc
	if (ctx.cr6.eq) goto loc_8225E1CC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8225e1d8
	if (ctx.cr6.eq) goto loc_8225E1D8;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_8225E1CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225E1D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E1D8:
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// bl 0x8225bce0
	ctx.lr = 0x8225E1E8;
	sub_8225BCE0(ctx, base);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E1EC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E1F8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E204:
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82265c40
	ctx.lr = 0x8225E214;
	sub_82265C40(ctx, base);
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E218:
	// cmpwi cr6,r5,4099
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4099, ctx.xer);
	// beq cr6,0x8225e2a4
	if (ctx.cr6.eq) goto loc_8225E2A4;
	// cmpwi cr6,r5,4100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4100, ctx.xer);
	// beq cr6,0x8225e298
	if (ctx.cr6.eq) goto loc_8225E298;
	// cmpwi cr6,r5,4101
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4101, ctx.xer);
	// beq cr6,0x8225e28c
	if (ctx.cr6.eq) goto loc_8225E28C;
	// cmpwi cr6,r5,4102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4102, ctx.xer);
	// beq cr6,0x8225e280
	if (ctx.cr6.eq) goto loc_8225E280;
	// cmpwi cr6,r5,4103
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4103, ctx.xer);
	// beq cr6,0x8225e274
	if (ctx.cr6.eq) goto loc_8225E274;
	// cmpwi cr6,r5,4105
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4105, ctx.xer);
	// beq cr6,0x8225e268
	if (ctx.cr6.eq) goto loc_8225E268;
	// cmpwi cr6,r5,4106
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4106, ctx.xer);
	// beq cr6,0x8225e25c
	if (ctx.cr6.eq) goto loc_8225E25C;
loc_8225E250:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
	// b 0x8225e2b0
	goto loc_8225E2B0;
loc_8225E25C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E268:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E274:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E280:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E28C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r11.u16);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E298:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
	// b 0x8225e2ac
	goto loc_8225E2AC;
loc_8225E2A4:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_8225E2AC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225E2B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E2BC"))) PPC_WEAK_FUNC(sub_8225E2BC);
PPC_FUNC_IMPL(__imp__sub_8225E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E2C0"))) PPC_WEAK_FUNC(sub_8225E2C0);
PPC_FUNC_IMPL(__imp__sub_8225E2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8225E2C8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// addi r19,r26,40
	ctx.r19.s64 = ctx.r26.s64 + 40;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225E2F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8225e300
	if (!ctx.cr6.eq) goto loc_8225E300;
	// lwz r24,532(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// b 0x8225e350
	goto loc_8225E350;
loc_8225E300:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e33c
	if (ctx.cr0.eq) goto loc_8225E33C;
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8225e334
	if (!ctx.cr6.gt) goto loc_8225E334;
loc_8225E314:
	// lis r21,-32646
	ctx.r21.s64 = -2139488256;
	// ori r21,r21,4111
	ctx.r21.u64 = ctx.r21.u64 | 4111;
loc_8225E31C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8225E320:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e63c
	if (ctx.cr6.eq) goto loc_8225E63C;
	// bl 0x82492d68
	ctx.lr = 0x8225E32C;
	sub_82492D68(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8225e634
	goto loc_8225E634;
loc_8225E334:
	// subf r24,r25,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r25.s64;
	// b 0x8225e350
	goto loc_8225E350;
loc_8225E33C:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// bne 0x8225e350
	if (!ctx.cr0.eq) goto loc_8225E350;
	// lwz r11,568(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 568);
	// add r24,r11,r25
	ctx.r24.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8225E350:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822657e8
	ctx.lr = 0x8225E360;
	sub_822657E8(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x8225e31c
	if (!ctx.cr0.eq) goto loc_8225E31C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8225E370:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225e370
	if (!ctx.cr0.eq) goto loc_8225E370;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r26,572
	ctx.r9.s64 = ctx.r26.s64 + 572;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// rlwinm. r27,r31,0,30,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,576(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 576);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,576(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 576);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,576(r26)
	PPC_STORE_U32(ctx.r26.u32 + 576, ctx.r11.u32);
	// bne 0x8225e3c4
	if (!ctx.cr0.eq) goto loc_8225E3C4;
	// lwz r11,584(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 584);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,584(r26)
	PPC_STORE_U32(ctx.r26.u32 + 584, ctx.r11.u32);
loc_8225E3C4:
	// rlwinm. r23,r31,0,29,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x8225e460
	if (!ctx.cr0.eq) goto loc_8225E460;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8225e460
	if (ctx.cr6.eq) goto loc_8225E460;
	// addi r28,r26,536
	ctx.r28.s64 = ctx.r26.s64 + 536;
	// addi r29,r26,476
	ctx.r29.s64 = ctx.r26.s64 + 476;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8225E3E4:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822623f0
	ctx.lr = 0x8225E3FC;
	sub_822623F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8225e418
	if (!ctx.cr0.eq) goto loc_8225E418;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822623a0
	ctx.lr = 0x8225E410;
	sub_822623A0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8225e314
	if (ctx.cr0.eq) goto loc_8225E314;
loc_8225E418:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225e44c
	if (ctx.cr6.eq) goto loc_8225E44C;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8225E430:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8225e530
	if (ctx.cr6.eq) goto loc_8225E530;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8225e430
	if (ctx.cr6.lt) goto loc_8225E430;
loc_8225E44C:
	// bl 0x82265670
	ctx.lr = 0x8225E450;
	sub_82265670(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8225e3e4
	if (ctx.cr6.lt) goto loc_8225E3E4;
loc_8225E460:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8225e478
	if (!ctx.cr6.eq) goto loc_8225E478;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8225e478
	if (ctx.cr6.eq) goto loc_8225E478;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8225e614
	if (!ctx.cr6.eq) goto loc_8225E614;
loc_8225E478:
	// lwz r11,516(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 516);
	// addi r30,r26,516
	ctx.r30.s64 = ctx.r26.s64 + 516;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225e550
	if (ctx.cr6.eq) goto loc_8225E550;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225e550
	if (ctx.cr0.eq) goto loc_8225E550;
loc_8225E494:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225e4ac
	if (ctx.cr6.eq) goto loc_8225E4AC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8225E4AC:
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225e548
	if (ctx.cr6.eq) goto loc_8225E548;
	// lwz r7,204(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// rlwinm. r11,r7,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225e548
	if (!ctx.cr0.eq) goto loc_8225E548;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8225e544
	if (ctx.cr6.eq) goto loc_8225E544;
	// lwz r8,156(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8225E4DC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x8225e4ec
	if (!ctx.cr6.eq) goto loc_8225E4EC;
	// lwz r10,152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
loc_8225E4EC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225e508
	if (ctx.cr6.eq) goto loc_8225E508;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8225e4dc
	if (ctx.cr6.lt) goto loc_8225E4DC;
loc_8225E508:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8225e548
	if (ctx.cr6.lt) goto loc_8225E548;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8225e53c
	if (ctx.cr6.eq) goto loc_8225E53C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8225e544
	if (ctx.cr6.lt) goto loc_8225E544;
loc_8225E524:
	// lis r21,-32646
	ctx.r21.s64 = -2139488256;
	// ori r21,r21,4111
	ctx.r21.u64 = ctx.r21.u64 | 4111;
	// b 0x8225e320
	goto loc_8225E320;
loc_8225E530:
	// lis r21,-32646
	ctx.r21.s64 = -2139488256;
	// ori r21,r21,4105
	ctx.r21.u64 = ctx.r21.u64 | 4105;
	// b 0x8225e320
	goto loc_8225E320;
loc_8225E53C:
	// rlwinm. r11,r7,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e548
	if (ctx.cr0.eq) goto loc_8225E548;
loc_8225E544:
	// bl 0x82265670
	ctx.lr = 0x8225E548;
	sub_82265670(ctx, base);
loc_8225E548:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8225e494
	if (!ctx.cr6.eq) goto loc_8225E494;
loc_8225E550:
	// lwz r11,524(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 524);
	// addi r30,r26,524
	ctx.r30.s64 = ctx.r26.s64 + 524;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225e614
	if (ctx.cr6.eq) goto loc_8225E614;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225e614
	if (ctx.cr0.eq) goto loc_8225E614;
loc_8225E56C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225e584
	if (ctx.cr6.eq) goto loc_8225E584;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8225E584:
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225e60c
	if (ctx.cr6.eq) goto loc_8225E60C;
	// lwz r7,204(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// rlwinm. r11,r7,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225e60c
	if (!ctx.cr0.eq) goto loc_8225E60C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8225e608
	if (ctx.cr6.eq) goto loc_8225E608;
	// lwz r8,156(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8225E5B4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x8225e5c4
	if (!ctx.cr6.eq) goto loc_8225E5C4;
	// lwz r10,152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
loc_8225E5C4:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225e5e0
	if (ctx.cr6.eq) goto loc_8225E5E0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8225e5b4
	if (ctx.cr6.lt) goto loc_8225E5B4;
loc_8225E5E0:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8225e60c
	if (ctx.cr6.lt) goto loc_8225E60C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8225e600
	if (ctx.cr6.eq) goto loc_8225E600;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8225e524
	if (!ctx.cr6.lt) goto loc_8225E524;
	// b 0x8225e608
	goto loc_8225E608;
loc_8225E600:
	// rlwinm. r11,r7,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e60c
	if (ctx.cr0.eq) goto loc_8225E60C;
loc_8225E608:
	// bl 0x82265670
	ctx.lr = 0x8225E60C;
	sub_82265670(ctx, base);
loc_8225E60C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8225e56c
	if (!ctx.cr6.eq) goto loc_8225E56C;
loc_8225E614:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225e630
	if (!ctx.cr6.eq) goto loc_8225E630;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b820
	ctx.lr = 0x8225E62C;
	sub_8225B820(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8225E630:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8225E634:
	// bl 0x82256ca8
	ctx.lr = 0x8225E638;
	sub_82256CA8(ctx, base);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_8225E63C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225E644;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E650"))) PPC_WEAK_FUNC(sub_8225E650);
PPC_FUNC_IMPL(__imp__sub_8225E650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8225E658;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27116
	ctx.r11.s64 = ctx.r11.s64 + -27116;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r27,r31,184
	ctx.r27.s64 = ctx.r31.s64 + 184;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// bl 0x8225b908
	ctx.lr = 0x8225E6A0;
	sub_8225B908(ctx, base);
	// addi r26,r31,244
	ctx.r26.s64 = ctx.r31.s64 + 244;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b908
	ctx.lr = 0x8225E6AC;
	sub_8225B908(ctx, base);
	// addi r25,r31,304
	ctx.r25.s64 = ctx.r31.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8225b908
	ctx.lr = 0x8225E6B8;
	sub_8225B908(ctx, base);
	// addi r24,r31,364
	ctx.r24.s64 = ctx.r31.s64 + 364;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8225b908
	ctx.lr = 0x8225E6C4;
	sub_8225B908(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82c09bcc
	ctx.lr = 0x8225E6D4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
loc_8225E6DC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225e6dc
	if (!ctx.cr0.eq) goto loc_8225E6DC;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x82219130
	ctx.lr = 0x8225E708;
	sub_82219130(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82219130
	ctx.lr = 0x8225E718;
	sub_82219130(ctx, base);
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// std r30,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r30.u64);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// bl 0x822626b0
	ctx.lr = 0x8225E750;
	sub_822626B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822626b0
	ctx.lr = 0x8225E75C;
	sub_822626B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822626b0
	ctx.lr = 0x8225E768;
	sub_822626B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822626b0
	ctx.lr = 0x8225E774;
	sub_822626B0(ctx, base);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// addi r27,r31,432
	ctx.r27.s64 = ctx.r31.s64 + 432;
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// bl 0x822383b0
	ctx.lr = 0x8225E79C;
	sub_822383B0(ctx, base);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822620a8
	ctx.lr = 0x8225E7B8;
	sub_822620A8(ctx, base);
	// addi r11,r31,516
	ctx.r11.s64 = ctx.r31.s64 + 516;
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// addi r11,r31,536
	ctx.r11.s64 = ctx.r31.s64 + 536;
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// stb r11,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r11.u8);
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// stb r11,537(r31)
	PPC_STORE_U8(ctx.r31.u32 + 537, ctx.r11.u8);
	// lbz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 2);
	// stb r11,538(r31)
	PPC_STORE_U8(ctx.r31.u32 + 538, ctx.r11.u8);
	// lbz r11,3(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 3);
	// stb r11,539(r31)
	PPC_STORE_U8(ctx.r31.u32 + 539, ctx.r11.u8);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// bl 0x82265cd0
	ctx.lr = 0x8225E810;
	sub_82265CD0(ctx, base);
	// addi r11,r31,572
	ctx.r11.s64 = ctx.r31.s64 + 572;
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// addi r3,r31,592
	ctx.r3.s64 = ctx.r31.s64 + 592;
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// sth r30,588(r31)
	PPC_STORE_U16(ctx.r31.u32 + 588, ctx.r30.u16);
	// bl 0x822624a0
	ctx.lr = 0x8225E844;
	sub_822624A0(ctx, base);
	// addi r11,r31,624
	ctx.r11.s64 = ctx.r31.s64 + 624;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// std r10,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r10.u64);
	// bl 0x822663e8
	ctx.lr = 0x8225E86C;
	sub_822663E8(ctx, base);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// bl 0x822663e8
	ctx.lr = 0x8225E878;
	sub_822663E8(ctx, base);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// sth r30,680(r31)
	PPC_STORE_U16(ctx.r31.u32 + 680, ctx.r30.u16);
	// sth r30,682(r31)
	PPC_STORE_U16(ctx.r31.u32 + 682, ctx.r30.u16);
	// bl 0x82265bf0
	ctx.lr = 0x8225E894;
	sub_82265BF0(ctx, base);
	// addi r3,r31,966
	ctx.r3.s64 = ctx.r31.s64 + 966;
	// bl 0x82266da8
	ctx.lr = 0x8225E89C;
	sub_82266DA8(ctx, base);
	// addi r11,r31,1008
	ctx.r11.s64 = ctx.r31.s64 + 1008;
	// addi r10,r31,1016
	ctx.r10.s64 = ctx.r31.s64 + 1016;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// addi r9,r31,1024
	ctx.r9.s64 = ctx.r31.s64 + 1024;
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// addi r11,r31,1032
	ctx.r11.s64 = ctx.r31.s64 + 1032;
	// stw r10,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r10.u32);
	// addi r8,r31,1040
	ctx.r8.s64 = ctx.r31.s64 + 1040;
	// stw r10,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r10.u32);
	// stw r9,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r9.u32);
	// stw r9,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r9.u32);
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// stw r8,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r8.u32);
	// stw r8,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r8.u32);
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
	// sth r30,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r30.u16);
	// lhz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 156);
	// sth r11,1058(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1058, ctx.r11.u16);
	// lhz r11,158(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 158);
	// sth r11,1060(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1060, ctx.r11.u16);
	// lhz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 160);
	// sth r11,1062(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1062, ctx.r11.u16);
	// lhz r10,162(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 162);
	// sth r11,1066(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1066, ctx.r11.u16);
	// sth r30,1070(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1070, ctx.r30.u16);
	// sth r30,1072(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1072, ctx.r30.u16);
	// sth r30,1074(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1074, ctx.r30.u16);
	// sth r10,1064(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1064, ctx.r10.u16);
	// sth r10,1068(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1068, ctx.r10.u16);
	// sth r30,1076(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1076, ctx.r30.u16);
	// sth r30,1078(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1078, ctx.r30.u16);
	// sth r30,1080(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1080, ctx.r30.u16);
	// sth r30,1082(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1082, ctx.r30.u16);
	// sth r30,1084(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1084, ctx.r30.u16);
	// sth r30,1086(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1086, ctx.r30.u16);
	// stb r30,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r30.u8);
	// stb r23,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r23.u8);
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// stw r30,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r30.u32);
	// stw r30,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r30.u32);
	// stw r30,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r30.u32);
	// stw r30,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r30.u32);
	// std r30,1200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1200, ctx.r30.u64);
	// std r30,1208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1208, ctx.r30.u64);
	// std r30,1216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1216, ctx.r30.u64);
	// bl 0x821f7f18
	ctx.lr = 0x8225E958;
	sub_821F7F18(ctx, base);
	// stw r3,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822383b0
	ctx.lr = 0x8225E968;
	sub_822383B0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8225e980
	if (!ctx.cr6.eq) goto loc_8225E980;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// b 0x8225e9d0
	goto loc_8225E9D0;
loc_8225E980:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// bl 0x82260f90
	ctx.lr = 0x8225E998;
	sub_82260F90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// lhz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3);
	// sth r10,1080(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1080, ctx.r10.u16);
	// lhz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5);
	// sth r10,1076(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1076, ctx.r10.u16);
	// lhz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 7);
	// sth r10,1078(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1078, ctx.r10.u16);
	// lwz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// bl 0x8225aae8
	ctx.lr = 0x8225E9D0;
	sub_8225AAE8(ctx, base);
loc_8225E9D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E9DC"))) PPC_WEAK_FUNC(sub_8225E9DC);
PPC_FUNC_IMPL(__imp__sub_8225E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E9E0"))) PPC_WEAK_FUNC(sub_8225E9E0);
PPC_FUNC_IMPL(__imp__sub_8225E9E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8225b958
	ctx.lr = 0x8225EA00;
	sub_8225B958(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ea10
	if (ctx.cr0.eq) goto loc_8225EA10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x8225EA10;
	sub_821200C8(ctx, base);
loc_8225EA10:
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

__attribute__((alias("__imp__sub_8225EA2C"))) PPC_WEAK_FUNC(sub_8225EA2C);
PPC_FUNC_IMPL(__imp__sub_8225EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EA30"))) PPC_WEAK_FUNC(sub_8225EA30);
PPC_FUNC_IMPL(__imp__sub_8225EA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225EA38;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,1200
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1200, ctx.xer);
	// ble cr6,0x8225ea5c
	if (!ctx.cr6.gt) goto loc_8225EA5C;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x8225eb38
	goto loc_8225EB38;
loc_8225EA5C:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225EA68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822615b0
	ctx.lr = 0x8225EA74;
	sub_822615B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8225ea8c
	if (!ctx.cr0.lt) goto loc_8225EA8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225EA84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8225eb38
	goto loc_8225EB38;
loc_8225EA8C:
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lhz r7,1060(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1060);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lhz r6,1058(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1058);
	// lhz r5,1064(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq 0x8225eaf0
	if (ctx.cr0.eq) goto loc_8225EAF0;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r28,r31,536
	ctx.r28.s64 = ctx.r31.s64 + 536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x82261710
	ctx.lr = 0x8225EAD0;
	sub_82261710(ctx, base);
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225eb10
	if (ctx.cr6.eq) goto loc_8225EB10;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82238440
	ctx.lr = 0x8225EAEC;
	sub_82238440(ctx, base);
	// b 0x8225eb10
	goto loc_8225EB10;
loc_8225EAF0:
	// lwz r28,432(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r30,r31,536
	ctx.r30.s64 = ctx.r31.s64 + 536;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82261790
	ctx.lr = 0x8225EB10;
	sub_82261790(ctx, base);
loc_8225EB10:
	// lhz r11,1066(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1066);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r10.u8);
	// sth r11,1066(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1066, ctx.r11.u16);
	// bl 0x8225bce0
	ctx.lr = 0x8225EB34;
	sub_8225BCE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225EB38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EB40"))) PPC_WEAK_FUNC(sub_8225EB40);
PPC_FUNC_IMPL(__imp__sub_8225EB40) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225EB64;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8225ec0c
	if (ctx.cr6.eq) goto loc_8225EC0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225ec0c
	if (ctx.cr6.eq) goto loc_8225EC0C;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r10,4114
	ctx.r10.u64 = ctx.r10.u64 | 4114;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225ebac
	if (!ctx.cr6.eq) goto loc_8225EBAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b530
	ctx.lr = 0x8225EBA8;
	sub_8225B530(ctx, base);
	// b 0x8225ebf4
	goto loc_8225EBF4;
loc_8225EBAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225ebf4
	if (!ctx.cr6.eq) goto loc_8225EBF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822590f0
	ctx.lr = 0x8225EBBC;
	sub_822590F0(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r30.u8);
	// stb r30,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8225ebe0
	if (ctx.cr6.eq) goto loc_8225EBE0;
	// bl 0x82256ca8
	ctx.lr = 0x8225EBDC;
	sub_82256CA8(ctx, base);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
loc_8225EBE0:
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ebf4
	if (ctx.cr6.eq) goto loc_8225EBF4;
	// bl 0x82256ca8
	ctx.lr = 0x8225EBF0;
	sub_82256CA8(ctx, base);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
loc_8225EBF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b5a0
	ctx.lr = 0x8225EBFC;
	sub_8225B5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225EC04;
	sub_8225BCE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8225ec1c
	goto loc_8225EC1C;
loc_8225EC0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225EC14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
loc_8225EC1C:
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

__attribute__((alias("__imp__sub_8225EC34"))) PPC_WEAK_FUNC(sub_8225EC34);
PPC_FUNC_IMPL(__imp__sub_8225EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EC38"))) PPC_WEAK_FUNC(sub_8225EC38);
PPC_FUNC_IMPL(__imp__sub_8225EC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225EC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225EC54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x821f7f18
	ctx.lr = 0x8225EC58;
	sub_821F7F18(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225ecc0
	if (!ctx.cr6.eq) goto loc_8225ECC0;
	// lbz r10,1172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225ecc0
	if (ctx.cr0.eq) goto loc_8225ECC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82258cd0
	ctx.lr = 0x8225EC80;
	sub_82258CD0(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r3.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// beq 0x8225edb4
	if (ctx.cr0.eq) goto loc_8225EDB4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82238450
	ctx.lr = 0x8225ECA0;
	sub_82238450(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8225edb4
	if (!ctx.cr6.eq) goto loc_8225EDB4;
	// lwz r10,1048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// b 0x8225edb4
	goto loc_8225EDB4;
loc_8225ECC0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225ed88
	if (!ctx.cr6.eq) goto loc_8225ED88;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225ece8
	if (ctx.cr0.eq) goto loc_8225ECE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ac00
	ctx.lr = 0x8225ECDC;
	sub_8225AC00(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8225edac
	goto loc_8225EDAC;
loc_8225ECE8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225ed0c
	if (ctx.cr0.eq) goto loc_8225ED0C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ad50
	ctx.lr = 0x8225ED00;
	sub_8225AD50(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// andi. r11,r11,223
	ctx.r11.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8225edac
	goto loc_8225EDAC;
loc_8225ED0C:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225ed2c
	if (ctx.cr0.eq) goto loc_8225ED2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225d258
	ctx.lr = 0x8225ED20;
	sub_8225D258(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// b 0x8225edac
	goto loc_8225EDAC;
loc_8225ED2C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225ed48
	if (ctx.cr0.eq) goto loc_8225ED48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225d488
	ctx.lr = 0x8225ED3C;
	sub_8225D488(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8225edac
	goto loc_8225EDAC;
loc_8225ED48:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225ed6c
	if (ctx.cr0.eq) goto loc_8225ED6C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ad50
	ctx.lr = 0x8225ED60;
	sub_8225AD50(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8225edac
	goto loc_8225EDAC;
loc_8225ED6C:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225edb4
	if (ctx.cr0.eq) goto loc_8225EDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ae50
	ctx.lr = 0x8225ED7C;
	sub_8225AE50(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8225edac
	goto loc_8225EDAC;
loc_8225ED88:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8225edb4
	if (!ctx.cr6.eq) goto loc_8225EDB4;
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225edb4
	if (ctx.cr0.eq) goto loc_8225EDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ac70
	ctx.lr = 0x8225EDA4;
	sub_8225AC70(ctx, base);
	// lbz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1172);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8225EDAC:
	// stw r3,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r3.u32);
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
loc_8225EDB4:
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225ede4
	if (!ctx.cr6.eq) goto loc_8225EDE4;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// bl 0x8225bce0
	ctx.lr = 0x8225EDD4;
	sub_8225BCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225EDDC;
	sub_82256CA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225ee3c
	goto loc_8225EE3C;
loc_8225EDE4:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8225edfc
	if (!ctx.cr6.eq) goto loc_8225EDFC;
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_8225EDFC:
	// stw r30,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82265e48
	ctx.lr = 0x8225EE1C;
	sub_82265E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ee30
	if (ctx.cr0.eq) goto loc_8225EE30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225EE2C;
	sub_8225BCE0(ctx, base);
	// b 0x8225ee38
	goto loc_8225EE38;
loc_8225EE30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225EE38;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225EE38:
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
loc_8225EE3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EE44"))) PPC_WEAK_FUNC(sub_8225EE44);
PPC_FUNC_IMPL(__imp__sub_8225EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EE48"))) PPC_WEAK_FUNC(sub_8225EE48);
PPC_FUNC_IMPL(__imp__sub_8225EE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225EE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82c09bec
	ctx.lr = 0x8225EE64;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,1176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
	// lwz r30,1048(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// beq cr6,0x8225eeb8
	if (ctx.cr6.eq) goto loc_8225EEB8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8225eec4
	if (!ctx.cr6.lt) goto loc_8225EEC4;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8225eec4
	if (ctx.cr6.eq) goto loc_8225EEC4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r11,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r11.u8);
	// bl 0x822590f0
	ctx.lr = 0x8225EEB8;
	sub_822590F0(ctx, base);
loc_8225EEB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225EEC0;
	sub_82256CA8(ctx, base);
	// b 0x8225ef2c
	goto loc_8225EF2C;
loc_8225EEC4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x822608a0
	ctx.lr = 0x8225EED0;
	sub_822608A0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8225ef20
	if (!ctx.cr6.gt) goto loc_8225EF20;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8225eeb8
	if (ctx.cr6.eq) goto loc_8225EEB8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8225ef10
	if (ctx.cr6.eq) goto loc_8225EF10;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8225eeb8
	if (ctx.cr6.eq) goto loc_8225EEB8;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8225ef08
	if (ctx.cr6.eq) goto loc_8225EF08;
	// bl 0x8225af38
	ctx.lr = 0x8225EF04;
	sub_8225AF38(ctx, base);
	// b 0x8225ef2c
	goto loc_8225EF2C;
loc_8225EF08:
	// bl 0x8225b030
	ctx.lr = 0x8225EF0C;
	sub_8225B030(ctx, base);
	// b 0x8225ef2c
	goto loc_8225EF2C;
loc_8225EF10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82258d68
	ctx.lr = 0x8225EF1C;
	sub_82258D68(ctx, base);
	// b 0x8225ef2c
	goto loc_8225EF2C;
loc_8225EF20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225aee0
	ctx.lr = 0x8225EF2C;
	sub_8225AEE0(ctx, base);
loc_8225EF2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225EF34;
	sub_8225BCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225EF3C;
	sub_82256CA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EF44"))) PPC_WEAK_FUNC(sub_8225EF44);
PPC_FUNC_IMPL(__imp__sub_8225EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EF48"))) PPC_WEAK_FUNC(sub_8225EF48);
PPC_FUNC_IMPL(__imp__sub_8225EF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225EF50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82c09bec
	ctx.lr = 0x8225EF60;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm r11,r11,0,4,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// lwz r29,1092(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// ble cr6,0x8225f004
	if (!ctx.cr6.gt) goto loc_8225F004;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// ble cr6,0x8225efc8
	if (!ctx.cr6.gt) goto loc_8225EFC8;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x8225efac
	if (ctx.cr6.eq) goto loc_8225EFAC;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f0e4
	if (ctx.cr0.eq) goto loc_8225F0E4;
	// addi r5,r31,1164
	ctx.r5.s64 = ctx.r31.s64 + 1164;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x82263cc0
	ctx.lr = 0x8225EFA4;
	sub_82263CC0(ctx, base);
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// b 0x8225efb8
	goto loc_8225EFB8;
loc_8225EFAC:
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f0e4
	if (ctx.cr6.eq) goto loc_8225F0E4;
loc_8225EFB8:
	// bl 0x82256ca8
	ctx.lr = 0x8225EFBC;
	sub_82256CA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// b 0x8225f0e4
	goto loc_8225F0E4;
loc_8225EFC8:
	// addi r30,r31,1164
	ctx.r30.s64 = ctx.r31.s64 + 1164;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82263cc0
	ctx.lr = 0x8225EFDC;
	sub_82263CC0(ctx, base);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x8225eff0
	if (!ctx.cr6.eq) goto loc_8225EFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8225b420
	ctx.lr = 0x8225EFF0;
	sub_8225B420(ctx, base);
loc_8225EFF0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82256ca8
	ctx.lr = 0x8225EFF8;
	sub_82256CA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8225f0e4
	goto loc_8225F0E4;
loc_8225F004:
	// addi r30,r31,1164
	ctx.r30.s64 = ctx.r31.s64 + 1164;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82263830
	ctx.lr = 0x8225F018;
	sub_82263830(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8225f060
	if (!ctx.cr6.eq) goto loc_8225F060;
	// lhz r11,682(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 682);
	// lhz r10,680(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 680);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,682(r31)
	PPC_STORE_U16(ctx.r31.u32 + 682, ctx.r9.u16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225f074
	if (ctx.cr6.eq) goto loc_8225F074;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r31,624
	ctx.r10.s64 = ctx.r31.s64 + 624;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225f054
	if (!ctx.cr6.eq) goto loc_8225F054;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F054:
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// bl 0x82263448
	ctx.lr = 0x8225F05C;
	sub_82263448(ctx, base);
	// b 0x8225f074
	goto loc_8225F074;
loc_8225F060:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x8225f074
	if (!ctx.cr6.eq) goto loc_8225F074;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8225ddb8
	ctx.lr = 0x8225F074;
	sub_8225DDB8(ctx, base);
loc_8225F074:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82256ca8
	ctx.lr = 0x8225F07C;
	sub_82256CA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225f0e4
	if (!ctx.cr6.eq) goto loc_8225F0E4;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8225f0e4
	if (!ctx.cr6.gt) goto loc_8225F0E4;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f0e4
	if (ctx.cr6.eq) goto loc_8225F0E4;
	// bl 0x821f7f18
	ctx.lr = 0x8225F0AC;
	sub_821F7F18(ctx, base);
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// beq 0x8225f0dc
	if (ctx.cr0.eq) goto loc_8225F0DC;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225f0e4
	if (ctx.cr6.lt) goto loc_8225F0E4;
loc_8225F0DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82262720
	ctx.lr = 0x8225F0E4;
	sub_82262720(ctx, base);
loc_8225F0E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225F0EC;
	sub_8225BCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225F0F4;
	sub_82256CA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F0FC"))) PPC_WEAK_FUNC(sub_8225F0FC);
PPC_FUNC_IMPL(__imp__sub_8225F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F100"))) PPC_WEAK_FUNC(sub_8225F100);
PPC_FUNC_IMPL(__imp__sub_8225F100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225F108;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8225f184
	if (ctx.cr6.eq) goto loc_8225F184;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f170
	if (ctx.cr0.eq) goto loc_8225F170;
	// lhz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// ble cr6,0x8225f148
	if (!ctx.cr6.gt) goto loc_8225F148;
	// li r10,512
	ctx.r10.s64 = 512;
loc_8225F148:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225f1bc
	if (!ctx.cr6.lt) goto loc_8225F1BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82266468
	ctx.lr = 0x8225F16C;
	sub_82266468(ctx, base);
	// b 0x8225f1d8
	goto loc_8225F1D8;
loc_8225F170:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82261410
	ctx.lr = 0x8225F180;
	sub_82261410(ctx, base);
	// b 0x8225f1d8
	goto loc_8225F1D8;
loc_8225F184:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82267258
	ctx.lr = 0x8225F194;
	sub_82267258(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 680);
	// lhz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225f1e0
	if (ctx.cr6.eq) goto loc_8225F1E0;
	// lhz r9,1064(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225f1c8
	if (ctx.cr6.lt) goto loc_8225F1C8;
loc_8225F1BC:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4109
	ctx.r3.u64 = ctx.r3.u64 | 4109;
	// b 0x8225f208
	goto loc_8225F208;
loc_8225F1C8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// bl 0x82266600
	ctx.lr = 0x8225F1D8;
	sub_82266600(ctx, base);
loc_8225F1D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225f208
	goto loc_8225F208;
loc_8225F1E0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225a640
	ctx.lr = 0x8225F1F8;
	sub_8225A640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225f208
	if (ctx.cr0.lt) goto loc_8225F208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c588
	ctx.lr = 0x8225F208;
	sub_8225C588(ctx, base);
loc_8225F208:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F210"))) PPC_WEAK_FUNC(sub_8225F210);
PPC_FUNC_IMPL(__imp__sub_8225F210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8225F218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225F22C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r29,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r29.u8);
	// stb r29,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r29.u8);
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f268
	if (ctx.cr0.eq) goto loc_8225F268;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225F258;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ef48
	ctx.lr = 0x8225F260;
	sub_8225EF48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bec
	ctx.lr = 0x8225F268;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8225F268:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822590f0
	ctx.lr = 0x8225F270;
	sub_822590F0(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f284
	if (ctx.cr6.eq) goto loc_8225F284;
	// bl 0x82256ca8
	ctx.lr = 0x8225F280;
	sub_82256CA8(ctx, base);
	// stw r29,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
loc_8225F284:
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f298
	if (ctx.cr6.eq) goto loc_8225F298;
	// bl 0x82256ca8
	ctx.lr = 0x8225F294;
	sub_82256CA8(ctx, base);
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
loc_8225F298:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r30,r31,1008
	ctx.r30.s64 = ctx.r31.s64 + 1008;
	// b 0x8225f2e4
	goto loc_8225F2E4;
loc_8225F2A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f2b8
	if (!ctx.cr6.eq) goto loc_8225F2B8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8225f2d8
	goto loc_8225F2D8;
loc_8225F2B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225F2D8:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82256ca8
	ctx.lr = 0x8225F2E0;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F2E4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f2a4
	if (!ctx.cr6.eq) goto loc_8225F2A4;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// b 0x8225f338
	goto loc_8225F338;
loc_8225F2F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f30c
	if (!ctx.cr6.eq) goto loc_8225F30C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8225f32c
	goto loc_8225F32C;
loc_8225F30C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225F32C:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82256ca8
	ctx.lr = 0x8225F334;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F338:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f2f8
	if (!ctx.cr6.eq) goto loc_8225F2F8;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// addi r30,r31,1024
	ctx.r30.s64 = ctx.r31.s64 + 1024;
	// b 0x8225f38c
	goto loc_8225F38C;
loc_8225F34C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f360
	if (!ctx.cr6.eq) goto loc_8225F360;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8225f380
	goto loc_8225F380;
loc_8225F360:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225F380:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82256ca8
	ctx.lr = 0x8225F388;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F38C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f34c
	if (!ctx.cr6.eq) goto loc_8225F34C;
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// addi r30,r31,1032
	ctx.r30.s64 = ctx.r31.s64 + 1032;
	// b 0x8225f3e0
	goto loc_8225F3E0;
loc_8225F3A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f3b4
	if (!ctx.cr6.eq) goto loc_8225F3B4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8225f3d4
	goto loc_8225F3D4;
loc_8225F3B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225F3D4:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82256ca8
	ctx.lr = 0x8225F3DC;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F3E0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f3a0
	if (!ctx.cr6.eq) goto loc_8225F3A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82266798
	ctx.lr = 0x8225F3F4;
	sub_82266798(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// bl 0x82266798
	ctx.lr = 0x8225F40C;
	sub_82266798(ctx, base);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r30,r31,572
	ctx.r30.s64 = ctx.r31.s64 + 572;
	// b 0x8225f438
	goto loc_8225F438;
loc_8225F418:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f428
	if (!ctx.cr6.eq) goto loc_8225F428;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225F428:
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822596f8
	ctx.lr = 0x8225F434;
	sub_822596F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F438:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f418
	if (!ctx.cr6.eq) goto loc_8225F418;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r30,r31,516
	ctx.r30.s64 = ctx.r31.s64 + 516;
	// b 0x8225f46c
	goto loc_8225F46C;
loc_8225F44C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f45c
	if (!ctx.cr6.eq) goto loc_8225F45C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225F45C:
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b420
	ctx.lr = 0x8225F468;
	sub_8225B420(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F46C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f44c
	if (!ctx.cr6.eq) goto loc_8225F44C;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r30,r31,524
	ctx.r30.s64 = ctx.r31.s64 + 524;
	// b 0x8225f4a0
	goto loc_8225F4A0;
loc_8225F480:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f490
	if (!ctx.cr6.eq) goto loc_8225F490;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225F490:
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b420
	ctx.lr = 0x8225F49C;
	sub_8225B420(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F4A0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f480
	if (!ctx.cr6.eq) goto loc_8225F480;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r30,r31,624
	ctx.r30.s64 = ctx.r31.s64 + 624;
	// b 0x8225f4d4
	goto loc_8225F4D4;
loc_8225F4B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f4c4
	if (!ctx.cr6.eq) goto loc_8225F4C4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225F4C4:
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ddb8
	ctx.lr = 0x8225F4D0;
	sub_8225DDB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F4D4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f4b4
	if (!ctx.cr6.eq) goto loc_8225F4B4;
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// addi r30,r31,1040
	ctx.r30.s64 = ctx.r31.s64 + 1040;
	// b 0x8225f538
	goto loc_8225F538;
loc_8225F4E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f4fc
	if (!ctx.cr6.eq) goto loc_8225F4FC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8225f520
	goto loc_8225F520;
loc_8225F4FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8225F520:
	// lhz r11,1068(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1068);
	// addi r3,r10,-8
	ctx.r3.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1068(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1068, ctx.r11.u16);
	// bl 0x82256ca8
	ctx.lr = 0x8225F534;
	sub_82256CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225F538:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225f4e8
	if (!ctx.cr6.eq) goto loc_8225F4E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822614e8
	ctx.lr = 0x8225F548;
	sub_822614E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8225F550;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ca8
	ctx.lr = 0x8225F558;
	sub_82256CA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F560"))) PPC_WEAK_FUNC(sub_8225F560);
PPC_FUNC_IMPL(__imp__sub_8225F560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8225F568;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2248
	ctx.r4.s64 = 2248;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82247a60
	ctx.lr = 0x8225F598;
	sub_82247A60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8225f5ac
	if (!ctx.cr0.eq) goto loc_8225F5AC;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x8225f6b8
	goto loc_8225F6B8;
loc_8225F5AC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225e650
	ctx.lr = 0x8225F5C8;
	sub_8225E650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,536
	ctx.r9.s64 = ctx.r31.s64 + 536;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8225F5D4:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x8225f5d4
	if (!ctx.cr0.eq) goto loc_8225F5D4;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8225f600
	if (!ctx.cr6.gt) goto loc_8225F600;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4101
	ctx.r30.u64 = ctx.r30.u64 | 4101;
	// b 0x8225f698
	goto loc_8225F698;
loc_8225F600:
	// lwz r9,152(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8225f614
	if (!ctx.cr6.gt) goto loc_8225F614;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8225F614:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225f668
	if (ctx.cr6.eq) goto loc_8225F668;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8225f63c
	if (!ctx.cr6.gt) goto loc_8225F63C;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82259998
	ctx.lr = 0x8225F638;
	sub_82259998(ctx, base);
	// b 0x8225f640
	goto loc_8225F640;
loc_8225F63C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8225F640:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8225f65c
	if (ctx.cr6.eq) goto loc_8225F65C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x822621d8
	ctx.lr = 0x8225F654;
	sub_822621D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225f668
	if (!ctx.cr0.eq) goto loc_8225F668;
loc_8225F65C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x8225f698
	goto loc_8225F698;
loc_8225F668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822614d8
	ctx.lr = 0x8225F670;
	sub_822614D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225f698
	if (ctx.cr0.lt) goto loc_8225F698;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ea30
	ctx.lr = 0x8225F688;
	sub_8225EA30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8225f6b4
	if (!ctx.cr0.lt) goto loc_8225F6B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822614e8
	ctx.lr = 0x8225F698;
	sub_822614E8(ctx, base);
loc_8225F698:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82256ca8
	ctx.lr = 0x8225F6AC;
	sub_82256CA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8225f6b8
	goto loc_8225F6B8;
loc_8225F6B4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225F6B8:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F6C8"))) PPC_WEAK_FUNC(sub_8225F6C8);
PPC_FUNC_IMPL(__imp__sub_8225F6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8225F6D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r11,830(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 830);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225f6f0
	if (!ctx.cr0.eq) goto loc_8225F6F0;
	// bl 0x8225d9c8
	ctx.lr = 0x8225F6EC;
	sub_8225D9C8(ctx, base);
	// b 0x8225f7a8
	goto loc_8225F7A8;
loc_8225F6F0:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// beq cr6,0x8225f7a8
	if (ctx.cr6.eq) goto loc_8225F7A8;
	// addi r28,r30,592
	ctx.r28.s64 = ctx.r30.s64 + 592;
	// addi r31,r29,52
	ctx.r31.s64 = ctx.r29.s64 + 52;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8225F70C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225f738
	if (!ctx.cr6.lt) goto loc_8225F738;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x8225f738
	if (!ctx.cr6.gt) goto loc_8225F738;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8225f73c
	goto loc_8225F73C;
loc_8225F738:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8225F73C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x8225f75c
	if (!ctx.cr6.eq) goto loc_8225F75C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225f100
	ctx.lr = 0x8225F758;
	sub_8225F100(ctx, base);
	// b 0x8225f760
	goto loc_8225F760;
loc_8225F75C:
	// bl 0x822638d0
	ctx.lr = 0x8225F760;
	sub_822638D0(ctx, base);
loc_8225F760:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225f76c
	if (!ctx.cr0.lt) goto loc_8225F76C;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8225F76C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x8225f70c
	if (!ctx.cr0.eq) goto loc_8225F70C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x8225f7a8
	if (!ctx.cr6.lt) goto loc_8225F7A8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225f7a8
	if (ctx.cr6.eq) goto loc_8225F7A8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// stb r25,1173(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1173, ctx.r25.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r25,1172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1172, ctx.r25.u8);
	// bl 0x822590f0
	ctx.lr = 0x8225F7A8;
	sub_822590F0(ctx, base);
loc_8225F7A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F7B0"))) PPC_WEAK_FUNC(sub_8225F7B0);
PPC_FUNC_IMPL(__imp__sub_8225F7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8225F7B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225faa0
	if (!ctx.cr6.eq) goto loc_8225FAA0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,40(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// lwz r5,44(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// bl 0x82260af0
	ctx.lr = 0x8225F7E4;
	sub_82260AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225faa0
	if (ctx.cr0.eq) goto loc_8225FAA0;
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r24,r31,896
	ctx.r24.s64 = ctx.r31.s64 + 896;
	// lhz r4,896(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 896);
	// addi r22,r1,88
	ctx.r22.s64 = ctx.r1.s64 + 88;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r11,r11,8,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x300;
	// lbz r8,5(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r10,r10,8,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x300;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82258a98
	ctx.lr = 0x8225F828;
	sub_82258A98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82258eb8
	ctx.lr = 0x8225F834;
	sub_82258EB8(ctx, base);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// lhz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1064);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225f8c8
	if (!ctx.cr6.lt) goto loc_8225F8C8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8225f8c8
	if (!ctx.cr6.gt) goto loc_8225F8C8;
	// lhz r27,1070(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1070);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82258a98
	ctx.lr = 0x8225F864;
	sub_82258A98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// cmpwi cr6,r27,-256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -256, ctx.xer);
	// blt cr6,0x8225f8c8
	if (ctx.cr6.lt) goto loc_8225F8C8;
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 256, ctx.xer);
	// bgt cr6,0x8225f8c8
	if (ctx.cr6.gt) goto loc_8225F8C8;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8225f8c8
	if (ctx.cr0.lt) goto loc_8225F8C8;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f934
	if (ctx.cr6.eq) goto loc_8225F934;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265b90
	ctx.lr = 0x8225F8B0;
	sub_82265B90(ctx, base);
	// lhz r11,1056(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8225f938
	if (ctx.cr0.gt) goto loc_8225F938;
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8225F8C8:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_8225F8D8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8225faa0
	if (ctx.cr6.eq) goto loc_8225FAA0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x8225f978
	if (!ctx.cr6.eq) goto loc_8225F978;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r6,632(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 632);
	// rlwinm r5,r11,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// bl 0x82261388
	ctx.lr = 0x8225F900;
	sub_82261388(ctx, base);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8225f958
	if (ctx.cr6.eq) goto loc_8225F958;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8225c1c8
	ctx.lr = 0x8225F924;
	sub_8225C1C8(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x8225faa0
	if (ctx.cr0.eq) goto loc_8225FAA0;
	// std r30,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r30.u64);
	// b 0x8225f96c
	goto loc_8225F96C;
loc_8225F934:
	// li r22,0
	ctx.r22.s64 = 0;
loc_8225F938:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// bl 0x82265950
	ctx.lr = 0x8225F948;
	sub_82265950(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8225faa0
	if (ctx.cr0.eq) goto loc_8225FAA0;
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x8225f8d8
	goto loc_8225F8D8;
loc_8225F958:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f96c
	if (ctx.cr0.eq) goto loc_8225F96C;
	// li r21,1
	ctx.r21.s64 = 1;
loc_8225F96C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822659c8
	ctx.lr = 0x8225F978;
	sub_822659C8(ctx, base);
loc_8225F978:
	// lwz r30,824(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 824);
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// ld r10,1216(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1216);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// lwz r11,44(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1216, ctx.r11.u64);
	// bl 0x821f7f18
	ctx.lr = 0x8225F9A0;
	sub_821F7F18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8225f9e4
	if (ctx.cr6.lt) goto loc_8225F9E4;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c790
	ctx.lr = 0x8225F9C4;
	sub_8225C790(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8225a1c0
	ctx.lr = 0x8225F9E0;
	sub_8225A1C0(ctx, base);
	// b 0x8225f9f0
	goto loc_8225F9F0;
loc_8225F9E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x822661f0
	ctx.lr = 0x8225F9F0;
	sub_822661F0(ctx, base);
loc_8225F9F0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x8225a148
	ctx.lr = 0x8225FA08;
	sub_8225A148(ctx, base);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x8225faa0
	if (!ctx.cr6.eq) goto loc_8225FAA0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225fa2c
	if (ctx.cr6.eq) goto loc_8225FA2C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c158
	ctx.lr = 0x8225FA2C;
	sub_8225C158(ctx, base);
loc_8225FA2C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8225faa0
	if (ctx.cr6.eq) goto loc_8225FAA0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259050
	ctx.lr = 0x8225FA40;
	sub_82259050(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225f6c8
	ctx.lr = 0x8225FA4C;
	sub_8225F6C8(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225faa0
	if (!ctx.cr6.eq) goto loc_8225FAA0;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8225faa0
	if (!ctx.cr6.gt) goto loc_8225FAA0;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225faa0
	if (ctx.cr6.eq) goto loc_8225FAA0;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fa98
	if (ctx.cr0.eq) goto loc_8225FA98;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225faa0
	if (ctx.cr6.lt) goto loc_8225FAA0;
loc_8225FA98:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82262720
	ctx.lr = 0x8225FAA0;
	sub_82262720(ctx, base);
loc_8225FAA0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FAAC"))) PPC_WEAK_FUNC(sub_8225FAAC);
PPC_FUNC_IMPL(__imp__sub_8225FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FAB0"))) PPC_WEAK_FUNC(sub_8225FAB0);
PPC_FUNC_IMPL(__imp__sub_8225FAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225FAB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82c09bec
	ctx.lr = 0x8225FAD0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8225fb90
	if (ctx.cr6.eq) goto loc_8225FB90;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x822608a0
	ctx.lr = 0x8225FAE8;
	sub_822608A0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8225fb80
	if (ctx.cr6.eq) goto loc_8225FB80;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8225fb70
	if (ctx.cr6.eq) goto loc_8225FB70;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8225fb60
	if (ctx.cr6.eq) goto loc_8225FB60;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8225fb50
	if (ctx.cr6.eq) goto loc_8225FB50;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8225fb40
	if (ctx.cr6.eq) goto loc_8225FB40;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x8225fb30
	if (ctx.cr6.eq) goto loc_8225FB30;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bne cr6,0x8225fb90
	if (!ctx.cr6.eq) goto loc_8225FB90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225f7b0
	ctx.lr = 0x8225FB2C;
	sub_8225F7B0(ctx, base);
	// b 0x8225fb8c
	goto loc_8225FB8C;
loc_8225FB30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225d010
	ctx.lr = 0x8225FB3C;
	sub_8225D010(ctx, base);
	// b 0x8225fb8c
	goto loc_8225FB8C;
loc_8225FB40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225caa8
	ctx.lr = 0x8225FB4C;
	sub_8225CAA8(ctx, base);
	// b 0x8225fb8c
	goto loc_8225FB8C;
loc_8225FB50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225cfa0
	ctx.lr = 0x8225FB5C;
	sub_8225CFA0(ctx, base);
	// b 0x8225fb8c
	goto loc_8225FB8C;
loc_8225FB60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225cee8
	ctx.lr = 0x8225FB6C;
	sub_8225CEE8(ctx, base);
	// b 0x8225fb8c
	goto loc_8225FB8C;
loc_8225FB70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ce50
	ctx.lr = 0x8225FB7C;
	sub_8225CE50(ctx, base);
	// b 0x8225fb8c
	goto loc_8225FB8C;
loc_8225FB80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225cbe0
	ctx.lr = 0x8225FB8C;
	sub_8225CBE0(ctx, base);
loc_8225FB8C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8225FB90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225bce0
	ctx.lr = 0x8225FB98;
	sub_8225BCE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FBA4"))) PPC_WEAK_FUNC(sub_8225FBA4);
PPC_FUNC_IMPL(__imp__sub_8225FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FBA8"))) PPC_WEAK_FUNC(sub_8225FBA8);
PPC_FUNC_IMPL(__imp__sub_8225FBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225FBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32056
	ctx.r29.s64 = -2100822016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r29,32764
	ctx.r31.s64 = ctx.r29.s64 + 32764;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c09bec
	ctx.lr = 0x8225FBC8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32764(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32764);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lwz r10,32764(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32764);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,32764(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32764, ctx.r11.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x8225FBEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FBF4"))) PPC_WEAK_FUNC(sub_8225FBF4);
PPC_FUNC_IMPL(__imp__sub_8225FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FBF8"))) PPC_WEAK_FUNC(sub_8225FBF8);
PPC_FUNC_IMPL(__imp__sub_8225FBF8) {
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
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,32764
	ctx.r30.s64 = ctx.r11.s64 + 32764;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82c09bec
	ctx.lr = 0x8225FC20;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x8225FC4C;
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

__attribute__((alias("__imp__sub_8225FC64"))) PPC_WEAK_FUNC(sub_8225FC64);
PPC_FUNC_IMPL(__imp__sub_8225FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FC68"))) PPC_WEAK_FUNC(sub_8225FC68);
PPC_FUNC_IMPL(__imp__sub_8225FC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8225FC70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x821f7f18
	ctx.lr = 0x8225FC8C;
	sub_821F7F18(ctx, base);
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r30,r11,32764
	ctx.r30.s64 = ctx.r11.s64 + 32764;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82c09bec
	ctx.lr = 0x8225FCA0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225fd08
	if (ctx.cr6.eq) goto loc_8225FD08;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225fd08
	if (ctx.cr0.eq) goto loc_8225FD08;
loc_8225FCB8:
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8225fd08
	if (!ctx.cr6.eq) goto loc_8225FD08;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8225fcf0
	if (!ctx.cr6.eq) goto loc_8225FCF0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8225FCF0:
	// bl 0x821f7f18
	ctx.lr = 0x8225FCF4;
	sub_821F7F18(ctx, base);
	// subf. r31,r3,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8225fd00
	if (!ctx.cr0.lt) goto loc_8225FD00;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225FD00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8225fcb8
	if (!ctx.cr6.eq) goto loc_8225FCB8;
loc_8225FD08:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82c09bdc
	ctx.lr = 0x8225FD10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FD1C"))) PPC_WEAK_FUNC(sub_8225FD1C);
PPC_FUNC_IMPL(__imp__sub_8225FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FD20"))) PPC_WEAK_FUNC(sub_8225FD20);
PPC_FUNC_IMPL(__imp__sub_8225FD20) {
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
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,32764
	ctx.r31.s64 = ctx.r11.s64 + 32764;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c09bec
	ctx.lr = 0x8225FD48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r4,r11,32632
	ctx.r4.s64 = ctx.r11.s64 + 32632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x8225FD5C;
	sub_82219130(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c09bdc
	ctx.lr = 0x8225FD64;
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

__attribute__((alias("__imp__sub_8225FD7C"))) PPC_WEAK_FUNC(sub_8225FD7C);
PPC_FUNC_IMPL(__imp__sub_8225FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FD80"))) PPC_WEAK_FUNC(sub_8225FD80);
PPC_FUNC_IMPL(__imp__sub_8225FD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8225FD88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,32764
	ctx.r29.s64 = ctx.r11.s64 + 32764;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82c09bec
	ctx.lr = 0x8225FDA4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4096, ctx.xer);
	// bgt cr6,0x8226009c
	if (ctx.cr6.gt) goto loc_8226009C;
	// beq cr6,0x82260084
	if (ctx.cr6.eq) goto loc_82260084;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82260190
	if (ctx.cr6.gt) goto loc_82260190;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27088
	ctx.r12.s64 = ctx.r12.s64 + -27088;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,-540
	ctx.r12.s64 = ctx.r12.s64 + -540;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8225FDE4;
	case 1:
		goto loc_8225FE0C;
	case 2:
		goto loc_8225FE30;
	case 3:
		goto loc_8225FE48;
	case 4:
		goto loc_8225FE5C;
	case 5:
		goto loc_8225FE74;
	case 6:
		goto loc_8225FE8C;
	case 7:
		goto loc_8225FEA4;
	case 8:
		goto loc_8225FEBC;
	case 9:
		goto loc_8225FED4;
	case 10:
		goto loc_8225FEEC;
	case 11:
		goto loc_8225FF04;
	case 12:
		goto loc_8225FF1C;
	case 13:
		goto loc_8225FF34;
	case 14:
		goto loc_8225FF4C;
	case 15:
		goto loc_8225FF64;
	case 16:
		goto loc_8225FF7C;
	case 17:
		goto loc_8225FF94;
	case 18:
		goto loc_8225FFAC;
	case 19:
		goto loc_8225FFC4;
	case 20:
		goto loc_8225FFDC;
	case 21:
		goto loc_8225FFF4;
	case 22:
		goto loc_8226000C;
	case 23:
		goto loc_82260024;
	case 24:
		goto loc_8226003C;
	case 25:
		goto loc_82260190;
	case 26:
		goto loc_82260054;
	case 27:
		goto loc_8226006C;
	default:
		__builtin_unreachable();
	}
loc_8225FDE4:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82260198
	if (!ctx.cr6.lt) goto loc_82260198;
loc_8225FE04:
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FE0C:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82260198
	if (!ctx.cr6.gt) goto loc_82260198;
	// b 0x8225fe04
	goto loc_8225FE04;
loc_8225FE30:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FE48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,32632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32632, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FE5C:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FE74:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FE8C:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FEA4:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FEBC:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FED4:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,32632
	ctx.r9.s64 = ctx.r11.s64 + 32632;
	// sth r10,116(r9)
	PPC_STORE_U16(ctx.r9.u32 + 116, ctx.r10.u16);
	// b 0x82260198
	goto loc_82260198;
loc_8225FEEC:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,32632
	ctx.r9.s64 = ctx.r11.s64 + 32632;
	// sth r10,118(r9)
	PPC_STORE_U16(ctx.r9.u32 + 118, ctx.r10.u16);
	// b 0x82260198
	goto loc_82260198;
loc_8225FF04:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,32632
	ctx.r9.s64 = ctx.r11.s64 + 32632;
	// sth r10,120(r9)
	PPC_STORE_U16(ctx.r9.u32 + 120, ctx.r10.u16);
	// b 0x82260198
	goto loc_82260198;
loc_8225FF1C:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,32632
	ctx.r9.s64 = ctx.r11.s64 + 32632;
	// sth r10,122(r9)
	PPC_STORE_U16(ctx.r9.u32 + 122, ctx.r10.u16);
	// b 0x82260198
	goto loc_82260198;
loc_8225FF34:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FF4C:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FF64:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FF7C:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FF94:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FFAC:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FFC4:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FFDC:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8225FFF4:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8226000C:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_82260024:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8226003C:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_82260054:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8226006C:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_82260084:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_8226009C:
	// addi r11,r30,-4099
	ctx.r11.s64 = ctx.r30.s64 + -4099;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82260190
	if (ctx.cr6.gt) goto loc_82260190;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27096
	ctx.r12.s64 = ctx.r12.s64 + -27096;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,208
	ctx.r12.s64 = ctx.r12.s64 + 208;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822600D0;
	case 1:
		goto loc_822600E8;
	case 2:
		goto loc_82260100;
	case 3:
		goto loc_82260118;
	case 4:
		goto loc_82260130;
	case 5:
		goto loc_82260148;
	case 6:
		goto loc_82260160;
	case 7:
		goto loc_82260178;
	default:
		__builtin_unreachable();
	}
loc_822600D0:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_822600E8:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,32632
	ctx.r9.s64 = ctx.r11.s64 + 32632;
	// sth r10,56(r9)
	PPC_STORE_U16(ctx.r9.u32 + 56, ctx.r10.u16);
	// b 0x82260198
	goto loc_82260198;
loc_82260100:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,32632
	ctx.r9.s64 = ctx.r11.s64 + 32632;
	// sth r10,58(r9)
	PPC_STORE_U16(ctx.r9.u32 + 58, ctx.r10.u16);
	// b 0x82260198
	goto loc_82260198;
loc_82260118:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,32632
	ctx.r9.s64 = ctx.r11.s64 + 32632;
	// sth r10,60(r9)
	PPC_STORE_U16(ctx.r9.u32 + 60, ctx.r10.u16);
	// b 0x82260198
	goto loc_82260198;
loc_82260130:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_82260148:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_82260160:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_82260178:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// b 0x82260198
	goto loc_82260198;
loc_82260190:
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4105
	ctx.r31.u64 = ctx.r31.u64 | 4105;
loc_82260198:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82c09bdc
	ctx.lr = 0x822601A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822601AC"))) PPC_WEAK_FUNC(sub_822601AC);
PPC_FUNC_IMPL(__imp__sub_822601AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822601B0"))) PPC_WEAK_FUNC(sub_822601B0);
PPC_FUNC_IMPL(__imp__sub_822601B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822601B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,32764
	ctx.r28.s64 = ctx.r11.s64 + 32764;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c09bec
	ctx.lr = 0x822601D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r31,4096
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4096, ctx.xer);
	// bgt cr6,0x82260540
	if (ctx.cr6.gt) goto loc_82260540;
	// beq cr6,0x82260524
	if (ctx.cr6.eq) goto loc_82260524;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82260654
	if (ctx.cr6.gt) goto loc_82260654;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27048
	ctx.r12.s64 = ctx.r12.s64 + -27048;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,536
	ctx.r12.s64 = ctx.r12.s64 + 536;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82260218;
	case 1:
		goto loc_82260250;
	case 2:
		goto loc_8226026C;
	case 3:
		goto loc_82260288;
	case 4:
		goto loc_822602A0;
	case 5:
		goto loc_822602BC;
	case 6:
		goto loc_822602D8;
	case 7:
		goto loc_822602F4;
	case 8:
		goto loc_82260310;
	case 9:
		goto loc_8226032C;
	case 10:
		goto loc_82260348;
	case 11:
		goto loc_82260364;
	case 12:
		goto loc_82260380;
	case 13:
		goto loc_8226039C;
	case 14:
		goto loc_822603B8;
	case 15:
		goto loc_822603D4;
	case 16:
		goto loc_822603F0;
	case 17:
		goto loc_8226040C;
	case 18:
		goto loc_82260428;
	case 19:
		goto loc_82260444;
	case 20:
		goto loc_82260460;
	case 21:
		goto loc_8226047C;
	case 22:
		goto loc_82260498;
	case 23:
		goto loc_822604B4;
	case 24:
		goto loc_822604D0;
	case 25:
		goto loc_82260654;
	case 26:
		goto loc_822604EC;
	case 27:
		goto loc_82260508;
	default:
		__builtin_unreachable();
	}
loc_82260218:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_82260230:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82260244
	goto loc_82260244;
loc_8226023C:
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4097
	ctx.r31.u64 = ctx.r31.u64 | 4097;
loc_82260244:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8226065c
	goto loc_8226065C;
loc_82260250:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82260230
	goto loc_82260230;
loc_8226026C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x82260230
	goto loc_82260230;
loc_82260288:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r11,32632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32632);
	// b 0x82260230
	goto loc_82260230;
loc_822602A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x82260230
	goto loc_82260230;
loc_822602BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x82260230
	goto loc_82260230;
loc_822602D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x82260230
	goto loc_82260230;
loc_822602F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// b 0x82260230
	goto loc_82260230;
loc_82260310:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82260230
	goto loc_82260230;
loc_8226032C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lhz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 116);
	// b 0x82260230
	goto loc_82260230;
loc_82260348:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lhz r11,118(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 118);
	// b 0x82260230
	goto loc_82260230;
loc_82260364:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// b 0x82260230
	goto loc_82260230;
loc_82260380:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lhz r11,122(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// b 0x82260230
	goto loc_82260230;
loc_8226039C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82260230
	goto loc_82260230;
loc_822603B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x82260230
	goto loc_82260230;
loc_822603D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82260230
	goto loc_82260230;
loc_822603F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82260230
	goto loc_82260230;
loc_8226040C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82260230
	goto loc_82260230;
loc_82260428:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82260230
	goto loc_82260230;
loc_82260444:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82260230
	goto loc_82260230;
loc_82260460:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x82260230
	goto loc_82260230;
loc_8226047C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82260230
	goto loc_82260230;
loc_82260498:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82260230
	goto loc_82260230;
loc_822604B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82260230
	goto loc_82260230;
loc_822604D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82260230
	goto loc_82260230;
loc_822604EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x82260230
	goto loc_82260230;
loc_82260508:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82260230
	goto loc_82260230;
loc_82260524:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x82260230
	goto loc_82260230;
loc_82260540:
	// addi r11,r31,-4099
	ctx.r11.s64 = ctx.r31.s64 + -4099;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82260654
	if (ctx.cr6.gt) goto loc_82260654;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27056
	ctx.r12.s64 = ctx.r12.s64 + -27056;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// addi r12,r12,1396
	ctx.r12.s64 = ctx.r12.s64 + 1396;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82260574;
	case 1:
		goto loc_82260590;
	case 2:
		goto loc_822605AC;
	case 3:
		goto loc_822605C8;
	case 4:
		goto loc_822605E4;
	case 5:
		goto loc_82260600;
	case 6:
		goto loc_8226061C;
	case 7:
		goto loc_82260638;
	default:
		__builtin_unreachable();
	}
loc_82260574:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82260230
	goto loc_82260230;
loc_82260590:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// b 0x82260230
	goto loc_82260230;
loc_822605AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lhz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// b 0x82260230
	goto loc_82260230;
loc_822605C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lhz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// b 0x82260230
	goto loc_82260230;
loc_822605E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x82260230
	goto loc_82260230;
loc_82260600:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x82260230
	goto loc_82260230;
loc_8226061C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x82260230
	goto loc_82260230;
loc_82260638:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8226023c
	if (ctx.cr6.lt) goto loc_8226023C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32632
	ctx.r11.s64 = ctx.r11.s64 + 32632;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x82260230
	goto loc_82260230;
loc_82260654:
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4105
	ctx.r31.u64 = ctx.r31.u64 | 4105;
loc_8226065C:
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82c09bdc
	ctx.lr = 0x82260664;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260670"))) PPC_WEAK_FUNC(sub_82260670);
PPC_FUNC_IMPL(__imp__sub_82260670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82260678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r3,r31,57
	ctx.r3.s64 = ctx.r31.s64 + 57;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stb r10,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r10.u8);
	// bl 0x82218a80
	ctx.lr = 0x822606E4;
	sub_82218A80(ctx, base);
	// lwz r29,220(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r31,71
	ctx.r3.s64 = ctx.r31.s64 + 71;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x822606F8;
	sub_82219130(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82260724
	if (ctx.cr6.eq) goto loc_82260724;
loc_82260708:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82260708
	if (!ctx.cr0.eq) goto loc_82260708;
loc_82260724:
	// lis r10,4626
	ctx.r10.s64 = 303169536;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// ori r11,r10,4626
	ctx.r11.u64 = ctx.r10.u64 | 4626;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260744"))) PPC_WEAK_FUNC(sub_82260744);
PPC_FUNC_IMPL(__imp__sub_82260744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260748"))) PPC_WEAK_FUNC(sub_82260748);
PPC_FUNC_IMPL(__imp__sub_82260748) {
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
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226079c
	if (ctx.cr6.eq) goto loc_8226079C;
loc_82260768:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82260768
	if (!ctx.cr0.eq) goto loc_82260768;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82260794
	if (!ctx.cr6.eq) goto loc_82260794;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82247a78
	ctx.lr = 0x82260794;
	sub_82247A78(ctx, base);
loc_82260794:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_8226079C:
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

__attribute__((alias("__imp__sub_822607B0"))) PPC_WEAK_FUNC(sub_822607B0);
PPC_FUNC_IMPL(__imp__sub_822607B0) {
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
	// bl 0x82260748
	ctx.lr = 0x822607C8;
	sub_82260748(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,261
	ctx.r3.s64 = 261;
	// bl 0x82247a78
	ctx.lr = 0x822607D4;
	sub_82247A78(ctx, base);
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

__attribute__((alias("__imp__sub_822607E8"))) PPC_WEAK_FUNC(sub_822607E8);
PPC_FUNC_IMPL(__imp__sub_822607E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x822607F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r3,261
	ctx.r3.s64 = 261;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82247a60
	ctx.lr = 0x82260828;
	sub_82247A60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82260894
	if (ctx.cr0.eq) goto loc_82260894;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260670
	ctx.lr = 0x82260868;
	sub_82260670(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82218a80
	ctx.lr = 0x82260878;
	sub_82218A80(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82218a80
	ctx.lr = 0x82260894;
	sub_82218A80(ctx, base);
loc_82260894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822608A0"))) PPC_WEAK_FUNC(sub_822608A0);
PPC_FUNC_IMPL(__imp__sub_822608A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// beq 0x822608b4
	if (ctx.cr0.eq) goto loc_822608B4;
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_822608B4:
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822608CC"))) PPC_WEAK_FUNC(sub_822608CC);
PPC_FUNC_IMPL(__imp__sub_822608CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822608D0"))) PPC_WEAK_FUNC(sub_822608D0);
PPC_FUNC_IMPL(__imp__sub_822608D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,17(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822608D8"))) PPC_WEAK_FUNC(sub_822608D8);
PPC_FUNC_IMPL(__imp__sub_822608D8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822608E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,25(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260934
	if (ctx.cr0.eq) goto loc_82260934;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82260958
	if (ctx.cr6.lt) goto loc_82260958;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq 0x82260958
	if (ctx.cr0.eq) goto loc_82260958;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x82260958
	if (ctx.cr6.gt) goto loc_82260958;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82260938
	goto loc_82260938;
loc_82260934:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82260938:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x822608e0
	if (ctx.cr6.lt) goto loc_822608E0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82260958:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260960"))) PPC_WEAK_FUNC(sub_82260960);
PPC_FUNC_IMPL(__imp__sub_82260960) {
	PPC_FUNC_PROLOGUE();
	// stw r5,21(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21, ctx.r5.u32);
	// stw r4,17(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226096C"))) PPC_WEAK_FUNC(sub_8226096C);
PPC_FUNC_IMPL(__imp__sub_8226096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260970"))) PPC_WEAK_FUNC(sub_82260970);
PPC_FUNC_IMPL(__imp__sub_82260970) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82260978:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822609cc
	if (ctx.cr0.eq) goto loc_822609CC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x822609f0
	if (ctx.cr6.lt) goto loc_822609F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq 0x822609f0
	if (ctx.cr0.eq) goto loc_822609F0;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x822609f0
	if (ctx.cr6.gt) goto loc_822609F0;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x822609d0
	goto loc_822609D0;
loc_822609CC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822609D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82260978
	if (ctx.cr6.lt) goto loc_82260978;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822609F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822609F8"))) PPC_WEAK_FUNC(sub_822609F8);
PPC_FUNC_IMPL(__imp__sub_822609F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82260A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r11,r5,252
	ctx.r11.u64 = ctx.r5.u64 | 252;
	// rlwinm r5,r7,24,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r5,r11,5,24,26
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// andi. r11,r5,227
	ctx.r11.u64 = ctx.r5.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// clrlwi r9,r7,22
	ctx.r9.u64 = ctx.r7.u32 & 0x3FF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82260a38
	if (ctx.cr6.eq) goto loc_82260A38;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82260A38:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82260a54
	if (ctx.cr6.eq) goto loc_82260A54;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82260A54:
	// lhz r11,38(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260a6c
	if (ctx.cr0.eq) goto loc_82260A6C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82260A6C:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// rlwinm r5,r11,24,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// rlwinm. r9,r6,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r5,r8,2,24,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
	// beq 0x82260ab0
	if (ctx.cr0.eq) goto loc_82260AB0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82266cc0
	ctx.lr = 0x82260AAC;
	sub_82266CC0(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82260AB0:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260ad0
	if (ctx.cr0.eq) goto loc_82260AD0;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265ac0
	ctx.lr = 0x82260ACC;
	sub_82265AC0(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82260AD0:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260AEC"))) PPC_WEAK_FUNC(sub_82260AEC);
PPC_FUNC_IMPL(__imp__sub_82260AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260AF0"))) PPC_WEAK_FUNC(sub_82260AF0);
PPC_FUNC_IMPL(__imp__sub_82260AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82260AF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r24,6
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 6, ctx.xer);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bge cr6,0x82260b1c
	if (!ctx.cr6.lt) goto loc_82260B1C;
loc_82260B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260bec
	goto loc_82260BEC;
loc_82260B1C:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r30,r28,6
	ctx.r30.s64 = ctx.r28.s64 + 6;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// add r25,r28,r24
	ctx.r25.u64 = ctx.r28.u64 + ctx.r24.u64;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260b74
	if (ctx.cr0.eq) goto loc_82260B74;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266920
	ctx.lr = 0x82260B60;
	sub_82266920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82260b14
	if (ctx.cr0.eq) goto loc_82260B14;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82260B74:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260ba8
	if (ctx.cr0.eq) goto loc_82260BA8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265900
	ctx.lr = 0x82260B94;
	sub_82265900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82260b14
	if (ctx.cr0.eq) goto loc_82260B14;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82260BA8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82260b14
	if (ctx.cr6.lt) goto loc_82260B14;
	// subf. r9,r11,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq 0x82260bdc
	if (ctx.cr0.eq) goto loc_82260BDC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82260be8
	goto loc_82260BE8;
loc_82260BDC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82260b14
	if (ctx.cr6.gt) goto loc_82260B14;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_82260BE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82260BEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260BF4"))) PPC_WEAK_FUNC(sub_82260BF4);
PPC_FUNC_IMPL(__imp__sub_82260BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260BF8"))) PPC_WEAK_FUNC(sub_82260BF8);
PPC_FUNC_IMPL(__imp__sub_82260BF8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r9,r10,24,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwimi r9,r11,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82260c68
	if (ctx.cr6.eq) goto loc_82260C68;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265ac0
	ctx.lr = 0x82260C64;
	sub_82265AC0(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82260C68:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82260C8C"))) PPC_WEAK_FUNC(sub_82260C8C);
PPC_FUNC_IMPL(__imp__sub_82260C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260C90"))) PPC_WEAK_FUNC(sub_82260C90);
PPC_FUNC_IMPL(__imp__sub_82260C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82260C98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bge cr6,0x82260cb8
	if (!ctx.cr6.lt) goto loc_82260CB8;
loc_82260CB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260d24
	goto loc_82260D24;
loc_82260CB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260d00
	if (ctx.cr0.eq) goto loc_82260D00;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265900
	ctx.lr = 0x82260CEC;
	sub_82265900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82260cb0
	if (ctx.cr0.eq) goto loc_82260CB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82260D00:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82260cb0
	if (!ctx.cr6.eq) goto loc_82260CB0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82260D24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260D2C"))) PPC_WEAK_FUNC(sub_82260D2C);
PPC_FUNC_IMPL(__imp__sub_82260D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260D30"))) PPC_WEAK_FUNC(sub_82260D30);
PPC_FUNC_IMPL(__imp__sub_82260D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82260D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// rlwinm r11,r29,24,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0x3;
	// clrlwi r10,r29,22
	ctx.r10.u64 = ctx.r29.u32 & 0x3FF;
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// beq cr6,0x82260d70
	if (ctx.cr6.eq) goto loc_82260D70;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r9,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
loc_82260D70:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r30,r31,11
	ctx.r30.s64 = ctx.r31.s64 + 11;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// rlwinm r9,r11,24,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r7,7(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7, ctx.r7.u32);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82260dc8
	if (ctx.cr6.eq) goto loc_82260DC8;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x82265ac0
	ctx.lr = 0x82260DC4;
	sub_82265AC0(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82260DC8:
	// lhz r11,38(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260df8
	if (ctx.cr0.eq) goto loc_82260DF8;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82266cc0
	ctx.lr = 0x82260DF4;
	sub_82266CC0(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82260DF8:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260E0C"))) PPC_WEAK_FUNC(sub_82260E0C);
PPC_FUNC_IMPL(__imp__sub_82260E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260E10"))) PPC_WEAK_FUNC(sub_82260E10);
PPC_FUNC_IMPL(__imp__sub_82260E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82260E18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 11, ctx.xer);
	// bge cr6,0x82260e38
	if (!ctx.cr6.lt) goto loc_82260E38;
loc_82260E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260ee8
	goto loc_82260EE8;
loc_82260E38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r28,11
	ctx.r30.s64 = ctx.r28.s64 + 11;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// add r26,r28,r25
	ctx.r26.u64 = ctx.r28.u64 + ctx.r25.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r11,3(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260e90
	if (ctx.cr0.eq) goto loc_82260E90;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266920
	ctx.lr = 0x82260E7C;
	sub_82266920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82260e30
	if (ctx.cr0.eq) goto loc_82260E30;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82260E90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260ec4
	if (ctx.cr0.eq) goto loc_82260EC4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265900
	ctx.lr = 0x82260EB0;
	sub_82265900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82260e30
	if (ctx.cr0.eq) goto loc_82260E30;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82260EC4:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82260e30
	if (!ctx.cr6.eq) goto loc_82260E30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82260EE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260EF0"))) PPC_WEAK_FUNC(sub_82260EF0);
PPC_FUNC_IMPL(__imp__sub_82260EF0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82260EF8;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r3,26
	ctx.r3.s64 = 26;
	// sth r6,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r6.u16);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// sth r7,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r7.u16);
	// addi r7,r11,25
	ctx.r7.s64 = ctx.r11.s64 + 25;
	// stw r8,21(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21, ctx.r8.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r31.u32);
	// stb r31,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r31.u8);
	// sth r5,3(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3, ctx.r5.u16);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stw r4,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r4.u32);
	// stw r29,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r29.u32);
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
loc_82260F40:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82260f6c
	if (ctx.cr0.eq) goto loc_82260F6C;
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// slw r4,r30,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stb r5,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82260F6C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x82260f40
	if (ctx.cr6.lt) goto loc_82260F40;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260F8C"))) PPC_WEAK_FUNC(sub_82260F8C);
PPC_FUNC_IMPL(__imp__sub_82260F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260F90"))) PPC_WEAK_FUNC(sub_82260F90);
PPC_FUNC_IMPL(__imp__sub_82260F90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bge cr6,0x82260fa8
	if (!ctx.cr6.lt) goto loc_82260FA8;
loc_82260FA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82260FA8:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82260fa0
	if (!ctx.cr6.eq) goto loc_82260FA0;
	// addi r10,r4,26
	ctx.r10.s64 = ctx.r4.s64 + 26;
	// addi r9,r5,-26
	ctx.r9.s64 = ctx.r5.s64 + -26;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260FD0"))) PPC_WEAK_FUNC(sub_82260FD0);
PPC_FUNC_IMPL(__imp__sub_82260FD0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r3,34
	ctx.r3.s64 = 34;
	// sth r7,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r7.u16);
	// li r7,2
	ctx.r7.s64 = 2;
	// sth r8,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r8.u16);
	// addi r8,r11,33
	ctx.r8.s64 = ctx.r11.s64 + 33;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r9,29(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29, ctx.r9.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// sth r6,3(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3, ctx.r6.u16);
	// stw r4,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r4.u32);
	// stw r5,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r5.u32);
	// stw r31,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r31.u32);
	// stw r31,21(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21, ctx.r31.u32);
	// stw r30,25(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25, ctx.r30.u32);
	// stb r31,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r31.u8);
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82261028:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82261058
	if (ctx.cr0.eq) goto loc_82261058;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82261058:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82261028
	if (ctx.cr6.lt) goto loc_82261028;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261084"))) PPC_WEAK_FUNC(sub_82261084);
PPC_FUNC_IMPL(__imp__sub_82261084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261088"))) PPC_WEAK_FUNC(sub_82261088);
PPC_FUNC_IMPL(__imp__sub_82261088) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,34
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 34, ctx.xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bge cr6,0x822610a0
	if (!ctx.cr6.lt) goto loc_822610A0;
loc_82261098:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822610A0:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82261098
	if (!ctx.cr6.eq) goto loc_82261098;
	// addi r10,r4,34
	ctx.r10.s64 = ctx.r4.s64 + 34;
	// addi r9,r5,-34
	ctx.r9.s64 = ctx.r5.s64 + -34;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822610C8"))) PPC_WEAK_FUNC(sub_822610C8);
PPC_FUNC_IMPL(__imp__sub_822610C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r4,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// stw r5,7(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7, ctx.r5.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822610EC"))) PPC_WEAK_FUNC(sub_822610EC);
PPC_FUNC_IMPL(__imp__sub_822610EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822610F0"))) PPC_WEAK_FUNC(sub_822610F0);
PPC_FUNC_IMPL(__imp__sub_822610F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// beq cr6,0x82261104
	if (ctx.cr6.eq) goto loc_82261104;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82261104:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226111C"))) PPC_WEAK_FUNC(sub_8226111C);
PPC_FUNC_IMPL(__imp__sub_8226111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261120"))) PPC_WEAK_FUNC(sub_82261120);
PPC_FUNC_IMPL(__imp__sub_82261120) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r4,3(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3, ctx.r4.u32);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261144"))) PPC_WEAK_FUNC(sub_82261144);
PPC_FUNC_IMPL(__imp__sub_82261144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261148"))) PPC_WEAK_FUNC(sub_82261148);
PPC_FUNC_IMPL(__imp__sub_82261148) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bge cr6,0x82261160
	if (!ctx.cr6.lt) goto loc_82261160;
loc_82261158:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82261160:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82261158
	if (!ctx.cr6.eq) goto loc_82261158;
	// addi r11,r5,-7
	ctx.r11.s64 = ctx.r5.s64 + -7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261180"))) PPC_WEAK_FUNC(sub_82261180);
PPC_FUNC_IMPL(__imp__sub_82261180) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r4,3(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3, ctx.r4.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226119C"))) PPC_WEAK_FUNC(sub_8226119C);
PPC_FUNC_IMPL(__imp__sub_8226119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822611A0"))) PPC_WEAK_FUNC(sub_822611A0);
PPC_FUNC_IMPL(__imp__sub_822611A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822611A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r5,r11,24,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r5,r10,2,24,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF03);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r4,r30,6
	ctx.r4.s64 = ctx.r30.s64 + 6;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r5,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r5.u8);
	// beq 0x822611ec
	if (ctx.cr0.eq) goto loc_822611EC;
loc_822611DC:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822611dc
	if (ctx.cr0.eq) goto loc_822611DC;
loc_822611EC:
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// subf r31,r30,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r30.s64;
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82261214
	if (!ctx.cr6.eq) goto loc_82261214;
	// andi. r11,r9,247
	ctx.r11.u64 = ctx.r9.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// b 0x82261258
	goto loc_82261258;
loc_82261214:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r9,7
	ctx.r9.s64 = 7;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82261258
	if (ctx.cr6.eq) goto loc_82261258;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// subf r5,r31,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r31.s64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// bl 0x82265ac0
	ctx.lr = 0x82261254;
	sub_82265AC0(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_82261258:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82261270"))) PPC_WEAK_FUNC(sub_82261270);
PPC_FUNC_IMPL(__imp__sub_82261270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82261278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x8226129c
	if (!ctx.cr6.eq) goto loc_8226129C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82253a00
	ctx.lr = 0x82261298;
	sub_82253A00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8226129C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x822612B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x822612DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822612E4"))) PPC_WEAK_FUNC(sub_822612E4);
PPC_FUNC_IMPL(__imp__sub_822612E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822612E8"))) PPC_WEAK_FUNC(sub_822612E8);
PPC_FUNC_IMPL(__imp__sub_822612E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822612F0"))) PPC_WEAK_FUNC(sub_822612F0);
PPC_FUNC_IMPL(__imp__sub_822612F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,850
	ctx.r4.s64 = ctx.r31.s64 + 850;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82247a60
	ctx.lr = 0x82261318;
	sub_82247A60(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226132c
	if (!ctx.cr0.eq) goto loc_8226132C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82261370
	goto loc_82261370;
loc_8226132C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-26992
	ctx.r8.s64 = ctx.r10.s64 + -26992;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r11,840
	ctx.r9.s64 = ctx.r11.s64 + 840;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82261370:
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

__attribute__((alias("__imp__sub_82261388"))) PPC_WEAK_FUNC(sub_82261388);
PPC_FUNC_IMPL(__imp__sub_82261388) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r7,r9,10,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x8000;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r8,834(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 834);
	// xori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 ^ 32768;
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// sth r4,828(r11)
	PPC_STORE_U16(ctx.r11.u32 + 828, ctx.r4.u16);
	// clrlwi r5,r8,17
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rldicr r5,r6,0,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// sth r8,830(r11)
	PPC_STORE_U16(ctx.r11.u32 + 830, ctx.r8.u16);
	// clrldi r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFF;
	// sth r8,832(r11)
	PPC_STORE_U16(ctx.r11.u32 + 832, ctx.r8.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r7,834(r11)
	PPC_STORE_U16(ctx.r11.u32 + 834, ctx.r7.u16);
	// or r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 | ctx.r4.u64;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// bge cr6,0x822613f0
	if (!ctx.cr6.lt) goto loc_822613F0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822613e8
	if (!ctx.cr6.lt) goto loc_822613E8;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
loc_822613E8:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82261400
	goto loc_82261400;
loc_822613F0:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82261400
	if (!ctx.cr6.gt) goto loc_82261400;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82261400:
	// rldicr r10,r8,5,58
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r10,816(r11)
	PPC_STORE_U64(ctx.r11.u32 + 816, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261410"))) PPC_WEAK_FUNC(sub_82261410);
PPC_FUNC_IMPL(__imp__sub_82261410) {
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
	// lbz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r10,128
	ctx.r11.u64 = ctx.r10.u64 | 128;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,18(r4)
	PPC_STORE_U8(ctx.r4.u32 + 18, ctx.r11.u8);
	// beq 0x82261454
	if (ctx.cr0.eq) goto loc_82261454;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225b310
	ctx.lr = 0x82261454;
	sub_8225B310(ctx, base);
loc_82261454:
	// lhz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 832);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,832(r31)
	PPC_STORE_U16(ctx.r31.u32 + 832, ctx.r11.u16);
	// bne 0x82261478
	if (!ctx.cr0.eq) goto loc_82261478;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225d9c8
	ctx.lr = 0x82261478;
	sub_8225D9C8(ctx, base);
loc_82261478:
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

__attribute__((alias("__imp__sub_82261490"))) PPC_WEAK_FUNC(sub_82261490);
PPC_FUNC_IMPL(__imp__sub_82261490) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-27252
	ctx.r11.s64 = ctx.r11.s64 + -27252;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x822614bc
	if (ctx.cr0.eq) goto loc_822614BC;
	// bl 0x821200c8
	ctx.lr = 0x822614BC;
	sub_821200C8(ctx, base);
loc_822614BC:
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

__attribute__((alias("__imp__sub_822614D4"))) PPC_WEAK_FUNC(sub_822614D4);
PPC_FUNC_IMPL(__imp__sub_822614D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822614D8"))) PPC_WEAK_FUNC(sub_822614D8);
PPC_FUNC_IMPL(__imp__sub_822614D8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822614E4"))) PPC_WEAK_FUNC(sub_822614E4);
PPC_FUNC_IMPL(__imp__sub_822614E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822614E8"))) PPC_WEAK_FUNC(sub_822614E8);
PPC_FUNC_IMPL(__imp__sub_822614E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822614F4"))) PPC_WEAK_FUNC(sub_822614F4);
PPC_FUNC_IMPL(__imp__sub_822614F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822614F8"))) PPC_WEAK_FUNC(sub_822614F8);
PPC_FUNC_IMPL(__imp__sub_822614F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,76(r10)
	PPC_STORE_U16(ctx.r10.u32 + 76, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r4,15,0,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0xFFFF8000) | (ctx.r9.u64 & 0xFFFFFFFF00007FFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r5,14,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r6,13,18,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r7,12,19,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 12) & 0x1000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFEFFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r3,328(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,328(r11)
	PPC_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822615A4"))) PPC_WEAK_FUNC(sub_822615A4);
PPC_FUNC_IMPL(__imp__sub_822615A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822615A8"))) PPC_WEAK_FUNC(sub_822615A8);
PPC_FUNC_IMPL(__imp__sub_822615A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822615B0"))) PPC_WEAK_FUNC(sub_822615B0);
PPC_FUNC_IMPL(__imp__sub_822615B0) {
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
	// li r4,1684
	ctx.r4.s64 = 1684;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82247a60
	ctx.lr = 0x822615D0;
	sub_82247A60(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822615e4
	if (!ctx.cr0.eq) goto loc_822615E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82261644
	goto loc_82261644;
loc_822615E4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-26984
	ctx.r10.s64 = ctx.r10.s64 + -26984;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r10,340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82261644:
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

__attribute__((alias("__imp__sub_82261658"))) PPC_WEAK_FUNC(sub_82261658);
PPC_FUNC_IMPL(__imp__sub_82261658) {
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
	// li r4,1684
	ctx.r4.s64 = 1684;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82247a60
	ctx.lr = 0x82261678;
	sub_82247A60(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822616ec
	if (ctx.cr0.eq) goto loc_822616EC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-26984
	ctx.r10.s64 = ctx.r10.s64 + -26984;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r10,340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// sth r10,328(r11)
	PPC_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// sth r10,330(r11)
	PPC_STORE_U16(ctx.r11.u32 + 330, ctx.r10.u16);
	// sth r10,336(r11)
	PPC_STORE_U16(ctx.r11.u32 + 336, ctx.r10.u16);
	// b 0x822616f4
	goto loc_822616F4;
loc_822616EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_822616F4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8226170C"))) PPC_WEAK_FUNC(sub_8226170C);
PPC_FUNC_IMPL(__imp__sub_8226170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

