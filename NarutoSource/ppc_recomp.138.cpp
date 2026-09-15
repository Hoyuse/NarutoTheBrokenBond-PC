#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8282B388"))) PPC_WEAK_FUNC(sub_8282B388);
PPC_FUNC_IMPL(__imp__sub_8282B388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,71
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 71, ctx.xer);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282b464
	if (ctx.cr6.eq) goto loc_8282B464;
	// cmpwi cr6,r5,65
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 65, ctx.xer);
	// beq cr6,0x8282b44c
	if (ctx.cr6.eq) goto loc_8282B44C;
	// cmpwi cr6,r5,68
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 68, ctx.xer);
	// beq cr6,0x8282b424
	if (ctx.cr6.eq) goto loc_8282B424;
	// cmpwi cr6,r5,77
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 77, ctx.xer);
	// beq cr6,0x8282b3fc
	if (ctx.cr6.eq) goto loc_8282B3FC;
	// cmpwi cr6,r5,74
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 74, ctx.xer);
	// beq cr6,0x8282b3d4
	if (ctx.cr6.eq) goto loc_8282B3D4;
	// cmpwi cr6,r5,46
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 46, ctx.xer);
	// beq cr6,0x8282b4a8
	if (ctx.cr6.eq) goto loc_8282B4A8;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x8282b48c
	goto loc_8282B48C;
loc_8282B3D4:
	// lwz r9,13108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13108);
	// addi r10,r11,13104
	ctx.r10.s64 = ctx.r11.s64 + 13104;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r8,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r8.u32);
	// b 0x8282b48c
	goto loc_8282B48C;
loc_8282B3FC:
	// lwz r9,13108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13108);
	// addi r10,r11,13104
	ctx.r10.s64 = ctx.r11.s64 + 13104;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r8,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r8.u32);
	// b 0x8282b48c
	goto loc_8282B48C;
loc_8282B424:
	// lwz r9,13108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13108);
	// addi r10,r11,13104
	ctx.r10.s64 = ctx.r11.s64 + 13104;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r8,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r8.u32);
	// b 0x8282b48c
	goto loc_8282B48C;
loc_8282B44C:
	// lwz r9,21248(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21248);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// b 0x8282b478
	goto loc_8282B478;
loc_8282B464:
	// lwz r9,21248(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21248);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_8282B478:
	// addi r10,r11,21244
	ctx.r10.s64 = ctx.r11.s64 + 21244;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r5,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r3,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r3.u32);
loc_8282B48C:
	// lwz r10,21656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8282b4dc
	if (!ctx.cr6.gt) goto loc_8282B4DC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r8.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_8282B4A8:
	// lwz r10,22844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r10,r10,4271
	ctx.r10.s64 = ctx.r10.s64 + 4271;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8282b4e0
	if (!ctx.cr6.eq) goto loc_8282B4E0;
	// lwz r10,21656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21656);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r10.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282b4e0
	if (!ctx.cr6.eq) goto loc_8282B4E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8282B4DC:
	// stw r8,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r8.u32);
loc_8282B4E0:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282B4E8"))) PPC_WEAK_FUNC(sub_8282B4E8);
PPC_FUNC_IMPL(__imp__sub_8282B4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282B4F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8282b760
	if (ctx.cr6.eq) goto loc_8282B760;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8282b630
	if (ctx.cr6.eq) goto loc_8282B630;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8282b57c
	if (ctx.cr6.eq) goto loc_8282B57C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,7948
	ctx.r3.s64 = ctx.r11.s64 + 7948;
	// bl 0x82803118
	ctx.lr = 0x8282B560;
	sub_82803118(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,7856
	ctx.r4.s64 = ctx.r10.s64 + 7856;
	// bl 0x82803078
	ctx.lr = 0x8282B56C;
	sub_82803078(ctx, base);
	// lwz r4,23292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23292);
	// bl 0x82803118
	ctx.lr = 0x8282B574;
	sub_82803118(ctx, base);
loc_8282B574:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8282b8a0
	goto loc_8282B8A0;
loc_8282B57C:
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8282b624
	if (ctx.cr6.eq) goto loc_8282B624;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// beq cr6,0x8282b60c
	if (ctx.cr6.eq) goto loc_8282B60C;
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x8282b5f4
	if (ctx.cr6.eq) goto loc_8282B5F4;
	// cmpwi cr6,r5,114
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 114, ctx.xer);
	// beq cr6,0x8282b5dc
	if (ctx.cr6.eq) goto loc_8282B5DC;
	// cmpwi cr6,r5,101
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 101, ctx.xer);
	// beq cr6,0x8282b5c4
	if (ctx.cr6.eq) goto loc_8282B5C4;
	// cmpwi cr6,r5,116
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 116, ctx.xer);
	// bne cr6,0x8282b574
	if (!ctx.cr6.eq) goto loc_8282B574;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,22296
	ctx.r11.s64 = ctx.r31.s64 + 22296;
	// lwz r9,22300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22300);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B5C4:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,22296
	ctx.r11.s64 = ctx.r31.s64 + 22296;
	// lwz r9,22300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22300);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B5DC:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,22296
	ctx.r11.s64 = ctx.r31.s64 + 22296;
	// lwz r9,22300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22300);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B5F4:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,22296
	ctx.r11.s64 = ctx.r31.s64 + 22296;
	// lwz r9,22300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22300);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B60C:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,22296
	ctx.r11.s64 = ctx.r31.s64 + 22296;
	// lwz r9,22300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22300);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B624:
	// lwz r9,22300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22300);
	// addi r11,r31,22296
	ctx.r11.s64 = ctx.r31.s64 + 22296;
	// b 0x8282b884
	goto loc_8282B884;
loc_8282B630:
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8282b754
	if (ctx.cr6.eq) goto loc_8282B754;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// beq cr6,0x8282b73c
	if (ctx.cr6.eq) goto loc_8282B73C;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// beq cr6,0x8282b724
	if (ctx.cr6.eq) goto loc_8282B724;
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x8282b724
	if (ctx.cr6.eq) goto loc_8282B724;
	// cmpwi cr6,r5,114
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 114, ctx.xer);
	// beq cr6,0x8282b70c
	if (ctx.cr6.eq) goto loc_8282B70C;
	// cmpwi cr6,r5,101
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 101, ctx.xer);
	// beq cr6,0x8282b6f4
	if (ctx.cr6.eq) goto loc_8282B6F4;
	// cmpwi cr6,r5,116
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 116, ctx.xer);
	// beq cr6,0x8282b6dc
	if (ctx.cr6.eq) goto loc_8282B6DC;
	// cmpwi cr6,r5,110
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 110, ctx.xer);
	// beq cr6,0x8282b6d0
	if (ctx.cr6.eq) goto loc_8282B6D0;
	// cmpwi cr6,r5,109
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 109, ctx.xer);
	// beq cr6,0x8282b6b8
	if (ctx.cr6.eq) goto loc_8282B6B8;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// beq cr6,0x8282b6a0
	if (ctx.cr6.eq) goto loc_8282B6A0;
	// cmpwi cr6,r5,111
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 111, ctx.xer);
	// bne cr6,0x8282b574
	if (!ctx.cr6.eq) goto loc_8282B574;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,15452
	ctx.r11.s64 = ctx.r31.s64 + 15452;
	// lwz r9,15456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B6A0:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,15452
	ctx.r11.s64 = ctx.r31.s64 + 15452;
	// lwz r9,15456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B6B8:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,15452
	ctx.r11.s64 = ctx.r31.s64 + 15452;
	// lwz r9,15456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B6D0:
	// lwz r9,15456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// addi r11,r31,15452
	ctx.r11.s64 = ctx.r31.s64 + 15452;
	// b 0x8282b884
	goto loc_8282B884;
loc_8282B6DC:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,20204
	ctx.r11.s64 = ctx.r31.s64 + 20204;
	// lwz r9,20208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B6F4:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,20204
	ctx.r11.s64 = ctx.r31.s64 + 20204;
	// lwz r9,20208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B70C:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,20204
	ctx.r11.s64 = ctx.r31.s64 + 20204;
	// lwz r9,20208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B724:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,20204
	ctx.r11.s64 = ctx.r31.s64 + 20204;
	// lwz r9,20208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B73C:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,20204
	ctx.r11.s64 = ctx.r31.s64 + 20204;
	// lwz r9,20208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B754:
	// lwz r9,20208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20208);
	// addi r11,r31,20204
	ctx.r11.s64 = ctx.r31.s64 + 20204;
	// b 0x8282b884
	goto loc_8282B884;
loc_8282B760:
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8282b87c
	if (ctx.cr6.eq) goto loc_8282B87C;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// beq cr6,0x8282b864
	if (ctx.cr6.eq) goto loc_8282B864;
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x8282b84c
	if (ctx.cr6.eq) goto loc_8282B84C;
	// cmpwi cr6,r5,114
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 114, ctx.xer);
	// beq cr6,0x8282b834
	if (ctx.cr6.eq) goto loc_8282B834;
	// cmpwi cr6,r5,101
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 101, ctx.xer);
	// beq cr6,0x8282b81c
	if (ctx.cr6.eq) goto loc_8282B81C;
	// cmpwi cr6,r5,116
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 116, ctx.xer);
	// beq cr6,0x8282b804
	if (ctx.cr6.eq) goto loc_8282B804;
	// cmpwi cr6,r5,110
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 110, ctx.xer);
	// beq cr6,0x8282b7f8
	if (ctx.cr6.eq) goto loc_8282B7F8;
	// cmpwi cr6,r5,109
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 109, ctx.xer);
	// beq cr6,0x8282b7e0
	if (ctx.cr6.eq) goto loc_8282B7E0;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// beq cr6,0x8282b7c8
	if (ctx.cr6.eq) goto loc_8282B7C8;
	// cmpwi cr6,r5,111
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 111, ctx.xer);
	// bne cr6,0x8282b574
	if (!ctx.cr6.eq) goto loc_8282B574;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,13796
	ctx.r11.s64 = ctx.r31.s64 + 13796;
	// lwz r9,13800(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13800);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B7C8:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,13796
	ctx.r11.s64 = ctx.r31.s64 + 13796;
	// lwz r9,13800(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13800);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B7E0:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,13796
	ctx.r11.s64 = ctx.r31.s64 + 13796;
	// lwz r9,13800(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13800);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B7F8:
	// lwz r9,13800(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13800);
	// addi r11,r31,13796
	ctx.r11.s64 = ctx.r31.s64 + 13796;
	// b 0x8282b884
	goto loc_8282B884;
loc_8282B804:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,18044
	ctx.r11.s64 = ctx.r31.s64 + 18044;
	// lwz r9,18048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18048);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B81C:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,18044
	ctx.r11.s64 = ctx.r31.s64 + 18044;
	// lwz r9,18048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18048);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B834:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,18044
	ctx.r11.s64 = ctx.r31.s64 + 18044;
	// lwz r9,18048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18048);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B84C:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,18044
	ctx.r11.s64 = ctx.r31.s64 + 18044;
	// lwz r9,18048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18048);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B864:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,18044
	ctx.r11.s64 = ctx.r31.s64 + 18044;
	// lwz r9,18048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18048);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282b890
	goto loc_8282B890;
loc_8282B87C:
	// lwz r9,18048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18048);
	// addi r11,r31,18044
	ctx.r11.s64 = ctx.r31.s64 + 18044;
loc_8282B884:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
loc_8282B890:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8282B8A0:
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B8BC"))) PPC_WEAK_FUNC(sub_8282B8BC);
PPC_FUNC_IMPL(__imp__sub_8282B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282B8C0"))) PPC_WEAK_FUNC(sub_8282B8C0);
PPC_FUNC_IMPL(__imp__sub_8282B8C0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,44
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 44, ctx.xer);
	// beq cr6,0x8282b924
	if (ctx.cr6.eq) goto loc_8282B924;
	// cmpwi cr6,r5,59
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 59, ctx.xer);
	// beq cr6,0x8282b918
	if (ctx.cr6.eq) goto loc_8282B918;
	// cmpwi cr6,r5,43
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 43, ctx.xer);
	// beq cr6,0x8282b90c
	if (ctx.cr6.eq) goto loc_8282B90C;
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// beq cr6,0x8282b900
	if (ctx.cr6.eq) goto loc_8282B900;
	// cmpwi cr6,r5,124
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 124, ctx.xer);
	// beq cr6,0x8282b8f4
	if (ctx.cr6.eq) goto loc_8282B8F4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282B8F4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282B900:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282B90C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282B918:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282B924:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282B930"))) PPC_WEAK_FUNC(sub_8282B930);
PPC_FUNC_IMPL(__imp__sub_8282B930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282B938;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r25,13192(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8282b9b4
	if (ctx.cr6.eq) goto loc_8282B9B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,7908
	ctx.r3.s64 = ctx.r11.s64 + 7908;
	// bl 0x82803118
	ctx.lr = 0x8282B998;
	sub_82803118(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,7856
	ctx.r4.s64 = ctx.r10.s64 + 7856;
	// bl 0x82803078
	ctx.lr = 0x8282B9A4;
	sub_82803078(ctx, base);
	// lwz r4,23292(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23292);
	// bl 0x82803118
	ctx.lr = 0x8282B9AC;
	sub_82803118(ctx, base);
loc_8282B9AC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8282b9d4
	goto loc_8282B9D4;
loc_8282B9B4:
	// cmpwi cr6,r5,116
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 116, ctx.xer);
	// bne cr6,0x8282b9ac
	if (!ctx.cr6.eq) goto loc_8282B9AC;
	// lwz r11,22844(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22844);
	// addi r11,r11,3090
	ctx.r11.s64 = ctx.r11.s64 + 3090;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u32);
loc_8282B9D4:
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r25,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B9F0"))) PPC_WEAK_FUNC(sub_8282B9F0);
PPC_FUNC_IMPL(__imp__sub_8282B9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282B9F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8282bbd0
	if (ctx.cr6.eq) goto loc_8282BBD0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8282bb5c
	if (ctx.cr6.eq) goto loc_8282BB5C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8282bb08
	if (ctx.cr6.eq) goto loc_8282BB08;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8282ba94
	if (ctx.cr6.eq) goto loc_8282BA94;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8282ba8c
	if (ctx.cr6.eq) goto loc_8282BA8C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,7868
	ctx.r3.s64 = ctx.r11.s64 + 7868;
	// bl 0x82803118
	ctx.lr = 0x8282BA78;
	sub_82803118(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,7856
	ctx.r4.s64 = ctx.r10.s64 + 7856;
	// bl 0x82803078
	ctx.lr = 0x8282BA84;
	sub_82803078(ctx, base);
	// lwz r4,23292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23292);
	// bl 0x82803118
	ctx.lr = 0x8282BA8C;
	sub_82803118(ctx, base);
loc_8282BA8C:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8282bc3c
	goto loc_8282BC3C;
loc_8282BA94:
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8282bafc
	if (ctx.cr6.eq) goto loc_8282BAFC;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// beq cr6,0x8282bae4
	if (ctx.cr6.eq) goto loc_8282BAE4;
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x8282bacc
	if (ctx.cr6.eq) goto loc_8282BACC;
	// cmpwi cr6,r5,114
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 114, ctx.xer);
	// bne cr6,0x8282ba8c
	if (!ctx.cr6.eq) goto loc_8282BA8C;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,16668
	ctx.r11.s64 = ctx.r31.s64 + 16668;
	// lwz r9,16672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16672);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BACC:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,16668
	ctx.r11.s64 = ctx.r31.s64 + 16668;
	// lwz r9,16672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16672);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BAE4:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,16668
	ctx.r11.s64 = ctx.r31.s64 + 16668;
	// lwz r9,16672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16672);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BAFC:
	// lwz r9,16672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16672);
	// addi r11,r31,16668
	ctx.r11.s64 = ctx.r31.s64 + 16668;
	// b 0x8282bc20
	goto loc_8282BC20;
loc_8282BB08:
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8282bb50
	if (ctx.cr6.eq) goto loc_8282BB50;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// beq cr6,0x8282bb38
	if (ctx.cr6.eq) goto loc_8282BB38;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bne cr6,0x8282ba8c
	if (!ctx.cr6.eq) goto loc_8282BA8C;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,16420
	ctx.r11.s64 = ctx.r31.s64 + 16420;
	// lwz r9,16424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BB38:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,16420
	ctx.r11.s64 = ctx.r31.s64 + 16420;
	// lwz r9,16424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BB50:
	// lwz r9,16424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// addi r11,r31,16420
	ctx.r11.s64 = ctx.r31.s64 + 16420;
	// b 0x8282bc20
	goto loc_8282BC20;
loc_8282BB5C:
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8282bbc4
	if (ctx.cr6.eq) goto loc_8282BBC4;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// beq cr6,0x8282bbac
	if (ctx.cr6.eq) goto loc_8282BBAC;
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x8282bb94
	if (ctx.cr6.eq) goto loc_8282BB94;
	// cmpwi cr6,r5,114
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 114, ctx.xer);
	// bne cr6,0x8282ba8c
	if (!ctx.cr6.eq) goto loc_8282BA8C;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,14472
	ctx.r11.s64 = ctx.r31.s64 + 14472;
	// lwz r9,14476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BB94:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,14472
	ctx.r11.s64 = ctx.r31.s64 + 14472;
	// lwz r9,14476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BBAC:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,14472
	ctx.r11.s64 = ctx.r31.s64 + 14472;
	// lwz r9,14476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BBC4:
	// lwz r9,14476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// addi r11,r31,14472
	ctx.r11.s64 = ctx.r31.s64 + 14472;
	// b 0x8282bc20
	goto loc_8282BC20;
loc_8282BBD0:
	// cmpwi cr6,r5,104
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 104, ctx.xer);
	// beq cr6,0x8282bc18
	if (ctx.cr6.eq) goto loc_8282BC18;
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x8282bc00
	if (ctx.cr6.eq) goto loc_8282BC00;
	// cmpwi cr6,r5,97
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 97, ctx.xer);
	// bne cr6,0x8282ba8c
	if (!ctx.cr6.eq) goto loc_8282BA8C;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,19856
	ctx.r11.s64 = ctx.r31.s64 + 19856;
	// lwz r9,19860(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19860);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BC00:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// addi r11,r31,19856
	ctx.r11.s64 = ctx.r31.s64 + 19856;
	// lwz r9,19860(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19860);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// b 0x8282bc2c
	goto loc_8282BC2C;
loc_8282BC18:
	// lwz r9,19860(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19860);
	// addi r11,r31,19856
	ctx.r11.s64 = ctx.r31.s64 + 19856;
loc_8282BC20:
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
loc_8282BC2C:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8282BC3C:
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BC58"))) PPC_WEAK_FUNC(sub_8282BC58);
PPC_FUNC_IMPL(__imp__sub_8282BC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,68
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 68, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282bcdc
	if (ctx.cr6.eq) goto loc_8282BCDC;
	// cmpwi cr6,r5,77
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 77, ctx.xer);
	// beq cr6,0x8282bcb8
	if (ctx.cr6.eq) goto loc_8282BCB8;
	// cmpwi cr6,r5,74
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 74, ctx.xer);
	// beq cr6,0x8282bc94
	if (ctx.cr6.eq) goto loc_8282BC94;
	// cmpwi cr6,r5,46
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 46, ctx.xer);
	// beq cr6,0x8282bd20
	if (ctx.cr6.eq) goto loc_8282BD20;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8282bd04
	goto loc_8282BD04;
loc_8282BC94:
	// lwz r9,22844(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r10,r11,12440
	ctx.r10.s64 = ctx.r11.s64 + 12440;
	// lwz r6,12444(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12444);
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// b 0x8282bd04
	goto loc_8282BD04;
loc_8282BCB8:
	// lwz r9,22844(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r10,r11,12440
	ctx.r10.s64 = ctx.r11.s64 + 12440;
	// lwz r6,12444(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12444);
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// b 0x8282bd04
	goto loc_8282BD04;
loc_8282BCDC:
	// lwz r9,12444(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12444);
	// addi r10,r11,12440
	ctx.r10.s64 = ctx.r11.s64 + 12440;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r3,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r3.u32);
loc_8282BD04:
	// lwz r10,21656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8282bd54
	if (!ctx.cr6.gt) goto loc_8282BD54;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r7.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8282BD20:
	// lwz r10,22844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r10,r10,4695
	ctx.r10.s64 = ctx.r10.s64 + 4695;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8282bd58
	if (!ctx.cr6.eq) goto loc_8282BD58;
	// lwz r10,21656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21656);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r10.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282bd58
	if (!ctx.cr6.eq) goto loc_8282BD58;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8282BD54:
	// stw r7,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r7.u32);
loc_8282BD58:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282BD60"))) PPC_WEAK_FUNC(sub_8282BD60);
PPC_FUNC_IMPL(__imp__sub_8282BD60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282bd84
	if (ctx.cr6.eq) goto loc_8282BD84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282BD84:
	// lwz r10,22844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addi r7,r10,5279
	ctx.r7.s64 = ctx.r10.s64 + 5279;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r9,23300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23300, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282BDA4"))) PPC_WEAK_FUNC(sub_8282BDA4);
PPC_FUNC_IMPL(__imp__sub_8282BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282BDA8"))) PPC_WEAK_FUNC(sub_8282BDA8);
PPC_FUNC_IMPL(__imp__sub_8282BDA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,65
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 65, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8282be2c
	if (ctx.cr6.eq) goto loc_8282BE2C;
	// cmpwi cr6,r5,73
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 73, ctx.xer);
	// beq cr6,0x8282be24
	if (ctx.cr6.eq) goto loc_8282BE24;
	// cmpwi cr6,r5,68
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 68, ctx.xer);
	// beq cr6,0x8282be1c
	if (ctx.cr6.eq) goto loc_8282BE1C;
	// cmpwi cr6,r5,71
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 71, ctx.xer);
	// beq cr6,0x8282be14
	if (ctx.cr6.eq) goto loc_8282BE14;
	// cmpwi cr6,r5,77
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 77, ctx.xer);
	// beq cr6,0x8282be0c
	if (ctx.cr6.eq) goto loc_8282BE0C;
	// cmpwi cr6,r5,87
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 87, ctx.xer);
	// beq cr6,0x8282be04
	if (ctx.cr6.eq) goto loc_8282BE04;
	// cmpwi cr6,r5,74
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 74, ctx.xer);
	// beq cr6,0x8282bdfc
	if (ctx.cr6.eq) goto loc_8282BDFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8282be30
	goto loc_8282BE30;
loc_8282BDFC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8282be30
	goto loc_8282BE30;
loc_8282BE04:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8282be30
	goto loc_8282BE30;
loc_8282BE0C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8282be30
	goto loc_8282BE30;
loc_8282BE14:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8282be30
	goto loc_8282BE30;
loc_8282BE1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8282be30
	goto loc_8282BE30;
loc_8282BE24:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8282be30
	goto loc_8282BE30;
loc_8282BE2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8282BE30:
	// lwz r10,22844(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22844);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// addi r10,r10,5714
	ctx.r10.s64 = ctx.r10.s64 + 5714;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282BE48"))) PPC_WEAK_FUNC(sub_8282BE48);
PPC_FUNC_IMPL(__imp__sub_8282BE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282BE50;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// bne cr6,0x8282bf30
	if (!ctx.cr6.eq) goto loc_8282BF30;
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8282bf08
	if (ctx.cr6.eq) goto loc_8282BF08;
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// beq cr6,0x8282bee0
	if (ctx.cr6.eq) goto loc_8282BEE0;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bne cr6,0x8282bf30
	if (!ctx.cr6.eq) goto loc_8282BF30;
	// lwz r8,20696(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20696);
	// addi r11,r31,20692
	ctx.r11.s64 = ctx.r31.s64 + 20692;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8282bf58
	goto loc_8282BF58;
loc_8282BEE0:
	// lwz r8,20696(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20696);
	// addi r11,r31,20692
	ctx.r11.s64 = ctx.r31.s64 + 20692;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8282bf58
	goto loc_8282BF58;
loc_8282BF08:
	// lwz r8,20696(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20696);
	// addi r11,r31,20692
	ctx.r11.s64 = ctx.r31.s64 + 20692;
	// lwz r10,22844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8282bf58
	goto loc_8282BF58;
loc_8282BF30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,7816
	ctx.r3.s64 = ctx.r11.s64 + 7816;
	// bl 0x82803118
	ctx.lr = 0x8282BF40;
	sub_82803118(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,7856
	ctx.r4.s64 = ctx.r10.s64 + 7856;
	// bl 0x82803078
	ctx.lr = 0x8282BF4C;
	sub_82803078(ctx, base);
	// lwz r4,23292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23292);
	// bl 0x82803118
	ctx.lr = 0x8282BF54;
	sub_82803118(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
loc_8282BF58:
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BF74"))) PPC_WEAK_FUNC(sub_8282BF74);
PPC_FUNC_IMPL(__imp__sub_8282BF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282BF78"))) PPC_WEAK_FUNC(sub_8282BF78);
PPC_FUNC_IMPL(__imp__sub_8282BF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282bfb8
	if (ctx.cr6.eq) goto loc_8282BFB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282bfa8
	if (ctx.cr6.eq) goto loc_8282BFA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282bfc0
	if (!ctx.cr6.eq) goto loc_8282BFC0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282bfc0
	goto loc_8282BFC0;
loc_8282BFA8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282bfc0
	goto loc_8282BFC0;
loc_8282BFB8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282BFC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8279ddc8
	sub_8279DDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BFFC"))) PPC_WEAK_FUNC(sub_8282BFFC);
PPC_FUNC_IMPL(__imp__sub_8282BFFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C000"))) PPC_WEAK_FUNC(sub_8282C000);
PPC_FUNC_IMPL(__imp__sub_8282C000) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-29532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,11700(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11700);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8282c064
	if (ctx.cr6.eq) goto loc_8282C064;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8282c05c
	if (ctx.cr6.eq) goto loc_8282C05C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8282c054
	if (ctx.cr6.eq) goto loc_8282C054;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8282c068
	goto loc_8282C068;
loc_8282C054:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8282c068
	goto loc_8282C068;
loc_8282C05C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8282c068
	goto loc_8282C068;
loc_8282C064:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8282C068:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282c0ac
	if (ctx.cr6.eq) goto loc_8282C0AC;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8282c0ac
	if (ctx.cr6.eq) goto loc_8282C0AC;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8282c0ac
	if (ctx.cr6.eq) goto loc_8282C0AC;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282c0ac
	if (ctx.cr6.eq) goto loc_8282C0AC;
	// lhz r10,2496(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8282c11c
	if (ctx.cr6.gt) goto loc_8282C11C;
loc_8282C0AC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8282c0d8
	if (ctx.cr6.eq) goto loc_8282C0D8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8282c0d4
	if (ctx.cr6.eq) goto loc_8282C0D4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8282c0cc
	if (ctx.cr6.eq) goto loc_8282C0CC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8282c0d8
	goto loc_8282C0D8;
loc_8282C0CC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282c0d8
	goto loc_8282C0D8;
loc_8282C0D4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8282C0D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282c114
	if (ctx.cr6.eq) goto loc_8282C114;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8282c114
	if (ctx.cr6.eq) goto loc_8282C114;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282c114
	if (ctx.cr6.eq) goto loc_8282C114;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282c114
	if (ctx.cr6.eq) goto loc_8282C114;
	// bl 0x8279dd48
	ctx.lr = 0x8282C114;
	sub_8279DD48(ctx, base);
loc_8282C114:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8282c154
	goto loc_8282C154;
loc_8282C11C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8282c144
	if (ctx.cr6.eq) goto loc_8282C144;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8282c13c
	if (ctx.cr6.eq) goto loc_8282C13C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8282c148
	if (!ctx.cr6.eq) goto loc_8282C148;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8282c148
	goto loc_8282C148;
loc_8282C13C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x8282c148
	goto loc_8282C148;
loc_8282C144:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8282C148:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82801678
	ctx.lr = 0x8282C150;
	sub_82801678(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8282C154:
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

__attribute__((alias("__imp__sub_8282C16C"))) PPC_WEAK_FUNC(sub_8282C16C);
PPC_FUNC_IMPL(__imp__sub_8282C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C170"))) PPC_WEAK_FUNC(sub_8282C170);
PPC_FUNC_IMPL(__imp__sub_8282C170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,21004(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21004);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C188"))) PPC_WEAK_FUNC(sub_8282C188);
PPC_FUNC_IMPL(__imp__sub_8282C188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,12344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12344, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C1A0"))) PPC_WEAK_FUNC(sub_8282C1A0);
PPC_FUNC_IMPL(__imp__sub_8282C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282C1A8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,17468(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17468);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282c2a4
	if (ctx.cr6.eq) goto loc_8282C2A4;
	// lwz r11,22844(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22844);
	// addi r10,r11,4369
	ctx.r10.s64 = ctx.r11.s64 + 4369;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282c2a4
	if (!ctx.cr6.eq) goto loc_8282C2A4;
	// addi r11,r11,5714
	ctx.r11.s64 = ctx.r11.s64 + 5714;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x8282c27c
	if (!ctx.cr6.eq) goto loc_8282C27C;
	// lwz r10,17460(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17460);
	// addi r11,r27,15124
	ctx.r11.s64 = ctx.r27.s64 + 15124;
	// lwz r9,15128(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15128);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f31,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8282c27c
	if (!ctx.cr6.gt) goto loc_8282C27C;
	// lwz r10,2096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2096);
	// addi r11,r27,976
	ctx.r11.s64 = ctx.r27.s64 + 976;
	// lwz r9,980(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 980);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,47
	ctx.r8.s64 = ctx.r10.s64 + 47;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82bfc538
	ctx.lr = 0x8282C274;
	sub_82BFC538(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8282c29c
	if (ctx.cr6.gt) goto loc_8282C29C;
loc_8282C27C:
	// lwz r11,22844(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22844);
	// addi r11,r11,5714
	ctx.r11.s64 = ctx.r11.s64 + 5714;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282c29c
	if (ctx.cr6.eq) goto loc_8282C29C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282c2a4
	if (!ctx.cr6.eq) goto loc_8282C2A4;
loc_8282C29C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8282c2a8
	goto loc_8282C2A8;
loc_8282C2A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8282C2A8:
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282C2C8"))) PPC_WEAK_FUNC(sub_8282C2C8);
PPC_FUNC_IMPL(__imp__sub_8282C2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,17460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17460);
	// addi r9,r10,5417
	ctx.r9.s64 = ctx.r10.s64 + 5417;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8282c2f4
	if (ctx.cr6.eq) goto loc_8282C2F4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8282c310
	if (!ctx.cr6.eq) goto loc_8282C310;
loc_8282C2F4:
	// addi r10,r10,4085
	ctx.r10.s64 = ctx.r10.s64 + 4085;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8282c31c
	if (ctx.cr6.eq) goto loc_8282C31C;
loc_8282C310:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282C31C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C328"))) PPC_WEAK_FUNC(sub_8282C328);
PPC_FUNC_IMPL(__imp__sub_8282C328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,14180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14180, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C33C"))) PPC_WEAK_FUNC(sub_8282C33C);
PPC_FUNC_IMPL(__imp__sub_8282C33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C340"))) PPC_WEAK_FUNC(sub_8282C340);
PPC_FUNC_IMPL(__imp__sub_8282C340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8282C348;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282c39c
	if (!ctx.cr6.eq) goto loc_8282C39C;
	// stw r4,21580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21580, ctx.r4.u32);
	// b 0x8282c41c
	goto loc_8282C41C;
loc_8282C39C:
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,6388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6388);
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x8282c3e0
	if (ctx.cr6.eq) goto loc_8282C3E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282c3d8
	if (ctx.cr6.eq) goto loc_8282C3D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8282c3d0
	if (ctx.cr6.eq) goto loc_8282C3D0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8282c3e4
	goto loc_8282C3E4;
loc_8282C3D0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8282c3e4
	goto loc_8282C3E4;
loc_8282C3D8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8282c3e4
	goto loc_8282C3E4;
loc_8282C3E0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8282C3E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282c41c
	if (ctx.cr6.eq) goto loc_8282C41C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282c414
	if (ctx.cr6.eq) goto loc_8282C414;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282c40c
	if (ctx.cr6.eq) goto loc_8282C40C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8282c418
	if (ctx.cr6.eq) goto loc_8282C418;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8282c418
	goto loc_8282C418;
loc_8282C40C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x8282c418
	goto loc_8282C418;
loc_8282C414:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8282C418:
	// bl 0x8282c340
	ctx.lr = 0x8282C41C;
	sub_8282C340(ctx, base);
loc_8282C41C:
	// stw r27,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282C434"))) PPC_WEAK_FUNC(sub_8282C434);
PPC_FUNC_IMPL(__imp__sub_8282C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C438"))) PPC_WEAK_FUNC(sub_8282C438);
PPC_FUNC_IMPL(__imp__sub_8282C438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,4049
	ctx.r10.s64 = ctx.r4.s64 + 4049;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C458"))) PPC_WEAK_FUNC(sub_8282C458);
PPC_FUNC_IMPL(__imp__sub_8282C458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,4049
	ctx.r10.s64 = ctx.r4.s64 + 4049;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C47C"))) PPC_WEAK_FUNC(sub_8282C47C);
PPC_FUNC_IMPL(__imp__sub_8282C47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C480"))) PPC_WEAK_FUNC(sub_8282C480);
PPC_FUNC_IMPL(__imp__sub_8282C480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,4049
	ctx.r10.s64 = ctx.r5.s64 + 4049;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C4A0"))) PPC_WEAK_FUNC(sub_8282C4A0);
PPC_FUNC_IMPL(__imp__sub_8282C4A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282c4c0
	if (!ctx.cr6.eq) goto loc_8282C4C0;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_8282C4C0:
	// lwz r11,6388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6388);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C4CC"))) PPC_WEAK_FUNC(sub_8282C4CC);
PPC_FUNC_IMPL(__imp__sub_8282C4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C4D0"))) PPC_WEAK_FUNC(sub_8282C4D0);
PPC_FUNC_IMPL(__imp__sub_8282C4D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,5779
	ctx.r10.s64 = ctx.r5.s64 + 5779;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C4F0"))) PPC_WEAK_FUNC(sub_8282C4F0);
PPC_FUNC_IMPL(__imp__sub_8282C4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,5779
	ctx.r10.s64 = ctx.r4.s64 + 5779;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stwx r5,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C50C"))) PPC_WEAK_FUNC(sub_8282C50C);
PPC_FUNC_IMPL(__imp__sub_8282C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C510"))) PPC_WEAK_FUNC(sub_8282C510);
PPC_FUNC_IMPL(__imp__sub_8282C510) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C51C"))) PPC_WEAK_FUNC(sub_8282C51C);
PPC_FUNC_IMPL(__imp__sub_8282C51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C520"))) PPC_WEAK_FUNC(sub_8282C520);
PPC_FUNC_IMPL(__imp__sub_8282C520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12740(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12740);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C538"))) PPC_WEAK_FUNC(sub_8282C538);
PPC_FUNC_IMPL(__imp__sub_8282C538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12744(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12744);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C550"))) PPC_WEAK_FUNC(sub_8282C550);
PPC_FUNC_IMPL(__imp__sub_8282C550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,17440(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17440);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C568"))) PPC_WEAK_FUNC(sub_8282C568);
PPC_FUNC_IMPL(__imp__sub_8282C568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,16316(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16316);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C58C"))) PPC_WEAK_FUNC(sub_8282C58C);
PPC_FUNC_IMPL(__imp__sub_8282C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C590"))) PPC_WEAK_FUNC(sub_8282C590);
PPC_FUNC_IMPL(__imp__sub_8282C590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,18940(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18940);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C5A8"))) PPC_WEAK_FUNC(sub_8282C5A8);
PPC_FUNC_IMPL(__imp__sub_8282C5A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,22788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282c5f8
	if (ctx.cr6.eq) goto loc_8282C5F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282c5e0
	if (ctx.cr6.eq) goto loc_8282C5E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282c600
	if (!ctx.cr6.eq) goto loc_8282C600;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// blr 
	return;
loc_8282C5E0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blr 
	return;
loc_8282C5F8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282C600:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C60C"))) PPC_WEAK_FUNC(sub_8282C60C);
PPC_FUNC_IMPL(__imp__sub_8282C60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C610"))) PPC_WEAK_FUNC(sub_8282C610);
PPC_FUNC_IMPL(__imp__sub_8282C610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C614"))) PPC_WEAK_FUNC(sub_8282C614);
PPC_FUNC_IMPL(__imp__sub_8282C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C618"))) PPC_WEAK_FUNC(sub_8282C618);
PPC_FUNC_IMPL(__imp__sub_8282C618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f0,21764(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 21764, temp.u32);
	// stw r11,14420(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14420, ctx.r11.u32);
	// stfs f0,20988(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20988, temp.u32);
	// stw r11,20968(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20968, ctx.r11.u32);
	// stfs f0,14444(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 14444, temp.u32);
	// stw r11,14880(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14880, ctx.r11.u32);
	// stfs f0,21220(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 21220, temp.u32);
	// stw r11,18928(r6)
	PPC_STORE_U32(ctx.r6.u32 + 18928, ctx.r11.u32);
	// stfs f0,12716(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12716, temp.u32);
	// stw r11,18896(r6)
	PPC_STORE_U32(ctx.r6.u32 + 18896, ctx.r11.u32);
	// stfs f0,17452(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 17452, temp.u32);
	// std r11,18912(r6)
	PPC_STORE_U64(ctx.r6.u32 + 18912, ctx.r11.u64);
	// stw r10,12292(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12292, ctx.r10.u32);
	// stw r10,18544(r6)
	PPC_STORE_U32(ctx.r6.u32 + 18544, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C670"))) PPC_WEAK_FUNC(sub_8282C670);
PPC_FUNC_IMPL(__imp__sub_8282C670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r5,r11,6552
	ctx.r5.s64 = ctx.r11.s64 + 6552;
	// lwz r9,6556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,98
	ctx.r7.s64 = ctx.r10.s64 + 98;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282c89c
	if (ctx.cr6.eq) goto loc_8282C89C;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,8300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r10,r11,8296
	ctx.r10.s64 = ctx.r11.s64 + 8296;
	// addi r6,r9,3063
	ctx.r6.s64 = ctx.r9.s64 + 3063;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r4,r9,100
	ctx.r4.s64 = ctx.r9.s64 + 100;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8282c6f0
	if (!ctx.cr6.gt) goto loc_8282C6F0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lfs f0,29744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,100
	ctx.r6.s64 = ctx.r9.s64 + 100;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
loc_8282C6F0:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,101
	ctx.r7.s64 = ctx.r9.s64 + 101;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8282c738
	if (!ctx.cr6.eq) goto loc_8282C738;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r9,3063
	ctx.r7.s64 = ctx.r9.s64 + 3063;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r6,r9,101
	ctx.r6.s64 = ctx.r9.s64 + 101;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// b 0x8282c798
	goto loc_8282C798;
loc_8282C738:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r4,r9,100
	ctx.r4.s64 = ctx.r9.s64 + 100;
	// addi r3,r8,101
	ctx.r3.s64 = ctx.r8.s64 + 101;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8282c798
	if (!ctx.cr6.gt) goto loc_8282C798;
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r4,r9,100
	ctx.r4.s64 = ctx.r9.s64 + 100;
	// addi r3,r8,101
	ctx.r3.s64 = ctx.r8.s64 + 101;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
loc_8282C798:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-30728(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12492(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r7,r7,100
	ctx.r7.s64 = ctx.r7.s64 + 100;
	// addi r6,r6,101
	ctx.r6.s64 = ctx.r6.s64 + 101;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r8,625
	ctx.r31.s64 = ctx.r8.s64 + 625;
	// addi r8,r8,3714
	ctx.r8.s64 = ctx.r8.s64 + 3714;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r10
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfsx f10,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfsx f9,r6,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ld r3,48(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 48);
	// ld r7,104(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 104);
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// mullw r7,r4,r8
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r4,r8,625
	ctx.r4.s64 = ctx.r8.s64 + 625;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// addi r3,r7,100
	ctx.r3.s64 = ctx.r7.s64 + 100;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r8,4638
	ctx.r4.s64 = ctx.r8.s64 + 4638;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
	// fmadds f2,f6,f0,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfsx f2,r3,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// ld r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 48);
	// ld r7,104(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 104);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r3,r8,101
	ctx.r3.s64 = ctx.r8.s64 + 101;
	// addi r8,r9,625
	ctx.r8.s64 = ctx.r9.s64 + 625;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,5028
	ctx.r4.s64 = ctx.r9.s64 + 5028;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmadds f8,f12,f0,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfsx f8,r3,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
loc_8282C89C:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,102
	ctx.r8.s64 = ctx.r10.s64 + 102;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8282c8ec
	if (ctx.cr6.eq) goto loc_8282C8EC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,8300(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r9,r11,8296
	ctx.r9.s64 = ctx.r11.s64 + 8296;
	// lfs f0,2568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r10,3339
	ctx.r7.s64 = ctx.r10.s64 + 3339;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r6,r10,102
	ctx.r6.s64 = ctx.r10.s64 + 102;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f12,r4,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
loc_8282C8EC:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8282c93c
	if (ctx.cr6.eq) goto loc_8282C93C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,8300(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r9,r11,8296
	ctx.r9.s64 = ctx.r11.s64 + 8296;
	// lfs f0,2568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r10,3701
	ctx.r7.s64 = ctx.r10.s64 + 3701;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r6,r10,103
	ctx.r6.s64 = ctx.r10.s64 + 103;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r9
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f12,r5,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
loc_8282C93C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C944"))) PPC_WEAK_FUNC(sub_8282C944);
PPC_FUNC_IMPL(__imp__sub_8282C944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C948"))) PPC_WEAK_FUNC(sub_8282C948);
PPC_FUNC_IMPL(__imp__sub_8282C948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C94C"))) PPC_WEAK_FUNC(sub_8282C94C);
PPC_FUNC_IMPL(__imp__sub_8282C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C950"))) PPC_WEAK_FUNC(sub_8282C950);
PPC_FUNC_IMPL(__imp__sub_8282C950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C954"))) PPC_WEAK_FUNC(sub_8282C954);
PPC_FUNC_IMPL(__imp__sub_8282C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282C958"))) PPC_WEAK_FUNC(sub_8282C958);
PPC_FUNC_IMPL(__imp__sub_8282C958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,6552
	ctx.r9.s64 = ctx.r11.s64 + 6552;
	// lwz r8,6556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// lwz r7,2096(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r6,r10,77
	ctx.r6.s64 = ctx.r10.s64 + 77;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282ca38
	if (ctx.cr6.eq) goto loc_8282CA38;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,8300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// lfs f0,14144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14144);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,8296
	ctx.r10.s64 = ctx.r11.s64 + 8296;
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lfs f13,23248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r6,r8,77
	ctx.r6.s64 = ctx.r8.s64 + 77;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfsx f10,r8,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,2096(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r8,r5,r4
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// addi r3,r8,73
	ctx.r3.s64 = ctx.r8.s64 + 73;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8282c9f0
	if (!ctx.cr6.eq) goto loc_8282C9F0;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lfs f0,29744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8282ca2c
	goto loc_8282CA2C;
loc_8282C9F0:
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r7,r5,r8
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-30832(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r7,73
	ctx.r4.s64 = ctx.r7.s64 + 73;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8282ca38
	if (!ctx.cr6.lt) goto loc_8282CA38;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-29744(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29744);
	ctx.f0.f64 = double(temp.f32);
loc_8282CA2C:
	// addi r5,r8,73
	ctx.r5.s64 = ctx.r8.s64 + 73;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
loc_8282CA38:
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,76
	ctx.r7.s64 = ctx.r10.s64 + 76;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// lfs f0,2568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,8296
	ctx.r10.s64 = ctx.r11.s64 + 8296;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r8,r11,76
	ctx.r8.s64 = ctx.r11.s64 + 76;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f12,r11,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CA80"))) PPC_WEAK_FUNC(sub_8282CA80);
PPC_FUNC_IMPL(__imp__sub_8282CA80) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282cad0
	if (ctx.cr6.eq) goto loc_8282CAD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282cac0
	if (ctx.cr6.eq) goto loc_8282CAC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282cad8
	if (!ctx.cr6.eq) goto loc_8282CAD8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282cad8
	goto loc_8282CAD8;
loc_8282CAC0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282cad8
	goto loc_8282CAD8;
loc_8282CAD0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282CAD8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828023d0
	ctx.lr = 0x8282CAE0;
	sub_828023D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8282cb44
	if (ctx.cr6.eq) goto loc_8282CB44;
	// lwz r8,6476(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6476);
	// addi r11,r31,6472
	ctx.r11.s64 = ctx.r31.s64 + 6472;
	// lwz r9,2096(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r10,6
	ctx.r5.s64 = ctx.r10.s64 + 6;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r5,6476(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6476);
	// lwz r4,2096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// addi r3,r10,6
	ctx.r3.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8282CB44:
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

__attribute__((alias("__imp__sub_8282CB58"))) PPC_WEAK_FUNC(sub_8282CB58);
PPC_FUNC_IMPL(__imp__sub_8282CB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CB5C"))) PPC_WEAK_FUNC(sub_8282CB5C);
PPC_FUNC_IMPL(__imp__sub_8282CB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282CB60"))) PPC_WEAK_FUNC(sub_8282CB60);
PPC_FUNC_IMPL(__imp__sub_8282CB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// addi r10,r11,2152
	ctx.r10.s64 = ctx.r11.s64 + 2152;
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r5,r9,5238
	ctx.r5.s64 = ctx.r9.s64 + 5238;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r3,2156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// addi r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8282cbc8
	if (!ctx.cr6.eq) goto loc_8282CBC8;
	// lwz r8,2680(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// addi r9,r11,2676
	ctx.r9.s64 = ctx.r11.s64 + 2676;
	// lwz r7,2096(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r6,r8,6
	ctx.r6.s64 = ctx.r8.s64 + 6;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
loc_8282CBC8:
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,7
	ctx.r7.s64 = ctx.r8.s64 + 7;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8282cc00
	if (!ctx.cr6.eq) goto loc_8282CC00;
	// lwz r7,2680(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// addi r8,r11,2676
	ctx.r8.s64 = ctx.r11.s64 + 2676;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r6,r9,7
	ctx.r6.s64 = ctx.r9.s64 + 7;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
loc_8282CC00:
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,5
	ctx.r7.s64 = ctx.r8.s64 + 5;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8282cc38
	if (!ctx.cr6.eq) goto loc_8282CC38;
	// lwz r7,2680(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// addi r8,r11,2676
	ctx.r8.s64 = ctx.r11.s64 + 2676;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r6,r9,5
	ctx.r6.s64 = ctx.r9.s64 + 5;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
loc_8282CC38:
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282cc70
	if (ctx.cr6.eq) goto loc_8282CC70;
	// lwz r7,2680(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// addi r8,r11,2676
	ctx.r8.s64 = ctx.r11.s64 + 2676;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
loc_8282CC70:
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,15
	ctx.r7.s64 = ctx.r8.s64 + 15;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8282cca8
	if (!ctx.cr6.eq) goto loc_8282CCA8;
	// lwz r7,2680(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// addi r8,r11,2676
	ctx.r8.s64 = ctx.r11.s64 + 2676;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
loc_8282CCA8:
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,12
	ctx.r7.s64 = ctx.r8.s64 + 12;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,2680(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// addi r11,r11,2676
	ctx.r11.s64 = ctx.r11.s64 + 2676;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CCE4"))) PPC_WEAK_FUNC(sub_8282CCE4);
PPC_FUNC_IMPL(__imp__sub_8282CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282CCE8"))) PPC_WEAK_FUNC(sub_8282CCE8);
PPC_FUNC_IMPL(__imp__sub_8282CCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CCEC"))) PPC_WEAK_FUNC(sub_8282CCEC);
PPC_FUNC_IMPL(__imp__sub_8282CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282CCF0"))) PPC_WEAK_FUNC(sub_8282CCF0);
PPC_FUNC_IMPL(__imp__sub_8282CCF0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2096(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282ce38
	if (!ctx.cr6.eq) goto loc_8282CE38;
	// lwz r11,10272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282cd3c
	if (!ctx.cr6.eq) goto loc_8282CD3C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20944, ctx.r11.u32);
	// b 0x8282ce38
	goto loc_8282CE38;
loc_8282CD3C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282cd68
	if (ctx.cr6.eq) goto loc_8282CD68;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282cd58
	if (ctx.cr6.eq) goto loc_8282CD58;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282cd70
	if (!ctx.cr6.eq) goto loc_8282CD70;
	// b 0x8282cd70
	goto loc_8282CD70;
loc_8282CD58:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282cd70
	goto loc_8282CD70;
loc_8282CD68:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282CD70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82828750
	ctx.lr = 0x8282CD78;
	sub_82828750(ctx, base);
	// lwz r9,3536(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3536);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,18904(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 18904);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// sld r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpdi cr6,r6,0
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 0, ctx.xer);
	// bne cr6,0x8282ce34
	if (!ctx.cr6.eq) goto loc_8282CE34;
	// lwz r9,3540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3540);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// sld r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpdi cr6,r6,0
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 0, ctx.xer);
	// bne cr6,0x8282ce2c
	if (!ctx.cr6.eq) goto loc_8282CE2C;
	// lwz r9,3544(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3544);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// sld r6,r10,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r7.u8 & 0x7F));
	// and r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// beq cr6,0x8282cdd4
	if (ctx.cr6.eq) goto loc_8282CDD4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282ce20
	if (!ctx.cr6.eq) goto loc_8282CE20;
loc_8282CDD4:
	// lwz r7,3548(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3548);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// sld r5,r10,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r6.u8 & 0x7F));
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x8282ce04
	if (ctx.cr6.eq) goto loc_8282CE04;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8282ce20
	if (ctx.cr6.eq) goto loc_8282CE20;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x8282ce04
	if (ctx.cr6.eq) goto loc_8282CE04;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282ce14
	if (!ctx.cr6.eq) goto loc_8282CE14;
loc_8282CE04:
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// beq cr6,0x8282ce38
	if (ctx.cr6.eq) goto loc_8282CE38;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282ce38
	if (!ctx.cr6.eq) goto loc_8282CE38;
loc_8282CE14:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20944, ctx.r11.u32);
	// b 0x8282ce38
	goto loc_8282CE38;
loc_8282CE20:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20944, ctx.r11.u32);
	// b 0x8282ce38
	goto loc_8282CE38;
loc_8282CE2C:
	// stw r10,20944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20944, ctx.r10.u32);
	// b 0x8282ce38
	goto loc_8282CE38;
loc_8282CE34:
	// stw r30,20944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20944, ctx.r30.u32);
loc_8282CE38:
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

__attribute__((alias("__imp__sub_8282CE50"))) PPC_WEAK_FUNC(sub_8282CE50);
PPC_FUNC_IMPL(__imp__sub_8282CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,18876
	ctx.r11.s64 = ctx.r11.s64 + 18876;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CE94"))) PPC_WEAK_FUNC(sub_8282CE94);
PPC_FUNC_IMPL(__imp__sub_8282CE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282CE98"))) PPC_WEAK_FUNC(sub_8282CE98);
PPC_FUNC_IMPL(__imp__sub_8282CE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CEC4"))) PPC_WEAK_FUNC(sub_8282CEC4);
PPC_FUNC_IMPL(__imp__sub_8282CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282CEC8"))) PPC_WEAK_FUNC(sub_8282CEC8);
PPC_FUNC_IMPL(__imp__sub_8282CEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,14184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14184);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8282ceec
	if (ctx.cr6.eq) goto loc_8282CEEC;
	// lwz r11,23280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282cef8
	if (ctx.cr6.eq) goto loc_8282CEF8;
loc_8282CEEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282CEF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CF04"))) PPC_WEAK_FUNC(sub_8282CF04);
PPC_FUNC_IMPL(__imp__sub_8282CF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282CF08"))) PPC_WEAK_FUNC(sub_8282CF08);
PPC_FUNC_IMPL(__imp__sub_8282CF08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,6552
	ctx.r9.s64 = ctx.r11.s64 + 6552;
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,6556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r8,89
	ctx.r7.s64 = ctx.r8.s64 + 89;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282cf4c
	if (ctx.cr6.eq) goto loc_8282CF4C;
	// addi r9,r10,4723
	ctx.r9.s64 = ctx.r10.s64 + 4723;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8282cf98
	if (!ctx.cr6.eq) goto loc_8282CF98;
loc_8282CF4C:
	// lwz r8,10240(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10240);
	// addi r9,r11,10236
	ctx.r9.s64 = ctx.r11.s64 + 10236;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r8,17
	ctx.r7.s64 = ctx.r8.s64 + 17;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282cf8c
	if (ctx.cr6.eq) goto loc_8282CF8C;
	// lwz r9,980(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// addi r11,r11,976
	ctx.r11.s64 = ctx.r11.s64 + 976;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r8,r10,26
	ctx.r8.s64 = ctx.r10.s64 + 26;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8282cf98
	if (ctx.cr6.eq) goto loc_8282CF98;
loc_8282CF8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282CF98:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CFA4"))) PPC_WEAK_FUNC(sub_8282CFA4);
PPC_FUNC_IMPL(__imp__sub_8282CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282CFA8"))) PPC_WEAK_FUNC(sub_8282CFA8);
PPC_FUNC_IMPL(__imp__sub_8282CFA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,6996(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6996);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282cff4
	if (!ctx.cr6.eq) goto loc_8282CFF4;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282cfe8
	if (ctx.cr6.eq) goto loc_8282CFE8;
	// lwz r10,6556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282cff4
	if (!ctx.cr6.eq) goto loc_8282CFF4;
loc_8282CFE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282CFF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D000"))) PPC_WEAK_FUNC(sub_8282D000);
PPC_FUNC_IMPL(__imp__sub_8282D000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,23220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23220);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282d03c
	if (!ctx.cr6.eq) goto loc_8282D03C;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282d030
	if (ctx.cr6.eq) goto loc_8282D030;
	// lwz r11,23224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d03c
	if (!ctx.cr6.eq) goto loc_8282D03C;
loc_8282D030:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282D03C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D048"))) PPC_WEAK_FUNC(sub_8282D048);
PPC_FUNC_IMPL(__imp__sub_8282D048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,14920(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14920);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D060"))) PPC_WEAK_FUNC(sub_8282D060);
PPC_FUNC_IMPL(__imp__sub_8282D060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8282D068;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad18
	ctx.lr = 0x8282D070;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r24,13192(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r23,13188(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r22,13180(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r21,13184(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r30.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lfs f0,14144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,14136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,23240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,14140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14140);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,23244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f10,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282d11c
	if (ctx.cr6.eq) goto loc_8282D11C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x8282D110;
	sub_82124928(ctx, base);
	// lfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
loc_8282D11C:
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r25,r10,-29532
	ctx.r25.s64 = ctx.r10.s64 + -29532;
	// beq cr6,0x8282d150
	if (ctx.cr6.eq) goto loc_8282D150;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282d148
	if (ctx.cr6.eq) goto loc_8282D148;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282d154
	if (!ctx.cr6.eq) goto loc_8282D154;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8282d154
	goto loc_8282D154;
loc_8282D148:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x8282d154
	goto loc_8282D154;
loc_8282D150:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8282D154:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804270
	ctx.lr = 0x8282D160;
	sub_82804270(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-30724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30724);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f28,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fmadds f0,f10,f30,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x8282d1ac
	if (ctx.cr6.lt) goto loc_8282D1AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8282d1a4
	if (ctx.cr6.lt) goto loc_8282D1A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8282d240
	goto loc_8282D240;
loc_8282D1A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8282d240
	goto loc_8282D240;
loc_8282D1AC:
	// lwz r3,17412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17412);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282d1d8
	if (ctx.cr6.eq) goto loc_8282D1D8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282d1d0
	if (ctx.cr6.eq) goto loc_8282D1D0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282d1dc
	if (!ctx.cr6.eq) goto loc_8282D1DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8282d1dc
	goto loc_8282D1DC;
loc_8282D1D0:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x8282d1dc
	goto loc_8282D1DC;
loc_8282D1D8:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8282D1DC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82804270
	ctx.lr = 0x8282D1E4;
	sub_82804270(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f1,-29740(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29740);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82808fd8
	ctx.lr = 0x8282D218;
	sub_82808FD8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// fmadds f10,f12,f28,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f9,f11,f30,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// ble cr6,0x8282d240
	if (!ctx.cr6.gt) goto loc_8282D240;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8282D240:
	// stw r11,17432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17432, ctx.r11.u32);
	// stw r24,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad64
	ctx.lr = 0x8282D260;
	__restfpr_28(ctx, base);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D264"))) PPC_WEAK_FUNC(sub_8282D264);
PPC_FUNC_IMPL(__imp__sub_8282D264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282D268"))) PPC_WEAK_FUNC(sub_8282D268);
PPC_FUNC_IMPL(__imp__sub_8282D268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12280(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12280);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D280"))) PPC_WEAK_FUNC(sub_8282D280);
PPC_FUNC_IMPL(__imp__sub_8282D280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2363
	ctx.r10.s64 = ctx.r5.s64 + 2363;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// ldx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// std r6,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r6.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D2A0"))) PPC_WEAK_FUNC(sub_8282D2A0);
PPC_FUNC_IMPL(__imp__sub_8282D2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,23272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23272);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23272, ctx.r10.u32);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x8282d2c8
	if (!ctx.cr6.eq) goto loc_8282D2C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23272, ctx.r10.u32);
loc_8282D2C8:
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r10,23272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23272);
	// addi r9,r9,704
	ctx.r9.s64 = ctx.r9.s64 + 704;
	// addi r8,r10,5037
	ctx.r8.s64 = ctx.r10.s64 + 5037;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D2EC"))) PPC_WEAK_FUNC(sub_8282D2EC);
PPC_FUNC_IMPL(__imp__sub_8282D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282D2F0"))) PPC_WEAK_FUNC(sub_8282D2F0);
PPC_FUNC_IMPL(__imp__sub_8282D2F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-29532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x8282d334
	if (ctx.cr6.eq) goto loc_8282D334;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8282d32c
	if (ctx.cr6.eq) goto loc_8282D32C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8282d338
	if (!ctx.cr6.eq) goto loc_8282D338;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8282d338
	goto loc_8282D338;
loc_8282D32C:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x8282d338
	goto loc_8282D338;
loc_8282D334:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8282D338:
	// lwz r10,22792(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22792);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282d368
	if (ctx.cr6.eq) goto loc_8282D368;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282d364
	if (ctx.cr6.eq) goto loc_8282D364;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8282d35c
	if (ctx.cr6.eq) goto loc_8282D35C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8282d368
	goto loc_8282D368;
loc_8282D35C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282d368
	goto loc_8282D368;
loc_8282D364:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8282D368:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D37C"))) PPC_WEAK_FUNC(sub_8282D37C);
PPC_FUNC_IMPL(__imp__sub_8282D37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282D380"))) PPC_WEAK_FUNC(sub_8282D380);
PPC_FUNC_IMPL(__imp__sub_8282D380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,23276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23276, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D398"))) PPC_WEAK_FUNC(sub_8282D398);
PPC_FUNC_IMPL(__imp__sub_8282D398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,10276(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10276);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282d3e4
	if (!ctx.cr6.eq) goto loc_8282D3E4;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282d3d8
	if (ctx.cr6.eq) goto loc_8282D3D8;
	// lwz r10,10240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10240);
	// addi r11,r11,10236
	ctx.r11.s64 = ctx.r11.s64 + 10236;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282d3e4
	if (!ctx.cr6.eq) goto loc_8282D3E4;
loc_8282D3D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282D3E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D3F0"))) PPC_WEAK_FUNC(sub_8282D3F0);
PPC_FUNC_IMPL(__imp__sub_8282D3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,12252(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,964(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,2500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2500);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D418"))) PPC_WEAK_FUNC(sub_8282D418);
PPC_FUNC_IMPL(__imp__sub_8282D418) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f10,23248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f9,23240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23240);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,23244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23244);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282d4a8
	if (ctx.cr6.eq) goto loc_8282D4A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x8282D49C;
	sub_82124928(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
loc_8282D4A8:
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// fmadds f7,f9,f12,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f13
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// ble cr6,0x8282d4d8
	if (!ctx.cr6.gt) goto loc_8282D4D8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8282D4D8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8282D4F4"))) PPC_WEAK_FUNC(sub_8282D4F4);
PPC_FUNC_IMPL(__imp__sub_8282D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282D4F8"))) PPC_WEAK_FUNC(sub_8282D4F8);
PPC_FUNC_IMPL(__imp__sub_8282D4F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282d51c
	if (!ctx.cr6.eq) goto loc_8282D51C;
	// lwz r11,11700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11700);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282D51C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D528"))) PPC_WEAK_FUNC(sub_8282D528);
PPC_FUNC_IMPL(__imp__sub_8282D528) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f11,14136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,14140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14140);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// clrlwi r3,r4,1
	ctx.r3.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8282d5b8
	if (ctx.cr6.eq) goto loc_8282D5B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x8282D5A0;
	sub_82124928(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8282d5c0
	goto loc_8282D5C0;
loc_8282D5B8:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8282D5C0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8282D5F0"))) PPC_WEAK_FUNC(sub_8282D5F0);
PPC_FUNC_IMPL(__imp__sub_8282D5F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,21652(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21652);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D608"))) PPC_WEAK_FUNC(sub_8282D608);
PPC_FUNC_IMPL(__imp__sub_8282D608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,2096(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// addi r8,r11,3719
	ctx.r8.s64 = ctx.r11.s64 + 3719;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r6,r11,30
	ctx.r6.s64 = ctx.r11.s64 + 30;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D638"))) PPC_WEAK_FUNC(sub_8282D638);
PPC_FUNC_IMPL(__imp__sub_8282D638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8282D640;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,23248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,23240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,14136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,23244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23244);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,14140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14140);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f10,f9
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282d6cc
	if (ctx.cr6.eq) goto loc_8282D6CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x8282D6C0;
	sub_82124928(ctx, base);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
loc_8282D6CC:
	// lwz r11,17412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282d700
	if (ctx.cr6.eq) goto loc_8282D700;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282d6f0
	if (ctx.cr6.eq) goto loc_8282D6F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282d708
	if (!ctx.cr6.eq) goto loc_8282D708;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8282d708
	goto loc_8282D708;
loc_8282D6F0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282d708
	goto loc_8282D708;
loc_8282D700:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282D708:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804270
	ctx.lr = 0x8282D714;
	sub_82804270(ctx, base);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmadds f9,f11,f29,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x8282d744
	if (!ctx.cr6.gt) goto loc_8282D744;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8282D744:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D75C"))) PPC_WEAK_FUNC(sub_8282D75C);
PPC_FUNC_IMPL(__imp__sub_8282D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282D760"))) PPC_WEAK_FUNC(sub_8282D760);
PPC_FUNC_IMPL(__imp__sub_8282D760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282D768;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,13192(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8282d870
	if (ctx.cr6.eq) goto loc_8282D870;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8282d92c
	if (!ctx.cr6.eq) goto loc_8282D92C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282d7ec
	if (ctx.cr6.eq) goto loc_8282D7EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282d7e4
	if (ctx.cr6.eq) goto loc_8282D7E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8282d7f0
	if (ctx.cr6.eq) goto loc_8282D7F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8282d7f0
	goto loc_8282D7F0;
loc_8282D7E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8282d7f0
	goto loc_8282D7F0;
loc_8282D7EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8282D7F0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f2,-29736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29736);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82801de8
	ctx.lr = 0x8282D800;
	sub_82801DE8(ctx, base);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282d82c
	if (ctx.cr6.eq) goto loc_8282D82C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282d824
	if (ctx.cr6.eq) goto loc_8282D824;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282d830
	if (!ctx.cr6.eq) goto loc_8282D830;
	// lwz r11,13188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// b 0x8282d830
	goto loc_8282D830;
loc_8282D824:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8282d830
	goto loc_8282D830;
loc_8282D82C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8282D830:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8282d928
	goto loc_8282D928;
loc_8282D870:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282d8a4
	if (ctx.cr6.eq) goto loc_8282D8A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282d89c
	if (ctx.cr6.eq) goto loc_8282D89C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8282d8a8
	if (ctx.cr6.eq) goto loc_8282D8A8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8282d8a8
	goto loc_8282D8A8;
loc_8282D89C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8282d8a8
	goto loc_8282D8A8;
loc_8282D8A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8282D8A8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f2,-18644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18644);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82801de8
	ctx.lr = 0x8282D8BC;
	sub_82801DE8(ctx, base);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282d8e8
	if (ctx.cr6.eq) goto loc_8282D8E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282d8e0
	if (ctx.cr6.eq) goto loc_8282D8E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282d8ec
	if (!ctx.cr6.eq) goto loc_8282D8EC;
	// lwz r11,13188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// b 0x8282d8ec
	goto loc_8282D8EC;
loc_8282D8E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8282d8ec
	goto loc_8282D8EC;
loc_8282D8E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8282D8EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282d92c
	if (ctx.cr6.eq) goto loc_8282D92C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8282D928:
	// stw r10,2592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2592, ctx.r10.u32);
loc_8282D92C:
	// stw r25,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D944"))) PPC_WEAK_FUNC(sub_8282D944);
PPC_FUNC_IMPL(__imp__sub_8282D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282D948"))) PPC_WEAK_FUNC(sub_8282D948);
PPC_FUNC_IMPL(__imp__sub_8282D948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,2096(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// addi r8,r11,4731
	ctx.r8.s64 = ctx.r11.s64 + 4731;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D96C"))) PPC_WEAK_FUNC(sub_8282D96C);
PPC_FUNC_IMPL(__imp__sub_8282D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282D970"))) PPC_WEAK_FUNC(sub_8282D970);
PPC_FUNC_IMPL(__imp__sub_8282D970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,23232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23232);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282d9ac
	if (!ctx.cr6.eq) goto loc_8282D9AC;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282d9a0
	if (ctx.cr6.eq) goto loc_8282D9A0;
	// lwz r11,23236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d9ac
	if (!ctx.cr6.eq) goto loc_8282D9AC;
loc_8282D9A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282D9AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D9B8"))) PPC_WEAK_FUNC(sub_8282D9B8);
PPC_FUNC_IMPL(__imp__sub_8282D9B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,18868(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18868);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282d9f4
	if (!ctx.cr6.eq) goto loc_8282D9F4;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282d9e8
	if (ctx.cr6.eq) goto loc_8282D9E8;
	// lwz r11,18872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d9f4
	if (!ctx.cr6.eq) goto loc_8282D9F4;
loc_8282D9E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282D9F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DA00"))) PPC_WEAK_FUNC(sub_8282DA00);
PPC_FUNC_IMPL(__imp__sub_8282DA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// beq cr6,0x8282da48
	if (ctx.cr6.eq) goto loc_8282DA48;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282da40
	if (ctx.cr6.eq) goto loc_8282DA40;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8282da38
	if (ctx.cr6.eq) goto loc_8282DA38;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8282da4c
	goto loc_8282DA4C;
loc_8282DA38:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8282da4c
	goto loc_8282DA4C;
loc_8282DA40:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8282da4c
	goto loc_8282DA4C;
loc_8282DA48:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8282DA4C:
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,8296
	ctx.r10.s64 = ctx.r11.s64 + 8296;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,48(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stw r6,2096(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2096, ctx.r6.u32);
	// lwz r6,8300(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// lwz r5,2096(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8282daa0
	if (ctx.cr6.eq) goto loc_8282DAA0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282da98
	if (ctx.cr6.eq) goto loc_8282DA98;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282daa4
	if (!ctx.cr6.eq) goto loc_8282DAA4;
	// b 0x8282daa4
	goto loc_8282DAA4;
loc_8282DA98:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8282daa4
	goto loc_8282DAA4;
loc_8282DAA0:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8282DAA4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DABC"))) PPC_WEAK_FUNC(sub_8282DABC);
PPC_FUNC_IMPL(__imp__sub_8282DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282DAC0"))) PPC_WEAK_FUNC(sub_8282DAC0);
PPC_FUNC_IMPL(__imp__sub_8282DAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,21588(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21588);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DAD8"))) PPC_WEAK_FUNC(sub_8282DAD8);
PPC_FUNC_IMPL(__imp__sub_8282DAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,14912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14916);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,14920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14920);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DB18"))) PPC_WEAK_FUNC(sub_8282DB18);
PPC_FUNC_IMPL(__imp__sub_8282DB18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r9,976
	ctx.r11.s64 = ctx.r9.s64 + 976;
loc_8282DB30:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,2096(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r5,r7,2
	ctx.r5.s64 = ctx.r7.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r3,2096(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r3,r7
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r6,r7,3
	ctx.r6.s64 = ctx.r7.s64 + 3;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r4,2096(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r5,2096(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r5,r4
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r3,r7,5
	ctx.r3.s64 = ctx.r7.s64 + 5;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,2096(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r6,r5
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r4,r7,6
	ctx.r4.s64 = ctx.r7.s64 + 6;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r7,2096(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r5,r7,7
	ctx.r5.s64 = ctx.r7.s64 + 7;
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// blt cr6,0x8282db30
	if (ctx.cr6.lt) goto loc_8282DB30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DBE8"))) PPC_WEAK_FUNC(sub_8282DBE8);
PPC_FUNC_IMPL(__imp__sub_8282DBE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,6884(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6884);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282dc34
	if (!ctx.cr6.eq) goto loc_8282DC34;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282dc28
	if (ctx.cr6.eq) goto loc_8282DC28;
	// lwz r10,6556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// addi r10,r10,83
	ctx.r10.s64 = ctx.r10.s64 + 83;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282dc34
	if (!ctx.cr6.eq) goto loc_8282DC34;
loc_8282DC28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282DC34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DC40"))) PPC_WEAK_FUNC(sub_8282DC40);
PPC_FUNC_IMPL(__imp__sub_8282DC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,22816(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22816);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DC58"))) PPC_WEAK_FUNC(sub_8282DC58);
PPC_FUNC_IMPL(__imp__sub_8282DC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,20964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20964);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8282dc88
	if (!ctx.cr6.eq) goto loc_8282DC88;
	// lwz r9,2820(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8282dc88
	if (ctx.cr6.eq) goto loc_8282DC88;
	// lwz r11,20968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20968);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282DC88:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DC90"))) PPC_WEAK_FUNC(sub_8282DC90);
PPC_FUNC_IMPL(__imp__sub_8282DC90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,55
	ctx.r10.s64 = 55;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,14380(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14380, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DCA8"))) PPC_WEAK_FUNC(sub_8282DCA8);
PPC_FUNC_IMPL(__imp__sub_8282DCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8282DCB0;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lfs f31,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,13192(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r22,13188(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r21,13180(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r20,13184(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r10,16284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16284);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282deb0
	if (ctx.cr6.eq) goto loc_8282DEB0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282df14
	if (!ctx.cr6.eq) goto loc_8282DF14;
	// lfs f12,14916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14916);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r31,14912
	ctx.r25.s64 = ctx.r31.s64 + 14912;
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f10,14920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14920);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16292);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// lfs f7,14912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14912);
	ctx.f7.f64 = double(temp.f32);
	// addi r26,r31,16288
	ctx.r26.s64 = ctx.r31.s64 + 16288;
	// lfs f6,16296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16296);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f4,16288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16288);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,14176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14176);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f1,f8,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f11,f2,f2
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f10,f1,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f8,f3
	ctx.cr6.compare(ctx.f8.f64, ctx.f3.f64);
	// ble cr6,0x8282df14
	if (!ctx.cr6.gt) goto loc_8282DF14;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f2,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f12,f5,f3,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x8282de08
	if (ctx.cr6.gt) goto loc_8282DE08;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,-29808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29808);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82808fd8
	ctx.lr = 0x8282DDF8;
	sub_82808FD8(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8282de34
	goto loc_8282DE34;
loc_8282DE08:
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f1,-29732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29732);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82808fd8
	ctx.lr = 0x8282DE28;
	sub_82808FD8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
loc_8282DE34:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8282dea4
	if (ctx.cr6.eq) goto loc_8282DEA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82124928
	ctx.lr = 0x8282DE6C;
	sub_82124928(ctx, base);
	// lfs f0,14176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fsubs f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// b 0x8282df14
	goto loc_8282DF14;
loc_8282DEA4:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8282df14
	goto loc_8282DF14;
loc_8282DEB0:
	// lfs f12,14912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14912);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,18588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18588);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,14916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14916);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f9,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bgt cr6,0x8282deec
	if (ctx.cr6.gt) goto loc_8282DEEC;
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f8,12296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12296);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x8282def0
	if (!ctx.cr6.lt) goto loc_8282DEF0;
loc_8282DEEC:
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
loc_8282DEF0:
	// fadds f11,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f8,12732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bgt cr6,0x8282df10
	if (ctx.cr6.gt) goto loc_8282DF10;
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,12300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12300);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x8282df14
	if (!ctx.cr6.lt) goto loc_8282DF14;
loc_8282DF10:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_8282DF14:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r23,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r23.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r21,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r22.u32);
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282DF54"))) PPC_WEAK_FUNC(sub_8282DF54);
PPC_FUNC_IMPL(__imp__sub_8282DF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282DF58"))) PPC_WEAK_FUNC(sub_8282DF58);
PPC_FUNC_IMPL(__imp__sub_8282DF58) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2096(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282e0a0
	if (!ctx.cr6.eq) goto loc_8282E0A0;
	// lwz r11,10316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282dfa4
	if (!ctx.cr6.eq) goto loc_8282DFA4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r11.u32);
	// b 0x8282e0a0
	goto loc_8282E0A0;
loc_8282DFA4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282dfd0
	if (ctx.cr6.eq) goto loc_8282DFD0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282dfc0
	if (ctx.cr6.eq) goto loc_8282DFC0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282dfd8
	if (!ctx.cr6.eq) goto loc_8282DFD8;
	// b 0x8282dfd8
	goto loc_8282DFD8;
loc_8282DFC0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282dfd8
	goto loc_8282DFD8;
loc_8282DFD0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282DFD8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82828750
	ctx.lr = 0x8282DFE0;
	sub_82828750(ctx, base);
	// lwz r9,3552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3552);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,18904(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 18904);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// sld r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpdi cr6,r6,0
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 0, ctx.xer);
	// bne cr6,0x8282e09c
	if (!ctx.cr6.eq) goto loc_8282E09C;
	// lwz r9,3556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3556);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// sld r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpdi cr6,r6,0
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 0, ctx.xer);
	// bne cr6,0x8282e094
	if (!ctx.cr6.eq) goto loc_8282E094;
	// lwz r9,3560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3560);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// sld r6,r10,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r7.u8 & 0x7F));
	// and r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// beq cr6,0x8282e03c
	if (ctx.cr6.eq) goto loc_8282E03C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282e088
	if (!ctx.cr6.eq) goto loc_8282E088;
loc_8282E03C:
	// lwz r7,3564(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3564);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// sld r5,r10,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r6.u8 & 0x7F));
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x8282e06c
	if (ctx.cr6.eq) goto loc_8282E06C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8282e088
	if (ctx.cr6.eq) goto loc_8282E088;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x8282e06c
	if (ctx.cr6.eq) goto loc_8282E06C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282e07c
	if (!ctx.cr6.eq) goto loc_8282E07C;
loc_8282E06C:
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// beq cr6,0x8282e0a0
	if (ctx.cr6.eq) goto loc_8282E0A0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282e0a0
	if (!ctx.cr6.eq) goto loc_8282E0A0;
loc_8282E07C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r11.u32);
	// b 0x8282e0a0
	goto loc_8282E0A0;
loc_8282E088:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r11.u32);
	// b 0x8282e0a0
	goto loc_8282E0A0;
loc_8282E094:
	// stw r10,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r10.u32);
	// b 0x8282e0a0
	goto loc_8282E0A0;
loc_8282E09C:
	// stw r30,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r30.u32);
loc_8282E0A0:
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

__attribute__((alias("__imp__sub_8282E0B8"))) PPC_WEAK_FUNC(sub_8282E0B8);
PPC_FUNC_IMPL(__imp__sub_8282E0B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,20944(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20944);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E0D0"))) PPC_WEAK_FUNC(sub_8282E0D0);
PPC_FUNC_IMPL(__imp__sub_8282E0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,21768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21768);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21772);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,21776(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E110"))) PPC_WEAK_FUNC(sub_8282E110);
PPC_FUNC_IMPL(__imp__sub_8282E110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,20188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,20196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E150"))) PPC_WEAK_FUNC(sub_8282E150);
PPC_FUNC_IMPL(__imp__sub_8282E150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addi r8,r10,89
	ctx.r8.s64 = ctx.r10.s64 + 89;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E17C"))) PPC_WEAK_FUNC(sub_8282E17C);
PPC_FUNC_IMPL(__imp__sub_8282E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E180"))) PPC_WEAK_FUNC(sub_8282E180);
PPC_FUNC_IMPL(__imp__sub_8282E180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,6780(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6780);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E1A4"))) PPC_WEAK_FUNC(sub_8282E1A4);
PPC_FUNC_IMPL(__imp__sub_8282E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E1A8"))) PPC_WEAK_FUNC(sub_8282E1A8);
PPC_FUNC_IMPL(__imp__sub_8282E1A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,6920(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6920);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E1CC"))) PPC_WEAK_FUNC(sub_8282E1CC);
PPC_FUNC_IMPL(__imp__sub_8282E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E1D0"))) PPC_WEAK_FUNC(sub_8282E1D0);
PPC_FUNC_IMPL(__imp__sub_8282E1D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,21652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21652, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E1E4"))) PPC_WEAK_FUNC(sub_8282E1E4);
PPC_FUNC_IMPL(__imp__sub_8282E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E1E8"))) PPC_WEAK_FUNC(sub_8282E1E8);
PPC_FUNC_IMPL(__imp__sub_8282E1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,12312(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E200"))) PPC_WEAK_FUNC(sub_8282E200);
PPC_FUNC_IMPL(__imp__sub_8282E200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,20992(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20992, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E214"))) PPC_WEAK_FUNC(sub_8282E214);
PPC_FUNC_IMPL(__imp__sub_8282E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E218"))) PPC_WEAK_FUNC(sub_8282E218);
PPC_FUNC_IMPL(__imp__sub_8282E218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-30832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r8,r10,3178
	ctx.r8.s64 = ctx.r10.s64 + 3178;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r7,r10,5404
	ctx.r7.s64 = ctx.r10.s64 + 5404;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r10,12492(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r4,r9,3598
	ctx.r4.s64 = ctx.r9.s64 + 3598;
	// lfs f0,-30728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 104);
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f9,f10,f0,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfsx f9,r7,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// ld r5,104(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 104);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// addi r10,r10,5031
	ctx.r10.s64 = ctx.r10.s64 + 5031;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f5,f6,f0,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfsx f5,r9,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// bne cr6,0x8282e2dc
	if (!ctx.cr6.eq) goto loc_8282E2DC;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8282e31c
	goto loc_8282E31C;
loc_8282E2DC:
	// lwz r10,18532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18532);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282e310
	if (ctx.cr6.eq) goto loc_8282E310;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282e300
	if (ctx.cr6.eq) goto loc_8282E300;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282e318
	if (!ctx.cr6.eq) goto loc_8282E318;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8282e318
	goto loc_8282E318;
loc_8282E300:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8282e318
	goto loc_8282E318;
loc_8282E310:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8282E318:
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
loc_8282E31C:
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,1353
	ctx.r10.s64 = ctx.r10.s64 + 1353;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,20188(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20196);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E358"))) PPC_WEAK_FUNC(sub_8282E358);
PPC_FUNC_IMPL(__imp__sub_8282E358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,17432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17432);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E370"))) PPC_WEAK_FUNC(sub_8282E370);
PPC_FUNC_IMPL(__imp__sub_8282E370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,18540(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18540);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282e3ac
	if (!ctx.cr6.eq) goto loc_8282E3AC;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282e3a0
	if (ctx.cr6.eq) goto loc_8282E3A0;
	// lwz r11,18544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282e3ac
	if (!ctx.cr6.eq) goto loc_8282E3AC;
loc_8282E3A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282E3AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E3B8"))) PPC_WEAK_FUNC(sub_8282E3B8);
PPC_FUNC_IMPL(__imp__sub_8282E3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,7056(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7056);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282e404
	if (!ctx.cr6.eq) goto loc_8282E404;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282e3f8
	if (ctx.cr6.eq) goto loc_8282E3F8;
	// lwz r10,6556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// addi r10,r10,126
	ctx.r10.s64 = ctx.r10.s64 + 126;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282e404
	if (!ctx.cr6.eq) goto loc_8282E404;
loc_8282E3F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282E404:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E410"))) PPC_WEAK_FUNC(sub_8282E410);
PPC_FUNC_IMPL(__imp__sub_8282E410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r10,r11,6552
	ctx.r10.s64 = ctx.r11.s64 + 6552;
	// lwz r7,2096(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r6,6556(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r5,r11,114
	ctx.r5.s64 = ctx.r11.s64 + 114;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E440"))) PPC_WEAK_FUNC(sub_8282E440);
PPC_FUNC_IMPL(__imp__sub_8282E440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8282E448;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,10276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10276);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282e494
	if (!ctx.cr6.eq) goto loc_8282E494;
	// lwz r11,2820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2820);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8282e5cc
	if (ctx.cr6.eq) goto loc_8282E5CC;
	// lwz r10,10240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10240);
	// addi r11,r31,10236
	ctx.r11.s64 = ctx.r31.s64 + 10236;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8282e5cc
	if (ctx.cr6.eq) goto loc_8282E5CC;
loc_8282E494:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282e4c8
	if (ctx.cr6.eq) goto loc_8282E4C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282e4c0
	if (ctx.cr6.eq) goto loc_8282E4C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282e4cc
	if (!ctx.cr6.eq) goto loc_8282E4CC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8282e4cc
	goto loc_8282E4CC;
loc_8282E4C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8282e4cc
	goto loc_8282E4CC;
loc_8282E4C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8282E4CC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x8282E4D8;
	sub_82804410(ctx, base);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-30252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x8282e5b8
	if (!ctx.cr6.gt) goto loc_8282E5B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x8282E52C;
	sub_82124928(ctx, base);
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282e558
	if (ctx.cr6.eq) goto loc_8282E558;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282e550
	if (ctx.cr6.eq) goto loc_8282E550;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282e55c
	if (!ctx.cr6.eq) goto loc_8282E55C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8282e55c
	goto loc_8282E55C;
loc_8282E550:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8282e55c
	goto loc_8282E55C;
loc_8282E558:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8282E55C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804270
	ctx.lr = 0x8282E564;
	sub_82804270(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// bgt cr6,0x8282e5a4
	if (ctx.cr6.gt) goto loc_8282E5A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12720, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8282E5A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12720, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8282E5B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12720, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8282E5CC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12720, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282E5E0"))) PPC_WEAK_FUNC(sub_8282E5E0);
PPC_FUNC_IMPL(__imp__sub_8282E5E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,6552
	ctx.r10.s64 = ctx.r11.s64 + 6552;
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,6556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r11,104
	ctx.r7.s64 = ctx.r11.s64 + 104;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E610"))) PPC_WEAK_FUNC(sub_8282E610);
PPC_FUNC_IMPL(__imp__sub_8282E610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,20140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20140);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282e640
	if (!ctx.cr6.eq) goto loc_8282E640;
	// lwz r11,22812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22812);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8282E640:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E64C"))) PPC_WEAK_FUNC(sub_8282E64C);
PPC_FUNC_IMPL(__imp__sub_8282E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E650"))) PPC_WEAK_FUNC(sub_8282E650);
PPC_FUNC_IMPL(__imp__sub_8282E650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,14424(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14424);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E668"))) PPC_WEAK_FUNC(sub_8282E668);
PPC_FUNC_IMPL(__imp__sub_8282E668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8282E670;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,48(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x8282e844
	if (ctx.cr6.eq) goto loc_8282E844;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x8282e844
	if (ctx.cr6.eq) goto loc_8282E844;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bne cr6,0x8282e76c
	if (!ctx.cr6.eq) goto loc_8282E76C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8282e6ec
	if (ctx.cr6.eq) goto loc_8282E6EC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8282e6e4
	if (ctx.cr6.eq) goto loc_8282E6E4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8282e6dc
	if (ctx.cr6.eq) goto loc_8282E6DC;
	// b 0x8282e6f0
	goto loc_8282E6F0;
loc_8282E6DC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282e6f0
	goto loc_8282E6F0;
loc_8282E6E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282e6f0
	goto loc_8282E6F0;
loc_8282E6EC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8282E6F0:
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82828f28
	ctx.lr = 0x8282E6FC;
	sub_82828F28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282e76c
	if (ctx.cr6.eq) goto loc_8282E76C;
	// lwz r11,18532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282e734
	if (ctx.cr6.eq) goto loc_8282E734;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282e72c
	if (ctx.cr6.eq) goto loc_8282E72C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282e738
	if (!ctx.cr6.eq) goto loc_8282E738;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8282e738
	goto loc_8282E738;
loc_8282E72C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282e738
	goto loc_8282E738;
loc_8282E734:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8282E738:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,7396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7396);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282e76c
	if (!ctx.cr6.eq) goto loc_8282E76C;
	// lwz r10,6556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// addi r10,r10,211
	ctx.r10.s64 = ctx.r10.s64 + 211;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8282e7b8
	if (ctx.cr6.eq) goto loc_8282E7B8;
loc_8282E76C:
	// lwz r3,11700(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282e798
	if (ctx.cr6.eq) goto loc_8282E798;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282e790
	if (ctx.cr6.eq) goto loc_8282E790;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282e79c
	if (!ctx.cr6.eq) goto loc_8282E79C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8282e79c
	goto loc_8282E79C;
loc_8282E790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282e79c
	goto loc_8282E79C;
loc_8282E798:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8282E79C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-30784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30784);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8282e7f8
	goto loc_8282E7F8;
loc_8282E7B8:
	// lwz r3,11700(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282e7e4
	if (ctx.cr6.eq) goto loc_8282E7E4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282e7dc
	if (ctx.cr6.eq) goto loc_8282E7DC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282e7e8
	if (!ctx.cr6.eq) goto loc_8282E7E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8282e7e8
	goto loc_8282E7E8;
loc_8282E7DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282e7e8
	goto loc_8282E7E8;
loc_8282E7E4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8282E7E8:
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8282E7F8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82802150
	ctx.lr = 0x8282E800;
	sub_82802150(ctx, base);
	// lwz r3,11700(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282e82c
	if (ctx.cr6.eq) goto loc_8282E82C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282e824
	if (ctx.cr6.eq) goto loc_8282E824;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282e830
	if (!ctx.cr6.eq) goto loc_8282E830;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8282e830
	goto loc_8282E830;
loc_8282E824:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8282e830
	goto loc_8282E830;
loc_8282E82C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8282E830:
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82802038
	ctx.lr = 0x8282E844;
	sub_82802038(ctx, base);
loc_8282E844:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282E84C"))) PPC_WEAK_FUNC(sub_8282E84C);
PPC_FUNC_IMPL(__imp__sub_8282E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E850"))) PPC_WEAK_FUNC(sub_8282E850);
PPC_FUNC_IMPL(__imp__sub_8282E850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,14452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14452);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8282e88c
	if (ctx.cr6.gt) goto loc_8282E88C;
	// lfs f13,14456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14456);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8282e88c
	if (ctx.cr6.gt) goto loc_8282E88C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8282E88C:
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E894"))) PPC_WEAK_FUNC(sub_8282E894);
PPC_FUNC_IMPL(__imp__sub_8282E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E898"))) PPC_WEAK_FUNC(sub_8282E898);
PPC_FUNC_IMPL(__imp__sub_8282E898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8282E8A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r26,13188(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,11700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11700);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282e914
	if (ctx.cr6.eq) goto loc_8282E914;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282e904
	if (ctx.cr6.eq) goto loc_8282E904;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8282e91c
	if (ctx.cr6.eq) goto loc_8282E91C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8282e91c
	goto loc_8282E91C;
loc_8282E904:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282e91c
	goto loc_8282E91C;
loc_8282E914:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282E91C:
	// bl 0x82801930
	ctx.lr = 0x8282E920;
	sub_82801930(ctx, base);
	// stw r27,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282E938"))) PPC_WEAK_FUNC(sub_8282E938);
PPC_FUNC_IMPL(__imp__sub_8282E938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282e958
	if (!ctx.cr6.eq) goto loc_8282E958;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_8282E958:
	// lwz r11,6388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6388);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E964"))) PPC_WEAK_FUNC(sub_8282E964);
PPC_FUNC_IMPL(__imp__sub_8282E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282E968"))) PPC_WEAK_FUNC(sub_8282E968);
PPC_FUNC_IMPL(__imp__sub_8282E968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r9,r10,5808
	ctx.r9.s64 = ctx.r10.s64 + 5808;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r7,r10,5808
	ctx.r7.s64 = ctx.r10.s64 + 5808;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16308, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E9A8"))) PPC_WEAK_FUNC(sub_8282E9A8);
PPC_FUNC_IMPL(__imp__sub_8282E9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8282E9B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r27,13192(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r26,13188(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,11700(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11700);
	// stw r7,20136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20136, ctx.r7.u32);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x8282ea3c
	if (ctx.cr6.eq) goto loc_8282EA3C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282ea34
	if (ctx.cr6.eq) goto loc_8282EA34;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8282ea2c
	if (ctx.cr6.eq) goto loc_8282EA2C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8282ea40
	goto loc_8282EA40;
loc_8282EA2C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282ea40
	goto loc_8282EA40;
loc_8282EA34:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8282ea40
	goto loc_8282EA40;
loc_8282EA3C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8282EA40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282ea7c
	if (ctx.cr6.eq) goto loc_8282EA7C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282ea70
	if (ctx.cr6.eq) goto loc_8282EA70;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282ea68
	if (ctx.cr6.eq) goto loc_8282EA68;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8282ea74
	if (ctx.cr6.eq) goto loc_8282EA74;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8282ea74
	goto loc_8282EA74;
loc_8282EA68:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x8282ea74
	goto loc_8282EA74;
loc_8282EA70:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8282EA74:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828022b0
	ctx.lr = 0x8282EA7C;
	sub_828022B0(ctx, base);
loc_8282EA7C:
	// stw r27,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282EA94"))) PPC_WEAK_FUNC(sub_8282EA94);
PPC_FUNC_IMPL(__imp__sub_8282EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282EA98"))) PPC_WEAK_FUNC(sub_8282EA98);
PPC_FUNC_IMPL(__imp__sub_8282EA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,14400(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20188(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20188, temp.u32);
	// lfs f13,14404(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14404);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20192(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20192, temp.u32);
	// lfs f12,14408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14408);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20196(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20196, temp.u32);
	// stw r10,21780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21780, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EAC8"))) PPC_WEAK_FUNC(sub_8282EAC8);
PPC_FUNC_IMPL(__imp__sub_8282EAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-30820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,2096(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2096);
	// lfs f11,23248(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23248);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r11,3175
	ctx.r6.s64 = ctx.r11.s64 + 3175;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x8282eb28
	if (!ctx.cr6.gt) goto loc_8282EB28;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// blr 
	return;
loc_8282EB28:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EB38"))) PPC_WEAK_FUNC(sub_8282EB38);
PPC_FUNC_IMPL(__imp__sub_8282EB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,13400(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13400);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EB50"))) PPC_WEAK_FUNC(sub_8282EB50);
PPC_FUNC_IMPL(__imp__sub_8282EB50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,720
	ctx.r10.s64 = ctx.r5.s64 + 720;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,2096(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2096);
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r3,r11,2363
	ctx.r3.s64 = ctx.r11.s64 + 2363;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// ldx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpdi cr6,r7,0
	ctx.cr6.compare<int64_t>(ctx.r7.s64, 0, ctx.xer);
	// bne cr6,0x8282eb98
	if (!ctx.cr6.eq) goto loc_8282EB98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8282EB98:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EBA0"))) PPC_WEAK_FUNC(sub_8282EBA0);
PPC_FUNC_IMPL(__imp__sub_8282EBA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,23276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23276);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EBC4"))) PPC_WEAK_FUNC(sub_8282EBC4);
PPC_FUNC_IMPL(__imp__sub_8282EBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282EBC8"))) PPC_WEAK_FUNC(sub_8282EBC8);
PPC_FUNC_IMPL(__imp__sub_8282EBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,-29724(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29724);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,14144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,23248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,14136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,23240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,14140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14140);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,23244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23244);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8282ec58
	if (ctx.cr6.gt) goto loc_8282EC58;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,-29728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29728);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8282ec4c
	if (ctx.cr6.gt) goto loc_8282EC4C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,-29776(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29776);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8282ec40
	if (ctx.cr6.gt) goto loc_8282EC40;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,14864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14864, ctx.r10.u32);
	// blr 
	return;
loc_8282EC40:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,14864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14864, ctx.r10.u32);
	// blr 
	return;
loc_8282EC4C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,14864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14864, ctx.r10.u32);
	// blr 
	return;
loc_8282EC58:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,14864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14864, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EC64"))) PPC_WEAK_FUNC(sub_8282EC64);
PPC_FUNC_IMPL(__imp__sub_8282EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282EC68"))) PPC_WEAK_FUNC(sub_8282EC68);
PPC_FUNC_IMPL(__imp__sub_8282EC68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,2096(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// addi r8,r11,3719
	ctx.r8.s64 = ctx.r11.s64 + 3719;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EC8C"))) PPC_WEAK_FUNC(sub_8282EC8C);
PPC_FUNC_IMPL(__imp__sub_8282EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282EC90"))) PPC_WEAK_FUNC(sub_8282EC90);
PPC_FUNC_IMPL(__imp__sub_8282EC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f11,23244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23244);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,23240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x8282ece8
	if (!ctx.cr6.gt) goto loc_8282ECE8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// blr 
	return;
loc_8282ECE8:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282ECF8"))) PPC_WEAK_FUNC(sub_8282ECF8);
PPC_FUNC_IMPL(__imp__sub_8282ECF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,12312(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12312);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,12312(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12312, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282ED14"))) PPC_WEAK_FUNC(sub_8282ED14);
PPC_FUNC_IMPL(__imp__sub_8282ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282ED18"))) PPC_WEAK_FUNC(sub_8282ED18);
PPC_FUNC_IMPL(__imp__sub_8282ED18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,23272(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23272);
	// addi r9,r11,5037
	ctx.r9.s64 = ctx.r11.s64 + 5037;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x8282ed90
	if (ctx.cr6.eq) goto loc_8282ED90;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8282ED4C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8282ed5c
	if (!ctx.cr6.lt) goto loc_8282ED5C;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
loc_8282ED5C:
	// addi r10,r10,20148
	ctx.r10.s64 = ctx.r10.s64 + 20148;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8282ed84
	if (!ctx.cr6.eq) goto loc_8282ED84;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x8282ed4c
	if (ctx.cr6.lt) goto loc_8282ED4C;
loc_8282ED84:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x8282ed94
	if (!ctx.cr6.lt) goto loc_8282ED94;
loc_8282ED90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8282ED94:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282ED9C"))) PPC_WEAK_FUNC(sub_8282ED9C);
PPC_FUNC_IMPL(__imp__sub_8282ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282EDA0"))) PPC_WEAK_FUNC(sub_8282EDA0);
PPC_FUNC_IMPL(__imp__sub_8282EDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282ee2c
	if (!ctx.cr6.eq) goto loc_8282EE2C;
	// lwz r10,20964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20964);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282ee2c
	if (!ctx.cr6.eq) goto loc_8282EE2C;
	// lwz r10,18532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18532);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282edf8
	if (ctx.cr6.eq) goto loc_8282EDF8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282ede8
	if (ctx.cr6.eq) goto loc_8282EDE8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282ee00
	if (!ctx.cr6.eq) goto loc_8282EE00;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8282ee00
	goto loc_8282EE00;
loc_8282EDE8:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8282ee00
	goto loc_8282EE00;
loc_8282EDF8:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8282EE00:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,10316(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10316);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8282ee2c
	if (ctx.cr6.eq) goto loc_8282EE2C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,20996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20996, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8282EE2C:
	// lwz r11,20996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20996);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EE38"))) PPC_WEAK_FUNC(sub_8282EE38);
PPC_FUNC_IMPL(__imp__sub_8282EE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,20940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20940, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EE4C"))) PPC_WEAK_FUNC(sub_8282EE4C);
PPC_FUNC_IMPL(__imp__sub_8282EE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282EE50"))) PPC_WEAK_FUNC(sub_8282EE50);
PPC_FUNC_IMPL(__imp__sub_8282EE50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,23276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23276);
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// subf r6,r7,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EE78"))) PPC_WEAK_FUNC(sub_8282EE78);
PPC_FUNC_IMPL(__imp__sub_8282EE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8282EE80;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// addi r25,r10,-29532
	ctx.r25.s64 = ctx.r10.s64 + -29532;
	// lwz r24,13192(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,13184(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r31,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r31.u32);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r31,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r31.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// lwz r10,11700(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11700);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282ef08
	if (ctx.cr6.eq) goto loc_8282EF08;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282ef00
	if (ctx.cr6.eq) goto loc_8282EF00;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8282eef8
	if (ctx.cr6.eq) goto loc_8282EEF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8282ef0c
	goto loc_8282EF0C;
loc_8282EEF8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282ef0c
	goto loc_8282EF0C;
loc_8282EF00:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8282ef0c
	goto loc_8282EF0C;
loc_8282EF08:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8282EF0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282f010
	if (ctx.cr6.eq) goto loc_8282F010;
	// lwz r11,17412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282ef40
	if (ctx.cr6.eq) goto loc_8282EF40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282ef38
	if (ctx.cr6.eq) goto loc_8282EF38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282ef44
	if (!ctx.cr6.eq) goto loc_8282EF44;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282ef44
	goto loc_8282EF44;
loc_8282EF38:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8282ef44
	goto loc_8282EF44;
loc_8282EF40:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8282EF44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282f010
	if (ctx.cr6.eq) goto loc_8282F010;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282ef74
	if (ctx.cr6.eq) goto loc_8282EF74;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282ef6c
	if (ctx.cr6.eq) goto loc_8282EF6C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282ef78
	if (!ctx.cr6.eq) goto loc_8282EF78;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8282ef78
	goto loc_8282EF78;
loc_8282EF6C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8282ef78
	goto loc_8282EF78;
loc_8282EF74:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8282EF78:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82804410
	ctx.lr = 0x8282EF84;
	sub_82804410(ctx, base);
	// lwz r3,17412(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17412);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,14136(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 14136, temp.u32);
	// stfs f13,14140(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 14140, temp.u32);
	// stfs f12,14144(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 14144, temp.u32);
	// beq cr6,0x8282efc8
	if (ctx.cr6.eq) goto loc_8282EFC8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282efc0
	if (ctx.cr6.eq) goto loc_8282EFC0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282efcc
	if (!ctx.cr6.eq) goto loc_8282EFCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282efcc
	goto loc_8282EFCC;
loc_8282EFC0:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x8282efcc
	goto loc_8282EFCC;
loc_8282EFC8:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8282EFCC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x8282EFD4;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,23240(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 23240, temp.u32);
	// stfs f13,23244(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 23244, temp.u32);
	// stfs f12,23248(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 23248, temp.u32);
	// bl 0x8282d060
	ctx.lr = 0x8282EFF4;
	sub_8282D060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282ebc8
	ctx.lr = 0x8282EFFC;
	sub_8282EBC8(ctx, base);
	// bl 0x8282e440
	ctx.lr = 0x8282F000;
	sub_8282E440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282ccf0
	ctx.lr = 0x8282F008;
	sub_8282CCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282df58
	ctx.lr = 0x8282F010;
	sub_8282DF58(ctx, base);
loc_8282F010:
	// stw r24,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282F028"))) PPC_WEAK_FUNC(sub_8282F028);
PPC_FUNC_IMPL(__imp__sub_8282F028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,14864(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14864);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F040"))) PPC_WEAK_FUNC(sub_8282F040);
PPC_FUNC_IMPL(__imp__sub_8282F040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12720(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12720);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F058"))) PPC_WEAK_FUNC(sub_8282F058);
PPC_FUNC_IMPL(__imp__sub_8282F058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,20136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20136);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F070"))) PPC_WEAK_FUNC(sub_8282F070);
PPC_FUNC_IMPL(__imp__sub_8282F070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282F078;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r25,13180(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r22,13184(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// lwz r10,18532(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 18532);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282f0f4
	if (ctx.cr6.eq) goto loc_8282F0F4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282f0ec
	if (ctx.cr6.eq) goto loc_8282F0EC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8282f0e4
	if (ctx.cr6.eq) goto loc_8282F0E4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8282f0f8
	goto loc_8282F0F8;
loc_8282F0E4:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x8282f0f8
	goto loc_8282F0F8;
loc_8282F0EC:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x8282f0f8
	goto loc_8282F0F8;
loc_8282F0F4:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8282F0F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8282f1f0
	if (ctx.cr6.eq) goto loc_8282F1F0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8282f120
	if (!ctx.cr6.eq) goto loc_8282F120;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r4,21652(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21652);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282f1e4
	if (ctx.cr6.eq) goto loc_8282F1E4;
loc_8282F120:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282f148
	if (ctx.cr6.eq) goto loc_8282F148;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282f140
	if (ctx.cr6.eq) goto loc_8282F140;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282f14c
	if (!ctx.cr6.eq) goto loc_8282F14C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8282f14c
	goto loc_8282F14C;
loc_8282F140:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8282f14c
	goto loc_8282F14C;
loc_8282F148:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8282F14C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,16316(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16316);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8282f1b4
	if (!ctx.cr6.eq) goto loc_8282F1B4;
	// lwz r10,17412(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17412);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282f19c
	if (ctx.cr6.eq) goto loc_8282F19C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282f194
	if (ctx.cr6.eq) goto loc_8282F194;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282f1a0
	if (!ctx.cr6.eq) goto loc_8282F1A0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8282f1a0
	goto loc_8282F1A0;
loc_8282F194:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8282f1a0
	goto loc_8282F1A0;
loc_8282F19C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8282F1A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82802718
	ctx.lr = 0x8282F1AC;
	sub_82802718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8282f1e4
	if (ctx.cr6.eq) goto loc_8282F1E4;
loc_8282F1B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282ee78
	ctx.lr = 0x8282F1BC;
	sub_8282EE78(ctx, base);
	// addi r5,r26,23240
	ctx.r5.s64 = ctx.r26.s64 + 23240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282d528
	ctx.lr = 0x8282F1CC;
	sub_8282D528(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,21768(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 21768, temp.u32);
	// stfs f13,21772(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 21772, temp.u32);
	// stfs f12,21776(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 21776, temp.u32);
loc_8282F1E4:
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r22.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
loc_8282F1F0:
	// stw r25,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282F1FC"))) PPC_WEAK_FUNC(sub_8282F1FC);
PPC_FUNC_IMPL(__imp__sub_8282F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282F200"))) PPC_WEAK_FUNC(sub_8282F200);
PPC_FUNC_IMPL(__imp__sub_8282F200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,2096(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2096);
	// addi r8,r11,5805
	ctx.r8.s64 = ctx.r11.s64 + 5805;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F220"))) PPC_WEAK_FUNC(sub_8282F220);
PPC_FUNC_IMPL(__imp__sub_8282F220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f0,12312(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12312, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F23C"))) PPC_WEAK_FUNC(sub_8282F23C);
PPC_FUNC_IMPL(__imp__sub_8282F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282F240"))) PPC_WEAK_FUNC(sub_8282F240);
PPC_FUNC_IMPL(__imp__sub_8282F240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,14912(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 14912, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,14916(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 14916, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,14920(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 14920, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F268"))) PPC_WEAK_FUNC(sub_8282F268);
PPC_FUNC_IMPL(__imp__sub_8282F268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8282f28c
	if (!ctx.cr6.eq) goto loc_8282F28C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282f28c
	if (ctx.cr6.eq) goto loc_8282F28C;
	// stw r4,18544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18544, ctx.r4.u32);
loc_8282F28C:
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r10,r10,4635
	ctx.r10.s64 = ctx.r10.s64 + 4635;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F2A0"))) PPC_WEAK_FUNC(sub_8282F2A0);
PPC_FUNC_IMPL(__imp__sub_8282F2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addi r8,r10,114
	ctx.r8.s64 = ctx.r10.s64 + 114;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F2D8"))) PPC_WEAK_FUNC(sub_8282F2D8);
PPC_FUNC_IMPL(__imp__sub_8282F2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F2DC"))) PPC_WEAK_FUNC(sub_8282F2DC);
PPC_FUNC_IMPL(__imp__sub_8282F2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282F2E0"))) PPC_WEAK_FUNC(sub_8282F2E0);
PPC_FUNC_IMPL(__imp__sub_8282F2E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282F2E4"))) PPC_WEAK_FUNC(sub_8282F2E4);
PPC_FUNC_IMPL(__imp__sub_8282F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282F2E8"))) PPC_WEAK_FUNC(sub_8282F2E8);
PPC_FUNC_IMPL(__imp__sub_8282F2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8282F2F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r28,r11,-29532
	ctx.r28.s64 = ctx.r11.s64 + -29532;
	// lwz r26,13188(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// stw r31,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r31.u32);
	// beq cr6,0x8282f338
	if (ctx.cr6.eq) goto loc_8282F338;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f330
	if (ctx.cr6.eq) goto loc_8282F330;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f328
	if (ctx.cr6.eq) goto loc_8282F328;
	// b 0x8282f33c
	goto loc_8282F33C;
loc_8282F328:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f33c
	goto loc_8282F33C;
loc_8282F330:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f33c
	goto loc_8282F33C;
loc_8282F338:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F33C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,7188
	ctx.r5.s64 = ctx.r11.s64 + 7188;
	// bl 0x82828948
	ctx.lr = 0x8282F34C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f37c
	if (ctx.cr6.eq) goto loc_8282F37C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f374
	if (ctx.cr6.eq) goto loc_8282F374;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f36c
	if (ctx.cr6.eq) goto loc_8282F36C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f380
	goto loc_8282F380;
loc_8282F36C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f380
	goto loc_8282F380;
loc_8282F374:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f380
	goto loc_8282F380;
loc_8282F37C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F380:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,7196
	ctx.r5.s64 = ctx.r11.s64 + 7196;
	// bl 0x82828948
	ctx.lr = 0x8282F390;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f3c0
	if (ctx.cr6.eq) goto loc_8282F3C0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f3b8
	if (ctx.cr6.eq) goto loc_8282F3B8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f3b0
	if (ctx.cr6.eq) goto loc_8282F3B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f3c4
	goto loc_8282F3C4;
loc_8282F3B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f3c4
	goto loc_8282F3C4;
loc_8282F3B8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f3c4
	goto loc_8282F3C4;
loc_8282F3C0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F3C4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,7212
	ctx.r5.s64 = ctx.r11.s64 + 7212;
	// bl 0x82828948
	ctx.lr = 0x8282F3D4;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f404
	if (ctx.cr6.eq) goto loc_8282F404;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f3fc
	if (ctx.cr6.eq) goto loc_8282F3FC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f3f4
	if (ctx.cr6.eq) goto loc_8282F3F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f408
	goto loc_8282F408;
loc_8282F3F4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f408
	goto loc_8282F408;
loc_8282F3FC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f408
	goto loc_8282F408;
loc_8282F404:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F408:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,7232
	ctx.r5.s64 = ctx.r11.s64 + 7232;
	// bl 0x82828948
	ctx.lr = 0x8282F418;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f448
	if (ctx.cr6.eq) goto loc_8282F448;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f440
	if (ctx.cr6.eq) goto loc_8282F440;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f438
	if (ctx.cr6.eq) goto loc_8282F438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f44c
	goto loc_8282F44C;
loc_8282F438:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f44c
	goto loc_8282F44C;
loc_8282F440:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f44c
	goto loc_8282F44C;
loc_8282F448:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F44C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,7240
	ctx.r5.s64 = ctx.r11.s64 + 7240;
	// bl 0x82828948
	ctx.lr = 0x8282F45C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f48c
	if (ctx.cr6.eq) goto loc_8282F48C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f484
	if (ctx.cr6.eq) goto loc_8282F484;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f47c
	if (ctx.cr6.eq) goto loc_8282F47C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f490
	goto loc_8282F490;
loc_8282F47C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f490
	goto loc_8282F490;
loc_8282F484:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f490
	goto loc_8282F490;
loc_8282F48C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F490:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,7248
	ctx.r5.s64 = ctx.r11.s64 + 7248;
	// bl 0x82828948
	ctx.lr = 0x8282F4A0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f4d0
	if (ctx.cr6.eq) goto loc_8282F4D0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f4c8
	if (ctx.cr6.eq) goto loc_8282F4C8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f4c0
	if (ctx.cr6.eq) goto loc_8282F4C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f4d4
	goto loc_8282F4D4;
loc_8282F4C0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f4d4
	goto loc_8282F4D4;
loc_8282F4C8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f4d4
	goto loc_8282F4D4;
loc_8282F4D0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F4D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,7256
	ctx.r5.s64 = ctx.r11.s64 + 7256;
	// bl 0x82828948
	ctx.lr = 0x8282F4E4;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f514
	if (ctx.cr6.eq) goto loc_8282F514;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f50c
	if (ctx.cr6.eq) goto loc_8282F50C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f504
	if (ctx.cr6.eq) goto loc_8282F504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f518
	goto loc_8282F518;
loc_8282F504:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f518
	goto loc_8282F518;
loc_8282F50C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f518
	goto loc_8282F518;
loc_8282F514:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F518:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,6952
	ctx.r5.s64 = ctx.r11.s64 + 6952;
	// bl 0x82828948
	ctx.lr = 0x8282F528;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f558
	if (ctx.cr6.eq) goto loc_8282F558;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f550
	if (ctx.cr6.eq) goto loc_8282F550;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f548
	if (ctx.cr6.eq) goto loc_8282F548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f55c
	goto loc_8282F55C;
loc_8282F548:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f55c
	goto loc_8282F55C;
loc_8282F550:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f55c
	goto loc_8282F55C;
loc_8282F558:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F55C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r5,r11,7264
	ctx.r5.s64 = ctx.r11.s64 + 7264;
	// bl 0x82828948
	ctx.lr = 0x8282F56C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f59c
	if (ctx.cr6.eq) goto loc_8282F59C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f594
	if (ctx.cr6.eq) goto loc_8282F594;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f58c
	if (ctx.cr6.eq) goto loc_8282F58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f5a0
	goto loc_8282F5A0;
loc_8282F58C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f5a0
	goto loc_8282F5A0;
loc_8282F594:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f5a0
	goto loc_8282F5A0;
loc_8282F59C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F5A0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,7276
	ctx.r5.s64 = ctx.r11.s64 + 7276;
	// bl 0x82828948
	ctx.lr = 0x8282F5B0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f5e0
	if (ctx.cr6.eq) goto loc_8282F5E0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f5d8
	if (ctx.cr6.eq) goto loc_8282F5D8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f5d0
	if (ctx.cr6.eq) goto loc_8282F5D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f5e4
	goto loc_8282F5E4;
loc_8282F5D0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f5e4
	goto loc_8282F5E4;
loc_8282F5D8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f5e4
	goto loc_8282F5E4;
loc_8282F5E0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F5E4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,7284
	ctx.r5.s64 = ctx.r11.s64 + 7284;
	// bl 0x82828948
	ctx.lr = 0x8282F5F4;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f624
	if (ctx.cr6.eq) goto loc_8282F624;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f61c
	if (ctx.cr6.eq) goto loc_8282F61C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f614
	if (ctx.cr6.eq) goto loc_8282F614;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f628
	goto loc_8282F628;
loc_8282F614:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f628
	goto loc_8282F628;
loc_8282F61C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f628
	goto loc_8282F628;
loc_8282F624:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F628:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,7296
	ctx.r5.s64 = ctx.r11.s64 + 7296;
	// bl 0x82828948
	ctx.lr = 0x8282F638;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f668
	if (ctx.cr6.eq) goto loc_8282F668;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f660
	if (ctx.cr6.eq) goto loc_8282F660;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f658
	if (ctx.cr6.eq) goto loc_8282F658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f66c
	goto loc_8282F66C;
loc_8282F658:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f66c
	goto loc_8282F66C;
loc_8282F660:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f66c
	goto loc_8282F66C;
loc_8282F668:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F66C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r5,r11,7312
	ctx.r5.s64 = ctx.r11.s64 + 7312;
	// bl 0x82828948
	ctx.lr = 0x8282F67C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f6ac
	if (ctx.cr6.eq) goto loc_8282F6AC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f6a4
	if (ctx.cr6.eq) goto loc_8282F6A4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f69c
	if (ctx.cr6.eq) goto loc_8282F69C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f6b0
	goto loc_8282F6B0;
loc_8282F69C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f6b0
	goto loc_8282F6B0;
loc_8282F6A4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f6b0
	goto loc_8282F6B0;
loc_8282F6AC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F6B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,7324
	ctx.r5.s64 = ctx.r11.s64 + 7324;
	// bl 0x82828948
	ctx.lr = 0x8282F6C0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f6f0
	if (ctx.cr6.eq) goto loc_8282F6F0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f6e8
	if (ctx.cr6.eq) goto loc_8282F6E8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f6e0
	if (ctx.cr6.eq) goto loc_8282F6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f6f4
	goto loc_8282F6F4;
loc_8282F6E0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f6f4
	goto loc_8282F6F4;
loc_8282F6E8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f6f4
	goto loc_8282F6F4;
loc_8282F6F0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F6F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r5,r11,5068
	ctx.r5.s64 = ctx.r11.s64 + 5068;
	// bl 0x82828948
	ctx.lr = 0x8282F704;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f734
	if (ctx.cr6.eq) goto loc_8282F734;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f72c
	if (ctx.cr6.eq) goto loc_8282F72C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f724
	if (ctx.cr6.eq) goto loc_8282F724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f738
	goto loc_8282F738;
loc_8282F724:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f738
	goto loc_8282F738;
loc_8282F72C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f738
	goto loc_8282F738;
loc_8282F734:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F738:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,7336
	ctx.r5.s64 = ctx.r11.s64 + 7336;
	// bl 0x82828948
	ctx.lr = 0x8282F748;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f778
	if (ctx.cr6.eq) goto loc_8282F778;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f770
	if (ctx.cr6.eq) goto loc_8282F770;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f768
	if (ctx.cr6.eq) goto loc_8282F768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f77c
	goto loc_8282F77C;
loc_8282F768:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f77c
	goto loc_8282F77C;
loc_8282F770:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f77c
	goto loc_8282F77C;
loc_8282F778:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F77C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r5,r11,7352
	ctx.r5.s64 = ctx.r11.s64 + 7352;
	// bl 0x82828948
	ctx.lr = 0x8282F78C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f7bc
	if (ctx.cr6.eq) goto loc_8282F7BC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f7b4
	if (ctx.cr6.eq) goto loc_8282F7B4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f7ac
	if (ctx.cr6.eq) goto loc_8282F7AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f7c0
	goto loc_8282F7C0;
loc_8282F7AC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f7c0
	goto loc_8282F7C0;
loc_8282F7B4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f7c0
	goto loc_8282F7C0;
loc_8282F7BC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F7C0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r5,r11,7368
	ctx.r5.s64 = ctx.r11.s64 + 7368;
	// bl 0x82828948
	ctx.lr = 0x8282F7D0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f800
	if (ctx.cr6.eq) goto loc_8282F800;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f7f8
	if (ctx.cr6.eq) goto loc_8282F7F8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f7f0
	if (ctx.cr6.eq) goto loc_8282F7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f804
	goto loc_8282F804;
loc_8282F7F0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f804
	goto loc_8282F804;
loc_8282F7F8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f804
	goto loc_8282F804;
loc_8282F800:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F804:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r5,r11,7376
	ctx.r5.s64 = ctx.r11.s64 + 7376;
	// bl 0x82828948
	ctx.lr = 0x8282F814;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f844
	if (ctx.cr6.eq) goto loc_8282F844;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f83c
	if (ctx.cr6.eq) goto loc_8282F83C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f834
	if (ctx.cr6.eq) goto loc_8282F834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f848
	goto loc_8282F848;
loc_8282F834:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f848
	goto loc_8282F848;
loc_8282F83C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f848
	goto loc_8282F848;
loc_8282F844:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F848:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,7388
	ctx.r5.s64 = ctx.r11.s64 + 7388;
	// bl 0x82828948
	ctx.lr = 0x8282F858;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f888
	if (ctx.cr6.eq) goto loc_8282F888;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f880
	if (ctx.cr6.eq) goto loc_8282F880;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f878
	if (ctx.cr6.eq) goto loc_8282F878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f88c
	goto loc_8282F88C;
loc_8282F878:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f88c
	goto loc_8282F88C;
loc_8282F880:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f88c
	goto loc_8282F88C;
loc_8282F888:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F88C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r5,r11,7396
	ctx.r5.s64 = ctx.r11.s64 + 7396;
	// bl 0x82828948
	ctx.lr = 0x8282F89C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f8cc
	if (ctx.cr6.eq) goto loc_8282F8CC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f8c4
	if (ctx.cr6.eq) goto loc_8282F8C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f8bc
	if (ctx.cr6.eq) goto loc_8282F8BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f8d0
	goto loc_8282F8D0;
loc_8282F8BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f8d0
	goto loc_8282F8D0;
loc_8282F8C4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f8d0
	goto loc_8282F8D0;
loc_8282F8CC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F8D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,7404
	ctx.r5.s64 = ctx.r11.s64 + 7404;
	// bl 0x82828948
	ctx.lr = 0x8282F8E0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f910
	if (ctx.cr6.eq) goto loc_8282F910;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f908
	if (ctx.cr6.eq) goto loc_8282F908;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f900
	if (ctx.cr6.eq) goto loc_8282F900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f914
	goto loc_8282F914;
loc_8282F900:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f914
	goto loc_8282F914;
loc_8282F908:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f914
	goto loc_8282F914;
loc_8282F910:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F914:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r5,r11,7412
	ctx.r5.s64 = ctx.r11.s64 + 7412;
	// bl 0x82828948
	ctx.lr = 0x8282F924;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f954
	if (ctx.cr6.eq) goto loc_8282F954;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f94c
	if (ctx.cr6.eq) goto loc_8282F94C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f944
	if (ctx.cr6.eq) goto loc_8282F944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f958
	goto loc_8282F958;
loc_8282F944:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f958
	goto loc_8282F958;
loc_8282F94C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f958
	goto loc_8282F958;
loc_8282F954:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F958:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r5,r11,7432
	ctx.r5.s64 = ctx.r11.s64 + 7432;
	// bl 0x82828948
	ctx.lr = 0x8282F968;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f998
	if (ctx.cr6.eq) goto loc_8282F998;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f990
	if (ctx.cr6.eq) goto loc_8282F990;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f988
	if (ctx.cr6.eq) goto loc_8282F988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f99c
	goto loc_8282F99C;
loc_8282F988:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f99c
	goto loc_8282F99C;
loc_8282F990:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f99c
	goto loc_8282F99C;
loc_8282F998:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F99C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,39
	ctx.r4.s64 = 39;
	// addi r5,r11,7440
	ctx.r5.s64 = ctx.r11.s64 + 7440;
	// bl 0x82828948
	ctx.lr = 0x8282F9AC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282f9dc
	if (ctx.cr6.eq) goto loc_8282F9DC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282f9d4
	if (ctx.cr6.eq) goto loc_8282F9D4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282f9cc
	if (ctx.cr6.eq) goto loc_8282F9CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282f9e0
	goto loc_8282F9E0;
loc_8282F9CC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282f9e0
	goto loc_8282F9E0;
loc_8282F9D4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282f9e0
	goto loc_8282F9E0;
loc_8282F9DC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282F9E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r5,r11,7460
	ctx.r5.s64 = ctx.r11.s64 + 7460;
	// bl 0x82828948
	ctx.lr = 0x8282F9F0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fa20
	if (ctx.cr6.eq) goto loc_8282FA20;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fa18
	if (ctx.cr6.eq) goto loc_8282FA18;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fa10
	if (ctx.cr6.eq) goto loc_8282FA10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fa24
	goto loc_8282FA24;
loc_8282FA10:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fa24
	goto loc_8282FA24;
loc_8282FA18:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fa24
	goto loc_8282FA24;
loc_8282FA20:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FA24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r5,r11,7476
	ctx.r5.s64 = ctx.r11.s64 + 7476;
	// bl 0x82828948
	ctx.lr = 0x8282FA34;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fa64
	if (ctx.cr6.eq) goto loc_8282FA64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fa5c
	if (ctx.cr6.eq) goto loc_8282FA5C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fa54
	if (ctx.cr6.eq) goto loc_8282FA54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fa68
	goto loc_8282FA68;
loc_8282FA54:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fa68
	goto loc_8282FA68;
loc_8282FA5C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fa68
	goto loc_8282FA68;
loc_8282FA64:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FA68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r5,r11,7488
	ctx.r5.s64 = ctx.r11.s64 + 7488;
	// bl 0x82828948
	ctx.lr = 0x8282FA78;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282faa8
	if (ctx.cr6.eq) goto loc_8282FAA8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282faa0
	if (ctx.cr6.eq) goto loc_8282FAA0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fa98
	if (ctx.cr6.eq) goto loc_8282FA98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282faac
	goto loc_8282FAAC;
loc_8282FA98:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282faac
	goto loc_8282FAAC;
loc_8282FAA0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282faac
	goto loc_8282FAAC;
loc_8282FAA8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FAAC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r5,r11,7504
	ctx.r5.s64 = ctx.r11.s64 + 7504;
	// bl 0x82828948
	ctx.lr = 0x8282FABC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282faec
	if (ctx.cr6.eq) goto loc_8282FAEC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fae4
	if (ctx.cr6.eq) goto loc_8282FAE4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fadc
	if (ctx.cr6.eq) goto loc_8282FADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282faf0
	goto loc_8282FAF0;
loc_8282FADC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282faf0
	goto loc_8282FAF0;
loc_8282FAE4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282faf0
	goto loc_8282FAF0;
loc_8282FAEC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FAF0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,49
	ctx.r4.s64 = 49;
	// addi r5,r11,7520
	ctx.r5.s64 = ctx.r11.s64 + 7520;
	// bl 0x82828948
	ctx.lr = 0x8282FB00;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fb30
	if (ctx.cr6.eq) goto loc_8282FB30;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fb28
	if (ctx.cr6.eq) goto loc_8282FB28;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fb20
	if (ctx.cr6.eq) goto loc_8282FB20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fb34
	goto loc_8282FB34;
loc_8282FB20:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fb34
	goto loc_8282FB34;
loc_8282FB28:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fb34
	goto loc_8282FB34;
loc_8282FB30:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FB34:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r5,r11,2408
	ctx.r5.s64 = ctx.r11.s64 + 2408;
	// bl 0x82828948
	ctx.lr = 0x8282FB44;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fb74
	if (ctx.cr6.eq) goto loc_8282FB74;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fb6c
	if (ctx.cr6.eq) goto loc_8282FB6C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fb64
	if (ctx.cr6.eq) goto loc_8282FB64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fb78
	goto loc_8282FB78;
loc_8282FB64:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fb78
	goto loc_8282FB78;
loc_8282FB6C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fb78
	goto loc_8282FB78;
loc_8282FB74:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FB78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,51
	ctx.r4.s64 = 51;
	// addi r5,r11,2424
	ctx.r5.s64 = ctx.r11.s64 + 2424;
	// bl 0x82828948
	ctx.lr = 0x8282FB88;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fbb8
	if (ctx.cr6.eq) goto loc_8282FBB8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fbb0
	if (ctx.cr6.eq) goto loc_8282FBB0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fba8
	if (ctx.cr6.eq) goto loc_8282FBA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fbbc
	goto loc_8282FBBC;
loc_8282FBA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fbbc
	goto loc_8282FBBC;
loc_8282FBB0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fbbc
	goto loc_8282FBBC;
loc_8282FBB8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FBBC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r5,r11,7052
	ctx.r5.s64 = ctx.r11.s64 + 7052;
	// bl 0x82828948
	ctx.lr = 0x8282FBCC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fbfc
	if (ctx.cr6.eq) goto loc_8282FBFC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fbf4
	if (ctx.cr6.eq) goto loc_8282FBF4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fbec
	if (ctx.cr6.eq) goto loc_8282FBEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fc00
	goto loc_8282FC00;
loc_8282FBEC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fc00
	goto loc_8282FC00;
loc_8282FBF4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fc00
	goto loc_8282FC00;
loc_8282FBFC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FC00:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,53
	ctx.r4.s64 = 53;
	// addi r5,r11,7536
	ctx.r5.s64 = ctx.r11.s64 + 7536;
	// bl 0x82828948
	ctx.lr = 0x8282FC10;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fc40
	if (ctx.cr6.eq) goto loc_8282FC40;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fc38
	if (ctx.cr6.eq) goto loc_8282FC38;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fc30
	if (ctx.cr6.eq) goto loc_8282FC30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fc44
	goto loc_8282FC44;
loc_8282FC30:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fc44
	goto loc_8282FC44;
loc_8282FC38:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fc44
	goto loc_8282FC44;
loc_8282FC40:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FC44:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,57
	ctx.r4.s64 = 57;
	// addi r5,r11,7544
	ctx.r5.s64 = ctx.r11.s64 + 7544;
	// bl 0x82828948
	ctx.lr = 0x8282FC54;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fc84
	if (ctx.cr6.eq) goto loc_8282FC84;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fc7c
	if (ctx.cr6.eq) goto loc_8282FC7C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fc74
	if (ctx.cr6.eq) goto loc_8282FC74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fc88
	goto loc_8282FC88;
loc_8282FC74:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fc88
	goto loc_8282FC88;
loc_8282FC7C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fc88
	goto loc_8282FC88;
loc_8282FC84:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FC88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r5,r11,7556
	ctx.r5.s64 = ctx.r11.s64 + 7556;
	// bl 0x82828948
	ctx.lr = 0x8282FC98;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fcc8
	if (ctx.cr6.eq) goto loc_8282FCC8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fcc0
	if (ctx.cr6.eq) goto loc_8282FCC0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fcb8
	if (ctx.cr6.eq) goto loc_8282FCB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fccc
	goto loc_8282FCCC;
loc_8282FCB8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fccc
	goto loc_8282FCCC;
loc_8282FCC0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fccc
	goto loc_8282FCCC;
loc_8282FCC8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FCCC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r5,r11,7564
	ctx.r5.s64 = ctx.r11.s64 + 7564;
	// bl 0x82828948
	ctx.lr = 0x8282FCDC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fd0c
	if (ctx.cr6.eq) goto loc_8282FD0C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fd04
	if (ctx.cr6.eq) goto loc_8282FD04;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fcfc
	if (ctx.cr6.eq) goto loc_8282FCFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fd10
	goto loc_8282FD10;
loc_8282FCFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fd10
	goto loc_8282FD10;
loc_8282FD04:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fd10
	goto loc_8282FD10;
loc_8282FD0C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FD10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r5,r11,7576
	ctx.r5.s64 = ctx.r11.s64 + 7576;
	// bl 0x82828948
	ctx.lr = 0x8282FD20;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fd50
	if (ctx.cr6.eq) goto loc_8282FD50;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fd48
	if (ctx.cr6.eq) goto loc_8282FD48;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fd40
	if (ctx.cr6.eq) goto loc_8282FD40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fd54
	goto loc_8282FD54;
loc_8282FD40:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fd54
	goto loc_8282FD54;
loc_8282FD48:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fd54
	goto loc_8282FD54;
loc_8282FD50:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FD54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r5,r11,7596
	ctx.r5.s64 = ctx.r11.s64 + 7596;
	// bl 0x82828948
	ctx.lr = 0x8282FD64;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fd94
	if (ctx.cr6.eq) goto loc_8282FD94;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fd8c
	if (ctx.cr6.eq) goto loc_8282FD8C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fd84
	if (ctx.cr6.eq) goto loc_8282FD84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fd98
	goto loc_8282FD98;
loc_8282FD84:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fd98
	goto loc_8282FD98;
loc_8282FD8C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fd98
	goto loc_8282FD98;
loc_8282FD94:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FD98:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,37
	ctx.r4.s64 = 37;
	// addi r29,r11,7612
	ctx.r29.s64 = ctx.r11.s64 + 7612;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82828948
	ctx.lr = 0x8282FDAC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fddc
	if (ctx.cr6.eq) goto loc_8282FDDC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fdd4
	if (ctx.cr6.eq) goto loc_8282FDD4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fdcc
	if (ctx.cr6.eq) goto loc_8282FDCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fde0
	goto loc_8282FDE0;
loc_8282FDCC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fde0
	goto loc_8282FDE0;
loc_8282FDD4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fde0
	goto loc_8282FDE0;
loc_8282FDDC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FDE0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,38
	ctx.r4.s64 = 38;
	// addi r30,r11,7628
	ctx.r30.s64 = ctx.r11.s64 + 7628;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82828948
	ctx.lr = 0x8282FDF4;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fe24
	if (ctx.cr6.eq) goto loc_8282FE24;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fe1c
	if (ctx.cr6.eq) goto loc_8282FE1C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fe14
	if (ctx.cr6.eq) goto loc_8282FE14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fe28
	goto loc_8282FE28;
loc_8282FE14:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fe28
	goto loc_8282FE28;
loc_8282FE1C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fe28
	goto loc_8282FE28;
loc_8282FE24:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FE28:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r5,r11,7648
	ctx.r5.s64 = ctx.r11.s64 + 7648;
	// bl 0x82828948
	ctx.lr = 0x8282FE38;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fe68
	if (ctx.cr6.eq) goto loc_8282FE68;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fe60
	if (ctx.cr6.eq) goto loc_8282FE60;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fe58
	if (ctx.cr6.eq) goto loc_8282FE58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282fe6c
	goto loc_8282FE6C;
loc_8282FE58:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282fe6c
	goto loc_8282FE6C;
loc_8282FE60:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282fe6c
	goto loc_8282FE6C;
loc_8282FE68:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FE6C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82828948
	ctx.lr = 0x8282FE78;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fea8
	if (ctx.cr6.eq) goto loc_8282FEA8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fea0
	if (ctx.cr6.eq) goto loc_8282FEA0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fe98
	if (ctx.cr6.eq) goto loc_8282FE98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282feac
	goto loc_8282FEAC;
loc_8282FE98:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8282feac
	goto loc_8282FEAC;
loc_8282FEA0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282feac
	goto loc_8282FEAC;
loc_8282FEA8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FEAC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x82828948
	ctx.lr = 0x8282FEB8;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282fee8
	if (ctx.cr6.eq) goto loc_8282FEE8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282fee0
	if (ctx.cr6.eq) goto loc_8282FEE0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282fed8
	if (ctx.cr6.eq) goto loc_8282FED8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282feec
	goto loc_8282FEEC;
loc_8282FED8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8282feec
	goto loc_8282FEEC;
loc_8282FEE0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282feec
	goto loc_8282FEEC;
loc_8282FEE8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FEEC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1580(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1580);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x8282ff38
	if (ctx.cr6.eq) goto loc_8282FF38;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282ff30
	if (ctx.cr6.eq) goto loc_8282FF30;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282ff28
	if (ctx.cr6.eq) goto loc_8282FF28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282ff3c
	goto loc_8282FF3C;
loc_8282FF28:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8282ff3c
	goto loc_8282FF3C;
loc_8282FF30:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282ff3c
	goto loc_8282FF3C;
loc_8282FF38:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FF3C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1860(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1860);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x8282ff88
	if (ctx.cr6.eq) goto loc_8282FF88;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282ff80
	if (ctx.cr6.eq) goto loc_8282FF80;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282ff78
	if (ctx.cr6.eq) goto loc_8282FF78;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282ff8c
	goto loc_8282FF8C;
loc_8282FF78:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8282ff8c
	goto loc_8282FF8C;
loc_8282FF80:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282ff8c
	goto loc_8282FF8C;
loc_8282FF88:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FF8C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1788(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1788);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x8282ffd8
	if (ctx.cr6.eq) goto loc_8282FFD8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8282ffd0
	if (ctx.cr6.eq) goto loc_8282FFD0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282ffc8
	if (ctx.cr6.eq) goto loc_8282FFC8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282ffdc
	goto loc_8282FFDC;
loc_8282FFC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8282ffdc
	goto loc_8282FFDC;
loc_8282FFD0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8282ffdc
	goto loc_8282FFDC;
loc_8282FFD8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8282FFDC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1700(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1700);
	// ld r7,1556(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1556);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1700(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1700, ctx.r6.u64);
	// beq cr6,0x82830028
	if (ctx.cr6.eq) goto loc_82830028;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830020
	if (ctx.cr6.eq) goto loc_82830020;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830018
	if (ctx.cr6.eq) goto loc_82830018;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283002c
	goto loc_8283002C;
loc_82830018:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283002c
	goto loc_8283002C;
loc_82830020:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283002c
	goto loc_8283002C;
loc_82830028:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283002C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1700(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1700);
	// ld r7,1564(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1564);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1700(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1700, ctx.r6.u64);
	// beq cr6,0x82830078
	if (ctx.cr6.eq) goto loc_82830078;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830070
	if (ctx.cr6.eq) goto loc_82830070;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830068
	if (ctx.cr6.eq) goto loc_82830068;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283007c
	goto loc_8283007C;
loc_82830068:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283007c
	goto loc_8283007C;
loc_82830070:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283007c
	goto loc_8283007C;
loc_82830078:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283007C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1700(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1700);
	// ld r7,1572(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1572);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1700(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1700, ctx.r6.u64);
	// beq cr6,0x828300c8
	if (ctx.cr6.eq) goto loc_828300C8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828300c0
	if (ctx.cr6.eq) goto loc_828300C0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828300b8
	if (ctx.cr6.eq) goto loc_828300B8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828300cc
	goto loc_828300CC;
loc_828300B8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828300cc
	goto loc_828300CC;
loc_828300C0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828300cc
	goto loc_828300CC;
loc_828300C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828300CC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1668(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1668);
	// ld r7,1700(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1700);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1668(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1668, ctx.r6.u64);
	// beq cr6,0x82830118
	if (ctx.cr6.eq) goto loc_82830118;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830110
	if (ctx.cr6.eq) goto loc_82830110;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830108
	if (ctx.cr6.eq) goto loc_82830108;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283011c
	goto loc_8283011C;
loc_82830108:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283011c
	goto loc_8283011C;
loc_82830110:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283011c
	goto loc_8283011C;
loc_82830118:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283011C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1668(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1668);
	// ld r7,1692(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1668(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1668, ctx.r6.u64);
	// beq cr6,0x82830168
	if (ctx.cr6.eq) goto loc_82830168;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830160
	if (ctx.cr6.eq) goto loc_82830160;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830158
	if (ctx.cr6.eq) goto loc_82830158;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283016c
	goto loc_8283016C;
loc_82830158:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283016c
	goto loc_8283016C;
loc_82830160:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283016c
	goto loc_8283016C;
loc_82830168:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283016C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1668(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1668);
	// ld r7,1596(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1596);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1668(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1668, ctx.r6.u64);
	// beq cr6,0x828301b8
	if (ctx.cr6.eq) goto loc_828301B8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828301b0
	if (ctx.cr6.eq) goto loc_828301B0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828301a8
	if (ctx.cr6.eq) goto loc_828301A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828301bc
	goto loc_828301BC;
loc_828301A8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828301bc
	goto loc_828301BC;
loc_828301B0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828301bc
	goto loc_828301BC;
loc_828301B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828301BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1676(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1676);
	// ld r7,1508(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1508);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1676(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1676, ctx.r6.u64);
	// beq cr6,0x82830208
	if (ctx.cr6.eq) goto loc_82830208;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830200
	if (ctx.cr6.eq) goto loc_82830200;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828301f8
	if (ctx.cr6.eq) goto loc_828301F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283020c
	goto loc_8283020C;
loc_828301F8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283020c
	goto loc_8283020C;
loc_82830200:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283020c
	goto loc_8283020C;
loc_82830208:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283020C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1676(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1676);
	// ld r7,1564(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1564);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1676(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1676, ctx.r6.u64);
	// beq cr6,0x82830258
	if (ctx.cr6.eq) goto loc_82830258;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830250
	if (ctx.cr6.eq) goto loc_82830250;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830248
	if (ctx.cr6.eq) goto loc_82830248;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283025c
	goto loc_8283025C;
loc_82830248:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283025c
	goto loc_8283025C;
loc_82830250:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283025c
	goto loc_8283025C;
loc_82830258:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283025C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1676(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1676);
	// ld r7,1788(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1788);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1676(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1676, ctx.r6.u64);
	// beq cr6,0x828302a8
	if (ctx.cr6.eq) goto loc_828302A8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828302a0
	if (ctx.cr6.eq) goto loc_828302A0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830298
	if (ctx.cr6.eq) goto loc_82830298;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828302ac
	goto loc_828302AC;
loc_82830298:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828302ac
	goto loc_828302AC;
loc_828302A0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828302ac
	goto loc_828302AC;
loc_828302A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828302AC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1900(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1900);
	// ld r7,1884(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1884);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1900(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1900, ctx.r6.u64);
	// beq cr6,0x828302f8
	if (ctx.cr6.eq) goto loc_828302F8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828302f0
	if (ctx.cr6.eq) goto loc_828302F0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828302e8
	if (ctx.cr6.eq) goto loc_828302E8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828302fc
	goto loc_828302FC;
loc_828302E8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828302fc
	goto loc_828302FC;
loc_828302F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828302fc
	goto loc_828302FC;
loc_828302F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828302FC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1900(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1900);
	// ld r7,1892(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1892);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1900(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1900, ctx.r6.u64);
	// beq cr6,0x82830348
	if (ctx.cr6.eq) goto loc_82830348;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830340
	if (ctx.cr6.eq) goto loc_82830340;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830338
	if (ctx.cr6.eq) goto loc_82830338;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283034c
	goto loc_8283034C;
loc_82830338:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283034c
	goto loc_8283034C;
loc_82830340:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283034c
	goto loc_8283034C;
loc_82830348:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283034C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1932(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1932);
	// ld r7,1572(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1572);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1932(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1932, ctx.r6.u64);
	// beq cr6,0x82830398
	if (ctx.cr6.eq) goto loc_82830398;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830390
	if (ctx.cr6.eq) goto loc_82830390;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830388
	if (ctx.cr6.eq) goto loc_82830388;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283039c
	goto loc_8283039C;
loc_82830388:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283039c
	goto loc_8283039C;
loc_82830390:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283039c
	goto loc_8283039C;
loc_82830398:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283039C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1932(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1932);
	// ld r7,1860(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1860);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1932(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1932, ctx.r6.u64);
	// beq cr6,0x828303e8
	if (ctx.cr6.eq) goto loc_828303E8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828303e0
	if (ctx.cr6.eq) goto loc_828303E0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828303d8
	if (ctx.cr6.eq) goto loc_828303D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828303ec
	goto loc_828303EC;
loc_828303D8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828303ec
	goto loc_828303EC;
loc_828303E0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828303ec
	goto loc_828303EC;
loc_828303E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828303EC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1684(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1684);
	// ld r7,1548(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1548);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1684(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1684, ctx.r6.u64);
	// beq cr6,0x82830438
	if (ctx.cr6.eq) goto loc_82830438;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830430
	if (ctx.cr6.eq) goto loc_82830430;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830428
	if (ctx.cr6.eq) goto loc_82830428;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283043c
	goto loc_8283043C;
loc_82830428:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283043c
	goto loc_8283043C;
loc_82830430:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283043c
	goto loc_8283043C;
loc_82830438:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283043C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1684(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1684);
	// ld r7,1500(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1500);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1684(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1684, ctx.r6.u64);
	// beq cr6,0x82830488
	if (ctx.cr6.eq) goto loc_82830488;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830480
	if (ctx.cr6.eq) goto loc_82830480;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830478
	if (ctx.cr6.eq) goto loc_82830478;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283048c
	goto loc_8283048C;
loc_82830478:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283048c
	goto loc_8283048C;
loc_82830480:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283048c
	goto loc_8283048C;
loc_82830488:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283048C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1684(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1684);
	// ld r7,1540(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1540);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1684(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1684, ctx.r6.u64);
	// beq cr6,0x828304d8
	if (ctx.cr6.eq) goto loc_828304D8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828304d0
	if (ctx.cr6.eq) goto loc_828304D0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828304c8
	if (ctx.cr6.eq) goto loc_828304C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828304dc
	goto loc_828304DC;
loc_828304C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828304dc
	goto loc_828304DC;
loc_828304D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828304dc
	goto loc_828304DC;
loc_828304D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828304DC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1684(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1684);
	// ld r7,1652(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1652);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1684(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1684, ctx.r6.u64);
	// beq cr6,0x82830528
	if (ctx.cr6.eq) goto loc_82830528;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830520
	if (ctx.cr6.eq) goto loc_82830520;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830518
	if (ctx.cr6.eq) goto loc_82830518;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283052c
	goto loc_8283052C;
loc_82830518:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283052c
	goto loc_8283052C;
loc_82830520:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283052c
	goto loc_8283052C;
loc_82830528:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283052C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1684(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1684);
	// ld r7,1828(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1828);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1684(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1684, ctx.r6.u64);
	// beq cr6,0x82830578
	if (ctx.cr6.eq) goto loc_82830578;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830570
	if (ctx.cr6.eq) goto loc_82830570;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830568
	if (ctx.cr6.eq) goto loc_82830568;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283057c
	goto loc_8283057C;
loc_82830568:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283057c
	goto loc_8283057C;
loc_82830570:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283057c
	goto loc_8283057C;
loc_82830578:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283057C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1684(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1684);
	// ld r7,1900(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1900);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1684(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1684, ctx.r6.u64);
	// beq cr6,0x828305c8
	if (ctx.cr6.eq) goto loc_828305C8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828305c0
	if (ctx.cr6.eq) goto loc_828305C0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828305b8
	if (ctx.cr6.eq) goto loc_828305B8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828305cc
	goto loc_828305CC;
loc_828305B8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828305cc
	goto loc_828305CC;
loc_828305C0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828305cc
	goto loc_828305CC;
loc_828305C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828305CC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1476(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1476);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x82830618
	if (ctx.cr6.eq) goto loc_82830618;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830610
	if (ctx.cr6.eq) goto loc_82830610;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830608
	if (ctx.cr6.eq) goto loc_82830608;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283061c
	goto loc_8283061C;
loc_82830608:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283061c
	goto loc_8283061C;
loc_82830610:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283061c
	goto loc_8283061C;
loc_82830618:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283061C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1524(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1524);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x82830668
	if (ctx.cr6.eq) goto loc_82830668;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830660
	if (ctx.cr6.eq) goto loc_82830660;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830658
	if (ctx.cr6.eq) goto loc_82830658;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283066c
	goto loc_8283066C;
loc_82830658:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283066c
	goto loc_8283066C;
loc_82830660:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283066c
	goto loc_8283066C;
loc_82830668:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283066C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1612(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1612);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x828306b8
	if (ctx.cr6.eq) goto loc_828306B8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828306b0
	if (ctx.cr6.eq) goto loc_828306B0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828306a8
	if (ctx.cr6.eq) goto loc_828306A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828306bc
	goto loc_828306BC;
loc_828306A8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828306bc
	goto loc_828306BC;
loc_828306B0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828306bc
	goto loc_828306BC;
loc_828306B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828306BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1716(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1716);
	// ld r7,1524(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1524);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1716(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1716, ctx.r6.u64);
	// beq cr6,0x82830708
	if (ctx.cr6.eq) goto loc_82830708;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830700
	if (ctx.cr6.eq) goto loc_82830700;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828306f8
	if (ctx.cr6.eq) goto loc_828306F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283070c
	goto loc_8283070C;
loc_828306F8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283070c
	goto loc_8283070C;
loc_82830700:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283070c
	goto loc_8283070C;
loc_82830708:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283070C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1716(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1716);
	// ld r7,1612(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1612);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1716(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1716, ctx.r6.u64);
	// beq cr6,0x82830758
	if (ctx.cr6.eq) goto loc_82830758;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830750
	if (ctx.cr6.eq) goto loc_82830750;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830748
	if (ctx.cr6.eq) goto loc_82830748;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283075c
	goto loc_8283075C;
loc_82830748:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283075c
	goto loc_8283075C;
loc_82830750:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283075c
	goto loc_8283075C;
loc_82830758:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283075C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1716(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1716);
	// ld r7,1532(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1532);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1716(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1716, ctx.r6.u64);
	// beq cr6,0x828307a8
	if (ctx.cr6.eq) goto loc_828307A8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828307a0
	if (ctx.cr6.eq) goto loc_828307A0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830798
	if (ctx.cr6.eq) goto loc_82830798;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828307ac
	goto loc_828307AC;
loc_82830798:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828307ac
	goto loc_828307AC;
loc_828307A0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828307ac
	goto loc_828307AC;
loc_828307A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828307AC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1724(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1724);
	// ld r7,1628(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1628);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1724(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1724, ctx.r6.u64);
	// beq cr6,0x828307f8
	if (ctx.cr6.eq) goto loc_828307F8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828307f0
	if (ctx.cr6.eq) goto loc_828307F0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828307e8
	if (ctx.cr6.eq) goto loc_828307E8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828307fc
	goto loc_828307FC;
loc_828307E8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828307fc
	goto loc_828307FC;
loc_828307F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828307fc
	goto loc_828307FC;
loc_828307F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828307FC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1724(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1724);
	// ld r7,1636(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1636);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1724(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1724, ctx.r6.u64);
	// beq cr6,0x82830848
	if (ctx.cr6.eq) goto loc_82830848;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830840
	if (ctx.cr6.eq) goto loc_82830840;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830838
	if (ctx.cr6.eq) goto loc_82830838;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283084c
	goto loc_8283084C;
loc_82830838:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283084c
	goto loc_8283084C;
loc_82830840:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283084c
	goto loc_8283084C;
loc_82830848:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283084C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1724(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1724);
	// ld r7,1644(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1644);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1724(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1724, ctx.r6.u64);
	// beq cr6,0x82830898
	if (ctx.cr6.eq) goto loc_82830898;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830890
	if (ctx.cr6.eq) goto loc_82830890;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830888
	if (ctx.cr6.eq) goto loc_82830888;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283089c
	goto loc_8283089C;
loc_82830888:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283089c
	goto loc_8283089C;
loc_82830890:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283089c
	goto loc_8283089C;
loc_82830898:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283089C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1844(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1844);
	// ld r7,1604(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1604);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1844(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1844, ctx.r6.u64);
	// beq cr6,0x828308e8
	if (ctx.cr6.eq) goto loc_828308E8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828308e0
	if (ctx.cr6.eq) goto loc_828308E0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828308d8
	if (ctx.cr6.eq) goto loc_828308D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828308ec
	goto loc_828308EC;
loc_828308D8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828308ec
	goto loc_828308EC;
loc_828308E0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828308ec
	goto loc_828308EC;
loc_828308E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828308EC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1844(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1844);
	// ld r7,1836(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1836);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1844(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1844, ctx.r6.u64);
	// beq cr6,0x82830938
	if (ctx.cr6.eq) goto loc_82830938;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830930
	if (ctx.cr6.eq) goto loc_82830930;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830928
	if (ctx.cr6.eq) goto loc_82830928;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283093c
	goto loc_8283093C;
loc_82830928:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283093c
	goto loc_8283093C;
loc_82830930:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283093c
	goto loc_8283093C;
loc_82830938:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283093C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1852(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1852);
	// ld r7,1820(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1820);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1852(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1852, ctx.r6.u64);
	// beq cr6,0x82830988
	if (ctx.cr6.eq) goto loc_82830988;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830980
	if (ctx.cr6.eq) goto loc_82830980;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830978
	if (ctx.cr6.eq) goto loc_82830978;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283098c
	goto loc_8283098C;
loc_82830978:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8283098c
	goto loc_8283098C;
loc_82830980:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8283098c
	goto loc_8283098C;
loc_82830988:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8283098C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1852(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1852);
	// ld r7,1828(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1828);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1852(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1852, ctx.r6.u64);
	// beq cr6,0x828309d8
	if (ctx.cr6.eq) goto loc_828309D8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828309d0
	if (ctx.cr6.eq) goto loc_828309D0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828309c8
	if (ctx.cr6.eq) goto loc_828309C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828309dc
	goto loc_828309DC;
loc_828309C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828309dc
	goto loc_828309DC;
loc_828309D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x828309dc
	goto loc_828309DC;
loc_828309D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_828309DC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1852(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1852);
	// ld r7,1836(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1836);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1852(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1852, ctx.r6.u64);
	// beq cr6,0x82830a28
	if (ctx.cr6.eq) goto loc_82830A28;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830a20
	if (ctx.cr6.eq) goto loc_82830A20;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830a18
	if (ctx.cr6.eq) goto loc_82830A18;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82830a2c
	goto loc_82830A2C;
loc_82830A18:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82830a2c
	goto loc_82830A2C;
loc_82830A20:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82830a2c
	goto loc_82830A2C;
loc_82830A28:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82830A2C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1908(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1908);
	// ld r7,1796(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1796);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1908(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1908, ctx.r6.u64);
	// beq cr6,0x82830a78
	if (ctx.cr6.eq) goto loc_82830A78;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830a70
	if (ctx.cr6.eq) goto loc_82830A70;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830a68
	if (ctx.cr6.eq) goto loc_82830A68;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82830a7c
	goto loc_82830A7C;
loc_82830A68:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82830a7c
	goto loc_82830A7C;
loc_82830A70:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82830a7c
	goto loc_82830A7C;
loc_82830A78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82830A7C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1908(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1908);
	// ld r7,1676(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1676);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1908(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1908, ctx.r6.u64);
	// beq cr6,0x82830ac8
	if (ctx.cr6.eq) goto loc_82830AC8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830ac0
	if (ctx.cr6.eq) goto loc_82830AC0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830ab8
	if (ctx.cr6.eq) goto loc_82830AB8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82830acc
	goto loc_82830ACC;
loc_82830AB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82830acc
	goto loc_82830ACC;
loc_82830AC0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82830acc
	goto loc_82830ACC;
loc_82830AC8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82830ACC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1908(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1908);
	// ld r7,1612(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1612);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1908(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1908, ctx.r6.u64);
	// beq cr6,0x82830b18
	if (ctx.cr6.eq) goto loc_82830B18;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830b10
	if (ctx.cr6.eq) goto loc_82830B10;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830b08
	if (ctx.cr6.eq) goto loc_82830B08;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82830b1c
	goto loc_82830B1C;
loc_82830B08:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82830b1c
	goto loc_82830B1C;
loc_82830B10:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82830b1c
	goto loc_82830B1C;
loc_82830B18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82830B1C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1916(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1916);
	// ld r7,1476(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1476);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1916(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1916, ctx.r6.u64);
	// beq cr6,0x82830b68
	if (ctx.cr6.eq) goto loc_82830B68;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830b60
	if (ctx.cr6.eq) goto loc_82830B60;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830b58
	if (ctx.cr6.eq) goto loc_82830B58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82830b6c
	goto loc_82830B6C;
loc_82830B58:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82830b6c
	goto loc_82830B6C;
loc_82830B60:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82830b6c
	goto loc_82830B6C;
loc_82830B68:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82830B6C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1916(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1916);
	// ld r7,1484(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1484);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1916(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1916, ctx.r6.u64);
	// bl 0x8212c000
	ctx.lr = 0x82830B90;
	sub_8212C000(ctx, base);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// ld r10,1916(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1916);
	// ld r9,1796(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1796);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r8,1916(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1916, ctx.r8.u64);
	// bl 0x8212c000
	ctx.lr = 0x82830BB4;
	sub_8212C000(ctx, base);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// ld r4,1916(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1916);
	// ld r3,1492(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1492);
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r11,1916(r5)
	PPC_STORE_U64(ctx.r5.u32 + 1916, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82830BDC"))) PPC_WEAK_FUNC(sub_82830BDC);
PPC_FUNC_IMPL(__imp__sub_82830BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82830BE0"))) PPC_WEAK_FUNC(sub_82830BE0);
PPC_FUNC_IMPL(__imp__sub_82830BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82830BE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r25,13180(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// addi r29,r9,-29532
	ctx.r29.s64 = ctx.r9.s64 + -29532;
	// lwz r23,13188(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r24,13192(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82830c50
	if (ctx.cr6.eq) goto loc_82830C50;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82830c48
	if (ctx.cr6.eq) goto loc_82830C48;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82830c54
	if (!ctx.cr6.eq) goto loc_82830C54;
	// b 0x82830c54
	goto loc_82830C54;
loc_82830C48:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830c54
	goto loc_82830C54;
loc_82830C50:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830C54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,1856
	ctx.r5.s64 = ctx.r11.s64 + 1856;
	// bl 0x82828a58
	ctx.lr = 0x82830C64;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830c80
	if (ctx.cr6.eq) goto loc_82830C80;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830c84
	if (!ctx.cr6.eq) goto loc_82830C84;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830c84
	goto loc_82830C84;
loc_82830C80:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830C84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,4552
	ctx.r5.s64 = ctx.r11.s64 + 4552;
	// bl 0x82828a58
	ctx.lr = 0x82830C94;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830cb0
	if (ctx.cr6.eq) goto loc_82830CB0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830cb4
	if (!ctx.cr6.eq) goto loc_82830CB4;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830cb4
	goto loc_82830CB4;
loc_82830CB0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830CB4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r5,r11,4560
	ctx.r5.s64 = ctx.r11.s64 + 4560;
	// bl 0x82828a58
	ctx.lr = 0x82830CC4;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830ce0
	if (ctx.cr6.eq) goto loc_82830CE0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830ce4
	if (!ctx.cr6.eq) goto loc_82830CE4;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830ce4
	goto loc_82830CE4;
loc_82830CE0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830CE4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// bl 0x82828a58
	ctx.lr = 0x82830CF4;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830d10
	if (ctx.cr6.eq) goto loc_82830D10;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830d14
	if (!ctx.cr6.eq) goto loc_82830D14;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830d14
	goto loc_82830D14;
loc_82830D10:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830D14:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1880
	ctx.r5.s64 = ctx.r11.s64 + 1880;
	// bl 0x82828a58
	ctx.lr = 0x82830D24;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830d40
	if (ctx.cr6.eq) goto loc_82830D40;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830d44
	if (!ctx.cr6.eq) goto loc_82830D44;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830d44
	goto loc_82830D44;
loc_82830D40:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830D44:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r5,r11,1892
	ctx.r5.s64 = ctx.r11.s64 + 1892;
	// bl 0x82828a58
	ctx.lr = 0x82830D54;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830d70
	if (ctx.cr6.eq) goto loc_82830D70;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830d74
	if (!ctx.cr6.eq) goto loc_82830D74;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830d74
	goto loc_82830D74;
loc_82830D70:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830D74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r31,r11,4584
	ctx.r31.s64 = ctx.r11.s64 + 4584;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82828a58
	ctx.lr = 0x82830D88;
	sub_82828A58(ctx, base);
	// lwz r11,13188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82830da4
	if (ctx.cr6.eq) goto loc_82830DA4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82830da8
	if (!ctx.cr6.eq) goto loc_82830DA8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830da8
	goto loc_82830DA8;
loc_82830DA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830DA8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82828a58
	ctx.lr = 0x82830DB8;
	sub_82828A58(ctx, base);
	// lwz r11,13188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82830dd4
	if (ctx.cr6.eq) goto loc_82830DD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82830dd8
	if (!ctx.cr6.eq) goto loc_82830DD8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830dd8
	goto loc_82830DD8;
loc_82830DD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830DD8:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r10,4600
	ctx.r5.s64 = ctx.r10.s64 + 4600;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82828a58
	ctx.lr = 0x82830DEC;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830e08
	if (ctx.cr6.eq) goto loc_82830E08;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830e0c
	if (!ctx.cr6.eq) goto loc_82830E0C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830e0c
	goto loc_82830E0C;
loc_82830E08:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830E0C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r5,r11,4612
	ctx.r5.s64 = ctx.r11.s64 + 4612;
	// bl 0x82828a58
	ctx.lr = 0x82830E1C;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830e38
	if (ctx.cr6.eq) goto loc_82830E38;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830e3c
	if (!ctx.cr6.eq) goto loc_82830E3C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830e3c
	goto loc_82830E3C;
loc_82830E38:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830E3C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,4624
	ctx.r5.s64 = ctx.r11.s64 + 4624;
	// bl 0x82828a58
	ctx.lr = 0x82830E4C;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830e68
	if (ctx.cr6.eq) goto loc_82830E68;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830e6c
	if (!ctx.cr6.eq) goto loc_82830E6C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830e6c
	goto loc_82830E6C;
loc_82830E68:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830E6C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r5,r11,1872
	ctx.r5.s64 = ctx.r11.s64 + 1872;
	// bl 0x82828a58
	ctx.lr = 0x82830E7C;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82830e98
	if (ctx.cr6.eq) goto loc_82830E98;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82830e9c
	if (!ctx.cr6.eq) goto loc_82830E9C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82830e9c
	goto loc_82830E9C;
loc_82830E98:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82830E9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r5,r11,4636
	ctx.r5.s64 = ctx.r11.s64 + 4636;
	// bl 0x82828a58
	ctx.lr = 0x82830EAC;
	sub_82828A58(ctx, base);
	// stw r24,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r24.u32);
	// stw r25,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r25.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r23,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82830EC4"))) PPC_WEAK_FUNC(sub_82830EC4);
PPC_FUNC_IMPL(__imp__sub_82830EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82830EC8"))) PPC_WEAK_FUNC(sub_82830EC8);
PPC_FUNC_IMPL(__imp__sub_82830EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82830ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x82830f0c
	if (ctx.cr6.eq) goto loc_82830F0C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830f04
	if (ctx.cr6.eq) goto loc_82830F04;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830efc
	if (ctx.cr6.eq) goto loc_82830EFC;
	// b 0x82830f10
	goto loc_82830F10;
loc_82830EFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82830f10
	goto loc_82830F10;
loc_82830F04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82830f10
	goto loc_82830F10;
loc_82830F0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82830F10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r11,4528
	ctx.r29.s64 = ctx.r11.s64 + 4528;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82828b78
	ctx.lr = 0x82830F24;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82830f54
	if (ctx.cr6.eq) goto loc_82830F54;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830f4c
	if (ctx.cr6.eq) goto loc_82830F4C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830f44
	if (ctx.cr6.eq) goto loc_82830F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82830f58
	goto loc_82830F58;
loc_82830F44:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82830f58
	goto loc_82830F58;
loc_82830F4C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82830f58
	goto loc_82830F58;
loc_82830F54:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82830F58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-16100
	ctx.r5.s64 = ctx.r11.s64 + -16100;
	// bl 0x82828b78
	ctx.lr = 0x82830F68;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82830f98
	if (ctx.cr6.eq) goto loc_82830F98;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830f90
	if (ctx.cr6.eq) goto loc_82830F90;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830f88
	if (ctx.cr6.eq) goto loc_82830F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82830f9c
	goto loc_82830F9C;
loc_82830F88:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82830f9c
	goto loc_82830F9C;
loc_82830F90:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82830f9c
	goto loc_82830F9C;
loc_82830F98:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82830F9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,4536
	ctx.r5.s64 = ctx.r11.s64 + 4536;
	// bl 0x82828b78
	ctx.lr = 0x82830FAC;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82830fdc
	if (ctx.cr6.eq) goto loc_82830FDC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82830fd4
	if (ctx.cr6.eq) goto loc_82830FD4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82830fcc
	if (ctx.cr6.eq) goto loc_82830FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82830fe0
	goto loc_82830FE0;
loc_82830FCC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82830fe0
	goto loc_82830FE0;
loc_82830FD4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82830fe0
	goto loc_82830FE0;
loc_82830FDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82830FE0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,4544
	ctx.r5.s64 = ctx.r11.s64 + 4544;
	// bl 0x82828b78
	ctx.lr = 0x82830FF0;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831050
	if (ctx.cr6.eq) goto loc_82831050;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831038
	if (ctx.cr6.eq) goto loc_82831038;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831020
	if (ctx.cr6.eq) goto loc_82831020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82828b78
	ctx.lr = 0x82831018;
	sub_82828B78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82831020:
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82828b78
	ctx.lr = 0x82831030;
	sub_82828B78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82831038:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82828b78
	ctx.lr = 0x82831048;
	sub_82828B78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82831050:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82828b78
	ctx.lr = 0x82831060;
	sub_82828B78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82831068"))) PPC_WEAK_FUNC(sub_82831068);
PPC_FUNC_IMPL(__imp__sub_82831068) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x828310b4
	if (ctx.cr6.eq) goto loc_828310B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828310ac
	if (ctx.cr6.eq) goto loc_828310AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828310a4
	if (ctx.cr6.eq) goto loc_828310A4;
	// b 0x828310b8
	goto loc_828310B8;
loc_828310A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828310b8
	goto loc_828310B8;
loc_828310AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828310b8
	goto loc_828310B8;
loc_828310B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828310B8:
	// li r5,181
	ctx.r5.s64 = 181;
	// li r4,202
	ctx.r4.s64 = 202;
	// bl 0x82828ce0
	ctx.lr = 0x828310C4;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828310f4
	if (ctx.cr6.eq) goto loc_828310F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828310ec
	if (ctx.cr6.eq) goto loc_828310EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828310e4
	if (ctx.cr6.eq) goto loc_828310E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828310f8
	goto loc_828310F8;
loc_828310E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828310f8
	goto loc_828310F8;
loc_828310EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828310f8
	goto loc_828310F8;
loc_828310F4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828310F8:
	// li r5,182
	ctx.r5.s64 = 182;
	// li r4,202
	ctx.r4.s64 = 202;
	// bl 0x82828ce0
	ctx.lr = 0x82831104;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831134
	if (ctx.cr6.eq) goto loc_82831134;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283112c
	if (ctx.cr6.eq) goto loc_8283112C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831124
	if (ctx.cr6.eq) goto loc_82831124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831138
	goto loc_82831138;
loc_82831124:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831138
	goto loc_82831138;
loc_8283112C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831138
	goto loc_82831138;
loc_82831134:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831138:
	// li r5,183
	ctx.r5.s64 = 183;
	// li r4,202
	ctx.r4.s64 = 202;
	// bl 0x82828ce0
	ctx.lr = 0x82831144;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831174
	if (ctx.cr6.eq) goto loc_82831174;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283116c
	if (ctx.cr6.eq) goto loc_8283116C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831164
	if (ctx.cr6.eq) goto loc_82831164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831178
	goto loc_82831178;
loc_82831164:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831178
	goto loc_82831178;
loc_8283116C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831178
	goto loc_82831178;
loc_82831174:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831178:
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,202
	ctx.r4.s64 = 202;
	// bl 0x82828ce0
	ctx.lr = 0x82831184;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828311b4
	if (ctx.cr6.eq) goto loc_828311B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828311ac
	if (ctx.cr6.eq) goto loc_828311AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828311a4
	if (ctx.cr6.eq) goto loc_828311A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828311b8
	goto loc_828311B8;
loc_828311A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828311b8
	goto loc_828311B8;
loc_828311AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828311b8
	goto loc_828311B8;
loc_828311B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828311B8:
	// li r5,186
	ctx.r5.s64 = 186;
	// li r4,203
	ctx.r4.s64 = 203;
	// bl 0x82828ce0
	ctx.lr = 0x828311C4;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828311f4
	if (ctx.cr6.eq) goto loc_828311F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828311ec
	if (ctx.cr6.eq) goto loc_828311EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828311e4
	if (ctx.cr6.eq) goto loc_828311E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828311f8
	goto loc_828311F8;
loc_828311E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828311f8
	goto loc_828311F8;
loc_828311EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828311f8
	goto loc_828311F8;
loc_828311F4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828311F8:
	// li r5,187
	ctx.r5.s64 = 187;
	// li r4,203
	ctx.r4.s64 = 203;
	// bl 0x82828ce0
	ctx.lr = 0x82831204;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831234
	if (ctx.cr6.eq) goto loc_82831234;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283122c
	if (ctx.cr6.eq) goto loc_8283122C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831224
	if (ctx.cr6.eq) goto loc_82831224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831238
	goto loc_82831238;
loc_82831224:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831238
	goto loc_82831238;
loc_8283122C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831238
	goto loc_82831238;
loc_82831234:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831238:
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,203
	ctx.r4.s64 = 203;
	// bl 0x82828ce0
	ctx.lr = 0x82831244;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831274
	if (ctx.cr6.eq) goto loc_82831274;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283126c
	if (ctx.cr6.eq) goto loc_8283126C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831264
	if (ctx.cr6.eq) goto loc_82831264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831278
	goto loc_82831278;
loc_82831264:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831278
	goto loc_82831278;
loc_8283126C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831278
	goto loc_82831278;
loc_82831274:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831278:
	// li r5,189
	ctx.r5.s64 = 189;
	// li r4,203
	ctx.r4.s64 = 203;
	// bl 0x82828ce0
	ctx.lr = 0x82831284;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828312b4
	if (ctx.cr6.eq) goto loc_828312B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828312ac
	if (ctx.cr6.eq) goto loc_828312AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828312a4
	if (ctx.cr6.eq) goto loc_828312A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828312b8
	goto loc_828312B8;
loc_828312A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828312b8
	goto loc_828312B8;
loc_828312AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828312b8
	goto loc_828312B8;
loc_828312B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828312B8:
	// li r5,186
	ctx.r5.s64 = 186;
	// li r4,204
	ctx.r4.s64 = 204;
	// bl 0x82828ce0
	ctx.lr = 0x828312C4;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828312f4
	if (ctx.cr6.eq) goto loc_828312F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828312ec
	if (ctx.cr6.eq) goto loc_828312EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828312e4
	if (ctx.cr6.eq) goto loc_828312E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828312f8
	goto loc_828312F8;
loc_828312E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828312f8
	goto loc_828312F8;
loc_828312EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828312f8
	goto loc_828312F8;
loc_828312F4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828312F8:
	// li r5,187
	ctx.r5.s64 = 187;
	// li r4,204
	ctx.r4.s64 = 204;
	// bl 0x82828ce0
	ctx.lr = 0x82831304;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831334
	if (ctx.cr6.eq) goto loc_82831334;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283132c
	if (ctx.cr6.eq) goto loc_8283132C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831324
	if (ctx.cr6.eq) goto loc_82831324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831338
	goto loc_82831338;
loc_82831324:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831338
	goto loc_82831338;
loc_8283132C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831338
	goto loc_82831338;
loc_82831334:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831338:
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,204
	ctx.r4.s64 = 204;
	// bl 0x82828ce0
	ctx.lr = 0x82831344;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831374
	if (ctx.cr6.eq) goto loc_82831374;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283136c
	if (ctx.cr6.eq) goto loc_8283136C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831364
	if (ctx.cr6.eq) goto loc_82831364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831378
	goto loc_82831378;
loc_82831364:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831378
	goto loc_82831378;
loc_8283136C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831378
	goto loc_82831378;
loc_82831374:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831378:
	// li r5,189
	ctx.r5.s64 = 189;
	// li r4,204
	ctx.r4.s64 = 204;
	// bl 0x82828ce0
	ctx.lr = 0x82831384;
	sub_82828CE0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828313b4
	if (ctx.cr6.eq) goto loc_828313B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828313ac
	if (ctx.cr6.eq) goto loc_828313AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828313a4
	if (ctx.cr6.eq) goto loc_828313A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828313b8
	goto loc_828313B8;
loc_828313A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828313b8
	goto loc_828313B8;
loc_828313AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828313b8
	goto loc_828313B8;
loc_828313B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828313B8:
	// li r5,190
	ctx.r5.s64 = 190;
	// li r4,204
	ctx.r4.s64 = 204;
	// bl 0x82828ce0
	ctx.lr = 0x828313C4;
	sub_82828CE0(ctx, base);
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

__attribute__((alias("__imp__sub_828313DC"))) PPC_WEAK_FUNC(sub_828313DC);
PPC_FUNC_IMPL(__imp__sub_828313DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828313E0"))) PPC_WEAK_FUNC(sub_828313E0);
PPC_FUNC_IMPL(__imp__sub_828313E0) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x8283142c
	if (ctx.cr6.eq) goto loc_8283142C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831424
	if (ctx.cr6.eq) goto loc_82831424;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283141c
	if (ctx.cr6.eq) goto loc_8283141C;
	// b 0x82831430
	goto loc_82831430;
loc_8283141C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831430
	goto loc_82831430;
loc_82831424:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831430
	goto loc_82831430;
loc_8283142C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831430:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,4196
	ctx.r5.s64 = ctx.r11.s64 + 4196;
	// bl 0x82828c08
	ctx.lr = 0x82831440;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831470
	if (ctx.cr6.eq) goto loc_82831470;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831468
	if (ctx.cr6.eq) goto loc_82831468;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831460
	if (ctx.cr6.eq) goto loc_82831460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831474
	goto loc_82831474;
loc_82831460:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831474
	goto loc_82831474;
loc_82831468:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831474
	goto loc_82831474;
loc_82831470:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831474:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// bl 0x82828c08
	ctx.lr = 0x82831484;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828314b4
	if (ctx.cr6.eq) goto loc_828314B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828314ac
	if (ctx.cr6.eq) goto loc_828314AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828314a4
	if (ctx.cr6.eq) goto loc_828314A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828314b8
	goto loc_828314B8;
loc_828314A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828314b8
	goto loc_828314B8;
loc_828314AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828314b8
	goto loc_828314B8;
loc_828314B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828314B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,-3628
	ctx.r5.s64 = ctx.r11.s64 + -3628;
	// bl 0x82828c08
	ctx.lr = 0x828314C8;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828314f8
	if (ctx.cr6.eq) goto loc_828314F8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828314f0
	if (ctx.cr6.eq) goto loc_828314F0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828314e8
	if (ctx.cr6.eq) goto loc_828314E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828314fc
	goto loc_828314FC;
loc_828314E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828314fc
	goto loc_828314FC;
loc_828314F0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828314fc
	goto loc_828314FC;
loc_828314F8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828314FC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,4356
	ctx.r5.s64 = ctx.r11.s64 + 4356;
	// bl 0x82828c08
	ctx.lr = 0x8283150C;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8283153c
	if (ctx.cr6.eq) goto loc_8283153C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831534
	if (ctx.cr6.eq) goto loc_82831534;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283152c
	if (ctx.cr6.eq) goto loc_8283152C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831540
	goto loc_82831540;
loc_8283152C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831540
	goto loc_82831540;
loc_82831534:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831540
	goto loc_82831540;
loc_8283153C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831540:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,4364
	ctx.r5.s64 = ctx.r11.s64 + 4364;
	// bl 0x82828c08
	ctx.lr = 0x82831550;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831580
	if (ctx.cr6.eq) goto loc_82831580;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831578
	if (ctx.cr6.eq) goto loc_82831578;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831570
	if (ctx.cr6.eq) goto loc_82831570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831584
	goto loc_82831584;
loc_82831570:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831584
	goto loc_82831584;
loc_82831578:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831584
	goto loc_82831584;
loc_82831580:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831584:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,4380
	ctx.r5.s64 = ctx.r11.s64 + 4380;
	// bl 0x82828c08
	ctx.lr = 0x82831594;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828315c4
	if (ctx.cr6.eq) goto loc_828315C4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828315bc
	if (ctx.cr6.eq) goto loc_828315BC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828315b4
	if (ctx.cr6.eq) goto loc_828315B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828315c8
	goto loc_828315C8;
loc_828315B4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828315c8
	goto loc_828315C8;
loc_828315BC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828315c8
	goto loc_828315C8;
loc_828315C4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828315C8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// bl 0x82828c08
	ctx.lr = 0x828315D8;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831608
	if (ctx.cr6.eq) goto loc_82831608;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831600
	if (ctx.cr6.eq) goto loc_82831600;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828315f8
	if (ctx.cr6.eq) goto loc_828315F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8283160c
	goto loc_8283160C;
loc_828315F8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8283160c
	goto loc_8283160C;
loc_82831600:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8283160c
	goto loc_8283160C;
loc_82831608:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8283160C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// bl 0x82828c08
	ctx.lr = 0x8283161C;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8283164c
	if (ctx.cr6.eq) goto loc_8283164C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831644
	if (ctx.cr6.eq) goto loc_82831644;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283163c
	if (ctx.cr6.eq) goto loc_8283163C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831650
	goto loc_82831650;
loc_8283163C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831650
	goto loc_82831650;
loc_82831644:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831650
	goto loc_82831650;
loc_8283164C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831650:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,4424
	ctx.r5.s64 = ctx.r11.s64 + 4424;
	// bl 0x82828c08
	ctx.lr = 0x82831660;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831690
	if (ctx.cr6.eq) goto loc_82831690;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831688
	if (ctx.cr6.eq) goto loc_82831688;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831680
	if (ctx.cr6.eq) goto loc_82831680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831694
	goto loc_82831694;
loc_82831680:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831694
	goto loc_82831694;
loc_82831688:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831694
	goto loc_82831694;
loc_82831690:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831694:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,4440
	ctx.r5.s64 = ctx.r11.s64 + 4440;
	// bl 0x82828c08
	ctx.lr = 0x828316A4;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828316d4
	if (ctx.cr6.eq) goto loc_828316D4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828316cc
	if (ctx.cr6.eq) goto loc_828316CC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828316c4
	if (ctx.cr6.eq) goto loc_828316C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828316d8
	goto loc_828316D8;
loc_828316C4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828316d8
	goto loc_828316D8;
loc_828316CC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828316d8
	goto loc_828316D8;
loc_828316D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828316D8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,4460
	ctx.r5.s64 = ctx.r11.s64 + 4460;
	// bl 0x82828c08
	ctx.lr = 0x828316E8;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831718
	if (ctx.cr6.eq) goto loc_82831718;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831710
	if (ctx.cr6.eq) goto loc_82831710;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831708
	if (ctx.cr6.eq) goto loc_82831708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8283171c
	goto loc_8283171C;
loc_82831708:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8283171c
	goto loc_8283171C;
loc_82831710:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8283171c
	goto loc_8283171C;
loc_82831718:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8283171C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,4472
	ctx.r5.s64 = ctx.r11.s64 + 4472;
	// bl 0x82828c08
	ctx.lr = 0x8283172C;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8283175c
	if (ctx.cr6.eq) goto loc_8283175C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831754
	if (ctx.cr6.eq) goto loc_82831754;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283174c
	if (ctx.cr6.eq) goto loc_8283174C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831760
	goto loc_82831760;
loc_8283174C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831760
	goto loc_82831760;
loc_82831754:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831760
	goto loc_82831760;
loc_8283175C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831760:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r5,r11,4488
	ctx.r5.s64 = ctx.r11.s64 + 4488;
	// bl 0x82828c08
	ctx.lr = 0x82831770;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828317a0
	if (ctx.cr6.eq) goto loc_828317A0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831798
	if (ctx.cr6.eq) goto loc_82831798;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831790
	if (ctx.cr6.eq) goto loc_82831790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828317a4
	goto loc_828317A4;
loc_82831790:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828317a4
	goto loc_828317A4;
loc_82831798:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828317a4
	goto loc_828317A4;
loc_828317A0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828317A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r5,r11,4508
	ctx.r5.s64 = ctx.r11.s64 + 4508;
	// bl 0x82828c08
	ctx.lr = 0x828317B4;
	sub_82828C08(ctx, base);
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

__attribute__((alias("__imp__sub_828317CC"))) PPC_WEAK_FUNC(sub_828317CC);
PPC_FUNC_IMPL(__imp__sub_828317CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828317D0"))) PPC_WEAK_FUNC(sub_828317D0);
PPC_FUNC_IMPL(__imp__sub_828317D0) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x8283181c
	if (ctx.cr6.eq) goto loc_8283181C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831814
	if (ctx.cr6.eq) goto loc_82831814;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283180c
	if (ctx.cr6.eq) goto loc_8283180C;
	// b 0x82831820
	goto loc_82831820;
loc_8283180C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831820
	goto loc_82831820;
loc_82831814:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831820
	goto loc_82831820;
loc_8283181C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831820:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,4260
	ctx.r5.s64 = ctx.r11.s64 + 4260;
	// bl 0x82828ae8
	ctx.lr = 0x82831830;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831860
	if (ctx.cr6.eq) goto loc_82831860;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831858
	if (ctx.cr6.eq) goto loc_82831858;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831850
	if (ctx.cr6.eq) goto loc_82831850;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831864
	goto loc_82831864;
loc_82831850:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831864
	goto loc_82831864;
loc_82831858:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831864
	goto loc_82831864;
loc_82831860:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831864:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// bl 0x82828ae8
	ctx.lr = 0x82831874;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828318a4
	if (ctx.cr6.eq) goto loc_828318A4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283189c
	if (ctx.cr6.eq) goto loc_8283189C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831894
	if (ctx.cr6.eq) goto loc_82831894;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828318a8
	goto loc_828318A8;
loc_82831894:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828318a8
	goto loc_828318A8;
loc_8283189C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828318a8
	goto loc_828318A8;
loc_828318A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828318A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r5,r11,2536
	ctx.r5.s64 = ctx.r11.s64 + 2536;
	// bl 0x82828ae8
	ctx.lr = 0x828318B8;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828318e8
	if (ctx.cr6.eq) goto loc_828318E8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828318e0
	if (ctx.cr6.eq) goto loc_828318E0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828318d8
	if (ctx.cr6.eq) goto loc_828318D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828318ec
	goto loc_828318EC;
loc_828318D8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828318ec
	goto loc_828318EC;
loc_828318E0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828318ec
	goto loc_828318EC;
loc_828318E8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828318EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,2552
	ctx.r5.s64 = ctx.r11.s64 + 2552;
	// bl 0x82828ae8
	ctx.lr = 0x828318FC;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8283192c
	if (ctx.cr6.eq) goto loc_8283192C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831924
	if (ctx.cr6.eq) goto loc_82831924;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283191c
	if (ctx.cr6.eq) goto loc_8283191C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831930
	goto loc_82831930;
loc_8283191C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831930
	goto loc_82831930;
loc_82831924:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831930
	goto loc_82831930;
loc_8283192C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831930:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,4280
	ctx.r5.s64 = ctx.r11.s64 + 4280;
	// bl 0x82828ae8
	ctx.lr = 0x82831940;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831970
	if (ctx.cr6.eq) goto loc_82831970;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831968
	if (ctx.cr6.eq) goto loc_82831968;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831960
	if (ctx.cr6.eq) goto loc_82831960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831974
	goto loc_82831974;
loc_82831960:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831974
	goto loc_82831974;
loc_82831968:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831974
	goto loc_82831974;
loc_82831970:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831974:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,2508
	ctx.r5.s64 = ctx.r11.s64 + 2508;
	// bl 0x82828ae8
	ctx.lr = 0x82831984;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828319b4
	if (ctx.cr6.eq) goto loc_828319B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828319ac
	if (ctx.cr6.eq) goto loc_828319AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828319a4
	if (ctx.cr6.eq) goto loc_828319A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828319b8
	goto loc_828319B8;
loc_828319A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828319b8
	goto loc_828319B8;
loc_828319AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828319b8
	goto loc_828319B8;
loc_828319B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828319B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,4292
	ctx.r5.s64 = ctx.r11.s64 + 4292;
	// bl 0x82828ae8
	ctx.lr = 0x828319C8;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828319f8
	if (ctx.cr6.eq) goto loc_828319F8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828319f0
	if (ctx.cr6.eq) goto loc_828319F0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828319e8
	if (ctx.cr6.eq) goto loc_828319E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828319fc
	goto loc_828319FC;
loc_828319E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828319fc
	goto loc_828319FC;
loc_828319F0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828319fc
	goto loc_828319FC;
loc_828319F8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828319FC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r5,r11,4304
	ctx.r5.s64 = ctx.r11.s64 + 4304;
	// bl 0x82828ae8
	ctx.lr = 0x82831A0C;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831a3c
	if (ctx.cr6.eq) goto loc_82831A3C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831a34
	if (ctx.cr6.eq) goto loc_82831A34;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831a2c
	if (ctx.cr6.eq) goto loc_82831A2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831a40
	goto loc_82831A40;
loc_82831A2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831a40
	goto loc_82831A40;
loc_82831A34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831a40
	goto loc_82831A40;
loc_82831A3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831A40:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r5,r11,4312
	ctx.r5.s64 = ctx.r11.s64 + 4312;
	// bl 0x82828ae8
	ctx.lr = 0x82831A50;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82831a80
	if (ctx.cr6.eq) goto loc_82831A80;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831a78
	if (ctx.cr6.eq) goto loc_82831A78;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82831a70
	if (ctx.cr6.eq) goto loc_82831A70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82831a84
	goto loc_82831A84;
loc_82831A70:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82831a84
	goto loc_82831A84;
loc_82831A78:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82831a84
	goto loc_82831A84;
loc_82831A80:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82831A84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// bl 0x82828ae8
	ctx.lr = 0x82831A94;
	sub_82828AE8(ctx, base);
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

__attribute__((alias("__imp__sub_82831AAC"))) PPC_WEAK_FUNC(sub_82831AAC);
PPC_FUNC_IMPL(__imp__sub_82831AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831AB0"))) PPC_WEAK_FUNC(sub_82831AB0);
PPC_FUNC_IMPL(__imp__sub_82831AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,3135
	ctx.r10.s64 = ctx.r5.s64 + 3135;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831AD0"))) PPC_WEAK_FUNC(sub_82831AD0);
PPC_FUNC_IMPL(__imp__sub_82831AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,3118
	ctx.r10.s64 = ctx.r5.s64 + 3118;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831AF0"))) PPC_WEAK_FUNC(sub_82831AF0);
PPC_FUNC_IMPL(__imp__sub_82831AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,3135
	ctx.r9.s64 = ctx.r5.s64 + 3135;
	// addi r6,r5,3172
	ctx.r6.s64 = ctx.r5.s64 + 3172;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-18644
	ctx.r11.s64 = ctx.r11.s64 + -18644;
	// lfs f13,-30440(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30440);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lfs f8,-8592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8592);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f0,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfsx f7,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// ble cr6,0x82831bb0
	if (!ctx.cr6.gt) goto loc_82831BB0;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f13,-4392(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4392);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-29716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30400);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-30648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30648);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-29720(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,29744(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 29744);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fnmsubs f3,f4,f13,f11
	ctx.f3.f64 = double(float(-(ctx.f4.f64 * ctx.f13.f64 - ctx.f11.f64)));
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// fsubs f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f0,f2,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82831ba0
	if (!ctx.cr6.lt) goto loc_82831BA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82831BA0:
	// fadds f0,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82831BB0:
	// fadds f0,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831BBC"))) PPC_WEAK_FUNC(sub_82831BBC);
PPC_FUNC_IMPL(__imp__sub_82831BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831BC0"))) PPC_WEAK_FUNC(sub_82831BC0);
PPC_FUNC_IMPL(__imp__sub_82831BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,3074
	ctx.r10.s64 = ctx.r5.s64 + 3074;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831BE0"))) PPC_WEAK_FUNC(sub_82831BE0);
PPC_FUNC_IMPL(__imp__sub_82831BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82831BE8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f1,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x82831c8c
	if (ctx.cr6.lt) goto loc_82831C8C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bge cr6,0x82831c8c
	if (!ctx.cr6.lt) goto loc_82831C8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82831af0
	ctx.lr = 0x82831C24;
	sub_82831AF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82831c74
	if (ctx.cr6.eq) goto loc_82831C74;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82831c74
	if (ctx.cr6.eq) goto loc_82831C74;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82831c8c
	if (!ctx.cr6.eq) goto loc_82831C8C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-3988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3988);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f11,12296(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12296);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fdivs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82831C74:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82831C8C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82831CA4"))) PPC_WEAK_FUNC(sub_82831CA4);
PPC_FUNC_IMPL(__imp__sub_82831CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831CA8"))) PPC_WEAK_FUNC(sub_82831CA8);
PPC_FUNC_IMPL(__imp__sub_82831CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,12360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12360, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831CC0"))) PPC_WEAK_FUNC(sub_82831CC0);
PPC_FUNC_IMPL(__imp__sub_82831CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,12828(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12828, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831CD8"))) PPC_WEAK_FUNC(sub_82831CD8);
PPC_FUNC_IMPL(__imp__sub_82831CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,12828(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12828, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831CF0"))) PPC_WEAK_FUNC(sub_82831CF0);
PPC_FUNC_IMPL(__imp__sub_82831CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,4700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f0,12512(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12512, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831D10"))) PPC_WEAK_FUNC(sub_82831D10);
PPC_FUNC_IMPL(__imp__sub_82831D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,12376(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12376, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831D24"))) PPC_WEAK_FUNC(sub_82831D24);
PPC_FUNC_IMPL(__imp__sub_82831D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831D28"))) PPC_WEAK_FUNC(sub_82831D28);
PPC_FUNC_IMPL(__imp__sub_82831D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,12412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12412, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831D3C"))) PPC_WEAK_FUNC(sub_82831D3C);
PPC_FUNC_IMPL(__imp__sub_82831D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831D40"))) PPC_WEAK_FUNC(sub_82831D40);
PPC_FUNC_IMPL(__imp__sub_82831D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,12344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12344, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831D58"))) PPC_WEAK_FUNC(sub_82831D58);
PPC_FUNC_IMPL(__imp__sub_82831D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,12324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12324, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831D6C"))) PPC_WEAK_FUNC(sub_82831D6C);
PPC_FUNC_IMPL(__imp__sub_82831D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831D70"))) PPC_WEAK_FUNC(sub_82831D70);
PPC_FUNC_IMPL(__imp__sub_82831D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,12380(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12380, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831D84"))) PPC_WEAK_FUNC(sub_82831D84);
PPC_FUNC_IMPL(__imp__sub_82831D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831D88"))) PPC_WEAK_FUNC(sub_82831D88);
PPC_FUNC_IMPL(__imp__sub_82831D88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,12828(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12828, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831DA0"))) PPC_WEAK_FUNC(sub_82831DA0);
PPC_FUNC_IMPL(__imp__sub_82831DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82831dcc
	if (ctx.cr6.eq) goto loc_82831DCC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12328, ctx.r10.u32);
	// stw r10,12464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12464, ctx.r10.u32);
	// blr 
	return;
loc_82831DCC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12748, ctx.r10.u32);
	// stw r10,12464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12464, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831DDC"))) PPC_WEAK_FUNC(sub_82831DDC);
PPC_FUNC_IMPL(__imp__sub_82831DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82831DE0"))) PPC_WEAK_FUNC(sub_82831DE0);
PPC_FUNC_IMPL(__imp__sub_82831DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r11,12308(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12308, ctx.r11.u32);
	// stw r11,12592(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12592, ctx.r11.u32);
	// stw r11,12556(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12556, ctx.r11.u32);
	// stw r11,12484(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12484, ctx.r11.u32);
	// stw r11,12624(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12624, ctx.r11.u32);
	// stw r11,12628(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12628, ctx.r11.u32);
	// stw r11,12840(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12840, ctx.r11.u32);
	// stw r11,12832(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12832, ctx.r11.u32);
	// stw r11,12464(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12464, ctx.r11.u32);
	// stw r11,12748(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12748, ctx.r11.u32);
	// stw r11,12328(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12328, ctx.r11.u32);
	// stw r10,12828(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12828, ctx.r10.u32);
	// stw r10,12360(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12360, ctx.r10.u32);
	// stw r11,12412(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12412, ctx.r11.u32);
	// stw r11,12496(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12496, ctx.r11.u32);
	// stw r11,12500(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12500, ctx.r11.u32);
	// stw r11,12720(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12720, ctx.r11.u32);
	// stw r11,12596(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12596, ctx.r11.u32);
	// stw r7,808(r5)
	PPC_STORE_U32(ctx.r5.u32 + 808, ctx.r7.u32);
	// stw r11,12588(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12588, ctx.r11.u32);
	// stw r11,12488(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12488, ctx.r11.u32);
	// stw r11,12844(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831E58"))) PPC_WEAK_FUNC(sub_82831E58);
PPC_FUNC_IMPL(__imp__sub_82831E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r11,12308(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12308, ctx.r11.u32);
	// stw r11,12592(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12592, ctx.r11.u32);
	// stw r11,12556(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12556, ctx.r11.u32);
	// stw r11,12484(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12484, ctx.r11.u32);
	// stw r11,12624(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12624, ctx.r11.u32);
	// stw r11,12628(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12628, ctx.r11.u32);
	// stw r11,12840(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12840, ctx.r11.u32);
	// stw r11,12832(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12832, ctx.r11.u32);
	// stw r11,12464(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12464, ctx.r11.u32);
	// stw r11,12748(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12748, ctx.r11.u32);
	// stw r11,12328(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12328, ctx.r11.u32);
	// stw r10,12828(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12828, ctx.r10.u32);
	// stw r10,12360(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12360, ctx.r10.u32);
	// stw r11,12412(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12412, ctx.r11.u32);
	// stw r11,12496(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12496, ctx.r11.u32);
	// stw r11,12500(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12500, ctx.r11.u32);
	// stw r11,12720(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12720, ctx.r11.u32);
	// stw r11,12596(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12596, ctx.r11.u32);
	// stw r7,808(r5)
	PPC_STORE_U32(ctx.r5.u32 + 808, ctx.r7.u32);
	// stw r11,12588(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12588, ctx.r11.u32);
	// stw r11,12488(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12488, ctx.r11.u32);
	// stw r11,12844(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82831ED0"))) PPC_WEAK_FUNC(sub_82831ED0);
PPC_FUNC_IMPL(__imp__sub_82831ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r8,6552
	ctx.r11.s64 = ctx.r8.s64 + 6552;
	// lwz r10,2096(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2096);
	// lwz r9,6556(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6556);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,24
	ctx.r7.s64 = ctx.r9.s64 + 24;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82832000
	if (!ctx.cr6.eq) goto loc_82832000;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r5,r9,27
	ctx.r5.s64 = ctx.r9.s64 + 27;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82831f2c
	if (!ctx.cr6.eq) goto loc_82831F2C;
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x82831f30
	goto loc_82831F30;
loc_82831F2C:
	// li r7,2
	ctx.r7.s64 = 2;
loc_82831F30:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r5,r9,25
	ctx.r5.s64 = ctx.r9.s64 + 25;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82831f54
	if (!ctx.cr6.eq) goto loc_82831F54;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
	// b 0x82831f58
	goto loc_82831F58;
loc_82831F54:
	// ori r7,r7,16
	ctx.r7.u64 = ctx.r7.u64 | 16;
loc_82831F58:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r5,r10,26
	ctx.r5.s64 = ctx.r10.s64 + 26;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82831f7c
	if (!ctx.cr6.eq) goto loc_82831F7C;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// b 0x82831f80
	goto loc_82831F80;
loc_82831F7C:
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
loc_82831F80:
	// lwz r11,11700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82831fb4
	if (ctx.cr6.eq) goto loc_82831FB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82831fa4
	if (ctx.cr6.eq) goto loc_82831FA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82831fbc
	if (!ctx.cr6.eq) goto loc_82831FBC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82831fbc
	goto loc_82831FBC;
loc_82831FA4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82831fbc
	goto loc_82831FBC;
loc_82831FB4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82831FBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// andc r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// sth r8,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// blr 
	return;
loc_82832000:
	// lwz r11,11700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82832034
	if (ctx.cr6.eq) goto loc_82832034;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82832024
	if (ctx.cr6.eq) goto loc_82832024;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283203c
	if (!ctx.cr6.eq) goto loc_8283203C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283203c
	goto loc_8283203C;
loc_82832024:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8283203c
	goto loc_8283203C;
loc_82832034:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283203C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832078"))) PPC_WEAK_FUNC(sub_82832078);
PPC_FUNC_IMPL(__imp__sub_82832078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283207C"))) PPC_WEAK_FUNC(sub_8283207C);
PPC_FUNC_IMPL(__imp__sub_8283207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832080"))) PPC_WEAK_FUNC(sub_82832080);
PPC_FUNC_IMPL(__imp__sub_82832080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832084"))) PPC_WEAK_FUNC(sub_82832084);
PPC_FUNC_IMPL(__imp__sub_82832084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832088"))) PPC_WEAK_FUNC(sub_82832088);
PPC_FUNC_IMPL(__imp__sub_82832088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283208C"))) PPC_WEAK_FUNC(sub_8283208C);
PPC_FUNC_IMPL(__imp__sub_8283208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832090"))) PPC_WEAK_FUNC(sub_82832090);
PPC_FUNC_IMPL(__imp__sub_82832090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,6552
	ctx.r9.s64 = ctx.r11.s64 + 6552;
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,6556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r8,93
	ctx.r7.s64 = ctx.r8.s64 + 93;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x828320dc
	if (ctx.cr6.eq) goto loc_828320DC;
	// lwz r7,8300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r8,r11,8296
	ctx.r8.s64 = ctx.r11.s64 + 8296;
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r6,r7,93
	ctx.r6.s64 = ctx.r7.s64 + 93;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12576(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12576, temp.u32);
loc_828320DC:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r8,92
	ctx.r7.s64 = ctx.r8.s64 + 92;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82832114
	if (ctx.cr6.eq) goto loc_82832114;
	// lwz r7,8300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r8,r11,8296
	ctx.r8.s64 = ctx.r11.s64 + 8296;
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r6,r7,92
	ctx.r6.s64 = ctx.r7.s64 + 92;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12572(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12572, temp.u32);
loc_82832114:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r8,94
	ctx.r7.s64 = ctx.r8.s64 + 94;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r11,r11,8296
	ctx.r11.s64 = ctx.r11.s64 + 8296;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f0,4700(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4700);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// addi r4,r10,94
	ctx.r4.s64 = ctx.r10.s64 + 94;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,12512(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12512, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832168"))) PPC_WEAK_FUNC(sub_82832168);
PPC_FUNC_IMPL(__imp__sub_82832168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283216C"))) PPC_WEAK_FUNC(sub_8283216C);
PPC_FUNC_IMPL(__imp__sub_8283216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832170"))) PPC_WEAK_FUNC(sub_82832170);
PPC_FUNC_IMPL(__imp__sub_82832170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832174"))) PPC_WEAK_FUNC(sub_82832174);
PPC_FUNC_IMPL(__imp__sub_82832174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832178"))) PPC_WEAK_FUNC(sub_82832178);
PPC_FUNC_IMPL(__imp__sub_82832178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283217C"))) PPC_WEAK_FUNC(sub_8283217C);
PPC_FUNC_IMPL(__imp__sub_8283217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832180"))) PPC_WEAK_FUNC(sub_82832180);
PPC_FUNC_IMPL(__imp__sub_82832180) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x828321cc
	if (ctx.cr6.eq) goto loc_828321CC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828321c4
	if (ctx.cr6.eq) goto loc_828321C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828321bc
	if (ctx.cr6.eq) goto loc_828321BC;
	// b 0x828321d0
	goto loc_828321D0;
loc_828321BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828321d0
	goto loc_828321D0;
loc_828321C4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828321d0
	goto loc_828321D0;
loc_828321CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828321D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,4196
	ctx.r5.s64 = ctx.r11.s64 + 4196;
	// bl 0x82828c08
	ctx.lr = 0x828321E0;
	sub_82828C08(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832210
	if (ctx.cr6.eq) goto loc_82832210;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832208
	if (ctx.cr6.eq) goto loc_82832208;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832200
	if (ctx.cr6.eq) goto loc_82832200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832214
	goto loc_82832214;
loc_82832200:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832214
	goto loc_82832214;
loc_82832208:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832214
	goto loc_82832214;
loc_82832210:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832214:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// bl 0x82828c08
	ctx.lr = 0x82832224;
	sub_82828C08(ctx, base);
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

__attribute__((alias("__imp__sub_8283223C"))) PPC_WEAK_FUNC(sub_8283223C);
PPC_FUNC_IMPL(__imp__sub_8283223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832240"))) PPC_WEAK_FUNC(sub_82832240);
PPC_FUNC_IMPL(__imp__sub_82832240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832244"))) PPC_WEAK_FUNC(sub_82832244);
PPC_FUNC_IMPL(__imp__sub_82832244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832248"))) PPC_WEAK_FUNC(sub_82832248);
PPC_FUNC_IMPL(__imp__sub_82832248) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x82832294
	if (ctx.cr6.eq) goto loc_82832294;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283228c
	if (ctx.cr6.eq) goto loc_8283228C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832284
	if (ctx.cr6.eq) goto loc_82832284;
	// b 0x82832298
	goto loc_82832298;
loc_82832284:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832298
	goto loc_82832298;
loc_8283228C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832298
	goto loc_82832298;
loc_82832294:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832298:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,4124
	ctx.r5.s64 = ctx.r11.s64 + 4124;
	// bl 0x82828b78
	ctx.lr = 0x828322A8;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828322d8
	if (ctx.cr6.eq) goto loc_828322D8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828322d0
	if (ctx.cr6.eq) goto loc_828322D0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828322c8
	if (ctx.cr6.eq) goto loc_828322C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828322dc
	goto loc_828322DC;
loc_828322C8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828322dc
	goto loc_828322DC;
loc_828322D0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828322dc
	goto loc_828322DC;
loc_828322D8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828322DC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,4128
	ctx.r5.s64 = ctx.r11.s64 + 4128;
	// bl 0x82828b78
	ctx.lr = 0x828322EC;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8283231c
	if (ctx.cr6.eq) goto loc_8283231C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832314
	if (ctx.cr6.eq) goto loc_82832314;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283230c
	if (ctx.cr6.eq) goto loc_8283230C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832320
	goto loc_82832320;
loc_8283230C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832320
	goto loc_82832320;
loc_82832314:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832320
	goto loc_82832320;
loc_8283231C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832320:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,4132
	ctx.r5.s64 = ctx.r11.s64 + 4132;
	// bl 0x82828b78
	ctx.lr = 0x82832330;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832360
	if (ctx.cr6.eq) goto loc_82832360;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832358
	if (ctx.cr6.eq) goto loc_82832358;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832350
	if (ctx.cr6.eq) goto loc_82832350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832364
	goto loc_82832364;
loc_82832350:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832364
	goto loc_82832364;
loc_82832358:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832364
	goto loc_82832364;
loc_82832360:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832364:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,4140
	ctx.r5.s64 = ctx.r11.s64 + 4140;
	// bl 0x82828b78
	ctx.lr = 0x82832374;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828323a4
	if (ctx.cr6.eq) goto loc_828323A4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283239c
	if (ctx.cr6.eq) goto loc_8283239C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832394
	if (ctx.cr6.eq) goto loc_82832394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828323a8
	goto loc_828323A8;
loc_82832394:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828323a8
	goto loc_828323A8;
loc_8283239C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828323a8
	goto loc_828323A8;
loc_828323A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828323A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,4152
	ctx.r5.s64 = ctx.r11.s64 + 4152;
	// bl 0x82828b78
	ctx.lr = 0x828323B8;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828323e8
	if (ctx.cr6.eq) goto loc_828323E8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828323e0
	if (ctx.cr6.eq) goto loc_828323E0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828323d8
	if (ctx.cr6.eq) goto loc_828323D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828323ec
	goto loc_828323EC;
loc_828323D8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828323ec
	goto loc_828323EC;
loc_828323E0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828323ec
	goto loc_828323EC;
loc_828323E8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828323EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,4168
	ctx.r5.s64 = ctx.r11.s64 + 4168;
	// bl 0x82828b78
	ctx.lr = 0x828323FC;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8283242c
	if (ctx.cr6.eq) goto loc_8283242C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832424
	if (ctx.cr6.eq) goto loc_82832424;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8283241c
	if (ctx.cr6.eq) goto loc_8283241C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832430
	goto loc_82832430;
loc_8283241C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832430
	goto loc_82832430;
loc_82832424:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832430
	goto loc_82832430;
loc_8283242C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832430:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,4180
	ctx.r5.s64 = ctx.r11.s64 + 4180;
	// bl 0x82828b78
	ctx.lr = 0x82832440;
	sub_82828B78(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832470
	if (ctx.cr6.eq) goto loc_82832470;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832468
	if (ctx.cr6.eq) goto loc_82832468;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832460
	if (ctx.cr6.eq) goto loc_82832460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832474
	goto loc_82832474;
loc_82832460:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832474
	goto loc_82832474;
loc_82832468:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832474
	goto loc_82832474;
loc_82832470:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832474:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,4188
	ctx.r5.s64 = ctx.r11.s64 + 4188;
	// bl 0x82828b78
	ctx.lr = 0x82832484;
	sub_82828B78(ctx, base);
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

__attribute__((alias("__imp__sub_8283249C"))) PPC_WEAK_FUNC(sub_8283249C);
PPC_FUNC_IMPL(__imp__sub_8283249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828324A0"))) PPC_WEAK_FUNC(sub_828324A0);
PPC_FUNC_IMPL(__imp__sub_828324A0) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x828324ec
	if (ctx.cr6.eq) goto loc_828324EC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828324e4
	if (ctx.cr6.eq) goto loc_828324E4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828324dc
	if (ctx.cr6.eq) goto loc_828324DC;
	// b 0x828324f0
	goto loc_828324F0;
loc_828324DC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828324f0
	goto loc_828324F0;
loc_828324E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828324f0
	goto loc_828324F0;
loc_828324EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828324F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,2508
	ctx.r5.s64 = ctx.r11.s64 + 2508;
	// bl 0x82828ae8
	ctx.lr = 0x82832500;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832530
	if (ctx.cr6.eq) goto loc_82832530;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832528
	if (ctx.cr6.eq) goto loc_82832528;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832520
	if (ctx.cr6.eq) goto loc_82832520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832534
	goto loc_82832534;
loc_82832520:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832534
	goto loc_82832534;
loc_82832528:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832534
	goto loc_82832534;
loc_82832530:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832534:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,-6696
	ctx.r5.s64 = ctx.r11.s64 + -6696;
	// bl 0x82828ae8
	ctx.lr = 0x82832544;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832574
	if (ctx.cr6.eq) goto loc_82832574;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283256c
	if (ctx.cr6.eq) goto loc_8283256C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832564
	if (ctx.cr6.eq) goto loc_82832564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832578
	goto loc_82832578;
loc_82832564:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832578
	goto loc_82832578;
loc_8283256C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832578
	goto loc_82832578;
loc_82832574:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832578:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,2520
	ctx.r5.s64 = ctx.r11.s64 + 2520;
	// bl 0x82828ae8
	ctx.lr = 0x82832588;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828325b8
	if (ctx.cr6.eq) goto loc_828325B8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828325b0
	if (ctx.cr6.eq) goto loc_828325B0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828325a8
	if (ctx.cr6.eq) goto loc_828325A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828325bc
	goto loc_828325BC;
loc_828325A8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828325bc
	goto loc_828325BC;
loc_828325B0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828325bc
	goto loc_828325BC;
loc_828325B8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828325BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r5,r11,-9752
	ctx.r5.s64 = ctx.r11.s64 + -9752;
	// bl 0x82828ae8
	ctx.lr = 0x828325CC;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828325fc
	if (ctx.cr6.eq) goto loc_828325FC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828325f4
	if (ctx.cr6.eq) goto loc_828325F4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828325ec
	if (ctx.cr6.eq) goto loc_828325EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832600
	goto loc_82832600;
loc_828325EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832600
	goto loc_82832600;
loc_828325F4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832600
	goto loc_82832600;
loc_828325FC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832600:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,1840
	ctx.r5.s64 = ctx.r11.s64 + 1840;
	// bl 0x82828ae8
	ctx.lr = 0x82832610;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832640
	if (ctx.cr6.eq) goto loc_82832640;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832638
	if (ctx.cr6.eq) goto loc_82832638;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832630
	if (ctx.cr6.eq) goto loc_82832630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832644
	goto loc_82832644;
loc_82832630:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832644
	goto loc_82832644;
loc_82832638:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832644
	goto loc_82832644;
loc_82832640:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832644:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,2536
	ctx.r5.s64 = ctx.r11.s64 + 2536;
	// bl 0x82828ae8
	ctx.lr = 0x82832654;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832684
	if (ctx.cr6.eq) goto loc_82832684;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283267c
	if (ctx.cr6.eq) goto loc_8283267C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832674
	if (ctx.cr6.eq) goto loc_82832674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832688
	goto loc_82832688;
loc_82832674:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832688
	goto loc_82832688;
loc_8283267C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832688
	goto loc_82832688;
loc_82832684:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832688:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,2552
	ctx.r5.s64 = ctx.r11.s64 + 2552;
	// bl 0x82828ae8
	ctx.lr = 0x82832698;
	sub_82828AE8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828326c8
	if (ctx.cr6.eq) goto loc_828326C8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828326c0
	if (ctx.cr6.eq) goto loc_828326C0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828326b8
	if (ctx.cr6.eq) goto loc_828326B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828326cc
	goto loc_828326CC;
loc_828326B8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828326cc
	goto loc_828326CC;
loc_828326C0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828326cc
	goto loc_828326CC;
loc_828326C8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828326CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r5,r11,2564
	ctx.r5.s64 = ctx.r11.s64 + 2564;
	// bl 0x82828ae8
	ctx.lr = 0x828326DC;
	sub_82828AE8(ctx, base);
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

__attribute__((alias("__imp__sub_828326F4"))) PPC_WEAK_FUNC(sub_828326F4);
PPC_FUNC_IMPL(__imp__sub_828326F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828326F8"))) PPC_WEAK_FUNC(sub_828326F8);
PPC_FUNC_IMPL(__imp__sub_828326F8) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x82832744
	if (ctx.cr6.eq) goto loc_82832744;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283273c
	if (ctx.cr6.eq) goto loc_8283273C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832734
	if (ctx.cr6.eq) goto loc_82832734;
	// b 0x82832748
	goto loc_82832748;
loc_82832734:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832748
	goto loc_82832748;
loc_8283273C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832748
	goto loc_82832748;
loc_82832744:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832748:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,1904
	ctx.r5.s64 = ctx.r11.s64 + 1904;
	// bl 0x82828948
	ctx.lr = 0x82832758;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832788
	if (ctx.cr6.eq) goto loc_82832788;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832780
	if (ctx.cr6.eq) goto loc_82832780;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832778
	if (ctx.cr6.eq) goto loc_82832778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8283278c
	goto loc_8283278C;
loc_82832778:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8283278c
	goto loc_8283278C;
loc_82832780:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8283278c
	goto loc_8283278C;
loc_82832788:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8283278C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,1920
	ctx.r5.s64 = ctx.r11.s64 + 1920;
	// bl 0x82828948
	ctx.lr = 0x8283279C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828327cc
	if (ctx.cr6.eq) goto loc_828327CC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828327c4
	if (ctx.cr6.eq) goto loc_828327C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828327bc
	if (ctx.cr6.eq) goto loc_828327BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828327d0
	goto loc_828327D0;
loc_828327BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828327d0
	goto loc_828327D0;
loc_828327C4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828327d0
	goto loc_828327D0;
loc_828327CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828327D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,38
	ctx.r4.s64 = 38;
	// addi r5,r11,1940
	ctx.r5.s64 = ctx.r11.s64 + 1940;
	// bl 0x82828948
	ctx.lr = 0x828327E0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832810
	if (ctx.cr6.eq) goto loc_82832810;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832808
	if (ctx.cr6.eq) goto loc_82832808;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832800
	if (ctx.cr6.eq) goto loc_82832800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832814
	goto loc_82832814;
loc_82832800:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832814
	goto loc_82832814;
loc_82832808:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832814
	goto loc_82832814;
loc_82832810:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832814:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,1960
	ctx.r5.s64 = ctx.r11.s64 + 1960;
	// bl 0x82828948
	ctx.lr = 0x82832824;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832854
	if (ctx.cr6.eq) goto loc_82832854;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283284c
	if (ctx.cr6.eq) goto loc_8283284C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832844
	if (ctx.cr6.eq) goto loc_82832844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832858
	goto loc_82832858;
loc_82832844:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832858
	goto loc_82832858;
loc_8283284C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832858
	goto loc_82832858;
loc_82832854:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832858:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,1976
	ctx.r5.s64 = ctx.r11.s64 + 1976;
	// bl 0x82828948
	ctx.lr = 0x82832868;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832898
	if (ctx.cr6.eq) goto loc_82832898;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832890
	if (ctx.cr6.eq) goto loc_82832890;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832888
	if (ctx.cr6.eq) goto loc_82832888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8283289c
	goto loc_8283289C;
loc_82832888:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8283289c
	goto loc_8283289C;
loc_82832890:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8283289c
	goto loc_8283289C;
loc_82832898:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8283289C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,1992
	ctx.r5.s64 = ctx.r11.s64 + 1992;
	// bl 0x82828948
	ctx.lr = 0x828328AC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828328dc
	if (ctx.cr6.eq) goto loc_828328DC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828328d4
	if (ctx.cr6.eq) goto loc_828328D4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828328cc
	if (ctx.cr6.eq) goto loc_828328CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828328e0
	goto loc_828328E0;
loc_828328CC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828328e0
	goto loc_828328E0;
loc_828328D4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828328e0
	goto loc_828328E0;
loc_828328DC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828328E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,2012
	ctx.r5.s64 = ctx.r11.s64 + 2012;
	// bl 0x82828948
	ctx.lr = 0x828328F0;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832920
	if (ctx.cr6.eq) goto loc_82832920;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832918
	if (ctx.cr6.eq) goto loc_82832918;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832910
	if (ctx.cr6.eq) goto loc_82832910;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832924
	goto loc_82832924;
loc_82832910:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832924
	goto loc_82832924;
loc_82832918:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832924
	goto loc_82832924;
loc_82832920:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832924:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,2028
	ctx.r5.s64 = ctx.r11.s64 + 2028;
	// bl 0x82828948
	ctx.lr = 0x82832934;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832964
	if (ctx.cr6.eq) goto loc_82832964;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283295c
	if (ctx.cr6.eq) goto loc_8283295C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832954
	if (ctx.cr6.eq) goto loc_82832954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832968
	goto loc_82832968;
loc_82832954:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832968
	goto loc_82832968;
loc_8283295C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832968
	goto loc_82832968;
loc_82832964:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832968:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,2040
	ctx.r5.s64 = ctx.r11.s64 + 2040;
	// bl 0x82828948
	ctx.lr = 0x82832978;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828329a8
	if (ctx.cr6.eq) goto loc_828329A8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828329a0
	if (ctx.cr6.eq) goto loc_828329A0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832998
	if (ctx.cr6.eq) goto loc_82832998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828329ac
	goto loc_828329AC;
loc_82832998:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828329ac
	goto loc_828329AC;
loc_828329A0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828329ac
	goto loc_828329AC;
loc_828329A8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828329AC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r5,r11,2052
	ctx.r5.s64 = ctx.r11.s64 + 2052;
	// bl 0x82828948
	ctx.lr = 0x828329BC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828329ec
	if (ctx.cr6.eq) goto loc_828329EC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828329e4
	if (ctx.cr6.eq) goto loc_828329E4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828329dc
	if (ctx.cr6.eq) goto loc_828329DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828329f0
	goto loc_828329F0;
loc_828329DC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x828329f0
	goto loc_828329F0;
loc_828329E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828329f0
	goto loc_828329F0;
loc_828329EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828329F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,2068
	ctx.r5.s64 = ctx.r11.s64 + 2068;
	// bl 0x82828948
	ctx.lr = 0x82832A00;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832a30
	if (ctx.cr6.eq) goto loc_82832A30;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832a28
	if (ctx.cr6.eq) goto loc_82832A28;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832a20
	if (ctx.cr6.eq) goto loc_82832A20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832a34
	goto loc_82832A34;
loc_82832A20:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832a34
	goto loc_82832A34;
loc_82832A28:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832a34
	goto loc_82832A34;
loc_82832A30:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832A34:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r5,r11,2088
	ctx.r5.s64 = ctx.r11.s64 + 2088;
	// bl 0x82828948
	ctx.lr = 0x82832A44;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832a74
	if (ctx.cr6.eq) goto loc_82832A74;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832a6c
	if (ctx.cr6.eq) goto loc_82832A6C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832a64
	if (ctx.cr6.eq) goto loc_82832A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832a78
	goto loc_82832A78;
loc_82832A64:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832a78
	goto loc_82832A78;
loc_82832A6C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832a78
	goto loc_82832A78;
loc_82832A74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832A78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,2108
	ctx.r5.s64 = ctx.r11.s64 + 2108;
	// bl 0x82828948
	ctx.lr = 0x82832A88;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832ab8
	if (ctx.cr6.eq) goto loc_82832AB8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832ab0
	if (ctx.cr6.eq) goto loc_82832AB0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832aa8
	if (ctx.cr6.eq) goto loc_82832AA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832abc
	goto loc_82832ABC;
loc_82832AA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832abc
	goto loc_82832ABC;
loc_82832AB0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832abc
	goto loc_82832ABC;
loc_82832AB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832ABC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,2124
	ctx.r5.s64 = ctx.r11.s64 + 2124;
	// bl 0x82828948
	ctx.lr = 0x82832ACC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832afc
	if (ctx.cr6.eq) goto loc_82832AFC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832af4
	if (ctx.cr6.eq) goto loc_82832AF4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832aec
	if (ctx.cr6.eq) goto loc_82832AEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832b00
	goto loc_82832B00;
loc_82832AEC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832b00
	goto loc_82832B00;
loc_82832AF4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832b00
	goto loc_82832B00;
loc_82832AFC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832B00:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r5,r11,2140
	ctx.r5.s64 = ctx.r11.s64 + 2140;
	// bl 0x82828948
	ctx.lr = 0x82832B10;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832b40
	if (ctx.cr6.eq) goto loc_82832B40;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832b38
	if (ctx.cr6.eq) goto loc_82832B38;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832b30
	if (ctx.cr6.eq) goto loc_82832B30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832b44
	goto loc_82832B44;
loc_82832B30:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832b44
	goto loc_82832B44;
loc_82832B38:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832b44
	goto loc_82832B44;
loc_82832B40:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832B44:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,37
	ctx.r4.s64 = 37;
	// addi r5,r11,2160
	ctx.r5.s64 = ctx.r11.s64 + 2160;
	// bl 0x82828948
	ctx.lr = 0x82832B54;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832b84
	if (ctx.cr6.eq) goto loc_82832B84;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832b7c
	if (ctx.cr6.eq) goto loc_82832B7C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832b74
	if (ctx.cr6.eq) goto loc_82832B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832b88
	goto loc_82832B88;
loc_82832B74:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832b88
	goto loc_82832B88;
loc_82832B7C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832b88
	goto loc_82832B88;
loc_82832B84:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832B88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,2188
	ctx.r5.s64 = ctx.r11.s64 + 2188;
	// bl 0x82828948
	ctx.lr = 0x82832B98;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832bc8
	if (ctx.cr6.eq) goto loc_82832BC8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832bc0
	if (ctx.cr6.eq) goto loc_82832BC0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832bb8
	if (ctx.cr6.eq) goto loc_82832BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832bcc
	goto loc_82832BCC;
loc_82832BB8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832bcc
	goto loc_82832BCC;
loc_82832BC0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832bcc
	goto loc_82832BCC;
loc_82832BC8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832BCC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r5,r11,2216
	ctx.r5.s64 = ctx.r11.s64 + 2216;
	// bl 0x82828948
	ctx.lr = 0x82832BDC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832c0c
	if (ctx.cr6.eq) goto loc_82832C0C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832c04
	if (ctx.cr6.eq) goto loc_82832C04;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832bfc
	if (ctx.cr6.eq) goto loc_82832BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832c10
	goto loc_82832C10;
loc_82832BFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832c10
	goto loc_82832C10;
loc_82832C04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832c10
	goto loc_82832C10;
loc_82832C0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832C10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,2236
	ctx.r5.s64 = ctx.r11.s64 + 2236;
	// bl 0x82828948
	ctx.lr = 0x82832C20;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832c50
	if (ctx.cr6.eq) goto loc_82832C50;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832c48
	if (ctx.cr6.eq) goto loc_82832C48;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832c40
	if (ctx.cr6.eq) goto loc_82832C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832c54
	goto loc_82832C54;
loc_82832C40:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832c54
	goto loc_82832C54;
loc_82832C48:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832c54
	goto loc_82832C54;
loc_82832C50:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832C54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r5,r11,2256
	ctx.r5.s64 = ctx.r11.s64 + 2256;
	// bl 0x82828948
	ctx.lr = 0x82832C64;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832c94
	if (ctx.cr6.eq) goto loc_82832C94;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832c8c
	if (ctx.cr6.eq) goto loc_82832C8C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832c84
	if (ctx.cr6.eq) goto loc_82832C84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832c98
	goto loc_82832C98;
loc_82832C84:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832c98
	goto loc_82832C98;
loc_82832C8C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832c98
	goto loc_82832C98;
loc_82832C94:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832C98:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,2272
	ctx.r5.s64 = ctx.r11.s64 + 2272;
	// bl 0x82828948
	ctx.lr = 0x82832CA8;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832cd8
	if (ctx.cr6.eq) goto loc_82832CD8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832cd0
	if (ctx.cr6.eq) goto loc_82832CD0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832cc8
	if (ctx.cr6.eq) goto loc_82832CC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832cdc
	goto loc_82832CDC;
loc_82832CC8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832cdc
	goto loc_82832CDC;
loc_82832CD0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832cdc
	goto loc_82832CDC;
loc_82832CD8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832CDC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r5,r11,2292
	ctx.r5.s64 = ctx.r11.s64 + 2292;
	// bl 0x82828948
	ctx.lr = 0x82832CEC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832d1c
	if (ctx.cr6.eq) goto loc_82832D1C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832d14
	if (ctx.cr6.eq) goto loc_82832D14;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832d0c
	if (ctx.cr6.eq) goto loc_82832D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832d20
	goto loc_82832D20;
loc_82832D0C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832d20
	goto loc_82832D20;
loc_82832D14:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832d20
	goto loc_82832D20;
loc_82832D1C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832D20:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r5,r11,2312
	ctx.r5.s64 = ctx.r11.s64 + 2312;
	// bl 0x82828948
	ctx.lr = 0x82832D30;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832d60
	if (ctx.cr6.eq) goto loc_82832D60;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832d58
	if (ctx.cr6.eq) goto loc_82832D58;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832d50
	if (ctx.cr6.eq) goto loc_82832D50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832d64
	goto loc_82832D64;
loc_82832D50:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832d64
	goto loc_82832D64;
loc_82832D58:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832d64
	goto loc_82832D64;
loc_82832D60:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832D64:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,26
	ctx.r4.s64 = 26;
	// addi r5,r11,2332
	ctx.r5.s64 = ctx.r11.s64 + 2332;
	// bl 0x82828948
	ctx.lr = 0x82832D74;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832da4
	if (ctx.cr6.eq) goto loc_82832DA4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832d9c
	if (ctx.cr6.eq) goto loc_82832D9C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832d94
	if (ctx.cr6.eq) goto loc_82832D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832da8
	goto loc_82832DA8;
loc_82832D94:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832da8
	goto loc_82832DA8;
loc_82832D9C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832da8
	goto loc_82832DA8;
loc_82832DA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832DA8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x82828948
	ctx.lr = 0x82832DB8;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832de8
	if (ctx.cr6.eq) goto loc_82832DE8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832de0
	if (ctx.cr6.eq) goto loc_82832DE0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832dd8
	if (ctx.cr6.eq) goto loc_82832DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832dec
	goto loc_82832DEC;
loc_82832DD8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832dec
	goto loc_82832DEC;
loc_82832DE0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832dec
	goto loc_82832DEC;
loc_82832DE8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832DEC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r5,r11,2368
	ctx.r5.s64 = ctx.r11.s64 + 2368;
	// bl 0x82828948
	ctx.lr = 0x82832DFC;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832e2c
	if (ctx.cr6.eq) goto loc_82832E2C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832e24
	if (ctx.cr6.eq) goto loc_82832E24;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832e1c
	if (ctx.cr6.eq) goto loc_82832E1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832e30
	goto loc_82832E30;
loc_82832E1C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832e30
	goto loc_82832E30;
loc_82832E24:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832e30
	goto loc_82832E30;
loc_82832E2C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832E30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,2388
	ctx.r5.s64 = ctx.r11.s64 + 2388;
	// bl 0x82828948
	ctx.lr = 0x82832E40;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832e70
	if (ctx.cr6.eq) goto loc_82832E70;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832e68
	if (ctx.cr6.eq) goto loc_82832E68;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832e60
	if (ctx.cr6.eq) goto loc_82832E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832e74
	goto loc_82832E74;
loc_82832E60:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832e74
	goto loc_82832E74;
loc_82832E68:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832e74
	goto loc_82832E74;
loc_82832E70:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832E74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r5,r11,2408
	ctx.r5.s64 = ctx.r11.s64 + 2408;
	// bl 0x82828948
	ctx.lr = 0x82832E84;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832eb4
	if (ctx.cr6.eq) goto loc_82832EB4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832eac
	if (ctx.cr6.eq) goto loc_82832EAC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832ea4
	if (ctx.cr6.eq) goto loc_82832EA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832eb8
	goto loc_82832EB8;
loc_82832EA4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832eb8
	goto loc_82832EB8;
loc_82832EAC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832eb8
	goto loc_82832EB8;
loc_82832EB4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832EB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,34
	ctx.r4.s64 = 34;
	// addi r5,r11,2424
	ctx.r5.s64 = ctx.r11.s64 + 2424;
	// bl 0x82828948
	ctx.lr = 0x82832EC8;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832ef8
	if (ctx.cr6.eq) goto loc_82832EF8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832ef0
	if (ctx.cr6.eq) goto loc_82832EF0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832ee8
	if (ctx.cr6.eq) goto loc_82832EE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832efc
	goto loc_82832EFC;
loc_82832EE8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832efc
	goto loc_82832EFC;
loc_82832EF0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832efc
	goto loc_82832EFC;
loc_82832EF8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832EFC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r5,r11,2444
	ctx.r5.s64 = ctx.r11.s64 + 2444;
	// bl 0x82828948
	ctx.lr = 0x82832F0C;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832f3c
	if (ctx.cr6.eq) goto loc_82832F3C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832f34
	if (ctx.cr6.eq) goto loc_82832F34;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832f2c
	if (ctx.cr6.eq) goto loc_82832F2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832f40
	goto loc_82832F40;
loc_82832F2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832f40
	goto loc_82832F40;
loc_82832F34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832f40
	goto loc_82832F40;
loc_82832F3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832F40:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,39
	ctx.r4.s64 = 39;
	// addi r5,r11,2460
	ctx.r5.s64 = ctx.r11.s64 + 2460;
	// bl 0x82828948
	ctx.lr = 0x82832F50;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832f80
	if (ctx.cr6.eq) goto loc_82832F80;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832f78
	if (ctx.cr6.eq) goto loc_82832F78;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832f70
	if (ctx.cr6.eq) goto loc_82832F70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82832f84
	goto loc_82832F84;
loc_82832F70:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82832f84
	goto loc_82832F84;
loc_82832F78:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832f84
	goto loc_82832F84;
loc_82832F80:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832F84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r5,r11,2480
	ctx.r5.s64 = ctx.r11.s64 + 2480;
	// bl 0x82828948
	ctx.lr = 0x82832F94;
	sub_82828948(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82832fc4
	if (ctx.cr6.eq) goto loc_82832FC4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82832fbc
	if (ctx.cr6.eq) goto loc_82832FBC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82832fb4
	if (ctx.cr6.eq) goto loc_82832FB4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82832fc8
	goto loc_82832FC8;
loc_82832FB4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82832fc8
	goto loc_82832FC8;
loc_82832FBC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82832fc8
	goto loc_82832FC8;
loc_82832FC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82832FC8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1596(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1596);
	// ld r7,1476(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1476);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1596(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1596, ctx.r6.u64);
	// beq cr6,0x82833014
	if (ctx.cr6.eq) goto loc_82833014;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283300c
	if (ctx.cr6.eq) goto loc_8283300C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833004
	if (ctx.cr6.eq) goto loc_82833004;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833018
	goto loc_82833018;
loc_82833004:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833018
	goto loc_82833018;
loc_8283300C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833018
	goto loc_82833018;
loc_82833014:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833018:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1596(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1596);
	// ld r7,1524(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1524);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1596(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1596, ctx.r6.u64);
	// beq cr6,0x82833064
	if (ctx.cr6.eq) goto loc_82833064;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283305c
	if (ctx.cr6.eq) goto loc_8283305C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833054
	if (ctx.cr6.eq) goto loc_82833054;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833068
	goto loc_82833068;
loc_82833054:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833068
	goto loc_82833068;
loc_8283305C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833068
	goto loc_82833068;
loc_82833064:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833068:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1604(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1604);
	// ld r7,1476(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1476);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1604(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1604, ctx.r6.u64);
	// beq cr6,0x828330b4
	if (ctx.cr6.eq) goto loc_828330B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828330ac
	if (ctx.cr6.eq) goto loc_828330AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828330a4
	if (ctx.cr6.eq) goto loc_828330A4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828330b8
	goto loc_828330B8;
loc_828330A4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828330b8
	goto loc_828330B8;
loc_828330AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828330b8
	goto loc_828330B8;
loc_828330B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828330B8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1604(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1604);
	// ld r7,1516(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1516);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1604(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1604, ctx.r6.u64);
	// beq cr6,0x82833104
	if (ctx.cr6.eq) goto loc_82833104;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828330fc
	if (ctx.cr6.eq) goto loc_828330FC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828330f4
	if (ctx.cr6.eq) goto loc_828330F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833108
	goto loc_82833108;
loc_828330F4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833108
	goto loc_82833108;
loc_828330FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833108
	goto loc_82833108;
loc_82833104:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833108:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1652(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1652);
	// ld r7,1500(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1500);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1652(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1652, ctx.r6.u64);
	// beq cr6,0x82833154
	if (ctx.cr6.eq) goto loc_82833154;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283314c
	if (ctx.cr6.eq) goto loc_8283314C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833144
	if (ctx.cr6.eq) goto loc_82833144;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833158
	goto loc_82833158;
loc_82833144:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833158
	goto loc_82833158;
loc_8283314C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833158
	goto loc_82833158;
loc_82833154:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833158:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1652(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1652);
	// ld r7,1508(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1508);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1652(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1652, ctx.r6.u64);
	// beq cr6,0x828331a4
	if (ctx.cr6.eq) goto loc_828331A4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283319c
	if (ctx.cr6.eq) goto loc_8283319C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833194
	if (ctx.cr6.eq) goto loc_82833194;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828331a8
	goto loc_828331A8;
loc_82833194:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828331a8
	goto loc_828331A8;
loc_8283319C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828331a8
	goto loc_828331A8;
loc_828331A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828331A8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1652(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1652);
	// ld r7,1588(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1588);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1652(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1652, ctx.r6.u64);
	// beq cr6,0x828331f4
	if (ctx.cr6.eq) goto loc_828331F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828331ec
	if (ctx.cr6.eq) goto loc_828331EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828331e4
	if (ctx.cr6.eq) goto loc_828331E4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828331f8
	goto loc_828331F8;
loc_828331E4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828331f8
	goto loc_828331F8;
loc_828331EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828331f8
	goto loc_828331F8;
loc_828331F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828331F8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1660(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1660);
	// ld r7,1476(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1476);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1660(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1660, ctx.r6.u64);
	// beq cr6,0x82833244
	if (ctx.cr6.eq) goto loc_82833244;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283323c
	if (ctx.cr6.eq) goto loc_8283323C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833234
	if (ctx.cr6.eq) goto loc_82833234;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833248
	goto loc_82833248;
loc_82833234:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833248
	goto loc_82833248;
loc_8283323C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833248
	goto loc_82833248;
loc_82833244:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833248:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1660(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1660);
	// ld r7,1484(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1484);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1660(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1660, ctx.r6.u64);
	// beq cr6,0x82833294
	if (ctx.cr6.eq) goto loc_82833294;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283328c
	if (ctx.cr6.eq) goto loc_8283328C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833284
	if (ctx.cr6.eq) goto loc_82833284;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833298
	goto loc_82833298;
loc_82833284:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833298
	goto loc_82833298;
loc_8283328C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833298
	goto loc_82833298;
loc_82833294:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833298:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1660(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1660);
	// ld r7,1724(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1724);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1660(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1660, ctx.r6.u64);
	// beq cr6,0x828332e4
	if (ctx.cr6.eq) goto loc_828332E4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828332dc
	if (ctx.cr6.eq) goto loc_828332DC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828332d4
	if (ctx.cr6.eq) goto loc_828332D4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828332e8
	goto loc_828332E8;
loc_828332D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828332e8
	goto loc_828332E8;
loc_828332DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828332e8
	goto loc_828332E8;
loc_828332E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828332E8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1492(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1492);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x82833334
	if (ctx.cr6.eq) goto loc_82833334;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283332c
	if (ctx.cr6.eq) goto loc_8283332C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833324
	if (ctx.cr6.eq) goto loc_82833324;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833338
	goto loc_82833338;
loc_82833324:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833338
	goto loc_82833338;
loc_8283332C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833338
	goto loc_82833338;
loc_82833334:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833338:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1540(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1540);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x82833384
	if (ctx.cr6.eq) goto loc_82833384;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283337c
	if (ctx.cr6.eq) goto loc_8283337C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833374
	if (ctx.cr6.eq) goto loc_82833374;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833388
	goto loc_82833388;
loc_82833374:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833388
	goto loc_82833388;
loc_8283337C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833388
	goto loc_82833388;
loc_82833384:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833388:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1548(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1548);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x828333d4
	if (ctx.cr6.eq) goto loc_828333D4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828333cc
	if (ctx.cr6.eq) goto loc_828333CC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828333c4
	if (ctx.cr6.eq) goto loc_828333C4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828333d8
	goto loc_828333D8;
loc_828333C4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828333d8
	goto loc_828333D8;
loc_828333CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828333d8
	goto loc_828333D8;
loc_828333D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828333D8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1612(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1612);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x82833424
	if (ctx.cr6.eq) goto loc_82833424;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283341c
	if (ctx.cr6.eq) goto loc_8283341C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833414
	if (ctx.cr6.eq) goto loc_82833414;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833428
	goto loc_82833428;
loc_82833414:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833428
	goto loc_82833428;
loc_8283341C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833428
	goto loc_82833428;
loc_82833424:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833428:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1692(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1692);
	// ld r7,1644(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1644);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1692(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1692, ctx.r6.u64);
	// beq cr6,0x82833474
	if (ctx.cr6.eq) goto loc_82833474;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283346c
	if (ctx.cr6.eq) goto loc_8283346C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833464
	if (ctx.cr6.eq) goto loc_82833464;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833478
	goto loc_82833478;
loc_82833464:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833478
	goto loc_82833478;
loc_8283346C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833478
	goto loc_82833478;
loc_82833474:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833478:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1540(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1540);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x828334c4
	if (ctx.cr6.eq) goto loc_828334C4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828334bc
	if (ctx.cr6.eq) goto loc_828334BC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828334b4
	if (ctx.cr6.eq) goto loc_828334B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828334c8
	goto loc_828334C8;
loc_828334B4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828334c8
	goto loc_828334C8;
loc_828334BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828334c8
	goto loc_828334C8;
loc_828334C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828334C8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1588(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1588);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x82833514
	if (ctx.cr6.eq) goto loc_82833514;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283350c
	if (ctx.cr6.eq) goto loc_8283350C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833504
	if (ctx.cr6.eq) goto loc_82833504;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833518
	goto loc_82833518;
loc_82833504:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833518
	goto loc_82833518;
loc_8283350C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833518
	goto loc_82833518;
loc_82833514:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833518:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1548(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1548);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x82833564
	if (ctx.cr6.eq) goto loc_82833564;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283355c
	if (ctx.cr6.eq) goto loc_8283355C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833554
	if (ctx.cr6.eq) goto loc_82833554;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833568
	goto loc_82833568;
loc_82833554:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833568
	goto loc_82833568;
loc_8283355C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833568
	goto loc_82833568;
loc_82833564:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833568:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1788(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1788);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x828335b4
	if (ctx.cr6.eq) goto loc_828335B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828335ac
	if (ctx.cr6.eq) goto loc_828335AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828335a4
	if (ctx.cr6.eq) goto loc_828335A4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828335b8
	goto loc_828335B8;
loc_828335A4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828335b8
	goto loc_828335B8;
loc_828335AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828335b8
	goto loc_828335B8;
loc_828335B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828335B8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1708(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1708);
	// ld r7,1644(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1644);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1708(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1708, ctx.r6.u64);
	// beq cr6,0x82833604
	if (ctx.cr6.eq) goto loc_82833604;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828335fc
	if (ctx.cr6.eq) goto loc_828335FC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828335f4
	if (ctx.cr6.eq) goto loc_828335F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833608
	goto loc_82833608;
loc_828335F4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833608
	goto loc_82833608;
loc_828335FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833608
	goto loc_82833608;
loc_82833604:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833608:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1716(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1716);
	// ld r7,1612(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1612);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1716(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1716, ctx.r6.u64);
	// beq cr6,0x82833654
	if (ctx.cr6.eq) goto loc_82833654;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283364c
	if (ctx.cr6.eq) goto loc_8283364C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833644
	if (ctx.cr6.eq) goto loc_82833644;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833658
	goto loc_82833658;
loc_82833644:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833658
	goto loc_82833658;
loc_8283364C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833658
	goto loc_82833658;
loc_82833654:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833658:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1716(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1716);
	// ld r7,1644(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1644);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1716(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1716, ctx.r6.u64);
	// beq cr6,0x828336a4
	if (ctx.cr6.eq) goto loc_828336A4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283369c
	if (ctx.cr6.eq) goto loc_8283369C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833694
	if (ctx.cr6.eq) goto loc_82833694;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828336a8
	goto loc_828336A8;
loc_82833694:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828336a8
	goto loc_828336A8;
loc_8283369C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828336a8
	goto loc_828336A8;
loc_828336A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828336A8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1716(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1716);
	// ld r7,1764(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1764);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1716(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1716, ctx.r6.u64);
	// beq cr6,0x828336f4
	if (ctx.cr6.eq) goto loc_828336F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828336ec
	if (ctx.cr6.eq) goto loc_828336EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828336e4
	if (ctx.cr6.eq) goto loc_828336E4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828336f8
	goto loc_828336F8;
loc_828336E4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828336f8
	goto loc_828336F8;
loc_828336EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828336f8
	goto loc_828336F8;
loc_828336F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828336F8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1756(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1756);
	// ld r7,1764(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1764);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1756(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1756, ctx.r6.u64);
	// beq cr6,0x82833744
	if (ctx.cr6.eq) goto loc_82833744;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8283373c
	if (ctx.cr6.eq) goto loc_8283373C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82833734
	if (ctx.cr6.eq) goto loc_82833734;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82833748
	goto loc_82833748;
loc_82833734:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82833748
	goto loc_82833748;
loc_8283373C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833748
	goto loc_82833748;
loc_82833744:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833748:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1756(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1756);
	// ld r7,1668(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1668);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1756(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1756, ctx.r6.u64);
	// beq cr6,0x82833788
	if (ctx.cr6.eq) goto loc_82833788;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82833780
	if (ctx.cr6.eq) goto loc_82833780;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8283378c
	if (!ctx.cr6.eq) goto loc_8283378C;
	// b 0x8283378c
	goto loc_8283378C;
loc_82833780:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8283378c
	goto loc_8283378C;
loc_82833788:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8283378C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ld r8,1756(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1756);
	// ld r7,1772(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1772);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,1756(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1756, ctx.r6.u64);
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

__attribute__((alias("__imp__sub_828337C0"))) PPC_WEAK_FUNC(sub_828337C0);
PPC_FUNC_IMPL(__imp__sub_828337C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828337C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r26,13180(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// addi r30,r9,-29532
	ctx.r30.s64 = ctx.r9.s64 + -29532;
	// lwz r24,13188(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r23,13184(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82833830
	if (ctx.cr6.eq) goto loc_82833830;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82833828
	if (ctx.cr6.eq) goto loc_82833828;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82833834
	if (!ctx.cr6.eq) goto loc_82833834;
	// b 0x82833834
	goto loc_82833834;
loc_82833828:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833834
	goto loc_82833834;
loc_82833830:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833834:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,1856
	ctx.r5.s64 = ctx.r11.s64 + 1856;
	// bl 0x82828a58
	ctx.lr = 0x82833844;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82833860
	if (ctx.cr6.eq) goto loc_82833860;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82833864
	if (!ctx.cr6.eq) goto loc_82833864;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833864
	goto loc_82833864;
loc_82833860:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833864:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,1864
	ctx.r5.s64 = ctx.r11.s64 + 1864;
	// bl 0x82828a58
	ctx.lr = 0x82833874;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82833890
	if (ctx.cr6.eq) goto loc_82833890;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82833894
	if (!ctx.cr6.eq) goto loc_82833894;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833894
	goto loc_82833894;
loc_82833890:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833894:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r5,r11,1872
	ctx.r5.s64 = ctx.r11.s64 + 1872;
	// bl 0x82828a58
	ctx.lr = 0x828338A4;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828338c0
	if (ctx.cr6.eq) goto loc_828338C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x828338c4
	if (!ctx.cr6.eq) goto loc_828338C4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828338c4
	goto loc_828338C4;
loc_828338C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828338C4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r5,r11,1880
	ctx.r5.s64 = ctx.r11.s64 + 1880;
	// bl 0x82828a58
	ctx.lr = 0x828338D4;
	sub_82828A58(ctx, base);
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828338f0
	if (ctx.cr6.eq) goto loc_828338F0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x828338f4
	if (!ctx.cr6.eq) goto loc_828338F4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828338f4
	goto loc_828338F4;
loc_828338F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828338F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1892
	ctx.r5.s64 = ctx.r11.s64 + 1892;
	// bl 0x82828a58
	ctx.lr = 0x82833904;
	sub_82828A58(ctx, base);
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283391C"))) PPC_WEAK_FUNC(sub_8283391C);
PPC_FUNC_IMPL(__imp__sub_8283391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833920"))) PPC_WEAK_FUNC(sub_82833920);
PPC_FUNC_IMPL(__imp__sub_82833920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82833928;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82833970
	if (ctx.cr6.eq) goto loc_82833970;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82833968
	if (ctx.cr6.eq) goto loc_82833968;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82833974
	if (!ctx.cr6.eq) goto loc_82833974;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82833974
	goto loc_82833974;
loc_82833968:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82833974
	goto loc_82833974;
loc_82833970:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82833974:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82833980;
	sub_82804410(ctx, base);
	// lfs f0,12708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12708);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r31,12708
	ctx.r30.s64 = ctx.r31.s64 + 12708;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,12716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12716);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,12788(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12788);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12508);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fadds f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f2,12788(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12788, temp.u32);
	// fmadds f1,f9,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fadds f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f13,12508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12508, temp.u32);
	// beq cr6,0x828339f8
	if (ctx.cr6.eq) goto loc_828339F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828339f0
	if (ctx.cr6.eq) goto loc_828339F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828339fc
	if (!ctx.cr6.eq) goto loc_828339FC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828339fc
	goto loc_828339FC;
loc_828339F0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x828339fc
	goto loc_828339FC;
loc_828339F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_828339FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82833A08;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833A28"))) PPC_WEAK_FUNC(sub_82833A28);
PPC_FUNC_IMPL(__imp__sub_82833A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833A2C"))) PPC_WEAK_FUNC(sub_82833A2C);
PPC_FUNC_IMPL(__imp__sub_82833A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833A30"))) PPC_WEAK_FUNC(sub_82833A30);
PPC_FUNC_IMPL(__imp__sub_82833A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,12556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12556);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82833a60
	if (!ctx.cr6.eq) goto loc_82833A60;
	// lwz r11,12588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12588);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82833A60:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833A6C"))) PPC_WEAK_FUNC(sub_82833A6C);
PPC_FUNC_IMPL(__imp__sub_82833A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833A70"))) PPC_WEAK_FUNC(sub_82833A70);
PPC_FUNC_IMPL(__imp__sub_82833A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,12392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,12400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833AB0"))) PPC_WEAK_FUNC(sub_82833AB0);
PPC_FUNC_IMPL(__imp__sub_82833AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82833AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82833b00
	if (ctx.cr6.eq) goto loc_82833B00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82833af8
	if (ctx.cr6.eq) goto loc_82833AF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82833b04
	if (!ctx.cr6.eq) goto loc_82833B04;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82833b04
	goto loc_82833B04;
loc_82833AF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833b04
	goto loc_82833B04;
loc_82833B00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833B04:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804270
	ctx.lr = 0x82833B10;
	sub_82804270(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,12632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12632, temp.u32);
	// stfs f13,12636(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12636, temp.u32);
	// stfs f12,12640(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12640, temp.u32);
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82833b54
	if (ctx.cr6.eq) goto loc_82833B54;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82833b4c
	if (ctx.cr6.eq) goto loc_82833B4C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82833b58
	if (!ctx.cr6.eq) goto loc_82833B58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82833b58
	goto loc_82833B58;
loc_82833B4C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82833b58
	goto loc_82833B58;
loc_82833B54:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82833B58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82833B60;
	sub_82804410(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12772, temp.u32);
	// stfs f0,12552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12552, temp.u32);
	// stfs f0,12776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12776, temp.u32);
	// stfs f0,12652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12652, temp.u32);
	// lfs f13,-30648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30648);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12616(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12616, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12812, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833B94"))) PPC_WEAK_FUNC(sub_82833B94);
PPC_FUNC_IMPL(__imp__sub_82833B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833B98"))) PPC_WEAK_FUNC(sub_82833B98);
PPC_FUNC_IMPL(__imp__sub_82833B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,12504(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12504, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833BAC"))) PPC_WEAK_FUNC(sub_82833BAC);
PPC_FUNC_IMPL(__imp__sub_82833BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833BB0"))) PPC_WEAK_FUNC(sub_82833BB0);
PPC_FUNC_IMPL(__imp__sub_82833BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82833BB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r26,r10,-29532
	ctx.r26.s64 = ctx.r10.s64 + -29532;
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r22,13184(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// lwz r10,11700(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11700);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82833c2c
	if (ctx.cr6.eq) goto loc_82833C2C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82833c24
	if (ctx.cr6.eq) goto loc_82833C24;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82833c30
	if (ctx.cr6.eq) goto loc_82833C30;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82833c30
	goto loc_82833C30;
loc_82833C24:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82833c30
	goto loc_82833C30;
loc_82833C2C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82833C30:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f2,-18644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18644);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82801de8
	ctx.lr = 0x82833C44;
	sub_82801DE8(ctx, base);
	// lwz r11,11700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82833c70
	if (ctx.cr6.eq) goto loc_82833C70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82833c68
	if (ctx.cr6.eq) goto loc_82833C68;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82833c74
	if (!ctx.cr6.eq) goto loc_82833C74;
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x82833c74
	goto loc_82833C74;
loc_82833C68:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82833c74
	goto loc_82833C74;
loc_82833C70:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82833C74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82833cb4
	if (ctx.cr6.eq) goto loc_82833CB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82833cb4
	if (ctx.cr6.eq) goto loc_82833CB4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82833cb4
	if (ctx.cr6.eq) goto loc_82833CB4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82833cb4
	if (ctx.cr6.eq) goto loc_82833CB4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2592, ctx.r10.u32);
loc_82833CB4:
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833CCC"))) PPC_WEAK_FUNC(sub_82833CCC);
PPC_FUNC_IMPL(__imp__sub_82833CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833CD0"))) PPC_WEAK_FUNC(sub_82833CD0);
PPC_FUNC_IMPL(__imp__sub_82833CD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833CDC"))) PPC_WEAK_FUNC(sub_82833CDC);
PPC_FUNC_IMPL(__imp__sub_82833CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833CE0"))) PPC_WEAK_FUNC(sub_82833CE0);
PPC_FUNC_IMPL(__imp__sub_82833CE0) {
	PPC_FUNC_PROLOGUE();
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833CE8"))) PPC_WEAK_FUNC(sub_82833CE8);
PPC_FUNC_IMPL(__imp__sub_82833CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833CEC"))) PPC_WEAK_FUNC(sub_82833CEC);
PPC_FUNC_IMPL(__imp__sub_82833CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

