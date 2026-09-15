#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C07648"))) PPC_WEAK_FUNC(sub_82C07648);
PPC_FUNC_IMPL(__imp__sub_82C07648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82C07650;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x82C07664;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c0768c
	if (!ctx.cr6.eq) goto loc_82C0768C;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82C0768C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82C076A0;
	sub_82BFD450(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// lwz r10,12456(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82c076f8
	if (ctx.cr6.eq) goto loc_82C076F8;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82C076F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82c07720
	if (ctx.cr6.eq) goto loc_82C07720;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82C07718;
	sub_82120040(ctx, base);
	// lwz r10,12456(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82C07720:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c079d4
	if (!ctx.cr6.gt) goto loc_82C079D4;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82C07734:
	// lbz r9,1(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,2(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbz r10,3(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// stb r8,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x82c07780
	if (ctx.cr6.eq) goto loc_82C07780;
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
loc_82C07780:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r10,29504
	ctx.r5.s64 = ctx.r10.s64 + 29504;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82C077A0;
	sub_82BCE5D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12456(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r25.u32);
	// lbz r7,1(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r8,2(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// lbz r9,3(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// stb r7,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82c077fc
	if (ctx.cr6.eq) goto loc_82C077FC;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
loc_82C077FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c079c0
	if (ctx.cr6.eq) goto loc_82C079C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82120040
	ctx.lr = 0x82C0782C;
	sub_82120040(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,12456(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// ble cr6,0x82c079c0
	if (!ctx.cr6.gt) goto loc_82C079C0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82C07858:
	// lbz r8,1(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// lhz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// beq cr6,0x82c07884
	if (ctx.cr6.eq) goto loc_82C07884;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82C07884:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// sthx r10,r8,r29
	PPC_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r10.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r4.u8);
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// stb r5,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82c078fc
	if (ctx.cr6.eq) goto loc_82C078FC;
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
loc_82C078FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,-12184
	ctx.r5.s64 = ctx.r10.s64 + -12184;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82bce5d8
	ctx.lr = 0x82C07928;
	sub_82BCE5D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r6,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r6.u8);
	// lwz r10,12456(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r30,r9
	ctx.r5.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lbz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r4,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r4.u8);
	// lbz r9,1(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// lbz r8,2(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82c0798c
	if (ctx.cr6.eq) goto loc_82C0798C;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82C0798C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// sth r9,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r9.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82c07858
	if (ctx.cr6.lt) goto loc_82C07858;
loc_82C079C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c07734
	if (ctx.cr6.lt) goto loc_82C07734;
loc_82C079D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C079E0"))) PPC_WEAK_FUNC(sub_82C079E0);
PPC_FUNC_IMPL(__imp__sub_82C079E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C079E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82120040
	ctx.lr = 0x82C079FC;
	sub_82120040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c07a28
	if (!ctx.cr6.eq) goto loc_82C07A28;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82C07A28:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82C07A3C;
	sub_82BFD450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82c07a90
	if (ctx.cr6.eq) goto loc_82C07A90;
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
loc_82C07A90:
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,22760
	ctx.r5.s64 = ctx.r11.s64 + 22760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82C07AAC;
	sub_82BCE5D8(ctx, base);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82c07b0c
	if (ctx.cr6.eq) goto loc_82C07B0C;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C07B0C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07B1C"))) PPC_WEAK_FUNC(sub_82C07B1C);
PPC_FUNC_IMPL(__imp__sub_82C07B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07B20"))) PPC_WEAK_FUNC(sub_82C07B20);
PPC_FUNC_IMPL(__imp__sub_82C07B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,12480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c07b48
	if (!ctx.cr6.eq) goto loc_82C07B48;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82C07B48:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82C07B5C;
	sub_82BFD450(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bne cr6,0x82c07bac
	if (!ctx.cr6.eq) goto loc_82C07BAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r11,-18516
	ctx.r5.s64 = ctx.r11.s64 + -18516;
	// addi r4,r10,-18508
	ctx.r4.s64 = ctx.r10.s64 + -18508;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82219e28
	ctx.lr = 0x82C07B88;
	sub_82219E28(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82C07B98;
	sub_82BCAC98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C07BAC:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,-16000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16000, ctx.r11.u32);
	// bl 0x82bb1638
	ctx.lr = 0x82C07BC0;
	sub_82BB1638(ctx, base);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwz r5,-17556(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17556);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C07BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07C00"))) PPC_WEAK_FUNC(sub_82C07C00);
PPC_FUNC_IMPL(__imp__sub_82C07C00) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r11,14468
	ctx.r30.s64 = ctx.r11.s64 + 14468;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218a80
	ctx.lr = 0x82C07C30;
	sub_82218A80(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,210
	ctx.r10.s64 = 210;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,13212(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13212);
	// bl 0x82b76610
	ctx.lr = 0x82C07C58;
	sub_82B76610(ctx, base);
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

__attribute__((alias("__imp__sub_82C07C70"))) PPC_WEAK_FUNC(sub_82C07C70);
PPC_FUNC_IMPL(__imp__sub_82C07C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07ca4
	if (ctx.cr6.eq) goto loc_82C07CA4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x827853c8
	sub_827853C8(ctx, base);
	return;
loc_82C07CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CAC"))) PPC_WEAK_FUNC(sub_82C07CAC);
PPC_FUNC_IMPL(__imp__sub_82C07CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07CB0"))) PPC_WEAK_FUNC(sub_82C07CB0);
PPC_FUNC_IMPL(__imp__sub_82C07CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07ce4
	if (ctx.cr6.eq) goto loc_82C07CE4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x827854d0
	sub_827854D0(ctx, base);
	return;
loc_82C07CE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07CEC"))) PPC_WEAK_FUNC(sub_82C07CEC);
PPC_FUNC_IMPL(__imp__sub_82C07CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07CF0"))) PPC_WEAK_FUNC(sub_82C07CF0);
PPC_FUNC_IMPL(__imp__sub_82C07CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07d14
	if (ctx.cr6.eq) goto loc_82C07D14;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x827855d8
	sub_827855D8(ctx, base);
	return;
loc_82C07D14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D1C"))) PPC_WEAK_FUNC(sub_82C07D1C);
PPC_FUNC_IMPL(__imp__sub_82C07D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07D20"))) PPC_WEAK_FUNC(sub_82C07D20);
PPC_FUNC_IMPL(__imp__sub_82C07D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07d44
	if (ctx.cr6.eq) goto loc_82C07D44;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x827856a8
	sub_827856A8(ctx, base);
	return;
loc_82C07D44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D4C"))) PPC_WEAK_FUNC(sub_82C07D4C);
PPC_FUNC_IMPL(__imp__sub_82C07D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07D50"))) PPC_WEAK_FUNC(sub_82C07D50);
PPC_FUNC_IMPL(__imp__sub_82C07D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,13984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c07d78
	if (ctx.cr6.eq) goto loc_82C07D78;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,13312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x82785850
	sub_82785850(ctx, base);
	return;
loc_82C07D78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07D80"))) PPC_WEAK_FUNC(sub_82C07D80);
PPC_FUNC_IMPL(__imp__sub_82C07D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07da0
	if (ctx.cr6.eq) goto loc_82C07DA0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x82785778
	sub_82785778(ctx, base);
	return;
loc_82C07DA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07DA8"))) PPC_WEAK_FUNC(sub_82C07DA8);
PPC_FUNC_IMPL(__imp__sub_82C07DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07dc8
	if (ctx.cr6.eq) goto loc_82C07DC8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x82785938
	sub_82785938(ctx, base);
	return;
loc_82C07DC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07DD0"))) PPC_WEAK_FUNC(sub_82C07DD0);
PPC_FUNC_IMPL(__imp__sub_82C07DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07df0
	if (ctx.cr6.eq) goto loc_82C07DF0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r4,448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x82785a10
	sub_82785A10(ctx, base);
	return;
loc_82C07DF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07DF8"))) PPC_WEAK_FUNC(sub_82C07DF8);
PPC_FUNC_IMPL(__imp__sub_82C07DF8) {
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
	// lwz r3,13600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13600);
	// bl 0x827c0328
	ctx.lr = 0x82C07E18;
	sub_827C0328(ctx, base);
	// lwz r31,13600(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13600);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c07e54
	if (ctx.cr6.eq) goto loc_82C07E54;
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// bl 0x82132890
	ctx.lr = 0x82C07E2C;
	sub_82132890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821367a8
	ctx.lr = 0x82C07E34;
	sub_821367A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07e44
	if (ctx.cr6.eq) goto loc_82C07E44;
	// bl 0x82120a70
	ctx.lr = 0x82C07E44;
	sub_82120A70(ctx, base);
loc_82C07E44:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82120a70
	ctx.lr = 0x82C07E54;
	sub_82120A70(ctx, base);
loc_82C07E54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13600, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C07E74"))) PPC_WEAK_FUNC(sub_82C07E74);
PPC_FUNC_IMPL(__imp__sub_82C07E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07E78"))) PPC_WEAK_FUNC(sub_82C07E78);
PPC_FUNC_IMPL(__imp__sub_82C07E78) {
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
	// bl 0x8212e508
	ctx.lr = 0x82C07E8C;
	sub_8212E508(ctx, base);
	// bl 0x827e4ad8
	ctx.lr = 0x82C07E90;
	sub_827E4AD8(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13600);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// bl 0x8221d398
	ctx.lr = 0x82C07EB4;
	sub_8221D398(ctx, base);
	// lwz r31,13600(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13600);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c0268
	ctx.lr = 0x82C07EC0;
	sub_827C0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827becc0
	ctx.lr = 0x82C07EC8;
	sub_827BECC0(ctx, base);
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

__attribute__((alias("__imp__sub_82C07EDC"))) PPC_WEAK_FUNC(sub_82C07EDC);
PPC_FUNC_IMPL(__imp__sub_82C07EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07EE0"))) PPC_WEAK_FUNC(sub_82C07EE0);
PPC_FUNC_IMPL(__imp__sub_82C07EE0) {
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
	// lwz r3,13408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13408);
	// bl 0x827f1538
	ctx.lr = 0x82C07F00;
	sub_827F1538(ctx, base);
	// lwz r31,13408(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c07f24
	if (ctx.cr6.eq) goto loc_82C07F24;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8212ff18
	ctx.lr = 0x82C07F14;
	sub_8212FF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fcf8
	ctx.lr = 0x82C07F1C;
	sub_8212FCF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C07F24;
	sub_82120A70(ctx, base);
loc_82C07F24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13408, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C07F44"))) PPC_WEAK_FUNC(sub_82C07F44);
PPC_FUNC_IMPL(__imp__sub_82C07F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07F48"))) PPC_WEAK_FUNC(sub_82C07F48);
PPC_FUNC_IMPL(__imp__sub_82C07F48) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x82C07F60;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07f84
	if (ctx.cr6.eq) goto loc_82C07F84;
	// bl 0x827f1e78
	ctx.lr = 0x82C07F6C;
	sub_827F1E78(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,13408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C07F84:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13408, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C07FA0"))) PPC_WEAK_FUNC(sub_82C07FA0);
PPC_FUNC_IMPL(__imp__sub_82C07FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82C07FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07ff4
	if (ctx.cr6.eq) goto loc_82C07FF4;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r7,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82120040
	ctx.lr = 0x82C07FEC;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x82c08150
	goto loc_82C08150;
loc_82C07FF4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c08018
	if (ctx.cr6.eq) goto loc_82C08018;
	// sth r11,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r11.u16);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82C08018:
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82c08048
	if (ctx.cr6.eq) goto loc_82C08048;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwimi r11,r10,1,29,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFFFFFF0007) | (ctx.r11.u64 & 0xFFF8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x82bb4008
	ctx.lr = 0x82C08040;
	sub_82BB4008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c08210
	if (ctx.cr6.eq) goto loc_82C08210;
loc_82C08048:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c08068
	if (!ctx.cr6.eq) goto loc_82C08068;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c08100
	if (ctx.cr6.eq) goto loc_82C08100;
loc_82C08068:
	// lwz r11,2208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2208);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c08088
	if (ctx.cr6.eq) goto loc_82C08088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a520
	ctx.lr = 0x82C08080;
	sub_82B9A520(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c08100
	if (!ctx.cr6.eq) goto loc_82C08100;
loc_82C08088:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r5,112
	ctx.r5.s64 = 112;
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r27,r7,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82219130
	ctx.lr = 0x82C080B0;
	sub_82219130(ctx, base);
	// lhz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r5,94(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r6,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r6.u16);
	// sth r5,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// bl 0x82120040
	ctx.lr = 0x82C080CC;
	sub_82120040(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x82C080DC;
	sub_82218A80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9afc0
	ctx.lr = 0x82C080E8;
	sub_82B9AFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb2de0
	ctx.lr = 0x82C080F0;
	sub_82BB2DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82C08100;
	sub_82219130(ctx, base);
loc_82C08100:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82c08120
	if (!ctx.cr6.eq) goto loc_82C08120;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82b9a460
	ctx.lr = 0x82C08120;
	sub_82B9A460(ctx, base);
loc_82C08120:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82c08150
	if (!ctx.cr6.eq) goto loc_82C08150;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82231380
	ctx.lr = 0x82C08150;
	sub_82231380(ctx, base);
loc_82C08150:
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82c08174
	if (ctx.cr6.eq) goto loc_82C08174;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82c08174
	if (ctx.cr6.eq) goto loc_82C08174;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// sth r10,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r10.u16);
loc_82C08174:
	// lwz r11,2208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2208);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c08194
	if (!ctx.cr6.eq) goto loc_82C08194;
	// lhz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// sth r10,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r10.u16);
loc_82C08194:
	// lhz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c081d8
	if (ctx.cr6.eq) goto loc_82C081D8;
	// lwz r11,2208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2208);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c081d8
	if (ctx.cr6.eq) goto loc_82C081D8;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C081D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c08210
	if (!ctx.cr6.eq) goto loc_82C08210;
loc_82C081D8:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C081F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// bl 0x82bb60b0
	ctx.lr = 0x82C081FC;
	sub_82BB60B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827e47b0
	ctx.lr = 0x82C08208;
	sub_827E47B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb2de0
	ctx.lr = 0x82C08210;
	sub_82BB2DE0(ctx, base);
loc_82C08210:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08218"))) PPC_WEAK_FUNC(sub_82C08218);
PPC_FUNC_IMPL(__imp__sub_82C08218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82C08220;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-17552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c08240
	if (ctx.cr6.eq) goto loc_82C08240;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13204);
	// bl 0x82b77338
	ctx.lr = 0x82C08240;
	sub_82B77338(ctx, base);
loc_82C08240:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// stw r11,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r11.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,13548(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13548);
	// addi r30,r11,13356
	ctx.r30.s64 = ctx.r11.s64 + 13356;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,13356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	// bne cr6,0x82c08288
	if (!ctx.cr6.eq) goto loc_82C08288;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c082c8
	if (ctx.cr6.eq) goto loc_82C082C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x827f70c0
	ctx.lr = 0x82C0827C;
	sub_827F70C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r11.u32);
	// b 0x82c082b8
	goto loc_82C082B8;
loc_82C08288:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c082a4
	if (ctx.cr6.eq) goto loc_82C082A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x827f70c0
	ctx.lr = 0x82C08298;
	sub_827F70C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r11.u32);
	// b 0x82c082b8
	goto loc_82C082B8;
loc_82C082A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13340, ctx.r11.u32);
	// bl 0x82c04a18
	ctx.lr = 0x82C082B0;
	sub_82C04A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13340, ctx.r11.u32);
loc_82C082B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,13548(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13548, ctx.r10.u32);
loc_82C082C8:
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13348(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c082e8
	if (ctx.cr6.eq) goto loc_82C082E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13596);
	// bl 0x827c83a8
	ctx.lr = 0x82C082E8;
	sub_827C83A8(ctx, base);
loc_82C082E8:
	// bl 0x82bd3958
	ctx.lr = 0x82C082EC;
	sub_82BD3958(ctx, base);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// lwz r11,696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c08314
	if (ctx.cr6.eq) goto loc_82C08314;
	// lwz r3,13596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13596);
	// bl 0x827c7cc8
	ctx.lr = 0x82C08308;
	sub_827C7CC8(ctx, base);
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r10.u32);
loc_82C08314:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// bl 0x827ca280
	ctx.lr = 0x82C08320;
	sub_827CA280(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13344, ctx.r11.u32);
	// bl 0x827fe180
	ctx.lr = 0x82C08330;
	sub_827FE180(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13344, ctx.r11.u32);
	// bl 0x82bebf50
	ctx.lr = 0x82C0833C;
	sub_82BEBF50(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r3,18056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c08350
	if (ctx.cr6.eq) goto loc_82C08350;
	// bl 0x8274fc70
	ctx.lr = 0x82C08350;
	sub_8274FC70(ctx, base);
loc_82C08350:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c08364
	if (ctx.cr6.eq) goto loc_82C08364;
	// bl 0x8279db20
	ctx.lr = 0x82C08364;
	sub_8279DB20(ctx, base);
loc_82C08364:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13340, ctx.r11.u32);
	// bl 0x82b78cf8
	ctx.lr = 0x82C08370;
	sub_82B78CF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13340, ctx.r11.u32);
	// bl 0x827d4a00
	ctx.lr = 0x82C0837C;
	sub_827D4A00(ctx, base);
	// bl 0x82c06310
	ctx.lr = 0x82C08380;
	sub_82C06310(ctx, base);
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82b77d30
	ctx.lr = 0x82C08388;
	sub_82B77D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c08394
	if (ctx.cr6.eq) goto loc_82C08394;
	// bl 0x827d4a00
	ctx.lr = 0x82C08394;
	sub_827D4A00(ctx, base);
loc_82C08394:
	// bl 0x827d95a8
	ctx.lr = 0x82C08398;
	sub_827D95A8(ctx, base);
	// bl 0x82bf9000
	ctx.lr = 0x82C0839C;
	sub_82BF9000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be3980
	ctx.lr = 0x82C083A4;
	sub_82BE3980(ctx, base);
	// bl 0x827d4a00
	ctx.lr = 0x82C083A8;
	sub_827D4A00(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82b77d30
	ctx.lr = 0x82C083B0;
	sub_82B77D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c083bc
	if (ctx.cr6.eq) goto loc_82C083BC;
	// bl 0x827d4a00
	ctx.lr = 0x82C083BC;
	sub_827D4A00(ctx, base);
loc_82C083BC:
	// bl 0x82becad8
	ctx.lr = 0x82C083C0;
	sub_82BECAD8(ctx, base);
	// bl 0x82bebe30
	ctx.lr = 0x82C083C4;
	sub_82BEBE30(ctx, base);
	// bl 0x827d4c18
	ctx.lr = 0x82C083C8;
	sub_827D4C18(ctx, base);
	// bl 0x827d85d8
	ctx.lr = 0x82C083CC;
	sub_827D85D8(ctx, base);
	// bl 0x827e63e8
	ctx.lr = 0x82C083D0;
	sub_827E63E8(ctx, base);
	// lwz r10,13412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c08438
	if (ctx.cr6.eq) goto loc_82C08438;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c083f8
	if (ctx.cr6.lt) goto loc_82C083F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c08400
	goto loc_82C08400;
loc_82C083F8:
	// lwz r11,720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 720);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82C08400:
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c08424
	if (ctx.cr6.eq) goto loc_82C08424;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c08424
	if (ctx.cr6.eq) goto loc_82C08424;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C08420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,13412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
loc_82C08424:
	// lwz r11,728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,172
	ctx.r30.s64 = ctx.r30.s64 + 172;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c083f8
	if (ctx.cr6.lt) goto loc_82C083F8;
loc_82C08438:
	// bl 0x82bd3850
	ctx.lr = 0x82C0843C;
	sub_82BD3850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13348(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13348, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0844C"))) PPC_WEAK_FUNC(sub_82C0844C);
PPC_FUNC_IMPL(__imp__sub_82C0844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08450"))) PPC_WEAK_FUNC(sub_82C08450);
PPC_FUNC_IMPL(__imp__sub_82C08450) {
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
	// bl 0x821fdb08
	ctx.lr = 0x82C08460;
	sub_821FDB08(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-28352
	ctx.r3.s64 = ctx.r11.s64 + -28352;
	// bl 0x82218998
	ctx.lr = 0x82C0846C;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0847C"))) PPC_WEAK_FUNC(sub_82C0847C);
PPC_FUNC_IMPL(__imp__sub_82C0847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08480"))) PPC_WEAK_FUNC(sub_82C08480);
PPC_FUNC_IMPL(__imp__sub_82C08480) {
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
	// addi r3,r11,14524
	ctx.r3.s64 = ctx.r11.s64 + 14524;
	// bl 0x821fd9e8
	ctx.lr = 0x82C08498;
	sub_821FD9E8(ctx, base);
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r3,r10,-28344
	ctx.r3.s64 = ctx.r10.s64 + -28344;
	// bl 0x82218998
	ctx.lr = 0x82C084A4;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C084B4"))) PPC_WEAK_FUNC(sub_82C084B4);
PPC_FUNC_IMPL(__imp__sub_82C084B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C084B8"))) PPC_WEAK_FUNC(sub_82C084B8);
PPC_FUNC_IMPL(__imp__sub_82C084B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,14560
	ctx.r3.s64 = ctx.r11.s64 + 14560;
	// b 0x82bc9230
	sub_82BC9230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C084C4"))) PPC_WEAK_FUNC(sub_82C084C4);
PPC_FUNC_IMPL(__imp__sub_82C084C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C084C8"))) PPC_WEAK_FUNC(sub_82C084C8);
PPC_FUNC_IMPL(__imp__sub_82C084C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// li r5,12288
	ctx.r5.s64 = 12288;
	// addi r3,r11,-28048
	ctx.r3.s64 = ctx.r11.s64 + -28048;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82218a80
	sub_82218A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C084DC"))) PPC_WEAK_FUNC(sub_82C084DC);
PPC_FUNC_IMPL(__imp__sub_82C084DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C084E0"))) PPC_WEAK_FUNC(sub_82C084E0);
PPC_FUNC_IMPL(__imp__sub_82C084E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r10,r11,26676
	ctx.r10.s64 = ctx.r11.s64 + 26676;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// ori r11,r9,96
	ctx.r11.u64 = ctx.r9.u64 | 96;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C084FC"))) PPC_WEAK_FUNC(sub_82C084FC);
PPC_FUNC_IMPL(__imp__sub_82C084FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08500"))) PPC_WEAK_FUNC(sub_82C08500);
PPC_FUNC_IMPL(__imp__sub_82C08500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r10,r11,26688
	ctx.r10.s64 = ctx.r11.s64 + 26688;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08518"))) PPC_WEAK_FUNC(sub_82C08518);
PPC_FUNC_IMPL(__imp__sub_82C08518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r10,r11,28756
	ctx.r10.s64 = ctx.r11.s64 + 28756;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// ori r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 | 32;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08534"))) PPC_WEAK_FUNC(sub_82C08534);
PPC_FUNC_IMPL(__imp__sub_82C08534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08538"))) PPC_WEAK_FUNC(sub_82C08538);
PPC_FUNC_IMPL(__imp__sub_82C08538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r10,r11,28788
	ctx.r10.s64 = ctx.r11.s64 + 28788;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// ori r11,r9,64
	ctx.r11.u64 = ctx.r9.u64 | 64;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08554"))) PPC_WEAK_FUNC(sub_82C08554);
PPC_FUNC_IMPL(__imp__sub_82C08554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08558"))) PPC_WEAK_FUNC(sub_82C08558);
PPC_FUNC_IMPL(__imp__sub_82C08558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,15584
	ctx.r9.s64 = ctx.r10.s64 + 15584;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stw r10,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r10.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// stfs f0,48(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// stfs f0,52(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// stfs f0,56(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// stfs f0,64(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// stfs f0,68(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// stfs f0,72(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C085CC"))) PPC_WEAK_FUNC(sub_82C085CC);
PPC_FUNC_IMPL(__imp__sub_82C085CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C085D0"))) PPC_WEAK_FUNC(sub_82C085D0);
PPC_FUNC_IMPL(__imp__sub_82C085D0) {
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
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// addi r3,r9,-28296
	ctx.r3.s64 = ctx.r9.s64 + -28296;
	// stb r11,15668(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15668, ctx.r11.u8);
	// bl 0x82218998
	ctx.lr = 0x82C085F4;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08604"))) PPC_WEAK_FUNC(sub_82C08604);
PPC_FUNC_IMPL(__imp__sub_82C08604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08608"))) PPC_WEAK_FUNC(sub_82C08608);
PPC_FUNC_IMPL(__imp__sub_82C08608) {
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
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// addi r3,r9,-28208
	ctx.r3.s64 = ctx.r9.s64 + -28208;
	// stb r11,15684(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15684, ctx.r11.u8);
	// bl 0x82218998
	ctx.lr = 0x82C0862C;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0863C"))) PPC_WEAK_FUNC(sub_82C0863C);
PPC_FUNC_IMPL(__imp__sub_82C0863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08640"))) PPC_WEAK_FUNC(sub_82C08640);
PPC_FUNC_IMPL(__imp__sub_82C08640) {
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
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// addi r3,r9,-28120
	ctx.r3.s64 = ctx.r9.s64 + -28120;
	// stb r11,15700(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15700, ctx.r11.u8);
	// bl 0x82218998
	ctx.lr = 0x82C08664;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08674"))) PPC_WEAK_FUNC(sub_82C08674);
PPC_FUNC_IMPL(__imp__sub_82C08674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08678"))) PPC_WEAK_FUNC(sub_82C08678);
PPC_FUNC_IMPL(__imp__sub_82C08678) {
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
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// addi r3,r9,-28032
	ctx.r3.s64 = ctx.r9.s64 + -28032;
	// stb r11,15716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15716, ctx.r11.u8);
	// bl 0x82218998
	ctx.lr = 0x82C0869C;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C086AC"))) PPC_WEAK_FUNC(sub_82C086AC);
PPC_FUNC_IMPL(__imp__sub_82C086AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C086B0"))) PPC_WEAK_FUNC(sub_82C086B0);
PPC_FUNC_IMPL(__imp__sub_82C086B0) {
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
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,15732
	ctx.r7.s64 = ctx.r11.s64 + 15732;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
loc_82C086D4:
	// stb r8,-8(r11)
	PPC_STORE_U8(ctx.r11.u32 + -8, ctx.r8.u8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x82c086d4
	if (!ctx.cr0.lt) goto loc_82C086D4;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27944
	ctx.r3.s64 = ctx.r11.s64 + -27944;
	// bl 0x82218998
	ctx.lr = 0x82C08700;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08710"))) PPC_WEAK_FUNC(sub_82C08710);
PPC_FUNC_IMPL(__imp__sub_82C08710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27776
	ctx.r3.s64 = ctx.r11.s64 + -27776;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0871C"))) PPC_WEAK_FUNC(sub_82C0871C);
PPC_FUNC_IMPL(__imp__sub_82C0871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08720"))) PPC_WEAK_FUNC(sub_82C08720);
PPC_FUNC_IMPL(__imp__sub_82C08720) {
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
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,15796
	ctx.r11.s64 = ctx.r11.s64 + 15796;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82C08744:
	// stb r8,-8(r11)
	PPC_STORE_U8(ctx.r11.u32 + -8, ctx.r8.u8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x82c08744
	if (!ctx.cr0.lt) goto loc_82C08744;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27752
	ctx.r3.s64 = ctx.r11.s64 + -27752;
	// bl 0x82218998
	ctx.lr = 0x82C0876C;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0877C"))) PPC_WEAK_FUNC(sub_82C0877C);
PPC_FUNC_IMPL(__imp__sub_82C0877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08780"))) PPC_WEAK_FUNC(sub_82C08780);
PPC_FUNC_IMPL(__imp__sub_82C08780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0878C"))) PPC_WEAK_FUNC(sub_82C0878C);
PPC_FUNC_IMPL(__imp__sub_82C0878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08790"))) PPC_WEAK_FUNC(sub_82C08790);
PPC_FUNC_IMPL(__imp__sub_82C08790) {
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
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// bl 0x827e3828
	ctx.lr = 0x82C087A8;
	sub_827E3828(ctx, base);
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r3,r10,-27576
	ctx.r3.s64 = ctx.r10.s64 + -27576;
	// bl 0x82218998
	ctx.lr = 0x82C087B4;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C087C4"))) PPC_WEAK_FUNC(sub_82C087C4);
PPC_FUNC_IMPL(__imp__sub_82C087C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C087C8"))) PPC_WEAK_FUNC(sub_82C087C8);
PPC_FUNC_IMPL(__imp__sub_82C087C8) {
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
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// addi r3,r9,-27496
	ctx.r3.s64 = ctx.r9.s64 + -27496;
	// stb r11,16396(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16396, ctx.r11.u8);
	// bl 0x82218998
	ctx.lr = 0x82C087EC;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C087FC"))) PPC_WEAK_FUNC(sub_82C087FC);
PPC_FUNC_IMPL(__imp__sub_82C087FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08800"))) PPC_WEAK_FUNC(sub_82C08800);
PPC_FUNC_IMPL(__imp__sub_82C08800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r11,r11,16416
	ctx.r11.s64 = ctx.r11.s64 + 16416;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,13760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13760);
loc_82C08818:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bge 0x82c08818
	if (!ctx.cr0.lt) goto loc_82C08818;
	// stw r11,13760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08834"))) PPC_WEAK_FUNC(sub_82C08834);
PPC_FUNC_IMPL(__imp__sub_82C08834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08838"))) PPC_WEAK_FUNC(sub_82C08838);
PPC_FUNC_IMPL(__imp__sub_82C08838) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,-29004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08848"))) PPC_WEAK_FUNC(sub_82C08848);
PPC_FUNC_IMPL(__imp__sub_82C08848) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,-29000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08858"))) PPC_WEAK_FUNC(sub_82C08858);
PPC_FUNC_IMPL(__imp__sub_82C08858) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,-28996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08868"))) PPC_WEAK_FUNC(sub_82C08868);
PPC_FUNC_IMPL(__imp__sub_82C08868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,-28992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08878"))) PPC_WEAK_FUNC(sub_82C08878);
PPC_FUNC_IMPL(__imp__sub_82C08878) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,-28988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08888"))) PPC_WEAK_FUNC(sub_82C08888);
PPC_FUNC_IMPL(__imp__sub_82C08888) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r31,r10,16672
	ctx.r31.s64 = ctx.r10.s64 + 16672;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// bl 0x82120ae0
	ctx.lr = 0x82C088B0;
	sub_82120AE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c088bc
	if (ctx.cr6.eq) goto loc_82C088BC;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82C088BC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c088c8
	if (ctx.cr0.eq) goto loc_82C088C8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82C088C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r10,-27408
	ctx.r3.s64 = ctx.r10.s64 + -27408;
	// bl 0x82218998
	ctx.lr = 0x82C088E0;
	sub_82218998(ctx, base);
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

__attribute__((alias("__imp__sub_82C088F4"))) PPC_WEAK_FUNC(sub_82C088F4);
PPC_FUNC_IMPL(__imp__sub_82C088F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C088F8"))) PPC_WEAK_FUNC(sub_82C088F8);
PPC_FUNC_IMPL(__imp__sub_82C088F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-28940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08908"))) PPC_WEAK_FUNC(sub_82C08908);
PPC_FUNC_IMPL(__imp__sub_82C08908) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,-28936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08918"))) PPC_WEAK_FUNC(sub_82C08918);
PPC_FUNC_IMPL(__imp__sub_82C08918) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,-28932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08928"))) PPC_WEAK_FUNC(sub_82C08928);
PPC_FUNC_IMPL(__imp__sub_82C08928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,-28928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08938"))) PPC_WEAK_FUNC(sub_82C08938);
PPC_FUNC_IMPL(__imp__sub_82C08938) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-32030
	ctx.r8.s64 = -2099118080;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r8,29216
	ctx.r7.s64 = ctx.r8.s64 + 29216;
	// addi r10,r11,2480
	ctx.r10.s64 = ctx.r11.s64 + 2480;
	// lwz r11,14156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14156);
	// lis r6,-32063
	ctx.r6.s64 = -2101280768;
	// stw r10,29216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29216, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r3,r6,-27392
	ctx.r3.s64 = ctx.r6.s64 + -27392;
	// stw r10,14156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14156, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0896C"))) PPC_WEAK_FUNC(sub_82C0896C);
PPC_FUNC_IMPL(__imp__sub_82C0896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08970"))) PPC_WEAK_FUNC(sub_82C08970);
PPC_FUNC_IMPL(__imp__sub_82C08970) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-32030
	ctx.r8.s64 = -2099118080;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r8,29224
	ctx.r7.s64 = ctx.r8.s64 + 29224;
	// addi r10,r11,9620
	ctx.r10.s64 = ctx.r11.s64 + 9620;
	// lwz r11,14156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14156);
	// lis r6,-32063
	ctx.r6.s64 = -2101280768;
	// stw r10,29224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29224, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r3,r6,-27368
	ctx.r3.s64 = ctx.r6.s64 + -27368;
	// stw r10,14156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14156, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C089A4"))) PPC_WEAK_FUNC(sub_82C089A4);
PPC_FUNC_IMPL(__imp__sub_82C089A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C089A8"))) PPC_WEAK_FUNC(sub_82C089A8);
PPC_FUNC_IMPL(__imp__sub_82C089A8) {
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
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// addi r3,r9,-27344
	ctx.r3.s64 = ctx.r9.s64 + -27344;
	// stb r11,16684(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16684, ctx.r11.u8);
	// bl 0x82218998
	ctx.lr = 0x82C089CC;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C089DC"))) PPC_WEAK_FUNC(sub_82C089DC);
PPC_FUNC_IMPL(__imp__sub_82C089DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C089E0"))) PPC_WEAK_FUNC(sub_82C089E0);
PPC_FUNC_IMPL(__imp__sub_82C089E0) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,16704
	ctx.r31.s64 = ctx.r11.s64 + 16704;
	// addi r10,r31,12376
	ctx.r10.s64 = ctx.r31.s64 + 12376;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
loc_82C08A08:
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c08a08
	if (ctx.cr6.lt) goto loc_82C08A08;
	// li r5,12288
	ctx.r5.s64 = 12288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82218a80
	ctx.lr = 0x82C08A34;
	sub_82218A80(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12312
	ctx.r3.s64 = ctx.r31.s64 + 12312;
	// bl 0x82218a80
	ctx.lr = 0x82C08A44;
	sub_82218A80(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27328
	ctx.r3.s64 = ctx.r11.s64 + -27328;
	// bl 0x82218998
	ctx.lr = 0x82C08A54;
	sub_82218998(ctx, base);
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

__attribute__((alias("__imp__sub_82C08A6C"))) PPC_WEAK_FUNC(sub_82C08A6C);
PPC_FUNC_IMPL(__imp__sub_82C08A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08A70"))) PPC_WEAK_FUNC(sub_82C08A70);
PPC_FUNC_IMPL(__imp__sub_82C08A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08A7C"))) PPC_WEAK_FUNC(sub_82C08A7C);
PPC_FUNC_IMPL(__imp__sub_82C08A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08A80"))) PPC_WEAK_FUNC(sub_82C08A80);
PPC_FUNC_IMPL(__imp__sub_82C08A80) {
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
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-27872
	ctx.r3.s64 = ctx.r11.s64 + -27872;
	// bl 0x82167b70
	ctx.lr = 0x82C08A98;
	sub_82167B70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// bl 0x82218998
	ctx.lr = 0x82C08AA4;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08AB4"))) PPC_WEAK_FUNC(sub_82C08AB4);
PPC_FUNC_IMPL(__imp__sub_82C08AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08AB8"))) PPC_WEAK_FUNC(sub_82C08AB8);
PPC_FUNC_IMPL(__imp__sub_82C08AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// b 0x82169a78
	sub_82169A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08AC4"))) PPC_WEAK_FUNC(sub_82C08AC4);
PPC_FUNC_IMPL(__imp__sub_82C08AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08AC8"))) PPC_WEAK_FUNC(sub_82C08AC8);
PPC_FUNC_IMPL(__imp__sub_82C08AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27224
	ctx.r3.s64 = ctx.r11.s64 + -27224;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08AD4"))) PPC_WEAK_FUNC(sub_82C08AD4);
PPC_FUNC_IMPL(__imp__sub_82C08AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08AD8"))) PPC_WEAK_FUNC(sub_82C08AD8);
PPC_FUNC_IMPL(__imp__sub_82C08AD8) {
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
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x82C08AF8;
	sub_82218A80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27216
	ctx.r3.s64 = ctx.r11.s64 + -27216;
	// bl 0x82218998
	ctx.lr = 0x82C08B04;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08B14"))) PPC_WEAK_FUNC(sub_82C08B14);
PPC_FUNC_IMPL(__imp__sub_82C08B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08B18"))) PPC_WEAK_FUNC(sub_82C08B18);
PPC_FUNC_IMPL(__imp__sub_82C08B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08B24"))) PPC_WEAK_FUNC(sub_82C08B24);
PPC_FUNC_IMPL(__imp__sub_82C08B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08B28"))) PPC_WEAK_FUNC(sub_82C08B28);
PPC_FUNC_IMPL(__imp__sub_82C08B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27192
	ctx.r3.s64 = ctx.r11.s64 + -27192;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08B34"))) PPC_WEAK_FUNC(sub_82C08B34);
PPC_FUNC_IMPL(__imp__sub_82C08B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08B38"))) PPC_WEAK_FUNC(sub_82C08B38);
PPC_FUNC_IMPL(__imp__sub_82C08B38) {
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
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r11,r11,29504
	ctx.r11.s64 = ctx.r11.s64 + 29504;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c09bcc
	ctx.lr = 0x82C08B54;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r3,r10,-27160
	ctx.r3.s64 = ctx.r10.s64 + -27160;
	// bl 0x82218998
	ctx.lr = 0x82C08B60;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08B70"))) PPC_WEAK_FUNC(sub_82C08B70);
PPC_FUNC_IMPL(__imp__sub_82C08B70) {
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
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r11,r11,29536
	ctx.r11.s64 = ctx.r11.s64 + 29536;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c09bcc
	ctx.lr = 0x82C08B8C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r3,r10,-27136
	ctx.r3.s64 = ctx.r10.s64 + -27136;
	// bl 0x82218998
	ctx.lr = 0x82C08B98;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08BA8"))) PPC_WEAK_FUNC(sub_82C08BA8);
PPC_FUNC_IMPL(__imp__sub_82C08BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,-4240
	ctx.r3.s64 = ctx.r11.s64 + -4240;
	// b 0x82216bd8
	sub_82216BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08BB4"))) PPC_WEAK_FUNC(sub_82C08BB4);
PPC_FUNC_IMPL(__imp__sub_82C08BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08BB8"))) PPC_WEAK_FUNC(sub_82C08BB8);
PPC_FUNC_IMPL(__imp__sub_82C08BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27064
	ctx.r3.s64 = ctx.r11.s64 + -27064;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08BC4"))) PPC_WEAK_FUNC(sub_82C08BC4);
PPC_FUNC_IMPL(__imp__sub_82C08BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08BC8"))) PPC_WEAK_FUNC(sub_82C08BC8);
PPC_FUNC_IMPL(__imp__sub_82C08BC8) {
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
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,8976
	ctx.r11.s64 = ctx.r11.s64 + 8976;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c09bcc
	ctx.lr = 0x82C08BE4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27040
	ctx.r3.s64 = ctx.r11.s64 + -27040;
	// bl 0x82218998
	ctx.lr = 0x82C08BF0;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08C00"))) PPC_WEAK_FUNC(sub_82C08C00);
PPC_FUNC_IMPL(__imp__sub_82C08C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-744
	ctx.r3.s64 = ctx.r11.s64 + -744;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82218a80
	sub_82218A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08C14"))) PPC_WEAK_FUNC(sub_82C08C14);
PPC_FUNC_IMPL(__imp__sub_82C08C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08C18"))) PPC_WEAK_FUNC(sub_82C08C18);
PPC_FUNC_IMPL(__imp__sub_82C08C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r11,-2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2120);
	// stw r11,-656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08C2C"))) PPC_WEAK_FUNC(sub_82C08C2C);
PPC_FUNC_IMPL(__imp__sub_82C08C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08C30"))) PPC_WEAK_FUNC(sub_82C08C30);
PPC_FUNC_IMPL(__imp__sub_82C08C30) {
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
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r31,r11,-652
	ctx.r31.s64 = ctx.r11.s64 + -652;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x822539e0
	ctx.lr = 0x82C08C50;
	sub_822539E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09bcc
	ctx.lr = 0x82C08C58;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r3,r11,-27016
	ctx.r3.s64 = ctx.r11.s64 + -27016;
	// bl 0x82218998
	ctx.lr = 0x82C08C7C;
	sub_82218998(ctx, base);
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

__attribute__((alias("__imp__sub_82C08C90"))) PPC_WEAK_FUNC(sub_82C08C90);
PPC_FUNC_IMPL(__imp__sub_82C08C90) {
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
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,32764
	ctx.r11.s64 = ctx.r11.s64 + 32764;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82c09bcc
	ctx.lr = 0x82C08CAC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-27000
	ctx.r3.s64 = ctx.r11.s64 + -27000;
	// bl 0x82218998
	ctx.lr = 0x82C08CB8;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08CC8"))) PPC_WEAK_FUNC(sub_82C08CC8);
PPC_FUNC_IMPL(__imp__sub_82C08CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26992
	ctx.r3.s64 = ctx.r11.s64 + -26992;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08CD4"))) PPC_WEAK_FUNC(sub_82C08CD4);
PPC_FUNC_IMPL(__imp__sub_82C08CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08CD8"))) PPC_WEAK_FUNC(sub_82C08CD8);
PPC_FUNC_IMPL(__imp__sub_82C08CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,-412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08CF4"))) PPC_WEAK_FUNC(sub_82C08CF4);
PPC_FUNC_IMPL(__imp__sub_82C08CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08CF8"))) PPC_WEAK_FUNC(sub_82C08CF8);
PPC_FUNC_IMPL(__imp__sub_82C08CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,-416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08D14"))) PPC_WEAK_FUNC(sub_82C08D14);
PPC_FUNC_IMPL(__imp__sub_82C08D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08D18"))) PPC_WEAK_FUNC(sub_82C08D18);
PPC_FUNC_IMPL(__imp__sub_82C08D18) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,-420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08D34"))) PPC_WEAK_FUNC(sub_82C08D34);
PPC_FUNC_IMPL(__imp__sub_82C08D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08D38"))) PPC_WEAK_FUNC(sub_82C08D38);
PPC_FUNC_IMPL(__imp__sub_82C08D38) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,-424(r8)
	PPC_STORE_U32(ctx.r8.u32 + -424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08D54"))) PPC_WEAK_FUNC(sub_82C08D54);
PPC_FUNC_IMPL(__imp__sub_82C08D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08D58"))) PPC_WEAK_FUNC(sub_82C08D58);
PPC_FUNC_IMPL(__imp__sub_82C08D58) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,-428(r8)
	PPC_STORE_U32(ctx.r8.u32 + -428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08D74"))) PPC_WEAK_FUNC(sub_82C08D74);
PPC_FUNC_IMPL(__imp__sub_82C08D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08D78"))) PPC_WEAK_FUNC(sub_82C08D78);
PPC_FUNC_IMPL(__imp__sub_82C08D78) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,-432(r8)
	PPC_STORE_U32(ctx.r8.u32 + -432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08D94"))) PPC_WEAK_FUNC(sub_82C08D94);
PPC_FUNC_IMPL(__imp__sub_82C08D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08D98"))) PPC_WEAK_FUNC(sub_82C08D98);
PPC_FUNC_IMPL(__imp__sub_82C08D98) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,-436(r8)
	PPC_STORE_U32(ctx.r8.u32 + -436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08DB4"))) PPC_WEAK_FUNC(sub_82C08DB4);
PPC_FUNC_IMPL(__imp__sub_82C08DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08DB8"))) PPC_WEAK_FUNC(sub_82C08DB8);
PPC_FUNC_IMPL(__imp__sub_82C08DB8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r4,r11,13434
	ctx.r4.s64 = ctx.r11.s64 + 13434;
	// addi r3,r10,136
	ctx.r3.s64 = ctx.r10.s64 + 136;
	// bl 0x82297ab8
	ctx.lr = 0x82C08DD8;
	sub_82297AB8(ctx, base);
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// addi r3,r9,-26976
	ctx.r3.s64 = ctx.r9.s64 + -26976;
	// bl 0x82218998
	ctx.lr = 0x82C08DE4;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08DF4"))) PPC_WEAK_FUNC(sub_82C08DF4);
PPC_FUNC_IMPL(__imp__sub_82C08DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08DF8"))) PPC_WEAK_FUNC(sub_82C08DF8);
PPC_FUNC_IMPL(__imp__sub_82C08DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26960
	ctx.r3.s64 = ctx.r11.s64 + -26960;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08E04"))) PPC_WEAK_FUNC(sub_82C08E04);
PPC_FUNC_IMPL(__imp__sub_82C08E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08E08"))) PPC_WEAK_FUNC(sub_82C08E08);
PPC_FUNC_IMPL(__imp__sub_82C08E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26944
	ctx.r3.s64 = ctx.r11.s64 + -26944;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08E14"))) PPC_WEAK_FUNC(sub_82C08E14);
PPC_FUNC_IMPL(__imp__sub_82C08E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08E18"))) PPC_WEAK_FUNC(sub_82C08E18);
PPC_FUNC_IMPL(__imp__sub_82C08E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26928
	ctx.r3.s64 = ctx.r11.s64 + -26928;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08E24"))) PPC_WEAK_FUNC(sub_82C08E24);
PPC_FUNC_IMPL(__imp__sub_82C08E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08E28"))) PPC_WEAK_FUNC(sub_82C08E28);
PPC_FUNC_IMPL(__imp__sub_82C08E28) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,8472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08E44"))) PPC_WEAK_FUNC(sub_82C08E44);
PPC_FUNC_IMPL(__imp__sub_82C08E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08E48"))) PPC_WEAK_FUNC(sub_82C08E48);
PPC_FUNC_IMPL(__imp__sub_82C08E48) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,8484(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08E64"))) PPC_WEAK_FUNC(sub_82C08E64);
PPC_FUNC_IMPL(__imp__sub_82C08E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08E68"))) PPC_WEAK_FUNC(sub_82C08E68);
PPC_FUNC_IMPL(__imp__sub_82C08E68) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,-492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -492, ctx.r10.u32);
	// stw r11,8480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08E84"))) PPC_WEAK_FUNC(sub_82C08E84);
PPC_FUNC_IMPL(__imp__sub_82C08E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08E88"))) PPC_WEAK_FUNC(sub_82C08E88);
PPC_FUNC_IMPL(__imp__sub_82C08E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// addi r3,r9,8496
	ctx.r3.s64 = ctx.r9.s64 + 8496;
	// lfs f2,9184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9184);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,14620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14620);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822af890
	sub_822AF890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08EA4"))) PPC_WEAK_FUNC(sub_82C08EA4);
PPC_FUNC_IMPL(__imp__sub_82C08EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08EA8"))) PPC_WEAK_FUNC(sub_82C08EA8);
PPC_FUNC_IMPL(__imp__sub_82C08EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26832
	ctx.r3.s64 = ctx.r11.s64 + -26832;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08EB4"))) PPC_WEAK_FUNC(sub_82C08EB4);
PPC_FUNC_IMPL(__imp__sub_82C08EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08EB8"))) PPC_WEAK_FUNC(sub_82C08EB8);
PPC_FUNC_IMPL(__imp__sub_82C08EB8) {
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
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,8816
	ctx.r3.s64 = ctx.r11.s64 + 8816;
	// bl 0x822d9898
	ctx.lr = 0x82C08ED0;
	sub_822D9898(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26768
	ctx.r3.s64 = ctx.r11.s64 + -26768;
	// bl 0x82218998
	ctx.lr = 0x82C08EDC;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08EEC"))) PPC_WEAK_FUNC(sub_82C08EEC);
PPC_FUNC_IMPL(__imp__sub_82C08EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08EF0"))) PPC_WEAK_FUNC(sub_82C08EF0);
PPC_FUNC_IMPL(__imp__sub_82C08EF0) {
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
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,8744
	ctx.r3.s64 = ctx.r11.s64 + 8744;
	// bl 0x822d9808
	ctx.lr = 0x82C08F08;
	sub_822D9808(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26704
	ctx.r3.s64 = ctx.r11.s64 + -26704;
	// bl 0x82218998
	ctx.lr = 0x82C08F14;
	sub_82218998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C08F24"))) PPC_WEAK_FUNC(sub_82C08F24);
PPC_FUNC_IMPL(__imp__sub_82C08F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08F28"))) PPC_WEAK_FUNC(sub_82C08F28);
PPC_FUNC_IMPL(__imp__sub_82C08F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26792
	ctx.r3.s64 = ctx.r11.s64 + -26792;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08F34"))) PPC_WEAK_FUNC(sub_82C08F34);
PPC_FUNC_IMPL(__imp__sub_82C08F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08F38"))) PPC_WEAK_FUNC(sub_82C08F38);
PPC_FUNC_IMPL(__imp__sub_82C08F38) {
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
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,10232
	ctx.r31.s64 = ctx.r11.s64 + 10232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1bc8
	ctx.lr = 0x82C08F5C;
	sub_822D1BC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r3,r10,-26656
	ctx.r3.s64 = ctx.r10.s64 + -26656;
	// bl 0x82218998
	ctx.lr = 0x82C08F70;
	sub_82218998(ctx, base);
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

__attribute__((alias("__imp__sub_82C08F84"))) PPC_WEAK_FUNC(sub_82C08F84);
PPC_FUNC_IMPL(__imp__sub_82C08F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08F88"))) PPC_WEAK_FUNC(sub_82C08F88);
PPC_FUNC_IMPL(__imp__sub_82C08F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26632
	ctx.r3.s64 = ctx.r11.s64 + -26632;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08F94"))) PPC_WEAK_FUNC(sub_82C08F94);
PPC_FUNC_IMPL(__imp__sub_82C08F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08F98"))) PPC_WEAK_FUNC(sub_82C08F98);
PPC_FUNC_IMPL(__imp__sub_82C08F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26608
	ctx.r3.s64 = ctx.r11.s64 + -26608;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08FA4"))) PPC_WEAK_FUNC(sub_82C08FA4);
PPC_FUNC_IMPL(__imp__sub_82C08FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08FA8"))) PPC_WEAK_FUNC(sub_82C08FA8);
PPC_FUNC_IMPL(__imp__sub_82C08FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08FB4"))) PPC_WEAK_FUNC(sub_82C08FB4);
PPC_FUNC_IMPL(__imp__sub_82C08FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08FB8"))) PPC_WEAK_FUNC(sub_82C08FB8);
PPC_FUNC_IMPL(__imp__sub_82C08FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08FC4"))) PPC_WEAK_FUNC(sub_82C08FC4);
PPC_FUNC_IMPL(__imp__sub_82C08FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08FC8"))) PPC_WEAK_FUNC(sub_82C08FC8);
PPC_FUNC_IMPL(__imp__sub_82C08FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26440
	ctx.r3.s64 = ctx.r11.s64 + -26440;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08FD4"))) PPC_WEAK_FUNC(sub_82C08FD4);
PPC_FUNC_IMPL(__imp__sub_82C08FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08FD8"))) PPC_WEAK_FUNC(sub_82C08FD8);
PPC_FUNC_IMPL(__imp__sub_82C08FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26408
	ctx.r3.s64 = ctx.r11.s64 + -26408;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C08FE4"))) PPC_WEAK_FUNC(sub_82C08FE4);
PPC_FUNC_IMPL(__imp__sub_82C08FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C08FE8"))) PPC_WEAK_FUNC(sub_82C08FE8);
PPC_FUNC_IMPL(__imp__sub_82C08FE8) {
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
	// bl 0x823846e8
	ctx.lr = 0x82C08FFC;
	sub_823846E8(ctx, base);
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r10,10400
	ctx.r31.s64 = ctx.r10.s64 + 10400;
	// stb r11,10400(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10400, ctx.r11.u8);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// bl 0x823846e8
	ctx.lr = 0x82C09014;
	sub_823846E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f1.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x823846e8
	ctx.lr = 0x82C09024;
	sub_823846E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,40(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.f1.u64);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x823846e8
	ctx.lr = 0x82C09034;
	sub_823846E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,56(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f1.u64);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26312
	ctx.r3.s64 = ctx.r11.s64 + -26312;
	// bl 0x82218998
	ctx.lr = 0x82C0904C;
	sub_82218998(ctx, base);
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

__attribute__((alias("__imp__sub_82C09060"))) PPC_WEAK_FUNC(sub_82C09060);
PPC_FUNC_IMPL(__imp__sub_82C09060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,10464
	ctx.r3.s64 = ctx.r11.s64 + 10464;
	// b 0x82384670
	sub_82384670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0906C"))) PPC_WEAK_FUNC(sub_82C0906C);
PPC_FUNC_IMPL(__imp__sub_82C0906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09070"))) PPC_WEAK_FUNC(sub_82C09070);
PPC_FUNC_IMPL(__imp__sub_82C09070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0907C"))) PPC_WEAK_FUNC(sub_82C0907C);
PPC_FUNC_IMPL(__imp__sub_82C0907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09080"))) PPC_WEAK_FUNC(sub_82C09080);
PPC_FUNC_IMPL(__imp__sub_82C09080) {
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
	// bl 0x823846e8
	ctx.lr = 0x82C09094;
	sub_823846E8(ctx, base);
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r10,10504
	ctx.r31.s64 = ctx.r10.s64 + 10504;
	// stb r11,10504(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10504, ctx.r11.u8);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// bl 0x823846e8
	ctx.lr = 0x82C090AC;
	sub_823846E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f1.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26120
	ctx.r3.s64 = ctx.r11.s64 + -26120;
	// bl 0x82218998
	ctx.lr = 0x82C090C4;
	sub_82218998(ctx, base);
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

__attribute__((alias("__imp__sub_82C090D8"))) PPC_WEAK_FUNC(sub_82C090D8);
PPC_FUNC_IMPL(__imp__sub_82C090D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26024
	ctx.r3.s64 = ctx.r11.s64 + -26024;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C090E4"))) PPC_WEAK_FUNC(sub_82C090E4);
PPC_FUNC_IMPL(__imp__sub_82C090E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C090E8"))) PPC_WEAK_FUNC(sub_82C090E8);
PPC_FUNC_IMPL(__imp__sub_82C090E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-26000
	ctx.r3.s64 = ctx.r11.s64 + -26000;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C090F4"))) PPC_WEAK_FUNC(sub_82C090F4);
PPC_FUNC_IMPL(__imp__sub_82C090F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C090F8"))) PPC_WEAK_FUNC(sub_82C090F8);
PPC_FUNC_IMPL(__imp__sub_82C090F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// b 0x82218998
	sub_82218998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09104"))) PPC_WEAK_FUNC(sub_82C09104);
PPC_FUNC_IMPL(__imp__sub_82C09104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09108"))) PPC_WEAK_FUNC(sub_82C09108);
PPC_FUNC_IMPL(__imp__sub_82C09108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,14588
	ctx.r3.s64 = ctx.r11.s64 + 14588;
	// b 0x82590de8
	sub_82590DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09118"))) PPC_WEAK_FUNC(sub_82C09118);
PPC_FUNC_IMPL(__imp__sub_82C09118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r4,r11,14588
	ctx.r4.s64 = ctx.r11.s64 + 14588;
	// addi r3,r10,14632
	ctx.r3.s64 = ctx.r10.s64 + 14632;
	// b 0x82591a20
	sub_82591A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0912C"))) PPC_WEAK_FUNC(sub_82C0912C);
PPC_FUNC_IMPL(__imp__sub_82C0912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09130"))) PPC_WEAK_FUNC(sub_82C09130);
PPC_FUNC_IMPL(__imp__sub_82C09130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// addi r3,r11,10224
	ctx.r3.s64 = ctx.r11.s64 + 10224;
	// b 0x82744958
	sub_82744958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0913C"))) PPC_WEAK_FUNC(sub_82C0913C);
PPC_FUNC_IMPL(__imp__sub_82C0913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09140"))) PPC_WEAK_FUNC(sub_82C09140);
PPC_FUNC_IMPL(__imp__sub_82C09140) {
	PPC_FUNC_PROLOGUE();
	// b 0x821fdb58
	sub_821FDB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09144"))) PPC_WEAK_FUNC(sub_82C09144);
PPC_FUNC_IMPL(__imp__sub_82C09144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09148"))) PPC_WEAK_FUNC(sub_82C09148);
PPC_FUNC_IMPL(__imp__sub_82C09148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,14524
	ctx.r3.s64 = ctx.r11.s64 + 14524;
	// b 0x82492d68
	sub_82492D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09154"))) PPC_WEAK_FUNC(sub_82C09154);
PPC_FUNC_IMPL(__imp__sub_82C09154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09158"))) PPC_WEAK_FUNC(sub_82C09158);
PPC_FUNC_IMPL(__imp__sub_82C09158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x82492d68
	sub_82492D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09164"))) PPC_WEAK_FUNC(sub_82C09164);
PPC_FUNC_IMPL(__imp__sub_82C09164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09168"))) PPC_WEAK_FUNC(sub_82C09168);
PPC_FUNC_IMPL(__imp__sub_82C09168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,21768
	ctx.r3.s64 = ctx.r11.s64 + 21768;
	// b 0x82492d68
	sub_82492D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09174"))) PPC_WEAK_FUNC(sub_82C09174);
PPC_FUNC_IMPL(__imp__sub_82C09174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09178"))) PPC_WEAK_FUNC(sub_82C09178);
PPC_FUNC_IMPL(__imp__sub_82C09178) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r31,r11,15668
	ctx.r31.s64 = ctx.r11.s64 + 15668;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c091a0
	if (ctx.cr6.eq) goto loc_82C091A0;
	// bl 0x82120a70
	ctx.lr = 0x82C091A0;
	sub_82120A70(ctx, base);
loc_82C091A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C091CC"))) PPC_WEAK_FUNC(sub_82C091CC);
PPC_FUNC_IMPL(__imp__sub_82C091CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C091D0"))) PPC_WEAK_FUNC(sub_82C091D0);
PPC_FUNC_IMPL(__imp__sub_82C091D0) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r31,r11,15684
	ctx.r31.s64 = ctx.r11.s64 + 15684;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c091f8
	if (ctx.cr6.eq) goto loc_82C091F8;
	// bl 0x82120a70
	ctx.lr = 0x82C091F8;
	sub_82120A70(ctx, base);
loc_82C091F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C09224"))) PPC_WEAK_FUNC(sub_82C09224);
PPC_FUNC_IMPL(__imp__sub_82C09224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09228"))) PPC_WEAK_FUNC(sub_82C09228);
PPC_FUNC_IMPL(__imp__sub_82C09228) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r31,r11,15700
	ctx.r31.s64 = ctx.r11.s64 + 15700;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c09250
	if (ctx.cr6.eq) goto loc_82C09250;
	// bl 0x82120a70
	ctx.lr = 0x82C09250;
	sub_82120A70(ctx, base);
loc_82C09250:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C0927C"))) PPC_WEAK_FUNC(sub_82C0927C);
PPC_FUNC_IMPL(__imp__sub_82C0927C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09280"))) PPC_WEAK_FUNC(sub_82C09280);
PPC_FUNC_IMPL(__imp__sub_82C09280) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r31,r11,15716
	ctx.r31.s64 = ctx.r11.s64 + 15716;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c092a8
	if (ctx.cr6.eq) goto loc_82C092A8;
	// bl 0x82120a70
	ctx.lr = 0x82C092A8;
	sub_82120A70(ctx, base);
loc_82C092A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C092D4"))) PPC_WEAK_FUNC(sub_82C092D4);
PPC_FUNC_IMPL(__imp__sub_82C092D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C092D8"))) PPC_WEAK_FUNC(sub_82C092D8);
PPC_FUNC_IMPL(__imp__sub_82C092D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82C092E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r11,r11,15732
	ctx.r11.s64 = ctx.r11.s64 + 15732;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r11,40
	ctx.r28.s64 = ctx.r11.s64 + 40;
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
loc_82C09304:
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c09360
	if (ctx.cr6.eq) goto loc_82C09360;
	// lwz r31,-17448(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17448);
	// lwz r29,-17440(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82C09324;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
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
	ctx.lr = 0x82C09350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c09360
	if (ctx.cr6.eq) goto loc_82C09360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82C09360;
	sub_821FD9E0(ctx, base);
loc_82C09360:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// stw r24,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r24.u32);
	// stw r24,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r24.u32);
	// bge 0x82c09304
	if (!ctx.cr0.lt) goto loc_82C09304;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0937C"))) PPC_WEAK_FUNC(sub_82C0937C);
PPC_FUNC_IMPL(__imp__sub_82C0937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09380"))) PPC_WEAK_FUNC(sub_82C09380);
PPC_FUNC_IMPL(__imp__sub_82C09380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// addi r11,r11,-5032
	ctx.r11.s64 = ctx.r11.s64 + -5032;
	// stw r11,28812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09394"))) PPC_WEAK_FUNC(sub_82C09394);
PPC_FUNC_IMPL(__imp__sub_82C09394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09398"))) PPC_WEAK_FUNC(sub_82C09398);
PPC_FUNC_IMPL(__imp__sub_82C09398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82C093A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r11,r11,15796
	ctx.r11.s64 = ctx.r11.s64 + 15796;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r11,36
	ctx.r28.s64 = ctx.r11.s64 + 36;
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
loc_82C093C4:
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c09420
	if (ctx.cr6.eq) goto loc_82C09420;
	// lwz r31,-17448(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17448);
	// lwz r29,-17440(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82C093E4;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
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
	ctx.lr = 0x82C09410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c09420
	if (ctx.cr6.eq) goto loc_82C09420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82C09420;
	sub_821FD9E0(ctx, base);
loc_82C09420:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// stw r24,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r24.u32);
	// stw r24,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r24.u32);
	// bge 0x82c093c4
	if (!ctx.cr0.lt) goto loc_82C093C4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0943C"))) PPC_WEAK_FUNC(sub_82C0943C);
PPC_FUNC_IMPL(__imp__sub_82C0943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09440"))) PPC_WEAK_FUNC(sub_82C09440);
PPC_FUNC_IMPL(__imp__sub_82C09440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09444"))) PPC_WEAK_FUNC(sub_82C09444);
PPC_FUNC_IMPL(__imp__sub_82C09444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09448"))) PPC_WEAK_FUNC(sub_82C09448);
PPC_FUNC_IMPL(__imp__sub_82C09448) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r31,r11,15840
	ctx.r31.s64 = ctx.r11.s64 + 15840;
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// bl 0x82120a70
	ctx.lr = 0x82C09468;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// bl 0x82120a70
	ctx.lr = 0x82C09478;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C09494"))) PPC_WEAK_FUNC(sub_82C09494);
PPC_FUNC_IMPL(__imp__sub_82C09494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09498"))) PPC_WEAK_FUNC(sub_82C09498);
PPC_FUNC_IMPL(__imp__sub_82C09498) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r31,r11,16396
	ctx.r31.s64 = ctx.r11.s64 + 16396;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c094c0
	if (ctx.cr6.eq) goto loc_82C094C0;
	// bl 0x82120a70
	ctx.lr = 0x82C094C0;
	sub_82120A70(ctx, base);
loc_82C094C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C094EC"))) PPC_WEAK_FUNC(sub_82C094EC);
PPC_FUNC_IMPL(__imp__sub_82C094EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C094F0"))) PPC_WEAK_FUNC(sub_82C094F0);
PPC_FUNC_IMPL(__imp__sub_82C094F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// b 0x8213f4e8
	sub_8213F4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C094FC"))) PPC_WEAK_FUNC(sub_82C094FC);
PPC_FUNC_IMPL(__imp__sub_82C094FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09500"))) PPC_WEAK_FUNC(sub_82C09500);
PPC_FUNC_IMPL(__imp__sub_82C09500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// addi r11,r11,3332
	ctx.r11.s64 = ctx.r11.s64 + 3332;
	// stw r11,29216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09514"))) PPC_WEAK_FUNC(sub_82C09514);
PPC_FUNC_IMPL(__imp__sub_82C09514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09518"))) PPC_WEAK_FUNC(sub_82C09518);
PPC_FUNC_IMPL(__imp__sub_82C09518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// addi r11,r11,3332
	ctx.r11.s64 = ctx.r11.s64 + 3332;
	// stw r11,29224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0952C"))) PPC_WEAK_FUNC(sub_82C0952C);
PPC_FUNC_IMPL(__imp__sub_82C0952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09530"))) PPC_WEAK_FUNC(sub_82C09530);
PPC_FUNC_IMPL(__imp__sub_82C09530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,16684
	ctx.r3.s64 = ctx.r11.s64 + 16684;
	// b 0x82164308
	sub_82164308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0953C"))) PPC_WEAK_FUNC(sub_82C0953C);
PPC_FUNC_IMPL(__imp__sub_82C0953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09540"))) PPC_WEAK_FUNC(sub_82C09540);
PPC_FUNC_IMPL(__imp__sub_82C09540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09544"))) PPC_WEAK_FUNC(sub_82C09544);
PPC_FUNC_IMPL(__imp__sub_82C09544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09548"))) PPC_WEAK_FUNC(sub_82C09548);
PPC_FUNC_IMPL(__imp__sub_82C09548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0954C"))) PPC_WEAK_FUNC(sub_82C0954C);
PPC_FUNC_IMPL(__imp__sub_82C0954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09550"))) PPC_WEAK_FUNC(sub_82C09550);
PPC_FUNC_IMPL(__imp__sub_82C09550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C09558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r31,r11,-27872
	ctx.r31.s64 = ctx.r11.s64 + -27872;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-32536
	ctx.r3.s64 = ctx.r11.s64 + -32536;
	// bl 0x82169190
	ctx.lr = 0x82C09570;
	sub_82169190(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,-32548
	ctx.r30.s64 = ctx.r11.s64 + -32548;
loc_82C0957C:
	// addi r30,r30,-60
	ctx.r30.s64 = ctx.r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82167d58
	ctx.lr = 0x82C09588;
	sub_82167D58(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82c0957c
	if (!ctx.cr0.lt) goto loc_82C0957C;
	// addi r3,r31,16396
	ctx.r3.s64 = ctx.r31.s64 + 16396;
	// bl 0x82165208
	ctx.lr = 0x82C09598;
	sub_82165208(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82165208
	ctx.lr = 0x82C095A0;
	sub_82165208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C095A8"))) PPC_WEAK_FUNC(sub_82C095A8);
PPC_FUNC_IMPL(__imp__sub_82C095A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C095AC"))) PPC_WEAK_FUNC(sub_82C095AC);
PPC_FUNC_IMPL(__imp__sub_82C095AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C095B0"))) PPC_WEAK_FUNC(sub_82C095B0);
PPC_FUNC_IMPL(__imp__sub_82C095B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// b 0x82165208
	sub_82165208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C095BC"))) PPC_WEAK_FUNC(sub_82C095BC);
PPC_FUNC_IMPL(__imp__sub_82C095BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C095C0"))) PPC_WEAK_FUNC(sub_82C095C0);
PPC_FUNC_IMPL(__imp__sub_82C095C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C095C4"))) PPC_WEAK_FUNC(sub_82C095C4);
PPC_FUNC_IMPL(__imp__sub_82C095C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C095C8"))) PPC_WEAK_FUNC(sub_82C095C8);
PPC_FUNC_IMPL(__imp__sub_82C095C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C095CC"))) PPC_WEAK_FUNC(sub_82C095CC);
PPC_FUNC_IMPL(__imp__sub_82C095CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C095D0"))) PPC_WEAK_FUNC(sub_82C095D0);
PPC_FUNC_IMPL(__imp__sub_82C095D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// stw r11,-28884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C095E4"))) PPC_WEAK_FUNC(sub_82C095E4);
PPC_FUNC_IMPL(__imp__sub_82C095E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C095E8"))) PPC_WEAK_FUNC(sub_82C095E8);
PPC_FUNC_IMPL(__imp__sub_82C095E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// stw r11,29504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C095FC"))) PPC_WEAK_FUNC(sub_82C095FC);
PPC_FUNC_IMPL(__imp__sub_82C095FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09600"))) PPC_WEAK_FUNC(sub_82C09600);
PPC_FUNC_IMPL(__imp__sub_82C09600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// stw r11,29536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09614"))) PPC_WEAK_FUNC(sub_82C09614);
PPC_FUNC_IMPL(__imp__sub_82C09614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09618"))) PPC_WEAK_FUNC(sub_82C09618);
PPC_FUNC_IMPL(__imp__sub_82C09618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,-4264
	ctx.r3.s64 = ctx.r11.s64 + -4264;
	// b 0x82492d68
	sub_82492D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09624"))) PPC_WEAK_FUNC(sub_82C09624);
PPC_FUNC_IMPL(__imp__sub_82C09624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09628"))) PPC_WEAK_FUNC(sub_82C09628);
PPC_FUNC_IMPL(__imp__sub_82C09628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,-4256
	ctx.r3.s64 = ctx.r11.s64 + -4256;
	// b 0x82492d68
	sub_82492D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09634"))) PPC_WEAK_FUNC(sub_82C09634);
PPC_FUNC_IMPL(__imp__sub_82C09634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09638"))) PPC_WEAK_FUNC(sub_82C09638);
PPC_FUNC_IMPL(__imp__sub_82C09638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,-4248
	ctx.r3.s64 = ctx.r11.s64 + -4248;
	// b 0x82492d68
	sub_82492D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09644"))) PPC_WEAK_FUNC(sub_82C09644);
PPC_FUNC_IMPL(__imp__sub_82C09644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09648"))) PPC_WEAK_FUNC(sub_82C09648);
PPC_FUNC_IMPL(__imp__sub_82C09648) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4184
	ctx.r10.s64 = ctx.r10.s64 + -4184;
	// stw r11,2052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0965C"))) PPC_WEAK_FUNC(sub_82C0965C);
PPC_FUNC_IMPL(__imp__sub_82C0965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09660"))) PPC_WEAK_FUNC(sub_82C09660);
PPC_FUNC_IMPL(__imp__sub_82C09660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// addi r11,r11,23028
	ctx.r11.s64 = ctx.r11.s64 + 23028;
	// stw r11,8976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09674"))) PPC_WEAK_FUNC(sub_82C09674);
PPC_FUNC_IMPL(__imp__sub_82C09674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09678"))) PPC_WEAK_FUNC(sub_82C09678);
PPC_FUNC_IMPL(__imp__sub_82C09678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r11,r11,-652
	ctx.r11.s64 = ctx.r11.s64 + -652;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x82253cd8
	sub_82253CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09688"))) PPC_WEAK_FUNC(sub_82C09688);
PPC_FUNC_IMPL(__imp__sub_82C09688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0968C"))) PPC_WEAK_FUNC(sub_82C0968C);
PPC_FUNC_IMPL(__imp__sub_82C0968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09690"))) PPC_WEAK_FUNC(sub_82C09690);
PPC_FUNC_IMPL(__imp__sub_82C09690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r3,r11,-32604
	ctx.r3.s64 = ctx.r11.s64 + -32604;
	// b 0x82276e70
	sub_82276E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0969C"))) PPC_WEAK_FUNC(sub_82C0969C);
PPC_FUNC_IMPL(__imp__sub_82C0969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C096A0"))) PPC_WEAK_FUNC(sub_82C096A0);
PPC_FUNC_IMPL(__imp__sub_82C096A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// b 0x82297790
	sub_82297790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C096AC"))) PPC_WEAK_FUNC(sub_82C096AC);
PPC_FUNC_IMPL(__imp__sub_82C096AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C096B0"))) PPC_WEAK_FUNC(sub_82C096B0);
PPC_FUNC_IMPL(__imp__sub_82C096B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// b 0x822b45a8
	sub_822B45A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C096BC"))) PPC_WEAK_FUNC(sub_82C096BC);
PPC_FUNC_IMPL(__imp__sub_82C096BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

