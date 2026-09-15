#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82839690"))) PPC_WEAK_FUNC(sub_82839690);
PPC_FUNC_IMPL(__imp__sub_82839690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828396A8"))) PPC_WEAK_FUNC(sub_828396A8);
PPC_FUNC_IMPL(__imp__sub_828396A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828396C0"))) PPC_WEAK_FUNC(sub_828396C0);
PPC_FUNC_IMPL(__imp__sub_828396C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828396D4"))) PPC_WEAK_FUNC(sub_828396D4);
PPC_FUNC_IMPL(__imp__sub_828396D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828396D8"))) PPC_WEAK_FUNC(sub_828396D8);
PPC_FUNC_IMPL(__imp__sub_828396D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828396F0"))) PPC_WEAK_FUNC(sub_828396F0);
PPC_FUNC_IMPL(__imp__sub_828396F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839708"))) PPC_WEAK_FUNC(sub_82839708);
PPC_FUNC_IMPL(__imp__sub_82839708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839720"))) PPC_WEAK_FUNC(sub_82839720);
PPC_FUNC_IMPL(__imp__sub_82839720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839738"))) PPC_WEAK_FUNC(sub_82839738);
PPC_FUNC_IMPL(__imp__sub_82839738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283974C"))) PPC_WEAK_FUNC(sub_8283974C);
PPC_FUNC_IMPL(__imp__sub_8283974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839750"))) PPC_WEAK_FUNC(sub_82839750);
PPC_FUNC_IMPL(__imp__sub_82839750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839768"))) PPC_WEAK_FUNC(sub_82839768);
PPC_FUNC_IMPL(__imp__sub_82839768) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8283978c
	if (!ctx.cr6.eq) goto loc_8283978C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82839798
	if (ctx.cr6.eq) goto loc_82839798;
loc_8283978C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82839798:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828397A4"))) PPC_WEAK_FUNC(sub_828397A4);
PPC_FUNC_IMPL(__imp__sub_828397A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828397A8"))) PPC_WEAK_FUNC(sub_828397A8);
PPC_FUNC_IMPL(__imp__sub_828397A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 424, ctx.r10.u32);
	// stw r4,532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 532, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828397C4"))) PPC_WEAK_FUNC(sub_828397C4);
PPC_FUNC_IMPL(__imp__sub_828397C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828397C8"))) PPC_WEAK_FUNC(sub_828397C8);
PPC_FUNC_IMPL(__imp__sub_828397C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x828397D0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r22,13192(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r21,13188(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r20,13184(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// stw r30,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r30.u32);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r10.u32);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,8052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8052, ctx.r25.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r10,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r10.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// bge cr6,0x82839918
	if (!ctx.cr6.lt) goto loc_82839918;
	// lwz r6,532(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82839888
	if (!ctx.cr6.eq) goto loc_82839888;
	// lwz r9,436(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// addi r10,r31,1836
	ctx.r10.s64 = ctx.r31.s64 + 1836;
	// lwz r8,1840(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r8,r5,124
	ctx.r8.s64 = ctx.r5.s64 * 124;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82839888
	if (ctx.cr6.eq) goto loc_82839888;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82839888
	if (ctx.cr6.eq) goto loc_82839888;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x828398cc
	if (!ctx.cr6.eq) goto loc_828398CC;
loc_82839888:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82839918
	if (!ctx.cr6.eq) goto loc_82839918;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,588
	ctx.r10.s64 = ctx.r31.s64 + 588;
	// lwz r8,592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r8,r6,124
	ctx.r8.s64 = ctx.r6.s64 * 124;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82839918
	if (ctx.cr6.eq) goto loc_82839918;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82839918
	if (ctx.cr6.eq) goto loc_82839918;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82839918
	if (ctx.cr6.eq) goto loc_82839918;
loc_828398CC:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r11,r7,124
	ctx.r11.s64 = ctx.r7.s64 * 124;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x827fea90
	ctx.lr = 0x828398E8;
	sub_827FEA90(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13232);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8052, ctx.r11.u32);
	// beq cr6,0x82839908
	if (ctx.cr6.eq) goto loc_82839908;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// b 0x82839918
	goto loc_82839918;
loc_82839908:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828397c8
	ctx.lr = 0x82839914;
	sub_828397C8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82839918:
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// stw r22,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r22.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r20,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r20.u32);
	// stw r21,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82839934"))) PPC_WEAK_FUNC(sub_82839934);
PPC_FUNC_IMPL(__imp__sub_82839934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839938"))) PPC_WEAK_FUNC(sub_82839938);
PPC_FUNC_IMPL(__imp__sub_82839938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,8052(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8052);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8052, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283995C"))) PPC_WEAK_FUNC(sub_8283995C);
PPC_FUNC_IMPL(__imp__sub_8283995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839960"))) PPC_WEAK_FUNC(sub_82839960);
PPC_FUNC_IMPL(__imp__sub_82839960) {
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
	// lwz r7,8044(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8044);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r9,476
	ctx.r11.s64 = ctx.r9.s64 + 476;
loc_82839984:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,8044(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8044);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82839984
	if (ctx.cr6.lt) goto loc_82839984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828399A0"))) PPC_WEAK_FUNC(sub_828399A0);
PPC_FUNC_IMPL(__imp__sub_828399A0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r8,8044(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8044);
	// lwz r31,24(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82839a88
	if (!ctx.cr6.gt) goto loc_82839A88;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// addi r8,r3,540
	ctx.r8.s64 = ctx.r3.s64 + 540;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r4,13188(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_828399F4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82839a28
	if (ctx.cr6.eq) goto loc_82839A28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82839a20
	if (ctx.cr6.eq) goto loc_82839A20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82839a18
	if (ctx.cr6.eq) goto loc_82839A18;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82839a2c
	goto loc_82839A2C;
loc_82839A18:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82839a2c
	goto loc_82839A2C;
loc_82839A20:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82839a2c
	goto loc_82839A2C;
loc_82839A28:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82839A2C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82839a5c
	if (ctx.cr6.eq) goto loc_82839A5C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82839a54
	if (ctx.cr6.eq) goto loc_82839A54;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82839a4c
	if (ctx.cr6.eq) goto loc_82839A4C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82839a60
	goto loc_82839A60;
loc_82839A4C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82839a60
	goto loc_82839A60;
loc_82839A54:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82839a60
	goto loc_82839A60;
loc_82839A5C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82839A60:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82839a74
	if (!ctx.cr6.eq) goto loc_82839A74;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82839A74:
	// lwz r11,8044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8044);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828399f4
	if (ctx.cr6.lt) goto loc_828399F4;
loc_82839A88:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839A98"))) PPC_WEAK_FUNC(sub_82839A98);
PPC_FUNC_IMPL(__imp__sub_82839A98) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839AA4"))) PPC_WEAK_FUNC(sub_82839AA4);
PPC_FUNC_IMPL(__imp__sub_82839AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839AA8"))) PPC_WEAK_FUNC(sub_82839AA8);
PPC_FUNC_IMPL(__imp__sub_82839AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r6,r9,-29532
	ctx.r6.s64 = ctx.r9.s64 + -29532;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r7,13188(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,80(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,332(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 332);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82839b08
	if (ctx.cr6.eq) goto loc_82839B08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82839b00
	if (ctx.cr6.eq) goto loc_82839B00;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82839b0c
	if (!ctx.cr6.eq) goto loc_82839B0C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82839b0c
	goto loc_82839B0C;
loc_82839B00:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82839b0c
	goto loc_82839B0C;
loc_82839B08:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82839B0C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82839b34
	if (ctx.cr6.eq) goto loc_82839B34;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82839b2c
	if (ctx.cr6.eq) goto loc_82839B2C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82839b38
	if (!ctx.cr6.eq) goto loc_82839B38;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82839b38
	goto loc_82839B38;
loc_82839B2C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82839b38
	goto loc_82839B38;
loc_82839B34:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82839B38:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,332(r6)
	PPC_STORE_U32(ctx.r6.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839B50"))) PPC_WEAK_FUNC(sub_82839B50);
PPC_FUNC_IMPL(__imp__sub_82839B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82839B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lfs f0,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f13,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lfs f12,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmadds f8,f10,f11,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f8,292(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsel f1,f7,f8,f9
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f9.f64;
	// stfs f1,292(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// beq cr6,0x82839bd0
	if (ctx.cr6.eq) goto loc_82839BD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82839bc8
	if (ctx.cr6.eq) goto loc_82839BC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82839bd4
	if (!ctx.cr6.eq) goto loc_82839BD4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82839bd4
	goto loc_82839BD4;
loc_82839BC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82839bd4
	goto loc_82839BD4;
loc_82839BD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82839BD4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82803978
	ctx.lr = 0x82839BE8;
	sub_82803978(ctx, base);
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82839c14
	if (ctx.cr6.eq) goto loc_82839C14;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82839c0c
	if (ctx.cr6.eq) goto loc_82839C0C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82839c18
	if (!ctx.cr6.eq) goto loc_82839C18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82839c18
	goto loc_82839C18;
loc_82839C0C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82839c18
	goto loc_82839C18;
loc_82839C14:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82839C18:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,257
	ctx.r9.s64 = 16842752;
	// lfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r9,257
	ctx.r8.u64 = ctx.r9.u64 | 257;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f13,-30880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30880);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82839ca4
	if (ctx.cr6.eq) goto loc_82839CA4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x827e4d40
	ctx.lr = 0x82839C4C;
	sub_827E4D40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82839ca4
	if (ctx.cr6.eq) goto loc_82839CA4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x82839c6c
	if (!ctx.cr6.eq) goto loc_82839C6C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stfs f0,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// b 0x82839ca4
	goto loc_82839CA4;
loc_82839C6C:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82839c90
	if (!ctx.cr6.eq) goto loc_82839C90;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// b 0x82839ca4
	goto loc_82839CA4;
loc_82839C90:
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82839ca4
	if (ctx.cr6.eq) goto loc_82839CA4;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x82839ca4
	if (!ctx.cr6.eq) goto loc_82839CA4;
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
loc_82839CA4:
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82839cd0
	if (ctx.cr6.eq) goto loc_82839CD0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82839cc8
	if (ctx.cr6.eq) goto loc_82839CC8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82839cd4
	if (!ctx.cr6.eq) goto loc_82839CD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82839cd4
	goto loc_82839CD4;
loc_82839CC8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82839cd4
	goto loc_82839CD4;
loc_82839CD0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82839CD4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82839d48
	if (ctx.cr6.eq) goto loc_82839D48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x827e4d40
	ctx.lr = 0x82839CF8;
	sub_827E4D40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82839d48
	if (ctx.cr6.eq) goto loc_82839D48;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x82839d48
	if (ctx.cr6.eq) goto loc_82839D48;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82839d34
	if (!ctx.cr6.eq) goto loc_82839D34;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82839D34:
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82839d48
	if (ctx.cr6.eq) goto loc_82839D48;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x82839d48
	if (!ctx.cr6.eq) goto loc_82839D48;
	// stfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_82839D48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82839D50"))) PPC_WEAK_FUNC(sub_82839D50);
PPC_FUNC_IMPL(__imp__sub_82839D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,26592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26592);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82839d98
	if (ctx.cr6.lt) goto loc_82839D98;
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fsel f8,f9,f9,f13
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82839D98:
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839DA0"))) PPC_WEAK_FUNC(sub_82839DA0);
PPC_FUNC_IMPL(__imp__sub_82839DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839DA4"))) PPC_WEAK_FUNC(sub_82839DA4);
PPC_FUNC_IMPL(__imp__sub_82839DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839DA8"))) PPC_WEAK_FUNC(sub_82839DA8);
PPC_FUNC_IMPL(__imp__sub_82839DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-4008
	ctx.r8.s64 = ctx.r10.s64 + -4008;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,-4008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4008);
	ctx.f11.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-29704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,29744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r5,384(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// stfs f0,508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f12,484(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 484, temp.u32);
	// stfs f11,264(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839E0C"))) PPC_WEAK_FUNC(sub_82839E0C);
PPC_FUNC_IMPL(__imp__sub_82839E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839E10"))) PPC_WEAK_FUNC(sub_82839E10);
PPC_FUNC_IMPL(__imp__sub_82839E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82839f04
	if (ctx.cr6.eq) goto loc_82839F04;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82839eb0
	if (ctx.cr6.eq) goto loc_82839EB0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82839f78
	if (!ctx.cr6.eq) goto loc_82839F78;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,12492(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lfs f13,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82839e58
	if (ctx.cr6.eq) goto loc_82839E58;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82839e60
	goto loc_82839E60;
loc_82839E58:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82839E60:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f12,300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82839e90
	if (!ctx.cr6.lt) goto loc_82839E90;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82839ea0
	if (ctx.cr6.lt) goto loc_82839EA0;
loc_82839E90:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82839f78
	if (!ctx.cr6.gt) goto loc_82839F78;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82839f78
	if (!ctx.cr6.gt) goto loc_82839F78;
loc_82839EA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// blr 
	return;
loc_82839EB0:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,12492(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lfs f13,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82839ed0
	if (ctx.cr6.eq) goto loc_82839ED0;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82839ed8
	goto loc_82839ED8;
loc_82839ED0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82839ED8:
	// lfs f12,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fnmsubs f11,f0,f13,f12
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f11,264(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x82839f78
	if (ctx.cr6.gt) goto loc_82839F78;
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// blr 
	return;
loc_82839F04:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,12492(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lfs f13,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82839f24
	if (ctx.cr6.eq) goto loc_82839F24;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82839f2c
	goto loc_82839F2C;
loc_82839F24:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82839F2C:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f12,484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82839f5c
	if (!ctx.cr6.lt) goto loc_82839F5C;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82839f6c
	if (ctx.cr6.lt) goto loc_82839F6C;
loc_82839F5C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82839f78
	if (!ctx.cr6.gt) goto loc_82839F78;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82839f78
	if (!ctx.cr6.gt) goto loc_82839F78;
loc_82839F6C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
loc_82839F78:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839F7C"))) PPC_WEAK_FUNC(sub_82839F7C);
PPC_FUNC_IMPL(__imp__sub_82839F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839F80"))) PPC_WEAK_FUNC(sub_82839F80);
PPC_FUNC_IMPL(__imp__sub_82839F80) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r31,24
	ctx.r31.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r6,r11,224
	ctx.r6.s64 = ctx.r11.s64 + 224;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r5,13188(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82839FC4:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82839ff8
	if (ctx.cr6.eq) goto loc_82839FF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82839ff0
	if (ctx.cr6.eq) goto loc_82839FF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82839fe8
	if (ctx.cr6.eq) goto loc_82839FE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82839ffc
	goto loc_82839FFC;
loc_82839FE8:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82839ffc
	goto loc_82839FFC;
loc_82839FF0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82839ffc
	goto loc_82839FFC;
loc_82839FF8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82839FFC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8283a02c
	if (ctx.cr6.eq) goto loc_8283A02C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8283a024
	if (ctx.cr6.eq) goto loc_8283A024;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8283a01c
	if (ctx.cr6.eq) goto loc_8283A01C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8283a030
	goto loc_8283A030;
loc_8283A01C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8283a030
	goto loc_8283A030;
loc_8283A024:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283a030
	goto loc_8283A030;
loc_8283A02C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8283A030:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8283a044
	if (!ctx.cr6.eq) goto loc_8283A044;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8283A044:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82839fc4
	if (!ctx.cr0.eq) goto loc_82839FC4;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A05C"))) PPC_WEAK_FUNC(sub_8283A05C);
PPC_FUNC_IMPL(__imp__sub_8283A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A060"))) PPC_WEAK_FUNC(sub_8283A060);
PPC_FUNC_IMPL(__imp__sub_8283A060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r4.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r10.u32);
	// stw r9,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r9.u32);
	// stw r10,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A090"))) PPC_WEAK_FUNC(sub_8283A090);
PPC_FUNC_IMPL(__imp__sub_8283A090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,380(r9)
	PPC_STORE_U32(ctx.r9.u32 + 380, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A0A4"))) PPC_WEAK_FUNC(sub_8283A0A4);
PPC_FUNC_IMPL(__imp__sub_8283A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A0A8"))) PPC_WEAK_FUNC(sub_8283A0A8);
PPC_FUNC_IMPL(__imp__sub_8283A0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
loc_8283A0C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283a150
	if (ctx.cr6.lt) goto loc_8283A150;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8283A0E0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8283a144
	if (ctx.cr6.lt) goto loc_8283A144;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// ble cr6,0x8283a138
	if (!ctx.cr6.gt) goto loc_8283A138;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8283A138:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8283a0e0
	if (ctx.cr6.lt) goto loc_8283A0E0;
loc_8283A144:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8283a0c0
	if (ctx.cr6.lt) goto loc_8283A0C0;
loc_8283A150:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A154"))) PPC_WEAK_FUNC(sub_8283A154);
PPC_FUNC_IMPL(__imp__sub_8283A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A158"))) PPC_WEAK_FUNC(sub_8283A158);
PPC_FUNC_IMPL(__imp__sub_8283A158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A170"))) PPC_WEAK_FUNC(sub_8283A170);
PPC_FUNC_IMPL(__imp__sub_8283A170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-29532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r11,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r11.u32);
	// stw r10,320(r6)
	PPC_STORE_U32(ctx.r6.u32 + 320, ctx.r10.u32);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r10,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A1AC"))) PPC_WEAK_FUNC(sub_8283A1AC);
PPC_FUNC_IMPL(__imp__sub_8283A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A1B0"))) PPC_WEAK_FUNC(sub_8283A1B0);
PPC_FUNC_IMPL(__imp__sub_8283A1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A1C8"))) PPC_WEAK_FUNC(sub_8283A1C8);
PPC_FUNC_IMPL(__imp__sub_8283A1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A1E0"))) PPC_WEAK_FUNC(sub_8283A1E0);
PPC_FUNC_IMPL(__imp__sub_8283A1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A1E4"))) PPC_WEAK_FUNC(sub_8283A1E4);
PPC_FUNC_IMPL(__imp__sub_8283A1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A1E8"))) PPC_WEAK_FUNC(sub_8283A1E8);
PPC_FUNC_IMPL(__imp__sub_8283A1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,88(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,88(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A204"))) PPC_WEAK_FUNC(sub_8283A204);
PPC_FUNC_IMPL(__imp__sub_8283A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A208"))) PPC_WEAK_FUNC(sub_8283A208);
PPC_FUNC_IMPL(__imp__sub_8283A208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A220"))) PPC_WEAK_FUNC(sub_8283A220);
PPC_FUNC_IMPL(__imp__sub_8283A220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,88(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A238"))) PPC_WEAK_FUNC(sub_8283A238);
PPC_FUNC_IMPL(__imp__sub_8283A238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f12,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x8283a264
	if (ctx.cr6.eq) goto loc_8283A264;
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8283a26c
	goto loc_8283A26C;
loc_8283A264:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
loc_8283A26C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f11,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8283a2a8
	if (!ctx.cr6.gt) goto loc_8283A2A8;
	// lfs f12,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8283a2c4
	if (!ctx.cr6.lt) goto loc_8283A2C4;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8283a2a8
	if (!ctx.cr6.gt) goto loc_8283A2A8;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_8283A2A8:
	// lfs f0,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,164(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8283A2C4:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8283a2d4
	if (ctx.cr6.eq) goto loc_8283A2D4;
	// stfs f11,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
loc_8283A2D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A2E0"))) PPC_WEAK_FUNC(sub_8283A2E0);
PPC_FUNC_IMPL(__imp__sub_8283A2E0) {
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
	// stfs f0,224(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 224, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A2FC"))) PPC_WEAK_FUNC(sub_8283A2FC);
PPC_FUNC_IMPL(__imp__sub_8283A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A300"))) PPC_WEAK_FUNC(sub_8283A300);
PPC_FUNC_IMPL(__imp__sub_8283A300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A304"))) PPC_WEAK_FUNC(sub_8283A304);
PPC_FUNC_IMPL(__imp__sub_8283A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A308"))) PPC_WEAK_FUNC(sub_8283A308);
PPC_FUNC_IMPL(__imp__sub_8283A308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r7,940(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 940);
	// stfs f0,220(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 220, temp.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r9,632
	ctx.r11.s64 = ctx.r9.s64 + 632;
loc_8283A334:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r8,940(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 940);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8283a334
	if (ctx.cr6.lt) goto loc_8283A334;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A350"))) PPC_WEAK_FUNC(sub_8283A350);
PPC_FUNC_IMPL(__imp__sub_8283A350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stfs f0,812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
	// lwz r10,1208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// stw r7,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,1304(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// beq cr6,0x8283a3f0
	if (ctx.cr6.eq) goto loc_8283A3F0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8283a3e8
	if (ctx.cr6.eq) goto loc_8283A3E8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8283a3e0
	if (ctx.cr6.eq) goto loc_8283A3E0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8283a3f4
	goto loc_8283A3F4;
loc_8283A3E0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283a3f4
	goto loc_8283A3F4;
loc_8283A3E8:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8283a3f4
	goto loc_8283A3F4;
loc_8283A3F0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8283A3F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8283a408
	if (!ctx.cr6.eq) goto loc_8283A408;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// b 0x8283a40c
	goto loc_8283A40C;
loc_8283A408:
	// stw r9,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
loc_8283A40C:
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8283a454
	if (ctx.cr6.eq) goto loc_8283A454;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283a444
	if (ctx.cr6.eq) goto loc_8283A444;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283a43c
	if (ctx.cr6.eq) goto loc_8283A43C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283a448
	if (ctx.cr6.eq) goto loc_8283A448;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8283a448
	goto loc_8283A448;
loc_8283A43C:
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8283a448
	goto loc_8283A448;
loc_8283A444:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8283A448:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82beb878
	ctx.lr = 0x8283A450;
	sub_82BEB878(ctx, base);
	// stw r3,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r3.u32);
loc_8283A454:
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

__attribute__((alias("__imp__sub_8283A468"))) PPC_WEAK_FUNC(sub_8283A468);
PPC_FUNC_IMPL(__imp__sub_8283A468) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,668(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x8283a4dc
	if (ctx.cr6.eq) goto loc_8283A4DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283a4d4
	if (ctx.cr6.eq) goto loc_8283A4D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283a4cc
	if (ctx.cr6.eq) goto loc_8283A4CC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283a4e0
	goto loc_8283A4E0;
loc_8283A4CC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283a4e0
	goto loc_8283A4E0;
loc_8283A4D4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283a4e0
	goto loc_8283A4E0;
loc_8283A4DC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283A4E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283a548
	if (ctx.cr6.eq) goto loc_8283A548;
	// lwz r10,1120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8283a50c
	if (!ctx.cr6.eq) goto loc_8283A50C;
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
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
loc_8283A50C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283a534
	if (ctx.cr6.eq) goto loc_8283A534;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283a52c
	if (ctx.cr6.eq) goto loc_8283A52C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283a538
	if (!ctx.cr6.eq) goto loc_8283A538;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283a538
	goto loc_8283A538;
loc_8283A52C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283a538
	goto loc_8283A538;
loc_8283A534:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283A538:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82beb878
	ctx.lr = 0x8283A544;
	sub_82BEB878(ctx, base);
	// stw r3,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r3.u32);
loc_8283A548:
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

__attribute__((alias("__imp__sub_8283A55C"))) PPC_WEAK_FUNC(sub_8283A55C);
PPC_FUNC_IMPL(__imp__sub_8283A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A560"))) PPC_WEAK_FUNC(sub_8283A560);
PPC_FUNC_IMPL(__imp__sub_8283A560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,716(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8283a59c
	if (ctx.cr6.eq) goto loc_8283A59C;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8283a590
	if (!ctx.cr6.eq) goto loc_8283A590;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283A590:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283A59C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A5A8"))) PPC_WEAK_FUNC(sub_8283A5A8);
PPC_FUNC_IMPL(__imp__sub_8283A5A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,444(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 444);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A5C0"))) PPC_WEAK_FUNC(sub_8283A5C0);
PPC_FUNC_IMPL(__imp__sub_8283A5C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A5D8"))) PPC_WEAK_FUNC(sub_8283A5D8);
PPC_FUNC_IMPL(__imp__sub_8283A5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283a628
	if (ctx.cr6.eq) goto loc_8283A628;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283a618
	if (ctx.cr6.eq) goto loc_8283A618;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283a630
	if (!ctx.cr6.eq) goto loc_8283A630;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283a630
	goto loc_8283A630;
loc_8283A618:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8283a630
	goto loc_8283A630;
loc_8283A628:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283A630:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x8283A63C;
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
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f13,484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f12,488(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// lfs f10,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,384(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f9,424(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f10,304(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
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

__attribute__((alias("__imp__sub_8283A680"))) PPC_WEAK_FUNC(sub_8283A680);
PPC_FUNC_IMPL(__imp__sub_8283A680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,216(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 216, temp.u32);
	// stfs f0,380(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 380, temp.u32);
	// stfs f0,300(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 300, temp.u32);
	// stfs f0,420(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 420, temp.u32);
	// stw r9,460(r7)
	PPC_STORE_U32(ctx.r7.u32 + 460, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A6B0"))) PPC_WEAK_FUNC(sub_8283A6B0);
PPC_FUNC_IMPL(__imp__sub_8283A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f13,408(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,464(r6)
	PPC_STORE_U32(ctx.r6.u32 + 464, ctx.r9.u32);
	// stfs f0,216(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 216, temp.u32);
	// stfs f13,380(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 380, temp.u32);
	// lfs f12,444(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 444);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,300(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 300, temp.u32);
	// lfs f11,448(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 448);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,420(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 420, temp.u32);
	// stw r8,460(r6)
	PPC_STORE_U32(ctx.r6.u32 + 460, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A6F4"))) PPC_WEAK_FUNC(sub_8283A6F4);
PPC_FUNC_IMPL(__imp__sub_8283A6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A6F8"))) PPC_WEAK_FUNC(sub_8283A6F8);
PPC_FUNC_IMPL(__imp__sub_8283A6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8283A700;
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,372(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lfs f0,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f9,f0,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8283a770
	if (!ctx.cr6.gt) goto loc_8283A770;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8283a774
	goto loc_8283A774;
loc_8283A770:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8283A774:
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// beq cr6,0x8283a7bc
	if (ctx.cr6.eq) goto loc_8283A7BC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8283a7ac
	if (ctx.cr6.eq) goto loc_8283A7AC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8283a7c4
	if (!ctx.cr6.eq) goto loc_8283A7C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8283a7c4
	goto loc_8283A7C4;
loc_8283A7AC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8283a7c4
	goto loc_8283A7C4;
loc_8283A7BC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283A7C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x8283A7CC;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,320
	ctx.r11.s64 = ctx.r31.s64 + 320;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// stfs f12,328(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// addi r30,r31,480
	ctx.r30.s64 = ctx.r31.s64 + 480;
	// lfs f11,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8283a8dc
	if (ctx.cr6.eq) goto loc_8283A8DC;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x8283A858;
	sub_82124928(ctx, base);
	// lfs f11,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f4,268(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// fsubs f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f3,260(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f2,264(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f1,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fadds f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f4,432(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// fadds f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f3,436(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f2,440(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lfs f1,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,440(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
loc_8283A8DC:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f31,216(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 216, temp.u32);
	// stfs f31,380(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 380, temp.u32);
	// stfs f31,300(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 300, temp.u32);
	// stfs f31,420(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 420, temp.u32);
	// stw r10,460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 460, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283A90C"))) PPC_WEAK_FUNC(sub_8283A90C);
PPC_FUNC_IMPL(__imp__sub_8283A90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A910"))) PPC_WEAK_FUNC(sub_8283A910);
PPC_FUNC_IMPL(__imp__sub_8283A910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f13,292(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,216(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 216, temp.u32);
	// stfs f13,380(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 380, temp.u32);
	// lfs f12,476(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,300(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 300, temp.u32);
	// lfs f11,280(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,420(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 420, temp.u32);
	// stw r9,460(r7)
	PPC_STORE_U32(ctx.r7.u32 + 460, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A94C"))) PPC_WEAK_FUNC(sub_8283A94C);
PPC_FUNC_IMPL(__imp__sub_8283A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A950"))) PPC_WEAK_FUNC(sub_8283A950);
PPC_FUNC_IMPL(__imp__sub_8283A950) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r10,r10,220
	ctx.r10.s64 = ctx.r10.s64 + 220;
loc_8283A964:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8283a984
	if (ctx.cr6.eq) goto loc_8283A984;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8283a964
	if (ctx.cr6.lt) goto loc_8283A964;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8283A984:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A98C"))) PPC_WEAK_FUNC(sub_8283A98C);
PPC_FUNC_IMPL(__imp__sub_8283A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A990"))) PPC_WEAK_FUNC(sub_8283A990);
PPC_FUNC_IMPL(__imp__sub_8283A990) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r11,580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 580, ctx.r11.u32);
	// stw r11,644(r7)
	PPC_STORE_U32(ctx.r7.u32 + 644, ctx.r11.u32);
	// stw r9,936(r7)
	PPC_STORE_U32(ctx.r7.u32 + 936, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A9B4"))) PPC_WEAK_FUNC(sub_8283A9B4);
PPC_FUNC_IMPL(__imp__sub_8283A9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A9B8"))) PPC_WEAK_FUNC(sub_8283A9B8);
PPC_FUNC_IMPL(__imp__sub_8283A9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A9BC"))) PPC_WEAK_FUNC(sub_8283A9BC);
PPC_FUNC_IMPL(__imp__sub_8283A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A9C0"))) PPC_WEAK_FUNC(sub_8283A9C0);
PPC_FUNC_IMPL(__imp__sub_8283A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,220(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,256(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,220(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A9E0"))) PPC_WEAK_FUNC(sub_8283A9E0);
PPC_FUNC_IMPL(__imp__sub_8283A9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,256(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 256, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A9F4"))) PPC_WEAK_FUNC(sub_8283A9F4);
PPC_FUNC_IMPL(__imp__sub_8283A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A9F8"))) PPC_WEAK_FUNC(sub_8283A9F8);
PPC_FUNC_IMPL(__imp__sub_8283A9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AA10"))) PPC_WEAK_FUNC(sub_8283AA10);
PPC_FUNC_IMPL(__imp__sub_8283AA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AA28"))) PPC_WEAK_FUNC(sub_8283AA28);
PPC_FUNC_IMPL(__imp__sub_8283AA28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
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

__attribute__((alias("__imp__sub_8283AA4C"))) PPC_WEAK_FUNC(sub_8283AA4C);
PPC_FUNC_IMPL(__imp__sub_8283AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AA50"))) PPC_WEAK_FUNC(sub_8283AA50);
PPC_FUNC_IMPL(__imp__sub_8283AA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8283aa7c
	if (ctx.cr6.eq) goto loc_8283AA7C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8283aa88
	if (!ctx.cr6.gt) goto loc_8283AA88;
loc_8283AA7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283AA88:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AA94"))) PPC_WEAK_FUNC(sub_8283AA94);
PPC_FUNC_IMPL(__imp__sub_8283AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AA98"))) PPC_WEAK_FUNC(sub_8283AA98);
PPC_FUNC_IMPL(__imp__sub_8283AA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8283AAC0"))) PPC_WEAK_FUNC(sub_8283AAC0);
PPC_FUNC_IMPL(__imp__sub_8283AAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,960(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 960);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f11,960(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 960, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8283aafc
	if (ctx.cr6.gt) goto loc_8283AAFC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8283AAFC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AB04"))) PPC_WEAK_FUNC(sub_8283AB04);
PPC_FUNC_IMPL(__imp__sub_8283AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AB08"))) PPC_WEAK_FUNC(sub_8283AB08);
PPC_FUNC_IMPL(__imp__sub_8283AB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,968(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 968);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AB20"))) PPC_WEAK_FUNC(sub_8283AB20);
PPC_FUNC_IMPL(__imp__sub_8283AB20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,148(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// addi r8,r11,218
	ctx.r8.s64 = ctx.r11.s64 + 218;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8283AB54"))) PPC_WEAK_FUNC(sub_8283AB54);
PPC_FUNC_IMPL(__imp__sub_8283AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AB58"))) PPC_WEAK_FUNC(sub_8283AB58);
PPC_FUNC_IMPL(__imp__sub_8283AB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
loc_8283AB70:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
loc_8283AB7C:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8283abf4
	if (!ctx.cr6.gt) goto loc_8283ABF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8283ab7c
	if (ctx.cr6.lt) goto loc_8283AB7C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8283abf8
	if (ctx.cr6.eq) goto loc_8283ABF8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r7,r9,r6
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
loc_8283ABB4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8283abf4
	if (!ctx.cr6.gt) goto loc_8283ABF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8283abb4
	if (ctx.cr6.lt) goto loc_8283ABB4;
	// b 0x8283abf8
	goto loc_8283ABF8;
loc_8283ABF4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8283ABF8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// blt cr6,0x8283ab70
	if (ctx.cr6.lt) goto loc_8283AB70;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AC0C"))) PPC_WEAK_FUNC(sub_8283AC0C);
PPC_FUNC_IMPL(__imp__sub_8283AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AC10"))) PPC_WEAK_FUNC(sub_8283AC10);
PPC_FUNC_IMPL(__imp__sub_8283AC10) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,218
	ctx.r10.s64 = ctx.r4.s64 + 218;
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

__attribute__((alias("__imp__sub_8283AC4C"))) PPC_WEAK_FUNC(sub_8283AC4C);
PPC_FUNC_IMPL(__imp__sub_8283AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AC50"))) PPC_WEAK_FUNC(sub_8283AC50);
PPC_FUNC_IMPL(__imp__sub_8283AC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r6,r9,-29532
	ctx.r6.s64 = ctx.r9.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r7,13188(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283acac
	if (ctx.cr6.eq) goto loc_8283ACAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283aca4
	if (ctx.cr6.eq) goto loc_8283ACA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283acb0
	if (!ctx.cr6.eq) goto loc_8283ACB0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8283acb0
	goto loc_8283ACB0;
loc_8283ACA4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283acb0
	goto loc_8283ACB0;
loc_8283ACAC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283ACB0:
	// lwz r10,244(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 244);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283acdc
	if (ctx.cr6.eq) goto loc_8283ACDC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283acd4
	if (ctx.cr6.eq) goto loc_8283ACD4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8283ace0
	if (!ctx.cr6.eq) goto loc_8283ACE0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8283ace0
	goto loc_8283ACE0;
loc_8283ACD4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283ace0
	goto loc_8283ACE0;
loc_8283ACDC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283ACE0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,244(r6)
	PPC_STORE_U32(ctx.r6.u32 + 244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283ACF8"))) PPC_WEAK_FUNC(sub_8283ACF8);
PPC_FUNC_IMPL(__imp__sub_8283ACF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,680(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 680);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8283AD20"))) PPC_WEAK_FUNC(sub_8283AD20);
PPC_FUNC_IMPL(__imp__sub_8283AD20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r7,-16192
	ctx.r7.s64 = ctx.r7.s64 + -16192;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8283AD44:
	// stw r7,928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 928, ctx.r7.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8283ad44
	if (!ctx.cr0.eq) goto loc_8283AD44;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r10,-7772
	ctx.r7.s64 = ctx.r10.s64 + -7772;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r4,24803
	ctx.r4.s64 = 24803;
	// stw r7,980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 980, ctx.r7.u32);
	// addi r3,r9,-7756
	ctx.r3.s64 = ctx.r9.s64 + -7756;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,-7720
	ctx.r9.s64 = ctx.r5.s64 + -7720;
	// stw r3,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r3.u32);
	// li r7,24804
	ctx.r7.s64 = 24804;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// addi r5,r10,-16644
	ctx.r5.s64 = ctx.r10.s64 + -16644;
	// stw r7,736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 736, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r3,24805
	ctx.r3.s64 = 24805;
	// stw r5,984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 984, ctx.r5.u32);
	// addi r10,r6,-7684
	ctx.r10.s64 = ctx.r6.s64 + -7684;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// addi r7,r4,-7648
	ctx.r7.s64 = ctx.r4.s64 + -7648;
	// stw r10,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r10.u32);
	// li r6,24808
	ctx.r6.s64 = 24808;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// addi r4,r9,-7620
	ctx.r4.s64 = ctx.r9.s64 + -7620;
	// stw r6,740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 740, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r10,24811
	ctx.r10.s64 = 24811;
	// stw r4,988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 988, ctx.r4.u32);
	// addi r9,r5,-7612
	ctx.r9.s64 = ctx.r5.s64 + -7612;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// addi r6,r3,-7584
	ctx.r6.s64 = ctx.r3.s64 + -7584;
	// stw r9,788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 788, ctx.r9.u32);
	// li r5,24817
	ctx.r5.s64 = 24817;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// addi r3,r7,-9968
	ctx.r3.s64 = ctx.r7.s64 + -9968;
	// stw r5,744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 744, ctx.r5.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r9,24816
	ctx.r9.s64 = 24816;
	// stw r3,992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 992, ctx.r3.u32);
	// addi r7,r4,-7556
	ctx.r7.s64 = ctx.r4.s64 + -7556;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r5,r10,-7528
	ctx.r5.s64 = ctx.r10.s64 + -7528;
	// stw r7,792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 792, ctx.r7.u32);
	// li r4,24806
	ctx.r4.s64 = 24806;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r5,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r5.u32);
	// addi r10,r6,-7508
	ctx.r10.s64 = ctx.r6.s64 + -7508;
	// stw r4,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r4.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r7,24807
	ctx.r7.s64 = 24807;
	// stw r10,996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 996, ctx.r10.u32);
	// addi r6,r3,-7492
	ctx.r6.s64 = ctx.r3.s64 + -7492;
	// addi r4,r9,-7456
	ctx.r4.s64 = ctx.r9.s64 + -7456;
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r6,796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 796, ctx.r6.u32);
	// li r3,24812
	ctx.r3.s64 = 24812;
	// stw r4,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,-7420
	ctx.r9.s64 = ctx.r5.s64 + -7420;
	// stw r3,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r3.u32);
	// li r7,24818
	ctx.r7.s64 = 24818;
	// addi r6,r10,-7412
	ctx.r6.s64 = ctx.r10.s64 + -7412;
	// stw r9,1000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1000, ctx.r9.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// li r5,24810
	ctx.r5.s64 = 24810;
	// stw r6,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r6.u32);
	// addi r10,r3,-7380
	ctx.r10.s64 = ctx.r3.s64 + -7380;
	// stw r4,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r4.u32);
	// stw r5,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r5.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r10.u32);
	// li r7,24813
	ctx.r7.s64 = 24813;
	// addi r6,r9,-7364
	ctx.r6.s64 = ctx.r9.s64 + -7364;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// li r3,24814
	ctx.r3.s64 = 24814;
	// stw r6,804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 804, ctx.r6.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r4,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r4.u32);
	// addi r9,r5,-7324
	ctx.r9.s64 = ctx.r5.s64 + -7324;
	// stw r3,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r3.u32);
	// li r7,24809
	ctx.r7.s64 = 24809;
	// addi r6,r10,-7316
	ctx.r6.s64 = ctx.r10.s64 + -7316;
	// stw r9,1008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1008, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// li r3,24815
	ctx.r3.s64 = 24815;
	// stw r6,808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 808, ctx.r6.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r4,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r4.u32);
	// addi r9,r5,-7284
	ctx.r9.s64 = ctx.r5.s64 + -7284;
	// stw r3,764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 764, ctx.r3.u32);
	// addi r7,r10,-7268
	ctx.r7.s64 = ctx.r10.s64 + -7268;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,1012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1012, ctx.r9.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 812, ctx.r7.u32);
	// addi r3,r6,-7228
	ctx.r3.s64 = ctx.r6.s64 + -7228;
	// stw r4,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r4.u32);
	// addi r10,r5,-7220
	ctx.r10.s64 = ctx.r5.s64 + -7220;
	// stw r8,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r8.u32);
	// stw r3,1016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1016, ctx.r3.u32);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r10,816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 816, ctx.r10.u32);
	// stw r4,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r4.u32);
	// stw r8,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AF2C"))) PPC_WEAK_FUNC(sub_8283AF2C);
PPC_FUNC_IMPL(__imp__sub_8283AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AF30"))) PPC_WEAK_FUNC(sub_8283AF30);
PPC_FUNC_IMPL(__imp__sub_8283AF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,964(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 964);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8283AF58"))) PPC_WEAK_FUNC(sub_8283AF58);
PPC_FUNC_IMPL(__imp__sub_8283AF58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 972);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8283AF80"))) PPC_WEAK_FUNC(sub_8283AF80);
PPC_FUNC_IMPL(__imp__sub_8283AF80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 420);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8283AFA8"))) PPC_WEAK_FUNC(sub_8283AFA8);
PPC_FUNC_IMPL(__imp__sub_8283AFA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AFC0"))) PPC_WEAK_FUNC(sub_8283AFC0);
PPC_FUNC_IMPL(__imp__sub_8283AFC0) {
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
	// lfs f13,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8283aff0
	if (!ctx.cr6.gt) goto loc_8283AFF0;
	// lfs f0,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8283AFF0:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283AFF8"))) PPC_WEAK_FUNC(sub_8283AFF8);
PPC_FUNC_IMPL(__imp__sub_8283AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,408(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 408);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8283b020
	if (ctx.cr6.eq) goto loc_8283B020;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8283B020:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B030"))) PPC_WEAK_FUNC(sub_8283B030);
PPC_FUNC_IMPL(__imp__sub_8283B030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-4008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B040"))) PPC_WEAK_FUNC(sub_8283B040);
PPC_FUNC_IMPL(__imp__sub_8283B040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,408(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 408);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8283b068
	if (ctx.cr6.eq) goto loc_8283B068;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,-4392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8283B068:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B078"))) PPC_WEAK_FUNC(sub_8283B078);
PPC_FUNC_IMPL(__imp__sub_8283B078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lfs f0,-19780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B088"))) PPC_WEAK_FUNC(sub_8283B088);
PPC_FUNC_IMPL(__imp__sub_8283B088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B0A8"))) PPC_WEAK_FUNC(sub_8283B0A8);
PPC_FUNC_IMPL(__imp__sub_8283B0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B0C0"))) PPC_WEAK_FUNC(sub_8283B0C0);
PPC_FUNC_IMPL(__imp__sub_8283B0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x8283b0dc
	if (!ctx.cr6.lt) goto loc_8283B0DC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8283b0e8
	if (!ctx.cr6.lt) goto loc_8283B0E8;
loc_8283B0DC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B0E8:
	// addi r10,r5,9
	ctx.r10.s64 = ctx.r5.s64 + 9;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B0FC"))) PPC_WEAK_FUNC(sub_8283B0FC);
PPC_FUNC_IMPL(__imp__sub_8283B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B100"))) PPC_WEAK_FUNC(sub_8283B100);
PPC_FUNC_IMPL(__imp__sub_8283B100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B118"))) PPC_WEAK_FUNC(sub_8283B118);
PPC_FUNC_IMPL(__imp__sub_8283B118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B130"))) PPC_WEAK_FUNC(sub_8283B130);
PPC_FUNC_IMPL(__imp__sub_8283B130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,14
	ctx.r10.s64 = ctx.r5.s64 + 14;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B150"))) PPC_WEAK_FUNC(sub_8283B150);
PPC_FUNC_IMPL(__imp__sub_8283B150) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283b180
	if (ctx.cr6.lt) goto loc_8283B180;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8283b180
	if (!ctx.cr6.lt) goto loc_8283B180;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8283b18c
	if (!ctx.cr6.eq) goto loc_8283B18C;
loc_8283B180:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B18C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B198"))) PPC_WEAK_FUNC(sub_8283B198);
PPC_FUNC_IMPL(__imp__sub_8283B198) {
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
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x8283b1e4
	if (ctx.cr6.eq) goto loc_8283B1E4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8283b1dc
	if (ctx.cr6.eq) goto loc_8283B1DC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8283b1d4
	if (ctx.cr6.eq) goto loc_8283B1D4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8283b1e8
	goto loc_8283B1E8;
loc_8283B1D4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283b1e8
	goto loc_8283B1E8;
loc_8283B1DC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8283b1e8
	goto loc_8283B1E8;
loc_8283B1E4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8283B1E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8283b218
	if (ctx.cr6.eq) goto loc_8283B218;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8283b210
	if (ctx.cr6.eq) goto loc_8283B210;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8283b21c
	if (!ctx.cr6.eq) goto loc_8283B21C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8283b21c
	goto loc_8283B21C;
loc_8283B210:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x8283b21c
	goto loc_8283B21C;
loc_8283B218:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8283B21C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r8,68
	ctx.r10.s64 = ctx.r8.s64 + 68;
loc_8283B224:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8283b244
	if (ctx.cr6.eq) goto loc_8283B244;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8283b224
	if (ctx.cr6.lt) goto loc_8283B224;
	// blr 
	return;
loc_8283B244:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B260"))) PPC_WEAK_FUNC(sub_8283B260);
PPC_FUNC_IMPL(__imp__sub_8283B260) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r5,99
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 99, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,35
	ctx.r10.s64 = ctx.r5.s64 + 35;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stwx r4,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B28C"))) PPC_WEAK_FUNC(sub_8283B28C);
PPC_FUNC_IMPL(__imp__sub_8283B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B290"))) PPC_WEAK_FUNC(sub_8283B290);
PPC_FUNC_IMPL(__imp__sub_8283B290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r7,r9,-29532
	ctx.r7.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,48(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// beq cr6,0x8283b2e0
	if (ctx.cr6.eq) goto loc_8283B2E0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283b2d8
	if (ctx.cr6.eq) goto loc_8283B2D8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8283b2d0
	if (ctx.cr6.eq) goto loc_8283B2D0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8283b2e4
	goto loc_8283B2E4;
loc_8283B2D0:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8283b2e4
	goto loc_8283B2E4;
loc_8283B2D8:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// b 0x8283b2e4
	goto loc_8283B2E4;
loc_8283B2E0:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8283B2E4:
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283b310
	if (ctx.cr6.eq) goto loc_8283B310;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283b308
	if (ctx.cr6.eq) goto loc_8283B308;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283b314
	if (!ctx.cr6.eq) goto loc_8283B314;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283b314
	goto loc_8283B314;
loc_8283B308:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8283b314
	goto loc_8283B314;
loc_8283B310:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8283B314:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8283b34c
	if (ctx.cr6.eq) goto loc_8283B34C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283b344
	if (ctx.cr6.eq) goto loc_8283B344;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283b348
	if (ctx.cr6.eq) goto loc_8283B348;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8283b33c
	if (ctx.cr6.eq) goto loc_8283B33C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x8283b348
	goto loc_8283B348;
loc_8283B33C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8283b348
	goto loc_8283B348;
loc_8283B344:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8283B348:
	// b 0x8283b198
	sub_8283B198(ctx, base);
	return;
loc_8283B34C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B358"))) PPC_WEAK_FUNC(sub_8283B358);
PPC_FUNC_IMPL(__imp__sub_8283B358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r5,99
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 99, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283b3cc
	if (ctx.cr6.eq) goto loc_8283B3CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283b3c4
	if (ctx.cr6.eq) goto loc_8283B3C4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8283b3d0
	if (!ctx.cr6.eq) goto loc_8283B3D0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283b3d0
	goto loc_8283B3D0;
loc_8283B3C4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8283b3d0
	goto loc_8283B3D0;
loc_8283B3CC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8283B3D0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8283b3f8
	if (ctx.cr6.eq) goto loc_8283B3F8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8283b3f0
	if (ctx.cr6.eq) goto loc_8283B3F0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8283b3fc
	if (!ctx.cr6.eq) goto loc_8283B3FC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8283b3fc
	goto loc_8283B3FC;
loc_8283B3F0:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x8283b3fc
	goto loc_8283B3FC;
loc_8283B3F8:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8283B3FC:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B424"))) PPC_WEAK_FUNC(sub_8283B424);
PPC_FUNC_IMPL(__imp__sub_8283B424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B428"))) PPC_WEAK_FUNC(sub_8283B428);
PPC_FUNC_IMPL(__imp__sub_8283B428) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r5,99
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 99, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B464"))) PPC_WEAK_FUNC(sub_8283B464);
PPC_FUNC_IMPL(__imp__sub_8283B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B468"))) PPC_WEAK_FUNC(sub_8283B468);
PPC_FUNC_IMPL(__imp__sub_8283B468) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x8283b49c
	if (!ctx.cr6.gt) goto loc_8283B49C;
	// cmpwi cr6,r5,99
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 99, ctx.xer);
	// bge cr6,0x8283b49c
	if (!ctx.cr6.lt) goto loc_8283B49C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,35
	ctx.r10.s64 = ctx.r5.s64 + 35;
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
loc_8283B49C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B4A4"))) PPC_WEAK_FUNC(sub_8283B4A4);
PPC_FUNC_IMPL(__imp__sub_8283B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B4A8"))) PPC_WEAK_FUNC(sub_8283B4A8);
PPC_FUNC_IMPL(__imp__sub_8283B4A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x8283b4fc
	if (!ctx.cr6.gt) goto loc_8283B4FC;
	// cmpwi cr6,r5,99
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 99, ctx.xer);
	// bge cr6,0x8283b4fc
	if (!ctx.cr6.lt) goto loc_8283B4FC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8283b4fc
	if (ctx.cr6.lt) goto loc_8283B4FC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x8283b4fc
	if (!ctx.cr6.lt) goto loc_8283B4FC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
loc_8283B4FC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B504"))) PPC_WEAK_FUNC(sub_8283B504);
PPC_FUNC_IMPL(__imp__sub_8283B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B508"))) PPC_WEAK_FUNC(sub_8283B508);
PPC_FUNC_IMPL(__imp__sub_8283B508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B520"))) PPC_WEAK_FUNC(sub_8283B520);
PPC_FUNC_IMPL(__imp__sub_8283B520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B538"))) PPC_WEAK_FUNC(sub_8283B538);
PPC_FUNC_IMPL(__imp__sub_8283B538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8283b55c
	if (!ctx.cr6.eq) goto loc_8283B55C;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8283b568
	if (!ctx.cr6.eq) goto loc_8283B568;
loc_8283B55C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B568:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B574"))) PPC_WEAK_FUNC(sub_8283B574);
PPC_FUNC_IMPL(__imp__sub_8283B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B578"))) PPC_WEAK_FUNC(sub_8283B578);
PPC_FUNC_IMPL(__imp__sub_8283B578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B57C"))) PPC_WEAK_FUNC(sub_8283B57C);
PPC_FUNC_IMPL(__imp__sub_8283B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B580"))) PPC_WEAK_FUNC(sub_8283B580);
PPC_FUNC_IMPL(__imp__sub_8283B580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283b5e0
	if (ctx.cr6.eq) goto loc_8283B5E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283b5c0
	if (ctx.cr6.eq) goto loc_8283B5C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283b5e8
	if (!ctx.cr6.eq) goto loc_8283B5E8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8283B5C0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8283B5E0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283B5E8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B5FC"))) PPC_WEAK_FUNC(sub_8283B5FC);
PPC_FUNC_IMPL(__imp__sub_8283B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B600"))) PPC_WEAK_FUNC(sub_8283B600);
PPC_FUNC_IMPL(__imp__sub_8283B600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B614"))) PPC_WEAK_FUNC(sub_8283B614);
PPC_FUNC_IMPL(__imp__sub_8283B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B618"))) PPC_WEAK_FUNC(sub_8283B618);
PPC_FUNC_IMPL(__imp__sub_8283B618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B630"))) PPC_WEAK_FUNC(sub_8283B630);
PPC_FUNC_IMPL(__imp__sub_8283B630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,-2
	ctx.r7.s64 = -2;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283b684
	if (ctx.cr6.eq) goto loc_8283B684;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283b67c
	if (ctx.cr6.eq) goto loc_8283B67C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283b674
	if (ctx.cr6.eq) goto loc_8283B674;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283b688
	goto loc_8283B688;
loc_8283B674:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283b688
	goto loc_8283B688;
loc_8283B67C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283b688
	goto loc_8283B688;
loc_8283B684:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283B688:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283b6f8
	if (ctx.cr6.eq) goto loc_8283B6F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283b6b8
	if (ctx.cr6.eq) goto loc_8283B6B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283b6b0
	if (ctx.cr6.eq) goto loc_8283B6B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283b6bc
	if (!ctx.cr6.eq) goto loc_8283B6BC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283b6bc
	goto loc_8283B6BC;
loc_8283B6B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283b6bc
	goto loc_8283B6BC;
loc_8283B6B8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283B6BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x8283b6d8
	if (!ctx.cr6.lt) goto loc_8283B6D8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8283b6e4
	if (!ctx.cr6.lt) goto loc_8283B6E4;
loc_8283B6D8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B6E4:
	// addi r10,r5,9
	ctx.r10.s64 = ctx.r5.s64 + 9;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B6F8:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B700"))) PPC_WEAK_FUNC(sub_8283B700);
PPC_FUNC_IMPL(__imp__sub_8283B700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8283b71c
	if (ctx.cr6.lt) goto loc_8283B71C;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// blt cr6,0x8283b728
	if (ctx.cr6.lt) goto loc_8283B728;
loc_8283B71C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B728:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B73C"))) PPC_WEAK_FUNC(sub_8283B73C);
PPC_FUNC_IMPL(__imp__sub_8283B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B740"))) PPC_WEAK_FUNC(sub_8283B740);
PPC_FUNC_IMPL(__imp__sub_8283B740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B758"))) PPC_WEAK_FUNC(sub_8283B758);
PPC_FUNC_IMPL(__imp__sub_8283B758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B770"))) PPC_WEAK_FUNC(sub_8283B770);
PPC_FUNC_IMPL(__imp__sub_8283B770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// beq cr6,0x8283b790
	if (ctx.cr6.eq) goto loc_8283B790;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
loc_8283B790:
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B798"))) PPC_WEAK_FUNC(sub_8283B798);
PPC_FUNC_IMPL(__imp__sub_8283B798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
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

__attribute__((alias("__imp__sub_8283B7C0"))) PPC_WEAK_FUNC(sub_8283B7C0);
PPC_FUNC_IMPL(__imp__sub_8283B7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 376, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B7D8"))) PPC_WEAK_FUNC(sub_8283B7D8);
PPC_FUNC_IMPL(__imp__sub_8283B7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B7F0"))) PPC_WEAK_FUNC(sub_8283B7F0);
PPC_FUNC_IMPL(__imp__sub_8283B7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,300(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283b850
	if (ctx.cr6.eq) goto loc_8283B850;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283b830
	if (ctx.cr6.eq) goto loc_8283B830;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283b858
	if (!ctx.cr6.eq) goto loc_8283B858;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8283B830:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8283B850:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283B858:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B86C"))) PPC_WEAK_FUNC(sub_8283B86C);
PPC_FUNC_IMPL(__imp__sub_8283B86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B870"))) PPC_WEAK_FUNC(sub_8283B870);
PPC_FUNC_IMPL(__imp__sub_8283B870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1956(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1956);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B888"))) PPC_WEAK_FUNC(sub_8283B888);
PPC_FUNC_IMPL(__imp__sub_8283B888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x8283b8a4
	if (!ctx.cr6.lt) goto loc_8283B8A4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8283b8b0
	if (!ctx.cr6.lt) goto loc_8283B8B0;
loc_8283B8A4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B8B0:
	// addi r10,r5,491
	ctx.r10.s64 = ctx.r5.s64 + 491;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B8C4"))) PPC_WEAK_FUNC(sub_8283B8C4);
PPC_FUNC_IMPL(__imp__sub_8283B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B8C8"))) PPC_WEAK_FUNC(sub_8283B8C8);
PPC_FUNC_IMPL(__imp__sub_8283B8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,1964
	ctx.r11.s64 = ctx.r11.s64 + 1964;
loc_8283B8DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8283b904
	if (ctx.cr6.eq) goto loc_8283B904;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8283b8dc
	if (ctx.cr6.lt) goto loc_8283B8DC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283B904:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B90C"))) PPC_WEAK_FUNC(sub_8283B90C);
PPC_FUNC_IMPL(__imp__sub_8283B90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B910"))) PPC_WEAK_FUNC(sub_8283B910);
PPC_FUNC_IMPL(__imp__sub_8283B910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1748(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1748);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B928"))) PPC_WEAK_FUNC(sub_8283B928);
PPC_FUNC_IMPL(__imp__sub_8283B928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bge cr6,0x8283b974
	if (!ctx.cr6.lt) goto loc_8283B974;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283b974
	if (ctx.cr6.lt) goto loc_8283B974;
	// addi r10,r5,533
	ctx.r10.s64 = ctx.r5.s64 + 533;
	// lfs f0,1616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// ble cr6,0x8283b97c
	if (!ctx.cr6.gt) goto loc_8283B97C;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8283B974:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8283B97C:
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B984"))) PPC_WEAK_FUNC(sub_8283B984);
PPC_FUNC_IMPL(__imp__sub_8283B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B988"))) PPC_WEAK_FUNC(sub_8283B988);
PPC_FUNC_IMPL(__imp__sub_8283B988) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// bge cr6,0x8283b9bc
	if (!ctx.cr6.lt) goto loc_8283B9BC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283b9bc
	if (ctx.cr6.lt) goto loc_8283B9BC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,502
	ctx.r10.s64 = ctx.r5.s64 + 502;
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
loc_8283B9BC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B9C4"))) PPC_WEAK_FUNC(sub_8283B9C4);
PPC_FUNC_IMPL(__imp__sub_8283B9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B9C8"))) PPC_WEAK_FUNC(sub_8283B9C8);
PPC_FUNC_IMPL(__imp__sub_8283B9C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// bge cr6,0x8283b9fc
	if (!ctx.cr6.lt) goto loc_8283B9FC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283b9fc
	if (ctx.cr6.lt) goto loc_8283B9FC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,37
	ctx.r10.s64 = ctx.r5.s64 + 37;
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
loc_8283B9FC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BA04"))) PPC_WEAK_FUNC(sub_8283BA04);
PPC_FUNC_IMPL(__imp__sub_8283BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BA08"))) PPC_WEAK_FUNC(sub_8283BA08);
PPC_FUNC_IMPL(__imp__sub_8283BA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8283ba60
	if (!ctx.cr6.lt) goto loc_8283BA60;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283ba60
	if (ctx.cr6.lt) goto loc_8283BA60;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-29696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29696);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8283BA60:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BA68"))) PPC_WEAK_FUNC(sub_8283BA68);
PPC_FUNC_IMPL(__imp__sub_8283BA68) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// bge cr6,0x8283ba9c
	if (!ctx.cr6.lt) goto loc_8283BA9C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283ba9c
	if (ctx.cr6.lt) goto loc_8283BA9C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,407
	ctx.r10.s64 = ctx.r5.s64 + 407;
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
loc_8283BA9C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BAA4"))) PPC_WEAK_FUNC(sub_8283BAA4);
PPC_FUNC_IMPL(__imp__sub_8283BAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BAA8"))) PPC_WEAK_FUNC(sub_8283BAA8);
PPC_FUNC_IMPL(__imp__sub_8283BAA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// bge cr6,0x8283badc
	if (!ctx.cr6.lt) goto loc_8283BADC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283badc
	if (ctx.cr6.lt) goto loc_8283BADC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,447
	ctx.r10.s64 = ctx.r5.s64 + 447;
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
loc_8283BADC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BAE4"))) PPC_WEAK_FUNC(sub_8283BAE4);
PPC_FUNC_IMPL(__imp__sub_8283BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BAE8"))) PPC_WEAK_FUNC(sub_8283BAE8);
PPC_FUNC_IMPL(__imp__sub_8283BAE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283bb3c
	if (ctx.cr6.lt) goto loc_8283BB3C;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// bge cr6,0x8283bb3c
	if (!ctx.cr6.lt) goto loc_8283BB3C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8283bb3c
	if (ctx.cr6.lt) goto loc_8283BB3C;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bge cr6,0x8283bb3c
	if (!ctx.cr6.lt) goto loc_8283BB3C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
loc_8283BB3C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BB44"))) PPC_WEAK_FUNC(sub_8283BB44);
PPC_FUNC_IMPL(__imp__sub_8283BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BB48"))) PPC_WEAK_FUNC(sub_8283BB48);
PPC_FUNC_IMPL(__imp__sub_8283BB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1616(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BB60"))) PPC_WEAK_FUNC(sub_8283BB60);
PPC_FUNC_IMPL(__imp__sub_8283BB60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2252);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8283bb84
	if (!ctx.cr6.eq) goto loc_8283BB84;
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283BB84:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BB8C"))) PPC_WEAK_FUNC(sub_8283BB8C);
PPC_FUNC_IMPL(__imp__sub_8283BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BB90"))) PPC_WEAK_FUNC(sub_8283BB90);
PPC_FUNC_IMPL(__imp__sub_8283BB90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1952(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1952);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BBA8"))) PPC_WEAK_FUNC(sub_8283BBA8);
PPC_FUNC_IMPL(__imp__sub_8283BBA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,280(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BBC0"))) PPC_WEAK_FUNC(sub_8283BBC0);
PPC_FUNC_IMPL(__imp__sub_8283BBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1908(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1908);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BBD8"))) PPC_WEAK_FUNC(sub_8283BBD8);
PPC_FUNC_IMPL(__imp__sub_8283BBD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8283bbf4
	if (ctx.cr6.lt) goto loc_8283BBF4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8283bc00
	if (ctx.cr6.lt) goto loc_8283BC00;
loc_8283BBF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283BC00:
	// addi r10,r5,440
	ctx.r10.s64 = ctx.r5.s64 + 440;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BC14"))) PPC_WEAK_FUNC(sub_8283BC14);
PPC_FUNC_IMPL(__imp__sub_8283BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BC18"))) PPC_WEAK_FUNC(sub_8283BC18);
PPC_FUNC_IMPL(__imp__sub_8283BC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1996(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1996);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BC30"))) PPC_WEAK_FUNC(sub_8283BC30);
PPC_FUNC_IMPL(__imp__sub_8283BC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2252(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2252);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BC48"))) PPC_WEAK_FUNC(sub_8283BC48);
PPC_FUNC_IMPL(__imp__sub_8283BC48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BC60"))) PPC_WEAK_FUNC(sub_8283BC60);
PPC_FUNC_IMPL(__imp__sub_8283BC60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8283bc7c
	if (ctx.cr6.lt) goto loc_8283BC7C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8283bc88
	if (ctx.cr6.lt) goto loc_8283BC88;
loc_8283BC7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283BC88:
	// addi r10,r5,479
	ctx.r10.s64 = ctx.r5.s64 + 479;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BC9C"))) PPC_WEAK_FUNC(sub_8283BC9C);
PPC_FUNC_IMPL(__imp__sub_8283BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BCA0"))) PPC_WEAK_FUNC(sub_8283BCA0);
PPC_FUNC_IMPL(__imp__sub_8283BCA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1620);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BCB8"))) PPC_WEAK_FUNC(sub_8283BCB8);
PPC_FUNC_IMPL(__imp__sub_8283BCB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1776(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1776);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BCD0"))) PPC_WEAK_FUNC(sub_8283BCD0);
PPC_FUNC_IMPL(__imp__sub_8283BCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8283BCD8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r24,13188(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r22,13184(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r10.u32);
	// blt cr6,0x8283bd64
	if (ctx.cr6.lt) goto loc_8283BD64;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bge cr6,0x8283bd64
	if (!ctx.cr6.lt) goto loc_8283BD64;
	// addi r11,r27,486
	ctx.r11.s64 = ctx.r27.s64 + 486;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x827eee58
	ctx.lr = 0x8283BD4C;
	sub_827EEE58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8283bd84
	if (ctx.cr6.eq) goto loc_8283BD84;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8283bd74
	if (ctx.cr6.eq) goto loc_8283BD74;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8283bd6c
	if (ctx.cr6.eq) goto loc_8283BD6C;
loc_8283BD64:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283bd8c
	goto loc_8283BD8C;
loc_8283BD6C:
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x8283bd8c
	goto loc_8283BD8C;
loc_8283BD74:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8283bd8c
	goto loc_8283BD8C;
loc_8283BD84:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283BD8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8283bdb8
	if (!ctx.cr6.eq) goto loc_8283BDB8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8283bdac
	if (ctx.cr6.eq) goto loc_8283BDAC;
	// lis r3,20224
	ctx.r3.s64 = 1325400064;
	// ori r3,r3,1747
	ctx.r3.u64 = ctx.r3.u64 | 1747;
	// b 0x8283bdb4
	goto loc_8283BDB4;
loc_8283BDAC:
	// lis r3,16128
	ctx.r3.s64 = 1056964608;
	// ori r3,r3,18237
	ctx.r3.u64 = ctx.r3.u64 | 18237;
loc_8283BDB4:
	// bl 0x827eee58
	ctx.lr = 0x8283BDB8;
	sub_827EEE58(ctx, base);
loc_8283BDB8:
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283BDD4"))) PPC_WEAK_FUNC(sub_8283BDD4);
PPC_FUNC_IMPL(__imp__sub_8283BDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BDD8"))) PPC_WEAK_FUNC(sub_8283BDD8);
PPC_FUNC_IMPL(__imp__sub_8283BDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1932(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1932);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BDF0"))) PPC_WEAK_FUNC(sub_8283BDF0);
PPC_FUNC_IMPL(__imp__sub_8283BDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r7,r10,284
	ctx.r7.s64 = ctx.r10.s64 + 284;
	// addi r11,r10,1628
	ctx.r11.s64 = ctx.r10.s64 + 1628;
	// lfs f12,-30884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30884);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,1748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1748, ctx.r3.u32);
	// stfs f0,1616(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1616, temp.u32);
loc_8283BE3C:
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8283bee8
	if (ctx.cr6.eq) goto loc_8283BEE8;
	// lwz r9,1748(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1748);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,1748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1748, ctx.r9.u32);
	// lwz r9,-1620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1620);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x8283be80
	if (ctx.cr6.lt) goto loc_8283BE80;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// ble cr6,0x8283be84
	if (!ctx.cr6.gt) goto loc_8283BE84;
	// stw r4,-1620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1620, ctx.r4.u32);
	// b 0x8283be84
	goto loc_8283BE84;
loc_8283BE80:
	// stw r6,-1620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1620, ctx.r6.u32);
loc_8283BE84:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x8283bea0
	if (ctx.cr6.lt) goto loc_8283BEA0;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// ble cr6,0x8283bea4
	if (!ctx.cr6.gt) goto loc_8283BEA4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// b 0x8283bea4
	goto loc_8283BEA4;
loc_8283BEA0:
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_8283BEA4:
	// lfs f0,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8283bec0
	if (ctx.cr6.lt) goto loc_8283BEC0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8283bec4
	if (!ctx.cr6.gt) goto loc_8283BEC4;
	// stfs f12,504(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// b 0x8283bec4
	goto loc_8283BEC4;
loc_8283BEC0:
	// stfs f13,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
loc_8283BEC4:
	// lfs f0,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,1616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1616);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8283bed8
	if (!ctx.cr6.gt) goto loc_8283BED8;
	// stfs f0,1616(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1616, temp.u32);
loc_8283BED8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 30, ctx.xer);
	// blt cr6,0x8283be3c
	if (ctx.cr6.lt) goto loc_8283BE3C;
loc_8283BEE8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,1956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1956, ctx.r3.u32);
	// addi r9,r10,1964
	ctx.r9.s64 = ctx.r10.s64 + 1964;
loc_8283BEF4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8283bf1c
	if (ctx.cr6.eq) goto loc_8283BF1C;
	// lwz r8,1956(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1956);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r8,1956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1956, ctx.r8.u32);
	// blt cr6,0x8283bef4
	if (ctx.cr6.lt) goto loc_8283BEF4;
loc_8283BF1C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BF24"))) PPC_WEAK_FUNC(sub_8283BF24);
PPC_FUNC_IMPL(__imp__sub_8283BF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BF28"))) PPC_WEAK_FUNC(sub_8283BF28);
PPC_FUNC_IMPL(__imp__sub_8283BF28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2256(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2256);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BF40"))) PPC_WEAK_FUNC(sub_8283BF40);
PPC_FUNC_IMPL(__imp__sub_8283BF40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BF58"))) PPC_WEAK_FUNC(sub_8283BF58);
PPC_FUNC_IMPL(__imp__sub_8283BF58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,496
	ctx.r10.s64 = ctx.r5.s64 + 496;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283BF78"))) PPC_WEAK_FUNC(sub_8283BF78);
PPC_FUNC_IMPL(__imp__sub_8283BF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,13180(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13180);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r4,r11,-29532
	ctx.r4.s64 = ctx.r11.s64 + -29532;
	// lwz r30,13188(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13188);
	// lwz r3,24(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
loc_8283BFB4:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_8283BFCC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283c000
	if (ctx.cr6.eq) goto loc_8283C000;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283bff8
	if (ctx.cr6.eq) goto loc_8283BFF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283bff0
	if (ctx.cr6.eq) goto loc_8283BFF0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8283c004
	goto loc_8283C004;
loc_8283BFF0:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x8283c004
	goto loc_8283C004;
loc_8283BFF8:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x8283c004
	goto loc_8283C004;
loc_8283C000:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8283C004:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8283c034
	if (ctx.cr6.eq) goto loc_8283C034;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8283c02c
	if (ctx.cr6.eq) goto loc_8283C02C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8283c024
	if (ctx.cr6.eq) goto loc_8283C024;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283c038
	goto loc_8283C038;
loc_8283C024:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8283c038
	goto loc_8283C038;
loc_8283C02C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x8283c038
	goto loc_8283C038;
loc_8283C034:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8283C038:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8283c054
	if (ctx.cr6.eq) goto loc_8283C054;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8283bfcc
	if (ctx.cr6.lt) goto loc_8283BFCC;
	// b 0x8283c334
	goto loc_8283C334;
loc_8283C054:
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// subfic r8,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r11.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// stwx r31,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r31.u32);
	// blt cr6,0x8283c294
	if (ctx.cr6.lt) goto loc_8283C294;
	// addi r8,r7,1392
	ctx.r8.s64 = ctx.r7.s64 + 1392;
	// addi r9,r7,696
	ctx.r9.s64 = ctx.r7.s64 + 696;
loc_8283C07C:
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r6,r5,r10
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r6,3
	ctx.r5.s64 = ctx.r6.s64 + 3;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r6,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r6,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r6,r5,r10
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r6,r8
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r6,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r6,r5,r10
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r6,5
	ctx.r5.s64 = ctx.r6.s64 + 5;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfsx f8,r6,r8
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfsx f7,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f7,r6,r9
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x8283c07c
	if (ctx.cr6.lt) goto loc_8283C07C;
loc_8283C294:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8283c334
	if (!ctx.cr6.lt) goto loc_8283C334;
	// addi r9,r7,1392
	ctx.r9.s64 = ctx.r7.s64 + 1392;
	// addi r8,r7,696
	ctx.r8.s64 = ctx.r7.s64 + 696;
loc_8283C2A4:
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfsx f13,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x8283c2a4
	if (ctx.cr6.lt) goto loc_8283C2A4;
loc_8283C334:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,43
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 43, ctx.xer);
	// blt cr6,0x8283bfb4
	if (ctx.cr6.lt) goto loc_8283BFB4;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C350"))) PPC_WEAK_FUNC(sub_8283C350);
PPC_FUNC_IMPL(__imp__sub_8283C350) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8283c364
	if (ctx.cr6.lt) goto loc_8283C364;
	// cmpwi cr6,r5,43
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 43, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8283c368
	if (ctx.cr6.lt) goto loc_8283C368;
loc_8283C364:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8283C368:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C370"))) PPC_WEAK_FUNC(sub_8283C370);
PPC_FUNC_IMPL(__imp__sub_8283C370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8283c388
	if (!ctx.cr6.lt) goto loc_8283C388;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8283C388:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C390"))) PPC_WEAK_FUNC(sub_8283C390);
PPC_FUNC_IMPL(__imp__sub_8283C390) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8283c3e0
	if (ctx.cr6.eq) goto loc_8283C3E0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8283c3c0
	if (ctx.cr6.eq) goto loc_8283C3C0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8283c3e8
	if (!ctx.cr6.eq) goto loc_8283C3E8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8283C3C0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8283C3E0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283C3E8:
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C3FC"))) PPC_WEAK_FUNC(sub_8283C3FC);
PPC_FUNC_IMPL(__imp__sub_8283C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283C400"))) PPC_WEAK_FUNC(sub_8283C400);
PPC_FUNC_IMPL(__imp__sub_8283C400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8283c424
	if (ctx.cr6.lt) goto loc_8283C424;
	// cmpwi cr6,r5,43
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 43, ctx.xer);
	// blt cr6,0x8283c43c
	if (ctx.cr6.lt) goto loc_8283C43C;
loc_8283C424:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8283C43C:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// lfs f13,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r30,-29532(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_8283C474:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283c4a0
	if (ctx.cr6.eq) goto loc_8283C4A0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283c498
	if (ctx.cr6.eq) goto loc_8283C498;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8283c4a4
	if (!ctx.cr6.eq) goto loc_8283C4A4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283c4a4
	goto loc_8283C4A4;
loc_8283C498:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8283c4a4
	goto loc_8283C4A4;
loc_8283C4A0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8283C4A4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283c4dc
	if (ctx.cr6.eq) goto loc_8283C4DC;
	// lwz r9,1396(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1396);
	// addi r10,r8,1392
	ctx.r10.s64 = ctx.r8.s64 + 1392;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfsx f12,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// blt cr6,0x8283c474
	if (ctx.cr6.lt) goto loc_8283C474;
loc_8283C4DC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8283c4ec
	if (!ctx.cr6.eq) goto loc_8283C4EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_8283C4EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_8283C4F4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283c520
	if (ctx.cr6.eq) goto loc_8283C520;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283c518
	if (ctx.cr6.eq) goto loc_8283C518;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8283c524
	if (!ctx.cr6.eq) goto loc_8283C524;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283c524
	goto loc_8283C524;
loc_8283C518:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8283c524
	goto loc_8283C524;
loc_8283C520:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8283C524:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283c55c
	if (ctx.cr6.eq) goto loc_8283C55C;
	// lwz r9,700(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 700);
	// addi r10,r8,696
	ctx.r10.s64 = ctx.r8.s64 + 696;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blt cr6,0x8283c4f4
	if (ctx.cr6.lt) goto loc_8283C4F4;
loc_8283C55C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C56C"))) PPC_WEAK_FUNC(sub_8283C56C);
PPC_FUNC_IMPL(__imp__sub_8283C56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283C570"))) PPC_WEAK_FUNC(sub_8283C570);
PPC_FUNC_IMPL(__imp__sub_8283C570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8283C578;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// addi r22,r11,-29532
	ctx.r22.s64 = ctx.r11.s64 + -29532;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r19,13188(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8283c5e4
	if (ctx.cr6.eq) goto loc_8283C5E4;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8283c5dc
	if (ctx.cr6.eq) goto loc_8283C5DC;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8283c5d4
	if (ctx.cr6.eq) goto loc_8283C5D4;
	// b 0x8283c5e8
	goto loc_8283C5E8;
loc_8283C5D4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x8283c5e8
	goto loc_8283C5E8;
loc_8283C5DC:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8283c5e8
	goto loc_8283C5E8;
loc_8283C5E4:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_8283C5E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8283c390
	ctx.lr = 0x8283C5F4;
	sub_8283C390(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8283c6b0
	if (ctx.cr6.eq) goto loc_8283C6B0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8283c6b0
	if (ctx.cr6.lt) goto loc_8283C6B0;
	// cmpwi cr6,r29,43
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 43, ctx.xer);
	// bge cr6,0x8283c6b0
	if (!ctx.cr6.lt) goto loc_8283C6B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// stw r24,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r24.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8283C62C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283c660
	if (ctx.cr6.eq) goto loc_8283C660;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283c658
	if (ctx.cr6.eq) goto loc_8283C658;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283c650
	if (ctx.cr6.eq) goto loc_8283C650;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283c664
	goto loc_8283C664;
loc_8283C650:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x8283c664
	goto loc_8283C664;
loc_8283C658:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8283c664
	goto loc_8283C664;
loc_8283C660:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8283C664:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8283c694
	if (ctx.cr6.eq) goto loc_8283C694;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8283c68c
	if (ctx.cr6.eq) goto loc_8283C68C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8283c684
	if (ctx.cr6.eq) goto loc_8283C684;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283c698
	goto loc_8283C698;
loc_8283C684:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8283c698
	goto loc_8283C698;
loc_8283C68C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8283c698
	goto loc_8283C698;
loc_8283C694:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8283C698:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8283c6c0
	if (ctx.cr6.eq) goto loc_8283C6C0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8283c62c
	if (ctx.cr6.lt) goto loc_8283C62C;
loc_8283C6B0:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// stw r19,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
loc_8283C6C0:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bge cr6,0x8283c7bc
	if (!ctx.cr6.lt) goto loc_8283C7BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r30,1392
	ctx.r28.s64 = ctx.r30.s64 + 1392;
	// addi r27,r30,696
	ctx.r27.s64 = ctx.r30.s64 + 696;
	// mullw r26,r11,r29
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
loc_8283C6D8:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stwx r6,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mullw r10,r4,r29
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r5,r29
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r10,3
	ctx.r3.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, temp.u32);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mullw r10,r7,r29
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r27
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r3,r27
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r27.u32, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r26,r11,r29
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283c79c
	if (ctx.cr6.eq) goto loc_8283C79C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283c794
	if (ctx.cr6.eq) goto loc_8283C794;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283c78c
	if (ctx.cr6.eq) goto loc_8283C78C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x8283c7a0
	goto loc_8283C7A0;
loc_8283C78C:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// b 0x8283c7a0
	goto loc_8283C7A0;
loc_8283C794:
	// lwz r25,4(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// b 0x8283c7a0
	goto loc_8283C7A0;
loc_8283C79C:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_8283C7A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212c000
	ctx.lr = 0x8283C7A8;
	sub_8212C000(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8283c830
	if (ctx.cr6.eq) goto loc_8283C830;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8283c6d8
	if (ctx.cr6.lt) goto loc_8283C6D8;
loc_8283C7BC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r19,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r19.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r30,1392
	ctx.r11.s64 = ctx.r30.s64 + 1392;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r10,r30,696
	ctx.r10.s64 = ctx.r30.s64 + 696;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r6.u32);
	// stwx r21,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r21.u32);
	// lwz r5,1396(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// mullw r9,r5,r29
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r3,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r8,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
loc_8283C830:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r19.u32);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283C844"))) PPC_WEAK_FUNC(sub_8283C844);
PPC_FUNC_IMPL(__imp__sub_8283C844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283C848"))) PPC_WEAK_FUNC(sub_8283C848);
PPC_FUNC_IMPL(__imp__sub_8283C848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8283c8b8
	if (ctx.cr6.lt) goto loc_8283C8B8;
	// cmpwi cr6,r5,43
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 43, ctx.xer);
	// bge cr6,0x8283c8b8
	if (!ctx.cr6.lt) goto loc_8283C8B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283c8a8
	if (ctx.cr6.eq) goto loc_8283C8A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283c898
	if (ctx.cr6.eq) goto loc_8283C898;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283c8b0
	if (!ctx.cr6.eq) goto loc_8283C8B0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283c8b0
	goto loc_8283C8B0;
loc_8283C898:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8283c8b0
	goto loc_8283C8B0;
loc_8283C8A8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283C8B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8283c8c4
	if (!ctx.cr6.eq) goto loc_8283C8C4;
loc_8283C8B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283C8C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C8D0"))) PPC_WEAK_FUNC(sub_8283C8D0);
PPC_FUNC_IMPL(__imp__sub_8283C8D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,252(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r5,284(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// stw r8,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r8.u32);
	// stw r7,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r7.u32);
	// stw r6,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r6.u32);
	// stw r5,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C900"))) PPC_WEAK_FUNC(sub_8283C900);
PPC_FUNC_IMPL(__imp__sub_8283C900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,280(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// lwz r7,100(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// lwz r6,320(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 320);
	// lwz r5,112(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r4,324(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// lwz r3,264(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// stw r7,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r7.u32);
	// stw r6,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r6.u32);
	// stw r5,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r5.u32);
	// stw r4,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r4.u32);
	// stw r3,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C940"))) PPC_WEAK_FUNC(sub_8283C940);
PPC_FUNC_IMPL(__imp__sub_8283C940) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x8283C948;
	__savegprlr_14(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r14,68(r9)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// lwz r7,272(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// lwz r6,300(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// lwz r5,328(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lwz r14,28(r9)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r8.u32);
	// stw r7,140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 140, ctx.r7.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r14,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r14.u32);
	// lwz r11,92(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r10,108(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r31,116(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// lwz r30,332(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,24(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r27,304(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// lwz r26,308(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// lwz r25,120(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// lwz r24,260(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	// lwz r23,312(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// lwz r22,256(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// lwz r21,60(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r20,288(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// lwz r19,336(r9)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// lwz r18,124(r9)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// lwz r17,8(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r16,128(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// lwz r15,64(r9)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r14,316(r9)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r7,-156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// stw r6,144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 144, ctx.r6.u32);
	// stw r5,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r5.u32);
	// stw r4,152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 152, ctx.r4.u32);
	// stw r3,156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 156, ctx.r3.u32);
	// stw r11,160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 160, ctx.r11.u32);
	// stw r10,164(r9)
	PPC_STORE_U32(ctx.r9.u32 + 164, ctx.r10.u32);
	// stw r31,168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 168, ctx.r31.u32);
	// stw r30,172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 172, ctx.r30.u32);
	// stw r29,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r29.u32);
	// stw r28,180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 180, ctx.r28.u32);
	// stw r27,184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 184, ctx.r27.u32);
	// stw r26,188(r9)
	PPC_STORE_U32(ctx.r9.u32 + 188, ctx.r26.u32);
	// stw r25,192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 192, ctx.r25.u32);
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
	// stw r23,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r23.u32);
	// stw r22,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r22.u32);
	// stw r21,208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 208, ctx.r21.u32);
	// stw r20,212(r9)
	PPC_STORE_U32(ctx.r9.u32 + 212, ctx.r20.u32);
	// stw r19,216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 216, ctx.r19.u32);
	// stw r18,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r18.u32);
	// stw r17,224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 224, ctx.r17.u32);
	// stw r16,228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 228, ctx.r16.u32);
	// stw r15,232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 232, ctx.r15.u32);
	// stw r8,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r8.u32);
	// stw r7,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, ctx.r7.u32);
	// stw r14,244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 244, ctx.r14.u32);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283CA48"))) PPC_WEAK_FUNC(sub_8283CA48);
PPC_FUNC_IMPL(__imp__sub_8283CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8283CA50;
	__savegprlr_22(ctx, base);
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,268(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 268);
	// bl 0x82806538
	ctx.lr = 0x8283CA9C;
	sub_82806538(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8283cab8
	if (ctx.cr6.eq) goto loc_8283CAB8;
	// lwz r3,268(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 268);
	// bl 0x828064e0
	ctx.lr = 0x8283CAAC;
	sub_828064E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8283cabc
	if (!ctx.cr6.eq) goto loc_8283CABC;
loc_8283CAB8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8283CABC:
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283CAD8"))) PPC_WEAK_FUNC(sub_8283CAD8);
PPC_FUNC_IMPL(__imp__sub_8283CAD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1488(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1488);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CAF0"))) PPC_WEAK_FUNC(sub_8283CAF0);
PPC_FUNC_IMPL(__imp__sub_8283CAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x8283cb30
	if (ctx.cr6.eq) goto loc_8283CB30;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8283cb28
	if (ctx.cr6.eq) goto loc_8283CB28;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8283cb20
	if (ctx.cr6.eq) goto loc_8283CB20;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8283cb34
	goto loc_8283CB34;
loc_8283CB20:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283cb34
	goto loc_8283CB34;
loc_8283CB28:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8283cb34
	goto loc_8283CB34;
loc_8283CB30:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8283CB34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283cb84
	if (ctx.cr6.eq) goto loc_8283CB84;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8283cb64
	if (ctx.cr6.eq) goto loc_8283CB64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8283cb5c
	if (ctx.cr6.eq) goto loc_8283CB5C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8283cb68
	if (!ctx.cr6.eq) goto loc_8283CB68;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8283cb68
	goto loc_8283CB68;
loc_8283CB5C:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x8283cb68
	goto loc_8283CB68;
loc_8283CB64:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8283CB68:
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283cb84
	if (ctx.cr6.eq) goto loc_8283CB84;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8283cb90
	if (!ctx.cr6.eq) goto loc_8283CB90;
loc_8283CB84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283CB90:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CB9C"))) PPC_WEAK_FUNC(sub_8283CB9C);
PPC_FUNC_IMPL(__imp__sub_8283CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283CBA0"))) PPC_WEAK_FUNC(sub_8283CBA0);
PPC_FUNC_IMPL(__imp__sub_8283CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x8283cbf0
	if (ctx.cr6.eq) goto loc_8283CBF0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r10,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8283cbf0
	if (ctx.cr6.eq) goto loc_8283CBF0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283cc08
	if (ctx.cr6.eq) goto loc_8283CC08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283cc00
	if (ctx.cr6.eq) goto loc_8283CC00;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283cbf8
	if (ctx.cr6.eq) goto loc_8283CBF8;
loc_8283CBF0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283cc0c
	goto loc_8283CC0C;
loc_8283CBF8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283cc0c
	goto loc_8283CC0C;
loc_8283CC00:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283cc0c
	goto loc_8283CC0C;
loc_8283CC08:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283CC0C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283cc5c
	if (ctx.cr6.eq) goto loc_8283CC5C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283cc3c
	if (ctx.cr6.eq) goto loc_8283CC3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283cc34
	if (ctx.cr6.eq) goto loc_8283CC34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283cc40
	if (!ctx.cr6.eq) goto loc_8283CC40;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283cc40
	goto loc_8283CC40;
loc_8283CC34:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283cc40
	goto loc_8283CC40;
loc_8283CC3C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283CC40:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283cc5c
	if (ctx.cr6.eq) goto loc_8283CC5C;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8283cc68
	if (!ctx.cr6.eq) goto loc_8283CC68;
loc_8283CC5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283CC68:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CC74"))) PPC_WEAK_FUNC(sub_8283CC74);
PPC_FUNC_IMPL(__imp__sub_8283CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283CC78"))) PPC_WEAK_FUNC(sub_8283CC78);
PPC_FUNC_IMPL(__imp__sub_8283CC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 808);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 812);
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
	// lfs f0,816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 816);
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

__attribute__((alias("__imp__sub_8283CCB8"))) PPC_WEAK_FUNC(sub_8283CCB8);
PPC_FUNC_IMPL(__imp__sub_8283CCB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1600(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1600);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CCD0"))) PPC_WEAK_FUNC(sub_8283CCD0);
PPC_FUNC_IMPL(__imp__sub_8283CCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8283CCD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r31,13192(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r30,13188(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r29,13180(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r3,r10,852
	ctx.r3.s64 = ctx.r10.s64 + 852;
	// bl 0x827c8a58
	ctx.lr = 0x8283CD30;
	sub_827C8A58(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,808(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 808, temp.u32);
	// stfs f10,812(r23)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r23.u32 + 812, temp.u32);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// stfs f9,816(r23)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r23.u32 + 816, temp.u32);
	// stw r29,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283CD6C"))) PPC_WEAK_FUNC(sub_8283CD6C);
PPC_FUNC_IMPL(__imp__sub_8283CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283CD70"))) PPC_WEAK_FUNC(sub_8283CD70);
PPC_FUNC_IMPL(__imp__sub_8283CD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1820);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
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
	// lfs f0,1828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
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

__attribute__((alias("__imp__sub_8283CDB0"))) PPC_WEAK_FUNC(sub_8283CDB0);
PPC_FUNC_IMPL(__imp__sub_8283CDB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CDC8"))) PPC_WEAK_FUNC(sub_8283CDC8);
PPC_FUNC_IMPL(__imp__sub_8283CDC8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x8283CE28;
	sub_82124928(ctx, base);
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CE98"))) PPC_WEAK_FUNC(sub_8283CE98);
PPC_FUNC_IMPL(__imp__sub_8283CE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
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
	// lfs f0,1060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
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

__attribute__((alias("__imp__sub_8283CED8"))) PPC_WEAK_FUNC(sub_8283CED8);
PPC_FUNC_IMPL(__imp__sub_8283CED8) {
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
	// stfs f0,2024(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2024, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CEF4"))) PPC_WEAK_FUNC(sub_8283CEF4);
PPC_FUNC_IMPL(__imp__sub_8283CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283CEF8"))) PPC_WEAK_FUNC(sub_8283CEF8);
PPC_FUNC_IMPL(__imp__sub_8283CEF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1172, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CF10"))) PPC_WEAK_FUNC(sub_8283CF10);
PPC_FUNC_IMPL(__imp__sub_8283CF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8283CF18;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// lwz r10,84(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8283cfa8
	if (ctx.cr6.eq) goto loc_8283CFA8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283cfa0
	if (ctx.cr6.eq) goto loc_8283CFA0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8283cf98
	if (ctx.cr6.eq) goto loc_8283CF98;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8283cfac
	goto loc_8283CFAC;
loc_8283CF98:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283cfac
	goto loc_8283CFAC;
loc_8283CFA0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8283cfac
	goto loc_8283CFAC;
loc_8283CFA8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8283CFAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283cfec
	if (ctx.cr6.eq) goto loc_8283CFEC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283cfdc
	if (ctx.cr6.eq) goto loc_8283CFDC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283cfd4
	if (ctx.cr6.eq) goto loc_8283CFD4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8283cfe0
	if (ctx.cr6.eq) goto loc_8283CFE0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8283cfe0
	goto loc_8283CFE0;
loc_8283CFD4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x8283cfe0
	goto loc_8283CFE0;
loc_8283CFDC:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8283CFE0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283ca48
	ctx.lr = 0x8283CFE8;
	sub_8283CA48(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8283CFEC:
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283D008"))) PPC_WEAK_FUNC(sub_8283D008);
PPC_FUNC_IMPL(__imp__sub_8283D008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82beede8
	ctx.lr = 0x8283D020;
	sub_82BEEDE8(ctx, base);
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,26592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bgt cr6,0x8283d07c
	if (ctx.cr6.gt) goto loc_8283D07C;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8283d07c
	if (ctx.cr6.gt) goto loc_8283D07C;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8283d09c
	if (!ctx.cr6.gt) goto loc_8283D09C;
loc_8283D07C:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8283D09C:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D0B0"))) PPC_WEAK_FUNC(sub_8283D0B0);
PPC_FUNC_IMPL(__imp__sub_8283D0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D100"))) PPC_WEAK_FUNC(sub_8283D100);
PPC_FUNC_IMPL(__imp__sub_8283D100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x82beede8
	ctx.lr = 0x8283D118;
	sub_82BEEDE8(ctx, base);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283d168
	if (ctx.cr6.eq) goto loc_8283D168;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283d168
	if (ctx.cr6.eq) goto loc_8283D168;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8283D168:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D178"))) PPC_WEAK_FUNC(sub_8283D178);
PPC_FUNC_IMPL(__imp__sub_8283D178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x82beede8
	ctx.lr = 0x8283D190;
	sub_82BEEDE8(ctx, base);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
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
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f0,1784(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1784, temp.u32);
	// stfs f13,1788(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1788, temp.u32);
	// stfs f12,1792(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1792, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D1C4"))) PPC_WEAK_FUNC(sub_8283D1C4);
PPC_FUNC_IMPL(__imp__sub_8283D1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D1C8"))) PPC_WEAK_FUNC(sub_8283D1C8);
PPC_FUNC_IMPL(__imp__sub_8283D1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1748(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1748);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D1E0"))) PPC_WEAK_FUNC(sub_8283D1E0);
PPC_FUNC_IMPL(__imp__sub_8283D1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8283D1E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,13192(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r30,13188(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r29,13180(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// lwz r28,13184(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,1468(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1468);
	// bl 0x827eee58
	ctx.lr = 0x8283D238;
	sub_827EEE58(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r31,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r31.u32);
	// stw r29,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283D254"))) PPC_WEAK_FUNC(sub_8283D254);
PPC_FUNC_IMPL(__imp__sub_8283D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D258"))) PPC_WEAK_FUNC(sub_8283D258);
PPC_FUNC_IMPL(__imp__sub_8283D258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1516, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D270"))) PPC_WEAK_FUNC(sub_8283D270);
PPC_FUNC_IMPL(__imp__sub_8283D270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1516(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1516);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D288"))) PPC_WEAK_FUNC(sub_8283D288);
PPC_FUNC_IMPL(__imp__sub_8283D288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,1840(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1840);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d2d8
	if (ctx.cr6.eq) goto loc_8283D2D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d2d0
	if (ctx.cr6.eq) goto loc_8283D2D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283d2c8
	if (ctx.cr6.eq) goto loc_8283D2C8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283d2dc
	goto loc_8283D2DC;
loc_8283D2C8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d2dc
	goto loc_8283D2DC;
loc_8283D2D0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d2dc
	goto loc_8283D2DC;
loc_8283D2D8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283D2DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d32c
	if (ctx.cr6.eq) goto loc_8283D32C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d314
	if (ctx.cr6.eq) goto loc_8283D314;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283d330
	if (!ctx.cr6.eq) goto loc_8283D330;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,6392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6392, ctx.r4.u32);
	// blr 
	return;
loc_8283D314:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,6392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6392, ctx.r4.u32);
	// blr 
	return;
loc_8283D32C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283D330:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,6392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6392, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D344"))) PPC_WEAK_FUNC(sub_8283D344);
PPC_FUNC_IMPL(__imp__sub_8283D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D348"))) PPC_WEAK_FUNC(sub_8283D348);
PPC_FUNC_IMPL(__imp__sub_8283D348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1840(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1840);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D360"))) PPC_WEAK_FUNC(sub_8283D360);
PPC_FUNC_IMPL(__imp__sub_8283D360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d3b4
	if (ctx.cr6.eq) goto loc_8283D3B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d3ac
	if (ctx.cr6.eq) goto loc_8283D3AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283d3a4
	if (ctx.cr6.eq) goto loc_8283D3A4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283d3b8
	goto loc_8283D3B8;
loc_8283D3A4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d3b8
	goto loc_8283D3B8;
loc_8283D3AC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d3b8
	goto loc_8283D3B8;
loc_8283D3B4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283D3B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283d40c
	if (ctx.cr6.eq) goto loc_8283D40C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d3e8
	if (ctx.cr6.eq) goto loc_8283D3E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d3e0
	if (ctx.cr6.eq) goto loc_8283D3E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283d3ec
	if (!ctx.cr6.eq) goto loc_8283D3EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283d3ec
	goto loc_8283D3EC;
loc_8283D3E0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283d3ec
	goto loc_8283D3EC;
loc_8283D3E8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283D3EC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r5,2561
	ctx.r10.s64 = ctx.r5.s64 + 2561;
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
loc_8283D40C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D414"))) PPC_WEAK_FUNC(sub_8283D414);
PPC_FUNC_IMPL(__imp__sub_8283D414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D418"))) PPC_WEAK_FUNC(sub_8283D418);
PPC_FUNC_IMPL(__imp__sub_8283D418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d46c
	if (ctx.cr6.eq) goto loc_8283D46C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d464
	if (ctx.cr6.eq) goto loc_8283D464;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283d45c
	if (ctx.cr6.eq) goto loc_8283D45C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283d470
	goto loc_8283D470;
loc_8283D45C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d470
	goto loc_8283D470;
loc_8283D464:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d470
	goto loc_8283D470;
loc_8283D46C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283D470:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283d4c4
	if (ctx.cr6.eq) goto loc_8283D4C4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d4a0
	if (ctx.cr6.eq) goto loc_8283D4A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d498
	if (ctx.cr6.eq) goto loc_8283D498;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283d4a4
	if (!ctx.cr6.eq) goto loc_8283D4A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283d4a4
	goto loc_8283D4A4;
loc_8283D498:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283d4a4
	goto loc_8283D4A4;
loc_8283D4A0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283D4A4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r5,2681
	ctx.r10.s64 = ctx.r5.s64 + 2681;
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
loc_8283D4C4:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D4CC"))) PPC_WEAK_FUNC(sub_8283D4CC);
PPC_FUNC_IMPL(__imp__sub_8283D4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D4D0"))) PPC_WEAK_FUNC(sub_8283D4D0);
PPC_FUNC_IMPL(__imp__sub_8283D4D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d524
	if (ctx.cr6.eq) goto loc_8283D524;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d51c
	if (ctx.cr6.eq) goto loc_8283D51C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283d514
	if (ctx.cr6.eq) goto loc_8283D514;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283d528
	goto loc_8283D528;
loc_8283D514:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d528
	goto loc_8283D528;
loc_8283D51C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d528
	goto loc_8283D528;
loc_8283D524:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283D528:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283d57c
	if (ctx.cr6.eq) goto loc_8283D57C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d558
	if (ctx.cr6.eq) goto loc_8283D558;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d550
	if (ctx.cr6.eq) goto loc_8283D550;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283d55c
	if (!ctx.cr6.eq) goto loc_8283D55C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283d55c
	goto loc_8283D55C;
loc_8283D550:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283d55c
	goto loc_8283D55C;
loc_8283D558:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283D55C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r5,2801
	ctx.r10.s64 = ctx.r5.s64 + 2801;
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
loc_8283D57C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D584"))) PPC_WEAK_FUNC(sub_8283D584);
PPC_FUNC_IMPL(__imp__sub_8283D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D588"))) PPC_WEAK_FUNC(sub_8283D588);
PPC_FUNC_IMPL(__imp__sub_8283D588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,1840(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1840);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d5d8
	if (ctx.cr6.eq) goto loc_8283D5D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d5d0
	if (ctx.cr6.eq) goto loc_8283D5D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283d5c8
	if (ctx.cr6.eq) goto loc_8283D5C8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283d5dc
	goto loc_8283D5DC;
loc_8283D5C8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d5dc
	goto loc_8283D5DC;
loc_8283D5D0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d5dc
	goto loc_8283D5DC;
loc_8283D5D8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283D5DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d62c
	if (ctx.cr6.eq) goto loc_8283D62C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d614
	if (ctx.cr6.eq) goto loc_8283D614;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283d630
	if (!ctx.cr6.eq) goto loc_8283D630;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,1940(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1940, temp.u32);
	// blr 
	return;
loc_8283D614:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,1940(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1940, temp.u32);
	// blr 
	return;
loc_8283D62C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283D630:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,1940(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1940, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D644"))) PPC_WEAK_FUNC(sub_8283D644);
PPC_FUNC_IMPL(__imp__sub_8283D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D648"))) PPC_WEAK_FUNC(sub_8283D648);
PPC_FUNC_IMPL(__imp__sub_8283D648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,1232(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1232);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d698
	if (ctx.cr6.eq) goto loc_8283D698;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d690
	if (ctx.cr6.eq) goto loc_8283D690;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283d688
	if (ctx.cr6.eq) goto loc_8283D688;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8283d69c
	goto loc_8283D69C;
loc_8283D688:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d69c
	goto loc_8283D69C;
loc_8283D690:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d69c
	goto loc_8283D69C;
loc_8283D698:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8283D69C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8283d6b0
	if (!ctx.cr6.eq) goto loc_8283D6B0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283D6B0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283d6d8
	if (ctx.cr6.eq) goto loc_8283D6D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283d6d0
	if (ctx.cr6.eq) goto loc_8283D6D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283d6dc
	if (!ctx.cr6.eq) goto loc_8283D6DC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283d6dc
	goto loc_8283D6DC;
loc_8283D6D0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283d6dc
	goto loc_8283D6DC;
loc_8283D6D8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283D6DC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D6F4"))) PPC_WEAK_FUNC(sub_8283D6F4);
PPC_FUNC_IMPL(__imp__sub_8283D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D6F8"))) PPC_WEAK_FUNC(sub_8283D6F8);
PPC_FUNC_IMPL(__imp__sub_8283D6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,1760(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1760, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D70C"))) PPC_WEAK_FUNC(sub_8283D70C);
PPC_FUNC_IMPL(__imp__sub_8283D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D710"))) PPC_WEAK_FUNC(sub_8283D710);
PPC_FUNC_IMPL(__imp__sub_8283D710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,1624(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1624, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D724"))) PPC_WEAK_FUNC(sub_8283D724);
PPC_FUNC_IMPL(__imp__sub_8283D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D728"))) PPC_WEAK_FUNC(sub_8283D728);
PPC_FUNC_IMPL(__imp__sub_8283D728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
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
	// lfs f0,1556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
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

__attribute__((alias("__imp__sub_8283D768"))) PPC_WEAK_FUNC(sub_8283D768);
PPC_FUNC_IMPL(__imp__sub_8283D768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,896(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 896, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D77C"))) PPC_WEAK_FUNC(sub_8283D77C);
PPC_FUNC_IMPL(__imp__sub_8283D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D780"))) PPC_WEAK_FUNC(sub_8283D780);
PPC_FUNC_IMPL(__imp__sub_8283D780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-29532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r9,1232(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1232);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8283d7d4
	if (ctx.cr6.eq) goto loc_8283D7D4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8283d7cc
	if (ctx.cr6.eq) goto loc_8283D7CC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8283d7c4
	if (ctx.cr6.eq) goto loc_8283D7C4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8283d7d8
	goto loc_8283D7D8;
loc_8283D7C4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d7d8
	goto loc_8283D7D8;
loc_8283D7CC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d7d8
	goto loc_8283D7D8;
loc_8283D7D4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8283D7D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283d874
	if (ctx.cr6.eq) goto loc_8283D874;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8283d810
	if (ctx.cr6.eq) goto loc_8283D810;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8283d808
	if (ctx.cr6.eq) goto loc_8283D808;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8283d800
	if (ctx.cr6.eq) goto loc_8283D800;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8283d814
	goto loc_8283D814;
loc_8283D800:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8283d814
	goto loc_8283D814;
loc_8283D808:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8283d814
	goto loc_8283D814;
loc_8283D810:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8283D814:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283d874
	if (ctx.cr6.eq) goto loc_8283D874;
	// lhz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// rlwinm r6,r10,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8283d874
	if (ctx.cr6.eq) goto loc_8283D874;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8283d85c
	if (ctx.cr6.eq) goto loc_8283D85C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8283d858
	if (ctx.cr6.eq) goto loc_8283D858;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8283d850
	if (ctx.cr6.eq) goto loc_8283D850;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8283d85c
	goto loc_8283D85C;
loc_8283D850:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283d85c
	goto loc_8283D85C;
loc_8283D858:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8283D85C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8283D874:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283D87C"))) PPC_WEAK_FUNC(sub_8283D87C);
PPC_FUNC_IMPL(__imp__sub_8283D87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283D880"))) PPC_WEAK_FUNC(sub_8283D880);
PPC_FUNC_IMPL(__imp__sub_8283D880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

