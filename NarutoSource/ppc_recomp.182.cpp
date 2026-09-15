#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BAF5B8"))) PPC_WEAK_FUNC(sub_82BAF5B8);
PPC_FUNC_IMPL(__imp__sub_82BAF5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82BAF5C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82baf908
	if (ctx.cr6.eq) goto loc_82BAF908;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82baf67c
	if (ctx.cr6.eq) goto loc_82BAF67C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82baf5f4
	if (ctx.cr6.eq) goto loc_82BAF5F4;
	// bl 0x82120a70
	ctx.lr = 0x82BAF5F0;
	sub_82120A70(ctx, base);
	// stw r22,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r22.u32);
loc_82BAF5F4:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82baf608
	if (ctx.cr6.eq) goto loc_82BAF608;
	// bl 0x82120a70
	ctx.lr = 0x82BAF604;
	sub_82120A70(ctx, base);
	// stw r22,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r22.u32);
loc_82BAF608:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82baf624
	if (ctx.cr6.eq) goto loc_82BAF624;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82120a70
	ctx.lr = 0x82BAF61C;
	sub_82120A70(ctx, base);
	// stw r22,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r22.u32);
	// stw r22,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r22.u32);
loc_82BAF624:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82baf640
	if (ctx.cr6.eq) goto loc_82BAF640;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x82120a70
	ctx.lr = 0x82BAF638;
	sub_82120A70(ctx, base);
	// stw r22,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r22.u32);
	// stw r22,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r22.u32);
loc_82BAF640:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82baf65c
	if (ctx.cr6.eq) goto loc_82BAF65C;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82120a70
	ctx.lr = 0x82BAF654;
	sub_82120A70(ctx, base);
	// stw r22,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r22.u32);
	// stw r22,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r22.u32);
loc_82BAF65C:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82baf678
	if (ctx.cr6.eq) goto loc_82BAF678;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82120a70
	ctx.lr = 0x82BAF670;
	sub_82120A70(ctx, base);
	// stw r22,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r22.u32);
	// stw r22,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r22.u32);
loc_82BAF678:
	// stw r22,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r22.u32);
loc_82BAF67C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baf694
	if (ctx.cr6.eq) goto loc_82BAF694;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bl 0x82120a70
	ctx.lr = 0x82BAF690;
	sub_82120A70(ctx, base);
	// stw r22,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r22.u32);
loc_82BAF694:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82baf6a8
	if (ctx.cr6.eq) goto loc_82BAF6A8;
	// bl 0x82b98090
	ctx.lr = 0x82BAF6A4;
	sub_82B98090(ctx, base);
	// stw r22,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r22.u32);
loc_82BAF6A8:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// lis r24,-32029
	ctx.r24.s64 = -2099052544;
	// lis r23,-32029
	ctx.r23.s64 = -2099052544;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82baf7a0
	if (ctx.cr6.eq) goto loc_82BAF7A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82baf788
	if (!ctx.cr6.gt) goto loc_82BAF788;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82BAF6D4:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82baf720
	if (!ctx.cr6.gt) goto loc_82BAF720;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82BAF6F4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82baf70c
	if (ctx.cr6.eq) goto loc_82BAF70C;
	// bl 0x82120a70
	ctx.lr = 0x82BAF70C;
	sub_82120A70(ctx, base);
loc_82BAF70C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82baf6f4
	if (ctx.cr6.lt) goto loc_82BAF6F4;
loc_82BAF720:
	// lwz r30,-17448(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17448);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,-17440(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x82BAF734;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
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
	ctx.lr = 0x82BAF760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82baf770
	if (ctx.cr6.eq) goto loc_82BAF770;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BAF770;
	sub_821FD9E0(ctx, base);
loc_82BAF770:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82baf6d4
	if (ctx.cr6.lt) goto loc_82BAF6D4;
loc_82BAF788:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82120a70
	ctx.lr = 0x82BAF794;
	sub_82120A70(ctx, base);
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// bl 0x82120a70
	ctx.lr = 0x82BAF79C;
	sub_82120A70(ctx, base);
	// stw r22,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r22.u32);
loc_82BAF7A0:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82baf7e4
	if (ctx.cr6.eq) goto loc_82BAF7E4;
	// lwz r31,52(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82baf7d4
	if (!ctx.cr6.lt) goto loc_82BAF7D4;
loc_82BAF7C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82baec08
	ctx.lr = 0x82BAF7C8;
	sub_82BAEC08(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82baf7c0
	if (ctx.cr6.lt) goto loc_82BAF7C0;
loc_82BAF7D4:
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82120a70
	ctx.lr = 0x82BAF7DC;
	sub_82120A70(ctx, base);
	// stw r22,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r22.u32);
	// stw r22,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r22.u32);
loc_82BAF7E4:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82baf8bc
	if (ctx.cr6.eq) goto loc_82BAF8BC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,84(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82baf868
	if (!ctx.cr6.lt) goto loc_82BAF868;
loc_82BAF80C:
	// lwz r31,-17448(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17448);
	// lwz r26,8(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,-17440(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x82BAF820;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
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
	ctx.lr = 0x82BAF84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baf85c
	if (ctx.cr6.eq) goto loc_82BAF85C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BAF85C;
	sub_821FD9E0(ctx, base);
loc_82BAF85C:
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82baf80c
	if (ctx.cr6.lt) goto loc_82BAF80C;
loc_82BAF868:
	// lwz r31,-17448(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17448);
	// lwz r28,84(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-17440(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x82BAF87C;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
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
	ctx.lr = 0x82BAF8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baf8b8
	if (ctx.cr6.eq) goto loc_82BAF8B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BAF8B8;
	sub_821FD9E0(ctx, base);
loc_82BAF8B8:
	// stw r22,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r22.u32);
loc_82BAF8BC:
	// lwz r5,96(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r22,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r22.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82baf908
	if (ctx.cr6.eq) goto loc_82BAF908;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4010
	ctx.lr = 0x82BAF8E0;
	sub_827B4010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82baf904
	if (!ctx.cr6.eq) goto loc_82BAF904;
	// lwz r31,96(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82baf904
	if (ctx.cr6.eq) goto loc_82BAF904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b97588
	ctx.lr = 0x82BAF8FC;
	sub_82B97588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BAF904;
	sub_82120A70(ctx, base);
loc_82BAF904:
	// stw r22,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r22.u32);
loc_82BAF908:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BAF910"))) PPC_WEAK_FUNC(sub_82BAF910);
PPC_FUNC_IMPL(__imp__sub_82BAF910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82BAF918;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r24,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// bl 0x82baf288
	ctx.lr = 0x82BAF960;
	sub_82BAF288(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r15,-31942
	ctx.r15.s64 = -2093350912;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r31,12456(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// stb r9,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r9.u8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stb r7,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r7.u8);
	// stb r6,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r6.u8);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// beq cr6,0x82baf9c0
	if (ctx.cr6.eq) goto loc_82BAF9C0;
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
loc_82BAF9C0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82bae6b8
	ctx.lr = 0x82BAF9C8;
	sub_82BAE6B8(ctx, base);
	// stw r3,92(r21)
	PPC_STORE_U32(ctx.r21.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// stb r9,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r9.u8);
	// stb r6,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r6.u8);
	// stb r7,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r7.u8);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// beq cr6,0x82bafa20
	if (ctx.cr6.eq) goto loc_82BAFA20;
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
loc_82BAFA20:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r14,-31942
	ctx.r14.s64 = -2093350912;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bafa7c
	if (!ctx.cr6.eq) goto loc_82BAFA7C;
	// lwz r11,12476(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bafa7c
	if (ctx.cr6.eq) goto loc_82BAFA7C;
	// lwz r11,12496(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bafa7c
	if (!ctx.cr6.eq) goto loc_82BAFA7C;
	// lwz r11,92(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 92);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bafa7c
	if (!ctx.cr6.eq) goto loc_82BAFA7C;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82bafb64
	goto loc_82BAFB64;
loc_82BAFA7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821203b0
	ctx.lr = 0x82BAFA88;
	sub_821203B0(ctx, base);
	// stw r3,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r3.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82bafae4
	if (ctx.cr6.eq) goto loc_82BAFAE4;
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// stb r9,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r9.u8);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BAFAE4:
	// stw r11,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r11.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r9.u8);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r6,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r6.u8);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82bafb44
	if (ctx.cr6.eq) goto loc_82BAFB44;
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BAFB44:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bafb54
	if (!ctx.cr6.eq) goto loc_82BAFB54;
	// stw r16,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r16.u32);
loc_82BAFB54:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821203b0
	ctx.lr = 0x82BAFB60;
	sub_821203B0(ctx, base);
	// stw r3,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r3.u32);
loc_82BAFB64:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821203b0
	ctx.lr = 0x82BAFB70;
	sub_821203B0(ctx, base);
	// stw r3,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bafbe0
	if (ctx.cr6.eq) goto loc_82BAFBE0;
	// cmplwi cr6,r24,10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 10, ctx.xer);
	// blt cr6,0x82bafba4
	if (ctx.cr6.lt) goto loc_82BAFBA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821203b0
	ctx.lr = 0x82BAFB90;
	sub_821203B0(ctx, base);
	// stw r3,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821203b0
	ctx.lr = 0x82BAFBA0;
	sub_821203B0(ctx, base);
	// stw r3,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r3.u32);
loc_82BAFBA4:
	// cmplwi cr6,r24,14
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 14, ctx.xer);
	// blt cr6,0x82bafbbc
	if (ctx.cr6.lt) goto loc_82BAFBBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821203b0
	ctx.lr = 0x82BAFBB8;
	sub_821203B0(ctx, base);
	// stw r3,64(r21)
	PPC_STORE_U32(ctx.r21.u32 + 64, ctx.r3.u32);
loc_82BAFBBC:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821203b0
	ctx.lr = 0x82BAFBC8;
	sub_821203B0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bafbe0
	if (ctx.cr6.eq) goto loc_82BAFBE0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bafbe0
	if (ctx.cr6.eq) goto loc_82BAFBE0;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r11,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r11.u32);
loc_82BAFBE0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r9,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r9.u8);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82bafc38
	if (ctx.cr6.eq) goto loc_82BAFC38;
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BAFC38:
	// lis r10,-16162
	ctx.r10.s64 = -1059192832;
	// stw r11,60(r21)
	PPC_STORE_U32(ctx.r21.u32 + 60, ctx.r11.u32);
	// ori r9,r10,8194
	ctx.r9.u64 = ctx.r10.u64 | 8194;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bafc70
	if (!ctx.cr6.eq) goto loc_82BAFC70;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82b98108
	ctx.lr = 0x82BAFC5C;
	sub_82B98108(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r31,12456(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82bafc78
	goto loc_82BAFC78;
loc_82BAFC70:
	// stw r16,60(r21)
	PPC_STORE_U32(ctx.r21.u32 + 60, ctx.r16.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BAFC78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bafce4
	if (ctx.cr6.eq) goto loc_82BAFCE4;
	// lwz r10,60(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bafce4
	if (ctx.cr6.eq) goto loc_82BAFCE4;
	// lhz r30,2(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bafce4
	if (ctx.cr6.eq) goto loc_82BAFCE4;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BAFC9C:
	// lwz r11,60(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bafcd4
	if (ctx.cr6.eq) goto loc_82BAFCD4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82120a70
	ctx.lr = 0x82BAFCC4;
	sub_82120A70(ctx, base);
	// lwz r10,60(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r16,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r16.u32);
loc_82BAFCD4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bafc9c
	if (!ctx.cr6.eq) goto loc_82BAFC9C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r31,12456(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
loc_82BAFCE4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bafd40
	if (ctx.cr6.eq) goto loc_82BAFD40;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r7,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// beq cr6,0x82bafd3c
	if (ctx.cr6.eq) goto loc_82BAFD3C;
	// lbz r9,117(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r9,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r9.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
loc_82BAFD3C:
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BAFD40:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// bl 0x82baea40
	ctx.lr = 0x82BAFD54;
	sub_82BAEA40(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r23,12476(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12476);
	// lwz r22,12496(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12496);
	// lwz r29,12456(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// beq cr6,0x82bb0368
	if (ctx.cr6.eq) goto loc_82BB0368;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// lwz r30,12(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bafda0
	if (!ctx.cr6.gt) goto loc_82BAFDA0;
loc_82BAFD7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82bcf018
	ctx.lr = 0x82BAFD8C;
	sub_82BCF018(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bafd7c
	if (ctx.cr6.lt) goto loc_82BAFD7C;
loc_82BAFDA0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bafe7c
	if (ctx.cr6.eq) goto loc_82BAFE7C;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// lwz r30,16(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bafde0
	if (!ctx.cr6.gt) goto loc_82BAFDE0;
loc_82BAFDBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82bcf018
	ctx.lr = 0x82BAFDCC;
	sub_82BCF018(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bafdbc
	if (ctx.cr6.lt) goto loc_82BAFDBC;
loc_82BAFDE0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BAFDE4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bafecc
	if (ctx.cr6.eq) goto loc_82BAFECC;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82bafdfc
	if (ctx.cr6.gt) goto loc_82BAFDFC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82BAFDFC:
	// lwz r9,36(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// ble cr6,0x82baff1c
	if (!ctx.cr6.gt) goto loc_82BAFF1C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82BAFE10:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// beq cr6,0x82bafe60
	if (ctx.cr6.eq) goto loc_82BAFE60;
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r7,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BAFE60:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne 0x82bafe10
	if (!ctx.cr0.eq) goto loc_82BAFE10;
	// b 0x82baff1c
	goto loc_82BAFF1C;
loc_82BAFE7C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bafe8c
	if (ctx.cr6.eq) goto loc_82BAFE8C;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bafde0
	if (ctx.cr6.eq) goto loc_82BAFDE0;
loc_82BAFE8C:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bafde0
	if (!ctx.cr6.gt) goto loc_82BAFDE0;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BAFEA0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bafeb0
	if (ctx.cr6.eq) goto loc_82BAFEB0;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bafeb8
	if (ctx.cr6.eq) goto loc_82BAFEB8;
loc_82BAFEB0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BAFEB8:
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bafea0
	if (ctx.cr6.lt) goto loc_82BAFEA0;
	// b 0x82bafde4
	goto loc_82BAFDE4;
loc_82BAFECC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bafedc
	if (ctx.cr6.eq) goto loc_82BAFEDC;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82baff1c
	if (ctx.cr6.eq) goto loc_82BAFF1C;
loc_82BAFEDC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82baff1c
	if (ctx.cr6.eq) goto loc_82BAFF1C;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82bafef4
	if (ctx.cr6.gt) goto loc_82BAFEF4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82BAFEF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82baff1c
	if (!ctx.cr6.gt) goto loc_82BAFF1C;
loc_82BAFEFC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82baff0c
	if (ctx.cr6.eq) goto loc_82BAFF0C;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82baff10
	if (ctx.cr6.eq) goto loc_82BAFF10;
loc_82BAFF0C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82BAFF10:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bafefc
	if (!ctx.cr0.eq) goto loc_82BAFEFC;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BAFF1C:
	// lwz r8,40(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82bb000c
	if (!ctx.cr6.gt) goto loc_82BB000C;
loc_82BAFF30:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r4,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r5,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r5.u8);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82baff88
	if (ctx.cr6.eq) goto loc_82BAFF88;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BAFF88:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r4.u8);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// stb r5,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r5.u8);
	// stb r6,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r6.u8);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82baffec
	if (ctx.cr6.eq) goto loc_82BAFFEC;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BAFFEC:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// blt cr6,0x82baff30
	if (ctx.cr6.lt) goto loc_82BAFF30;
loc_82BB000C:
	// lwz r10,20(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb01e4
	if (ctx.cr6.eq) goto loc_82BB01E4;
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// ble cr6,0x82bb01e4
	if (!ctx.cr6.gt) goto loc_82BB01E4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82BB0024:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r4,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r4.u8);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82bb007c
	if (ctx.cr6.eq) goto loc_82BB007C;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BB007C:
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// stb r6,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r6.u8);
	// stb r5,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r5.u8);
	// stb r4,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r4.u8);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82bb00e4
	if (ctx.cr6.eq) goto loc_82BB00E4;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BB00E4:
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r7.u8);
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// stb r5,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r5.u8);
	// stb r4,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r4.u8);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82bb0150
	if (ctx.cr6.eq) goto loc_82BB0150;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BB0150:
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// stb r6,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// stb r5,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r5.u8);
	// stb r4,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r4.u8);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82bb01bc
	if (ctx.cr6.eq) goto loc_82BB01BC;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BB01BC:
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,20(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bb0024
	if (ctx.cr6.lt) goto loc_82BB0024;
loc_82BB01E4:
	// lwz r8,28(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82bb02d8
	if (ctx.cr6.eq) goto loc_82BB02D8;
	// lwz r10,32(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// ble cr6,0x82bb02d8
	if (!ctx.cr6.gt) goto loc_82BB02D8;
loc_82BB01FC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r4,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r4.u8);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82bb0254
	if (ctx.cr6.eq) goto loc_82BB0254;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BB0254:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// stb r6,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r6.u8);
	// stb r5,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r5.u8);
	// stb r4,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r4.u8);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82bb02b8
	if (ctx.cr6.eq) goto loc_82BB02B8;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BB02B8:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// blt cr6,0x82bb01fc
	if (ctx.cr6.lt) goto loc_82BB01FC;
loc_82BB02D8:
	// lwz r10,64(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb036c
	if (ctx.cr6.eq) goto loc_82BB036C;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// ble cr6,0x82bb036c
	if (!ctx.cr6.gt) goto loc_82BB036C;
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
loc_82BB02F0:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// beq cr6,0x82bb0340
	if (ctx.cr6.eq) goto loc_82BB0340;
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r7,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r6,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
loc_82BB0340:
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,64(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82bb02f0
	if (ctx.cr6.lt) goto loc_82BB02F0;
	// b 0x82bb036c
	goto loc_82BB036C;
loc_82BB0368:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BB036C:
	// lwz r10,48(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r31,52(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r20,r10,r31
	ctx.r20.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82bb04c4
	if (!ctx.cr6.lt) goto loc_82BB04C4;
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82BB038C:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// beq cr6,0x82bb03dc
	if (ctx.cr6.eq) goto loc_82BB03DC;
	// lbz r9,117(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r9,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r9.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
loc_82BB03DC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
	// stb r7,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r7.u8);
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// beq cr6,0x82bb0438
	if (ctx.cr6.eq) goto loc_82BB0438;
	// lbz r9,117(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r9,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r9.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
loc_82BB0438:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82bb044c
	if (!ctx.cr6.eq) goto loc_82BB044C;
	// stw r16,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
loc_82BB044C:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r11,6
	ctx.r11.s64 = 6;
loc_82BB0454:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bb0464
	if (ctx.cr6.eq) goto loc_82BB0464;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb0468
	if (ctx.cr6.eq) goto loc_82BB0468;
loc_82BB0464:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82BB0468:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bb0454
	if (!ctx.cr0.eq) goto loc_82BB0454;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb04b0
	if (ctx.cr6.eq) goto loc_82BB04B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 * 28;
	// bl 0x82120040
	ctx.lr = 0x82BB0490;
	sub_82120040(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r23,12476(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12476);
	// lwz r22,12496(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12496);
	// lwz r29,12456(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
loc_82BB04B0:
	// stw r16,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r16.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// blt cr6,0x82bb038c
	if (ctx.cr6.lt) goto loc_82BB038C;
loc_82BB04C4:
	// lis r19,-32029
	ctx.r19.s64 = -2099052544;
	// lis r18,-32029
	ctx.r18.s64 = -2099052544;
	// lis r17,-32029
	ctx.r17.s64 = -2099052544;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82bb1158
	if (ctx.cr6.eq) goto loc_82BB1158;
	// lwz r5,52(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// cmplw cr6,r5,r20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82bb0948
	if (!ctx.cr6.lt) goto loc_82BB0948;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
loc_82BB04EC:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bb0888
	if (!ctx.cr6.gt) goto loc_82BB0888;
	// lwz r7,332(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_82BB0504:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb0534
	if (ctx.cr6.eq) goto loc_82BB0534;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0534:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r9.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb0570
	if (ctx.cr6.eq) goto loc_82BB0570;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0570:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb05ac
	if (ctx.cr6.eq) goto loc_82BB05AC;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB05AC:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// lhz r3,90(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb05e8
	if (ctx.cr6.eq) goto loc_82BB05E8;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB05E8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// lhz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb0624
	if (ctx.cr6.eq) goto loc_82BB0624;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0624:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lhz r3,94(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb0660
	if (ctx.cr6.eq) goto loc_82BB0660;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0660:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r3,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r3.u8);
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r31.u8);
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// stb r11,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r11.u8);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82bb06bc
	if (ctx.cr6.eq) goto loc_82BB06BC;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
loc_82BB06BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82bb06d4
	if (ctx.cr6.eq) goto loc_82BB06D4;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb06e4
	if (ctx.cr6.eq) goto loc_82BB06E4;
loc_82BB06D4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82bb06e8
	goto loc_82BB06E8;
loc_82BB06E4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BB06E8:
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// blt cr6,0x82bb0858
	if (ctx.cr6.lt) goto loc_82BB0858;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb0720
	if (ctx.cr6.eq) goto loc_82BB0720;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0720:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// lhz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb075c
	if (ctx.cr6.eq) goto loc_82BB075C;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB075C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// lhz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb0798
	if (ctx.cr6.eq) goto loc_82BB0798;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0798:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,20(r10)
	PPC_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stb r11,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// lhz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb07d4
	if (ctx.cr6.eq) goto loc_82BB07D4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB07D4:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,22(r10)
	PPC_STORE_U16(ctx.r10.u32 + 22, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// lhz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb0810
	if (ctx.cr6.eq) goto loc_82BB0810;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0810:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// lhz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bb084c
	if (ctx.cr6.eq) goto loc_82BB084C;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB084C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r11.u16);
	// b 0x82bb0870
	goto loc_82BB0870;
loc_82BB0858:
	// sth r16,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r16.u16);
	// sth r16,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r16.u16);
	// sth r16,20(r10)
	PPC_STORE_U16(ctx.r10.u32 + 20, ctx.r16.u16);
	// sth r16,22(r10)
	PPC_STORE_U16(ctx.r10.u32 + 22, ctx.r16.u16);
	// sth r16,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r16.u16);
	// sth r16,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r16.u16);
loc_82BB0870:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// blt cr6,0x82bb0504
	if (ctx.cr6.lt) goto loc_82BB0504;
loc_82BB0888:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82bb093c
	if (!ctx.cr6.lt) goto loc_82BB093C;
loc_82BB08A0:
	// addi r11,r8,22
	ctx.r11.s64 = ctx.r8.s64 + 22;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82BB08A8:
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lhz r4,-22(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -22);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bb08c0
	if (ctx.cr6.lt) goto loc_82BB08C0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r10,-22(r11)
	PPC_STORE_U16(ctx.r11.u32 + -22, ctx.r10.u16);
loc_82BB08C0:
	// lwz r10,40(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb08e0
	if (ctx.cr6.eq) goto loc_82BB08E0;
	// lhz r4,-16(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -16);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bb08e0
	if (ctx.cr6.lt) goto loc_82BB08E0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r10,-16(r11)
	PPC_STORE_U16(ctx.r11.u32 + -16, ctx.r10.u16);
loc_82BB08E0:
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb0900
	if (ctx.cr6.eq) goto loc_82BB0900;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bb0900
	if (ctx.cr6.lt) goto loc_82BB0900;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82BB0900:
	// lwz r10,20(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb0920
	if (ctx.cr6.eq) goto loc_82BB0920;
	// lhz r4,-6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -6);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bb0920
	if (ctx.cr6.lt) goto loc_82BB0920;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r10,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r10.u16);
loc_82BB0920:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82bb08a8
	if (!ctx.cr0.eq) goto loc_82BB08A8;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bb08a0
	if (ctx.cr6.lt) goto loc_82BB08A0;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BB093C:
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmplw cr6,r5,r20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82bb04ec
	if (ctx.cr6.lt) goto loc_82BB04EC;
loc_82BB0948:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// stb r6,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r6.u8);
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// stb r9,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r9.u8);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82bb099c
	if (ctx.cr6.eq) goto loc_82BB099C;
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BB099C:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r11,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb0db0
	if (ctx.cr6.eq) goto loc_82BB0DB0;
	// lwz r24,52(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82bb0dcc
	if (!ctx.cr6.lt) goto loc_82BB0DCC;
loc_82BB09B8:
	// lwz r30,8(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb0a10
	if (ctx.cr6.eq) goto loc_82BB0A10;
	// lwz r31,-17448(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17448);
	// lwz r29,-17440(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BB09D4;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17444);
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
	ctx.lr = 0x82BB0A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb0a10
	if (ctx.cr6.eq) goto loc_82BB0A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BB0A10;
	sub_821FD9E0(ctx, base);
loc_82BB0A10:
	// stw r16,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r16.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x82BB0A20;
	sub_82120040(ctx, base);
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
	// lwz r10,12456(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r5,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r5.u8);
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// stb r8,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r8.u8);
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// beq cr6,0x82bb0a7c
	if (ctx.cr6.eq) goto loc_82BB0A7C;
	// lbz r11,109(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r7,110(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stb r9,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r9.u8);
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r7,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r7.u8);
loc_82BB0A7C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r7.u8);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// stb r6,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r6.u8);
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// beq cr6,0x82bb0adc
	if (ctx.cr6.eq) goto loc_82BB0ADC;
	// lbz r11,109(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
loc_82BB0ADC:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r16,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r16.u32);
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r16,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r16.u32);
	// lwz r7,12(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r16,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r16.u32);
	// lwz r6,12(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x82BB0B14;
	sub_82120040(ctx, base);
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bb0cc0
	if (!ctx.cr6.lt) goto loc_82BB0CC0;
	// lwz r8,12456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82BB0B44:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r7.u8);
	// stb r6,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r6.u8);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82bb0b9c
	if (ctx.cr6.eq) goto loc_82BB0B9C;
	// lbz r11,109(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82BB0B9C:
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb0bf4
	if (!ctx.cr6.eq) goto loc_82BB0BF4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb0bfc
	if (ctx.cr6.eq) goto loc_82BB0BFC;
	// lwz r11,12476(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12476);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,12496(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12496);
loc_82BB0BC8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb0bd8
	if (ctx.cr6.eq) goto loc_82BB0BD8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82bb0be0
	if (ctx.cr6.eq) goto loc_82BB0BE0;
loc_82BB0BD8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_82BB0BE0:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bb0bc8
	if (ctx.cr6.lt) goto loc_82BB0BC8;
	// b 0x82bb0bfc
	goto loc_82BB0BFC;
loc_82BB0BF4:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82BB0BFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82BB0C0C;
	sub_82120040(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,12456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82bb0cb4
	if (!ctx.cr6.gt) goto loc_82BB0CB4;
loc_82BB0C28:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// lhz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// beq cr6,0x82bb0c5c
	if (ctx.cr6.eq) goto loc_82BB0C5C;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0C5C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// lhz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// beq cr6,0x82bb0c98
	if (ctx.cr6.eq) goto loc_82BB0C98;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB0C98:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb0c28
	if (ctx.cr6.lt) goto loc_82BB0C28;
loc_82BB0CB4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bb0b44
	if (ctx.cr6.lt) goto loc_82BB0B44;
loc_82BB0CC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r23,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82BB0CCC;
	sub_82120040(ctx, base);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82bb0d90
	if (ctx.cr6.lt) goto loc_82BB0D90;
loc_82BB0CF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r28,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r28.s64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB0D24;
	sub_82219130(ctx, base);
	// lwz r29,-17448(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17448);
	// lwz r22,4(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,-17440(r17)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x82BB0D38;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
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
	ctx.lr = 0x82BB0D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb0d74
	if (ctx.cr6.eq) goto loc_82BB0D74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BB0D74;
	sub_821FD9E0(ctx, base);
loc_82BB0D74:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bge cr6,0x82bb0cf8
	if (!ctx.cr6.lt) goto loc_82BB0CF8;
loc_82BB0D90:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82bb09b8
	if (ctx.cr6.lt) goto loc_82BB09B8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r22,12496(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12496);
	// lwz r29,12456(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// lwz r23,12476(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12476);
	// b 0x82bb0dcc
	goto loc_82BB0DCC;
loc_82BB0DB0:
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82bb0dcc
	if (!ctx.cr6.lt) goto loc_82BB0DCC;
loc_82BB0DBC:
	// stw r16,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r16.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82bb0dbc
	if (ctx.cr6.lt) goto loc_82BB0DBC;
loc_82BB0DCC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r7.u8);
	// stb r6,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r6.u8);
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// stb r9,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r9.u8);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82bb0e24
	if (ctx.cr6.eq) goto loc_82BB0E24;
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BB0E24:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r21)
	PPC_STORE_U32(ctx.r21.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82bb1144
	if (ctx.cr6.eq) goto loc_82BB1144;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb1144
	if (!ctx.cr6.eq) goto loc_82BB1144;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r30,80(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB0E64;
	sub_82120040(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,84(r21)
	PPC_STORE_U32(ctx.r21.u32 + 84, ctx.r3.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BB0E74;
	sub_82218A80(ctx, base);
	// lwz r22,12496(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12496);
	// lwz r29,12456(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb114c
	if (ctx.cr6.eq) goto loc_82BB114C;
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r23,12476(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12476);
loc_82BB0E8C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// stb r7,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r7.u8);
	// stb r6,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r6.u8);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x82bb0ef0
	if (ctx.cr6.eq) goto loc_82BB0EF0;
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r10,109(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r9,111(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stb r10,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r10.u8);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
loc_82BB0EF0:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r8,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stb r7,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r7.u8);
	// stb r6,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r6.u8);
	// stb r9,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r9.u8);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x82bb0f5c
	if (ctx.cr6.eq) goto loc_82BB0F5C;
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r10,109(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r9,111(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stb r10,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r10.u8);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
loc_82BB0F5C:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stb r8,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// stb r7,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r7.u8);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// stb r11,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r11.u8);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// beq cr6,0x82bb0fc0
	if (ctx.cr6.eq) goto loc_82BB0FC0;
	// lbz r9,109(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stb r9,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r9.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
loc_82BB0FC0:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stb r7,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r7.u8);
	// stb r6,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r6.u8);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// beq cr6,0x82bb1024
	if (ctx.cr6.eq) goto loc_82BB1024;
	// lbz r9,109(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stb r9,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r9.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
loc_82BB1024:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// beq cr6,0x82bb1040
	if (ctx.cr6.eq) goto loc_82BB1040;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb104c
	if (ctx.cr6.eq) goto loc_82BB104C;
loc_82BB1040:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82BB104C:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r16,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r16.u32);
	// lwz r10,84(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb1138
	if (ctx.cr6.eq) goto loc_82BB1138;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82BB1074;
	sub_82120040(ctx, base);
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lwz r29,12456(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12456);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bb1130
	if (!ctx.cr6.gt) goto loc_82BB1130;
loc_82BB10A0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// lhz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82bb10d4
	if (ctx.cr6.eq) goto loc_82BB10D4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB10D4:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// lhz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82bb1110
	if (ctx.cr6.eq) goto loc_82BB1110;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB1110:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,84(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82bb10a0
	if (ctx.cr6.lt) goto loc_82BB10A0;
loc_82BB1130:
	// lwz r22,12496(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12496);
	// lwz r23,12476(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12476);
loc_82BB1138:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bb0e8c
	if (!ctx.cr6.eq) goto loc_82BB0E8C;
	// b 0x82bb1154
	goto loc_82BB1154;
loc_82BB1144:
	// stw r16,80(r21)
	PPC_STORE_U32(ctx.r21.u32 + 80, ctx.r16.u32);
	// b 0x82bb1154
	goto loc_82BB1154;
loc_82BB114C:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r23,12476(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12476);
loc_82BB1154:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BB1158:
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// blt cr6,0x82bb11c4
	if (ctx.cr6.lt) goto loc_82BB11C4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bb1174
	if (ctx.cr6.eq) goto loc_82BB1174;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb117c
	if (ctx.cr6.eq) goto loc_82BB117C;
loc_82BB1174:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BB117C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bb118c
	if (ctx.cr6.eq) goto loc_82BB118C;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb1194
	if (ctx.cr6.eq) goto loc_82BB1194;
loc_82BB118C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BB1194:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bb11a4
	if (ctx.cr6.eq) goto loc_82BB11A4;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb11ac
	if (ctx.cr6.eq) goto loc_82BB11AC;
loc_82BB11A4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BB11AC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bb11bc
	if (ctx.cr6.eq) goto loc_82BB11BC;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb11c4
	if (ctx.cr6.eq) goto loc_82BB11C4;
loc_82BB11BC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BB11C4:
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x82bb11e4
	if (ctx.cr6.lt) goto loc_82BB11E4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bb11dc
	if (ctx.cr6.eq) goto loc_82BB11DC;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb11e4
	if (ctx.cr6.eq) goto loc_82BB11E4;
loc_82BB11DC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BB11E4:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// blt cr6,0x82bb1204
	if (ctx.cr6.lt) goto loc_82BB1204;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82bb11fc
	if (ctx.cr6.eq) goto loc_82BB11FC;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82bb1204
	if (ctx.cr6.eq) goto loc_82BB1204;
loc_82BB11FC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82BB1204:
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// blt cr6,0x82bb13e4
	if (ctx.cr6.lt) goto loc_82BB13E4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// stb r6,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r6.u8);
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// stb r9,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r9.u8);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// beq cr6,0x82bb1260
	if (ctx.cr6.eq) goto loc_82BB1260;
	// lbz r11,117(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BB1260:
	// lwz r31,96(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// addi r28,r21,96
	ctx.r28.s64 = ctx.r21.s64 + 96;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb134c
	if (ctx.cr6.eq) goto loc_82BB134C;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r29,12480(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82BB1288;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r29,4132
	ctx.r4.s64 = ctx.r29.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc58e0
	ctx.lr = 0x82BB1298;
	sub_82BC58E0(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb12c0
	if (ctx.cr6.eq) goto loc_82BB12C0;
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc58e0
	ctx.lr = 0x82BB12C0;
	sub_82BC58E0(ctx, base);
loc_82BB12C0:
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82BB12C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b97268
	ctx.lr = 0x82BB12D0;
	sub_82B97268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r30,r11,-18444
	ctx.r30.s64 = ctx.r11.s64 + -18444;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// bl 0x82b83658
	ctx.lr = 0x82BB12E4;
	sub_82B83658(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82b83658
	ctx.lr = 0x82BB12F0;
	sub_82B83658(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83658
	ctx.lr = 0x82BB12FC;
	sub_82B83658(ctx, base);
	// lwz r30,-17448(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17448);
	// lwz r29,-17440(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BB130C;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17444);
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB1338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb1348
	if (ctx.cr6.eq) goto loc_82BB1348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BB1348;
	sub_821FD9E0(ctx, base);
loc_82BB1348:
	// stw r16,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r16.u32);
loc_82BB134C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bb1390
	if (ctx.cr6.eq) goto loc_82BB1390;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82bb13cc
	if (ctx.cr6.eq) goto loc_82BB13CC;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,30368
	ctx.r5.s64 = ctx.r11.s64 + 30368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82BB1378;
	sub_82BCE5D8(ctx, base);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_82BB1390:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb13c0
	if (!ctx.cr6.eq) goto loc_82BB13C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82120040
	ctx.lr = 0x82BB13A8;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb13b8
	if (ctx.cr6.eq) goto loc_82BB13B8;
	// bl 0x82b97600
	ctx.lr = 0x82BB13B4;
	sub_82B97600(ctx, base);
	// b 0x82bb13bc
	goto loc_82BB13BC;
loc_82BB13B8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82BB13BC:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82BB13C0:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82b972f0
	ctx.lr = 0x82BB13CC;
	sub_82B972F0(ctx, base);
loc_82BB13CC:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_82BB13E4:
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB13F8"))) PPC_WEAK_FUNC(sub_82BB13F8);
PPC_FUNC_IMPL(__imp__sub_82BB13F8) {
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
	// beq cr6,0x82bb1450
	if (ctx.cr6.eq) goto loc_82BB1450;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82bb1450
	if (!ctx.cr6.eq) goto loc_82BB1450;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bgt 0x82bb1450
	if (ctx.cr0.gt) goto loc_82BB1450;
	// bl 0x82baf5b8
	ctx.lr = 0x82BB1438;
	sub_82BAF5B8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd448
	ctx.lr = 0x82BB1448;
	sub_82BCD448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BB1450;
	sub_82120A70(ctx, base);
loc_82BB1450:
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

__attribute__((alias("__imp__sub_82BB1464"))) PPC_WEAK_FUNC(sub_82BB1464);
PPC_FUNC_IMPL(__imp__sub_82BB1464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1468"))) PPC_WEAK_FUNC(sub_82BB1468);
PPC_FUNC_IMPL(__imp__sub_82BB1468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// addi r5,r10,10472
	ctx.r5.s64 = ctx.r10.s64 + 10472;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32069
	ctx.r9.s64 = -2101673984;
	// addi r11,r11,-1776
	ctx.r11.s64 = ctx.r11.s64 + -1776;
	// addi r10,r10,-6192
	ctx.r10.s64 = ctx.r10.s64 + -6192;
	// addi r9,r9,5112
	ctx.r9.s64 = ctx.r9.s64 + 5112;
	// stw r11,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r11.u32);
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// stw r10,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r10.u32);
	// lis r7,-32069
	ctx.r7.s64 = -2101673984;
	// stw r9,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r9.u32);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// addi r11,r6,-6208
	ctx.r11.s64 = ctx.r6.s64 + -6208;
	// addi r10,r7,-3304
	ctx.r10.s64 = ctx.r7.s64 + -3304;
	// addi r9,r8,-6000
	ctx.r9.s64 = ctx.r8.s64 + -6000;
	// stw r11,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r11.u32);
	// stw r10,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, ctx.r10.u32);
	// stw r9,64(r5)
	PPC_STORE_U32(ctx.r5.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB14BC"))) PPC_WEAK_FUNC(sub_82BB14BC);
PPC_FUNC_IMPL(__imp__sub_82BB14BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB14C0"))) PPC_WEAK_FUNC(sub_82BB14C0);
PPC_FUNC_IMPL(__imp__sub_82BB14C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB14C8"))) PPC_WEAK_FUNC(sub_82BB14C8);
PPC_FUNC_IMPL(__imp__sub_82BB14C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB14CC"))) PPC_WEAK_FUNC(sub_82BB14CC);
PPC_FUNC_IMPL(__imp__sub_82BB14CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB14D0"))) PPC_WEAK_FUNC(sub_82BB14D0);
PPC_FUNC_IMPL(__imp__sub_82BB14D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB14E0"))) PPC_WEAK_FUNC(sub_82BB14E0);
PPC_FUNC_IMPL(__imp__sub_82BB14E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r10,2260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2260);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb1500
	if (!ctx.cr6.eq) goto loc_82BB1500;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB1500:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1510"))) PPC_WEAK_FUNC(sub_82BB1510);
PPC_FUNC_IMPL(__imp__sub_82BB1510) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1518"))) PPC_WEAK_FUNC(sub_82BB1518);
PPC_FUNC_IMPL(__imp__sub_82BB1518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB151C"))) PPC_WEAK_FUNC(sub_82BB151C);
PPC_FUNC_IMPL(__imp__sub_82BB151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1520"))) PPC_WEAK_FUNC(sub_82BB1520);
PPC_FUNC_IMPL(__imp__sub_82BB1520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mulli r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 * 44;
	// addi r11,r11,10472
	ctx.r11.s64 = ctx.r11.s64 + 10472;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1540"))) PPC_WEAK_FUNC(sub_82BB1540);
PPC_FUNC_IMPL(__imp__sub_82BB1540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r10,r11,10472
	ctx.r10.s64 = ctx.r11.s64 + 10472;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BB1554"))) PPC_WEAK_FUNC(sub_82BB1554);
PPC_FUNC_IMPL(__imp__sub_82BB1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1558"))) PPC_WEAK_FUNC(sub_82BB1558);
PPC_FUNC_IMPL(__imp__sub_82BB1558) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bgt 0x82bb1594
	if (ctx.cr0.gt) goto loc_82BB1594;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd448
	ctx.lr = 0x82BB158C;
	sub_82BCD448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BB1594;
	sub_82120A70(ctx, base);
loc_82BB1594:
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

__attribute__((alias("__imp__sub_82BB15A8"))) PPC_WEAK_FUNC(sub_82BB15A8);
PPC_FUNC_IMPL(__imp__sub_82BB15A8) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x82BB15C0;
	sub_82120040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r9,r10,10472
	ctx.r9.s64 = ctx.r10.s64 + 10472;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB15EC"))) PPC_WEAK_FUNC(sub_82BB15EC);
PPC_FUNC_IMPL(__imp__sub_82BB15EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB15F0"))) PPC_WEAK_FUNC(sub_82BB15F0);
PPC_FUNC_IMPL(__imp__sub_82BB15F0) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x82BB1608;
	sub_82120040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r9,r10,10472
	ctx.r9.s64 = ctx.r10.s64 + 10472;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1634"))) PPC_WEAK_FUNC(sub_82BB1634);
PPC_FUNC_IMPL(__imp__sub_82BB1634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1638"))) PPC_WEAK_FUNC(sub_82BB1638);
PPC_FUNC_IMPL(__imp__sub_82BB1638) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r8,12456(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r31,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r31.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// beq cr6,0x82bb1694
	if (ctx.cr6.eq) goto loc_82BB1694;
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// lbz r10,-15(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// stb r10,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r10.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
loc_82BB1694:
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// blt cr6,0x82bb16a0
	if (ctx.cr6.lt) goto loc_82BB16A0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BB16A0:
	// lis r7,-31947
	ctx.r7.s64 = -2093678592;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r10,r7,10472
	ctx.r10.s64 = ctx.r7.s64 + 10472;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// beq cr6,0x82bb171c
	if (ctx.cr6.eq) goto loc_82BB171C;
	// lbz r8,-15(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BB171C:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1728"))) PPC_WEAK_FUNC(sub_82BB1728);
PPC_FUNC_IMPL(__imp__sub_82BB1728) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,10472
	ctx.r11.s64 = ctx.r11.s64 + 10472;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82BB1740:
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r7,-32069
	ctx.r7.s64 = -2101673984;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r8,r8,5616
	ctx.r8.s64 = ctx.r8.s64 + 5616;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// addi r7,r7,5544
	ctx.r7.s64 = ctx.r7.s64 + 5544;
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lis r5,-32069
	ctx.r5.s64 = -2101673984;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lis r4,-32069
	ctx.r4.s64 = -2101673984;
	// lis r3,-32069
	ctx.r3.s64 = -2101673984;
	// lis r31,-32069
	ctx.r31.s64 = -2101673984;
	// lis r30,-32069
	ctx.r30.s64 = -2101673984;
	// addi r6,r6,5392
	ctx.r6.s64 = ctx.r6.s64 + 5392;
	// addi r5,r5,5464
	ctx.r5.s64 = ctx.r5.s64 + 5464;
	// addi r4,r4,5344
	ctx.r4.s64 = ctx.r4.s64 + 5344;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// addi r3,r3,5328
	ctx.r3.s64 = ctx.r3.s64 + 5328;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// addi r8,r31,5320
	ctx.r8.s64 = ctx.r31.s64 + 5320;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// addi r7,r30,5312
	ctx.r7.s64 = ctx.r30.s64 + 5312;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// blt cr6,0x82bb1740
	if (ctx.cr6.lt) goto loc_82BB1740;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,10464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10464, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB17D0"))) PPC_WEAK_FUNC(sub_82BB17D0);
PPC_FUNC_IMPL(__imp__sub_82BB17D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB17D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb1800
	if (ctx.cr6.eq) goto loc_82BB1800;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82bb1800
	if (ctx.cr6.eq) goto loc_82BB1800;
	// bl 0x82120a70
	ctx.lr = 0x82BB17FC;
	sub_82120A70(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82BB1800:
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bb184c
	if (ctx.cr6.eq) goto loc_82BB184C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4010
	ctx.lr = 0x82BB1820;
	sub_827B4010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb1848
	if (!ctx.cr6.eq) goto loc_82BB1848;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb1848
	if (ctx.cr6.eq) goto loc_82BB1848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB1848:
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_82BB184C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb185c
	if (ctx.cr6.eq) goto loc_82BB185C;
	// bl 0x8215a0d8
	ctx.lr = 0x82BB185C;
	sub_8215A0D8(ctx, base);
loc_82BB185C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82120a70
	ctx.lr = 0x82BB1864;
	sub_82120A70(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb18c8
	if (ctx.cr6.eq) goto loc_82BB18C8;
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb18b0
	if (ctx.cr6.eq) goto loc_82BB18B0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82BB1884:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82120a70
	ctx.lr = 0x82BB1894;
	sub_82120A70(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r29,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r29.u32);
	// lhz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bb1884
	if (ctx.cr6.lt) goto loc_82BB1884;
loc_82BB18B0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82120a70
	ctx.lr = 0x82BB18B8;
	sub_82120A70(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82b989f8
	ctx.lr = 0x82BB18C4;
	sub_82B989F8(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82BB18C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB18D0"))) PPC_WEAK_FUNC(sub_82BB18D0);
PPC_FUNC_IMPL(__imp__sub_82BB18D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB18D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82bb17d0
	ctx.lr = 0x82BB18F8;
	sub_82BB17D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb1914
	if (ctx.cr6.eq) goto loc_82BB1914;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB1914:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb1930
	if (ctx.cr6.eq) goto loc_82BB1930;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB1930:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bb194c
	if (ctx.cr6.eq) goto loc_82BB194C;
	// bl 0x82219130
	ctx.lr = 0x82BB1948;
	sub_82219130(ctx, base);
	// b 0x82bb1958
	goto loc_82BB1958;
loc_82BB194C:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82219130
	ctx.lr = 0x82BB1954;
	sub_82219130(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_82BB1958:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb1974
	if (ctx.cr6.eq) goto loc_82BB1974;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB1974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB1974:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb19b8
	if (ctx.cr6.eq) goto loc_82BB19B8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bb19a8
	if (ctx.cr6.eq) goto loc_82BB19A8;
	// bl 0x82bb7078
	ctx.lr = 0x82BB198C;
	sub_82BB7078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB19A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x82bb19b8
	goto loc_82BB19B8;
loc_82BB19A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB19B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB19B8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bb1a00
	if (ctx.cr6.eq) goto loc_82BB1A00;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb19fc
	if (ctx.cr6.eq) goto loc_82BB19FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB19E8;
	sub_82120040(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82219130
	ctx.lr = 0x82BB19F8;
	sub_82219130(ctx, base);
	// b 0x82bb1a00
	goto loc_82BB1A00;
loc_82BB19FC:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82BB1A00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lbz r10,19(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 19);
	// stb r10,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r10.u8);
	// beq cr6,0x82bb1a40
	if (ctx.cr6.eq) goto loc_82BB1A40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82bb1a40
	if (!ctx.cr6.eq) goto loc_82BB1A40;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba8ce8
	ctx.lr = 0x82BB1A40;
	sub_82BA8CE8(ctx, base);
loc_82BB1A40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB1A48"))) PPC_WEAK_FUNC(sub_82BB1A48);
PPC_FUNC_IMPL(__imp__sub_82BB1A48) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r11,12764(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12764);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,10336
	ctx.r10.s64 = ctx.r10.s64 + 10336;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r11,12764(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12764, ctx.r11.u32);
	// stwx r3,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r4,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1A7C"))) PPC_WEAK_FUNC(sub_82BB1A7C);
PPC_FUNC_IMPL(__imp__sub_82BB1A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1A80"))) PPC_WEAK_FUNC(sub_82BB1A80);
PPC_FUNC_IMPL(__imp__sub_82BB1A80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,11220(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11220);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bb1abc
	if (!ctx.cr6.gt) goto loc_82BB1ABC;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r8,5724(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5724);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82BB1AA0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bb1ac4
	if (ctx.cr6.eq) goto loc_82BB1AC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,5392
	ctx.r10.s64 = ctx.r10.s64 + 5392;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bb1aa0
	if (ctx.cr6.lt) goto loc_82BB1AA0;
loc_82BB1ABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB1AC4:
	// mulli r11,r11,5392
	ctx.r11.s64 = ctx.r11.s64 * 5392;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1AD0"))) PPC_WEAK_FUNC(sub_82BB1AD0);
PPC_FUNC_IMPL(__imp__sub_82BB1AD0) {
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
	// lis r4,-31942
	ctx.r4.s64 = -2093350912;
	// lwz r5,12764(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12764);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82bb1b1c
	if (!ctx.cr6.gt) goto loc_82BB1B1C;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r11,r11,10336
	ctx.r11.s64 = ctx.r11.s64 + 10336;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_82BB1AF8:
	// lwz r3,-4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// bl 0x82bb1a80
	ctx.lr = 0x82BB1B00;
	sub_82BB1A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb1b10
	if (ctx.cr6.eq) goto loc_82BB1B10;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82BB1B10:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bne 0x82bb1af8
	if (!ctx.cr0.eq) goto loc_82BB1AF8;
loc_82BB1B1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12764(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB1B34"))) PPC_WEAK_FUNC(sub_82BB1B34);
PPC_FUNC_IMPL(__imp__sub_82BB1B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB1B38"))) PPC_WEAK_FUNC(sub_82BB1B38);
PPC_FUNC_IMPL(__imp__sub_82BB1B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB1B40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bb1b60
	if (!ctx.cr6.eq) goto loc_82BB1B60;
loc_82BB1B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BB1B60:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82bb1b8c
	if (!ctx.cr6.eq) goto loc_82BB1B8C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb1b80
	if (ctx.cr6.lt) goto loc_82BB1B80;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BB1B80:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82BB1B8C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bne cr6,0x82bb1bb0
	if (!ctx.cr6.eq) goto loc_82BB1BB0;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb1bb0
	if (ctx.cr6.eq) goto loc_82BB1BB0;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82BB1BB0:
	// lis r31,-31947
	ctx.r31.s64 = -2093678592;
	// lis r29,-31947
	ctx.r29.s64 = -2093678592;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwz r7,11220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11220);
	// lwz r10,5724(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5724);
	// beq cr6,0x82bb1c4c
	if (ctx.cr6.eq) goto loc_82BB1C4C;
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// addi r6,r9,5512
	ctx.r6.s64 = ctx.r9.s64 + 5512;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bb1c4c
	if (!ctx.cr6.eq) goto loc_82BB1C4C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb1c4c
	if (ctx.cr6.eq) goto loc_82BB1C4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb1c4c
	if (ctx.cr6.eq) goto loc_82BB1C4C;
	// mulli r9,r7,5392
	ctx.r9.s64 = ctx.r7.s64 * 5392;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb1c4c
	if (!ctx.cr6.lt) goto loc_82BB1C4C;
loc_82BB1C28:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bb1c9c
	if (ctx.cr6.eq) goto loc_82BB1C9C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bb1c9c
	if (ctx.cr6.eq) goto loc_82BB1C9C;
	// addi r11,r11,5392
	ctx.r11.s64 = ctx.r11.s64 + 5392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb1c28
	if (ctx.cr6.lt) goto loc_82BB1C28;
loc_82BB1C4C:
	// mulli r8,r7,5392
	ctx.r8.s64 = ctx.r7.s64 * 5392;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb1c78
	if (!ctx.cr6.lt) goto loc_82BB1C78;
loc_82BB1C60:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb1c9c
	if (ctx.cr6.eq) goto loc_82BB1C9C;
	// addi r11,r11,5392
	ctx.r11.s64 = ctx.r11.s64 + 5392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb1c60
	if (ctx.cr6.lt) goto loc_82BB1C60;
loc_82BB1C78:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82bb1b54
	if (ctx.cr6.eq) goto loc_82BB1B54;
	// addi r3,r8,5392
	ctx.r3.s64 = ctx.r8.s64 + 5392;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb1ca8
	if (ctx.cr6.eq) goto loc_82BB1CA8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82121828
	ctx.lr = 0x82BB1C98;
	sub_82121828(ctx, base);
	// b 0x82bb1cb0
	goto loc_82BB1CB0;
loc_82BB1C9C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BB1CA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82BB1CB0;
	sub_82120040(ctx, base);
loc_82BB1CB0:
	// lwz r11,11220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11220);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r3,5724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5724, ctx.r3.u32);
	// li r10,224
	ctx.r10.s64 = 224;
	// mulli r9,r11,5392
	ctx.r9.s64 = ctx.r11.s64 * 5392;
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r9,11220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11220, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
loc_82BB1CE4:
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x82bb1ce4
	if (!ctx.cr0.eq) goto loc_82BB1CE4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB1D10"))) PPC_WEAK_FUNC(sub_82BB1D10);
PPC_FUNC_IMPL(__imp__sub_82BB1D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB1D18;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82BB1D3C;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb1d5c
	if (!ctx.cr6.eq) goto loc_82BB1D5C;
loc_82BB1D44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BB1D5C:
	// lis r31,-32030
	ctx.r31.s64 = -2099118080;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,26652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26652, ctx.r4.u32);
	// bne cr6,0x82bb1d74
	if (!ctx.cr6.eq) goto loc_82BB1D74;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
loc_82BB1D74:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82BB1D88;
	sub_82BFD450(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,26652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26652, ctx.r11.u32);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x82bb1d44
	if (ctx.cr6.lt) goto loc_82BB1D44;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BB1DB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82bb1db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BB1DB0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-18532
	ctx.r4.s64 = ctx.r11.s64 + -18532;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// bl 0x8221bed0
	ctx.lr = 0x82BB1DDC;
	sub_8221BED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb1d44
	if (!ctx.cr6.eq) goto loc_82BB1D44;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821203b0
	ctx.lr = 0x82BB1E00;
	sub_821203B0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82bb1d44
	if (!ctx.cr6.eq) goto loc_82BB1D44;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r27,12456(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12456);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// beq cr6,0x82bb1e5c
	if (ctx.cr6.eq) goto loc_82BB1E5C;
	// lbz r8,89(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
loc_82BB1E5C:
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// add r10,r7,r29
	ctx.r10.u64 = ctx.r7.u64 + ctx.r29.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// lfs f29,-4012(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4012);
	ctx.f29.f64 = double(temp.f32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bb1f98
	if (!ctx.cr6.lt) goto loc_82BB1F98;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f31,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
loc_82BB1E80:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// stb r6,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r6.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82bb1ed4
	if (ctx.cr6.eq) goto loc_82BB1ED4;
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BB1ED4:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bb1f98
	if (ctx.cr6.eq) goto loc_82BB1F98;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x82bb1d44
	if (ctx.cr6.lt) goto loc_82BB1D44;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bgt cr6,0x82bb1d44
	if (ctx.cr6.gt) goto loc_82BB1D44;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB1F0C;
	sub_821204C0(ctx, base);
	// lhz r10,5388(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 5388);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fmadds f10,f11,f29,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f1.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x821204c0
	ctx.lr = 0x82BB1F3C;
	sub_821204C0(ctx, base);
	// lhz r8,5390(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 5390);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f9,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fmadds f5,f6,f29,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f1.f64));
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x821204c0
	ctx.lr = 0x82BB1F6C;
	sub_821204C0(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821204c0
	ctx.lr = 0x82BB1F7C;
	sub_821204C0(ctx, base);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// add r10,r7,r29
	ctx.r10.u64 = ctx.r7.u64 + ctx.r29.u64;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bb1e80
	if (ctx.cr6.lt) goto loc_82BB1E80;
loc_82BB1F98:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82bb20f8
	if (ctx.cr6.lt) goto loc_82BB20F8;
	// add r10,r7,r29
	ctx.r10.u64 = ctx.r7.u64 + ctx.r29.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb20a0
	if (!ctx.cr6.lt) goto loc_82BB20A0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f30,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
loc_82BB1FC4:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// stb r6,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r6.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82bb2018
	if (ctx.cr6.eq) goto loc_82BB2018;
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
loc_82BB2018:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82bb1d44
	if (ctx.cr6.lt) goto loc_82BB1D44;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82bb1d44
	if (ctx.cr6.gt) goto loc_82BB1D44;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB2048;
	sub_821204C0(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821204c0
	ctx.lr = 0x82BB2058;
	sub_821204C0(ctx, base);
	// stfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// cmplwi cr6,r31,33
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 33, ctx.xer);
	// beq cr6,0x82bb206c
	if (ctx.cr6.eq) goto loc_82BB206C;
	// cmplwi cr6,r31,65
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65, ctx.xer);
	// bne cr6,0x82bb2088
	if (!ctx.cr6.eq) goto loc_82BB2088;
loc_82BB206C:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82bb207c
	if (!ctx.cr6.gt) goto loc_82BB207C;
	// fmuls f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
loc_82BB207C:
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
loc_82BB2088:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb1fc4
	if (ctx.cr6.lt) goto loc_82BB1FC4;
loc_82BB20A0:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// stb r7,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// beq cr6,0x82bb20e8
	if (ctx.cr6.eq) goto loc_82BB20E8;
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
loc_82BB20E8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bb20fc
	if (!ctx.cr6.eq) goto loc_82BB20FC;
loc_82BB20F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BB20FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB2110"))) PPC_WEAK_FUNC(sub_82BB2110);
PPC_FUNC_IMPL(__imp__sub_82BB2110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB2118;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bb21f8
	if (ctx.cr6.eq) goto loc_82BB21F8;
	// lis r29,-31947
	ctx.r29.s64 = -2093678592;
	// lis r30,-31947
	ctx.r30.s64 = -2093678592;
	// lwz r9,11220(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11220);
	// lwz r11,5724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb2180
	if (ctx.cr6.eq) goto loc_82BB2180;
	// mulli r10,r9,5392
	ctx.r10.s64 = ctx.r9.s64 * 5392;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb2170
	if (!ctx.cr6.lt) goto loc_82BB2170;
loc_82BB2158:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bb2170
	if (ctx.cr6.eq) goto loc_82BB2170;
	// addi r31,r31,5392
	ctx.r31.s64 = ctx.r31.s64 + 5392;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb2158
	if (ctx.cr6.lt) goto loc_82BB2158;
loc_82BB2170:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bb2180
	if (ctx.cr6.eq) goto loc_82BB2180;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bb21c4
	if (!ctx.cr6.eq) goto loc_82BB21C4;
loc_82BB2180:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mulli r3,r10,5392
	ctx.r3.s64 = ctx.r10.s64 * 5392;
	// beq cr6,0x82bb21a0
	if (ctx.cr6.eq) goto loc_82BB21A0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82121828
	ctx.lr = 0x82BB219C;
	sub_82121828(ctx, base);
	// b 0x82bb21a8
	goto loc_82BB21A8;
loc_82BB21A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82BB21A8;
	sub_82120040(ctx, base);
loc_82BB21A8:
	// lwz r11,11220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11220);
	// stw r3,5724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5724, ctx.r3.u32);
	// mulli r10,r11,5392
	ctx.r10.s64 = ctx.r11.s64 * 5392;
	// stwx r28,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,11220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11220, ctx.r11.u32);
loc_82BB21C4:
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// li r5,5376
	ctx.r5.s64 = 5376;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// sth r11,5388(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5388, ctx.r11.u16);
	// lhz r10,6(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// sth r10,5390(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5390, ctx.r10.u16);
	// bl 0x82218a80
	ctx.lr = 0x82BB21E4;
	sub_82218A80(ctx, base);
	// lwz r4,92(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bb21f8
	if (ctx.cr6.eq) goto loc_82BB21F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1d10
	ctx.lr = 0x82BB21F8;
	sub_82BB1D10(ctx, base);
loc_82BB21F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB2200"))) PPC_WEAK_FUNC(sub_82BB2200);
PPC_FUNC_IMPL(__imp__sub_82BB2200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r11,12760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12760);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// oris r7,r11,144
	ctx.r7.u64 = ctx.r11.u64 | 9437184;
	// ori r7,r7,28941
	ctx.r7.u64 = ctx.r7.u64 | 28941;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2230"))) PPC_WEAK_FUNC(sub_82BB2230);
PPC_FUNC_IMPL(__imp__sub_82BB2230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BB2238;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r25,r5
	ctx.r25.s64 = ctx.r5.s8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82bb225c
	if (ctx.cr6.eq) goto loc_82BB225C;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
	// b 0x82bb2268
	goto loc_82BB2268;
loc_82BB225C:
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
loc_82BB2268:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,32
	ctx.r30.s64 = 32;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
loc_82BB2278:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb5a48
	ctx.lr = 0x82BB2280;
	sub_82BB5A48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb235c
	if (ctx.cr6.eq) goto loc_82BB235C;
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// lhzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bb2278
	if (!ctx.cr6.eq) goto loc_82BB2278;
	// lhz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb22cc
	if (ctx.cr6.eq) goto loc_82BB22CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb22d0
	if (!ctx.cr6.eq) goto loc_82BB22D0;
loc_82BB22CC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82BB22D0:
	// xor r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb2278
	if (!ctx.cr6.eq) goto loc_82BB2278;
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lhz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// bne cr6,0x82bb2310
	if (!ctx.cr6.eq) goto loc_82BB2310;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb2344
	if (ctx.cr6.eq) goto loc_82BB2344;
loc_82BB2310:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82bb2328
	if (!ctx.cr6.eq) goto loc_82BB2328;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb2344
	if (ctx.cr6.eq) goto loc_82BB2344;
loc_82BB2328:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82bb2338
	if (ctx.cr6.eq) goto loc_82BB2338;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82bb2348
	if (!ctx.cr6.eq) goto loc_82BB2348;
loc_82BB2338:
	// lbz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82bb2348
	if (!ctx.cr6.eq) goto loc_82BB2348;
loc_82BB2344:
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
loc_82BB2348:
	// bl 0x82bb2980
	ctx.lr = 0x82BB234C;
	sub_82BB2980(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82bb2278
	goto loc_82BB2278;
loc_82BB235C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB2374"))) PPC_WEAK_FUNC(sub_82BB2374);
PPC_FUNC_IMPL(__imp__sub_82BB2374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2378"))) PPC_WEAK_FUNC(sub_82BB2378);
PPC_FUNC_IMPL(__imp__sub_82BB2378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB2380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r29,r11,0,17,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// lbz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x82bb2500
	if (!ctx.cr6.eq) goto loc_82BB2500;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bb24bc
	if (ctx.cr6.eq) goto loc_82BB24BC;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82bb24bc
	if (ctx.cr6.eq) goto loc_82BB24BC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bb23cc
	if (ctx.cr6.eq) goto loc_82BB23CC;
	// cmplwi cr6,r29,28672
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28672, ctx.xer);
	// bne cr6,0x82bb24bc
	if (!ctx.cr6.eq) goto loc_82BB24BC;
loc_82BB23CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bb6230
	ctx.lr = 0x82BB23D4;
	sub_82BB6230(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bne cr6,0x82bb23f0
	if (!ctx.cr6.eq) goto loc_82BB23F0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bb23f8
	goto loc_82BB23F8;
loc_82BB23F0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bb6320
	ctx.lr = 0x82BB23F8;
	sub_82BB6320(ctx, base);
loc_82BB23F8:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb5ef0
	ctx.lr = 0x82BB2414;
	sub_82BB5EF0(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bl 0x82bb5e58
	ctx.lr = 0x82BB2424;
	sub_82BB5E58(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r29,28672
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28672, ctx.xer);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// beq cr6,0x82bb243c
	if (ctx.cr6.eq) goto loc_82BB243C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82BB243C:
	// lhz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb24a0
	if (ctx.cr6.eq) goto loc_82BB24A0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bb24a0
	if (ctx.cr6.eq) goto loc_82BB24A0;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// addi r8,r10,5512
	ctx.r8.s64 = ctx.r10.s64 + 5512;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bb2490
	if (!ctx.cr6.eq) goto loc_82BB2490;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb2494
	if (!ctx.cr6.eq) goto loc_82BB2494;
loc_82BB2490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BB2494:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
loc_82BB24A0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB24BC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82bb24e4
	if (ctx.cr6.eq) goto loc_82BB24E4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82bb24d8
	if (!ctx.cr6.eq) goto loc_82BB24D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bb24dc
	goto loc_82BB24DC;
loc_82BB24D8:
	// bl 0x82bb6320
	ctx.lr = 0x82BB24DC;
	sub_82BB6320(ctx, base);
loc_82BB24DC:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_82BB24E4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB2500:
	// lbz r11,83(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82bb2520
	if (ctx.cr6.eq) goto loc_82BB2520;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x82bb2520
	if (ctx.cr6.eq) goto loc_82BB2520;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB2520:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82bb6230
	ctx.lr = 0x82BB252C;
	sub_82BB6230(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb5ef0
	ctx.lr = 0x82BB2548;
	sub_82BB5EF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb5e58
	ctx.lr = 0x82BB2554;
	sub_82BB5E58(ctx, base);
	// cmplwi cr6,r29,28672
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28672, ctx.xer);
	// beq cr6,0x82bb2568
	if (ctx.cr6.eq) goto loc_82BB2568;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82BB2568:
	// lhz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb25cc
	if (ctx.cr6.eq) goto loc_82BB25CC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bb25cc
	if (ctx.cr6.eq) goto loc_82BB25CC;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// addi r8,r10,5512
	ctx.r8.s64 = ctx.r10.s64 + 5512;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bb25bc
	if (!ctx.cr6.eq) goto loc_82BB25BC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb25c0
	if (!ctx.cr6.eq) goto loc_82BB25C0;
loc_82BB25BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BB25C0:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
loc_82BB25CC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB25E4"))) PPC_WEAK_FUNC(sub_82BB25E4);
PPC_FUNC_IMPL(__imp__sub_82BB25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB25E8"))) PPC_WEAK_FUNC(sub_82BB25E8);
PPC_FUNC_IMPL(__imp__sub_82BB25E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x82bb2904
	if (ctx.cr6.lt) goto loc_82BB2904;
	// addi r9,r6,-8
	ctx.r9.s64 = ctx.r6.s64 + -8;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
loc_82BB2614:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb2624
	if (!ctx.cr6.gt) goto loc_82BB2624;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB2624:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb2634
	if (!ctx.cr6.gt) goto loc_82BB2634;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB2634:
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r4,r3,32
	ctx.r4.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// std r4,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r4.u64);
	// lfd f0,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// std r4,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r4.u64);
	// lfd f11,-48(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r8,-140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// ble cr6,0x82bb2684
	if (!ctx.cr6.gt) goto loc_82BB2684;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB2684:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb2690
	if (!ctx.cr6.gt) goto loc_82BB2690;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB2690:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r3,r8,32
	ctx.r3.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// std r3,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r3.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r8,-140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// ble cr6,0x82bb26e0
	if (!ctx.cr6.gt) goto loc_82BB26E0;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB26E0:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb26ec
	if (!ctx.cr6.gt) goto loc_82BB26EC;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB26EC:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r3,r8,32
	ctx.r3.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// std r3,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r3.u64);
	// lfd f0,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// std r3,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r3.u64);
	// lfd f11,-88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r8,-140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// ble cr6,0x82bb273c
	if (!ctx.cr6.gt) goto loc_82BB273C;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB273C:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb2748
	if (!ctx.cr6.gt) goto loc_82BB2748;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB2748:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r3,r8,32
	ctx.r3.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// std r3,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r3.u64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// std r3,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r3.u64);
	// lfd f0,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,-112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r8,-140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// ble cr6,0x82bb2798
	if (!ctx.cr6.gt) goto loc_82BB2798;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB2798:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb27a4
	if (!ctx.cr6.gt) goto loc_82BB27A4;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB27A4:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r3,r8,32
	ctx.r3.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// std r3,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r3.u64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// std r3,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r3.u64);
	// lfd f0,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,-104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r8,-140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// ble cr6,0x82bb27f4
	if (!ctx.cr6.gt) goto loc_82BB27F4;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB27F4:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb2800
	if (!ctx.cr6.gt) goto loc_82BB2800;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB2800:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r3,r8,32
	ctx.r3.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// std r3,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r3.u64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// std r3,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r3.u64);
	// lfd f0,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,-80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r8,-140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// ble cr6,0x82bb2850
	if (!ctx.cr6.gt) goto loc_82BB2850;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB2850:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb285c
	if (!ctx.cr6.gt) goto loc_82BB285C;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB285C:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r3,r8,32
	ctx.r3.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// std r3,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r3.u64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// std r3,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r3.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,-136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r8,-140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// ble cr6,0x82bb28ac
	if (!ctx.cr6.gt) goto loc_82BB28AC;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB28AC:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x82bb28b8
	if (!ctx.cr6.gt) goto loc_82BB28B8;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB28B8:
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// std r9,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r9.u64);
	// lfd f12,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// mullw r3,r8,r4
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r9,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f0,-120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmadds f8,f11,f1,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f7.u64);
	// lwz r3,-140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// bne 0x82bb2614
	if (!ctx.cr0.eq) goto loc_82BB2614;
loc_82BB2904:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82BB2910:
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// ble cr6,0x82bb2920
	if (!ctx.cr6.gt) goto loc_82BB2920;
	// rlwinm r10,r10,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
loc_82BB2920:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// ble cr6,0x82bb2930
	if (!ctx.cr6.gt) goto loc_82BB2930;
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
loc_82BB2930:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrldi r6,r3,32
	ctx.r6.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mullw r5,r8,r7
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// std r6,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r6.u64);
	// lfd f0,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r4,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r4.u64);
	// lfd f11,-120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f1,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f7.u64);
	// lwz r3,-132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	// bne 0x82bb2910
	if (!ctx.cr0.eq) goto loc_82BB2910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2980"))) PPC_WEAK_FUNC(sub_82BB2980);
PPC_FUNC_IMPL(__imp__sub_82BB2980) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r8,80(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// mullw r7,r11,r9
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82bb29b8
	if (!ctx.cr6.lt) goto loc_82BB29B8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82BB29B8:
	// srawi. r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bb29d0
	if (ctx.cr0.eq) goto loc_82BB29D0;
loc_82BB29C0:
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi. r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne 0x82bb29c0
	if (!ctx.cr0.eq) goto loc_82BB29C0;
loc_82BB29D0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82BB29D8:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82bb29d8
	if (ctx.cr6.gt) goto loc_82BB29D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB29EC"))) PPC_WEAK_FUNC(sub_82BB29EC);
PPC_FUNC_IMPL(__imp__sub_82BB29EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB29F0"))) PPC_WEAK_FUNC(sub_82BB29F0);
PPC_FUNC_IMPL(__imp__sub_82BB29F0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 84);
	// lhz r9,86(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 86);
	// lbz r11,83(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 83);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bgt cr6,0x82bb2c28
	if (ctx.cr6.gt) {
		// ERROR 82BB2C28
		return;
	}
	// lis r12,-32069
	ctx.r12.s64 = -2101673984;
	// addi r12,r12,10792
	ctx.r12.s64 = ctx.r12.s64 + 10792;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82BB2B2C
		return;
	case 1:
		// ERROR: 0x82BB2C28
		return;
	case 2:
		// ERROR: 0x82BB2C28
		return;
	case 3:
		// ERROR: 0x82BB2C28
		return;
	case 4:
		// ERROR: 0x82BB2C28
		return;
	case 5:
		// ERROR: 0x82BB2C28
		return;
	case 6:
		// ERROR: 0x82BB2C28
		return;
	case 7:
		// ERROR: 0x82BB2C28
		return;
	case 8:
		// ERROR: 0x82BB2C28
		return;
	case 9:
		// ERROR: 0x82BB2C28
		return;
	case 10:
		// ERROR: 0x82BB2C28
		return;
	case 11:
		// ERROR: 0x82BB2C28
		return;
	case 12:
		// ERROR: 0x82BB2C28
		return;
	case 13:
		// ERROR: 0x82BB2C28
		return;
	case 14:
		// ERROR: 0x82BB2C28
		return;
	case 15:
		// ERROR: 0x82BB2C28
		return;
	case 16:
		// ERROR: 0x82BB2B64
		return;
	case 17:
		// ERROR: 0x82BB2C28
		return;
	case 18:
		// ERROR: 0x82BB2C28
		return;
	case 19:
		// ERROR: 0x82BB2C28
		return;
	case 20:
		// ERROR: 0x82BB2C28
		return;
	case 21:
		// ERROR: 0x82BB2C28
		return;
	case 22:
		// ERROR: 0x82BB2C28
		return;
	case 23:
		// ERROR: 0x82BB2C28
		return;
	case 24:
		// ERROR: 0x82BB2C28
		return;
	case 25:
		// ERROR: 0x82BB2C28
		return;
	case 26:
		// ERROR: 0x82BB2C28
		return;
	case 27:
		// ERROR: 0x82BB2C28
		return;
	case 28:
		// ERROR: 0x82BB2C28
		return;
	case 29:
		// ERROR: 0x82BB2C28
		return;
	case 30:
		// ERROR: 0x82BB2C28
		return;
	case 31:
		// ERROR: 0x82BB2C28
		return;
	case 32:
		// ERROR: 0x82BB2B9C
		return;
	case 33:
		// ERROR: 0x82BB2BD4
		return;
	case 34:
		// ERROR: 0x82BB2C28
		return;
	case 35:
		// ERROR: 0x82BB2C28
		return;
	case 36:
		// ERROR: 0x82BB2C28
		return;
	case 37:
		// ERROR: 0x82BB2C28
		return;
	case 38:
		// ERROR: 0x82BB2C28
		return;
	case 39:
		// ERROR: 0x82BB2C28
		return;
	case 40:
		// ERROR: 0x82BB2C28
		return;
	case 41:
		// ERROR: 0x82BB2C28
		return;
	case 42:
		// ERROR: 0x82BB2C28
		return;
	case 43:
		// ERROR: 0x82BB2C28
		return;
	case 44:
		// ERROR: 0x82BB2C28
		return;
	case 45:
		// ERROR: 0x82BB2C28
		return;
	case 46:
		// ERROR: 0x82BB2C28
		return;
	case 47:
		// ERROR: 0x82BB2C28
		return;
	case 48:
		// ERROR: 0x82BB2C0C
		return;
	case 49:
		// ERROR: 0x82BB2C28
		return;
	case 50:
		// ERROR: 0x82BB2C28
		return;
	case 51:
		// ERROR: 0x82BB2C28
		return;
	case 52:
		// ERROR: 0x82BB2C28
		return;
	case 53:
		// ERROR: 0x82BB2C28
		return;
	case 54:
		// ERROR: 0x82BB2C28
		return;
	case 55:
		// ERROR: 0x82BB2C28
		return;
	case 56:
		// ERROR: 0x82BB2C28
		return;
	case 57:
		// ERROR: 0x82BB2C28
		return;
	case 58:
		// ERROR: 0x82BB2C28
		return;
	case 59:
		// ERROR: 0x82BB2C28
		return;
	case 60:
		// ERROR: 0x82BB2C28
		return;
	case 61:
		// ERROR: 0x82BB2C28
		return;
	case 62:
		// ERROR: 0x82BB2C28
		return;
	case 63:
		// ERROR: 0x82BB2C28
		return;
	case 64:
		// ERROR: 0x82BB2C20
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82BB2A28"))) PPC_WEAK_FUNC(sub_82BB2A28);
PPC_FUNC_IMPL(__imp__sub_82BB2A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,11052(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11052);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11108(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11108);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11164(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11164);
	// lwz r21,11220(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11220);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11276(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11276);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11304(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// lwz r21,11296(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11296);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// ori r7,r11,65280
	ctx.r7.u64 = ctx.r11.u64 | 65280;
	// lis r9,-256
	ctx.r9.s64 = -16777216;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2B64"))) PPC_WEAK_FUNC(sub_82BB2B64);
PPC_FUNC_IMPL(__imp__sub_82BB2B64) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// ori r7,r11,65280
	ctx.r7.u64 = ctx.r11.u64 | 65280;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2B9C"))) PPC_WEAK_FUNC(sub_82BB2B9C);
PPC_FUNC_IMPL(__imp__sub_82BB2B9C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// li r8,31744
	ctx.r8.s64 = 31744;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// li r7,992
	ctx.r7.s64 = 992;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// li r6,31
	ctx.r6.s64 = 31;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2BD4"))) PPC_WEAK_FUNC(sub_82BB2BD4);
PPC_FUNC_IMPL(__imp__sub_82BB2BD4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,61440
	ctx.r9.u64 = ctx.r11.u64 | 61440;
	// li r8,3840
	ctx.r8.s64 = 3840;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// li r7,240
	ctx.r7.s64 = 240;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2C0C"))) PPC_WEAK_FUNC(sub_82BB2C0C);
PPC_FUNC_IMPL(__imp__sub_82BB2C0C) {
	PPC_FUNC_PROLOGUE();
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2C20"))) PPC_WEAK_FUNC(sub_82BB2C20);
PPC_FUNC_IMPL(__imp__sub_82BB2C20) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2C34"))) PPC_WEAK_FUNC(sub_82BB2C34);
PPC_FUNC_IMPL(__imp__sub_82BB2C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2C38"))) PPC_WEAK_FUNC(sub_82BB2C38);
PPC_FUNC_IMPL(__imp__sub_82BB2C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r10,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r10.u8);
	// rlwinm r7,r8,4,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// stb r7,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2C60"))) PPC_WEAK_FUNC(sub_82BB2C60);
PPC_FUNC_IMPL(__imp__sub_82BB2C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16162
	ctx.r11.s64 = -1059192832;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// ori r9,r11,49374
	ctx.r9.u64 = ctx.r11.u64 | 49374;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb2c7c
	if (ctx.cr6.eq) goto loc_82BB2C7C;
loc_82BB2C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB2C7C:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// ori r9,r11,255
	ctx.r9.u64 = ctx.r11.u64 | 255;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb2c74
	if (!ctx.cr6.eq) goto loc_82BB2C74;
	// lis r11,-13616
	ctx.r11.s64 = -892338176;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r9,r11,4660
	ctx.r9.u64 = ctx.r11.u64 | 4660;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2CAC"))) PPC_WEAK_FUNC(sub_82BB2CAC);
PPC_FUNC_IMPL(__imp__sub_82BB2CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2CB0"))) PPC_WEAK_FUNC(sub_82BB2CB0);
PPC_FUNC_IMPL(__imp__sub_82BB2CB0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82bb2dd4
	if (!ctx.cr6.gt) goto loc_82BB2DD4;
loc_82BB2CBC:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// beq cr6,0x82bb2d50
	if (ctx.cr6.eq) goto loc_82BB2D50;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// lwz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// beq cr6,0x82bb2cf4
	if (ctx.cr6.eq) goto loc_82BB2CF4;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_82BB2CF4:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb2dcc
	if (ctx.cr6.eq) goto loc_82BB2DCC;
loc_82BB2D00:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// bne cr6,0x82bb2d38
	if (!ctx.cr6.eq) goto loc_82BB2D38;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// rlwinm r31,r10,24,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// stb r31,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r31.u8);
	// addi r6,r6,-3
	ctx.r6.s64 = ctx.r6.s64 + -3;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// b 0x82bb2d40
	goto loc_82BB2D40;
loc_82BB2D38:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
loc_82BB2D40:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb2d00
	if (!ctx.cr6.eq) goto loc_82BB2D00;
	// b 0x82bb2dcc
	goto loc_82BB2DCC;
loc_82BB2D50:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb2dcc
	if (ctx.cr6.eq) goto loc_82BB2DCC;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
loc_82BB2D64:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// bne cr6,0x82bb2dac
	if (!ctx.cr6.eq) goto loc_82BB2DAC;
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,-3
	ctx.r6.s64 = ctx.r6.s64 + -3;
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// lbz r7,1(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r7,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r7.u8);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x82bb2dc0
	goto loc_82BB2DC0;
loc_82BB2DAC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82BB2DC0:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb2d64
	if (!ctx.cr6.eq) goto loc_82BB2D64;
loc_82BB2DCC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x82bb2cbc
	if (ctx.cr6.gt) goto loc_82BB2CBC;
loc_82BB2DD4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB2DDC"))) PPC_WEAK_FUNC(sub_82BB2DDC);
PPC_FUNC_IMPL(__imp__sub_82BB2DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2DE0"))) PPC_WEAK_FUNC(sub_82BB2DE0);
PPC_FUNC_IMPL(__imp__sub_82BB2DE0) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb2e1c
	if (ctx.cr6.eq) goto loc_82BB2E1C;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb2e1c
	if (ctx.cr6.eq) goto loc_82BB2E1C;
	// bl 0x82120a70
	ctx.lr = 0x82BB2E18;
	sub_82120A70(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82BB2E1C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb2e30
	if (ctx.cr6.eq) goto loc_82BB2E30;
	// bl 0x82120a70
	ctx.lr = 0x82BB2E2C;
	sub_82120A70(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82BB2E30:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb2e44
	if (ctx.cr6.eq) goto loc_82BB2E44;
	// bl 0x82120a70
	ctx.lr = 0x82BB2E40;
	sub_82120A70(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82BB2E44:
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

__attribute__((alias("__imp__sub_82BB2E5C"))) PPC_WEAK_FUNC(sub_82BB2E5C);
PPC_FUNC_IMPL(__imp__sub_82BB2E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2E60"))) PPC_WEAK_FUNC(sub_82BB2E60);
PPC_FUNC_IMPL(__imp__sub_82BB2E60) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,40
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 40, ctx.xer);
	// bne cr6,0x82bb2ea8
	if (!ctx.cr6.eq) goto loc_82BB2EA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821203b0
	ctx.lr = 0x82BB2E8C;
	sub_821203B0(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821203b0
	ctx.lr = 0x82BB2E9C;
	sub_821203B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// b 0x82bb2ef0
	goto loc_82BB2EF0;
loc_82BB2EA8:
	// cmplwi cr6,r5,44
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 44, ctx.xer);
	// bne cr6,0x82bb2ee4
	if (!ctx.cr6.eq) goto loc_82BB2EE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821203b0
	ctx.lr = 0x82BB2EBC;
	sub_821203B0(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821203b0
	ctx.lr = 0x82BB2ECC;
	sub_821203B0(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821203b0
	ctx.lr = 0x82BB2EDC;
	sub_821203B0(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// b 0x82bb2ef4
	goto loc_82BB2EF4;
loc_82BB2EE4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82BB2EF0:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_82BB2EF4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BB2F24"))) PPC_WEAK_FUNC(sub_82BB2F24);
PPC_FUNC_IMPL(__imp__sub_82BB2F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2F28"))) PPC_WEAK_FUNC(sub_82BB2F28);
PPC_FUNC_IMPL(__imp__sub_82BB2F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB2F30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb2f98
	if (ctx.cr6.eq) goto loc_82BB2F98;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bb2f68
	if (!ctx.cr0.eq) goto loc_82BB2F68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BB2F68:
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r30,r9,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB2F80;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb2f98
	if (ctx.cr6.eq) goto loc_82BB2F98;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB2F98;
	sub_82219130(ctx, base);
loc_82BB2F98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB2FA4"))) PPC_WEAK_FUNC(sub_82BB2FA4);
PPC_FUNC_IMPL(__imp__sub_82BB2FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB2FA8"))) PPC_WEAK_FUNC(sub_82BB2FA8);
PPC_FUNC_IMPL(__imp__sub_82BB2FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB2FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB2FD0;
	sub_82218A80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82120040
	ctx.lr = 0x82BB2FDC;
	sub_82120040(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bb2ffc
	if (ctx.cr0.eq) goto loc_82BB2FFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB2FFC;
	sub_82219130(ctx, base);
loc_82BB2FFC:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,82(r30)
	PPC_STORE_U8(ctx.r30.u32 + 82, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB3010"))) PPC_WEAK_FUNC(sub_82BB3010);
PPC_FUNC_IMPL(__imp__sub_82BB3010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB3018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb30d0
	if (ctx.cr6.eq) goto loc_82BB30D0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// rlwinm r7,r9,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// sth r6,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r6.u16);
	// lhz r4,30(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r3.u8);
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
	// beq cr6,0x82bb3070
	if (ctx.cr6.eq) goto loc_82BB3070;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
loc_82BB3070:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82bb30a4
	if (!ctx.cr6.eq) goto loc_82BB30A4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-256
	ctx.r9.s64 = -16777216;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// ori r7,r11,65280
	ctx.r7.u64 = ctx.r11.u64 | 65280;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// b 0x82bb30d0
	goto loc_82BB30D0;
loc_82BB30A4:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82bb3148
	if (!ctx.cr6.eq) goto loc_82BB3148;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// ori r8,r11,65280
	ctx.r8.u64 = ctx.r11.u64 | 65280;
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82BB30C4:
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
loc_82BB30D0:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb313c
	if (ctx.cr6.eq) goto loc_82BB313C;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw. r30,r11,r10
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bb3174
	if (ctx.cr0.eq) goto loc_82BB3174;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82bb3110
	if (ctx.cr6.eq) goto loc_82BB3110;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82bb3110
	if (ctx.cr6.eq) goto loc_82BB3110;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82bb3110
	if (ctx.cr6.eq) goto loc_82BB3110;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82bb3174
	if (!ctx.cr6.eq) goto loc_82BB3174;
loc_82BB3110:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r3,r10,r30
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// bl 0x82120040
	ctx.lr = 0x82BB3124;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// bl 0x82219130
	ctx.lr = 0x82BB313C;
	sub_82219130(ctx, base);
loc_82BB313C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BB3148:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82bb316c
	if (!ctx.cr6.eq) goto loc_82BB316C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,31744
	ctx.r9.s64 = 31744;
	// li r8,992
	ctx.r8.s64 = 992;
	// li r7,31
	ctx.r7.s64 = 31;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// ori r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 32768;
	// b 0x82bb30c4
	goto loc_82BB30C4;
loc_82BB316C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82bb30d0
	if (ctx.cr6.eq) goto loc_82BB30D0;
loc_82BB3174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB3180"))) PPC_WEAK_FUNC(sub_82BB3180);
PPC_FUNC_IMPL(__imp__sub_82BB3180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BB3188;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lwz r30,12456(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12456);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x82bb31e8
	if (ctx.cr6.eq) goto loc_82BB31E8;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB31E8:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x82bb3a4c
	if (ctx.cr6.lt) goto loc_82BB3A4C;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x82bb3240
	if (ctx.cr6.eq) goto loc_82BB3240;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB3240:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// beq cr6,0x82bb3290
	if (ctx.cr6.eq) goto loc_82BB3290;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB3290:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// beq cr6,0x82bb32e0
	if (ctx.cr6.eq) goto loc_82BB32E0;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB32E0:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82bb3334
	if (ctx.cr6.eq) goto loc_82BB3334;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB3334:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x82bb334c
	if (ctx.cr6.lt) goto loc_82BB334C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x821204c0
	ctx.lr = 0x82BB3348;
	sub_821204C0(ctx, base);
	// lwz r25,180(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_82BB334C:
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3374
	if (ctx.cr6.eq) goto loc_82BB3374;
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// sth r26,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r26.u16);
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
	// stb r3,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r3.u8);
loc_82BB3374:
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// bgt cr6,0x82bb3a4c
	if (ctx.cr6.gt) goto loc_82BB3A4C;
	// lis r12,-32069
	ctx.r12.s64 = -2101673984;
	// addi r12,r12,13204
	ctx.r12.s64 = ctx.r12.s64 + 13204;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u64) {
	case 0:
		goto loc_82BB3638;
	case 1:
		goto loc_82BB33D0;
	case 2:
		goto loc_82BB33D0;
	case 3:
		goto loc_82BB33D0;
	case 4:
		goto loc_82BB33D0;
	case 5:
		goto loc_82BB36D0;
	case 6:
		goto loc_82BB3864;
	case 7:
		goto loc_82BB3904;
	case 8:
		goto loc_82BB33D0;
	case 9:
		goto loc_82BB33D0;
	case 10:
		goto loc_82BB33D0;
	case 11:
		goto loc_82BB33D0;
	case 12:
		goto loc_82BB3770;
	case 13:
		goto loc_82BB397C;
	case 14:
		goto loc_82BB36D0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,13880(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13880);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,14032(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14032);
	// lwz r21,14436(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14436);
	// lwz r21,14596(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14596);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,13264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13264);
	// lwz r21,14192(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14192);
	// lwz r21,14716(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14716);
	// lwz r21,14032(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14032);
loc_82BB33D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3578
	if (ctx.cr6.eq) goto loc_82BB3578;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bb3428
	if (ctx.cr6.eq) goto loc_82BB3428;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82bb3428
	if (ctx.cr6.eq) goto loc_82BB3428;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// beq cr6,0x82bb3428
	if (ctx.cr6.eq) goto loc_82BB3428;
	// cmpwi cr6,r28,11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 11, ctx.xer);
	// beq cr6,0x82bb3428
	if (ctx.cr6.eq) goto loc_82BB3428;
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r8,32
	ctx.r8.s64 = 32;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// stb r8,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r8.u8);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// bne cr6,0x82bb3440
	if (!ctx.cr6.eq) goto loc_82BB3440;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r8,r11,8
	ctx.r8.u64 = ctx.r11.u64 | 8;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82bb3440
	goto loc_82BB3440;
loc_82BB3428:
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r8,32
	ctx.r8.s64 = 32;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r8,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r8.u8);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
loc_82BB3440:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3578
	if (ctx.cr6.eq) goto loc_82BB3578;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bb3458
	if (ctx.cr6.eq) goto loc_82BB3458;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82bb34bc
	if (!ctx.cr6.eq) goto loc_82BB34BC;
loc_82BB3458:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r10,3(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 3);
	// lbz r8,1(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// lbz r7,2(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb34a4
	if (ctx.cr6.eq) goto loc_82BB34A4;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
loc_82BB34A4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x82bb358c
	goto loc_82BB358C;
loc_82BB34BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3578
	if (ctx.cr6.eq) goto loc_82BB3578;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r28,-3
	ctx.r10.s64 = ctx.r28.s64 + -3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82bb358c
	if (ctx.cr6.gt) goto loc_82BB358C;
	// lis r12,-32069
	ctx.r12.s64 = -2101673984;
	// addi r12,r12,13556
	ctx.r12.s64 = ctx.r12.s64 + 13556;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BB3518;
	case 1:
		goto loc_82BB3528;
	case 2:
		goto loc_82BB358C;
	case 3:
		goto loc_82BB358C;
	case 4:
		goto loc_82BB358C;
	case 5:
		goto loc_82BB3538;
	case 6:
		goto loc_82BB3548;
	case 7:
		goto loc_82BB3558;
	case 8:
		goto loc_82BB3568;
	default:
		__builtin_unreachable();
	}
	// lwz r21,13592(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13592);
	// lwz r21,13608(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13608);
	// lwz r21,13708(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13708);
	// lwz r21,13708(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13708);
	// lwz r21,13708(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13708);
	// lwz r21,13624(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13624);
	// lwz r21,13640(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13640);
	// lwz r21,13656(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13656);
	// lwz r21,13672(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13672);
loc_82BB3518:
	// lis r11,9216
	ctx.r11.s64 = 603979776;
	// ori r10,r11,7166
	ctx.r10.u64 = ctx.r11.u64 | 7166;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x82bb358c
	goto loc_82BB358C;
loc_82BB3528:
	// lis r11,9216
	ctx.r11.s64 = 603979776;
	// ori r10,r11,7167
	ctx.r10.u64 = ctx.r11.u64 | 7167;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x82bb358c
	goto loc_82BB358C;
loc_82BB3538:
	// lis r11,9216
	ctx.r11.s64 = 603979776;
	// ori r10,r11,8233
	ctx.r10.u64 = ctx.r11.u64 | 8233;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x82bb358c
	goto loc_82BB358C;
loc_82BB3548:
	// lis r11,9216
	ctx.r11.s64 = 603979776;
	// ori r10,r11,8235
	ctx.r10.u64 = ctx.r11.u64 | 8235;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x82bb358c
	goto loc_82BB358C;
loc_82BB3558:
	// lis r11,9216
	ctx.r11.s64 = 603979776;
	// ori r10,r11,8232
	ctx.r10.u64 = ctx.r11.u64 | 8232;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x82bb358c
	goto loc_82BB358C;
loc_82BB3568:
	// lis r11,9216
	ctx.r11.s64 = 603979776;
	// ori r10,r11,8234
	ctx.r10.u64 = ctx.r11.u64 | 8234;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x82bb358c
	goto loc_82BB358C;
loc_82BB3578:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bb3588
	if (ctx.cr6.eq) goto loc_82BB3588;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82bb358c
	if (!ctx.cr6.eq) goto loc_82BB358C;
loc_82BB3588:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_82BB358C:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb35d8
	if (ctx.cr6.eq) goto loc_82BB35D8;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-29912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29912);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82bb25e8
	ctx.lr = 0x82BB35D4;
	sub_82BB25E8(ctx, base);
	// b 0x82bb35dc
	goto loc_82BB35DC;
loc_82BB35D8:
	// stb r3,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r3.u8);
loc_82BB35DC:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// add. r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb3608
	if (!ctx.cr0.eq) goto loc_82BB3608;
loc_82BB35FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BB3608:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB3614;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB362C;
	sub_82219130(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BB3638:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3674
	if (ctx.cr6.eq) goto loc_82BB3674;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// ori r6,r10,65280
	ctx.r6.u64 = ctx.r10.u64 | 65280;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_82BB3674:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb36a8
	if (ctx.cr6.eq) goto loc_82BB36A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// lfs f1,-30400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30400);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bb25e8
	ctx.lr = 0x82BB36A4;
	sub_82BB25E8(ctx, base);
	// b 0x82bb36ac
	goto loc_82BB36AC;
loc_82BB36A8:
	// stb r3,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r3.u8);
loc_82BB36AC:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// add. r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb3608
	if (!ctx.cr0.eq) goto loc_82BB3608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BB36D0:
	// li r11,96
	ctx.r11.s64 = 96;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// beq cr6,0x82bb3714
	if (ctx.cr6.eq) goto loc_82BB3714;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// ori r6,r10,65280
	ctx.r6.u64 = ctx.r10.u64 | 65280;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_82BB3714:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb3748
	if (ctx.cr6.eq) goto loc_82BB3748;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// lfs f1,-4012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bb25e8
	ctx.lr = 0x82BB3744;
	sub_82BB25E8(ctx, base);
	// b 0x82bb374c
	goto loc_82BB374C;
loc_82BB3748:
	// stb r3,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r3.u8);
loc_82BB374C:
	// rlwinm r11,r27,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb3608
	if (!ctx.cr0.eq) goto loc_82BB3608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BB3770:
	// li r11,96
	ctx.r11.s64 = 96;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// beq cr6,0x82bb37b4
	if (ctx.cr6.eq) goto loc_82BB37B4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// ori r6,r10,65280
	ctx.r6.u64 = ctx.r10.u64 | 65280;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_82BB37B4:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb37e8
	if (ctx.cr6.eq) goto loc_82BB37E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// lfs f1,-4012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bb25e8
	ctx.lr = 0x82BB37E4;
	sub_82BB25E8(ctx, base);
	// b 0x82bb37ec
	goto loc_82BB37EC;
loc_82BB37E8:
	// stb r3,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r3.u8);
loc_82BB37EC:
	// rlwinm r11,r27,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bb35fc
	if (ctx.cr0.eq) goto loc_82BB35FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB3810;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB3820;
	sub_82120040(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3840
	if (ctx.cr6.eq) goto loc_82BB3840;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB3840;
	sub_82219130(ctx, base);
loc_82BB3840:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r4,r30,r25
	ctx.r4.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB3858;
	sub_82219130(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BB3864:
	// li r11,112
	ctx.r11.s64 = 112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// beq cr6,0x82bb38a8
	if (ctx.cr6.eq) goto loc_82BB38A8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// ori r6,r10,65280
	ctx.r6.u64 = ctx.r10.u64 | 65280;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_82BB38A8:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb38dc
	if (ctx.cr6.eq) goto loc_82BB38DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bb25e8
	ctx.lr = 0x82BB38D8;
	sub_82BB25E8(ctx, base);
	// b 0x82bb38e0
	goto loc_82BB38E0;
loc_82BB38DC:
	// stb r3,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r3.u8);
loc_82BB38E0:
	// rlwinm r11,r27,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb3608
	if (!ctx.cr0.eq) goto loc_82BB3608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BB3904:
	// li r11,128
	ctx.r11.s64 = 128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// beq cr6,0x82bb3948
	if (ctx.cr6.eq) goto loc_82BB3948;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// ori r6,r10,65280
	ctx.r6.u64 = ctx.r10.u64 | 65280;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_82BB3948:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb38dc
	if (ctx.cr6.eq) goto loc_82BB38DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bb25e8
	ctx.lr = 0x82BB3978;
	sub_82BB25E8(ctx, base);
	// b 0x82bb38e0
	goto loc_82BB38E0;
loc_82BB397C:
	// li r11,144
	ctx.r11.s64 = 144;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// beq cr6,0x82bb39c0
	if (ctx.cr6.eq) goto loc_82BB39C0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// ori r6,r10,65280
	ctx.r6.u64 = ctx.r10.u64 | 65280;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_82BB39C0:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r10,1(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// addi r29,r25,4
	ctx.r29.s64 = ctx.r25.s64 + 4;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbz r9,2(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// lbz r10,3(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 3);
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82bb3a20
	if (ctx.cr6.eq) goto loc_82BB3A20;
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
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB3A20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb35fc
	if (ctx.cr6.eq) goto loc_82BB35FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB3A34;
	sub_82120040(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb3a4c
	if (ctx.cr6.eq) goto loc_82BB3A4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB3A4C;
	sub_82219130(ctx, base);
loc_82BB3A4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB3A58"))) PPC_WEAK_FUNC(sub_82BB3A58);
PPC_FUNC_IMPL(__imp__sub_82BB3A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB3A60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// lbz r27,2(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,12456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82bb3ab0
	if (ctx.cr6.eq) goto loc_82BB3AB0;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_82BB3AB0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lhz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// beq cr6,0x82bb3aec
	if (ctx.cr6.eq) goto loc_82BB3AEC;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB3AEC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// beq cr6,0x82bb3b18
	if (ctx.cr6.eq) goto loc_82BB3B18;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
loc_82BB3B18:
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3c0c
	if (ctx.cr6.eq) goto loc_82BB3C0C;
	// lhz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// sth r6,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r6.u16);
	// stb r28,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r28.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// sth r5,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r5.u16);
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// stb r7,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r7.u8);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// beq cr6,0x82bb3b78
	if (ctx.cr6.eq) goto loc_82BB3B78;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// ori r5,r11,16
	ctx.r5.u64 = ctx.r11.u64 | 16;
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
loc_82BB3B78:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82bb3bac
	if (!ctx.cr6.eq) goto loc_82BB3BAC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// ori r4,r11,65280
	ctx.r4.u64 = ctx.r11.u64 | 65280;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// li r3,255
	ctx.r3.s64 = 255;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x82bb3c0c
	goto loc_82BB3C0C;
loc_82BB3BAC:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82bb3bec
	if (ctx.cr6.eq) goto loc_82BB3BEC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82bb3bec
	if (ctx.cr6.eq) goto loc_82BB3BEC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82bb3be0
	if (!ctx.cr6.eq) goto loc_82BB3BE0;
	// rlwinm r11,r7,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1F;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// b 0x82bb3c0c
	goto loc_82BB3C0C;
loc_82BB3BE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BB3BEC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// ori r5,r11,65280
	ctx.r5.u64 = ctx.r11.u64 | 65280;
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
loc_82BB3C0C:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb3cc0
	if (ctx.cr6.eq) goto loc_82BB3CC0;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mullw. r29,r11,r9
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bb3be0
	if (ctx.cr0.eq) goto loc_82BB3BE0;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lbz r7,18(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r5,r7,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r9,12476(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12476);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb3c5c
	if (ctx.cr6.eq) goto loc_82BB3C5C;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r9,12496(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12496);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82bb3c5c
	if (!ctx.cr6.eq) goto loc_82BB3C5C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BB3C5C:
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r3,r8,r29
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// bl 0x82120040
	ctx.lr = 0x82BB3C74;
	sub_82120040(ctx, base);
	// lbz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// mullw r6,r6,r29
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// blt cr6,0x82bb3cac
	if (ctx.cr6.lt) goto loc_82BB3CAC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb2cb0
	ctx.lr = 0x82BB3CA0;
	sub_82BB2CB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BB3CAC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb3cc0
	if (ctx.cr6.eq) goto loc_82BB3CC0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB3CC0;
	sub_82219130(ctx, base);
loc_82BB3CC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB3CCC"))) PPC_WEAK_FUNC(sub_82BB3CCC);
PPC_FUNC_IMPL(__imp__sub_82BB3CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB3CD0"))) PPC_WEAK_FUNC(sub_82BB3CD0);
PPC_FUNC_IMPL(__imp__sub_82BB3CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82BB3CD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r6,12480(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12480);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82BB3D00;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb3d2c
	if (!ctx.cr6.eq) goto loc_82BB3D2C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-18576
	ctx.r5.s64 = ctx.r11.s64 + -18576;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82BB3D20;
	sub_82BCAC98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82BB3D2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r27,-32030
	ctx.r27.s64 = -2099118080;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// stw r11,26652(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26652, ctx.r11.u32);
	// stb r10,12460(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12460, ctx.r10.u8);
	// b 0x82bb3d54
	goto loc_82BB3D54;
loc_82BB3D50:
	// lwz r6,12480(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12480);
loc_82BB3D54:
	// lwz r3,16(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bb3d64
	if (!ctx.cr6.eq) goto loc_82BB3D64;
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
loc_82BB3D64:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// bl 0x82bfd450
	ctx.lr = 0x82BB3D78;
	sub_82BFD450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82120380
	ctx.lr = 0x82BB3D80;
	sub_82120380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb3df8
	if (ctx.cr6.eq) goto loc_82BB3DF8;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// stb r7,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x82bb3de4
	if (ctx.cr6.eq) goto loc_82BB3DE4;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_82BB3DE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb3e00
	if (!ctx.cr6.eq) goto loc_82BB3E00;
	// b 0x82bb3dfc
	goto loc_82BB3DFC;
loc_82BB3DF8:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BB3DFC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BB3E00:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb3d50
	if (!ctx.cr6.eq) goto loc_82BB3D50;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,26652(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26652, ctx.r11.u32);
	// cmplwi cr6,r9,1024
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1024, ctx.xer);
	// stb r10,12460(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12460, ctx.r10.u8);
	// bne cr6,0x82bb3e34
	if (!ctx.cr6.eq) goto loc_82BB3E34;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// li r31,1024
	ctx.r31.s64 = 1024;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// b 0x82bb3e8c
	goto loc_82BB3E8C;
loc_82BB3E34:
	// cmplwi cr6,r9,768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 768, ctx.xer);
	// bne cr6,0x82bb3e44
	if (!ctx.cr6.eq) goto loc_82BB3E44;
	// li r31,1024
	ctx.r31.s64 = 1024;
	// b 0x82bb3e90
	goto loc_82BB3E90;
loc_82BB3E44:
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// beq cr6,0x82bb3e80
	if (ctx.cr6.eq) goto loc_82BB3E80;
	// cmplwi cr6,r9,48
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 48, ctx.xer);
	// bne cr6,0x82bb3e60
	if (!ctx.cr6.eq) goto loc_82BB3E60;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// b 0x82bb3e88
	goto loc_82BB3E88;
loc_82BB3E60:
	// cmplwi cr6,r9,2176
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2176, ctx.xer);
	// bne cr6,0x82bb3e78
	if (!ctx.cr6.eq) goto loc_82BB3E78;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// li r31,1024
	ctx.r31.s64 = 1024;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// b 0x82bb3e8c
	goto loc_82BB3E8C;
loc_82BB3E78:
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// bne cr6,0x82bb3fec
	if (!ctx.cr6.eq) goto loc_82BB3FEC;
loc_82BB3E80:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
loc_82BB3E88:
	// li r31,64
	ctx.r31.s64 = 64;
loc_82BB3E8C:
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
loc_82BB3E90:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// bl 0x82120040
	ctx.lr = 0x82BB3EA8;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82bb3ec0
	if (ctx.cr6.eq) goto loc_82BB3EC0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB3EC0;
	sub_82219130(ctx, base);
loc_82BB3EC0:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3f30
	if (ctx.cr6.eq) goto loc_82BB3F30;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82bb3fe0
	if (ctx.cr6.eq) goto loc_82BB3FE0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r31,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82bb3fe0
	if (ctx.cr6.eq) goto loc_82BB3FE0;
loc_82BB3EEC:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r31,r31,-4
	ctx.xer.ca = ctx.r31.u32 > 3;
	ctx.r31.s64 = ctx.r31.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne 0x82bb3eec
	if (!ctx.cr0.eq) goto loc_82BB3EEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82BB3F30:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r8,r31,31,1,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFE;
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82bb3fa0
	if (ctx.cr6.eq) goto loc_82BB3FA0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3fe0
	if (ctx.cr6.eq) goto loc_82BB3FE0;
	// lis r8,-1
	ctx.r8.s64 = -65536;
loc_82BB3F60:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwimi r7,r6,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// bne 0x82bb3f60
	if (!ctx.cr0.eq) goto loc_82BB3F60;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82BB3FA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb3fe0
	if (ctx.cr6.eq) goto loc_82BB3FE0;
	// lis r8,-1
	ctx.r8.s64 = -65536;
loc_82BB3FAC:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwimi r7,r6,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// bne 0x82bb3fac
	if (!ctx.cr0.eq) goto loc_82BB3FAC;
loc_82BB3FE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82BB3FEC:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB4004"))) PPC_WEAK_FUNC(sub_82BB4004);
PPC_FUNC_IMPL(__imp__sub_82BB4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4008"))) PPC_WEAK_FUNC(sub_82BB4008);
PPC_FUNC_IMPL(__imp__sub_82BB4008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82BB4010;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb404c
	if (ctx.cr6.eq) goto loc_82BB404C;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB4048;
	sub_82218A80(ctx, base);
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
loc_82BB404C:
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,12480(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82BB4060;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb46a8
	if (ctx.cr6.eq) goto loc_82BB46A8;
	// lis r26,-32030
	ctx.r26.s64 = -2099118080;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// stw r23,26652(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26652, ctx.r23.u32);
	// stb r11,12460(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12460, ctx.r11.u8);
	// b 0x82bb4088
	goto loc_82BB4088;
loc_82BB4084:
	// lwz r6,12480(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12480);
loc_82BB4088:
	// lwz r3,16(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bb4098
	if (!ctx.cr6.eq) goto loc_82BB4098;
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
loc_82BB4098:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82BB40AC;
	sub_82BFD450(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82120380
	ctx.lr = 0x82BB40B8;
	sub_82120380(ctx, base);
	// lwz r10,12456(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb412c
	if (ctx.cr6.eq) goto loc_82BB412C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbz r9,3(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// lbz r7,2(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// lbz r8,1(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb411c
	if (ctx.cr6.eq) goto loc_82BB411C;
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
loc_82BB411C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82bb4134
	if (!ctx.cr6.eq) goto loc_82BB4134;
	// b 0x82bb4130
	goto loc_82BB4130;
loc_82BB412C:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BB4130:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82BB4134:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb4084
	if (!ctx.cr6.eq) goto loc_82BB4084;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r11,26652(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26652, ctx.r11.u32);
	// lwz r3,12476(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12476);
	// lwz r29,12496(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12496);
	// stb r9,12460(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12460, ctx.r9.u8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb4170
	if (ctx.cr6.eq) goto loc_82BB4170;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82bb4178
	if (ctx.cr6.eq) goto loc_82BB4178;
loc_82BB4170:
	// add r11,r31,r5
	ctx.r11.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
loc_82BB4178:
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82bb41c8
	if (ctx.cr6.eq) goto loc_82BB41C8;
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB41C8:
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82bb46a8
	if (!ctx.cr6.eq) goto loc_82BB46A8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// beq cr6,0x82bb4208
	if (ctx.cr6.eq) goto loc_82BB4208;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_82BB4208:
	// sth r7,80(r30)
	PPC_STORE_U16(ctx.r30.u32 + 80, ctx.r7.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,82(r30)
	PPC_STORE_U8(ctx.r30.u32 + 82, ctx.r6.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,83(r30)
	PPC_STORE_U8(ctx.r30.u32 + 83, ctx.r9.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// beq cr6,0x82bb4250
	if (ctx.cr6.eq) goto loc_82BB4250;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BB4250:
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,84(r30)
	PPC_STORE_U16(ctx.r30.u32 + 84, ctx.r9.u16);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lhz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// beq cr6,0x82bb4284
	if (ctx.cr6.eq) goto loc_82BB4284;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB4284:
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,86(r30)
	PPC_STORE_U16(ctx.r30.u32 + 86, ctx.r9.u16);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r27,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r27.u8);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82bb42d8
	if (ctx.cr6.eq) goto loc_82BB42D8;
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r27,82(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
loc_82BB42D8:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82bb432c
	if (ctx.cr6.eq) goto loc_82BB432C;
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r27,82(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
loc_82BB432C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r9.u32);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r27,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r27.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82bb4380
	if (ctx.cr6.eq) goto loc_82BB4380;
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r27,82(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
loc_82BB4380:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r27,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r27.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82bb43d4
	if (ctx.cr6.eq) goto loc_82BB43D4;
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r27,82(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
loc_82BB43D4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r9,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r9.u32);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r27,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r27.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82bb4428
	if (ctx.cr6.eq) goto loc_82BB4428;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r31,82(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
loc_82BB4428:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// beq cr6,0x82bb4440
	if (ctx.cr6.eq) goto loc_82BB4440;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82bb4488
	if (ctx.cr6.eq) goto loc_82BB4488;
loc_82BB4440:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82bb4488
	if (!ctx.cr6.eq) goto loc_82BB4488;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82bb4474
	if (ctx.cr6.eq) goto loc_82BB4474;
loc_82BB4460:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82bb4460
	if (!ctx.cr6.eq) goto loc_82BB4460;
loc_82BB4474:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_82BB4488:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bb44a4
	if (ctx.cr6.eq) goto loc_82BB44A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb44a4
	if (ctx.cr6.eq) goto loc_82BB44A4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82bb44a4
	if (!ctx.cr6.eq) goto loc_82BB44A4;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_82BB44A4:
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82bb44d8
	if (!ctx.cr6.eq) goto loc_82BB44D8;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb44d8
	if (!ctx.cr6.eq) goto loc_82BB44D8;
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb44d8
	if (!ctx.cr6.eq) goto loc_82BB44D8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// sth r10,80(r30)
	PPC_STORE_U16(ctx.r30.u32 + 80, ctx.r10.u16);
loc_82BB44D8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bb2c60
	ctx.lr = 0x82BB44E0;
	sub_82BB2C60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb4520
	if (!ctx.cr6.eq) goto loc_82BB4520;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stb r22,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r22.u8);
	// rlwinm r8,r9,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// sth r10,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r10.u16);
	// stb r8,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r8.u8);
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r6,r6,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r6,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r6.u16);
	// b 0x82bb4548
	goto loc_82BB4548;
loc_82BB4520:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82bb4534
	if (ctx.cr6.eq) goto loc_82BB4534;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82bb4544
	if (!ctx.cr6.eq) goto loc_82BB4544;
loc_82BB4534:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_82BB4544:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_82BB4548:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb457c
	if (ctx.cr6.eq) goto loc_82BB457C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb29f0
	ctx.lr = 0x82BB4560;
	sub_82BB29F0(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb457c
	if (ctx.cr6.eq) goto loc_82BB457C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_82BB457C:
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82bb46a8
	if (ctx.cr6.gt) goto loc_82BB46A8;
	// lis r12,-32069
	ctx.r12.s64 = -2101673984;
	// addi r12,r12,17828
	ctx.r12.s64 = ctx.r12.s64 + 17828;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BB45D0;
	case 1:
		goto loc_82BB45E0;
	case 2:
		goto loc_82BB46A8;
	case 3:
		goto loc_82BB46A8;
	case 4:
		goto loc_82BB46A8;
	case 5:
		goto loc_82BB4600;
	case 6:
		goto loc_82BB4610;
	case 7:
		goto loc_82BB46A8;
	case 8:
		goto loc_82BB46A8;
	case 9:
		goto loc_82BB4624;
	case 10:
		goto loc_82BB45F0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,17872(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17872);
	// lwz r21,17888(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17888);
	// lwz r21,18088(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18088);
	// lwz r21,18088(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18088);
	// lwz r21,18088(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18088);
	// lwz r21,17920(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17920);
	// lwz r21,17936(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17936);
	// lwz r21,18088(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18088);
	// lwz r21,18088(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18088);
	// lwz r21,17956(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17956);
	// lwz r21,17904(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17904);
loc_82BB45D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb3a58
	ctx.lr = 0x82BB45DC;
	sub_82BB3A58(ctx, base);
	// b 0x82bb4634
	goto loc_82BB4634;
loc_82BB45E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb3010
	ctx.lr = 0x82BB45EC;
	sub_82BB3010(ctx, base);
	// b 0x82bb4634
	goto loc_82BB4634;
loc_82BB45F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb2fa8
	ctx.lr = 0x82BB45FC;
	sub_82BB2FA8(ctx, base);
	// b 0x82bb4634
	goto loc_82BB4634;
loc_82BB4600:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb2f28
	ctx.lr = 0x82BB460C;
	sub_82BB2F28(ctx, base);
	// b 0x82bb4634
	goto loc_82BB4634;
loc_82BB4610:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb2e60
	ctx.lr = 0x82BB4620;
	sub_82BB2E60(ctx, base);
	// b 0x82bb4634
	goto loc_82BB4634;
loc_82BB4624:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb3180
	ctx.lr = 0x82BB4634;
	sub_82BB3180(ctx, base);
loc_82BB4634:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bb469c
	if (ctx.cr6.eq) goto loc_82BB469C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb466c
	if (ctx.cr6.eq) goto loc_82BB466C;
	// lhz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb466c
	if (ctx.cr6.eq) goto loc_82BB466C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bb2110
	ctx.lr = 0x82BB466C;
	sub_82BB2110(ctx, base);
loc_82BB466C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bb469c
	if (ctx.cr6.eq) goto loc_82BB469C;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x82bb4688
	if (ctx.cr6.eq) goto loc_82BB4688;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82BB4688:
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// stb r11,83(r30)
	PPC_STORE_U8(ctx.r30.u32 + 83, ctx.r11.u8);
	// sth r10,86(r30)
	PPC_STORE_U16(ctx.r30.u32 + 86, ctx.r10.u16);
	// sth r8,84(r30)
	PPC_STORE_U16(ctx.r30.u32 + 84, ctx.r8.u16);
loc_82BB469C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_82BB46A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB46B4"))) PPC_WEAK_FUNC(sub_82BB46B4);
PPC_FUNC_IMPL(__imp__sub_82BB46B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB46B8"))) PPC_WEAK_FUNC(sub_82BB46B8);
PPC_FUNC_IMPL(__imp__sub_82BB46B8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,1,29,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFFFFFF0007) | (ctx.r11.u64 & 0xFFF8);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// b 0x82bb4008
	sub_82BB4008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB46CC"))) PPC_WEAK_FUNC(sub_82BB46CC);
PPC_FUNC_IMPL(__imp__sub_82BB46CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB46D0"))) PPC_WEAK_FUNC(sub_82BB46D0);
PPC_FUNC_IMPL(__imp__sub_82BB46D0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,0,29,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFF0007) | (ctx.r11.u64 & 0xFFF8);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// b 0x82bb4008
	sub_82BB4008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB46E4"))) PPC_WEAK_FUNC(sub_82BB46E4);
PPC_FUNC_IMPL(__imp__sub_82BB46E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB46E8"))) PPC_WEAK_FUNC(sub_82BB46E8);
PPC_FUNC_IMPL(__imp__sub_82BB46E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r9,2260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2260);
	// rlwinm r3,r9,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4704"))) PPC_WEAK_FUNC(sub_82BB4704);
PPC_FUNC_IMPL(__imp__sub_82BB4704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4708"))) PPC_WEAK_FUNC(sub_82BB4708);
PPC_FUNC_IMPL(__imp__sub_82BB4708) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4710"))) PPC_WEAK_FUNC(sub_82BB4710);
PPC_FUNC_IMPL(__imp__sub_82BB4710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82bb4754
	if (!ctx.cr6.eq) goto loc_82BB4754;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82BB4754:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4770"))) PPC_WEAK_FUNC(sub_82BB4770);
PPC_FUNC_IMPL(__imp__sub_82BB4770) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB47B4"))) PPC_WEAK_FUNC(sub_82BB47B4);
PPC_FUNC_IMPL(__imp__sub_82BB47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB47B8"))) PPC_WEAK_FUNC(sub_82BB47B8);
PPC_FUNC_IMPL(__imp__sub_82BB47B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB47E4"))) PPC_WEAK_FUNC(sub_82BB47E4);
PPC_FUNC_IMPL(__imp__sub_82BB47E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB47E8"))) PPC_WEAK_FUNC(sub_82BB47E8);
PPC_FUNC_IMPL(__imp__sub_82BB47E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB47F4"))) PPC_WEAK_FUNC(sub_82BB47F4);
PPC_FUNC_IMPL(__imp__sub_82BB47F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB47F8"))) PPC_WEAK_FUNC(sub_82BB47F8);
PPC_FUNC_IMPL(__imp__sub_82BB47F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb4830
	if (ctx.cr6.eq) goto loc_82BB4830;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb4830
	if (ctx.cr6.eq) goto loc_82BB4830;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb4830
	if (ctx.cr6.eq) goto loc_82BB4830;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82BB4830:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4838"))) PPC_WEAK_FUNC(sub_82BB4838);
PPC_FUNC_IMPL(__imp__sub_82BB4838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f4,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f2,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fmr f10,f4
	ctx.f10.f64 = ctx.f4.f64;
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f2
	ctx.f8.f64 = ctx.f2.f64;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lfs f1,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f11,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f2,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f9,f8,f4
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f8,f3,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f7,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,-30776(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30776);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x827e77f8
	ctx.lr = 0x82BB4918;
	sub_827E77F8(ctx, base);
	// lfs f4,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f7,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f2
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f1,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmadds f5,f10,f12,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f1,f7,f8,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f5.f64));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4968"))) PPC_WEAK_FUNC(sub_82BB4968);
PPC_FUNC_IMPL(__imp__sub_82BB4968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lfs f13,56(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-30176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB49F8"))) PPC_WEAK_FUNC(sub_82BB49F8);
PPC_FUNC_IMPL(__imp__sub_82BB49F8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb4a7c
	if (ctx.cr6.eq) goto loc_82BB4A7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82bb4a7c
	if (!ctx.cr6.eq) goto loc_82BB4A7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bgt 0x82bb4a7c
	if (ctx.cr0.gt) goto loc_82BB4A7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82bb4a64
	if (!ctx.cr6.eq) goto loc_82BB4A64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82120a70
	ctx.lr = 0x82BB4A50;
	sub_82120A70(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x82120a70
	ctx.lr = 0x82BB4A60;
	sub_82120A70(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82BB4A64:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd448
	ctx.lr = 0x82BB4A74;
	sub_82BCD448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BB4A7C;
	sub_82120A70(ctx, base);
loc_82BB4A7C:
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

__attribute__((alias("__imp__sub_82BB4A94"))) PPC_WEAK_FUNC(sub_82BB4A94);
PPC_FUNC_IMPL(__imp__sub_82BB4A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4A98"))) PPC_WEAK_FUNC(sub_82BB4A98);
PPC_FUNC_IMPL(__imp__sub_82BB4A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82120040
	ctx.lr = 0x82BB4AB4;
	sub_82120040(ctx, base);
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB4AC4;
	sub_82218A80(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r5,r11,-4472
	ctx.r5.s64 = ctx.r11.s64 + -4472;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f0,-4472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4472);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f13,29744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// lfs f8,-4008(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4008);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f10,104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lfs f12,-4012(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4012);
	ctx.f12.f64 = double(temp.f32);
	// ori r11,r11,320
	ctx.r11.u64 = ctx.r11.u64 | 320;
	// lfs f11,-30872(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30872);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-27236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -27236);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-188
	ctx.r7.s64 = -12320768;
	// lis r3,-32654
	ctx.r3.s64 = -2140012544;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r8,r10,10472
	ctx.r8.s64 = ctx.r10.s64 + 10472;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32640
	ctx.r5.s64 = -2139095040;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lis r4,-32559
	ctx.r4.s64 = -2133786624;
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// ori r11,r7,24183
	ctx.r11.u64 = ctx.r7.u64 | 24183;
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// ori r3,r3,59127
	ctx.r3.u64 = ctx.r3.u64 | 59127;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// ori r5,r5,32896
	ctx.r5.u64 = ctx.r5.u64 | 32896;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// ori r4,r4,49049
	ctx.r4.u64 = ctx.r4.u64 | 49049;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r8,r8,88
	ctx.r8.s64 = ctx.r8.s64 + 88;
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82BB4BDC"))) PPC_WEAK_FUNC(sub_82BB4BDC);
PPC_FUNC_IMPL(__imp__sub_82BB4BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4BE0"))) PPC_WEAK_FUNC(sub_82BB4BE0);
PPC_FUNC_IMPL(__imp__sub_82BB4BE0) {
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
	// beq cr6,0x82bb4c1c
	if (ctx.cr6.eq) goto loc_82BB4C1C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb4c0c
	if (ctx.cr6.eq) goto loc_82BB4C0C;
	// bl 0x82120a70
	ctx.lr = 0x82BB4C0C;
	sub_82120A70(ctx, base);
loc_82BB4C0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82BB4C1C:
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

__attribute__((alias("__imp__sub_82BB4C30"))) PPC_WEAK_FUNC(sub_82BB4C30);
PPC_FUNC_IMPL(__imp__sub_82BB4C30) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb4c70
	if (ctx.cr6.eq) goto loc_82BB4C70;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82BB4C60;
	sub_82120040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82BB4C70:
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

__attribute__((alias("__imp__sub_82BB4C88"))) PPC_WEAK_FUNC(sub_82BB4C88);
PPC_FUNC_IMPL(__imp__sub_82BB4C88) {
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
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82bb4a98
	ctx.lr = 0x82BB4CAC;
	sub_82BB4A98(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lfs f11,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f10,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lfs f9,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,76(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f8,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f7,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lfs f6,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,100(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f5,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,104(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f4,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,108(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r7,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r7.u32);
	// lfs f3,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f2,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f1,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82BB4DAC"))) PPC_WEAK_FUNC(sub_82BB4DAC);
PPC_FUNC_IMPL(__imp__sub_82BB4DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4DB0"))) PPC_WEAK_FUNC(sub_82BB4DB0);
PPC_FUNC_IMPL(__imp__sub_82BB4DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82BB4DB8;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// bl 0x82bb4a98
	ctx.lr = 0x82BB4DCC;
	sub_82BB4A98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r29,12456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82bb4e2c
	if (ctx.cr6.eq) goto loc_82BB4E2C;
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
loc_82BB4E2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r21,16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 16, ctx.xer);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// blt cr6,0x82bb4e98
	if (ctx.cr6.lt) goto loc_82BB4E98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82bb4e90
	if (ctx.cr6.eq) goto loc_82BB4E90;
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
loc_82BB4E90:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_82BB4E98:
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// bgt cr6,0x82bb4ec4
	if (ctx.cr6.gt) goto loc_82BB4EC4;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb4ec4
	if (ctx.cr6.eq) goto loc_82BB4EC4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwimi r11,r10,21,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwimi r11,r10,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82BB4EC4:
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// bge cr6,0x82bb4ee4
	if (!ctx.cr6.lt) goto loc_82BB4EE4;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwimi r11,r10,8,25,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,12,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82BB4EE4:
	// cmplwi cr6,r21,16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 16, ctx.xer);
	// bgt cr6,0x82bb4ef8
	if (ctx.cr6.gt) goto loc_82BB4EF8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82BB4EF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82bb4f50
	if (ctx.cr6.eq) goto loc_82BB4F50;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB4F50:
	// cmplwi cr6,r21,4
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 4, ctx.xer);
	// stw r4,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r4.u32);
	// bge cr6,0x82bb4f70
	if (!ctx.cr6.lt) goto loc_82BB4F70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f1,-4012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b98598
	ctx.lr = 0x82BB4F6C;
	sub_82B98598(ctx, base);
	// stw r3,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r3.u32);
loc_82BB4F70:
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// cmplwi cr6,r21,5
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 5, ctx.xer);
	// lwz r28,12496(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12496);
	// lwz r30,12476(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// blt cr6,0x82bb4fa4
	if (ctx.cr6.lt) goto loc_82BB4FA4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bb4f98
	if (ctx.cr6.eq) goto loc_82BB4F98;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bb4fa4
	if (ctx.cr6.eq) goto loc_82BB4FA4;
loc_82BB4F98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82BB4FA4:
	// cmplwi cr6,r21,10
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 10, ctx.xer);
	// blt cr6,0x82bb5008
	if (ctx.cr6.lt) goto loc_82BB5008;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82bb5000
	if (ctx.cr6.eq) goto loc_82BB5000;
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
loc_82BB5000:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
loc_82BB5008:
	// cmplwi cr6,r21,16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 16, ctx.xer);
	// blt cr6,0x82bb5020
	if (ctx.cr6.lt) goto loc_82BB5020;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB501C;
	sub_821204C0(ctx, base);
	// stfs f1,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
loc_82BB5020:
	// cmplwi cr6,r21,24
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 24, ctx.xer);
	// blt cr6,0x82bb5038
	if (ctx.cr6.lt) goto loc_82BB5038;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB5034;
	sub_821204C0(ctx, base);
	// stfs f1,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
loc_82BB5038:
	// cmplwi cr6,r21,18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 18, ctx.xer);
	// blt cr6,0x82bb50b0
	if (ctx.cr6.lt) goto loc_82BB50B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb5094
	if (ctx.cr6.eq) goto loc_82BB5094;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB5094:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// bl 0x821204c0
	ctx.lr = 0x82BB50A8;
	sub_821204C0(ctx, base);
	// stfs f1,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// b 0x82bb50b4
	goto loc_82BB50B4;
loc_82BB50B0:
	// stw r20,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r20.u32);
loc_82BB50B4:
	// cmplwi cr6,r21,12
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 12, ctx.xer);
	// blt cr6,0x82bb53f8
	if (ctx.cr6.lt) goto loc_82BB53F8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x82bb53f8
	if (!ctx.cr6.eq) goto loc_82BB53F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb5120
	if (ctx.cr6.eq) goto loc_82BB5120;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB5120:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb517c
	if (ctx.cr6.eq) goto loc_82BB517C;
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
loc_82BB517C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// bl 0x821204c0
	ctx.lr = 0x82BB5190;
	sub_821204C0(ctx, base);
	// stfs f1,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB51A0;
	sub_821204C0(ctx, base);
	// stfs f1,60(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 60, temp.u32);
	// cmplwi cr6,r21,13
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 13, ctx.xer);
	// blt cr6,0x82bb5208
	if (ctx.cr6.lt) goto loc_82BB5208;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82bb5200
	if (ctx.cr6.eq) goto loc_82BB5200;
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
loc_82BB5200:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r11.u32);
loc_82BB5208:
	// cmplwi cr6,r21,23
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 23, ctx.xer);
	// blt cr6,0x82bb5230
	if (ctx.cr6.lt) goto loc_82BB5230;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB521C;
	sub_821204C0(ctx, base);
	// stfs f1,76(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 76, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB522C;
	sub_821204C0(ctx, base);
	// stfs f1,80(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 80, temp.u32);
loc_82BB5230:
	// cmplwi cr6,r21,14
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 14, ctx.xer);
	// blt cr6,0x82bb5294
	if (ctx.cr6.lt) goto loc_82BB5294;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb528c
	if (ctx.cr6.eq) goto loc_82BB528C;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB528C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r11.u32);
loc_82BB5294:
	// cmplwi cr6,r21,15
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 15, ctx.xer);
	// blt cr6,0x82bb5328
	if (ctx.cr6.lt) goto loc_82BB5328;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb52f0
	if (ctx.cr6.eq) goto loc_82BB52F0;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB52F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r27)
	PPC_STORE_U32(ctx.r27.u32 + 92, ctx.r11.u32);
	// bl 0x821204c0
	ctx.lr = 0x82BB5304;
	sub_821204C0(ctx, base);
	// stfs f1,100(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 100, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB5314;
	sub_821204C0(ctx, base);
	// stfs f1,104(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 104, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB5324;
	sub_821204C0(ctx, base);
	// stfs f1,108(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 108, temp.u32);
loc_82BB5328:
	// cmplwi cr6,r21,21
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 21, ctx.xer);
	// blt cr6,0x82bb538c
	if (ctx.cr6.lt) goto loc_82BB538C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb5384
	if (ctx.cr6.eq) goto loc_82BB5384;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB5384:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
loc_82BB538C:
	// cmplwi cr6,r21,25
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 25, ctx.xer);
	// blt cr6,0x82bb53f0
	if (ctx.cr6.lt) goto loc_82BB53F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb53e8
	if (ctx.cr6.eq) goto loc_82BB53E8;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB53E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82bb53f4
	goto loc_82BB53F4;
loc_82BB53F0:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
loc_82BB53F4:
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
loc_82BB53F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB5404;
	sub_821204C0(ctx, base);
	// stfs f1,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB5414;
	sub_821204C0(ctx, base);
	// stfs f1,44(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB5424;
	sub_821204C0(ctx, base);
	// stfs f1,48(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 48, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB5434;
	sub_821204C0(ctx, base);
	// stfs f1,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 52, temp.u32);
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// blt cr6,0x82bb5464
	if (ctx.cr6.lt) goto loc_82BB5464;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB544C;
	sub_821204C0(ctx, base);
	// stfs f1,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// cmplwi cr6,r21,11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 11, ctx.xer);
	// bge cr6,0x82bb5464
	if (!ctx.cr6.lt) goto loc_82BB5464;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,-4368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
loc_82BB5464:
	// cmplwi cr6,r21,6
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 6, ctx.xer);
	// bge cr6,0x82bb5488
	if (!ctx.cr6.lt) goto loc_82BB5488;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bb547c
	if (ctx.cr6.eq) goto loc_82BB547C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bb5488
	if (ctx.cr6.eq) goto loc_82BB5488;
loc_82BB547C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82BB5488:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r21,7
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 7, ctx.xer);
	// lfs f31,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x82bb54ac
	if (!ctx.cr6.lt) goto loc_82BB54AC;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82bb54ac
	if (!ctx.cr6.eq) goto loc_82BB54AC;
	// stfs f31,48(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 48, temp.u32);
loc_82BB54AC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82bb572c
	if (!ctx.cr6.eq) goto loc_82BB572C;
	// stw r25,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r25.u32);
	// cmplwi cr6,r21,8
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 8, ctx.xer);
	// stw r25,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r25.u32);
	// blt cr6,0x82bb5720
	if (ctx.cr6.lt) goto loc_82BB5720;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82bb5528
	if (ctx.cr6.eq) goto loc_82BB5528;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB5528:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb5720
	if (ctx.cr6.eq) goto loc_82BB5720;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82120040
	ctx.lr = 0x82BB553C;
	sub_82120040(ctx, base);
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r3.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BB554C;
	sub_82218A80(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82bb5628
	if (ctx.cr6.eq) goto loc_82BB5628;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r29,36
	ctx.r29.s64 = 36;
	// addi r26,r11,26668
	ctx.r26.s64 = ctx.r11.s64 + 26668;
loc_82BB556C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12456(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bb55c4
	if (ctx.cr6.eq) goto loc_82BB55C4;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BB55C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bc8ac0
	ctx.lr = 0x82BB55D4;
	sub_82BC8AC0(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82bcf018
	ctx.lr = 0x82BB55F4;
	sub_82BCF018(ctx, base);
	// lwz r11,12476(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb560c
	if (ctx.cr6.eq) goto loc_82BB560C;
	// lwz r11,12496(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb5618
	if (ctx.cr6.eq) goto loc_82BB5618;
loc_82BB560C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82BB5618:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82bb556c
	if (!ctx.cr0.eq) goto loc_82BB556C;
loc_82BB5628:
	// lwz r29,12456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
loc_82BB562C:
	// cmplwi cr6,r21,9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 9, ctx.xer);
	// blt cr6,0x82bb5728
	if (ctx.cr6.lt) goto loc_82BB5728;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82bb568c
	if (ctx.cr6.eq) goto loc_82BB568C;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BB568C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb5728
	if (ctx.cr6.eq) goto loc_82BB5728;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1124
	ctx.r3.s64 = 1124;
	// bl 0x82120040
	ctx.lr = 0x82BB56A0;
	sub_82120040(ctx, base);
	// li r5,1124
	ctx.r5.s64 = 1124;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r3.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BB56B0;
	sub_82218A80(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r29.u32);
	// beq cr6,0x82bb572c
	if (ctx.cr6.eq) goto loc_82BB572C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82BB56C8:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,592
	ctx.r4.s64 = ctx.r11.s64 + 592;
	// bl 0x82bcf018
	ctx.lr = 0x82BB56E0;
	sub_82BCF018(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,604
	ctx.r4.s64 = ctx.r11.s64 + 604;
	// bl 0x82bcf018
	ctx.lr = 0x82BB56F8;
	sub_82BCF018(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82bcf198
	ctx.lr = 0x82BB570C;
	sub_82BCF198(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// bne 0x82bb56c8
	if (!ctx.cr0.eq) goto loc_82BB56C8;
	// b 0x82bb572c
	goto loc_82BB572C;
loc_82BB5720:
	// stw r25,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r25.u32);
	// b 0x82bb562c
	goto loc_82BB562C;
loc_82BB5728:
	// stw r25,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r25.u32);
loc_82BB572C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb576c
	if (!ctx.cr6.eq) goto loc_82BB576C;
	// lfs f13,44(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82bb576c
	if (!ctx.cr6.lt) goto loc_82BB576C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f12,-30792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30792);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82bb5768
	if (ctx.cr6.lt) goto loc_82BB5768;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB5768:
	// stfs f0,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
loc_82BB576C:
	// cmplwi cr6,r21,22
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 22, ctx.xer);
	// bge cr6,0x82bb5778
	if (!ctx.cr6.lt) goto loc_82BB5778;
	// stb r20,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r20.u8);
loc_82BB5778:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82bb5810
	if (!ctx.cr6.eq) goto loc_82BB5810;
	// cmplwi cr6,r21,19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 19, ctx.xer);
	// blt cr6,0x82bb57c4
	if (ctx.cr6.lt) goto loc_82BB57C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB579C;
	sub_821204C0(ctx, base);
	// stfs f1,64(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 64, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB57AC;
	sub_821204C0(ctx, base);
	// stfs f1,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 68, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82BB57BC;
	sub_821204C0(ctx, base);
	// stfs f1,72(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 72, temp.u32);
	// b 0x82bb57e0
	goto loc_82BB57E0;
loc_82BB57C4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 64, temp.u32);
	// stfs f13,68(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 68, temp.u32);
	// stfs f0,72(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 72, temp.u32);
loc_82BB57E0:
	// cmplwi cr6,r21,20
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 20, ctx.xer);
	// stb r25,61(r27)
	PPC_STORE_U8(ctx.r27.u32 + 61, ctx.r25.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// blt cr6,0x82bb5814
	if (ctx.cr6.lt) goto loc_82BB5814;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r9,61(r27)
	PPC_STORE_U8(ctx.r27.u32 + 61, ctx.r9.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82BB5810:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82BB5814:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB5820"))) PPC_WEAK_FUNC(sub_82BB5820);
PPC_FUNC_IMPL(__imp__sub_82BB5820) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// addi r5,r10,10472
	ctx.r5.s64 = ctx.r10.s64 + 10472;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r4,-31942
	ctx.r4.s64 = -2093350912;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// addi r10,r10,19888
	ctx.r10.s64 = ctx.r10.s64 + 19888;
	// lis r9,-32069
	ctx.r9.s64 = -2101673984;
	// stw r11,92(r5)
	PPC_STORE_U32(ctx.r5.u32 + 92, ctx.r11.u32);
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// stw r10,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r10.u32);
	// lis r7,-32069
	ctx.r7.s64 = -2101673984;
	// lwz r8,12756(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12756);
	// addi r9,r9,18184
	ctx.r9.s64 = ctx.r9.s64 + 18184;
	// addi r11,r6,18936
	ctx.r11.s64 = ctx.r6.s64 + 18936;
	// addi r10,r7,18152
	ctx.r10.s64 = ctx.r7.s64 + 18152;
	// stw r9,100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 100, ctx.r9.u32);
	// stw r11,104(r5)
	PPC_STORE_U32(ctx.r5.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,112(r5)
	PPC_STORE_U32(ctx.r5.u32 + 112, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,6752
	ctx.r9.s64 = ctx.r9.s64 + 6752;
	// addi r8,r8,5728
	ctx.r8.s64 = ctx.r8.s64 + 5728;
loc_82BB588C:
	// mullw r7,r11,r11
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// rlwinm r6,r7,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r5,r6,r6
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// mullw r3,r4,r4
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// blt cr6,0x82bb588c
	if (ctx.cr6.lt) goto loc_82BB588C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB58C0"))) PPC_WEAK_FUNC(sub_82BB58C0);
PPC_FUNC_IMPL(__imp__sub_82BB58C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb58f0
	if (!ctx.cr6.eq) goto loc_82BB58F0;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb591c
	if (ctx.cr6.eq) goto loc_82BB591C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82BB58F0:
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r9,r10,5512
	ctx.r9.s64 = ctx.r10.s64 + 5512;
	// lwz r10,60(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb591c
	if (ctx.cr6.eq) goto loc_82BB591C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82bb591c
	if (ctx.cr6.eq) goto loc_82BB591C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82BB591C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5924"))) PPC_WEAK_FUNC(sub_82BB5924);
PPC_FUNC_IMPL(__imp__sub_82BB5924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5928"))) PPC_WEAK_FUNC(sub_82BB5928);
PPC_FUNC_IMPL(__imp__sub_82BB5928) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5934"))) PPC_WEAK_FUNC(sub_82BB5934);
PPC_FUNC_IMPL(__imp__sub_82BB5934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5938"))) PPC_WEAK_FUNC(sub_82BB5938);
PPC_FUNC_IMPL(__imp__sub_82BB5938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb5968
	if (!ctx.cr6.eq) goto loc_82BB5968;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb5994
	if (ctx.cr6.eq) goto loc_82BB5994;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82BB5968:
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r9,r10,5512
	ctx.r9.s64 = ctx.r10.s64 + 5512;
	// lwz r10,44(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb5994
	if (ctx.cr6.eq) goto loc_82BB5994;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82bb5994
	if (ctx.cr6.eq) goto loc_82BB5994;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82BB5994:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB599C"))) PPC_WEAK_FUNC(sub_82BB599C);
PPC_FUNC_IMPL(__imp__sub_82BB599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB59A0"))) PPC_WEAK_FUNC(sub_82BB59A0);
PPC_FUNC_IMPL(__imp__sub_82BB59A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB59AC"))) PPC_WEAK_FUNC(sub_82BB59AC);
PPC_FUNC_IMPL(__imp__sub_82BB59AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB59B0"))) PPC_WEAK_FUNC(sub_82BB59B0);
PPC_FUNC_IMPL(__imp__sub_82BB59B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5512
	ctx.r9.s64 = ctx.r10.s64 + 5512;
	// stb r11,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB59C4"))) PPC_WEAK_FUNC(sub_82BB59C4);
PPC_FUNC_IMPL(__imp__sub_82BB59C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB59C8"))) PPC_WEAK_FUNC(sub_82BB59C8);
PPC_FUNC_IMPL(__imp__sub_82BB59C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82bb5a18
	if (!ctx.cr6.lt) goto loc_82BB5A18;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BB59F8:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bb5a20
	if (!ctx.cr6.eq) goto loc_82BB5A20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bb59f8
	if (ctx.cr6.lt) goto loc_82BB59F8;
loc_82BB5A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB5A20:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5A34"))) PPC_WEAK_FUNC(sub_82BB5A34);
PPC_FUNC_IMPL(__imp__sub_82BB5A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5A38"))) PPC_WEAK_FUNC(sub_82BB5A38);
PPC_FUNC_IMPL(__imp__sub_82BB5A38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5A44"))) PPC_WEAK_FUNC(sub_82BB5A44);
PPC_FUNC_IMPL(__imp__sub_82BB5A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5A48"))) PPC_WEAK_FUNC(sub_82BB5A48);
PPC_FUNC_IMPL(__imp__sub_82BB5A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82bb5a98
	if (!ctx.cr6.lt) goto loc_82BB5A98;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BB5A78:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bb5aa0
	if (!ctx.cr6.eq) goto loc_82BB5AA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bb5a78
	if (ctx.cr6.lt) goto loc_82BB5A78;
loc_82BB5A98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB5AA0:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5AB4"))) PPC_WEAK_FUNC(sub_82BB5AB4);
PPC_FUNC_IMPL(__imp__sub_82BB5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5AB8"))) PPC_WEAK_FUNC(sub_82BB5AB8);
PPC_FUNC_IMPL(__imp__sub_82BB5AB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5AC4"))) PPC_WEAK_FUNC(sub_82BB5AC4);
PPC_FUNC_IMPL(__imp__sub_82BB5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5AC8"))) PPC_WEAK_FUNC(sub_82BB5AC8);
PPC_FUNC_IMPL(__imp__sub_82BB5AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5AD8"))) PPC_WEAK_FUNC(sub_82BB5AD8);
PPC_FUNC_IMPL(__imp__sub_82BB5AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r3,5512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5512);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5AE4"))) PPC_WEAK_FUNC(sub_82BB5AE4);
PPC_FUNC_IMPL(__imp__sub_82BB5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5AE8"))) PPC_WEAK_FUNC(sub_82BB5AE8);
PPC_FUNC_IMPL(__imp__sub_82BB5AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb5b20
	if (!ctx.cr6.eq) goto loc_82BB5B20;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82BB5B20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5B28"))) PPC_WEAK_FUNC(sub_82BB5B28);
PPC_FUNC_IMPL(__imp__sub_82BB5B28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb5b60
	if (!ctx.cr6.eq) goto loc_82BB5B60;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82BB5B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5B68"))) PPC_WEAK_FUNC(sub_82BB5B68);
PPC_FUNC_IMPL(__imp__sub_82BB5B68) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82BB5B80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb59c8
	ctx.lr = 0x82BB5B88;
	sub_82BB59C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb5bac
	if (ctx.cr6.eq) goto loc_82BB5BAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82bb5b80
	if (!ctx.cr6.eq) goto loc_82BB5B80;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BB5BAC:
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

__attribute__((alias("__imp__sub_82BB5BC0"))) PPC_WEAK_FUNC(sub_82BB5BC0);
PPC_FUNC_IMPL(__imp__sub_82BB5BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r9,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwimi r8,r9,0,29,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5C18"))) PPC_WEAK_FUNC(sub_82BB5C18);
PPC_FUNC_IMPL(__imp__sub_82BB5C18) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82BB5C30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb5a48
	ctx.lr = 0x82BB5C38;
	sub_82BB5A48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb5c5c
	if (ctx.cr6.eq) goto loc_82BB5C5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82bb5c30
	if (!ctx.cr6.eq) goto loc_82BB5C30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BB5C5C:
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

__attribute__((alias("__imp__sub_82BB5C70"))) PPC_WEAK_FUNC(sub_82BB5C70);
PPC_FUNC_IMPL(__imp__sub_82BB5C70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r9,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwimi r8,r9,0,29,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5CC8"))) PPC_WEAK_FUNC(sub_82BB5CC8);
PPC_FUNC_IMPL(__imp__sub_82BB5CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subfc r7,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5CEC"))) PPC_WEAK_FUNC(sub_82BB5CEC);
PPC_FUNC_IMPL(__imp__sub_82BB5CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5CF0"))) PPC_WEAK_FUNC(sub_82BB5CF0);
PPC_FUNC_IMPL(__imp__sub_82BB5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subfc r7,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5D14"))) PPC_WEAK_FUNC(sub_82BB5D14);
PPC_FUNC_IMPL(__imp__sub_82BB5D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5D18"))) PPC_WEAK_FUNC(sub_82BB5D18);
PPC_FUNC_IMPL(__imp__sub_82BB5D18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5D68"))) PPC_WEAK_FUNC(sub_82BB5D68);
PPC_FUNC_IMPL(__imp__sub_82BB5D68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb5da0
	if (!ctx.cr6.eq) goto loc_82BB5DA0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb5da4
	if (!ctx.cr6.eq) goto loc_82BB5DA4;
loc_82BB5DA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BB5DA4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5DB4"))) PPC_WEAK_FUNC(sub_82BB5DB4);
PPC_FUNC_IMPL(__imp__sub_82BB5DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5DB8"))) PPC_WEAK_FUNC(sub_82BB5DB8);
PPC_FUNC_IMPL(__imp__sub_82BB5DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb5dfc
	if (!ctx.cr6.eq) goto loc_82BB5DFC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb5dfc
	if (ctx.cr6.eq) goto loc_82BB5DFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82BB5DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5E04"))) PPC_WEAK_FUNC(sub_82BB5E04);
PPC_FUNC_IMPL(__imp__sub_82BB5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5E08"))) PPC_WEAK_FUNC(sub_82BB5E08);
PPC_FUNC_IMPL(__imp__sub_82BB5E08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb5e4c
	if (!ctx.cr6.eq) goto loc_82BB5E4C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb5e4c
	if (ctx.cr6.eq) goto loc_82BB5E4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82BB5E4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5E54"))) PPC_WEAK_FUNC(sub_82BB5E54);
PPC_FUNC_IMPL(__imp__sub_82BB5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5E58"))) PPC_WEAK_FUNC(sub_82BB5E58);
PPC_FUNC_IMPL(__imp__sub_82BB5E58) {
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
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb5ed8
	if (!ctx.cr6.eq) goto loc_82BB5ED8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb5ed8
	if (ctx.cr6.eq) goto loc_82BB5ED8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb5ed8
	if (ctx.cr6.eq) goto loc_82BB5ED8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bb5e08
	ctx.lr = 0x82BB5EB0;
	sub_82BB5E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb5ed8
	if (ctx.cr6.eq) goto loc_82BB5ED8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb5ed8
	if (!ctx.cr6.eq) goto loc_82BB5ED8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bb5c70
	ctx.lr = 0x82BB5ED8;
	sub_82BB5C70(ctx, base);
loc_82BB5ED8:
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

__attribute__((alias("__imp__sub_82BB5EEC"))) PPC_WEAK_FUNC(sub_82BB5EEC);
PPC_FUNC_IMPL(__imp__sub_82BB5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5EF0"))) PPC_WEAK_FUNC(sub_82BB5EF0);
PPC_FUNC_IMPL(__imp__sub_82BB5EF0) {
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
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb5f70
	if (!ctx.cr6.eq) goto loc_82BB5F70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb5f70
	if (ctx.cr6.eq) goto loc_82BB5F70;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb5f70
	if (ctx.cr6.eq) goto loc_82BB5F70;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bb5db8
	ctx.lr = 0x82BB5F48;
	sub_82BB5DB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb5f70
	if (ctx.cr6.eq) goto loc_82BB5F70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// sth r4,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r4.u16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb5f70
	if (!ctx.cr6.eq) goto loc_82BB5F70;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bb5bc0
	ctx.lr = 0x82BB5F70;
	sub_82BB5BC0(ctx, base);
loc_82BB5F70:
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

__attribute__((alias("__imp__sub_82BB5F84"))) PPC_WEAK_FUNC(sub_82BB5F84);
PPC_FUNC_IMPL(__imp__sub_82BB5F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5F88"))) PPC_WEAK_FUNC(sub_82BB5F88);
PPC_FUNC_IMPL(__imp__sub_82BB5F88) {
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
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r31,r11,5512
	ctx.r31.s64 = ctx.r11.s64 + 5512;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x827467c0
	ctx.lr = 0x82BB5FA8;
	sub_827467C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82bb59c8
	ctx.lr = 0x82BB5FB8;
	sub_82BB59C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb5fdc
	if (ctx.cr6.eq) goto loc_82BB5FDC;
loc_82BB5FC0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x827468d8
	ctx.lr = 0x82BB5FCC;
	sub_827468D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb59c8
	ctx.lr = 0x82BB5FD4;
	sub_82BB59C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bb5fc0
	if (!ctx.cr6.eq) goto loc_82BB5FC0;
loc_82BB5FDC:
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

__attribute__((alias("__imp__sub_82BB5FF0"))) PPC_WEAK_FUNC(sub_82BB5FF0);
PPC_FUNC_IMPL(__imp__sub_82BB5FF0) {
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
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r31,r11,5512
	ctx.r31.s64 = ctx.r11.s64 + 5512;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x827467c0
	ctx.lr = 0x82BB6010;
	sub_827467C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82bb5a48
	ctx.lr = 0x82BB6020;
	sub_82BB5A48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb6044
	if (ctx.cr6.eq) goto loc_82BB6044;
loc_82BB6028:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x827468d8
	ctx.lr = 0x82BB6034;
	sub_827468D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb5a48
	ctx.lr = 0x82BB603C;
	sub_82BB5A48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bb6028
	if (!ctx.cr6.eq) goto loc_82BB6028;
loc_82BB6044:
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

__attribute__((alias("__imp__sub_82BB6058"))) PPC_WEAK_FUNC(sub_82BB6058);
PPC_FUNC_IMPL(__imp__sub_82BB6058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r7,10(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// b 0x82746860
	sub_82746860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB60AC"))) PPC_WEAK_FUNC(sub_82BB60AC);
PPC_FUNC_IMPL(__imp__sub_82BB60AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB60B0"))) PPC_WEAK_FUNC(sub_82BB60B0);
PPC_FUNC_IMPL(__imp__sub_82BB60B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r9,r11,5512
	ctx.r9.s64 = ctx.r11.s64 + 5512;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bb60e8
	if (!ctx.cr6.eq) goto loc_82BB60E8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bb60ec
	if (!ctx.cr6.eq) goto loc_82BB60EC;
loc_82BB60E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BB60EC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r9,36
	ctx.r3.s64 = ctx.r9.s64 + 36;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x82746860
	sub_82746860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6104"))) PPC_WEAK_FUNC(sub_82BB6104);
PPC_FUNC_IMPL(__imp__sub_82BB6104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6108"))) PPC_WEAK_FUNC(sub_82BB6108);
PPC_FUNC_IMPL(__imp__sub_82BB6108) {
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
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r30,r11,5512
	ctx.r30.s64 = ctx.r11.s64 + 5512;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bb6218
	if (!ctx.cr6.eq) goto loc_82BB6218;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6218
	if (ctx.cr6.eq) goto loc_82BB6218;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb6218
	if (ctx.cr6.eq) goto loc_82BB6218;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwimi r10,r9,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// rlwinm r8,r10,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bb6218
	if (!ctx.cr6.eq) goto loc_82BB6218;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82bb6198
	if (!ctx.cr6.lt) goto loc_82BB6198;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82BB6198:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb61c4
	if (ctx.cr6.eq) goto loc_82BB61C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb61c4
	if (ctx.cr6.eq) goto loc_82BB61C4;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB61C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB61C4:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb61e4
	if (ctx.cr6.eq) goto loc_82BB61E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb61e4
	if (ctx.cr6.eq) goto loc_82BB61E4;
	// bl 0x82120a70
	ctx.lr = 0x82BB61E4;
	sub_82120A70(ctx, base);
loc_82BB61E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb6200
	if (!ctx.cr6.eq) goto loc_82BB6200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82746860
	ctx.lr = 0x82BB6200;
	sub_82746860(ctx, base);
loc_82BB6200:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82BB6218:
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

__attribute__((alias("__imp__sub_82BB6230"))) PPC_WEAK_FUNC(sub_82BB6230);
PPC_FUNC_IMPL(__imp__sub_82BB6230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB6238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82bb6254
	if (!ctx.cr6.eq) goto loc_82BB6254;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BB6254:
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r30,r11,5512
	ctx.r30.s64 = ctx.r11.s64 + 5512;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bb6284
	if (ctx.cr6.eq) goto loc_82BB6284;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bb5b68
	ctx.lr = 0x82BB6270;
	sub_82BB5B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb6284
	if (ctx.cr6.eq) goto loc_82BB6284;
	// lhz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BB6284:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// add r31,r7,r9
	ctx.r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82bb62e4
	if (!ctx.cr6.lt) goto loc_82BB62E4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BB62BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r9,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb62e0
	if (ctx.cr6.eq) goto loc_82BB62E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82bb62bc
	if (ctx.cr6.lt) goto loc_82BB62BC;
	// b 0x82bb62e4
	goto loc_82BB62E4;
loc_82BB62E0:
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82BB62E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x827468d8
	ctx.lr = 0x82BB6314;
	sub_827468D8(ctx, base);
	// lhz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6320"))) PPC_WEAK_FUNC(sub_82BB6320);
PPC_FUNC_IMPL(__imp__sub_82BB6320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB6328;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,5512
	ctx.r30.s64 = ctx.r10.s64 + 5512;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bb6364
	if (ctx.cr6.eq) goto loc_82BB6364;
	// bl 0x82bb5c18
	ctx.lr = 0x82BB6350;
	sub_82BB5C18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb6364
	if (ctx.cr6.eq) goto loc_82BB6364;
	// lhz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BB6364:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// add r31,r7,r9
	ctx.r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82bb63c4
	if (!ctx.cr6.lt) goto loc_82BB63C4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BB639C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r9,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb63c0
	if (ctx.cr6.eq) goto loc_82BB63C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82bb639c
	if (ctx.cr6.lt) goto loc_82BB639C;
	// b 0x82bb63c4
	goto loc_82BB63C4;
loc_82BB63C0:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82BB63C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r9,r10,2,29,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x827468d8
	ctx.lr = 0x82BB63FC;
	sub_827468D8(ctx, base);
	// lhz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6408"))) PPC_WEAK_FUNC(sub_82BB6408);
PPC_FUNC_IMPL(__imp__sub_82BB6408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB6410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r31,r11,5512
	ctx.r31.s64 = ctx.r11.s64 + 5512;
	// lwz r11,5512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb6430
	if (ctx.cr6.eq) goto loc_82BB6430;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x82BB6430;
	sub_82120A70(ctx, base);
loc_82BB6430:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb64a4
	if (ctx.cr6.eq) goto loc_82BB64A4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bb649c
	if (!ctx.cr6.gt) goto loc_82BB649C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82BB6454:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb648c
	if (ctx.cr6.eq) goto loc_82BB648C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb648c
	if (ctx.cr6.eq) goto loc_82BB648C;
	// bl 0x82120a70
	ctx.lr = 0x82BB647C;
	sub_82120A70(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_82BB648C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bb6454
	if (ctx.cr6.lt) goto loc_82BB6454;
loc_82BB649C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82120a70
	ctx.lr = 0x82BB64A4;
	sub_82120A70(ctx, base);
loc_82BB64A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x82BB64B4;
	sub_82218A80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB64BC"))) PPC_WEAK_FUNC(sub_82BB64BC);
PPC_FUNC_IMPL(__imp__sub_82BB64BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB64C0"))) PPC_WEAK_FUNC(sub_82BB64C0);
PPC_FUNC_IMPL(__imp__sub_82BB64C0) {
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
	// lis r31,-31947
	ctx.r31.s64 = -2093678592;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r30,r31,5512
	ctx.r30.s64 = ctx.r31.s64 + 5512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB64EC;
	sub_82218A80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,24000
	ctx.r3.s64 = 24000;
	// bl 0x82120040
	ctx.lr = 0x82BB64F8;
	sub_82120040(ctx, base);
	// li r5,24000
	ctx.r5.s64 = 24000;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BB6508;
	sub_82218A80(ctx, base);
	// li r11,1500
	ctx.r11.s64 = 1500;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,5512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5512, ctx.r11.u32);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82120040
	ctx.lr = 0x82BB651C;
	sub_82120040(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BB6534;
	sub_82218A80(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// addi r11,r11,23792
	ctx.r11.s64 = ctx.r11.s64 + 23792;
	// addi r10,r8,23752
	ctx.r10.s64 = ctx.r8.s64 + 23752;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82BB658C"))) PPC_WEAK_FUNC(sub_82BB658C);
PPC_FUNC_IMPL(__imp__sub_82BB658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6590"))) PPC_WEAK_FUNC(sub_82BB6590);
PPC_FUNC_IMPL(__imp__sub_82BB6590) {
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
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r30,r11,5512
	ctx.r30.s64 = ctx.r11.s64 + 5512;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bb6738
	if (!ctx.cr6.eq) goto loc_82BB6738;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6738
	if (ctx.cr6.eq) goto loc_82BB6738;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb6738
	if (ctx.cr6.eq) goto loc_82BB6738;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6738
	if (ctx.cr6.eq) goto loc_82BB6738;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,3,0,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb663c
	if (ctx.cr6.eq) goto loc_82BB663C;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6738
	if (ctx.cr6.eq) goto loc_82BB6738;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82bb6738
	if (!ctx.cr6.eq) goto loc_82BB6738;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb6738
	if (!ctx.cr6.eq) goto loc_82BB6738;
loc_82BB663C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82bb665c
	if (!ctx.cr6.lt) goto loc_82BB665C;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82BB665C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb6688
	if (ctx.cr6.eq) goto loc_82BB6688;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6688
	if (ctx.cr6.eq) goto loc_82BB6688;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB6688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB6688:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13600);
	// bl 0x827c0010
	ctx.lr = 0x82BB66A0;
	sub_827C0010(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb66bc
	if (!ctx.cr6.eq) goto loc_82BB66BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82746860
	ctx.lr = 0x82BB66BC;
	sub_82746860(ctx, base);
loc_82BB66BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb66e0
	if (ctx.cr6.eq) goto loc_82BB66E0;
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x82bb6108
	ctx.lr = 0x82BB66E0;
	sub_82BB6108(ctx, base);
loc_82BB66E0:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6720
	if (ctx.cr6.eq) goto loc_82BB6720;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// bl 0x82bb6590
	ctx.lr = 0x82BB6704;
	sub_82BB6590(ctx, base);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb6720
	if (!ctx.cr6.eq) goto loc_82BB6720;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82bb6724
	goto loc_82BB6724;
loc_82BB6720:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82BB6724:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82BB6738:
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

__attribute__((alias("__imp__sub_82BB6750"))) PPC_WEAK_FUNC(sub_82BB6750);
PPC_FUNC_IMPL(__imp__sub_82BB6750) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mulli r5,r11,68
	ctx.r5.s64 = ctx.r11.s64 * 68;
	// b 0x82219130
	sub_82219130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB675C"))) PPC_WEAK_FUNC(sub_82BB675C);
PPC_FUNC_IMPL(__imp__sub_82BB675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6760"))) PPC_WEAK_FUNC(sub_82BB6760);
PPC_FUNC_IMPL(__imp__sub_82BB6760) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lhz r11,1094(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1094);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mulli r5,r7,68
	ctx.r5.s64 = ctx.r7.s64 * 68;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// b 0x82219130
	sub_82219130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6788"))) PPC_WEAK_FUNC(sub_82BB6788);
PPC_FUNC_IMPL(__imp__sub_82BB6788) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,1096(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1096);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// sth r10,1094(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1094, ctx.r10.u16);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB67A4"))) PPC_WEAK_FUNC(sub_82BB67A4);
PPC_FUNC_IMPL(__imp__sub_82BB67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB67A8"))) PPC_WEAK_FUNC(sub_82BB67A8);
PPC_FUNC_IMPL(__imp__sub_82BB67A8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,1094(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1094);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r3.u32);
	// sth r10,1094(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1094, ctx.r10.u16);
	// sth r11,1096(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1096, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB67C0"))) PPC_WEAK_FUNC(sub_82BB67C0);
PPC_FUNC_IMPL(__imp__sub_82BB67C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,1094(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1094);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bb67d4
	if (!ctx.cr6.eq) goto loc_82BB67D4;
	// blr 
	return;
loc_82BB67D4:
	// lwz r10,1088(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r10,-68
	ctx.r8.s64 = ctx.r10.s64 + -68;
	// sth r9,1094(r11)
	PPC_STORE_U16(ctx.r11.u32 + 1094, ctx.r9.u16);
	// stw r8,1088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1088, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB67F0"))) PPC_WEAK_FUNC(sub_82BB67F0);
PPC_FUNC_IMPL(__imp__sub_82BB67F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,1092(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1092, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB67FC"))) PPC_WEAK_FUNC(sub_82BB67FC);
PPC_FUNC_IMPL(__imp__sub_82BB67FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6800"))) PPC_WEAK_FUNC(sub_82BB6800);
PPC_FUNC_IMPL(__imp__sub_82BB6800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// beq cr6,0x82bb68a4
	if (ctx.cr6.eq) goto loc_82BB68A4;
	// lhz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb68a4
	if (ctx.cr6.eq) goto loc_82BB68A4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bb683c
	if (ctx.cr6.eq) goto loc_82BB683C;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82219130
	ctx.lr = 0x82BB6838;
	sub_82219130(ctx, base);
	// b 0x82bb6898
	goto loc_82BB6898;
loc_82BB683C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// rlwinm r8,r10,0,30,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lfs f13,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82BB6898:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r31.u32);
	// sth r11,1094(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1094, ctx.r11.u16);
loc_82BB68A4:
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

__attribute__((alias("__imp__sub_82BB68B8"))) PPC_WEAK_FUNC(sub_82BB68B8);
PPC_FUNC_IMPL(__imp__sub_82BB68B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bb68dc
	if (!ctx.cr6.eq) goto loc_82BB68DC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BB68DC:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,1092(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1092, ctx.r11.u16);
	// bl 0x82bb6800
	ctx.lr = 0x82BB68EC;
	sub_82BB6800(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6900"))) PPC_WEAK_FUNC(sub_82BB6900);
PPC_FUNC_IMPL(__imp__sub_82BB6900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lhz r11,1094(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1094);
	// lhz r10,1092(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1092);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82bb6940
	if (!ctx.cr6.eq) goto loc_82BB6940;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82BB6940:
	// lwz r5,1088(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// addi r3,r5,68
	ctx.r3.s64 = ctx.r5.s64 + 68;
	// bl 0x82747e68
	ctx.lr = 0x82BB694C;
	sub_82747E68(ctx, base);
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lhz r11,1094(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1094);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r3,1094(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1094, ctx.r3.u16);
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

__attribute__((alias("__imp__sub_82BB6988"))) PPC_WEAK_FUNC(sub_82BB6988);
PPC_FUNC_IMPL(__imp__sub_82BB6988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB6990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bb69ac
	if (!ctx.cr6.eq) goto loc_82BB69AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB69AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82bb6a04
	if (!ctx.cr6.eq) goto loc_82BB6A04;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bb6a18
	if (!ctx.cr6.gt) goto loc_82BB6A18;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BB69D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82bb6988
	ctx.lr = 0x82BB69DC;
	sub_82BB6988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb6a14
	if (!ctx.cr6.eq) goto loc_82BB6A14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bb69d0
	if (ctx.cr6.lt) goto loc_82BB69D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB6A04:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6a18
	if (ctx.cr6.eq) goto loc_82BB6A18;
loc_82BB6A14:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BB6A18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6A24"))) PPC_WEAK_FUNC(sub_82BB6A24);
PPC_FUNC_IMPL(__imp__sub_82BB6A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6A28"))) PPC_WEAK_FUNC(sub_82BB6A28);
PPC_FUNC_IMPL(__imp__sub_82BB6A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6a58
	if (ctx.cr6.eq) goto loc_82BB6A58;
loc_82BB6A34:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bb6a58
	if (ctx.cr6.eq) goto loc_82BB6A58;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82bb6a60
	if (ctx.cr6.eq) goto loc_82BB6A60;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb6a34
	if (!ctx.cr6.eq) goto loc_82BB6A34;
loc_82BB6A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB6A60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6A68"))) PPC_WEAK_FUNC(sub_82BB6A68);
PPC_FUNC_IMPL(__imp__sub_82BB6A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB6A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ba8
	if (ctx.cr6.eq) goto loc_82BB6BA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82bb6ae0
	if (!ctx.cr6.eq) goto loc_82BB6AE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bb6ba8
	if (!ctx.cr6.lt) goto loc_82BB6BA8;
loc_82BB6AA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb6acc
	if (ctx.cr6.eq) goto loc_82BB6ACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82bb6acc
	if (ctx.cr6.eq) goto loc_82BB6ACC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bb6a68
	ctx.lr = 0x82BB6ACC;
	sub_82BB6A68(ctx, base);
loc_82BB6ACC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bb6aa8
	if (ctx.cr6.lt) goto loc_82BB6AA8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB6AE0:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82bb6ba8
	if (!ctx.cr6.eq) goto loc_82BB6BA8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ba8
	if (ctx.cr6.eq) goto loc_82BB6BA8;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r28,r11,5512
	ctx.r28.s64 = ctx.r11.s64 + 5512;
loc_82BB6B00:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb6b84
	if (!ctx.cr6.eq) goto loc_82BB6B84;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bb6b9c
	if (ctx.cr6.eq) goto loc_82BB6B9C;
	// stbx r30,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u8);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82bb6b9c
	if (!ctx.cr6.eq) goto loc_82BB6B9C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb6b9c
	if (ctx.cr6.eq) goto loc_82BB6B9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6b9c
	if (ctx.cr6.eq) goto loc_82BB6B9C;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb6b9c
	if (ctx.cr6.eq) goto loc_82BB6B9C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bb6b9c
	if (ctx.cr6.eq) goto loc_82BB6B9C;
	// stbx r30,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u8);
	// b 0x82bb6b9c
	goto loc_82BB6B9C;
loc_82BB6B84:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB6B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB6B9C:
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bb6b00
	if (!ctx.cr6.eq) goto loc_82BB6B00;
loc_82BB6BA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6BB0"))) PPC_WEAK_FUNC(sub_82BB6BB0);
PPC_FUNC_IMPL(__imp__sub_82BB6BB0) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6BC8"))) PPC_WEAK_FUNC(sub_82BB6BC8);
PPC_FUNC_IMPL(__imp__sub_82BB6BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6BD0"))) PPC_WEAK_FUNC(sub_82BB6BD0);
PPC_FUNC_IMPL(__imp__sub_82BB6BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB6BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bb6bf4
	if (!ctx.cr6.eq) goto loc_82BB6BF4;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BB6BF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82bb6c7c
	if (!ctx.cr6.eq) goto loc_82BB6C7C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bb6c7c
	if (ctx.cr6.eq) goto loc_82BB6C7C;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,52(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// li r29,-1
	ctx.r29.s64 = -1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82bb6c68
	if (!ctx.cr6.lt) goto loc_82BB6C68;
loc_82BB6C2C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6c50
	if (ctx.cr6.eq) goto loc_82BB6C50;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB6C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bb6c54
	goto loc_82BB6C54;
loc_82BB6C50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BB6C54:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// and r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 & ctx.r29.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82bb6c2c
	if (ctx.cr6.lt) goto loc_82BB6C2C;
loc_82BB6C68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r3,r30,0,26,21
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFFFFFFFFFFFC3F) | (ctx.r3.u64 & 0x3C0);
	// rlwimi r3,r30,0,23,24
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x180) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFE7F);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BB6C7C:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB6C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6C98"))) PPC_WEAK_FUNC(sub_82BB6C98);
PPC_FUNC_IMPL(__imp__sub_82BB6C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82bb6cdc
	if (!ctx.cr6.eq) goto loc_82BB6CDC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82bb6cc4
	if (ctx.cr6.gt) goto loc_82BB6CC4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82BB6CC4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bb6cd0
	if (ctx.cr6.gt) goto loc_82BB6CD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BB6CD0:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82BB6CDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82BB6CFC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82bb6cfc
	if (!ctx.cr6.eq) goto loc_82BB6CFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6D24"))) PPC_WEAK_FUNC(sub_82BB6D24);
PPC_FUNC_IMPL(__imp__sub_82BB6D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6D28"))) PPC_WEAK_FUNC(sub_82BB6D28);
PPC_FUNC_IMPL(__imp__sub_82BB6D28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82bb6d38
	if (!ctx.cr6.eq) goto loc_82BB6D38;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
loc_82BB6D38:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bb6d4c
	if (!ctx.cr6.gt) goto loc_82BB6D4C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82BB6D4C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb6d68
	if (!ctx.cr6.eq) goto loc_82BB6D68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB6D68:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BB6D84"))) PPC_WEAK_FUNC(sub_82BB6D84);
PPC_FUNC_IMPL(__imp__sub_82BB6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6D88"))) PPC_WEAK_FUNC(sub_82BB6D88);
PPC_FUNC_IMPL(__imp__sub_82BB6D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB6D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120040
	ctx.lr = 0x82BB6DA4;
	sub_82120040(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB6DB4;
	sub_82218A80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// addi r7,r11,108
	ctx.r7.s64 = ctx.r11.s64 + 108;
	// addi r6,r11,132
	ctx.r6.s64 = ctx.r11.s64 + 132;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x827e6900
	ctx.lr = 0x82BB6E18;
	sub_827E6900(ctx, base);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb7034
	if (ctx.cr6.eq) goto loc_82BB7034;
loc_82BB6E24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821249a8
	ctx.lr = 0x82BB6E2C;
	sub_821249A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6b90
	ctx.lr = 0x82BB6E38;
	sub_827E6B90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ecc
	if (ctx.cr6.eq) goto loc_82BB6ECC;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ecc
	if (ctx.cr6.eq) goto loc_82BB6ECC;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ecc
	if (ctx.cr6.eq) goto loc_82BB6ECC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ecc
	if (ctx.cr6.eq) goto loc_82BB6ECC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ecc
	if (ctx.cr6.eq) goto loc_82BB6ECC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ecc
	if (ctx.cr6.eq) goto loc_82BB6ECC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82bb6ea8
	if (ctx.cr6.eq) goto loc_82BB6EA8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ecc
	if (ctx.cr6.eq) goto loc_82BB6ECC;
loc_82BB6EA8:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB6ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB6ECC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ff8
	if (ctx.cr6.eq) goto loc_82BB6FF8;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ff8
	if (ctx.cr6.eq) goto loc_82BB6FF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ff8
	if (ctx.cr6.eq) goto loc_82BB6FF8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6ff8
	if (ctx.cr6.eq) goto loc_82BB6FF8;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,16(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82bb6ff8
	if (ctx.cr6.gt) goto loc_82BB6FF8;
loc_82BB6F28:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fec
	if (ctx.cr6.eq) goto loc_82BB6FEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fbc
	if (ctx.cr6.eq) goto loc_82BB6FBC;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fbc
	if (ctx.cr6.eq) goto loc_82BB6FBC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fbc
	if (ctx.cr6.eq) goto loc_82BB6FBC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fbc
	if (ctx.cr6.eq) goto loc_82BB6FBC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fbc
	if (ctx.cr6.eq) goto loc_82BB6FBC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fbc
	if (ctx.cr6.eq) goto loc_82BB6FBC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fbc
	if (ctx.cr6.eq) goto loc_82BB6FBC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB6FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB6FBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fec
	if (ctx.cr6.eq) goto loc_82BB6FEC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fec
	if (ctx.cr6.eq) goto loc_82BB6FEC;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb6fec
	if (ctx.cr6.eq) goto loc_82BB6FEC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x827e51e8
	ctx.lr = 0x82BB6FEC;
	sub_827E51E8(ctx, base);
loc_82BB6FEC:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82bb6f28
	if (!ctx.cr6.gt) goto loc_82BB6F28;
loc_82BB6FF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb7028
	if (ctx.cr6.eq) goto loc_82BB7028;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7028
	if (ctx.cr6.eq) goto loc_82BB7028;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb7028
	if (ctx.cr6.eq) goto loc_82BB7028;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x827e51e8
	ctx.lr = 0x82BB7028;
	sub_827E51E8(ctx, base);
loc_82BB7028:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb6e24
	if (!ctx.cr6.eq) goto loc_82BB6E24;
loc_82BB7034:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827eb058
	ctx.lr = 0x82BB703C;
	sub_827EB058(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7064
	if (ctx.cr6.eq) goto loc_82BB7064;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BB7050:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// stbx r10,r9,r27
	PPC_STORE_U8(ctx.r9.u32 + ctx.r27.u32, ctx.r10.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb7050
	if (!ctx.cr6.eq) goto loc_82BB7050;
loc_82BB7064:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7200
	ctx.lr = 0x82BB706C;
	sub_827E7200(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7078"))) PPC_WEAK_FUNC(sub_82BB7078);
PPC_FUNC_IMPL(__imp__sub_82BB7078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB7080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bb7098
	if (!ctx.cr6.eq) goto loc_82BB7098;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB7098:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82bb710c
	if (!ctx.cr6.eq) goto loc_82BB710C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b999e0
	ctx.lr = 0x82BB70B0;
	sub_82B999E0(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82b99af8
	ctx.lr = 0x82BB70BC;
	sub_82B99AF8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bb7100
	if (!ctx.cr6.gt) goto loc_82BB7100;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BB70D8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82bb7078
	ctx.lr = 0x82BB70E4;
	sub_82BB7078(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bb70d8
	if (ctx.cr6.lt) goto loc_82BB70D8;
loc_82BB7100:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BB710C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b98da0
	ctx.lr = 0x82BB7114;
	sub_82B98DA0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7128"))) PPC_WEAK_FUNC(sub_82BB7128);
PPC_FUNC_IMPL(__imp__sub_82BB7128) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb71a4
	if (ctx.cr6.eq) goto loc_82BB71A4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb71a4
	if (ctx.cr6.eq) goto loc_82BB71A4;
	// bl 0x82bb7078
	ctx.lr = 0x82BB7168;
	sub_82BB7078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB717C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB7198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
loc_82BB71A4:
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

__attribute__((alias("__imp__sub_82BB71BC"))) PPC_WEAK_FUNC(sub_82BB71BC);
PPC_FUNC_IMPL(__imp__sub_82BB71BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB71C0"))) PPC_WEAK_FUNC(sub_82BB71C0);
PPC_FUNC_IMPL(__imp__sub_82BB71C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BB71C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb72c8
	if (ctx.cr6.eq) goto loc_82BB72C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb71f0
	if (ctx.cr6.eq) goto loc_82BB71F0;
	// bl 0x82bb7128
	ctx.lr = 0x82BB71E8;
	sub_82BB7128(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BB71F0:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb72c8
	if (ctx.cr6.eq) goto loc_82BB72C8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb72c8
	if (ctx.cr6.eq) goto loc_82BB72C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,16(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r26,r11,-8
	ctx.r26.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82bb72c8
	if (ctx.cr6.gt) goto loc_82BB72C8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BB7230:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb72bc
	if (ctx.cr6.eq) goto loc_82BB72BC;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb72bc
	if (ctx.cr6.eq) goto loc_82BB72BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb72bc
	if (ctx.cr6.eq) goto loc_82BB72BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb7290
	if (ctx.cr6.eq) goto loc_82BB7290;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82BB7274:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb72d0
	if (ctx.cr6.eq) goto loc_82BB72D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82bb7274
	if (ctx.cr6.lt) goto loc_82BB7274;
loc_82BB7290:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r9,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82bb7128
	ctx.lr = 0x82BB72A0;
	sub_82BB7128(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r7,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82BB72BC:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82bb7230
	if (!ctx.cr6.gt) goto loc_82BB7230;
loc_82BB72C8:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BB72D0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb7290
	if (ctx.cr6.eq) goto loc_82BB7290;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB72F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB7314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// b 0x82bb72bc
	goto loc_82BB72BC;
}

__attribute__((alias("__imp__sub_82BB7324"))) PPC_WEAK_FUNC(sub_82BB7324);
PPC_FUNC_IMPL(__imp__sub_82BB7324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7328"))) PPC_WEAK_FUNC(sub_82BB7328);
PPC_FUNC_IMPL(__imp__sub_82BB7328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB7330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r28,-32030
	ctx.r28.s64 = -2099118080;
	// addi r3,r28,26480
	ctx.r3.s64 = ctx.r28.s64 + 26480;
	// sth r11,26512(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26512, ctx.r11.u16);
	// bl 0x82b98aa0
	ctx.lr = 0x82BB734C;
	sub_82B98AA0(ctx, base);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// addi r11,r9,10472
	ctx.r11.s64 = ctx.r9.s64 + 10472;
	// lis r9,-32070
	ctx.r9.s64 = -2101739520;
	// lis r8,-32070
	ctx.r8.s64 = -2101739520;
	// addi r10,r10,-25752
	ctx.r10.s64 = ctx.r10.s64 + -25752;
	// addi r9,r9,-25648
	ctx.r9.s64 = ctx.r9.s64 + -25648;
	// addi r8,r8,-26152
	ctx.r8.s64 = ctx.r8.s64 + -26152;
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// lis r3,-32070
	ctx.r3.s64 = -2101739520;
	// stw r9,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r9.u32);
	// lis r31,-32069
	ctx.r31.s64 = -2101673984;
	// stw r8,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r8.u32);
	// lis r30,-32070
	ctx.r30.s64 = -2101739520;
	// addi r10,r3,-26056
	ctx.r10.s64 = ctx.r3.s64 + -26056;
	// addi r9,r31,27944
	ctx.r9.s64 = ctx.r31.s64 + 27944;
	// addi r8,r30,-26264
	ctx.r8.s64 = ctx.r30.s64 + -26264;
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lis r4,-32070
	ctx.r4.s64 = -2101739520;
	// stw r9,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r9.u32);
	// lis r5,-32070
	ctx.r5.s64 = -2101739520;
	// stw r8,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r8.u32);
	// lis r29,-32070
	ctx.r29.s64 = -2101739520;
	// addi r9,r4,-28952
	ctx.r9.s64 = ctx.r4.s64 + -28952;
	// addi r8,r5,-29456
	ctx.r8.s64 = ctx.r5.s64 + -29456;
	// addi r10,r29,-28960
	ctx.r10.s64 = ctx.r29.s64 + -28960;
	// stw r9,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r9.u32);
	// lis r6,-32070
	ctx.r6.s64 = -2101739520;
	// stw r8,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r8.u32);
	// lis r7,-32069
	ctx.r7.s64 = -2101673984;
	// stw r10,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
	// addi r10,r6,-26464
	ctx.r10.s64 = ctx.r6.s64 + -26464;
	// addi r9,r7,27592
	ctx.r9.s64 = ctx.r7.s64 + 27592;
	// addi r8,r11,220
	ctx.r8.s64 = ctx.r11.s64 + 220;
	// stw r10,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r10.u32);
	// stw r9,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// stw r8,26480(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26480, ctx.r8.u32);
	// bl 0x82b98ee0
	ctx.lr = 0x82BB73E4;
	sub_82B98EE0(ctx, base);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r11,12748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12748, ctx.r11.u32);
	// bl 0x82120040
	ctx.lr = 0x82BB73FC;
	sub_82120040(ctx, base);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,12752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12752, ctx.r31.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BB7414;
	sub_82218A80(ctx, base);
	// lwz r11,12748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12748);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,676
	ctx.r3.s64 = 676;
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// bl 0x82120040
	ctx.lr = 0x82BB7428;
	sub_82120040(ctx, base);
	// lwz r11,12748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12748);
	// lwz r10,12752(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12752);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,72(r7)
	PPC_STORE_U32(ctx.r7.u32 + 72, ctx.r3.u32);
	// stw r8,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7448"))) PPC_WEAK_FUNC(sub_82BB7448);
PPC_FUNC_IMPL(__imp__sub_82BB7448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,12744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12744, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB7454"))) PPC_WEAK_FUNC(sub_82BB7454);
PPC_FUNC_IMPL(__imp__sub_82BB7454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7458"))) PPC_WEAK_FUNC(sub_82BB7458);
PPC_FUNC_IMPL(__imp__sub_82BB7458) {
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
	// lwz r31,12740(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12740);
	// cmplwi cr6,r31,1000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1000, ctx.xer);
	// bge cr6,0x82bb74d0
	if (!ctx.cr6.lt) goto loc_82BB74D0;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r11,r11,-12952
	ctx.r11.s64 = ctx.r11.s64 + -12952;
	// mulli r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 * 84;
	// lwz r9,12728(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12728);
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r5,68
	ctx.r5.s64 = 68;
	// stwx r3,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,212(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// stwx r4,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,204(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r4,2192(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2192);
	// bl 0x82219130
	ctx.lr = 0x82BB74C8;
	sub_82219130(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,12740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12740, ctx.r11.u32);
loc_82BB74D0:
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

__attribute__((alias("__imp__sub_82BB74E8"))) PPC_WEAK_FUNC(sub_82BB74E8);
PPC_FUNC_IMPL(__imp__sub_82BB74E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lfs f0,-19784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19784);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82bb7508
	if (!ctx.cr6.lt) goto loc_82BB7508;
	// lfs f1,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82BB7508:
	// fdivs f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f13,-4476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB7524"))) PPC_WEAK_FUNC(sub_82BB7524);
PPC_FUNC_IMPL(__imp__sub_82BB7524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7528"))) PPC_WEAK_FUNC(sub_82BB7528);
PPC_FUNC_IMPL(__imp__sub_82BB7528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb7578
	if (ctx.cr6.eq) goto loc_82BB7578;
loc_82BB7538:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7578
	if (ctx.cr6.eq) goto loc_82BB7578;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7578
	if (ctx.cr6.eq) goto loc_82BB7578;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7578
	if (ctx.cr6.eq) goto loc_82BB7578;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bb7588
	if (ctx.cr6.eq) goto loc_82BB7588;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb7538
	if (!ctx.cr6.eq) goto loc_82BB7538;
loc_82BB7578:
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82BB7588:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB7590"))) PPC_WEAK_FUNC(sub_82BB7590);
PPC_FUNC_IMPL(__imp__sub_82BB7590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r11,2272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB75B0"))) PPC_WEAK_FUNC(sub_82BB75B0);
PPC_FUNC_IMPL(__imp__sub_82BB75B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,12736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r11,r11,26608
	ctx.r11.s64 = ctx.r11.s64 + 26608;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f13,-30700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30700);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-30940(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// beq 0x82bb7638
	if (ctx.cr0.eq) goto loc_82BB7638;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f12,-4012(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4012);
	ctx.f12.f64 = double(temp.f32);
loc_82BB7600:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// fmuls f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,-16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb7634
	if (ctx.cr6.eq) goto loc_82BB7634;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// bne cr6,0x82bb7600
	if (!ctx.cr6.eq) goto loc_82BB7600;
loc_82BB7634:
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
loc_82BB7638:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB764C"))) PPC_WEAK_FUNC(sub_82BB764C);
PPC_FUNC_IMPL(__imp__sub_82BB764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7650"))) PPC_WEAK_FUNC(sub_82BB7650);
PPC_FUNC_IMPL(__imp__sub_82BB7650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r8,12740(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12740);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r9,r10,-12952
	ctx.r9.s64 = ctx.r10.s64 + -12952;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lfs f13,-4432(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4700(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4700);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82bb7794
	if (ctx.cr6.lt) goto loc_82BB7794;
	// mulli r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 * 84;
	// addi r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 + 88;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BB7690:
	// lwz r11,-84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82bb76cc
	if (!ctx.cr6.gt) goto loc_82BB76CC;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bb76bc
	if (ctx.cr6.eq) goto loc_82BB76BC;
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82bb76c0
	goto loc_82BB76C0;
loc_82BB76BC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB76C0:
	// lfs f11,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82BB76CC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82bb7708
	if (!ctx.cr6.gt) goto loc_82BB7708;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bb76f8
	if (ctx.cr6.eq) goto loc_82BB76F8;
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82bb76fc
	goto loc_82BB76FC;
loc_82BB76F8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB76FC:
	// lfs f11,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82bb77f8
	if (!ctx.cr6.gt) goto loc_82BB77F8;
loc_82BB7708:
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82bb7744
	if (!ctx.cr6.gt) goto loc_82BB7744;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bb7734
	if (ctx.cr6.eq) goto loc_82BB7734;
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82bb7738
	goto loc_82BB7738;
loc_82BB7734:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB7738:
	// lfs f11,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82bb7800
	if (!ctx.cr6.gt) goto loc_82BB7800;
loc_82BB7744:
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82bb7780
	if (!ctx.cr6.gt) goto loc_82BB7780;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bb7770
	if (ctx.cr6.eq) goto loc_82BB7770;
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82bb7774
	goto loc_82BB7774;
loc_82BB7770:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB7774:
	// lfs f11,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82bb7808
	if (!ctx.cr6.gt) goto loc_82BB7808;
loc_82BB7780:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r8,-3
	ctx.r11.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb7690
	if (ctx.cr6.lt) goto loc_82BB7690;
loc_82BB7794:
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 * 84;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BB77A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82bb77e4
	if (!ctx.cr6.gt) goto loc_82BB77E4;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r7,r9,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb77d4
	if (ctx.cr6.eq) goto loc_82BB77D4;
	// lfs f0,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82bb77d8
	goto loc_82BB77D8;
loc_82BB77D4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB77D8:
	// lfs f11,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82BB77E4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bb77a8
	if (ctx.cr6.lt) goto loc_82BB77A8;
	// blr 
	return;
loc_82BB77F8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_82BB7800:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_82BB7808:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB7810"))) PPC_WEAK_FUNC(sub_82BB7810);
PPC_FUNC_IMPL(__imp__sub_82BB7810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB7818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// lwz r11,2272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7838
	if (ctx.cr6.eq) goto loc_82BB7838;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_82BB7838:
	// lwz r31,2272(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb785c
	if (ctx.cr6.eq) goto loc_82BB785C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x82BB784C;
	sub_82120A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BB7854;
	sub_82120A70(ctx, base);
	// lwz r11,12728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// stw r29,2272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2272, ctx.r29.u32);
loc_82BB785C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7864"))) PPC_WEAK_FUNC(sub_82BB7864);
PPC_FUNC_IMPL(__imp__sub_82BB7864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7868"))) PPC_WEAK_FUNC(sub_82BB7868);
PPC_FUNC_IMPL(__imp__sub_82BB7868) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82120040
	ctx.lr = 0x82BB7884;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3584
	ctx.r3.s64 = 3584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82120040
	ctx.lr = 0x82BB78A4;
	sub_82120040(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82218a80
	ctx.lr = 0x82BB78B8;
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

__attribute__((alias("__imp__sub_82BB78D0"))) PPC_WEAK_FUNC(sub_82BB78D0);
PPC_FUNC_IMPL(__imp__sub_82BB78D0) {
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
	// lis r7,-32030
	ctx.r7.s64 = -2099118080;
	// lis r6,-32030
	ctx.r6.s64 = -2099118080;
	// addi r31,r7,26512
	ctx.r31.s64 = ctx.r7.s64 + 26512;
	// addi r4,r6,26480
	ctx.r4.s64 = ctx.r6.s64 + 26480;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,16896
	ctx.r8.s64 = 16896;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// sth r9,26512(r7)
	PPC_STORE_U16(ctx.r7.u32 + 26512, ctx.r9.u16);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82baecd8
	ctx.lr = 0x82BB7918;
	sub_82BAECD8(ctx, base);
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

__attribute__((alias("__imp__sub_82BB792C"))) PPC_WEAK_FUNC(sub_82BB792C);
PPC_FUNC_IMPL(__imp__sub_82BB792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7930"))) PPC_WEAK_FUNC(sub_82BB7930);
PPC_FUNC_IMPL(__imp__sub_82BB7930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BB7938;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mulli r10,r11,168
	ctx.r10.s64 = ctx.r11.s64 * 168;
	// lwz r28,12748(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12748);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwimi r9,r8,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r30,12728(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12728);
	// addi r4,r30,2284
	ctx.r4.s64 = ctx.r30.s64 + 2284;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// sth r5,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r5.u16);
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x827472f0
	ctx.lr = 0x82BB79C8;
	sub_827472F0(ctx, base);
	// addi r4,r30,2352
	ctx.r4.s64 = ctx.r30.s64 + 2352;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x827472f0
	ctx.lr = 0x82BB79D4;
	sub_827472F0(ctx, base);
	// not r10,r26
	ctx.r10.u64 = ~ctx.r26.u64;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r8,268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bne cr6,0x82bb7ae8
	if (!ctx.cr6.eq) goto loc_82BB7AE8;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28812
	ctx.r9.s64 = ctx.r10.s64 + 28812;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// lwz r8,224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,4(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bne cr6,0x82bb7a68
	if (!ctx.cr6.eq) goto loc_82BB7A68;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb7ae8
	if (ctx.cr6.eq) goto loc_82BB7AE8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82baecd8
	ctx.lr = 0x82BB7A60;
	sub_82BAECD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BB7A68:
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82bb7ae8
	if (!ctx.cr6.lt) goto loc_82BB7AE8;
loc_82BB7A88:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82bb7aa0
	if (!ctx.cr6.gt) goto loc_82BB7AA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82BB7AA0:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7ad8
	if (ctx.cr6.eq) goto loc_82BB7AD8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb7ad8
	if (ctx.cr6.eq) goto loc_82BB7AD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82baecd8
	ctx.lr = 0x82BB7AD4;
	sub_82BAECD8(ctx, base);
	// lwz r28,12748(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12748);
loc_82BB7AD8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82bb7a88
	if (ctx.cr6.lt) goto loc_82BB7A88;
loc_82BB7AE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7AF0"))) PPC_WEAK_FUNC(sub_82BB7AF0);
PPC_FUNC_IMPL(__imp__sub_82BB7AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB7AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwinm r7,r11,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r6,12728(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r8,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,-3548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3548);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r8,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lwz r31,2272(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2272);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f0,-30880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30880);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// fmadds f9,f13,f1,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fnmsubs f8,f6,f9,f0
	ctx.f8.f64 = double(float(-(ctx.f6.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fnmsubs f7,f12,f9,f0
	ctx.f7.f64 = double(float(-(ctx.f12.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fnmsubs f6,f11,f9,f0
	ctx.f6.f64 = double(float(-(ctx.f11.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fnmsubs f5,f10,f9,f0
	ctx.f5.f64 = double(float(-(ctx.f10.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fctidz f4,f8
	ctx.f4.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// fctidz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// fctidz f2,f6
	ctx.f2.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lbz r5,87(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fctidz f1,f5
	ctx.f1.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// bne cr6,0x82bb7c08
	if (!ctx.cr6.eq) goto loc_82BB7C08;
	// bl 0x82bb7868
	ctx.lr = 0x82BB7C04;
	sub_82BB7868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82BB7C08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb7c48
	if (!ctx.cr6.eq) goto loc_82BB7C48;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mulli r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 * 112;
	// bl 0x82121828
	ctx.lr = 0x82BB7C2C;
	sub_82121828(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,3584
	ctx.r5.s64 = 3584;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB7C48;
	sub_82218A80(ctx, base);
loc_82BB7C48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb7c68
	if (!ctx.cr6.eq) goto loc_82BB7C68;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bb7c84
	if (!ctx.cr6.eq) goto loc_82BB7C84;
loc_82BB7C68:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,12736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12736);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r9.u32);
	// stw r11,12736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12736, ctx.r11.u32);
	// bl 0x82bb75b0
	ctx.lr = 0x82BB7C84;
	sub_82BB75B0(ctx, base);
loc_82BB7C84:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82219130
	ctx.lr = 0x82BB7CA0;
	sub_82219130(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12728(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r31,2272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2272, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7CBC"))) PPC_WEAK_FUNC(sub_82BB7CBC);
PPC_FUNC_IMPL(__imp__sub_82BB7CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7CC0"))) PPC_WEAK_FUNC(sub_82BB7CC0);
PPC_FUNC_IMPL(__imp__sub_82BB7CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82BB7CC8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad00
	ctx.lr = 0x82BB7CD0;
	__savefpr_22(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r30,12728(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,224(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// stw r8,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r8.u32);
	// lfs f12,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// lfs f2,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f9,f29,f9
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f9.f64));
	// fmadds f10,f8,f13,f2
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f8,f7,f13,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f7,f6,f13,f11
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f6,f3,f9,f10
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f5,f9,f5,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f4,f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmuls f30,f6,f1
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f29,f5,f31
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f28,f4,f28
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// bl 0x82747da0
	ctx.lr = 0x82BB7D9C;
	sub_82747DA0(ctx, base);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// rlwinm r3,r4,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f31,29760(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82bb7dd8
	if (ctx.cr6.eq) goto loc_82BB7DD8;
	// lfs f0,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f11,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fdivs f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f10,204(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f9,220(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
loc_82BB7DD8:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82747aa8
	ctx.lr = 0x82BB7DE8;
	sub_82747AA8(ctx, base);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82747aa8
	ctx.lr = 0x82BB7DF8;
	sub_82747AA8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82747aa8
	ctx.lr = 0x82BB7E08;
	sub_82747AA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// fneg f25,f0
	ctx.f25.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f8,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f1,f8
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f0,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f12,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// lfs f7,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-4012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f4,f28,f31
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// lfs f5,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f28,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f28.f64 = double(temp.f32);
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lfs f24,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f24.f64 = double(temp.f32);
	// fadds f3,f30,f0
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// fmuls f6,f28,f5
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f23,f13,f30
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f27,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f22,f12,f29
	ctx.f22.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f5,f24,f5
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f5.f64));
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// not r26,r8
	ctx.r26.u64 = ~ctx.r8.u64;
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f30,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r10,-4476
	ctx.r10.s64 = ctx.r10.s64 + -4476;
	// lfs f29,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f1,f1,f25
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f25.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f30,f30,f25
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f29,f29,f25
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f28,f23,f0
	ctx.f28.f64 = double(float(ctx.f23.f64 + ctx.f0.f64));
	// fadds f0,f22,f0
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f0.f64));
	// beq cr6,0x82bb7ee4
	if (ctx.cr6.eq) goto loc_82BB7EE4;
	// lfs f24,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f24.f64 = double(temp.f32);
	// b 0x82bb7ee8
	goto loc_82BB7EE8;
loc_82BB7EE4:
	// lfs f24,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f24.f64 = double(temp.f32);
loc_82BB7EE8:
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lfs f25,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f25.f64 = double(temp.f32);
	// lfs f23,-19784(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19784);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f23,f24,f23
	ctx.f23.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// fcmpu cr6,f25,f23
	ctx.cr6.compare(ctx.f25.f64, ctx.f23.f64);
	// bge cr6,0x82bb7f08
	if (!ctx.cr6.lt) goto loc_82BB7F08;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// b 0x82bb7f18
	goto loc_82BB7F18;
loc_82BB7F08:
	// fdivs f24,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f25.f64 / ctx.f24.f64));
	// lfs f25,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f24,f31,f24
	ctx.f24.f64 = double(float(ctx.f31.f64 - ctx.f24.f64));
	// fmuls f25,f24,f25
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f25.f64));
loc_82BB7F18:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lfs f24,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f24.f64 = double(temp.f32);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// fmuls f25,f24,f25
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f25.f64));
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bge cr6,0x82bb7f68
	if (!ctx.cr6.lt) goto loc_82BB7F68;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f24,-30252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30252);
	ctx.f24.f64 = double(temp.f32);
	// fcmpu cr6,f27,f24
	ctx.cr6.compare(ctx.f27.f64, ctx.f24.f64);
	// ble cr6,0x82bb7f68
	if (!ctx.cr6.gt) goto loc_82BB7F68;
	// fmuls f23,f27,f26
	ctx.f23.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// ori r28,r10,32768
	ctx.r28.u64 = ctx.r10.u64 | 32768;
	// lfs f24,-30772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30772);
	ctx.f24.f64 = double(temp.f32);
	// fcmpu cr6,f23,f24
	ctx.cr6.compare(ctx.f23.f64, ctx.f24.f64);
	// ble cr6,0x82bb7f60
	if (!ctx.cr6.gt) goto loc_82BB7F60;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82bb7f70
	goto loc_82BB7F70;
loc_82BB7F60:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82bb7f70
	goto loc_82BB7F70;
loc_82BB7F68:
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BB7F70:
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f1,252(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fneg f5,f30
	ctx.f5.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f7,264(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fneg f1,f29
	ctx.f1.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// stfs f9,256(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f8,272(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stfs f7,248(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f6,268(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lwz r21,160(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,280(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lwz r20,132(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f31,284(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r3,r30,2284
	ctx.r3.s64 = ctx.r30.s64 + 2284;
	// stfs f31,288(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f11,360(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f28,352(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// lwz r18,252(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stfs f2,228(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lwz r19,264(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// lwz r17,256(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r16,272(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lwz r15,248(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r14,268(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// stw r19,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r19.u32);
	// stw r18,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r18.u32);
	// stw r17,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r17.u32);
	// stw r16,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r16.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lfs f11,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r9.u32);
	// stw r8,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r8.u32);
	// stw r15,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r15.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// lfs f10,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// stw r7,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// lfs f9,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// lfs f8,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lfs f7,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f7.f64 = double(temp.f32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// lfs f6,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f6.f64 = double(temp.f32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stfs f8,320(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f7,336(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f6,340(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f11,312(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f10,328(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f9,308(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lfs f5,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f3,208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f2,212(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f4,200(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x82219130
	ctx.lr = 0x82BB8114;
	sub_82219130(ctx, base);
	// addi r3,r30,2352
	ctx.r3.s64 = ctx.r30.s64 + 2352;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82219130
	ctx.lr = 0x82BB8124;
	sub_82219130(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// rlwinm r11,r8,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82bb7930
	ctx.lr = 0x82BB8168;
	sub_82BB7930(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad4c
	ctx.lr = 0x82BB8174;
	__restfpr_22(ctx, base);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB8178"))) PPC_WEAK_FUNC(sub_82BB8178);
PPC_FUNC_IMPL(__imp__sub_82BB8178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BB8180;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8221ad18
	ctx.lr = 0x82BB8188;
	__savefpr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,12728(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12728);
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BB81AC:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82bb81ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BB81AC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BB81CC:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82bb81cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BB81CC;
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r6,r9,26600
	ctx.r6.s64 = ctx.r9.s64 + 26600;
	// lfs f12,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r5,r8,1
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lwz r10,26600(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26600);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f30,29760(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lfs f31,-4368(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4368);
	ctx.f31.f64 = double(temp.f32);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f0,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f13,-8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lwz r4,224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// lfs f2,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r28,r8,0,0,0
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f29.f64 = double(temp.f32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmadds f5,f5,f31,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmadds f7,f7,f31,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f28,f0,f5
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fsubs f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f5,292(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fsubs f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fadds f7,f28,f30
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// stfs f7,300(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fsubs f7,f13,f4
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// lfs f6,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fmadds f2,f10,f7,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f1,f9,f7,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f8,f3,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f13,f29,f3,f1
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82747da0
	ctx.lr = 0x82BB8308;
	sub_82747DA0(ctx, base);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,208(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f5,224(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f4,228(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f3,232(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f2,240(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f1,244(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// beq cr6,0x82bb8390
	if (ctx.cr6.eq) goto loc_82BB8390;
	// lfs f0,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f11,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// fdivs f9,f30,f11
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f10,236(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f9,252(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// b 0x82bb839c
	goto loc_82BB839C;
loc_82BB8390:
	// stfs f30,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f30,236(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f30,252(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
loc_82BB839C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82747aa8
	ctx.lr = 0x82BB83AC;
	sub_82747AA8(ctx, base);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82747aa8
	ctx.lr = 0x82BB83BC;
	sub_82747AA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f4,f9
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r4,16896
	ctx.r4.s64 = 16896;
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB84D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fadds f3,f9,f2
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bge cr6,0x82bb84f8
	if (!ctx.cr6.lt) goto loc_82BB84F8;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// b 0x82bb8504
	goto loc_82BB8504;
loc_82BB84F8:
	// fcmpu cr6,f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f30.f64);
	// ble cr6,0x82bb8504
	if (!ctx.cr6.gt) goto loc_82BB8504;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
loc_82BB8504:
	// lfs f1,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB851C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB8530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// addi r31,r9,28812
	ctx.r31.s64 = ctx.r9.s64 + 28812;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,28784
	ctx.r10.u64 = ctx.r10.u64 | 28784;
	// li r5,16896
	ctx.r5.s64 = 16896;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82bb78d0
	ctx.lr = 0x82BB855C;
	sub_82BB78D0(ctx, base);
	// lwz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB857C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r3,628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB8594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r3,r30,284
	ctx.r3.s64 = ctx.r30.s64 + 284;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB85A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8221ad64
	ctx.lr = 0x82BB85B0;
	__restfpr_28(ctx, base);
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB85B4"))) PPC_WEAK_FUNC(sub_82BB85B4);
PPC_FUNC_IMPL(__imp__sub_82BB85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB85B8"))) PPC_WEAK_FUNC(sub_82BB85B8);
PPC_FUNC_IMPL(__imp__sub_82BB85B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB85C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,12728(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12728);
	// lwz r11,2272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb8874
	if (ctx.cr6.eq) goto loc_82BB8874;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb8874
	if (ctx.cr6.eq) goto loc_82BB8874;
	// lwz r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb8874
	if (ctx.cr6.eq) goto loc_82BB8874;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bb8874
	if (ctx.cr6.eq) goto loc_82BB8874;
loc_82BB8604:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r8,32(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rlwinm r11,r8,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb8868
	if (!ctx.cr6.eq) goto loc_82BB8868;
	// lwz r4,56(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82bb7528
	ctx.lr = 0x82BB8628;
	sub_82BB7528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb868c
	if (ctx.cr6.eq) goto loc_82BB868C;
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb8648
	if (!ctx.cr6.eq) goto loc_82BB8648;
	// lwz r11,192(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bb8678
	if (!ctx.cr6.eq) goto loc_82BB8678;
loc_82BB8648:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bge cr6,0x82bb8678
	if (!ctx.cr6.lt) goto loc_82BB8678;
	// lwz r4,3768(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bb8668
	if (!ctx.cr6.eq) goto loc_82BB8668;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BB8668:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb8178
	ctx.lr = 0x82BB8674;
	sub_82BB8178(ctx, base);
	// lwz r30,12728(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12728);
loc_82BB8678:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb8868
	if (!ctx.cr6.eq) goto loc_82BB8868;
loc_82BB868C:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb8868
	if (ctx.cr6.eq) goto loc_82BB8868;
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb8868
	if (!ctx.cr6.eq) goto loc_82BB8868;
	// rlwinm r11,r8,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb86cc
	if (!ctx.cr6.eq) goto loc_82BB86CC;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb8868
	if (!ctx.cr6.eq) goto loc_82BB8868;
loc_82BB86CC:
	// rlwinm r11,r8,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb86f0
	if (!ctx.cr6.eq) goto loc_82BB86F0;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb8868
	if (ctx.cr6.eq) goto loc_82BB8868;
loc_82BB86F0:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82bb8794
	if (ctx.cr6.eq) goto loc_82BB8794;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82bb8868
	if (ctx.cr6.gt) goto loc_82BB8868;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f10,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x82bb8868
	if (ctx.cr6.gt) goto loc_82BB8868;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x82bb8868
	if (ctx.cr6.lt) goto loc_82BB8868;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82bb8868
	if (ctx.cr6.lt) goto loc_82BB8868;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82bb8868
	if (ctx.cr6.lt) goto loc_82BB8868;
	// lfs f13,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82bb8868
	if (ctx.cr6.gt) goto loc_82BB8868;
	// b 0x82bb885c
	goto loc_82BB885C;
loc_82BB8794:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bb87d4
	if (!ctx.cr6.eq) goto loc_82BB87D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb87ac
	if (ctx.cr6.eq) goto loc_82BB87AC;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82bb87b0
	goto loc_82BB87B0;
loc_82BB87AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BB87B0:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827482b0
	ctx.lr = 0x82BB87BC;
	sub_827482B0(ctx, base);
	// addi r6,r31,76
	ctx.r6.s64 = ctx.r31.s64 + 76;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// lfs f1,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82124898
	ctx.lr = 0x82BB87D0;
	sub_82124898(ctx, base);
	// b 0x82bb8854
	goto loc_82BB8854;
loc_82BB87D4:
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// bne cr6,0x82bb8868
	if (!ctx.cr6.eq) goto loc_82BB8868;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb87ec
	if (ctx.cr6.eq) goto loc_82BB87EC;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82bb87f0
	goto loc_82BB87F0;
loc_82BB87EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BB87F0:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827482b0
	ctx.lr = 0x82BB87FC;
	sub_827482B0(ctx, base);
	// lfs f11,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f10,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x827e97a0
	ctx.lr = 0x82BB8854;
	sub_827E97A0(ctx, base);
loc_82BB8854:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb8868
	if (ctx.cr6.eq) goto loc_82BB8868;
loc_82BB885C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82bb7458
	ctx.lr = 0x82BB8868;
	sub_82BB7458(ctx, base);
loc_82BB8868:
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bb8604
	if (!ctx.cr6.eq) goto loc_82BB8604;
loc_82BB8874:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB887C"))) PPC_WEAK_FUNC(sub_82BB887C);
PPC_FUNC_IMPL(__imp__sub_82BB887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB8880"))) PPC_WEAK_FUNC(sub_82BB8880);
PPC_FUNC_IMPL(__imp__sub_82BB8880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82BB8888;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r19,-31942
	ctx.r19.s64 = -2093350912;
	// lwz r4,12740(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12740);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bb88bc
	if (!ctx.cr6.eq) goto loc_82BB88BC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,70
	ctx.r3.s64 = 70;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB88B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
loc_82BB88BC:
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28812
	ctx.r9.s64 = ctx.r10.s64 + 28812;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r25,516
	ctx.r25.s64 = 516;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bl 0x82bb7650
	ctx.lr = 0x82BB88DC;
	sub_82BB7650(ctx, base);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82bb8adc
	if (!ctx.cr6.lt) goto loc_82BB8ADC;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r18,7
	ctx.r18.s64 = 7;
	// lis r21,-31947
	ctx.r21.s64 = -2093678592;
	// addi r24,r10,8032
	ctx.r24.s64 = ctx.r10.s64 + 8032;
	// addi r30,r11,-12952
	ctx.r30.s64 = ctx.r11.s64 + -12952;
loc_82BB8908:
	// mulli r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 * 84;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82bb7650
	ctx.lr = 0x82BB8918;
	sub_82BB7650(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82bb8948
	if (!ctx.cr6.lt) goto loc_82BB8948;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82bb8948
	if (!ctx.cr6.lt) goto loc_82BB8948;
	// mulli r11,r26,84
	ctx.r11.s64 = ctx.r26.s64 * 84;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// beq cr6,0x82bb894c
	if (ctx.cr6.eq) goto loc_82BB894C;
loc_82BB8948:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BB894C:
	// lwzx r7,r31,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwz r11,12728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// addi r8,r30,80
	ctx.r8.s64 = ctx.r30.s64 + 80;
	// addi r6,r30,76
	ctx.r6.s64 = ctx.r30.s64 + 76;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r7,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r7.u32);
	// lwz r4,28(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r9.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r8,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r8.u32);
	// lwzx r7,r31,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r3,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r3.u32);
	// stw r7,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r7.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BB899C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r6,r31,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb89e4
	if (ctx.cr6.eq) goto loc_82BB89E4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,12728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lbz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 60);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82bb8a04
	goto loc_82BB8A04;
loc_82BB89E4:
	// lwz r11,5580(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5580);
	// lwz r10,12728(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82BB8A04:
	// bctrl 
	ctx.lr = 0x82BB8A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12744(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb8a30
	if (!ctx.cr6.eq) goto loc_82BB8A30;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb8a30
	if (!ctx.cr6.eq) goto loc_82BB8A30;
	// rlwimi r25,r18,16,12,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r18.u32, 16) & 0xF0000) | (ctx.r25.u64 & 0xFFFFFFFFFFF0FFFF);
	// b 0x82bb8a40
	goto loc_82BB8A40;
loc_82BB8A30:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// rlwimi r25,r20,18,12,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r20.u32, 18) & 0xF0000) | (ctx.r25.u64 & 0xFFFFFFFFFFF0FFFF);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r10,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r10.u32);
loc_82BB8A40:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb8a60
	if (!ctx.cr6.eq) goto loc_82BB8A60;
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bb8a70
	if (!ctx.cr6.eq) goto loc_82BB8A70;
loc_82BB8A60:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ori r5,r11,32768
	ctx.r5.u64 = ctx.r11.u64 | 32768;
	// blt cr6,0x82bb8a74
	if (ctx.cr6.lt) goto loc_82BB8A74;
loc_82BB8A70:
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
loc_82BB8A74:
	// lwz r11,12728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82bb7cc0
	ctx.lr = 0x82BB8A90;
	sub_82BB7CC0(ctx, base);
	// lwz r11,12744(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb8ab0
	if (!ctx.cr6.eq) goto loc_82BB8AB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb8abc
	if (ctx.cr6.eq) goto loc_82BB8ABC;
loc_82BB8AB0:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r10,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r10.u32);
loc_82BB8ABC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// bne cr6,0x82bb8acc
	if (!ctx.cr6.eq) goto loc_82BB8ACC;
	// li r23,0
	ctx.r23.s64 = 0;
loc_82BB8ACC:
	// lwz r4,12740(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12740);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82bb8908
	if (ctx.cr6.lt) goto loc_82BB8908;
loc_82BB8ADC:
	// lwz r11,12728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12740(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12740, ctx.r10.u32);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB8AFC"))) PPC_WEAK_FUNC(sub_82BB8AFC);
PPC_FUNC_IMPL(__imp__sub_82BB8AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB8B00"))) PPC_WEAK_FUNC(sub_82BB8B00);
PPC_FUNC_IMPL(__imp__sub_82BB8B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BB8B08;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ace0
	ctx.lr = 0x82BB8B10;
	__savefpr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12736, ctx.r11.u32);
	// bl 0x827ed558
	ctx.lr = 0x82BB8B24;
	sub_827ED558(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r9,12728(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12728);
	// lwz r7,2272(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2272);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb99c0
	if (ctx.cr6.eq) goto loc_82BB99C0;
	// addi r4,r9,424
	ctx.r4.s64 = ctx.r9.s64 + 424;
	// addi r5,r9,364
	ctx.r5.s64 = ctx.r9.s64 + 364;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82747aa8
	ctx.lr = 0x82BB8B48;
	sub_82747AA8(ctx, base);
	// addi r5,r9,376
	ctx.r5.s64 = ctx.r9.s64 + 376;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82747aa8
	ctx.lr = 0x82BB8B54;
	sub_82747AA8(ctx, base);
	// addi r5,r9,400
	ctx.r5.s64 = ctx.r9.s64 + 400;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82747aa8
	ctx.lr = 0x82BB8B60;
	sub_82747AA8(ctx, base);
	// addi r5,r9,388
	ctx.r5.s64 = ctx.r9.s64 + 388;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82747aa8
	ctx.lr = 0x82BB8B6C;
	sub_82747AA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f20,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f19.f64 = double(temp.f32);
	// stfs f20,132(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f20,128(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f19,136(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82747aa8
	ctx.lr = 0x82BB8B94;
	sub_82747AA8(ctx, base);
	// lfs f0,480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// li r8,5
	ctx.r8.s64 = 5;
	// lfs f12,472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,244
	ctx.r10.s64 = ctx.r1.s64 + 244;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
loc_82BB8BAC:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f11,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmadds f1,f5,f12,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f11,f0,f4,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// bne 0x82bb8bac
	if (!ctx.cr0.eq) goto loc_82BB8BAC;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r29,8(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82bb99c0
	if (!ctx.cr6.lt) goto loc_82BB99C0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// addi r9,r11,-4368
	ctx.r9.s64 = ctx.r11.s64 + -4368;
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lfs f0,-28996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4924(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4924);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// lfs f14,-4368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4368);
	ctx.f14.f64 = double(temp.f32);
	// lfs f17,-30408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30408);
	ctx.f17.f64 = double(temp.f32);
	// lfs f18,-30776(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30776);
	ctx.f18.f64 = double(temp.f32);
	// lfs f16,-30232(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30232);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,-4012(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4012);
	ctx.f15.f64 = double(temp.f32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_82BB8C70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f25,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f24.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb8ce8
	if (ctx.cr6.eq) goto loc_82BB8CE8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb8ce8
	if (ctx.cr6.eq) goto loc_82BB8CE8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lfs f0,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f22,f12,f11
	ctx.f22.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f21,f10,f9
	ctx.f21.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// b 0x82bb8d3c
	goto loc_82BB8D3C;
loc_82BB8CE8:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// beq cr6,0x82bb8d2c
	if (ctx.cr6.eq) goto loc_82BB8D2C;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f22,f12,f11
	ctx.f22.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f21,f10,f9
	ctx.f21.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// b 0x82bb8d3c
	goto loc_82BB8D3C;
loc_82BB8D2C:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f23,f0,f14
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f14.f64));
	// fmr f22,f23
	ctx.f22.f64 = ctx.f23.f64;
	// fmr f21,f23
	ctx.f21.f64 = ctx.f23.f64;
loc_82BB8D3C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb8dec
	if (ctx.cr6.eq) goto loc_82BB8DEC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb8dec
	if (ctx.cr6.eq) goto loc_82BB8DEC;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f0,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// lfs f12,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f15,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f15.f64 + ctx.f13.f64));
	// stfs f11,-8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f10,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f15
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f15.f64));
	// fmadds f7,f10,f15,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f15.f64 + ctx.f8.f64));
	// stfs f7,-4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f5,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f15
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f15.f64));
	// lfs f6,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f3,f6,f15,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f15.f64 + ctx.f4.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82747aa8
	ctx.lr = 0x82BB8DB8;
	sub_82747AA8(ctx, base);
	// lfs f2,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f12,52(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,-4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f9,56(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82bb8ef0
	goto loc_82BB8EF0;
loc_82BB8DEC:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x82bb8e88
	if (ctx.cr6.eq) goto loc_82BB8E88;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f15
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f15,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f15.f64 + ctx.f13.f64));
	// stfs f11,-8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f15
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f15.f64));
	// fmadds f7,f8,f15,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f15.f64 + ctx.f9.f64));
	// stfs f7,-4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f15
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f15.f64));
	// lfs f4,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f15,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f15.f64 + ctx.f5.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,-4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82bb8ef0
	goto loc_82BB8EF0;
loc_82BB8E88:
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82bb8ed4
	if (!ctx.cr6.eq) goto loc_82BB8ED4;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,-8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// fmuls f9,f10,f15
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f15.f64));
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,-4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82bb8ef0
	goto loc_82BB8EF0;
loc_82BB8ED4:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82BB8EF0:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,228(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bb8f34
	if (!ctx.cr6.gt) goto loc_82BB8F34;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,56(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// bl 0x82beb740
	ctx.lr = 0x82BB8F0C;
	sub_82BEB740(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb8f34
	if (ctx.cr6.eq) goto loc_82BB8F34;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// b 0x82bb8f4c
	goto loc_82BB8F4C;
loc_82BB8F34:
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f13,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82BB8F4C:
	// lfs f0,68(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f3,f10
	ctx.f3.f64 = ctx.f10.f64;
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f7,-4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f13,f6,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f2,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f2,f1,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f2,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f11,-4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f2,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lfs f6,76(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f6,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f6,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f1,-4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f6,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,56(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// lfs f10,80(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f10,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f5,-4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f4,f10,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82bb9500
	if (ctx.cr6.gt) goto loc_82BB9500;
	// lis r12,-32068
	ctx.r12.s64 = -2101608448;
	// addi r12,r12,-28564
	ctx.r12.s64 = ctx.r12.s64 + -28564;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BB9088;
	case 1:
		goto loc_82BB90CC;
	case 2:
		goto loc_82BB9110;
	case 3:
		goto loc_82BB9154;
	case 4:
		goto loc_82BB921C;
	case 5:
		goto loc_82BB92E4;
	case 6:
		goto loc_82BB93AC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-28536(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28536);
	// lwz r21,-28468(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28468);
	// lwz r21,-28400(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28400);
	// lwz r21,-28332(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28332);
	// lwz r21,-28132(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28132);
	// lwz r21,-27932(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27932);
	// lwz r21,-27732(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27732);
loc_82BB9088:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// fmuls f25,f23,f25
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f24,f22,f24
	ctx.f24.f64 = double(float(ctx.f22.f64 * ctx.f24.f64));
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// lfs f12,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// b 0x82bb9500
	goto loc_82BB9500;
loc_82BB90CC:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// fmuls f25,f23,f25
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f24,f21,f24
	ctx.f24.f64 = double(float(ctx.f21.f64 * ctx.f24.f64));
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// b 0x82bb9500
	goto loc_82BB9500;
loc_82BB9110:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// fmuls f25,f22,f25
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f22.f64 * ctx.f25.f64));
	// fmuls f24,f21,f24
	ctx.f24.f64 = double(float(ctx.f21.f64 * ctx.f24.f64));
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f31,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// b 0x82bb9500
	goto loc_82BB9500;
loc_82BB9154:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f29,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f30,f12
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f9,f29,f13
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmsubs f8,f29,f12,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f7,f31,f13,f10
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f6,f30,f0,f9
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x82BB91A8;
	sub_82124928(ctx, base);
	// lfs f26,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f5,f26,f31
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f4,f27,f29
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmuls f3,f30,f28
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmsubs f2,f29,f28,f5
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 - ctx.f5.f64));
	// stfs f2,-16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// fmsubs f1,f26,f30,f4
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f4.f64));
	// stfs f1,-20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// fmsubs f0,f27,f31,f3
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f3.f64));
	// stfs f0,-12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmadds f9,f13,f26,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f10.f64));
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f28,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bge cr6,0x82bb9208
	if (!ctx.cr6.lt) goto loc_82BB9208;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82BB9208:
	// fsubs f13,f19,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f0.f64));
	// fmuls f12,f0,f22
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// fmadds f11,f13,f21,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f21.f64 + ctx.f12.f64));
	// fmuls f24,f11,f24
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// b 0x82bb9500
	goto loc_82BB9500;
loc_82BB921C:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f25,f22,f25
	ctx.f25.f64 = double(float(ctx.f22.f64 * ctx.f25.f64));
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f31,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f29,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f30,f12
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f9,f29,f13
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmsubs f8,f29,f12,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f7,f31,f13,f10
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f6,f30,f0,f9
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x82BB9270;
	sub_82124928(ctx, base);
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f5,f27,f29
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmuls f4,f26,f31
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f3,f30,f28
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmsubs f2,f26,f30,f5
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f5.f64));
	// stfs f2,-20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// fmsubs f1,f29,f28,f4
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 - ctx.f4.f64));
	// stfs f1,-16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// fmsubs f0,f27,f31,f3
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f3.f64));
	// stfs f0,-12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmadds f9,f13,f26,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f10.f64));
	// fmadds f0,f28,f12,f9
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bge cr6,0x82bb92d0
	if (!ctx.cr6.lt) goto loc_82BB92D0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82BB92D0:
	// fsubs f13,f19,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f0.f64));
	// fmuls f12,f0,f23
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fmadds f11,f13,f21,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f21.f64 + ctx.f12.f64));
	// fmuls f24,f11,f24
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// b 0x82bb9500
	goto loc_82BB9500;
loc_82BB92E4:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f25,f21,f25
	ctx.f25.f64 = double(float(ctx.f21.f64 * ctx.f25.f64));
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f31,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f29,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f30,f12
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f9,f29,f13
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmsubs f8,f29,f12,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f7,f31,f13,f10
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f6,f30,f0,f9
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x82BB9338;
	sub_82124928(ctx, base);
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f5,f27,f29
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f4,f26,f31
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f3,f30,f28
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmsubs f2,f26,f30,f5
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f5.f64));
	// stfs f2,-20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// fmsubs f1,f29,f28,f4
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 - ctx.f4.f64));
	// stfs f1,-16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// fmsubs f0,f27,f31,f3
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f3.f64));
	// stfs f0,-12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f26,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fmadds f0,f10,f28,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bge cr6,0x82bb9398
	if (!ctx.cr6.lt) goto loc_82BB9398;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82BB9398:
	// fsubs f13,f19,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f0.f64));
	// fmuls f12,f0,f23
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fmadds f11,f13,f22,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f22.f64 + ctx.f12.f64));
	// fmuls f24,f11,f24
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// b 0x82bb9500
	goto loc_82BB9500;
loc_82BB93AC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bge cr6,0x82bb93d4
	if (!ctx.cr6.lt) goto loc_82BB93D4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82BB93D4:
	// fmuls f13,f23,f23
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f23.f64));
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f0,f0,f19
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f19.f64)));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// fmadds f9,f22,f22,f13
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f22.f64 + ctx.f13.f64));
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f6,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fsqrts f5,f11
	ctx.f5.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f4,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fsqrts f3,f9
	ctx.f3.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f1,f6,f10,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmuls f24,f3,f24
	ctx.f24.f64 = double(float(ctx.f3.f64 * ctx.f24.f64));
	// fmadds f13,f5,f21,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f21.f64 + ctx.f2.f64));
	// fmadds f0,f30,f4,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmuls f25,f13,f25
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fcmpu cr6,f0,f16
	ctx.cr6.compare(ctx.f0.f64, ctx.f16.f64);
	// bge cr6,0x82bb946c
	if (!ctx.cr6.lt) goto loc_82BB946C;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82bb946c
	if (!ctx.cr6.gt) goto loc_82BB946C;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f6,f9,f10,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f12.f64));
	// fmsubs f5,f0,f13,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f4,f11,f30,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 - ctx.f7.f64));
	// b 0x82bb9498
	goto loc_82BB9498;
loc_82BB946C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f6,f9,f12,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f11.f64));
	// fmsubs f5,f13,f0,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f8.f64));
	// fmsubs f4,f10,f30,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 - ctx.f7.f64));
loc_82BB9498:
	// stfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x82BB94B0;
	sub_82124928(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f12,f26,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f10,f27,f30
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmsubs f31,f27,f0,f12
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fmsubs f30,f26,f30,f11
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f11.f64));
	// fmsubs f29,f28,f13,f10
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 - ctx.f10.f64));
	// fmuls f9,f27,f31
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f8,f26,f30
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// fmuls f7,f29,f28
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fmsubs f6,f30,f28,f9
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f28.f64 - ctx.f9.f64));
	// stfs f6,-12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// fmsubs f5,f27,f29,f8
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 - ctx.f8.f64));
	// stfs f5,-20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// fmsubs f4,f26,f31,f7
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f31.f64 - ctx.f7.f64));
	// stfs f4,-16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
loc_82BB9500:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb952c
	if (ctx.cr6.eq) goto loc_82BB952C;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fneg f30,f30
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f29,f29
	ctx.f29.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fneg f28,f28
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f27,f27
	ctx.f27.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fneg f26,f26
	ctx.f26.u64 = ctx.f26.u64 ^ 0x8000000000000000;
loc_82BB952C:
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb9568
	if (ctx.cr6.eq) goto loc_82BB9568;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// fmr f11,f24
	ctx.f11.f64 = ctx.f24.f64;
	// fneg f31,f28
	ctx.f31.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fneg f30,f27
	ctx.f30.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fneg f29,f26
	ctx.f29.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fmr f24,f25
	ctx.f24.f64 = ctx.f25.f64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// fmr f27,f13
	ctx.f27.f64 = ctx.f13.f64;
	// fmr f26,f12
	ctx.f26.f64 = ctx.f12.f64;
	// fmr f25,f11
	ctx.f25.f64 = ctx.f11.f64;
loc_82BB9568:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f27,f13
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// lfs f9,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f29,f11,f12
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f4,f26,f11,f10
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f3,f0,f7,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fnmadds f2,f31,f7,f5
	ctx.f2.f64 = double(float(-(ctx.f31.f64 * ctx.f7.f64 + ctx.f5.f64)));
	// fnmadds f1,f28,f7,f4
	ctx.f1.f64 = double(float(-(ctx.f28.f64 * ctx.f7.f64 + ctx.f4.f64)));
	// fmadds f12,f6,f13,f3
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f10,f2,f7,f31
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f31.f64));
	// fmadds f9,f2,f13,f30
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f8,f2,f11,f29
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f7,f1,f7,f28
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f28.f64));
	// fmadds f6,f1,f13,f27
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f27.f64));
	// fmadds f5,f1,f11,f26
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f26.f64));
	// fcmpu cr6,f12,f20
	ctx.cr6.compare(ctx.f12.f64, ctx.f20.f64);
	// fmuls f31,f10,f25
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f30,f9,f25
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f29,f8,f25
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f28,f7,f24
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f24.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f27,f6,f24
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f24.f64));
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f26,f5,f24
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge cr6,0x82bb9614
	if (!ctx.cr6.lt) goto loc_82BB9614;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -20, temp.u32);
	// lfs f13,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,-16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// lfs f11,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,-12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
loc_82BB9614:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82bb9644
	if (!ctx.cr6.eq) goto loc_82BB9644;
	// fmr f11,f20
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f20.f64;
	// fmr f10,f20
	ctx.f10.f64 = ctx.f20.f64;
	// fmr f9,f20
	ctx.f9.f64 = ctx.f20.f64;
	// b 0x82bb966c
	goto loc_82BB966C;
loc_82BB9644:
	// fmuls f0,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// fmadds f13,f26,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fmadds f0,f28,f28,f13
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// ble cr6,0x82bb9660
	if (!ctx.cr6.gt) goto loc_82BB9660;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f19,f0
	ctx.f0.f64 = double(float(ctx.f19.f64 / ctx.f0.f64));
loc_82BB9660:
	// fmuls f11,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f10,f27,f0
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f9,f26,f0
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
loc_82BB966C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82bb969c
	if (!ctx.cr6.eq) goto loc_82BB969C;
	// fmr f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f20.f64;
	// fmr f13,f20
	ctx.f13.f64 = ctx.f20.f64;
	// fmr f12,f20
	ctx.f12.f64 = ctx.f20.f64;
	// b 0x82bb96c4
	goto loc_82BB96C4;
loc_82BB969C:
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f13,f29,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f12,f31,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f20
	ctx.cr6.compare(ctx.f12.f64, ctx.f20.f64);
	// ble cr6,0x82bb96b8
	if (!ctx.cr6.gt) goto loc_82BB96B8;
	// fsqrts f0,f12
	ctx.f0.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f19,f0
	ctx.f12.f64 = double(float(ctx.f19.f64 / ctx.f0.f64));
loc_82BB96B8:
	// fmuls f0,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f13,f30,f12
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
loc_82BB96C4:
	// fmuls f8,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// li r7,16
	ctx.r7.s64 = 16;
	// fmuls f7,f30,f30
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// li r6,31
	ctx.r6.s64 = 31;
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f5,f26,f26,f8
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f8.f64));
	// fmadds f4,f29,f29,f7
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f7.f64));
	// fmadds f3,f12,f9,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f2,f28,f28,f5
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmadds f1,f31,f31,f4
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmadds f8,f0,f11,f3
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fsqrts f7,f2
	ctx.f7.f64 = double(float(sqrt(ctx.f2.f64)));
	// fsqrts f6,f1
	ctx.f6.f64 = double(float(sqrt(ctx.f1.f64)));
	// fmuls f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f12,f10,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f13,f9,f4
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f0,f11,f4
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fsubs f9,f26,f1
	ctx.f9.f64 = double(float(ctx.f26.f64 - ctx.f1.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fsubs f6,f30,f12
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fsubs f10,f27,f2
	ctx.f10.f64 = double(float(ctx.f27.f64 - ctx.f2.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fsubs f7,f29,f13
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fsubs f11,f28,f3
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f3.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fsubs f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f2,f3,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f0,f1,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f19,f13
	ctx.f12.f64 = double(float(ctx.f19.f64 / ctx.f13.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f0,f4,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f19,f13
	ctx.f12.f64 = double(float(ctx.f19.f64 / ctx.f13.f64));
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f5,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f4,f19,f5
	ctx.f4.f64 = double(float(ctx.f19.f64 / ctx.f5.f64));
	// stfs f4,72(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f18,40(r31)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f18,44(r31)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f18,48(r31)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f17,52(r31)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f17,60(r31)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f17,56(r31)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f10,f0,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f9,f0,f3
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
loc_82BB9818:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82bb985c
	if (ctx.cr6.eq) goto loc_82BB985C;
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// fadds f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// fadds f12,f26,f12
	ctx.f12.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// b 0x82bb9868
	goto loc_82BB9868;
loc_82BB985C:
	// fsubs f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
loc_82BB9868:
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb9884
	if (ctx.cr6.eq) goto loc_82BB9884;
	// fadds f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// b 0x82bb9890
	goto loc_82BB9890;
loc_82BB9884:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
loc_82BB9890:
	// rlwinm r11,r7,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// lfs f8,-20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb98b8
	if (ctx.cr6.eq) goto loc_82BB98B8;
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// b 0x82bb98c4
	goto loc_82BB98C4;
loc_82BB98B8:
	// fsubs f0,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
loc_82BB98C4:
	// rlwinm r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb98dc
	if (ctx.cr6.eq) goto loc_82BB98DC;
	// fadds f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
loc_82BB98DC:
	// li r8,5
	ctx.r8.s64 = 5;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r1,244
	ctx.r10.s64 = ctx.r1.s64 + 244;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
loc_82BB98EC:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rotlwi r9,r9,31
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 31);
	// lfs f8,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f12,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f2,f5,f13,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fsubs f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fcmpu cr6,f1,f20
	ctx.cr6.compare(ctx.f1.f64, ctx.f20.f64);
	// bge cr6,0x82bb9928
	if (!ctx.cr6.lt) goto loc_82BB9928;
	// andc r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r9.u64;
loc_82BB9928:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bb98ec
	if (!ctx.cr6.eq) goto loc_82BB98EC;
	// lfs f8,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82bb9940
	if (!ctx.cr6.lt) goto loc_82BB9940;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_82BB9940:
	// lfs f8,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x82bb9950
	if (!ctx.cr6.lt) goto loc_82BB9950;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_82BB9950:
	// lfs f8,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x82bb9960
	if (!ctx.cr6.lt) goto loc_82BB9960;
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82BB9960:
	// lfs f8,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x82bb9970
	if (!ctx.cr6.gt) goto loc_82BB9970;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_82BB9970:
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82bb9980
	if (!ctx.cr6.gt) goto loc_82BB9980;
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_82BB9980:
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82bb9990
	if (!ctx.cr6.gt) goto loc_82BB9990;
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82BB9990:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82bb9818
	if (!ctx.cr6.eq) goto loc_82BB9818;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82bb99b0
	if (!ctx.cr6.eq) goto loc_82BB99B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,15,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
loc_82BB99B0:
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82bb8c70
	if (ctx.cr6.lt) goto loc_82BB8C70;
loc_82BB99C0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad2c
	ctx.lr = 0x82BB99CC;
	__restfpr_14(ctx, base);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB99D0"))) PPC_WEAK_FUNC(sub_82BB99D0);
PPC_FUNC_IMPL(__imp__sub_82BB99D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bb8880
	sub_82BB8880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB99D4"))) PPC_WEAK_FUNC(sub_82BB99D4);
PPC_FUNC_IMPL(__imp__sub_82BB99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB99D8"))) PPC_WEAK_FUNC(sub_82BB99D8);
PPC_FUNC_IMPL(__imp__sub_82BB99D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb9a24
	if (ctx.cr6.eq) goto loc_82BB9A24;
	// lhz r9,3708(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3708);
	// addi r11,r11,2428
	ctx.r11.s64 = ctx.r11.s64 + 2428;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bb9a24
	if (!ctx.cr6.gt) goto loc_82BB9A24;
loc_82BB9A00:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bb9a2c
	if (ctx.cr6.eq) goto loc_82BB9A2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bb9a00
	if (ctx.cr6.lt) goto loc_82BB9A00;
loc_82BB9A24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB9A2C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB9A34"))) PPC_WEAK_FUNC(sub_82BB9A34);
PPC_FUNC_IMPL(__imp__sub_82BB9A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9A38"))) PPC_WEAK_FUNC(sub_82BB9A38);
PPC_FUNC_IMPL(__imp__sub_82BB9A38) {
	PPC_FUNC_PROLOGUE();
	// rlwimi r4,r3,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r5,r4,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// rlwinm r3,r5,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB9A48"))) PPC_WEAK_FUNC(sub_82BB9A48);
PPC_FUNC_IMPL(__imp__sub_82BB9A48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bb9a74
	if (ctx.cr6.eq) goto loc_82BB9A74;
loc_82BB9A58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82bb9a7c
	if (ctx.cr6.eq) goto loc_82BB9A7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82bb9a58
	if (ctx.cr6.lt) goto loc_82BB9A58;
loc_82BB9A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BB9A7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB9A84"))) PPC_WEAK_FUNC(sub_82BB9A84);
PPC_FUNC_IMPL(__imp__sub_82BB9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9A88"))) PPC_WEAK_FUNC(sub_82BB9A88);
PPC_FUNC_IMPL(__imp__sub_82BB9A88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,2268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,2268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2268, ctx.r9.u32);
	// stw r11,12728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB9AB0"))) PPC_WEAK_FUNC(sub_82BB9AB0);
PPC_FUNC_IMPL(__imp__sub_82BB9AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb9ac8
	if (ctx.cr6.eq) goto loc_82BB9AC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BB9AC8:
	// lwz r11,2268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb9ae4
	if (ctx.cr6.eq) goto loc_82BB9AE4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2268, ctx.r10.u32);
	// stw r3,12728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12728, ctx.r3.u32);
loc_82BB9AE4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BB9AF0"))) PPC_WEAK_FUNC(sub_82BB9AF0);
PPC_FUNC_IMPL(__imp__sub_82BB9AF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb9b00
	if (!ctx.cr6.eq) goto loc_82BB9B00;
	// blr 
	return;
loc_82BB9B00:
	// lwz r10,2268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bb9b14
	if (ctx.cr6.eq) goto loc_82BB9B14;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2268, ctx.r10.u32);
loc_82BB9B14:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r4,2268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2268, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB9B28"))) PPC_WEAK_FUNC(sub_82BB9B28);
PPC_FUNC_IMPL(__imp__sub_82BB9B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB9B30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r31,12728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12728, ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB9B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,2260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2260);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb9c08
	if (!ctx.cr6.eq) goto loc_82BB9C08;
	// lwz r11,2268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb9b74
	if (ctx.cr6.eq) goto loc_82BB9B74;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82bb9b78
	goto loc_82BB9B78;
loc_82BB9B74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB9B78:
	// rlwinm r11,r10,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb9ba4
	if (ctx.cr6.eq) goto loc_82BB9BA4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB9B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,2260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2260);
	// rlwinm r9,r10,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r9,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r9.u32);
	// b 0x82bb9bfc
	goto loc_82BB9BFC;
loc_82BB9BA4:
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,5580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5580);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82bb9bec
	if (!ctx.cr6.lt) goto loc_82BB9BEC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r10,12768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12768);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bb9bcc
	if (ctx.cr6.eq) goto loc_82BB9BCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82bb9bec
	goto loc_82BB9BEC;
loc_82BB9BCC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,8032
	ctx.r11.s64 = ctx.r9.s64 + 8032;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// clrlwi r4,r5,8
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFFFF;
loc_82BB9BEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,3
	ctx.r3.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB9BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB9BFC:
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r11.u32);
loc_82BB9C08:
	// addi r30,r31,284
	ctx.r30.s64 = ctx.r31.s64 + 284;
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bad850
	ctx.lr = 0x82BB9C20;
	sub_82BAD850(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB9C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bad7a8
	ctx.lr = 0x82BB9C38;
	sub_82BAD7A8(ctx, base);
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// addi r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	// bl 0x82bb6800
	ctx.lr = 0x82BB9C44;
	sub_82BB6800(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r29,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r29.u32);
	// stw r29,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r29.u32);
	// stw r29,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r29.u32);
	// stw r29,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r29.u32);
	// lfs f0,-30776(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30776);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r29.u32);
	// stfs f0,3776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3776, temp.u32);
	// stw r29,3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3772, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9C70"))) PPC_WEAK_FUNC(sub_82BB9C70);
PPC_FUNC_IMPL(__imp__sub_82BB9C70) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r8,640
	ctx.r8.s64 = 640;
	// lwz r11,12724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12724);
	// li r7,480
	ctx.r7.s64 = 480;
	// lfs f0,-30172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r8,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,12728(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12728, ctx.r31.u32);
	// stw r7,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
	// beq cr6,0x82bb9cc4
	if (ctx.cr6.eq) goto loc_82BB9CC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bb9d0c
	goto loc_82BB9D0C;
loc_82BB9CC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB9CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82bad850
	ctx.lr = 0x82BB9CF0;
	sub_82BAD850(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB9D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BB9D0C:
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

__attribute__((alias("__imp__sub_82BB9D24"))) PPC_WEAK_FUNC(sub_82BB9D24);
PPC_FUNC_IMPL(__imp__sub_82BB9D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9D28"))) PPC_WEAK_FUNC(sub_82BB9D28);
PPC_FUNC_IMPL(__imp__sub_82BB9D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BB9D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,5512(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5512);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bb9dbc
	if (!ctx.cr6.gt) goto loc_82BB9DBC;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82121828
	ctx.lr = 0x82BB9D64;
	sub_82121828(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mulli r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 * 112;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82121828
	ctx.lr = 0x82BB9D74;
	sub_82121828(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mulli r5,r9,112
	ctx.r5.s64 = ctx.r9.s64 * 112;
	// bl 0x82218a80
	ctx.lr = 0x82BB9D94;
	sub_82218A80(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82121828
	ctx.lr = 0x82BB9DA0;
	sub_82121828(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB9DB8;
	sub_82218A80(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82BB9DBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9DC4"))) PPC_WEAK_FUNC(sub_82BB9DC4);
PPC_FUNC_IMPL(__imp__sub_82BB9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9DC8"))) PPC_WEAK_FUNC(sub_82BB9DC8);
PPC_FUNC_IMPL(__imp__sub_82BB9DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BB9DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb9e38
	if (ctx.cr6.eq) goto loc_82BB9E38;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// stw r31,12728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12728, ctx.r31.u32);
	// bl 0x82bb7810
	ctx.lr = 0x82BB9DEC;
	sub_82BB7810(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,1004
	ctx.r3.s64 = ctx.r31.s64 + 1004;
	// sth r30,2196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2196, ctx.r30.u16);
	// bl 0x82bb4be0
	ctx.lr = 0x82BB9DFC;
	sub_82BB4BE0(ctx, base);
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// bl 0x82bb4be0
	ctx.lr = 0x82BB9E04;
	sub_82BB4BE0(ctx, base);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// bl 0x82bb4be0
	ctx.lr = 0x82BB9E0C;
	sub_82BB4BE0(ctx, base);
	// addi r3,r31,1076
	ctx.r3.s64 = ctx.r31.s64 + 1076;
	// bl 0x82bb4be0
	ctx.lr = 0x82BB9E14;
	sub_82BB4BE0(ctx, base);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// bl 0x82bb4be0
	ctx.lr = 0x82BB9E1C;
	sub_82BB4BE0(ctx, base);
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// bl 0x82120a70
	ctx.lr = 0x82BB9E24;
	sub_82120A70(ctx, base);
	// stw r30,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BB9E30;
	sub_82120A70(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,12728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12728, ctx.r11.u32);
loc_82BB9E38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9E40"))) PPC_WEAK_FUNC(sub_82BB9E40);
PPC_FUNC_IMPL(__imp__sub_82BB9E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BB9E48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3788
	ctx.r3.s64 = 3788;
	// bl 0x82120040
	ctx.lr = 0x82BB9E58;
	sub_82120040(ctx, base);
	// li r5,3788
	ctx.r5.s64 = 3788;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BB9E68;
	sub_82218A80(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,3330
	ctx.r8.s64 = 218234880;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r8,16765
	ctx.r11.u64 = ctx.r8.u64 | 16765;
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// li r26,1024
	ctx.r26.s64 = 1024;
	// lfs f13,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stw r30,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r30.u32);
	// stfs f13,2276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2276, temp.u32);
	// stw r26,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r26.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r30,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r30.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// stw r30,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// bl 0x82badb78
	ctx.lr = 0x82BB9EC4;
	sub_82BADB78(ctx, base);
	// addic. r3,r31,1104
	ctx.xer.ca = ctx.r31.u32 > 4294966191;
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bb9edc
	if (ctx.cr0.eq) goto loc_82BB9EDC;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,1092(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1092, ctx.r11.u16);
	// bl 0x82bb6800
	ctx.lr = 0x82BB9EDC;
	sub_82BB6800(ctx, base);
loc_82BB9EDC:
	// addic. r29,r31,1004
	ctx.xer.ca = ctx.r31.u32 > 4294966291;
	ctx.r29.s64 = ctx.r31.s64 + 1004;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r27,200
	ctx.r27.s64 = 200;
	// beq 0x82bb9f00
	if (ctx.cr0.eq) goto loc_82BB9F00;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x82120040
	ctx.lr = 0x82BB9EF4;
	sub_82120040(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82BB9F00:
	// addic. r29,r31,1028
	ctx.xer.ca = ctx.r31.u32 > 4294966267;
	ctx.r29.s64 = ctx.r31.s64 + 1028;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r28,100
	ctx.r28.s64 = 100;
	// beq 0x82bb9f24
	if (ctx.cr0.eq) goto loc_82BB9F24;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82120040
	ctx.lr = 0x82BB9F18;
	sub_82120040(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82BB9F24:
	// addic. r29,r31,1052
	ctx.xer.ca = ctx.r31.u32 > 4294966243;
	ctx.r29.s64 = ctx.r31.s64 + 1052;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bb9f44
	if (ctx.cr0.eq) goto loc_82BB9F44;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x82120040
	ctx.lr = 0x82BB9F38;
	sub_82120040(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82BB9F44:
	// addic. r29,r31,1088
	ctx.xer.ca = ctx.r31.u32 > 4294966207;
	ctx.r29.s64 = ctx.r31.s64 + 1088;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bb9f64
	if (ctx.cr0.eq) goto loc_82BB9F64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82120040
	ctx.lr = 0x82BB9F58;
	sub_82120040(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82BB9F64:
	// addic. r29,r31,1076
	ctx.xer.ca = ctx.r31.u32 > 4294966219;
	ctx.r29.s64 = ctx.r31.s64 + 1076;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bb9f84
	if (ctx.cr0.eq) goto loc_82BB9F84;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82120040
	ctx.lr = 0x82BB9F78;
	sub_82120040(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82BB9F84:
	// addic. r29,r31,1040
	ctx.xer.ca = ctx.r31.u32 > 4294966255;
	ctx.r29.s64 = ctx.r31.s64 + 1040;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bb9fa8
	if (ctx.cr0.eq) goto loc_82BB9FA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82120040
	ctx.lr = 0x82BB9F98;
	sub_82120040(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82BB9FA8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r26,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r26.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r10,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,12760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12760);
	// oris r8,r11,144
	ctx.r8.u64 = ctx.r11.u64 | 9437184;
	// ori r8,r8,28941
	ctx.r8.u64 = ctx.r8.u64 | 28941;
	// stw r8,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r8.u32);
	// bl 0x82120040
	ctx.lr = 0x82BB9FDC;
	sub_82120040(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r7.u32);
	// stb r30,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9FF4"))) PPC_WEAK_FUNC(sub_82BB9FF4);
PPC_FUNC_IMPL(__imp__sub_82BB9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9FF8"))) PPC_WEAK_FUNC(sub_82BB9FF8);
PPC_FUNC_IMPL(__imp__sub_82BB9FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BBA000;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bba0d8
	if (ctx.cr6.eq) goto loc_82BBA0D8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bba0d8
	if (!ctx.cr6.eq) goto loc_82BBA0D8;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// stb r11,12460(r27)
	PPC_STORE_U8(ctx.r27.u32 + 12460, ctx.r11.u8);
	// lis r11,4087
	ctx.r11.s64 = 267845632;
	// ori r28,r11,49374
	ctx.r28.u64 = ctx.r11.u64 | 49374;
loc_82BBA044:
	// lwz r11,12480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12480);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bba058
	if (!ctx.cr6.eq) goto loc_82BBA058;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82BBA058:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bfd450
	ctx.lr = 0x82BBA06C;
	sub_82BFD450(ctx, base);
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x82bba0b8
	if (ctx.cr6.eq) goto loc_82BBA0B8;
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
loc_82BBA0B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82bba0c8
	if (!ctx.cr6.eq) goto loc_82BBA0C8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BBA0C8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bba044
	if (!ctx.cr6.eq) goto loc_82BBA044;
	// stb r11,12460(r27)
	PPC_STORE_U8(ctx.r27.u32 + 12460, ctx.r11.u8);
loc_82BBA0D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBA0E0"))) PPC_WEAK_FUNC(sub_82BBA0E0);
PPC_FUNC_IMPL(__imp__sub_82BBA0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82BBA0E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rlwimi r11,r10,0,29,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFF0007) | (ctx.r11.u64 & 0xFFF8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82bb4008
	ctx.lr = 0x82BBA128;
	sub_82BB4008(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r9,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// sth r8,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r8.u16);
	// lhz r7,10(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// beq cr6,0x82bba254
	if (ctx.cr6.eq) goto loc_82BBA254;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r28,2208
	ctx.r3.s64 = ctx.r28.s64 + 2208;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// lwz r9,2208(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2208);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bba17c
	if (!ctx.cr6.eq) goto loc_82BBA17C;
	// lhz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// sth r10,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r10.u16);
loc_82BBA17C:
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82bba1a4
	if (ctx.cr6.eq) goto loc_82BBA1A4;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82bba240
	if (!ctx.cr6.eq) goto loc_82BBA240;
	// lbz r11,83(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x82bba1a4
	if (ctx.cr6.eq) goto loc_82BBA1A4;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82bba240
	if (!ctx.cr6.eq) goto loc_82BBA240;
loc_82BBA1A4:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// sth r10,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r10.u16);
	// bl 0x82bb2378
	ctx.lr = 0x82BBA1B8;
	sub_82BB2378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bb9d28
	ctx.lr = 0x82BBA1D0;
	sub_82BB9D28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bba240
	if (!ctx.cr6.eq) goto loc_82BBA240;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bba21c
	if (ctx.cr6.eq) goto loc_82BBA21C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_82BBA1FC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bba24c
	if (ctx.cr6.eq) goto loc_82BBA24C;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bba1fc
	if (ctx.cr6.lt) goto loc_82BBA1FC;
loc_82BBA21C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BBA220:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bba240
	if (!ctx.cr6.eq) goto loc_82BBA240;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82BBA240:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82BBA24C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bba220
	goto loc_82BBA220;
loc_82BBA254:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBA260"))) PPC_WEAK_FUNC(sub_82BBA260);
PPC_FUNC_IMPL(__imp__sub_82BBA260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BBA268;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r10,r11,5512
	ctx.r10.s64 = ctx.r11.s64 + 5512;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,92(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bba2b4
	if (!ctx.cr6.eq) goto loc_82BBA2B4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bba2b8
	if (!ctx.cr6.eq) goto loc_82BBA2B8;
loc_82BBA2B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BBA2B8:
	// lwz r9,96(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r6,10(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bba2f0
	if (!ctx.cr6.eq) goto loc_82BBA2F0;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bba2f4
	if (!ctx.cr6.eq) goto loc_82BBA2F4;
loc_82BBA2F0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BBA2F4:
	// lhz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 80);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bba33c
	if (ctx.cr6.eq) goto loc_82BBA33C;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12764(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12764);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82bba33c
	if (!ctx.cr6.lt) goto loc_82BBA33C;
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,10336
	ctx.r9.s64 = ctx.r9.s64 + 10336;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// stw r10,12764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12764, ctx.r10.u32);
	// stwx r6,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r7,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r7.u32);
loc_82BBA33C:
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwimi r10,r9,1,29,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFFFFFF0007) | (ctx.r10.u64 & 0xFFF8);
	// sth r10,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
	// bl 0x82bb4008
	ctx.lr = 0x82BBA358;
	sub_82BB4008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bba4b8
	if (ctx.cr6.eq) goto loc_82BBA4B8;
	// lhz r11,86(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 86);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,84(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 84);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82BBA378;
	sub_82120040(ctx, base);
	// stw r3,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// lwz r9,2208(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2208);
	// rlwinm r8,r9,0,11,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lbz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// beq cr6,0x82bba40c
	if (ctx.cr6.eq) goto loc_82BBA40C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82bba3b0
	if (!ctx.cr6.eq) goto loc_82BBA3B0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82b99da0
	ctx.lr = 0x82BBA3AC;
	sub_82B99DA0(ctx, base);
	// b 0x82bba4a8
	goto loc_82BBA4A8;
loc_82BBA3B0:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82bba4a8
	if (!ctx.cr6.eq) goto loc_82BBA4A8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bba4a8
	if (ctx.cr6.eq) goto loc_82BBA4A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bba4a8
	if (ctx.cr6.eq) goto loc_82BBA4A8;
loc_82BBA3D0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r6,16,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF0000;
	// rlwinm r8,r6,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// or r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r8,r8,0,16,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82bba3d0
	if (!ctx.cr0.eq) goto loc_82BBA3D0;
	// b 0x82bba4a8
	goto loc_82BBA4A8;
loc_82BBA40C:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82bba468
	if (!ctx.cr6.eq) goto loc_82BBA468;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bba4a8
	if (ctx.cr6.eq) goto loc_82BBA4A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bba4a8
	if (ctx.cr6.eq) goto loc_82BBA4A8;
loc_82BBA430:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r10.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r6,r7,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r3,r4,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82bba430
	if (!ctx.cr0.eq) goto loc_82BBA430;
	// b 0x82bba4a8
	goto loc_82BBA4A8;
loc_82BBA468:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82bba4a8
	if (!ctx.cr6.eq) goto loc_82BBA4A8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bba4a8
	if (ctx.cr6.eq) goto loc_82BBA4A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bba4a8
	if (ctx.cr6.eq) goto loc_82BBA4A8;
loc_82BBA488:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82bba488
	if (!ctx.cr0.eq) goto loc_82BBA488;
loc_82BBA4A8:
	// li r11,32
	ctx.r11.s64 = 32;
	// stb r11,16(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16, ctx.r11.u8);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x82120a70
	ctx.lr = 0x82BBA4B8;
	sub_82120A70(ctx, base);
loc_82BBA4B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBA4C0"))) PPC_WEAK_FUNC(sub_82BBA4C0);
PPC_FUNC_IMPL(__imp__sub_82BBA4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82BBA4C8;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12732);
	// lwz r27,12728(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bbadd4
	if (!ctx.cr6.eq) goto loc_82BBADD4;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r22,r11,5512
	ctx.r22.s64 = ctx.r11.s64 + 5512;
	// lwz r11,5512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5512);
	// mulli r29,r11,112
	ctx.r29.s64 = ctx.r11.s64 * 112;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x82120040
	ctx.lr = 0x82BBA50C;
	sub_82120040(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BBA51C;
	sub_82218A80(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bb6d88
	ctx.lr = 0x82BBA52C;
	sub_82BB6D88(ctx, base);
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// bl 0x82120040
	ctx.lr = 0x82BBA550;
	sub_82120040(ctx, base);
	// lwz r11,24(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// bl 0x82120040
	ctx.lr = 0x82BBA568;
	sub_82120040(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_82BBA574:
	// lwz r8,36(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
loc_82BBA578:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bba58c
	if (!ctx.cr6.eq) goto loc_82BBA58C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// b 0x82bba5a0
	goto loc_82BBA5A0;
loc_82BBA58C:
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bba5d4
	if (ctx.cr6.eq) goto loc_82BBA5D4;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_82BBA5A0:
	// beq cr6,0x82bba5d4
	if (ctx.cr6.eq) goto loc_82BBA5D4;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bba5d4
	if (ctx.cr6.eq) goto loc_82BBA5D4;
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lbzx r7,r11,r20
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82bba578
	if (!ctx.cr6.eq) goto loc_82BBA578;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82bba574
	goto loc_82BBA574;
loc_82BBA5D4:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82bba634
	if (!ctx.cr6.eq) goto loc_82BBA634;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stb r11,12(r22)
	PPC_STORE_U8(ctx.r22.u32 + 12, ctx.r11.u8);
	// lwz r11,12476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bba60c
	if (ctx.cr6.eq) goto loc_82BBA60C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bba60c
	if (!ctx.cr6.eq) goto loc_82BBA60C;
	// bl 0x82bb9ff8
	ctx.lr = 0x82BBA60C;
	sub_82BB9FF8(ctx, base);
loc_82BBA60C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BBA614;
	sub_82120A70(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BBA61C;
	sub_82120A70(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BBA624;
	sub_82120A70(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BBA62C;
	sub_82120A70(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
loc_82BBA634:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bba710
	if (ctx.cr6.eq) goto loc_82BBA710;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r28,r11,-18600
	ctx.r28.s64 = ctx.r11.s64 + -18600;
loc_82BBA650:
	// lwzx r11,r30,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r19.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bba688
	if (!ctx.cr6.eq) goto loc_82BBA688;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bba68c
	if (!ctx.cr6.eq) goto loc_82BBA68C;
loc_82BBA688:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82BBA68C:
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// lbzx r8,r11,r20
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82bba700
	if (!ctx.cr6.eq) goto loc_82BBA700;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bba0e0
	ctx.lr = 0x82BBA6D0;
	sub_82BBA0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bba6e4
	if (ctx.cr6.eq) goto loc_82BBA6E4;
	// lhz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// bl 0x82bb5d68
	ctx.lr = 0x82BBA6E0;
	sub_82BB5D68(ctx, base);
	// b 0x82bba6f4
	goto loc_82BBA6F4;
loc_82BBA6E4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bcac98
	ctx.lr = 0x82BBA6F4;
	sub_82BCAC98(ctx, base);
loc_82BBA6F4:
	// lwz r19,120(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r20,116(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BBA700:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82bba650
	if (ctx.cr6.lt) goto loc_82BBA650;
loc_82BBA710:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82BBA718:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bba728
	if (!ctx.cr6.eq) goto loc_82BBA728;
	// lwz r29,52(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// b 0x82bba738
	goto loc_82BBA738;
loc_82BBA728:
	// lwz r11,60(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bba7bc
	if (ctx.cr6.eq) goto loc_82BBA7BC;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82BBA738:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bba7bc
	if (ctx.cr6.eq) goto loc_82BBA7BC;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bba7bc
	if (ctx.cr6.eq) goto loc_82BBA7BC;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,2208(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2208);
	// rlwinm r4,r9,0,11,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	// bl 0x82bb3cd0
	ctx.lr = 0x82BBA770;
	sub_82BB3CD0(ctx, base);
	// lhz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bba718
	if (!ctx.cr6.eq) goto loc_82BBA718;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bba718
	if (ctx.cr6.eq) goto loc_82BBA718;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bba718
	if (ctx.cr6.eq) goto loc_82BBA718;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x82bba718
	goto loc_82BBA718;
loc_82BBA7BC:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stb r11,12(r22)
	PPC_STORE_U8(ctx.r22.u32 + 12, ctx.r11.u8);
	// beq cr6,0x82bba910
	if (ctx.cr6.eq) goto loc_82BBA910;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82BBA7D8:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bba904
	if (!ctx.cr6.eq) goto loc_82BBA904;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bba904
	if (ctx.cr6.eq) goto loc_82BBA904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bba904
	if (ctx.cr6.eq) goto loc_82BBA904;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 * 112;
	// lhzx r8,r10,r24
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// add r3,r10,r24
	ctx.r3.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82bba904
	if (!ctx.cr6.eq) goto loc_82BBA904;
	// lbz r10,82(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82bba85c
	if (ctx.cr6.eq) goto loc_82BBA85C;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82bba904
	if (!ctx.cr6.eq) goto loc_82BBA904;
	// lbz r10,83(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 83);
	// cmplwi cr6,r10,80
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 80, ctx.xer);
	// beq cr6,0x82bba85c
	if (ctx.cr6.eq) goto loc_82BBA85C;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82bba904
	if (!ctx.cr6.eq) goto loc_82BBA904;
loc_82BBA85C:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bba888
	if (ctx.cr6.eq) goto loc_82BBA888;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// b 0x82bba904
	goto loc_82BBA904;
loc_82BBA888:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lwz r6,72(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r6,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bba8ec
	if (ctx.cr6.eq) goto loc_82BBA8EC;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bba8f8
	if (ctx.cr6.eq) goto loc_82BBA8F8;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r9,83(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// ori r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// stb r9,83(r3)
	PPC_STORE_U8(ctx.r3.u32 + 83, ctx.r9.u8);
	// lhz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// sth r7,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r7.u16);
	// lhz r6,86(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 86);
	// sth r6,86(r3)
	PPC_STORE_U16(ctx.r3.u32 + 86, ctx.r6.u16);
	// bl 0x82bb29f0
	ctx.lr = 0x82BBA8E8;
	sub_82BB29F0(ctx, base);
	// b 0x82bba904
	goto loc_82BBA904;
loc_82BBA8EC:
	// lbz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82bba904
	if (!ctx.cr6.eq) goto loc_82BBA904;
loc_82BBA8F8:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
loc_82BBA904:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82bba7d8
	if (!ctx.cr0.eq) goto loc_82BBA7D8;
loc_82BBA910:
	// addi r21,r27,2208
	ctx.r21.s64 = ctx.r27.s64 + 2208;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82bb2230
	ctx.lr = 0x82BBA924;
	sub_82BB2230(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82bb2230
	ctx.lr = 0x82BBA930;
	sub_82BB2230(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bbaa34
	if (ctx.cr6.eq) goto loc_82BBAA34;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82BBA940:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,10(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bbaa28
	if (!ctx.cr6.eq) goto loc_82BBAA28;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbaa28
	if (ctx.cr6.eq) goto loc_82BBAA28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbaa28
	if (ctx.cr6.eq) goto loc_82BBAA28;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// lhzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bbaa28
	if (!ctx.cr6.eq) goto loc_82BBAA28;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbaa28
	if (!ctx.cr6.eq) goto loc_82BBAA28;
	// lhz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bba9dc
	if (ctx.cr6.eq) goto loc_82BBA9DC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bba9dc
	if (ctx.cr6.eq) goto loc_82BBA9DC;
	// lwz r11,2252(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2252(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2252, ctx.r11.u32);
	// b 0x82bba9e8
	goto loc_82BBA9E8;
loc_82BBA9DC:
	// lwz r11,2248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2248(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2248, ctx.r11.u32);
loc_82BBA9E8:
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82bbaa10
	if (!ctx.cr6.eq) goto loc_82BBAA10;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bba260
	ctx.lr = 0x82BBAA10;
	sub_82BBA260(ctx, base);
loc_82BBAA10:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c07fa0
	ctx.lr = 0x82BBAA28;
	sub_82C07FA0(ctx, base);
loc_82BBAA28:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bba940
	if (!ctx.cr0.eq) goto loc_82BBA940;
loc_82BBAA34:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82bbaaf8
	if (ctx.cr6.eq) goto loc_82BBAAF8;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82BBAA44:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,10(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bbaaec
	if (!ctx.cr6.eq) goto loc_82BBAAEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbaaec
	if (ctx.cr6.eq) goto loc_82BBAAEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbaaec
	if (ctx.cr6.eq) goto loc_82BBAAEC;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBAA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,10(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bbaaec
	if (!ctx.cr6.eq) goto loc_82BBAAEC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbaaec
	if (ctx.cr6.eq) goto loc_82BBAAEC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bbaaec
	if (ctx.cr6.eq) goto loc_82BBAAEC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r22,52
	ctx.r3.s64 = ctx.r22.s64 + 52;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// bl 0x82746860
	ctx.lr = 0x82BBAAEC;
	sub_82746860(ctx, base);
loc_82BBAAEC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bbaa44
	if (!ctx.cr0.eq) goto loc_82BBAA44;
loc_82BBAAF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bbaba0
	if (ctx.cr6.eq) goto loc_82BBABA0;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82BBAB08:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bbab94
	if (!ctx.cr6.eq) goto loc_82BBAB94;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbab94
	if (ctx.cr6.eq) goto loc_82BBAB94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbab94
	if (ctx.cr6.eq) goto loc_82BBAB94;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mulli r10,r4,112
	ctx.r10.s64 = ctx.r4.s64 * 112;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x82bbab94
	if (ctx.cr6.gt) goto loc_82BBAB94;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbab94
	if (ctx.cr6.eq) goto loc_82BBAB94;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,108(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBAB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BBAB94:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82bbab08
	if (!ctx.cr0.eq) goto loc_82BBAB08;
loc_82BBABA0:
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lwz r31,-17448(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17448);
	// lwz r30,-17440(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BBABB8;
	sub_821FD9D8(ctx, base);
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
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
	ctx.lr = 0x82BBABE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbabf8
	if (ctx.cr6.eq) goto loc_82BBABF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BBABF8;
	sub_821FD9E0(ctx, base);
loc_82BBABF8:
	// lwz r31,-17448(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17448);
	// lwz r30,-17440(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BBAC08;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
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
	ctx.lr = 0x82BBAC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbac44
	if (ctx.cr6.eq) goto loc_82BBAC44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BBAC44;
	sub_821FD9E0(ctx, base);
loc_82BBAC44:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82bbad14
	if (ctx.cr6.eq) goto loc_82BBAD14;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_82BBAC50:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,10(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 10);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82bbad08
	if (!ctx.cr6.eq) goto loc_82BBAD08;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbad08
	if (ctx.cr6.eq) goto loc_82BBAD08;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bbad08
	if (ctx.cr6.eq) goto loc_82BBAD08;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbad08
	if (!ctx.cr6.eq) goto loc_82BBAD08;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbad08
	if (!ctx.cr6.eq) goto loc_82BBAD08;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbad04
	if (ctx.cr6.eq) goto loc_82BBAD04;
	// lwz r31,-17448(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17448);
	// lwz r29,-17440(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BBACC8;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
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
	ctx.lr = 0x82BBACF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbad04
	if (ctx.cr6.eq) goto loc_82BBAD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BBAD04;
	sub_821FD9E0(ctx, base);
loc_82BBAD04:
	// stw r17,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r17.u32);
loc_82BBAD08:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x82bbac50
	if (!ctx.cr0.eq) goto loc_82BBAC50;
loc_82BBAD14:
	// lwz r31,-17448(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17448);
	// lwz r30,-17440(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BBAD24;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
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
	ctx.lr = 0x82BBAD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbad60
	if (ctx.cr6.eq) goto loc_82BBAD60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BBAD60;
	sub_821FD9E0(ctx, base);
loc_82BBAD60:
	// lwz r31,-17448(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17448);
	// lwz r30,-17440(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BBAD70;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
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
	ctx.lr = 0x82BBAD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbadac
	if (ctx.cr6.eq) goto loc_82BBADAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BBADAC;
	sub_821FD9E0(ctx, base);
loc_82BBADAC:
	// bl 0x82bb1ad0
	ctx.lr = 0x82BBADB0;
	sub_82BB1AD0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bbadd4
	if (ctx.cr6.eq) goto loc_82BBADD4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bbadd4
	if (!ctx.cr6.eq) goto loc_82BBADD4;
	// bl 0x82bb9ff8
	ctx.lr = 0x82BBADD4;
	sub_82BB9FF8(ctx, base);
loc_82BBADD4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBADDC"))) PPC_WEAK_FUNC(sub_82BBADDC);
PPC_FUNC_IMPL(__imp__sub_82BBADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBADE0"))) PPC_WEAK_FUNC(sub_82BBADE0);
PPC_FUNC_IMPL(__imp__sub_82BBADE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,2260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2260);
	// stw r31,12728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12728, ctx.r31.u32);
	// rlwinm r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbae24
	if (ctx.cr6.eq) goto loc_82BBAE24;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,1252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1252);
	// bl 0x82ba0608
	ctx.lr = 0x82BBAE24;
	sub_82BA0608(ctx, base);
loc_82BBAE24:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bbae38
	if (ctx.cr6.eq) goto loc_82BBAE38;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// bl 0x827edf18
	ctx.lr = 0x82BBAE38;
	sub_827EDF18(ctx, base);
loc_82BBAE38:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBAE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2260);
	// rlwinm r10,r11,0,10,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFF80;
	// rlwinm r10,r10,0,24,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFE000FF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbae68
	if (!ctx.cr6.eq) goto loc_82BBAE68;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBAE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bbae70
	goto loc_82BBAE70;
loc_82BBAE68:
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r11.u32);
loc_82BBAE70:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3772, ctx.r10.u32);
	// lfs f0,-30776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3776, temp.u32);
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

__attribute__((alias("__imp__sub_82BBAE9C"))) PPC_WEAK_FUNC(sub_82BBAE9C);
PPC_FUNC_IMPL(__imp__sub_82BBAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBAEA0"))) PPC_WEAK_FUNC(sub_82BBAEA0);
PPC_FUNC_IMPL(__imp__sub_82BBAEA0) {
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
	// bl 0x82bad478
	ctx.lr = 0x82BBAEB4;
	sub_82BAD478(ctx, base);
	// bl 0x82ba0fa8
	ctx.lr = 0x82BBAEB8;
	sub_82BA0FA8(ctx, base);
	// bl 0x82bb6408
	ctx.lr = 0x82BBAEBC;
	sub_82BB6408(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,12752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12752);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x82120a70
	ctx.lr = 0x82BBAECC;
	sub_82120A70(ctx, base);
	// lwz r11,12752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12752);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// bl 0x82153900
	ctx.lr = 0x82BBAEDC;
	sub_82153900(ctx, base);
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

__attribute__((alias("__imp__sub_82BBAEF0"))) PPC_WEAK_FUNC(sub_82BBAEF0);
PPC_FUNC_IMPL(__imp__sub_82BBAEF0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82BBAEF8;
	__savegprlr_14(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lis r5,-32235
	ctx.r5.s64 = -2112552960;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// lis r3,-32212
	ctx.r3.s64 = -2111045632;
	// addi r9,r9,2680
	ctx.r9.s64 = ctx.r9.s64 + 2680;
	// addi r10,r10,2680
	ctx.r10.s64 = ctx.r10.s64 + 2680;
	// addi r8,r8,14792
	ctx.r8.s64 = ctx.r8.s64 + 14792;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r7,r7,-27416
	ctx.r7.s64 = ctx.r7.s64 + -27416;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r6,r6,-27416
	ctx.r6.s64 = ctx.r6.s64 + -27416;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r5,r5,14944
	ctx.r5.s64 = ctx.r5.s64 + 14944;
	// addi r4,r4,14984
	ctx.r4.s64 = ctx.r4.s64 + 14984;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// addi r3,r3,2680
	ctx.r3.s64 = ctx.r3.s64 + 2680;
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lis r31,-32212
	ctx.r31.s64 = -2111045632;
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lis r29,-32235
	ctx.r29.s64 = -2112552960;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lis r28,-32235
	ctx.r28.s64 = -2112552960;
	// lis r27,-32235
	ctx.r27.s64 = -2112552960;
	// lis r26,-32235
	ctx.r26.s64 = -2112552960;
	// lis r25,-32235
	ctx.r25.s64 = -2112552960;
	// lis r24,-32235
	ctx.r24.s64 = -2112552960;
	// addi r9,r30,15064
	ctx.r9.s64 = ctx.r30.s64 + 15064;
	// addi r10,r31,2680
	ctx.r10.s64 = ctx.r31.s64 + 2680;
	// addi r8,r29,15128
	ctx.r8.s64 = ctx.r29.s64 + 15128;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// addi r7,r28,29384
	ctx.r7.s64 = ctx.r28.s64 + 29384;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lis r22,-32235
	ctx.r22.s64 = -2112552960;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lis r14,-32235
	ctx.r14.s64 = -2112552960;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// addi r6,r27,29560
	ctx.r6.s64 = ctx.r27.s64 + 29560;
	// addi r5,r26,15152
	ctx.r5.s64 = ctx.r26.s64 + 15152;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r4,r25,15296
	ctx.r4.s64 = ctx.r25.s64 + 15296;
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// addi r3,r24,15864
	ctx.r3.s64 = ctx.r24.s64 + 15864;
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// lis r23,-32235
	ctx.r23.s64 = -2112552960;
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lis r21,-32235
	ctx.r21.s64 = -2112552960;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lis r20,-32235
	ctx.r20.s64 = -2112552960;
	// lis r19,-32235
	ctx.r19.s64 = -2112552960;
	// lis r18,-32235
	ctx.r18.s64 = -2112552960;
	// lis r17,-32235
	ctx.r17.s64 = -2112552960;
	// lis r16,-32235
	ctx.r16.s64 = -2112552960;
	// addi r9,r22,19256
	ctx.r9.s64 = ctx.r22.s64 + 19256;
	// addi r10,r23,18856
	ctx.r10.s64 = ctx.r23.s64 + 18856;
	// addi r8,r21,24728
	ctx.r8.s64 = ctx.r21.s64 + 24728;
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// addi r7,r20,25904
	ctx.r7.s64 = ctx.r20.s64 + 25904;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r15,-32235
	ctx.r15.s64 = -2112552960;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lis r14,-32212
	ctx.r14.s64 = -2111045632;
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// addi r6,r19,26408
	ctx.r6.s64 = ctx.r19.s64 + 26408;
	// stw r7,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r7.u32);
	// addi r5,r18,19512
	ctx.r5.s64 = ctx.r18.s64 + 19512;
	// addi r4,r17,22632
	ctx.r4.s64 = ctx.r17.s64 + 22632;
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// addi r3,r16,29000
	ctx.r3.s64 = ctx.r16.s64 + 29000;
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// addi r10,r15,29144
	ctx.r10.s64 = ctx.r15.s64 + 29144;
	// stw r4,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
	// addi r8,r9,29288
	ctx.r8.s64 = ctx.r9.s64 + 29288;
	// stw r3,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r3.u32);
	// addi r7,r14,2680
	ctx.r7.s64 = ctx.r14.s64 + 2680;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lis r3,-32212
	ctx.r3.s64 = -2111045632;
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// lis r6,-32212
	ctx.r6.s64 = -2111045632;
	// lis r5,-32212
	ctx.r5.s64 = -2111045632;
	// stw r7,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// lis r4,-32212
	ctx.r4.s64 = -2111045632;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r3,r3,2680
	ctx.r3.s64 = ctx.r3.s64 + 2680;
	// addi r6,r6,2680
	ctx.r6.s64 = ctx.r6.s64 + 2680;
	// addi r5,r5,2680
	ctx.r5.s64 = ctx.r5.s64 + 2680;
	// stw r3,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// addi r4,r4,2680
	ctx.r4.s64 = ctx.r4.s64 + 2680;
	// stw r6,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// addi r10,r10,-30808
	ctx.r10.s64 = ctx.r10.s64 + -30808;
	// stw r5,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r5.u32);
	// addi r9,r9,-31208
	ctx.r9.s64 = ctx.r9.s64 + -31208;
	// stw r4,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r4.u32);
	// addi r8,r8,15600
	ctx.r8.s64 = ctx.r8.s64 + 15600;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lis r28,-32235
	ctx.r28.s64 = -2112552960;
	// stw r9,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// stw r8,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// lis r29,-32235
	ctx.r29.s64 = -2112552960;
	// lis r27,-32235
	ctx.r27.s64 = -2112552960;
	// lis r26,-32235
	ctx.r26.s64 = -2112552960;
	// lis r25,-32235
	ctx.r25.s64 = -2112552960;
	// addi r3,r28,30064
	ctx.r3.s64 = ctx.r28.s64 + 30064;
	// addi r7,r7,2680
	ctx.r7.s64 = ctx.r7.s64 + 2680;
	// addi r6,r31,11624
	ctx.r6.s64 = ctx.r31.s64 + 11624;
	// stw r3,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r3.u32);
	// addi r5,r30,29592
	ctx.r5.s64 = ctx.r30.s64 + 29592;
	// stw r7,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r7.u32);
	// addi r4,r29,29800
	ctx.r4.s64 = ctx.r29.s64 + 29800;
	// stw r6,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r6.u32);
	// addi r10,r27,30696
	ctx.r10.s64 = ctx.r27.s64 + 30696;
	// stw r5,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r5.u32);
	// addi r9,r26,30736
	ctx.r9.s64 = ctx.r26.s64 + 30736;
	// stw r4,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r4.u32);
	// addi r8,r25,30960
	ctx.r8.s64 = ctx.r25.s64 + 30960;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lis r20,-32182
	ctx.r20.s64 = -2109079552;
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// lis r24,-32235
	ctx.r24.s64 = -2112552960;
	// stw r8,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r8.u32);
	// lis r23,-32235
	ctx.r23.s64 = -2112552960;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lis r18,-32235
	ctx.r18.s64 = -2112552960;
	// lis r17,-32235
	ctx.r17.s64 = -2112552960;
	// addi r3,r20,-27416
	ctx.r3.s64 = ctx.r20.s64 + -27416;
	// addi r7,r24,31088
	ctx.r7.s64 = ctx.r24.s64 + 31088;
	// addi r6,r23,31152
	ctx.r6.s64 = ctx.r23.s64 + 31152;
	// stw r3,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r3.u32);
	// addi r5,r22,-31024
	ctx.r5.s64 = ctx.r22.s64 + -31024;
	// stw r7,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
	// addi r4,r21,-30928
	ctx.r4.s64 = ctx.r21.s64 + -30928;
	// stw r6,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r6.u32);
	// addi r10,r19,-30872
	ctx.r10.s64 = ctx.r19.s64 + -30872;
	// stw r5,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r5.u32);
	// addi r9,r18,16592
	ctx.r9.s64 = ctx.r18.s64 + 16592;
	// stw r4,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r4.u32);
	// addi r8,r17,16512
	ctx.r8.s64 = ctx.r17.s64 + 16512;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBB164"))) PPC_WEAK_FUNC(sub_82BBB164);
PPC_FUNC_IMPL(__imp__sub_82BBB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBB168"))) PPC_WEAK_FUNC(sub_82BBB168);
PPC_FUNC_IMPL(__imp__sub_82BBB168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82BBB170;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bb1728
	ctx.lr = 0x82BBB178;
	sub_82BB1728(ctx, base);
	// bl 0x82bb7328
	ctx.lr = 0x82BBB17C;
	sub_82BB7328(ctx, base);
	// bl 0x82bb5820
	ctx.lr = 0x82BBB180;
	sub_82BB5820(ctx, base);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lis r9,-32069
	ctx.r9.s64 = -2101673984;
	// addi r31,r10,10472
	ctx.r31.s64 = ctx.r10.s64 + 10472;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// addi r9,r9,5112
	ctx.r9.s64 = ctx.r9.s64 + 5112;
	// addi r10,r10,-6192
	ctx.r10.s64 = ctx.r10.s64 + -6192;
	// lis r26,-32069
	ctx.r26.s64 = -2101673984;
	// lis r25,-32069
	ctx.r25.s64 = -2101673984;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// addi r10,r26,-3304
	ctx.r10.s64 = ctx.r26.s64 + -3304;
	// addi r9,r25,-6000
	ctx.r9.s64 = ctx.r25.s64 + -6000;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lis r28,-32069
	ctx.r28.s64 = -2101673984;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lis r29,-32069
	ctx.r29.s64 = -2101673984;
	// addi r11,r11,-1776
	ctx.r11.s64 = ctx.r11.s64 + -1776;
	// addi r10,r28,-7144
	ctx.r10.s64 = ctx.r28.s64 + -7144;
	// addi r9,r29,-7680
	ctx.r9.s64 = ctx.r29.s64 + -7680;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r27,-32069
	ctx.r27.s64 = -2101673984;
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// lis r3,-32069
	ctx.r3.s64 = -2101673984;
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// lis r4,-32069
	ctx.r4.s64 = -2101673984;
	// addi r11,r27,-6208
	ctx.r11.s64 = ctx.r27.s64 + -6208;
	// addi r10,r3,-7440
	ctx.r10.s64 = ctx.r3.s64 + -7440;
	// addi r9,r4,-7808
	ctx.r9.s64 = ctx.r4.s64 + -7808;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lis r24,-32069
	ctx.r24.s64 = -2101673984;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// lis r6,-32069
	ctx.r6.s64 = -2101673984;
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// lis r7,-32069
	ctx.r7.s64 = -2101673984;
	// addi r11,r24,-6880
	ctx.r11.s64 = ctx.r24.s64 + -6880;
	// addi r10,r6,-8320
	ctx.r10.s64 = ctx.r6.s64 + -8320;
	// addi r9,r7,-8352
	ctx.r9.s64 = ctx.r7.s64 + -8352;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// lis r30,-32069
	ctx.r30.s64 = -2101673984;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// lis r5,-32069
	ctx.r5.s64 = -2101673984;
	// addi r11,r30,-7296
	ctx.r11.s64 = ctx.r30.s64 + -7296;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lis r4,-31947
	ctx.r4.s64 = -2093678592;
	// addi r11,r5,-8128
	ctx.r11.s64 = ctx.r5.s64 + -8128;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r7,r4,11224
	ctx.r7.s64 = ctx.r4.s64 + 11224;
	// lfs f13,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// lfs f12,-30876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30876);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-31947
	ctx.r6.s64 = -2093678592;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r8,-11008
	ctx.r10.s64 = ctx.r8.s64 + -11008;
	// lfs f0,29760(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r31,308
	ctx.r9.s64 = ctx.r31.s64 + 308;
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stw r11,11224(r4)
	PPC_STORE_U32(ctx.r4.u32 + 11224, ctx.r11.u32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// stfs f12,68(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 68, temp.u32);
	// stw r9,11584(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11584, ctx.r9.u32);
	// bl 0x82bad398
	ctx.lr = 0x82BBB290;
	sub_82BAD398(ctx, base);
	// bl 0x82bad048
	ctx.lr = 0x82BBB294;
	sub_82BAD048(ctx, base);
	// bl 0x82bb64c0
	ctx.lr = 0x82BBB298;
	sub_82BB64C0(ctx, base);
	// lis r5,-32070
	ctx.r5.s64 = -2101739520;
	// lis r4,-32070
	ctx.r4.s64 = -2101739520;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r9,-32070
	ctx.r9.s64 = -2101739520;
	// lis r14,-32070
	ctx.r14.s64 = -2101739520;
	// addi r11,r11,9440
	ctx.r11.s64 = ctx.r11.s64 + 9440;
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// addi r10,r10,9208
	ctx.r10.s64 = ctx.r10.s64 + 9208;
	// addi r9,r9,8952
	ctx.r9.s64 = ctx.r9.s64 + 8952;
	// addi r11,r3,9320
	ctx.r11.s64 = ctx.r3.s64 + 9320;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// lis r15,-32070
	ctx.r15.s64 = -2101739520;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r10,r8,6800
	ctx.r10.s64 = ctx.r8.s64 + 6800;
	// addi r9,r14,5696
	ctx.r9.s64 = ctx.r14.s64 + 5696;
	// addi r11,r15,5264
	ctx.r11.s64 = ctx.r15.s64 + 5264;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// lis r16,-32070
	ctx.r16.s64 = -2101739520;
	// stw r9,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// lis r17,-32070
	ctx.r17.s64 = -2101739520;
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lis r18,-32070
	ctx.r18.s64 = -2101739520;
	// addi r10,r16,5312
	ctx.r10.s64 = ctx.r16.s64 + 5312;
	// addi r9,r17,5224
	ctx.r9.s64 = ctx.r17.s64 + 5224;
	// addi r11,r18,-24
	ctx.r11.s64 = ctx.r18.s64 + -24;
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// lis r19,-32070
	ctx.r19.s64 = -2101739520;
	// stw r9,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r9.u32);
	// lis r20,-32070
	ctx.r20.s64 = -2101739520;
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// lis r21,-32070
	ctx.r21.s64 = -2101739520;
	// addi r10,r19,-1272
	ctx.r10.s64 = ctx.r19.s64 + -1272;
	// addi r9,r20,-2768
	ctx.r9.s64 = ctx.r20.s64 + -2768;
	// addi r11,r21,-2088
	ctx.r11.s64 = ctx.r21.s64 + -2088;
	// stw r10,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r10.u32);
	// lis r22,-32070
	ctx.r22.s64 = -2101739520;
	// stw r9,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r9.u32);
	// lis r23,-32070
	ctx.r23.s64 = -2101739520;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// lis r24,-32070
	ctx.r24.s64 = -2101739520;
	// addi r10,r22,-2112
	ctx.r10.s64 = ctx.r22.s64 + -2112;
	// addi r9,r23,-152
	ctx.r9.s64 = ctx.r23.s64 + -152;
	// addi r11,r24,-5512
	ctx.r11.s64 = ctx.r24.s64 + -5512;
	// stw r10,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r10.u32);
	// lis r25,-32070
	ctx.r25.s64 = -2101739520;
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// lis r26,-32070
	ctx.r26.s64 = -2101739520;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// lis r27,-32070
	ctx.r27.s64 = -2101739520;
	// addi r10,r25,-10008
	ctx.r10.s64 = ctx.r25.s64 + -10008;
	// addi r9,r26,-15456
	ctx.r9.s64 = ctx.r26.s64 + -15456;
	// addi r11,r27,-5688
	ctx.r11.s64 = ctx.r27.s64 + -5688;
	// stw r10,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r10.u32);
	// lis r28,-32070
	ctx.r28.s64 = -2101739520;
	// stw r9,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r9.u32);
	// lis r29,-32070
	ctx.r29.s64 = -2101739520;
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// lis r30,-32070
	ctx.r30.s64 = -2101739520;
	// addi r10,r28,-15464
	ctx.r10.s64 = ctx.r28.s64 + -15464;
	// addi r9,r29,-14376
	ctx.r9.s64 = ctx.r29.s64 + -14376;
	// addi r11,r30,-7056
	ctx.r11.s64 = ctx.r30.s64 + -7056;
	// stw r10,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r10.u32);
	// lis r3,-32070
	ctx.r3.s64 = -2101739520;
	// stw r9,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r9.u32);
	// lis r4,-32070
	ctx.r4.s64 = -2101739520;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// lis r5,-32070
	ctx.r5.s64 = -2101739520;
	// addi r10,r3,-17416
	ctx.r10.s64 = ctx.r3.s64 + -17416;
	// addi r9,r4,-17864
	ctx.r9.s64 = ctx.r4.s64 + -17864;
	// addi r11,r5,-18192
	ctx.r11.s64 = ctx.r5.s64 + -18192;
	// stw r10,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r10.u32);
	// lis r6,-32070
	ctx.r6.s64 = -2101739520;
	// stw r9,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// lis r7,-32070
	ctx.r7.s64 = -2101739520;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// lis r8,-32070
	ctx.r8.s64 = -2101739520;
	// addi r10,r6,-18616
	ctx.r10.s64 = ctx.r6.s64 + -18616;
	// addi r9,r7,-15960
	ctx.r9.s64 = ctx.r7.s64 + -15960;
	// addi r11,r8,-17536
	ctx.r11.s64 = ctx.r8.s64 + -17536;
	// stw r10,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r10.u32);
	// stw r9,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r9.u32);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBB400"))) PPC_WEAK_FUNC(sub_82BBB400);
PPC_FUNC_IMPL(__imp__sub_82BBB400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// ble cr6,0x82bbb450
	if (!ctx.cr6.gt) goto loc_82BBB450;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x82bbb540
	if (ctx.cr6.lt) goto loc_82BBB540;
loc_82BBB434:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82bbb434
	if (!ctx.cr0.eq) goto loc_82BBB434;
	// b 0x82bbb4e0
	goto loc_82BBB4E0;
loc_82BBB450:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x82bbb560
	if (!ctx.cr6.lt) goto loc_82BBB560;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bbb498
	if (!ctx.cr6.eq) goto loc_82BBB498;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bbb488
	if (!ctx.cr6.eq) goto loc_82BBB488;
loc_82BBB474:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bbb474
	if (ctx.cr6.eq) goto loc_82BBB474;
loc_82BBB488:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
loc_82BBB498:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82BBB4C8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82bbb4c8
	if (!ctx.cr0.eq) goto loc_82BBB4C8;
loc_82BBB4E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x82bbb560
	if (!ctx.cr6.lt) goto loc_82BBB560;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r9,r9,-2049
	ctx.r9.s64 = ctx.r9.s64 + -2049;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
loc_82BBB528:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BBB530:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbb450
	if (ctx.cr6.eq) goto loc_82BBB450;
loc_82BBB540:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82bbb540
	if (!ctx.cr0.eq) goto loc_82BBB540;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BBB560:
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// blt cr6,0x82bbb590
	if (ctx.cr6.lt) goto loc_82BBB590;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r9,30,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7;
	// rlwinm r9,r9,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82bbb66c
	goto loc_82BBB66C;
loc_82BBB590:
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x82bbb5f8
	if (ctx.cr6.lt) goto loc_82BBB5F8;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bbb5d4
	if (!ctx.cr6.eq) goto loc_82BBB5D4;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bbb5c4
	if (!ctx.cr6.eq) goto loc_82BBB5C4;
loc_82BBB5B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bbb5b0
	if (ctx.cr6.eq) goto loc_82BBB5B0;
loc_82BBB5C4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
loc_82BBB5D4:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r8,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82bbb66c
	goto loc_82BBB66C;
loc_82BBB5F8:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82bbb6a8
	if (ctx.cr6.lt) goto loc_82BBB6A8;
	// rlwinm r8,r9,11,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x4000;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bbb644
	if (!ctx.cr6.eq) goto loc_82BBB644;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bbb634
	if (!ctx.cr6.eq) goto loc_82BBB634;
loc_82BBB620:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bbb620
	if (ctx.cr6.eq) goto loc_82BBB620;
loc_82BBB634:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
loc_82BBB644:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r8,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r8,r31,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r31.s64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bbb6d4
	if (ctx.cr6.eq) goto loc_82BBB6D4;
	// addi r8,r8,-16384
	ctx.r8.s64 = ctx.r8.s64 + -16384;
loc_82BBB66C:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82BBB68C:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82bbb68c
	if (!ctx.cr0.eq) goto loc_82BBB68C;
	// b 0x82bbb530
	goto loc_82BBB530;
loc_82BBB6A8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82bbb528
	goto loc_82BBB528;
loc_82BBB6D4:
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82bbb6f4
	if (ctx.cr6.eq) goto loc_82BBB6F4;
	// subfc r11,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_82BBB6F4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB6FC"))) PPC_WEAK_FUNC(sub_82BBB6FC);
PPC_FUNC_IMPL(__imp__sub_82BBB6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBB700"))) PPC_WEAK_FUNC(sub_82BBB700);
PPC_FUNC_IMPL(__imp__sub_82BBB700) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82BBB708;
	__savegprlr_18(ctx, base);
	// add r22,r3,r4
	ctx.r22.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r20,r22,-13
	ctx.r20.s64 = ctx.r22.s64 + -13;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r23,255
	ctx.r23.s64 = 255;
	// li r19,32
	ctx.r19.s64 = 32;
loc_82BBB728:
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r31,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 6);
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r27.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r28.u64;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r29.u64;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,27,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FFF;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82bbba9c
	if (ctx.cr6.lt) goto loc_82BBBA9C;
	// subf. r25,r8,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82bbba9c
	if (ctx.cr0.eq) goto loc_82BBBA9C;
	// cmplwi cr6,r25,49151
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 49151, ctx.xer);
	// bgt cr6,0x82bbba9c
	if (ctx.cr6.gt) goto loc_82BBBA9C;
	// cmplwi cr6,r25,2048
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2048, ctx.xer);
	// ble cr6,0x82bbb7dc
	if (!ctx.cr6.gt) goto loc_82BBB7DC;
	// lbz r18,3(r8)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// cmplw cr6,r18,r31
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bbb7dc
	if (ctx.cr6.eq) goto loc_82BBB7DC;
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// xori r9,r10,8223
	ctx.r9.u64 = ctx.r10.u64 ^ 8223;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82bbba9c
	if (ctx.cr6.lt) goto loc_82BBBA9C;
	// subf. r25,r8,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82bbba9c
	if (ctx.cr0.eq) goto loc_82BBBA9C;
	// cmplwi cr6,r25,49151
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 49151, ctx.xer);
	// bgt cr6,0x82bbba9c
	if (ctx.cr6.gt) goto loc_82BBBA9C;
	// cmplwi cr6,r25,2048
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2048, ctx.xer);
	// ble cr6,0x82bbb7dc
	if (!ctx.cr6.gt) goto loc_82BBB7DC;
	// lbz r9,3(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bbba9c
	if (!ctx.cr6.eq) goto loc_82BBBA9C;
loc_82BBB7DC:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bbba9c
	if (!ctx.cr6.eq) goto loc_82BBBA9C;
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82bbba9c
	if (!ctx.cr6.eq) goto loc_82BBBA9C;
	// lbz r9,2(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82bbba9c
	if (!ctx.cr6.eq) goto loc_82BBBA9C;
	// subf. r9,r24,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r24.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ble 0x82bbb8ac
	if (!ctx.cr0.gt) goto loc_82BBB8AC;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x82bbb828
	if (ctx.cr6.gt) goto loc_82BBB828;
	// lbz r11,-2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// or r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stb r10,-2(r4)
	PPC_STORE_U8(ctx.r4.u32 + -2, ctx.r10.u8);
	// b 0x82bbb894
	goto loc_82BBB894;
loc_82BBB828:
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// bgt cr6,0x82bbb83c
	if (ctx.cr6.gt) goto loc_82BBB83C;
	// addi r11,r30,253
	ctx.r11.s64 = ctx.r30.s64 + 253;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x82bbb890
	goto loc_82BBB890;
loc_82BBB83C:
	// addi r10,r30,-18
	ctx.r10.s64 = ctx.r30.s64 + -18;
	// stb r21,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r21.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82bbb88c
	if (!ctx.cr6.gt) goto loc_82BBB88C;
	// addi r11,r10,-256
	ctx.r11.s64 = ctx.r10.s64 + -256;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// divwu r11,r11,r23
	ctx.r11.u32 = ctx.r11.u32 / ctx.r23.u32;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbb87c
	if (ctx.cr6.eq) goto loc_82BBB87C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82BBB870:
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82bbb870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BBB870;
loc_82BBB87C:
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82BBB880:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-255
	ctx.r10.s64 = ctx.r10.s64 + -255;
	// bne 0x82bbb880
	if (!ctx.cr0.eq) goto loc_82BBB880;
loc_82BBB88C:
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_82BBB890:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82BBB894:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x82bbb894
	if (!ctx.cr0.eq) goto loc_82BBB894;
loc_82BBB8AC:
	// lbz r10,3(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bbb9f4
	if (!ctx.cr6.eq) goto loc_82BBB9F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bbb9f4
	if (!ctx.cr6.eq) goto loc_82BBB9F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,5(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bbb9f4
	if (!ctx.cr6.eq) goto loc_82BBB9F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,6(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bbb9f4
	if (!ctx.cr6.eq) goto loc_82BBB9F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,7(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bbb9f4
	if (!ctx.cr6.eq) goto loc_82BBB9F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bbb9f4
	if (!ctx.cr6.eq) goto loc_82BBB9F4;
	// addi r10,r8,9
	ctx.r10.s64 = ctx.r8.s64 + 9;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82bbb950
	if (!ctx.cr6.lt) goto loc_82BBB950;
loc_82BBB930:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82bbb950
	if (!ctx.cr6.eq) goto loc_82BBB950;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82bbb930
	if (ctx.cr6.lt) goto loc_82BBB930;
loc_82BBB950:
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// cmplwi cr6,r25,16384
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16384, ctx.xer);
	// bgt cr6,0x82bbb984
	if (ctx.cr6.gt) goto loc_82BBB984;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// bgt cr6,0x82bbb978
	if (ctx.cr6.gt) goto loc_82BBB978;
	// addi r9,r10,254
	ctx.r9.s64 = ctx.r10.s64 + 254;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// ori r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 | 32;
	// b 0x82bbba70
	goto loc_82BBBA70;
loc_82BBB978:
	// addi r9,r10,-33
	ctx.r9.s64 = ctx.r10.s64 + -33;
	// stb r19,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r19.u8);
	// b 0x82bbb9a0
	goto loc_82BBB9A0;
loc_82BBB984:
	// addi r30,r25,-16384
	ctx.r30.s64 = ctx.r25.s64 + -16384;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x82bbba5c
	if (!ctx.cr6.gt) goto loc_82BBBA5C;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r9,r10,-9
	ctx.r9.s64 = ctx.r10.s64 + -9;
	// rlwimi r31,r30,21,28,28
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r30.u32, 21) & 0x8) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
loc_82BBB9A0:
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82bbb9e8
	if (!ctx.cr6.gt) goto loc_82BBB9E8;
	// addi r10,r9,-256
	ctx.r10.s64 = ctx.r9.s64 + -256;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// divwu r10,r10,r23
	ctx.r10.u32 = ctx.r10.u32 / ctx.r23.u32;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbb9d8
	if (ctx.cr6.eq) goto loc_82BBB9D8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82BBB9CC:
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x82bbb9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BBB9CC;
loc_82BBB9D8:
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82BBB9DC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-255
	ctx.r9.s64 = ctx.r9.s64 + -255;
	// bne 0x82bbb9dc
	if (!ctx.cr0.eq) goto loc_82BBB9DC;
loc_82BBB9E8:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// b 0x82bbba78
	goto loc_82BBBA78;
loc_82BBB9F4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r25,2048
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2048, ctx.xer);
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// bgt cr6,0x82bbba38
	if (ctx.cr6.gt) goto loc_82BBBA38;
	// addi r9,r25,-1
	ctx.r9.s64 = ctx.r25.s64 + -1;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r9,r9,29,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0xFF;
	// rlwimi r8,r10,3,0,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFFF00000007);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// rlwinm r8,r8,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// b 0x82bbbaa8
	goto loc_82BBBAA8;
loc_82BBBA38:
	// cmplwi cr6,r25,16384
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16384, ctx.xer);
	// bgt cr6,0x82bbba58
	if (ctx.cr6.gt) goto loc_82BBBA58;
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// b 0x82bbba74
	goto loc_82BBBA74;
loc_82BBBA58:
	// addi r30,r25,-16384
	ctx.r30.s64 = ctx.r25.s64 + -16384;
loc_82BBBA5C:
	// rlwinm r8,r30,21,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x8;
	// addi r9,r10,254
	ctx.r9.s64 = ctx.r10.s64 + 254;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// ori r9,r8,16
	ctx.r9.u64 = ctx.r8.u64 | 16;
loc_82BBBA70:
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
loc_82BBBA74:
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
loc_82BBBA78:
	// rlwinm r9,r30,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFC;
	// rlwinm r8,r30,26,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0xFF;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// b 0x82bbbaa8
	goto loc_82BBBAA8;
loc_82BBBA9C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
loc_82BBBAA8:
	// blt cr6,0x82bbb728
	if (ctx.cr6.lt) goto loc_82BBB728;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r3,r24,r22
	ctx.r3.s64 = ctx.r22.s64 - ctx.r24.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBBABC"))) PPC_WEAK_FUNC(sub_82BBBABC);
PPC_FUNC_IMPL(__imp__sub_82BBBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBBAC0"))) PPC_WEAK_FUNC(sub_82BBBAC0);
PPC_FUNC_IMPL(__imp__sub_82BBBAC0) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// bgt cr6,0x82bbbaf0
	if (ctx.cr6.gt) goto loc_82BBBAF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bbbb04
	goto loc_82BBBB04;
loc_82BBBAF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbb700
	ctx.lr = 0x82BBBAFC;
	sub_82BBB700(ctx, base);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82BBBB04:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbbbd8
	if (ctx.cr6.eq) goto loc_82BBBBD8;
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne cr6,0x82bbbb38
	if (!ctx.cr6.eq) goto loc_82BBBB38;
	// cmplwi cr6,r3,238
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 238, ctx.xer);
	// bgt cr6,0x82bbbb38
	if (ctx.cr6.gt) goto loc_82BBBB38;
	// addi r10,r3,17
	ctx.r10.s64 = ctx.r3.s64 + 17;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82bbbbc0
	goto loc_82BBBBC0;
loc_82BBBB38:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82bbbb50
	if (ctx.cr6.gt) goto loc_82BBBB50;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stb r9,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// b 0x82bbbbc0
	goto loc_82BBBBC0;
loc_82BBBB50:
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bgt cr6,0x82bbbb68
	if (ctx.cr6.gt) goto loc_82BBBB68;
	// addi r10,r3,253
	ctx.r10.s64 = ctx.r3.s64 + 253;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82bbbbc0
	goto loc_82BBBBC0;
loc_82BBBB68:
	// addi r10,r3,-18
	ctx.r10.s64 = ctx.r3.s64 + -18;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82bbbbb8
	if (!ctx.cr6.gt) goto loc_82BBBBB8;
	// addi r11,r10,-256
	ctx.r11.s64 = ctx.r10.s64 + -256;
	// li r31,255
	ctx.r31.s64 = 255;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbbba8
	if (ctx.cr6.eq) goto loc_82BBBBA8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82BBBB9C:
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82bbbb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BBBB9C;
loc_82BBBBA8:
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82BBBBAC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-255
	ctx.r10.s64 = ctx.r10.s64 + -255;
	// bne 0x82bbbbac
	if (!ctx.cr0.eq) goto loc_82BBBBAC;
loc_82BBBBB8:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
loc_82BBBBC0:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82bbbbc0
	if (!ctx.cr0.eq) goto loc_82BBBBC0;
loc_82BBBBD8:
	// li r10,17
	ctx.r10.s64 = 17;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BBBC18"))) PPC_WEAK_FUNC(sub_82BBBC18);
PPC_FUNC_IMPL(__imp__sub_82BBBC18) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBC20"))) PPC_WEAK_FUNC(sub_82BBBC20);
PPC_FUNC_IMPL(__imp__sub_82BBBC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBC24"))) PPC_WEAK_FUNC(sub_82BBBC24);
PPC_FUNC_IMPL(__imp__sub_82BBBC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBBC28"))) PPC_WEAK_FUNC(sub_82BBBC28);
PPC_FUNC_IMPL(__imp__sub_82BBBC28) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r9,r11,-18636
	ctx.r9.s64 = ctx.r11.s64 + -18636;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BBBC5C;
	sub_82BCACB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBC6C"))) PPC_WEAK_FUNC(sub_82BBBC6C);
PPC_FUNC_IMPL(__imp__sub_82BBBC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBBC70"))) PPC_WEAK_FUNC(sub_82BBBC70);
PPC_FUNC_IMPL(__imp__sub_82BBBC70) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r9,r11,-18652
	ctx.r9.s64 = ctx.r11.s64 + -18652;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BBBCA4;
	sub_82BCACB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBCB4"))) PPC_WEAK_FUNC(sub_82BBBCB4);
PPC_FUNC_IMPL(__imp__sub_82BBBCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBBCB8"))) PPC_WEAK_FUNC(sub_82BBBCB8);
PPC_FUNC_IMPL(__imp__sub_82BBBCB8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82124828
	ctx.lr = 0x82BBBCD8;
	sub_82124828(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbbd30
	if (ctx.cr6.eq) goto loc_82BBBD30;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mulli r11,r9,208
	ctx.r11.s64 = ctx.r9.s64 * 208;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,184(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bbbd30
	if (!ctx.cr6.eq) goto loc_82BBBD30;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
loc_82BBBD30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBBD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r7,-18684
	ctx.r9.s64 = ctx.r7.s64 + -18684;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BBBD88;
	sub_82BCACB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BBBDA0"))) PPC_WEAK_FUNC(sub_82BBBDA0);
PPC_FUNC_IMPL(__imp__sub_82BBBDA0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82124828
	ctx.lr = 0x82BBBDC0;
	sub_82124828(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBDD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbbe18
	if (ctx.cr6.eq) goto loc_82BBBE18;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mulli r11,r9,208
	ctx.r11.s64 = ctx.r9.s64 * 208;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,184(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82bbbe18
	if (ctx.cr6.eq) goto loc_82BBBE18;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
loc_82BBBE18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBBE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r7,-18720
	ctx.r9.s64 = ctx.r7.s64 + -18720;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BBBE70;
	sub_82BCACB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BBBE88"))) PPC_WEAK_FUNC(sub_82BBBE88);
PPC_FUNC_IMPL(__imp__sub_82BBBE88) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821247b8
	ctx.lr = 0x82BBBEA4;
	sub_821247B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbbf20
	if (ctx.cr6.eq) goto loc_82BBBF20;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBBEF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r7,-18760
	ctx.r9.s64 = ctx.r7.s64 + -18760;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BBBF20;
	sub_82BCACB0(ctx, base);
loc_82BBBF20:
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

__attribute__((alias("__imp__sub_82BBBF38"))) PPC_WEAK_FUNC(sub_82BBBF38);
PPC_FUNC_IMPL(__imp__sub_82BBBF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BBBF40;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82124828
	ctx.lr = 0x82BBBF50;
	sub_82124828(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbbff8
	if (ctx.cr6.eq) goto loc_82BBBFF8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBBF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r9,208
	ctx.r11.s64 = ctx.r9.s64 * 208;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82bbc670
	ctx.lr = 0x82BBBFA0;
	sub_82BBC670(ctx, base);
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,124(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBBFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BBBFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,-18788
	ctx.r9.s64 = ctx.r4.s64 + -18788;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BBBFF8;
	sub_82BCACB0(ctx, base);
loc_82BBBFF8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBC000"))) PPC_WEAK_FUNC(sub_82BBC000);
PPC_FUNC_IMPL(__imp__sub_82BBC000) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-17224
	ctx.r10.s64 = ctx.r11.s64 + -17224;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82bbc05c
	if (ctx.cr6.eq) goto loc_82BBC05C;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// b 0x82bbc060
	goto loc_82BBC060;
loc_82BBC05C:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82BBC060:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,18336
	ctx.r9.s64 = ctx.r11.s64 + 18336;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// lwz r3,-4548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4548);
	// bl 0x8220e9d0
	ctx.lr = 0x82BBC0A8;
	sub_8220E9D0(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r9,r10,-16992
	ctx.r9.s64 = ctx.r10.s64 + -16992;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82bbc0ec
	if (ctx.cr6.eq) goto loc_82BBC0EC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// b 0x82bbc0f0
	goto loc_82BBC0F0;
loc_82BBC0EC:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82BBC0F0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r3,-4548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4548);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,18336
	ctx.r9.s64 = ctx.r11.s64 + 18336;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// bl 0x8220ea98
	ctx.lr = 0x82BBC130;
	sub_8220EA98(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r9,r10,-16584
	ctx.r9.s64 = ctx.r10.s64 + -16584;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82bbc174
	if (ctx.cr6.eq) goto loc_82BBC174;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// b 0x82bbc178
	goto loc_82BBC178;
loc_82BBC174:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82BBC178:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r3,-4548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4548);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,18336
	ctx.r9.s64 = ctx.r11.s64 + 18336;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// bl 0x8220e920
	ctx.lr = 0x82BBC1BC;
	sub_8220E920(ctx, base);
	// lis r9,-32068
	ctx.r9.s64 = -2101608448;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r8,r9,-16760
	ctx.r8.s64 = ctx.r9.s64 + -16760;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x82bbc200
	if (ctx.cr6.eq) goto loc_82BBC200;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// b 0x82bbc204
	goto loc_82BBC204;
loc_82BBC200:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82BBC204:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r3,-4548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4548);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,18336
	ctx.r9.s64 = ctx.r11.s64 + 18336;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// bl 0x8220e9c8
	ctx.lr = 0x82BBC244;
	sub_8220E9C8(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r9,r10,-17296
	ctx.r9.s64 = ctx.r10.s64 + -17296;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82bbc288
	if (ctx.cr6.eq) goto loc_82BBC288;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// b 0x82bbc28c
	goto loc_82BBC28C;
loc_82BBC288:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82BBC28C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r3,-4548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4548);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,18336
	ctx.r9.s64 = ctx.r11.s64 + 18336;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// bl 0x8220eaa8
	ctx.lr = 0x82BBC2CC;
	sub_8220EAA8(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r9,r10,-17368
	ctx.r9.s64 = ctx.r10.s64 + -17368;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82bbc310
	if (ctx.cr6.eq) goto loc_82BBC310;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// b 0x82bbc314
	goto loc_82BBC314;
loc_82BBC310:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82BBC314:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r3,-4548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4548);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,18336
	ctx.r9.s64 = ctx.r11.s64 + 18336;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// bl 0x8220eaa0
	ctx.lr = 0x82BBC354;
	sub_8220EAA0(ctx, base);
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

__attribute__((alias("__imp__sub_82BBC36C"))) PPC_WEAK_FUNC(sub_82BBC36C);
PPC_FUNC_IMPL(__imp__sub_82BBC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

