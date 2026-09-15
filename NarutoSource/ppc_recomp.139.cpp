#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82833CF0"))) PPC_WEAK_FUNC(sub_82833CF0);
PPC_FUNC_IMPL(__imp__sub_82833CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833CF4"))) PPC_WEAK_FUNC(sub_82833CF4);
PPC_FUNC_IMPL(__imp__sub_82833CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833CF8"))) PPC_WEAK_FUNC(sub_82833CF8);
PPC_FUNC_IMPL(__imp__sub_82833CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833CFC"))) PPC_WEAK_FUNC(sub_82833CFC);
PPC_FUNC_IMPL(__imp__sub_82833CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833D00"))) PPC_WEAK_FUNC(sub_82833D00);
PPC_FUNC_IMPL(__imp__sub_82833D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833D04"))) PPC_WEAK_FUNC(sub_82833D04);
PPC_FUNC_IMPL(__imp__sub_82833D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833D08"))) PPC_WEAK_FUNC(sub_82833D08);
PPC_FUNC_IMPL(__imp__sub_82833D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833D0C"))) PPC_WEAK_FUNC(sub_82833D0C);
PPC_FUNC_IMPL(__imp__sub_82833D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833D10"))) PPC_WEAK_FUNC(sub_82833D10);
PPC_FUNC_IMPL(__imp__sub_82833D10) {
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

__attribute__((alias("__imp__sub_82833D28"))) PPC_WEAK_FUNC(sub_82833D28);
PPC_FUNC_IMPL(__imp__sub_82833D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833D2C"))) PPC_WEAK_FUNC(sub_82833D2C);
PPC_FUNC_IMPL(__imp__sub_82833D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833D30"))) PPC_WEAK_FUNC(sub_82833D30);
PPC_FUNC_IMPL(__imp__sub_82833D30) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82833d5c
	if (ctx.cr6.eq) goto loc_82833D5C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82833d4c
	if (ctx.cr6.eq) goto loc_82833D4C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82833d64
	if (!ctx.cr6.eq) goto loc_82833D64;
	// b 0x82833d64
	goto loc_82833D64;
loc_82833D4C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82833d64
	goto loc_82833D64;
loc_82833D5C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82833D64:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,1840
	ctx.r5.s64 = ctx.r11.s64 + 1840;
	// b 0x82828ae8
	sub_82828AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833D74"))) PPC_WEAK_FUNC(sub_82833D74);
PPC_FUNC_IMPL(__imp__sub_82833D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833D78"))) PPC_WEAK_FUNC(sub_82833D78);
PPC_FUNC_IMPL(__imp__sub_82833D78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82833da4
	if (ctx.cr6.eq) goto loc_82833DA4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82833d94
	if (ctx.cr6.eq) goto loc_82833D94;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82833dac
	if (!ctx.cr6.eq) goto loc_82833DAC;
	// b 0x82833dac
	goto loc_82833DAC;
loc_82833D94:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82833dac
	goto loc_82833DAC;
loc_82833DA4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82833DAC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,1820
	ctx.r5.s64 = ctx.r11.s64 + 1820;
	// b 0x82828948
	sub_82828948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833DBC"))) PPC_WEAK_FUNC(sub_82833DBC);
PPC_FUNC_IMPL(__imp__sub_82833DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833DC0"))) PPC_WEAK_FUNC(sub_82833DC0);
PPC_FUNC_IMPL(__imp__sub_82833DC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833DCC"))) PPC_WEAK_FUNC(sub_82833DCC);
PPC_FUNC_IMPL(__imp__sub_82833DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833DD0"))) PPC_WEAK_FUNC(sub_82833DD0);
PPC_FUNC_IMPL(__imp__sub_82833DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82833DD8;
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
	// beq cr6,0x82833e4c
	if (ctx.cr6.eq) goto loc_82833E4C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82833e44
	if (ctx.cr6.eq) goto loc_82833E44;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82833e50
	if (ctx.cr6.eq) goto loc_82833E50;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82833e50
	goto loc_82833E50;
loc_82833E44:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82833e50
	goto loc_82833E50;
loc_82833E4C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82833E50:
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
	ctx.lr = 0x82833E64;
	sub_82801DE8(ctx, base);
	// lwz r11,11700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82833e90
	if (ctx.cr6.eq) goto loc_82833E90;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82833e88
	if (ctx.cr6.eq) goto loc_82833E88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82833e94
	if (!ctx.cr6.eq) goto loc_82833E94;
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x82833e94
	goto loc_82833E94;
loc_82833E88:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82833e94
	goto loc_82833E94;
loc_82833E90:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82833E94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82833ed4
	if (ctx.cr6.eq) goto loc_82833ED4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82833ed4
	if (ctx.cr6.eq) goto loc_82833ED4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82833ed4
	if (ctx.cr6.eq) goto loc_82833ED4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82833ed4
	if (ctx.cr6.eq) goto loc_82833ED4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2592, ctx.r10.u32);
loc_82833ED4:
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

__attribute__((alias("__imp__sub_82833EEC"))) PPC_WEAK_FUNC(sub_82833EEC);
PPC_FUNC_IMPL(__imp__sub_82833EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833EF0"))) PPC_WEAK_FUNC(sub_82833EF0);
PPC_FUNC_IMPL(__imp__sub_82833EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,12280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12280, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833F08"))) PPC_WEAK_FUNC(sub_82833F08);
PPC_FUNC_IMPL(__imp__sub_82833F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833F0C"))) PPC_WEAK_FUNC(sub_82833F0C);
PPC_FUNC_IMPL(__imp__sub_82833F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833F10"))) PPC_WEAK_FUNC(sub_82833F10);
PPC_FUNC_IMPL(__imp__sub_82833F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,12284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12284, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833F24"))) PPC_WEAK_FUNC(sub_82833F24);
PPC_FUNC_IMPL(__imp__sub_82833F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833F28"))) PPC_WEAK_FUNC(sub_82833F28);
PPC_FUNC_IMPL(__imp__sub_82833F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82833F30;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,13180(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r30,13192(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r29,13188(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// bl 0x82833dd0
	ctx.lr = 0x82833F74;
	sub_82833DD0(ctx, base);
	// stw r30,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r30.u32);
	// stw r31,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r31.u32);
	// stw r28,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r28.u32);
	// stw r29,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833F8C"))) PPC_WEAK_FUNC(sub_82833F8C);
PPC_FUNC_IMPL(__imp__sub_82833F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833F90"))) PPC_WEAK_FUNC(sub_82833F90);
PPC_FUNC_IMPL(__imp__sub_82833F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82833F98;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// addi r10,r28,35
	ctx.r10.s64 = ctx.r28.s64 + 35;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r22,r10,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,13188(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// stw r27,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r27.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,48(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwzx r8,r22,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x828341a8
	if (!ctx.cr6.eq) goto loc_828341A8;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r26,r11,-29532
	ctx.r26.s64 = ctx.r11.s64 + -29532;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// addi r31,r25,24
	ctx.r31.s64 = ctx.r25.s64 + 24;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82833FF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82834030
	if (ctx.cr6.eq) goto loc_82834030;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834028
	if (ctx.cr6.eq) goto loc_82834028;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82834034
	if (!ctx.cr6.eq) goto loc_82834034;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82834034
	goto loc_82834034;
loc_82834028:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82834034
	goto loc_82834034;
loc_82834030:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82834034:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82834064
	if (ctx.cr6.eq) goto loc_82834064;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8283405c
	if (ctx.cr6.eq) goto loc_8283405C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82834054
	if (ctx.cr6.eq) goto loc_82834054;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82834068
	goto loc_82834068;
loc_82834054:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82834068
	goto loc_82834068;
loc_8283405C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82834068
	goto loc_82834068;
loc_82834064:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82834068:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828340c4
	if (ctx.cr6.eq) goto loc_828340C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828340b0
	if (ctx.cr6.eq) goto loc_828340B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828340a8
	if (ctx.cr6.eq) goto loc_828340A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828340b4
	if (!ctx.cr6.eq) goto loc_828340B4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x828340b4
	goto loc_828340B4;
loc_828340A8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828340b4
	goto loc_828340B4;
loc_828340B0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828340B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828340d4
	if (ctx.cr6.eq) goto loc_828340D4;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x828340c8
	goto loc_828340C8;
loc_828340C4:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_828340C8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82833ff0
	if (ctx.cr6.lt) goto loc_82833FF0;
loc_828340D4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82834198
	if (ctx.cr6.eq) goto loc_82834198;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x8283417c
	if (!ctx.cr6.lt) goto loc_8283417C;
loc_828340E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r9,r28
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283415c
	if (ctx.cr6.eq) goto loc_8283415C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834154
	if (ctx.cr6.eq) goto loc_82834154;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283414c
	if (ctx.cr6.eq) goto loc_8283414C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82834160
	goto loc_82834160;
loc_8283414C:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x82834160
	goto loc_82834160;
loc_82834154:
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82834160
	goto loc_82834160;
loc_8283415C:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82834160:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212c000
	ctx.lr = 0x82834168;
	sub_8212C000(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8283417c
	if (ctx.cr6.eq) goto loc_8283417C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x828340e4
	if (ctx.cr6.lt) goto loc_828340E4;
loc_8283417C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82834198:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x828341a8
	if (ctx.cr6.eq) goto loc_828341A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r22,r25
	PPC_STORE_U32(ctx.r22.u32 + ctx.r25.u32, ctx.r11.u32);
loc_828341A8:
	// stw r21,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828341B4"))) PPC_WEAK_FUNC(sub_828341B4);
PPC_FUNC_IMPL(__imp__sub_828341B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828341B8"))) PPC_WEAK_FUNC(sub_828341B8);
PPC_FUNC_IMPL(__imp__sub_828341B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r7,24
	ctx.r11.s64 = ctx.r7.s64 + 24;
	// addi r8,r7,140
	ctx.r8.s64 = ctx.r7.s64 + 140;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
loc_828341DC:
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r5,r7,2
	ctx.r5.s64 = ctx.r7.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stwx r9,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r3,r10
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r4,r10
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r5,r10
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r4,r7,5
	ctx.r4.s64 = ctx.r7.s64 + 5;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stwx r9,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u32);
	// blt cr6,0x828341dc
	if (ctx.cr6.lt) goto loc_828341DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834244"))) PPC_WEAK_FUNC(sub_82834244);
PPC_FUNC_IMPL(__imp__sub_82834244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834248"))) PPC_WEAK_FUNC(sub_82834248);
PPC_FUNC_IMPL(__imp__sub_82834248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82834250;
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
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r10,-29532
	ctx.r31.s64 = ctx.r10.s64 + -29532;
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r25,13192(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828342c8
	if (ctx.cr6.eq) goto loc_828342C8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828342c0
	if (ctx.cr6.eq) goto loc_828342C0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828342cc
	if (ctx.cr6.eq) goto loc_828342CC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x828342cc
	goto loc_828342CC;
loc_828342C0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x828342cc
	goto loc_828342CC;
loc_828342C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_828342CC:
	// bl 0x82801f40
	ctx.lr = 0x828342D0;
	sub_82801F40(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r8,13188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82834308
	if (ctx.cr6.eq) goto loc_82834308;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834300
	if (ctx.cr6.eq) goto loc_82834300;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283430c
	if (!ctx.cr6.eq) goto loc_8283430C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283430c
	goto loc_8283430C;
loc_82834300:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8283430c
	goto loc_8283430C;
loc_82834308:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8283430C:
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82834380
	if (ctx.cr6.eq) goto loc_82834380;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82834380
	if (ctx.cr6.eq) goto loc_82834380;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82834380
	if (ctx.cr6.eq) goto loc_82834380;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82834380
	if (ctx.cr6.eq) goto loc_82834380;
	// lwz r3,2584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82834380
	if (ctx.cr6.eq) goto loc_82834380;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82834374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,13188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82834380:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828343ac
	if (ctx.cr6.eq) goto loc_828343AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828343a4
	if (ctx.cr6.eq) goto loc_828343A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828343b0
	if (!ctx.cr6.eq) goto loc_828343B0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828343b0
	goto loc_828343B0;
loc_828343A4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828343b0
	goto loc_828343B0;
loc_828343AC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828343B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283441c
	if (ctx.cr6.eq) goto loc_8283441C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8283441c
	if (ctx.cr6.eq) goto loc_8283441C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8283441c
	if (ctx.cr6.eq) goto loc_8283441C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283441c
	if (ctx.cr6.eq) goto loc_8283441C;
	// lwz r3,2584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8283441c
	if (ctx.cr6.eq) goto loc_8283441C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82834410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,13188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8283441C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82834448
	if (ctx.cr6.eq) goto loc_82834448;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834440
	if (ctx.cr6.eq) goto loc_82834440;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283444c
	if (!ctx.cr6.eq) goto loc_8283444C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283444c
	goto loc_8283444C;
loc_82834440:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8283444c
	goto loc_8283444C;
loc_82834448:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8283444C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283448c
	if (ctx.cr6.eq) goto loc_8283448C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8283448c
	if (ctx.cr6.eq) goto loc_8283448C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283448c
	if (ctx.cr6.eq) goto loc_8283448C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8283448c
	if (ctx.cr6.eq) goto loc_8283448C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8279e170
	ctx.lr = 0x8283448C;
	sub_8279E170(ctx, base);
loc_8283448C:
	// stw r25,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828344A8"))) PPC_WEAK_FUNC(sub_828344A8);
PPC_FUNC_IMPL(__imp__sub_828344A8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828344D0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82834510
	if (ctx.cr6.eq) goto loc_82834510;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834508
	if (ctx.cr6.eq) goto loc_82834508;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82834514
	if (!ctx.cr6.eq) goto loc_82834514;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82834514
	goto loc_82834514;
loc_82834508:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82834514
	goto loc_82834514;
loc_82834510:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82834514:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82834544
	if (ctx.cr6.eq) goto loc_82834544;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8283453c
	if (ctx.cr6.eq) goto loc_8283453C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82834534
	if (ctx.cr6.eq) goto loc_82834534;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82834548
	goto loc_82834548;
loc_82834534:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82834548
	goto loc_82834548;
loc_8283453C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82834548
	goto loc_82834548;
loc_82834544:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82834548:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828345c8
	if (ctx.cr6.eq) goto loc_828345C8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82834590
	if (ctx.cr6.eq) goto loc_82834590;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834588
	if (ctx.cr6.eq) goto loc_82834588;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82834594
	if (!ctx.cr6.eq) goto loc_82834594;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82834594
	goto loc_82834594;
loc_82834588:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82834594
	goto loc_82834594;
loc_82834590:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82834594:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828345b0
	if (ctx.cr6.eq) goto loc_828345B0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x828344d0
	if (ctx.cr6.lt) goto loc_828344D0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_828345B0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u32);
loc_828345C8:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bge cr6,0x828345e0
	if (!ctx.cr6.lt) goto loc_828345E0;
	// addi r11,r5,35
	ctx.r11.s64 = ctx.r5.s64 + 35;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_828345E0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828345E8"))) PPC_WEAK_FUNC(sub_828345E8);
PPC_FUNC_IMPL(__imp__sub_828345E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x828345F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r26,13188(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// stw r4,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r4.u32);
	// bne cr6,0x828346fc
	if (!ctx.cr6.eq) goto loc_828346FC;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8283469c
	if (ctx.cr6.eq) goto loc_8283469C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82834680
	if (ctx.cr6.eq) goto loc_82834680;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82834660
	if (ctx.cr6.eq) goto loc_82834660;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82834648
	if (ctx.cr6.eq) goto loc_82834648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828344a8
	ctx.lr = 0x8283463C;
	sub_828344A8(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82834648:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828344a8
	ctx.lr = 0x82834654;
	sub_828344A8(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82834660:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828344a8
	ctx.lr = 0x82834674;
	sub_828344A8(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82834680:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-29532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// bl 0x828344a8
	ctx.lr = 0x82834690;
	sub_828344A8(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_8283469C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
loc_828346A8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x828346d8
	if (ctx.cr6.eq) goto loc_828346D8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x828346d0
	if (ctx.cr6.eq) goto loc_828346D0;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x828346c8
	if (ctx.cr6.eq) goto loc_828346C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x828346dc
	goto loc_828346DC;
loc_828346C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x828346dc
	goto loc_828346DC;
loc_828346D0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x828346dc
	goto loc_828346DC;
loc_828346D8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_828346DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828344a8
	ctx.lr = 0x828346E4;
	sub_828344A8(ctx, base);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// blt cr6,0x828346a8
	if (ctx.cr6.lt) goto loc_828346A8;
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_828346FC:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82834788
	if (ctx.cr6.eq) goto loc_82834788;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8283476c
	if (ctx.cr6.eq) goto loc_8283476C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8283474c
	if (ctx.cr6.eq) goto loc_8283474C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82834734
	if (ctx.cr6.eq) goto loc_82834734;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82833f90
	ctx.lr = 0x82834728;
	sub_82833F90(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82834734:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82833f90
	ctx.lr = 0x82834740;
	sub_82833F90(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_8283474C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82833f90
	ctx.lr = 0x82834760;
	sub_82833F90(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_8283476C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-29532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// bl 0x82833f90
	ctx.lr = 0x8283477C;
	sub_82833F90(ctx, base);
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82834788:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// b 0x8283479c
	goto loc_8283479C;
loc_82834798:
	// lwz r4,13188(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
loc_8283479C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x828347c4
	if (ctx.cr6.eq) goto loc_828347C4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x828347bc
	if (ctx.cr6.eq) goto loc_828347BC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x828347c8
	if (ctx.cr6.eq) goto loc_828347C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x828347c8
	goto loc_828347C8;
loc_828347BC:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x828347c8
	goto loc_828347C8;
loc_828347C4:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_828347C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82833f90
	ctx.lr = 0x828347D4;
	sub_82833F90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x82834798
	if (ctx.cr6.lt) goto loc_82834798;
	// stw r26,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828347EC"))) PPC_WEAK_FUNC(sub_828347EC);
PPC_FUNC_IMPL(__imp__sub_828347EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828347F0"))) PPC_WEAK_FUNC(sub_828347F0);
PPC_FUNC_IMPL(__imp__sub_828347F0) {
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

__attribute__((alias("__imp__sub_82834808"))) PPC_WEAK_FUNC(sub_82834808);
PPC_FUNC_IMPL(__imp__sub_82834808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283481C"))) PPC_WEAK_FUNC(sub_8283481C);
PPC_FUNC_IMPL(__imp__sub_8283481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834820"))) PPC_WEAK_FUNC(sub_82834820);
PPC_FUNC_IMPL(__imp__sub_82834820) {
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

__attribute__((alias("__imp__sub_82834838"))) PPC_WEAK_FUNC(sub_82834838);
PPC_FUNC_IMPL(__imp__sub_82834838) {
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

__attribute__((alias("__imp__sub_82834850"))) PPC_WEAK_FUNC(sub_82834850);
PPC_FUNC_IMPL(__imp__sub_82834850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834868"))) PPC_WEAK_FUNC(sub_82834868);
PPC_FUNC_IMPL(__imp__sub_82834868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834880"))) PPC_WEAK_FUNC(sub_82834880);
PPC_FUNC_IMPL(__imp__sub_82834880) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82834888;
	__savegprlr_23(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,4
	ctx.r3.s64 = 4;
	// li r31,6
	ctx.r31.s64 = 6;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,7
	ctx.r29.s64 = 7;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r28,10
	ctx.r28.s64 = 10;
	// li r27,11
	ctx.r27.s64 = 11;
	// li r26,12
	ctx.r26.s64 = 12;
	// li r25,13
	ctx.r25.s64 = 13;
	// li r24,14
	ctx.r24.s64 = 14;
	// stw r7,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r7.u32);
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r6,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r6.u32);
	// stw r4,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r4.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r8,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r8.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r3,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r3.u32);
	// li r4,16642
	ctx.r4.s64 = 16642;
	// stw r5,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r5.u32);
	// li r3,516
	ctx.r3.s64 = 516;
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// addi r10,r11,332
	ctx.r10.s64 = ctx.r11.s64 + 332;
	// stw r31,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r31.u32);
	// li r31,64
	ctx.r31.s64 = 64;
	// stw r30,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r30.u32);
	// li r30,48
	ctx.r30.s64 = 48;
	// stw r29,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r29.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// stw r28,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r28.u32);
	// li r29,1024
	ctx.r29.s64 = 1024;
	// stw r27,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r27.u32);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// stw r26,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r26.u32);
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// stw r25,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r25.u32);
	// lis r26,32
	ctx.r26.s64 = 2097152;
	// stw r24,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r24.u32);
	// stw r23,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r23.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r30.u32);
	// stw r5,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r5.u32);
	// stw r8,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r8.u32);
	// stw r29,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r29.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r28,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r28.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r7,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r3,64
	ctx.r3.s64 = 4194304;
	// stw r6,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r6.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r6,r9,17
	ctx.r6.s64 = ctx.r9.s64 + 17;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82834A0C"))) PPC_WEAK_FUNC(sub_82834A0C);
PPC_FUNC_IMPL(__imp__sub_82834A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834A10"))) PPC_WEAK_FUNC(sub_82834A10);
PPC_FUNC_IMPL(__imp__sub_82834A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82834a94
	if (!ctx.cr6.eq) goto loc_82834A94;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82834ca0
	if (ctx.cr6.eq) goto loc_82834CA0;
	// lwz r10,916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82834ca0
	if (ctx.cr6.eq) goto loc_82834CA0;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82834c60
	if (ctx.cr6.eq) goto loc_82834C60;
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82834c60
	if (ctx.cr6.eq) goto loc_82834C60;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82834a6c
	if (ctx.cr6.eq) goto loc_82834A6C;
	// lwz r10,928(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82834b84
	if (!ctx.cr6.eq) goto loc_82834B84;
loc_82834A6C:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,856(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 856, temp.u32);
	// blr 
	return;
loc_82834A94:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82834af0
	if (!ctx.cr6.eq) goto loc_82834AF0;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82834c60
	if (ctx.cr6.eq) goto loc_82834C60;
	// lwz r10,916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82834c60
	if (ctx.cr6.eq) goto loc_82834C60;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82834ca0
	if (ctx.cr6.eq) goto loc_82834CA0;
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82834ca0
	if (ctx.cr6.eq) goto loc_82834CA0;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82834a6c
	if (ctx.cr6.eq) goto loc_82834A6C;
	// lwz r10,924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82834a6c
	if (ctx.cr6.eq) goto loc_82834A6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82834AF0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82834b40
	if (!ctx.cr6.eq) goto loc_82834B40;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82834ca0
	if (ctx.cr6.eq) goto loc_82834CA0;
	// lwz r10,924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82834ca0
	if (ctx.cr6.eq) goto loc_82834CA0;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82834c20
	if (ctx.cr6.eq) goto loc_82834C20;
	// lwz r10,928(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82834c20
	if (ctx.cr6.eq) goto loc_82834C20;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82834bf8
	if (ctx.cr6.eq) goto loc_82834BF8;
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x82834b80
	goto loc_82834B80;
loc_82834B40:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82834b84
	if (!ctx.cr6.eq) goto loc_82834B84;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82834bb8
	if (ctx.cr6.eq) goto loc_82834BB8;
	// lwz r10,924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82834bb8
	if (ctx.cr6.eq) goto loc_82834BB8;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82834b90
	if (ctx.cr6.eq) goto loc_82834B90;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82834bf8
	if (ctx.cr6.eq) goto loc_82834BF8;
	// lwz r10,916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
loc_82834B80:
	// beq cr6,0x82834bf8
	if (ctx.cr6.eq) goto loc_82834BF8;
loc_82834B84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82834B90:
	// addi r10,r5,71
	ctx.r10.s64 = ctx.r5.s64 + 71;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// b 0x82834cc4
	goto loc_82834CC4;
loc_82834BB8:
	// addi r10,r5,71
	ctx.r10.s64 = ctx.r5.s64 + 71;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,856(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 856, temp.u32);
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_82834BF8:
	// addi r10,r5,71
	ctx.r10.s64 = ctx.r5.s64 + 71;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_82834C20:
	// addi r10,r5,71
	ctx.r10.s64 = ctx.r5.s64 + 71;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,856(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 856, temp.u32);
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_82834C60:
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r5,71
	ctx.r10.s64 = ctx.r5.s64 + 71;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lfs f0,856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,856(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 856, temp.u32);
	// stfsx f12,r9,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_82834CA0:
	// addi r10,r5,71
	ctx.r10.s64 = ctx.r5.s64 + 71;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
loc_82834CC4:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,856(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 856, temp.u32);
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834CDC"))) PPC_WEAK_FUNC(sub_82834CDC);
PPC_FUNC_IMPL(__imp__sub_82834CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834CE0"))) PPC_WEAK_FUNC(sub_82834CE0);
PPC_FUNC_IMPL(__imp__sub_82834CE0) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,13188(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82834d28
	if (!ctx.cr6.gt) goto loc_82834D28;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 * 52;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82834d34
	goto loc_82834D34;
loc_82834D28:
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r30.u32);
loc_82834D34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x82834D40;
	sub_82219130(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82834d74
	if (ctx.cr6.eq) goto loc_82834D74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834d64
	if (ctx.cr6.eq) goto loc_82834D64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82834d7c
	if (!ctx.cr6.eq) goto loc_82834D7C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82834d7c
	goto loc_82834D7C;
loc_82834D64:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82834d7c
	goto loc_82834D7C;
loc_82834D74:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82834D7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82834dc4
	if (ctx.cr6.eq) goto loc_82834DC4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,10004
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10004, ctx.xer);
	// beq cr6,0x82834db4
	if (ctx.cr6.eq) goto loc_82834DB4;
	// cmpwi cr6,r11,10046
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10046, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x82834dc8
	if (!ctx.cr6.eq) goto loc_82834DC8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// b 0x82834dc8
	goto loc_82834DC8;
loc_82834DB4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
loc_82834DC4:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_82834DC8:
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

__attribute__((alias("__imp__sub_82834DE0"))) PPC_WEAK_FUNC(sub_82834DE0);
PPC_FUNC_IMPL(__imp__sub_82834DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,724(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 724, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834DF4"))) PPC_WEAK_FUNC(sub_82834DF4);
PPC_FUNC_IMPL(__imp__sub_82834DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834DF8"))) PPC_WEAK_FUNC(sub_82834DF8);
PPC_FUNC_IMPL(__imp__sub_82834DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,768(r9)
	PPC_STORE_U32(ctx.r9.u32 + 768, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834E0C"))) PPC_WEAK_FUNC(sub_82834E0C);
PPC_FUNC_IMPL(__imp__sub_82834E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834E10"))) PPC_WEAK_FUNC(sub_82834E10);
PPC_FUNC_IMPL(__imp__sub_82834E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,1038
	ctx.r10.s64 = ctx.r4.s64 + 1038;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,27476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r11,4596
	ctx.r9.s64 = ctx.r11.s64 + 4596;
	// lwz r8,4600(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4600);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82834e88
	if (ctx.cr6.eq) goto loc_82834E88;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82834e78
	if (ctx.cr6.eq) goto loc_82834E78;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82834e90
	if (!ctx.cr6.eq) goto loc_82834E90;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82834e90
	goto loc_82834E90;
loc_82834E78:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r6,r10,-29532
	ctx.r6.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82834e90
	goto loc_82834E90;
loc_82834E88:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_82834E90:
	// lwz r11,4128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stw r8,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834EF4"))) PPC_WEAK_FUNC(sub_82834EF4);
PPC_FUNC_IMPL(__imp__sub_82834EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834EF8"))) PPC_WEAK_FUNC(sub_82834EF8);
PPC_FUNC_IMPL(__imp__sub_82834EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82834F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82834f54
	if (ctx.cr6.eq) goto loc_82834F54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82834f44
	if (ctx.cr6.eq) goto loc_82834F44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82834f5c
	if (!ctx.cr6.eq) goto loc_82834F5C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82834f5c
	goto loc_82834F5C;
loc_82834F44:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82834f5c
	goto loc_82834F5C;
loc_82834F54:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82834F5C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82834f94
	if (ctx.cr6.eq) goto loc_82834F94;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82834f94
	if (ctx.cr6.eq) goto loc_82834F94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82834f94
	if (ctx.cr6.eq) goto loc_82834F94;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x827cf940
	ctx.lr = 0x82834F8C;
	sub_827CF940(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82834f98
	goto loc_82834F98;
loc_82834F94:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82834F98:
	// addi r10,r30,263
	ctx.r10.s64 = ctx.r30.s64 + 263;
	// addi r9,r30,1121
	ctx.r9.s64 = ctx.r30.s64 + 1121;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r6,13434
	ctx.r4.s64 = ctx.r6.s64 + 13434;
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r28,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u32);
	// bl 0x82800240
	ctx.lr = 0x82834FC0;
	sub_82800240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r30,1053
	ctx.r11.s64 = ctx.r30.s64 + 1053;
	// bne cr6,0x82834fdc
	if (!ctx.cr6.eq) goto loc_82834FDC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82834FDC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82834FF0"))) PPC_WEAK_FUNC(sub_82834FF0);
PPC_FUNC_IMPL(__imp__sub_82834FF0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r11,13434
	ctx.r30.s64 = ctx.r11.s64 + 13434;
	// addi r5,r10,920
	ctx.r5.s64 = ctx.r10.s64 + 920;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82834ef8
	ctx.lr = 0x82835028;
	sub_82834EF8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,932
	ctx.r5.s64 = ctx.r9.s64 + 932;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82834ef8
	ctx.lr = 0x82835044;
	sub_82834EF8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,940
	ctx.r5.s64 = ctx.r8.s64 + 940;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82834ef8
	ctx.lr = 0x82835060;
	sub_82834EF8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r7,952
	ctx.r5.s64 = ctx.r7.s64 + 952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82834ef8
	ctx.lr = 0x8283507C;
	sub_82834EF8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,964
	ctx.r5.s64 = ctx.r5.s64 + 964;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82834ef8
	ctx.lr = 0x82835098;
	sub_82834EF8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r4,984
	ctx.r5.s64 = ctx.r4.s64 + 984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82834ef8
	ctx.lr = 0x828350B4;
	sub_82834EF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1004
	ctx.r5.s64 = ctx.r11.s64 + 1004;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82834ef8
	ctx.lr = 0x828350D0;
	sub_82834EF8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,1024
	ctx.r5.s64 = ctx.r10.s64 + 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82834ef8
	ctx.lr = 0x828350EC;
	sub_82834EF8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r9,1044
	ctx.r5.s64 = ctx.r9.s64 + 1044;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82834ef8
	ctx.lr = 0x82835108;
	sub_82834EF8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r5,r7,1072
	ctx.r5.s64 = ctx.r7.s64 + 1072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r8,1060
	ctx.r6.s64 = ctx.r8.s64 + 1060;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82834ef8
	ctx.lr = 0x82835128;
	sub_82834EF8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r6,1080
	ctx.r6.s64 = ctx.r6.s64 + 1080;
	// addi r5,r5,1096
	ctx.r5.s64 = ctx.r5.s64 + 1096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82834ef8
	ctx.lr = 0x82835148;
	sub_82834EF8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r4,1108
	ctx.r6.s64 = ctx.r4.s64 + 1108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1120
	ctx.r5.s64 = ctx.r11.s64 + 1120;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82834ef8
	ctx.lr = 0x82835168;
	sub_82834EF8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r10,1132
	ctx.r6.s64 = ctx.r10.s64 + 1132;
	// addi r5,r9,1152
	ctx.r5.s64 = ctx.r9.s64 + 1152;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82834ef8
	ctx.lr = 0x82835188;
	sub_82834EF8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r5,r7,-10352
	ctx.r5.s64 = ctx.r7.s64 + -10352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r8,1168
	ctx.r6.s64 = ctx.r8.s64 + 1168;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82834ef8
	ctx.lr = 0x828351A8;
	sub_82834EF8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r6,r6,1176
	ctx.r6.s64 = ctx.r6.s64 + 1176;
	// addi r5,r5,1188
	ctx.r5.s64 = ctx.r5.s64 + 1188;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82834ef8
	ctx.lr = 0x828351C8;
	sub_82834EF8(ctx, base);
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

__attribute__((alias("__imp__sub_828351E0"))) PPC_WEAK_FUNC(sub_828351E0);
PPC_FUNC_IMPL(__imp__sub_828351E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835238
	if (ctx.cr6.eq) goto loc_82835238;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835228
	if (ctx.cr6.eq) goto loc_82835228;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82835240
	if (!ctx.cr6.eq) goto loc_82835240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82835240
	goto loc_82835240;
loc_82835228:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82835240
	goto loc_82835240;
loc_82835238:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82835240:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82808560
	ctx.lr = 0x8283524C;
	sub_82808560(ctx, base);
	// addi r11,r30,1038
	ctx.r11.s64 = ctx.r30.s64 + 1038;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82835270"))) PPC_WEAK_FUNC(sub_82835270);
PPC_FUNC_IMPL(__imp__sub_82835270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,8256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8256, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835288"))) PPC_WEAK_FUNC(sub_82835288);
PPC_FUNC_IMPL(__imp__sub_82835288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,7308(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7308, temp.u32);
	// stfs f13,7312(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7312, temp.u32);
	// stfs f12,7316(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7316, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828352B0"))) PPC_WEAK_FUNC(sub_828352B0);
PPC_FUNC_IMPL(__imp__sub_828352B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x828352B8;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r21,13180(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r20,13184(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r22,13188(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13192(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lfs f31,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// addi r31,r25,7312
	ctx.r31.s64 = ctx.r25.s64 + 7312;
	// stw r10,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r10.u32);
	// addi r19,r11,-29532
	ctx.r19.s64 = ctx.r11.s64 + -29532;
loc_82835318:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// addi r24,r31,-4
	ctx.r24.s64 = ctx.r31.s64 + -4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835350
	if (ctx.cr6.eq) goto loc_82835350;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835348
	if (ctx.cr6.eq) goto loc_82835348;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82835354
	if (!ctx.cr6.eq) goto loc_82835354;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82835354
	goto loc_82835354;
loc_82835348:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// b 0x82835354
	goto loc_82835354;
loc_82835350:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
loc_82835354:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828353b0
	if (ctx.cr6.eq) goto loc_828353B0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828353b0
	if (ctx.cr6.eq) goto loc_828353B0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828353b0
	if (ctx.cr6.eq) goto loc_828353B0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828353b0
	if (ctx.cr6.eq) goto loc_828353B0;
	// lwz r3,2584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828353b0
	if (ctx.cr6.eq) goto loc_828353B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828353AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,13188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
loc_828353B0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,0(r24)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82835318
	if (ctx.cr6.lt) goto loc_82835318;
	// stw r23,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828353E8"))) PPC_WEAK_FUNC(sub_828353E8);
PPC_FUNC_IMPL(__imp__sub_828353E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// std r10,4120(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4120, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835400"))) PPC_WEAK_FUNC(sub_82835400);
PPC_FUNC_IMPL(__imp__sub_82835400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,9328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82835424
	if (ctx.cr6.eq) goto loc_82835424;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82835428
	if (!ctx.cr6.eq) goto loc_82835428;
loc_82835424:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82835428:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835430"))) PPC_WEAK_FUNC(sub_82835430);
PPC_FUNC_IMPL(__imp__sub_82835430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,4176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4176, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835444"))) PPC_WEAK_FUNC(sub_82835444);
PPC_FUNC_IMPL(__imp__sub_82835444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835448"))) PPC_WEAK_FUNC(sub_82835448);
PPC_FUNC_IMPL(__imp__sub_82835448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82835464
	if (ctx.cr6.eq) goto loc_82835464;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82835464:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,9752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9752, ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828354a0
	if (ctx.cr6.eq) goto loc_828354A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835490
	if (ctx.cr6.eq) goto loc_82835490;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828354a8
	if (!ctx.cr6.eq) goto loc_828354A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828354a8
	goto loc_828354A8;
loc_82835490:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828354a8
	goto loc_828354A8;
loc_828354A0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828354A8:
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
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828354E0"))) PPC_WEAK_FUNC(sub_828354E0);
PPC_FUNC_IMPL(__imp__sub_828354E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835524
	if (ctx.cr6.eq) goto loc_82835524;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835514
	if (ctx.cr6.eq) goto loc_82835514;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283552c
	if (!ctx.cr6.eq) goto loc_8283552C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283552c
	goto loc_8283552C;
loc_82835514:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8283552c
	goto loc_8283552C;
loc_82835524:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8283552C:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,29760(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29760);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82835554
	if (ctx.cr6.eq) goto loc_82835554;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82835558
	goto loc_82835558;
loc_82835554:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82835558:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82835570
	if (ctx.cr6.eq) goto loc_82835570;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_82835570:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,4132(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,4700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4700);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-30300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x828355d4
	if (ctx.cr6.lt) goto loc_828355D4;
	// lwz r11,3924(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3924);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828355b8
	if (ctx.cr6.eq) goto loc_828355B8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828355b8
	if (ctx.cr6.eq) goto loc_828355B8;
loc_828355AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828355B8:
	// lfs f0,4132(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4132);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,4116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4116);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f13,f0,f0
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// lfs f0,-30868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x828355ac
	if (ctx.cr6.gt) goto loc_828355AC;
loc_828355D4:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828355DC"))) PPC_WEAK_FUNC(sub_828355DC);
PPC_FUNC_IMPL(__imp__sub_828355DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828355E0"))) PPC_WEAK_FUNC(sub_828355E0);
PPC_FUNC_IMPL(__imp__sub_828355E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x828355E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-30832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// lwz r24,13192(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r23,13188(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r21,13184(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
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
	// lfs f13,9332(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 9332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828356f8
	if (!ctx.cr6.gt) goto loc_828356F8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835678
	if (ctx.cr6.eq) goto loc_82835678;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835668
	if (ctx.cr6.eq) goto loc_82835668;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82835680
	if (ctx.cr6.eq) goto loc_82835680;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82835680
	goto loc_82835680;
loc_82835668:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82835680
	goto loc_82835680;
loc_82835678:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82835680:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82835688;
	sub_82804410(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,3692(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x828356f8
	if (ctx.cr6.gt) goto loc_828356F8;
	// lfs f13,3912(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3912);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,3880(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3880);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r27,3880
	ctx.r3.s64 = ctx.r27.s64 + 3880;
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,3916(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3916);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,3884(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3884);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,3888(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3888);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f8,f10,f12,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x828356f8
	if (!ctx.cr6.gt) goto loc_828356F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8212c130
	ctx.lr = 0x828356E4;
	sub_8212C130(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,-4448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828356f8
	if (!ctx.cr6.lt) goto loc_828356F8;
	// li r26,1
	ctx.r26.s64 = 1;
loc_828356F8:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// stw r24,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82835714"))) PPC_WEAK_FUNC(sub_82835714);
PPC_FUNC_IMPL(__imp__sub_82835714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835718"))) PPC_WEAK_FUNC(sub_82835718);
PPC_FUNC_IMPL(__imp__sub_82835718) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82835764
	if (!ctx.cr6.eq) goto loc_82835764;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r4,r11,3668
	ctx.r4.s64 = ctx.r11.s64 + 3668;
	// addi r3,r11,7332
	ctx.r3.s64 = ctx.r11.s64 + 7332;
	// lfs f1,4700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4700);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212c3c0
	ctx.lr = 0x8283575C;
	sub_8212C3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82835770
	if (!ctx.cr6.eq) goto loc_82835770;
loc_82835764:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82835774
	goto loc_82835774;
loc_82835770:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82835774:
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

__attribute__((alias("__imp__sub_8283578C"))) PPC_WEAK_FUNC(sub_8283578C);
PPC_FUNC_IMPL(__imp__sub_8283578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835790"))) PPC_WEAK_FUNC(sub_82835790);
PPC_FUNC_IMPL(__imp__sub_82835790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828357d0
	if (ctx.cr6.eq) goto loc_828357D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828357c0
	if (ctx.cr6.eq) goto loc_828357C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828357d8
	if (!ctx.cr6.eq) goto loc_828357D8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828357d8
	goto loc_828357D8;
loc_828357C0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828357d8
	goto loc_828357D8;
loc_828357D0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828357D8:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82835800
	if (ctx.cr6.eq) goto loc_82835800;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82835804
	goto loc_82835804;
loc_82835800:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82835804:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8283581c
	if (ctx.cr6.eq) goto loc_8283581C;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_8283581C:
	// fmuls f11,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-29712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29712);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-3896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3896);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f9,f10,f13,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835848"))) PPC_WEAK_FUNC(sub_82835848);
PPC_FUNC_IMPL(__imp__sub_82835848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,8260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8260, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283585C"))) PPC_WEAK_FUNC(sub_8283585C);
PPC_FUNC_IMPL(__imp__sub_8283585C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835860"))) PPC_WEAK_FUNC(sub_82835860);
PPC_FUNC_IMPL(__imp__sub_82835860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x8283587c
	if (!ctx.cr6.gt) goto loc_8283587C;
	// cmpwi cr6,r5,42
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 42, ctx.xer);
	// blt cr6,0x82835888
	if (ctx.cr6.lt) goto loc_82835888;
loc_8283587C:
	// lwz r11,3708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3708);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82835888:
	// addi r10,r5,928
	ctx.r10.s64 = ctx.r5.s64 + 928;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283589C"))) PPC_WEAK_FUNC(sub_8283589C);
PPC_FUNC_IMPL(__imp__sub_8283589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828358A0"))) PPC_WEAK_FUNC(sub_828358A0);
PPC_FUNC_IMPL(__imp__sub_828358A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,4128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4128);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828358B8"))) PPC_WEAK_FUNC(sub_828358B8);
PPC_FUNC_IMPL(__imp__sub_828358B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,8260(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8260);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828358D0"))) PPC_WEAK_FUNC(sub_828358D0);
PPC_FUNC_IMPL(__imp__sub_828358D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,1072
	ctx.r10.s64 = ctx.r5.s64 + 1072;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x828358f8
	if (ctx.cr6.eq) goto loc_828358F8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82835904
	if (!ctx.cr6.eq) goto loc_82835904;
loc_828358F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82835904:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835910"))) PPC_WEAK_FUNC(sub_82835910);
PPC_FUNC_IMPL(__imp__sub_82835910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,1140
	ctx.r11.s64 = ctx.r11.s64 + 1140;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283593C"))) PPC_WEAK_FUNC(sub_8283593C);
PPC_FUNC_IMPL(__imp__sub_8283593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835940"))) PPC_WEAK_FUNC(sub_82835940);
PPC_FUNC_IMPL(__imp__sub_82835940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,8232(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8232);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835958"))) PPC_WEAK_FUNC(sub_82835958);
PPC_FUNC_IMPL(__imp__sub_82835958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82835960;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13192(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r25,13188(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13184(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// bge cr6,0x828359b4
	if (!ctx.cr6.lt) goto loc_828359B4;
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// bgt cr6,0x82835a44
	if (ctx.cr6.gt) goto loc_82835A44;
loc_828359B4:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828359e8
	if (ctx.cr6.eq) goto loc_828359E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828359d8
	if (ctx.cr6.eq) goto loc_828359D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828359f0
	if (ctx.cr6.eq) goto loc_828359F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x828359f0
	goto loc_828359F0;
loc_828359D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828359f0
	goto loc_828359F0;
loc_828359E8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828359F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82835a40
	if (ctx.cr6.eq) goto loc_82835A40;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835a40
	if (ctx.cr6.eq) goto loc_82835A40;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82835a40
	if (ctx.cr6.eq) goto loc_82835A40;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82835a40
	if (ctx.cr6.eq) goto loc_82835A40;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835a40
	if (ctx.cr6.eq) goto loc_82835A40;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82835a40
	if (!ctx.cr6.lt) goto loc_82835A40;
	// stw r27,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r27.u32);
	// bl 0x827cdeb0
	ctx.lr = 0x82835A40;
	sub_827CDEB0(ctx, base);
loc_82835A40:
	// stw r27,8228(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8228, ctx.r27.u32);
loc_82835A44:
	// stw r25,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82835A5C"))) PPC_WEAK_FUNC(sub_82835A5C);
PPC_FUNC_IMPL(__imp__sub_82835A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835A60"))) PPC_WEAK_FUNC(sub_82835A60);
PPC_FUNC_IMPL(__imp__sub_82835A60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,3700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3700, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835A78"))) PPC_WEAK_FUNC(sub_82835A78);
PPC_FUNC_IMPL(__imp__sub_82835A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82835A80;
	__savegprlr_23(ctx, base);
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13184(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r26,13192(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// lwz r25,13188(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bne cr6,0x82835b34
	if (!ctx.cr6.eq) goto loc_82835B34;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835b00
	if (ctx.cr6.eq) goto loc_82835B00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835af0
	if (ctx.cr6.eq) goto loc_82835AF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82835b08
	if (ctx.cr6.eq) goto loc_82835B08;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82835b08
	goto loc_82835B08;
loc_82835AF0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82835b08
	goto loc_82835B08;
loc_82835B00:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82835B08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82835b98
	if (ctx.cr6.eq) goto loc_82835B98;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835b98
	if (ctx.cr6.eq) goto loc_82835B98;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82835b98
	if (ctx.cr6.eq) goto loc_82835B98;
	// bl 0x827cd810
	ctx.lr = 0x82835B2C;
	sub_827CD810(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82835b9c
	goto loc_82835B9C;
loc_82835B34:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835b64
	if (ctx.cr6.eq) goto loc_82835B64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835b54
	if (ctx.cr6.eq) goto loc_82835B54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82835b6c
	if (ctx.cr6.eq) goto loc_82835B6C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82835b6c
	goto loc_82835B6C;
loc_82835B54:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82835b6c
	goto loc_82835B6C;
loc_82835B64:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82835B6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82835b98
	if (ctx.cr6.eq) goto loc_82835B98;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835b98
	if (ctx.cr6.eq) goto loc_82835B98;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82835b98
	if (ctx.cr6.eq) goto loc_82835B98;
	// bl 0x827cd620
	ctx.lr = 0x82835B90;
	sub_827CD620(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82835b9c
	goto loc_82835B9C;
loc_82835B98:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82835B9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r26.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r25.u32);
	// ble cr6,0x82835bbc
	if (!ctx.cr6.gt) goto loc_82835BBC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82835BBC:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82835BC8"))) PPC_WEAK_FUNC(sub_82835BC8);
PPC_FUNC_IMPL(__imp__sub_82835BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r7,r8,4212
	ctx.r7.s64 = ctx.r8.s64 + 4212;
loc_82835BDC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835c64
	if (ctx.cr6.eq) goto loc_82835C64;
	// lwz r11,3700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3700);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82835c28
	if (!ctx.cr6.eq) goto loc_82835C28;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82835c64
	if (!ctx.cr6.eq) goto loc_82835C64;
loc_82835C00:
	// lwz r10,1144(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1144);
	// addi r11,r8,1140
	ctx.r11.s64 = ctx.r8.s64 + 1140;
	// lwz r9,4128(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4128);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,3700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3700, ctx.r5.u32);
	// blr 
	return;
loc_82835C28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82835c64
	if (ctx.cr6.eq) goto loc_82835C64;
loc_82835C30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x82835c54
	if (ctx.cr6.eq) goto loc_82835C54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82835c30
	if (ctx.cr6.eq) goto loc_82835C30;
loc_82835C54:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82835c00
	if (!ctx.cr6.eq) goto loc_82835C00;
loc_82835C64:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x82835bdc
	if (ctx.cr6.lt) goto loc_82835BDC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835C78"))) PPC_WEAK_FUNC(sub_82835C78);
PPC_FUNC_IMPL(__imp__sub_82835C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,8228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8228);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835C90"))) PPC_WEAK_FUNC(sub_82835C90);
PPC_FUNC_IMPL(__imp__sub_82835C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3700(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3700);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835CA8"))) PPC_WEAK_FUNC(sub_82835CA8);
PPC_FUNC_IMPL(__imp__sub_82835CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82835CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r29,48(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835d00
	if (ctx.cr6.eq) goto loc_82835D00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835cf8
	if (ctx.cr6.eq) goto loc_82835CF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82835d04
	if (!ctx.cr6.eq) goto loc_82835D04;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82835d04
	goto loc_82835D04;
loc_82835CF8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82835d04
	goto loc_82835D04;
loc_82835D00:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82835D04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835d3c
	if (ctx.cr6.eq) goto loc_82835D3C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835d3c
	if (ctx.cr6.eq) goto loc_82835D3C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835d3c
	if (ctx.cr6.eq) goto loc_82835D3C;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x82218a80
	ctx.lr = 0x82835D34;
	sub_82218A80(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82835D3C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835d68
	if (ctx.cr6.eq) goto loc_82835D68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835d60
	if (ctx.cr6.eq) goto loc_82835D60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82835d6c
	if (!ctx.cr6.eq) goto loc_82835D6C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82835d6c
	goto loc_82835D6C;
loc_82835D60:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82835d6c
	goto loc_82835D6C;
loc_82835D68:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82835D6C:
	// lwz r10,4128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,985
	ctx.r10.s64 = ctx.r10.s64 + 985;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// beq cr6,0x82835da8
	if (ctx.cr6.eq) goto loc_82835DA8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82835da8
	if (ctx.cr6.eq) goto loc_82835DA8;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82835da8
	if (ctx.cr6.eq) goto loc_82835DA8;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x827cddf8
	ctx.lr = 0x82835DA8;
	sub_827CDDF8(ctx, base);
loc_82835DA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82835DB0"))) PPC_WEAK_FUNC(sub_82835DB0);
PPC_FUNC_IMPL(__imp__sub_82835DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r10,8276
	ctx.r11.s64 = ctx.r10.s64 + 8276;
	// lwz r8,8280(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8280);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,7344
	ctx.r8.s64 = ctx.r10.s64 + 7344;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r5,r7,2
	ctx.r5.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,7348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7348);
	// beq cr6,0x82835e38
	if (ctx.cr6.eq) goto loc_82835E38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835e28
	if (ctx.cr6.eq) goto loc_82835E28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82835e40
	if (!ctx.cr6.eq) goto loc_82835E40;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82835e40
	goto loc_82835E40;
loc_82835E28:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82835e40
	goto loc_82835E40;
loc_82835E38:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82835E40:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x8275f608
	sub_8275F608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82835E84"))) PPC_WEAK_FUNC(sub_82835E84);
PPC_FUNC_IMPL(__imp__sub_82835E84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835E88"))) PPC_WEAK_FUNC(sub_82835E88);
PPC_FUNC_IMPL(__imp__sub_82835E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82835E90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,48(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,8240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82835ef4
	if (ctx.cr6.eq) goto loc_82835EF4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835eec
	if (ctx.cr6.eq) goto loc_82835EEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82835ee4
	if (ctx.cr6.eq) goto loc_82835EE4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82835ef8
	goto loc_82835EF8;
loc_82835EE4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82835ef8
	goto loc_82835EF8;
loc_82835EEC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82835ef8
	goto loc_82835EF8;
loc_82835EF4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82835EF8:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r4,12720(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12720);
	// beq cr6,0x82835f38
	if (ctx.cr6.eq) goto loc_82835F38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835f30
	if (ctx.cr6.eq) goto loc_82835F30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82835f28
	if (ctx.cr6.eq) goto loc_82835F28;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82835f3c
	goto loc_82835F3C;
loc_82835F28:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82835f3c
	goto loc_82835F3C;
loc_82835F30:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82835f3c
	goto loc_82835F3C;
loc_82835F38:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82835F3C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,12280(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12280);
	// beq cr6,0x82835f7c
	if (ctx.cr6.eq) goto loc_82835F7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835f74
	if (ctx.cr6.eq) goto loc_82835F74;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82835f6c
	if (ctx.cr6.eq) goto loc_82835F6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82835f80
	goto loc_82835F80;
loc_82835F6C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82835f80
	goto loc_82835F80;
loc_82835F74:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82835f80
	goto loc_82835F80;
loc_82835F7C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82835F80:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r7,20944(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20944);
	// beq cr6,0x82835fc0
	if (ctx.cr6.eq) goto loc_82835FC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82835fb8
	if (ctx.cr6.eq) goto loc_82835FB8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82835fb0
	if (ctx.cr6.eq) goto loc_82835FB0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82835fc4
	goto loc_82835FC4;
loc_82835FB0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82835fc4
	goto loc_82835FC4;
loc_82835FB8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82835fc4
	goto loc_82835FC4;
loc_82835FC0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82835FC4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r3,23220(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23220);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82835ffc
	if (!ctx.cr6.eq) goto loc_82835FFC;
	// lwz r6,2820(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2820);
	// cmplwi cr6,r6,65535
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65535, ctx.xer);
	// beq cr6,0x82835ff4
	if (ctx.cr6.eq) goto loc_82835FF4;
	// lwz r10,23224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82835ffc
	if (!ctx.cr6.eq) goto loc_82835FFC;
loc_82835FF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82836000
	goto loc_82836000;
loc_82835FFC:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82836000:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836028
	if (ctx.cr6.eq) goto loc_82836028;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836020
	if (ctx.cr6.eq) goto loc_82836020;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283602c
	if (!ctx.cr6.eq) goto loc_8283602C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8283602c
	goto loc_8283602C;
loc_82836020:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283602c
	goto loc_8283602C;
loc_82836028:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283602C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r31,10368(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10368);
	// beq cr6,0x82836054
	if (ctx.cr6.eq) goto loc_82836054;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82836054
	if (ctx.cr6.eq) goto loc_82836054;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82836058
	if (!ctx.cr6.eq) goto loc_82836058;
loc_82836054:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82836058:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82836070
	if (ctx.cr6.eq) goto loc_82836070;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82836070
	if (ctx.cr6.eq) goto loc_82836070;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82836074
	if (!ctx.cr6.eq) goto loc_82836074;
loc_82836070:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82836074:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82836094
	if (ctx.cr6.eq) goto loc_82836094;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82836094
	if (ctx.cr6.eq) goto loc_82836094;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82836094
	if (ctx.cr6.eq) goto loc_82836094;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82836098
	if (!ctx.cr6.eq) goto loc_82836098;
loc_82836094:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82836098:
	// li r4,83
	ctx.r4.s64 = 83;
	// lwz r5,9148(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828360A8;
	sub_82835DB0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r5,9148(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828360BC;
	sub_82835DB0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r5,9148(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828360D0;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r5,9148(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828360E4;
	sub_82835DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r5,9148(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828360F8;
	sub_82835DB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82836100"))) PPC_WEAK_FUNC(sub_82836100);
PPC_FUNC_IMPL(__imp__sub_82836100) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82835db0
	sub_82835DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82836110"))) PPC_WEAK_FUNC(sub_82836110);
PPC_FUNC_IMPL(__imp__sub_82836110) {
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
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283616c
	if (ctx.cr6.eq) goto loc_8283616C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836164
	if (ctx.cr6.eq) goto loc_82836164;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283615c
	if (ctx.cr6.eq) goto loc_8283615C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82836170
	goto loc_82836170;
loc_8283615C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82836170
	goto loc_82836170;
loc_82836164:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82836170
	goto loc_82836170;
loc_8283616C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82836170:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828361c8
	if (ctx.cr6.eq) goto loc_828361C8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828361a0
	if (ctx.cr6.eq) goto loc_828361A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836198
	if (ctx.cr6.eq) goto loc_82836198;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828361a4
	if (!ctx.cr6.eq) goto loc_828361A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828361a4
	goto loc_828361A4;
loc_82836198:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828361a4
	goto loc_828361A4;
loc_828361A0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828361A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828361c8
	if (ctx.cr6.eq) goto loc_828361C8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828361c8
	if (ctx.cr6.eq) goto loc_828361C8;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828361c8
	if (ctx.cr6.eq) goto loc_828361C8;
	// bl 0x827cd470
	ctx.lr = 0x828361C8;
	sub_827CD470(ctx, base);
loc_828361C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r5,8276
	ctx.r9.s64 = ctx.r5.s64 + 8276;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_828361D4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828361D8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u32);
	// blt cr6,0x828361d8
	if (ctx.cr6.lt) goto loc_828361D8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x828361d4
	if (ctx.cr6.lt) goto loc_828361D4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836218"))) PPC_WEAK_FUNC(sub_82836218);
PPC_FUNC_IMPL(__imp__sub_82836218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82836220;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,8240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836278
	if (ctx.cr6.eq) goto loc_82836278;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836268
	if (ctx.cr6.eq) goto loc_82836268;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836280
	if (!ctx.cr6.eq) goto loc_82836280;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82836280
	goto loc_82836280;
loc_82836268:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82836280
	goto loc_82836280;
loc_82836278:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82836280:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,14864(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828362c8
	if (ctx.cr6.eq) goto loc_828362C8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828362c0
	if (ctx.cr6.eq) goto loc_828362C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828362b8
	if (ctx.cr6.eq) goto loc_828362B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828362cc
	if (!ctx.cr6.eq) goto loc_828362CC;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x828362cc
	goto loc_828362CC;
loc_828362B8:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x828362cc
	goto loc_828362CC;
loc_828362C0:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x828362cc
	goto loc_828362CC;
loc_828362C8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_828362CC:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828362DC;
	sub_82835DB0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828362F0;
	sub_82835DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836304;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836318;
	sub_82835DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82836320"))) PPC_WEAK_FUNC(sub_82836320);
PPC_FUNC_IMPL(__imp__sub_82836320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82836328;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,48(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,8240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836394
	if (ctx.cr6.eq) goto loc_82836394;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283638c
	if (ctx.cr6.eq) goto loc_8283638C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82836384
	if (ctx.cr6.eq) goto loc_82836384;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82836398
	goto loc_82836398;
loc_82836384:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82836398
	goto loc_82836398;
loc_8283638C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82836398
	goto loc_82836398;
loc_82836394:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82836398:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,10344(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10344);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82836448
	if (!ctx.cr6.eq) goto loc_82836448;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828363e0
	if (ctx.cr6.eq) goto loc_828363E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828363d8
	if (ctx.cr6.eq) goto loc_828363D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828363d0
	if (ctx.cr6.eq) goto loc_828363D0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828363e4
	goto loc_828363E4;
loc_828363D0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828363e4
	goto loc_828363E4;
loc_828363D8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828363e4
	goto loc_828363E4;
loc_828363E0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828363E4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,10344(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10344);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8283644c
	if (ctx.cr6.eq) goto loc_8283644C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283642c
	if (ctx.cr6.eq) goto loc_8283642C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836424
	if (ctx.cr6.eq) goto loc_82836424;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283641c
	if (ctx.cr6.eq) goto loc_8283641C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82836430
	goto loc_82836430;
loc_8283641C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82836430
	goto loc_82836430;
loc_82836424:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82836430
	goto loc_82836430;
loc_8283642C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82836430:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,10312(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10312);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8283644c
	if (ctx.cr6.eq) goto loc_8283644C;
loc_82836448:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8283644C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8283647c
	if (ctx.cr6.eq) goto loc_8283647C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836474
	if (ctx.cr6.eq) goto loc_82836474;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8283646c
	if (ctx.cr6.eq) goto loc_8283646C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82836480
	goto loc_82836480;
loc_8283646C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82836480
	goto loc_82836480;
loc_82836474:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82836480
	goto loc_82836480;
loc_8283647C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82836480:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,10288(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x828364cc
	if (ctx.cr6.eq) goto loc_828364CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828364c0
	if (ctx.cr6.eq) goto loc_828364C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828364b8
	if (ctx.cr6.eq) goto loc_828364B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828364c4
	if (!ctx.cr6.eq) goto loc_828364C4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828364c4
	goto loc_828364C4;
loc_828364B8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828364c4
	goto loc_828364C4;
loc_828364C0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828364C4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_828364CC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828364E0;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,65
	ctx.r4.s64 = 65;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828364F4;
	sub_82835DB0(ctx, base);
	// lwz r11,8240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836520
	if (ctx.cr6.eq) goto loc_82836520;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836518
	if (ctx.cr6.eq) goto loc_82836518;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836524
	if (!ctx.cr6.eq) goto loc_82836524;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82836524
	goto loc_82836524;
loc_82836518:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82836524
	goto loc_82836524;
loc_82836520:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82836524:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,23220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23220);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82836554
	if (!ctx.cr6.eq) goto loc_82836554;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82836558
	if (ctx.cr6.eq) goto loc_82836558;
	// lwz r11,23224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82836558
	if (ctx.cr6.eq) goto loc_82836558;
loc_82836554:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82836558:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x8283656C;
	sub_82835DB0(ctx, base);
	// lwz r11,8240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836598
	if (ctx.cr6.eq) goto loc_82836598;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836590
	if (ctx.cr6.eq) goto loc_82836590;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283659c
	if (!ctx.cr6.eq) goto loc_8283659C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8283659c
	goto loc_8283659C;
loc_82836590:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8283659c
	goto loc_8283659C;
loc_82836598:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8283659C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828365e0
	if (ctx.cr6.eq) goto loc_828365E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828365e0
	if (ctx.cr6.eq) goto loc_828365E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828365d8
	if (ctx.cr6.eq) goto loc_828365D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x828365f4
	if (!ctx.cr6.eq) goto loc_828365F4;
loc_828365D8:
	// li r4,69
	ctx.r4.s64 = 69;
	// b 0x828365e4
	goto loc_828365E4;
loc_828365E0:
	// li r4,67
	ctx.r4.s64 = 67;
loc_828365E4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828365F4;
	sub_82835DB0(ctx, base);
loc_828365F4:
	// lwz r11,8240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836620
	if (ctx.cr6.eq) goto loc_82836620;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836618
	if (ctx.cr6.eq) goto loc_82836618;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836624
	if (!ctx.cr6.eq) goto loc_82836624;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82836624
	goto loc_82836624;
loc_82836618:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82836624
	goto loc_82836624;
loc_82836620:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82836624:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
	// cmpwi cr6,r11,-10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10, ctx.xer);
	// beq cr6,0x82836668
	if (ctx.cr6.eq) goto loc_82836668;
	// cmpwi cr6,r11,-20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -20, ctx.xer);
	// beq cr6,0x82836660
	if (ctx.cr6.eq) goto loc_82836660;
	// cmpwi cr6,r11,-30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -30, ctx.xer);
	// bne cr6,0x8283666c
	if (!ctx.cr6.eq) goto loc_8283666C;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8283666c
	goto loc_8283666C;
loc_82836660:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8283666c
	goto loc_8283666C;
loc_82836668:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8283666C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836680;
	sub_82835DB0(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836694;
	sub_82835DB0(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828366A8;
	sub_82835DB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828366B0"))) PPC_WEAK_FUNC(sub_828366B0);
PPC_FUNC_IMPL(__imp__sub_828366B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,48(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,8240(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836704
	if (ctx.cr6.eq) goto loc_82836704;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828366fc
	if (ctx.cr6.eq) goto loc_828366FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828366f4
	if (ctx.cr6.eq) goto loc_828366F4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82836708
	goto loc_82836708;
loc_828366F4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82836708
	goto loc_82836708;
loc_828366FC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82836708
	goto loc_82836708;
loc_82836704:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82836708:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r10,10248(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 10248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82836764
	if (!ctx.cr6.eq) goto loc_82836764;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836748
	if (ctx.cr6.eq) goto loc_82836748;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836740
	if (ctx.cr6.eq) goto loc_82836740;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8283674c
	if (!ctx.cr6.eq) goto loc_8283674C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8283674c
	goto loc_8283674C;
loc_82836740:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8283674c
	goto loc_8283674C;
loc_82836748:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8283674C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,10252(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10252);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82836768
	if (ctx.cr6.eq) goto loc_82836768;
loc_82836764:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82836768:
	// lwz r5,9148(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 9148);
	// li r4,58
	ctx.r4.s64 = 58;
	// b 0x82835db0
	sub_82835DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82836774"))) PPC_WEAK_FUNC(sub_82836774);
PPC_FUNC_IMPL(__imp__sub_82836774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82836778"))) PPC_WEAK_FUNC(sub_82836778);
PPC_FUNC_IMPL(__imp__sub_82836778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82836780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,48(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,8240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828367c8
	if (ctx.cr6.eq) goto loc_828367C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828367b8
	if (ctx.cr6.eq) goto loc_828367B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828367d0
	if (!ctx.cr6.eq) goto loc_828367D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828367d0
	goto loc_828367D0;
loc_828367B8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828367d0
	goto loc_828367D0;
loc_828367C8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828367D0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,17432(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8283680c
	if (ctx.cr6.eq) goto loc_8283680C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836804
	if (ctx.cr6.eq) goto loc_82836804;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82836810
	goto loc_82836810;
loc_82836804:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82836810
	goto loc_82836810;
loc_8283680C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82836810:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r5,9148(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9148);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836820;
	sub_82835DB0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r5,9148(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9148);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836834;
	sub_82835DB0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r5,9148(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9148);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836848;
	sub_82835DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82836850"))) PPC_WEAK_FUNC(sub_82836850);
PPC_FUNC_IMPL(__imp__sub_82836850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82836858;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,8240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828368b0
	if (ctx.cr6.eq) goto loc_828368B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828368a8
	if (ctx.cr6.eq) goto loc_828368A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828368a0
	if (ctx.cr6.eq) goto loc_828368A0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828368b4
	goto loc_828368B4;
loc_828368A0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828368b4
	goto loc_828368B4;
loc_828368A8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828368b4
	goto loc_828368B4;
loc_828368B0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828368B4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,12280(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12280);
	// beq cr6,0x82836900
	if (ctx.cr6.eq) goto loc_82836900;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828368f8
	if (ctx.cr6.eq) goto loc_828368F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836904
	if (!ctx.cr6.eq) goto loc_82836904;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82836904
	goto loc_82836904;
loc_828368F8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82836904
	goto loc_82836904;
loc_82836900:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82836904:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,10316(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10316);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8283695c
	if (ctx.cr6.eq) goto loc_8283695C;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82836958
	if (ctx.cr6.eq) goto loc_82836958;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283695c
	if (ctx.cr6.eq) goto loc_8283695C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8283694c
	if (ctx.cr6.eq) goto loc_8283694C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8283695c
	if (!ctx.cr6.eq) goto loc_8283695C;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8283695c
	goto loc_8283695C;
loc_8283694C:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8283695c
	goto loc_8283695C;
loc_82836958:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8283695C:
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x8283696C;
	sub_82835DB0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836980;
	sub_82835DB0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82836994;
	sub_82835DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828369A8;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,54
	ctx.r4.s64 = 54;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828369BC;
	sub_82835DB0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,55
	ctx.r4.s64 = 55;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x828369D0;
	sub_82835DB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828369D8"))) PPC_WEAK_FUNC(sub_828369D8);
PPC_FUNC_IMPL(__imp__sub_828369D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,7344
	ctx.r9.s64 = ctx.r11.s64 + 7344;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836a34
	if (ctx.cr6.eq) goto loc_82836A34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836a24
	if (ctx.cr6.eq) goto loc_82836A24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836a3c
	if (!ctx.cr6.eq) goto loc_82836A3C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82836a3c
	goto loc_82836A3C;
loc_82836A24:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82836a3c
	goto loc_82836A3C;
loc_82836A34:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82836A3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82836a94
	if (ctx.cr6.eq) goto loc_82836A94;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82836a94
	if (ctx.cr6.eq) goto loc_82836A94;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82836a94
	if (ctx.cr6.eq) goto loc_82836A94;
	// mullw r11,r8,r6
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8275f698
	ctx.lr = 0x82836A7C;
	sub_8275F698(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_82836A94:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_82836AB0"))) PPC_WEAK_FUNC(sub_82836AB0);
PPC_FUNC_IMPL(__imp__sub_82836AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82836adc
	if (!ctx.cr6.gt) goto loc_82836ADC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// blr 
	return;
loc_82836ADC:
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836AF0"))) PPC_WEAK_FUNC(sub_82836AF0);
PPC_FUNC_IMPL(__imp__sub_82836AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,9364(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9364);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836B08"))) PPC_WEAK_FUNC(sub_82836B08);
PPC_FUNC_IMPL(__imp__sub_82836B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82836B10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,2343
	ctx.r10.s64 = ctx.r4.s64 + 2343;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r27,13188(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13184(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82836b84
	if (ctx.cr6.eq) goto loc_82836B84;
	// lwz r10,4588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4588);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r4,4588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4588, ctx.r4.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r8,4472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4472, ctx.r8.u32);
	// stw r10,4204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4204, ctx.r10.u32);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82808340
	ctx.lr = 0x82836B80;
	sub_82808340(ctx, base);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
loc_82836B84:
	// stw r27,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r27.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82836B98"))) PPC_WEAK_FUNC(sub_82836B98);
PPC_FUNC_IMPL(__imp__sub_82836B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836bf8
	if (ctx.cr6.eq) goto loc_82836BF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836bd8
	if (ctx.cr6.eq) goto loc_82836BD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836c00
	if (!ctx.cr6.eq) goto loc_82836C00;
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
loc_82836BD8:
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
loc_82836BF8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82836C00:
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

__attribute__((alias("__imp__sub_82836C14"))) PPC_WEAK_FUNC(sub_82836C14);
PPC_FUNC_IMPL(__imp__sub_82836C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82836C18"))) PPC_WEAK_FUNC(sub_82836C18);
PPC_FUNC_IMPL(__imp__sub_82836C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836C2C"))) PPC_WEAK_FUNC(sub_82836C2C);
PPC_FUNC_IMPL(__imp__sub_82836C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82836C30"))) PPC_WEAK_FUNC(sub_82836C30);
PPC_FUNC_IMPL(__imp__sub_82836C30) {
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

__attribute__((alias("__imp__sub_82836C48"))) PPC_WEAK_FUNC(sub_82836C48);
PPC_FUNC_IMPL(__imp__sub_82836C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
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

__attribute__((alias("__imp__sub_82836C70"))) PPC_WEAK_FUNC(sub_82836C70);
PPC_FUNC_IMPL(__imp__sub_82836C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
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

__attribute__((alias("__imp__sub_82836C98"))) PPC_WEAK_FUNC(sub_82836C98);
PPC_FUNC_IMPL(__imp__sub_82836C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,196(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
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

__attribute__((alias("__imp__sub_82836CC0"))) PPC_WEAK_FUNC(sub_82836CC0);
PPC_FUNC_IMPL(__imp__sub_82836CC0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,13188(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82836d28
	if (ctx.cr6.eq) goto loc_82836D28;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82836d20
	if (ctx.cr6.eq) goto loc_82836D20;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82836d18
	if (ctx.cr6.eq) goto loc_82836D18;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x82836d2c
	goto loc_82836D2C;
loc_82836D18:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x82836d2c
	goto loc_82836D2C;
loc_82836D20:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// b 0x82836d2c
	goto loc_82836D2C;
loc_82836D28:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82836D2C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836d58
	if (ctx.cr6.eq) goto loc_82836D58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836d50
	if (ctx.cr6.eq) goto loc_82836D50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836d5c
	if (!ctx.cr6.eq) goto loc_82836D5C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82836d5c
	goto loc_82836D5C;
loc_82836D50:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82836d5c
	goto loc_82836D5C;
loc_82836D58:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82836D5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82836d74
	if (!ctx.cr6.eq) goto loc_82836D74;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82836D74:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82836d9c
	if (ctx.cr6.eq) goto loc_82836D9C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82836d94
	if (ctx.cr6.eq) goto loc_82836D94;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82836da0
	if (!ctx.cr6.eq) goto loc_82836DA0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82836da0
	goto loc_82836DA0;
loc_82836D94:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82836da0
	goto loc_82836DA0;
loc_82836D9C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82836DA0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82836dcc
	if (ctx.cr6.eq) goto loc_82836DCC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82836dc4
	if (ctx.cr6.eq) goto loc_82836DC4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82836dd0
	if (!ctx.cr6.eq) goto loc_82836DD0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82836dd0
	goto loc_82836DD0;
loc_82836DC4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82836dd0
	goto loc_82836DD0;
loc_82836DCC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82836DD0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x82836de0
	if (!ctx.cr6.eq) goto loc_82836DE0;
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
loc_82836DE0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836DE8"))) PPC_WEAK_FUNC(sub_82836DE8);
PPC_FUNC_IMPL(__imp__sub_82836DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f13,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82836e1c
	if (ctx.cr6.gt) goto loc_82836E1C;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82836e20
	if (!ctx.cr6.eq) goto loc_82836E20;
loc_82836E1C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82836E20:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836E28"))) PPC_WEAK_FUNC(sub_82836E28);
PPC_FUNC_IMPL(__imp__sub_82836E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836E2C"))) PPC_WEAK_FUNC(sub_82836E2C);
PPC_FUNC_IMPL(__imp__sub_82836E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82836E30"))) PPC_WEAK_FUNC(sub_82836E30);
PPC_FUNC_IMPL(__imp__sub_82836E30) {
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

__attribute__((alias("__imp__sub_82836E48"))) PPC_WEAK_FUNC(sub_82836E48);
PPC_FUNC_IMPL(__imp__sub_82836E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,13184(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13184);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r7,13184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13184, ctx.r7.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// sth r9,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836E90"))) PPC_WEAK_FUNC(sub_82836E90);
PPC_FUNC_IMPL(__imp__sub_82836E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x82836ed8
	if (ctx.cr6.lt) goto loc_82836ED8;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bge cr6,0x82836ed8
	if (!ctx.cr6.lt) goto loc_82836ED8;
	// addi r9,r5,35
	ctx.r9.s64 = ctx.r5.s64 + 35;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82836ed8
	if (ctx.cr6.eq) goto loc_82836ED8;
	// addi r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 + 20;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82836ED8:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836EE0"))) PPC_WEAK_FUNC(sub_82836EE0);
PPC_FUNC_IMPL(__imp__sub_82836EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82836f1c
	if (ctx.cr6.eq) goto loc_82836F1C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82836f0c
	if (ctx.cr6.eq) goto loc_82836F0C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82836f24
	if (!ctx.cr6.eq) goto loc_82836F24;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82836f24
	goto loc_82836F24;
loc_82836F0C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82836f24
	goto loc_82836F24;
loc_82836F1C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r6,-29532(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_82836F24:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82836f44
	if (ctx.cr6.eq) goto loc_82836F44;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82836f44
	if (ctx.cr6.eq) goto loc_82836F44;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82836F44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836F50"))) PPC_WEAK_FUNC(sub_82836F50);
PPC_FUNC_IMPL(__imp__sub_82836F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82836f7c
	if (!ctx.cr6.gt) goto loc_82836F7C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// blr 
	return;
loc_82836F7C:
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836F90"))) PPC_WEAK_FUNC(sub_82836F90);
PPC_FUNC_IMPL(__imp__sub_82836F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82836fd4
	if (ctx.cr6.eq) goto loc_82836FD4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82836fcc
	if (ctx.cr6.eq) goto loc_82836FCC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82836fd4
	if (!ctx.cr6.eq) goto loc_82836FD4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82836fd8
	goto loc_82836FD8;
loc_82836FCC:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82836fd8
	goto loc_82836FD8;
loc_82836FD4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82836FD8:
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82837004
	if (ctx.cr6.eq) goto loc_82837004;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82837008
	if (ctx.cr6.eq) goto loc_82837008;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82836ffc
	if (ctx.cr6.eq) goto loc_82836FFC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82837008
	goto loc_82837008;
loc_82836FFC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82837008
	goto loc_82837008;
loc_82837004:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82837008:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f2,f7,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f0,f4,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82837078
	if (ctx.cr6.lt) goto loc_82837078;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8283706c
	if (ctx.cr6.lt) goto loc_8283706C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8283706C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82837078:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837084"))) PPC_WEAK_FUNC(sub_82837084);
PPC_FUNC_IMPL(__imp__sub_82837084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837088"))) PPC_WEAK_FUNC(sub_82837088);
PPC_FUNC_IMPL(__imp__sub_82837088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82837090;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad08
	ctx.lr = 0x82837098;
	__savefpr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,728(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r29,48(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bgt cr6,0x828370cc
	if (ctx.cr6.gt) goto loc_828370CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828370d0
	goto loc_828370D0;
loc_828370CC:
	// lwz r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
loc_828370D0:
	// lwz r31,136(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x8283710c
	if (ctx.cr6.eq) goto loc_8283710C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82837104
	if (ctx.cr6.eq) goto loc_82837104;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828370fc
	if (ctx.cr6.eq) goto loc_828370FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82837110
	goto loc_82837110;
loc_828370FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82837110
	goto loc_82837110;
loc_82837104:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82837110
	goto loc_82837110;
loc_8283710C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82837110:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804270
	ctx.lr = 0x82837118;
	sub_82804270(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f30,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fmuls f26,f9,f0
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f25,f13,f9
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f24,f9,f31
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// beq cr6,0x82837178
	if (ctx.cr6.eq) goto loc_82837178;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82837170
	if (ctx.cr6.eq) goto loc_82837170;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8283717c
	if (!ctx.cr6.eq) goto loc_8283717C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8283717c
	goto loc_8283717C;
loc_82837170:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8283717c
	goto loc_8283717C;
loc_82837178:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8283717C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82837184;
	sub_82804410(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828371b4
	if (ctx.cr6.eq) goto loc_828371B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828371ac
	if (ctx.cr6.eq) goto loc_828371AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828371a4
	if (ctx.cr6.eq) goto loc_828371A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828371b8
	goto loc_828371B8;
loc_828371A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x828371b8
	goto loc_828371B8;
loc_828371AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828371b8
	goto loc_828371B8;
loc_828371B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828371B8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x828371C0;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f13,-30724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30724);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f4,f30,f5
	ctx.f4.f64 = double(float(ctx.f30.f64 / ctx.f5.f64));
	// fmuls f29,f4,f10
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f28,f8,f4
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f27,f4,f31
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f3,f29,f26
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// fmadds f2,f28,f25,f3
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f25.f64 + ctx.f3.f64));
	// fmadds f0,f27,f24,f2
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f24.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828372dc
	if (!ctx.cr6.lt) goto loc_828372DC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-29708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828372c4
	if (!ctx.cr6.gt) goto loc_828372C4;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82837250
	if (ctx.cr6.eq) goto loc_82837250;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82837248
	if (ctx.cr6.eq) goto loc_82837248;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82837240
	if (ctx.cr6.eq) goto loc_82837240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82837254
	goto loc_82837254;
loc_82837240:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82837254
	goto loc_82837254;
loc_82837248:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82837254
	goto loc_82837254;
loc_82837250:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82837254:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804118
	ctx.lr = 0x8283725C;
	sub_82804118(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f5,f8,f29
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmadds f4,f7,f28,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmadds f3,f6,f27,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// blt cr6,0x828372ac
	if (ctx.cr6.lt) goto loc_828372AC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad54
	ctx.lr = 0x828372A8;
	__restfpr_24(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_828372AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad54
	ctx.lr = 0x828372C0;
	__restfpr_24(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_828372C4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad54
	ctx.lr = 0x828372D8;
	__restfpr_24(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_828372DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad54
	ctx.lr = 0x828372F0;
	__restfpr_24(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828372F4"))) PPC_WEAK_FUNC(sub_828372F4);
PPC_FUNC_IMPL(__imp__sub_828372F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828372F8"))) PPC_WEAK_FUNC(sub_828372F8);
PPC_FUNC_IMPL(__imp__sub_828372F8) {
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

__attribute__((alias("__imp__sub_82837310"))) PPC_WEAK_FUNC(sub_82837310);
PPC_FUNC_IMPL(__imp__sub_82837310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837324"))) PPC_WEAK_FUNC(sub_82837324);
PPC_FUNC_IMPL(__imp__sub_82837324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837328"))) PPC_WEAK_FUNC(sub_82837328);
PPC_FUNC_IMPL(__imp__sub_82837328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82837330;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r11.u32);
	// lwz r22,48(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,2936(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 2936);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x828373a0
	if (ctx.cr6.lt) goto loc_828373A0;
	// bl 0x82806538
	ctx.lr = 0x82837388;
	sub_82806538(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828373a8
	if (ctx.cr6.eq) goto loc_828373A8;
	// lwz r3,2936(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 2936);
	// bl 0x828064e0
	ctx.lr = 0x82837398;
	sub_828064E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828373a8
	if (ctx.cr6.eq) goto loc_828373A8;
loc_828373A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828373ac
	goto loc_828373AC;
loc_828373A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828373AC:
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

__attribute__((alias("__imp__sub_828373C8"))) PPC_WEAK_FUNC(sub_828373C8);
PPC_FUNC_IMPL(__imp__sub_828373C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,28820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28820, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828373E0"))) PPC_WEAK_FUNC(sub_828373E0);
PPC_FUNC_IMPL(__imp__sub_828373E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828373E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r4,28820(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28820);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82837458
	if (!ctx.cr6.gt) goto loc_82837458;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82837444;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82837458
	if (ctx.cr6.eq) goto loc_82837458;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82837458:
	// stw r27,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r25.u32);
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

__attribute__((alias("__imp__sub_82837470"))) PPC_WEAK_FUNC(sub_82837470);
PPC_FUNC_IMPL(__imp__sub_82837470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r7,r9,45632
	ctx.r7.u64 = ctx.r9.u64 | 45632;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r9,28620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28620);
	// stw r10,28816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28816, ctx.r10.u32);
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r8,30356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30356, ctx.r8.u32);
	// stw r8,30404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30404, ctx.r8.u32);
	// stw r10,2936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2936, ctx.r10.u32);
	// beq cr6,0x828374d4
	if (ctx.cr6.eq) goto loc_828374D4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828374c4
	if (ctx.cr6.eq) goto loc_828374C4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x828374dc
	if (!ctx.cr6.eq) goto loc_828374DC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x828374dc
	goto loc_828374DC;
loc_828374C4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828374dc
	goto loc_828374DC;
loc_828374D4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_828374DC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828374e8
	if (ctx.cr6.eq) goto loc_828374E8;
	// stw r8,28620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28620, ctx.r8.u32);
loc_828374E8:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,28820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28820, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828374FC"))) PPC_WEAK_FUNC(sub_828374FC);
PPC_FUNC_IMPL(__imp__sub_828374FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837500"))) PPC_WEAK_FUNC(sub_82837500);
PPC_FUNC_IMPL(__imp__sub_82837500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r7,r9,45632
	ctx.r7.u64 = ctx.r9.u64 | 45632;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r9,28620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28620);
	// stw r10,28816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28816, ctx.r10.u32);
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r8,30356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30356, ctx.r8.u32);
	// stw r8,30404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30404, ctx.r8.u32);
	// stw r10,2936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2936, ctx.r10.u32);
	// beq cr6,0x82837564
	if (ctx.cr6.eq) goto loc_82837564;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82837554
	if (ctx.cr6.eq) goto loc_82837554;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8283756c
	if (!ctx.cr6.eq) goto loc_8283756C;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8283756c
	goto loc_8283756C;
loc_82837554:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8283756c
	goto loc_8283756C;
loc_82837564:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8283756C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82837578
	if (ctx.cr6.eq) goto loc_82837578;
	// stw r8,28620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28620, ctx.r8.u32);
loc_82837578:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,28820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28820, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283758C"))) PPC_WEAK_FUNC(sub_8283758C);
PPC_FUNC_IMPL(__imp__sub_8283758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837590"))) PPC_WEAK_FUNC(sub_82837590);
PPC_FUNC_IMPL(__imp__sub_82837590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82837598;
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r25,13192(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,28776(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28776);
	// bl 0x82bbdb28
	ctx.lr = 0x828375F4;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82837614
	if (ctx.cr6.eq) goto loc_82837614;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82837614
	if (!ctx.cr6.gt) goto loc_82837614;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82837614:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
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

__attribute__((alias("__imp__sub_82837630"))) PPC_WEAK_FUNC(sub_82837630);
PPC_FUNC_IMPL(__imp__sub_82837630) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8283764c
	if (ctx.cr6.eq) goto loc_8283764C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82837678
	if (ctx.cr6.eq) goto loc_82837678;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x828376d0
	if (!ctx.cr6.eq) goto loc_828376D0;
loc_8283764C:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x828376cc
	if (ctx.cr6.eq) goto loc_828376CC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828376a8
	if (ctx.cr6.eq) goto loc_828376A8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828376c0
	if (ctx.cr6.eq) goto loc_828376C0;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x828376d0
	if (!ctx.cr6.eq) goto loc_828376D0;
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82837678:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x828376b4
	if (ctx.cr6.eq) goto loc_828376B4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828376a8
	if (ctx.cr6.eq) goto loc_828376A8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828376a8
	if (ctx.cr6.eq) goto loc_828376A8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828376a8
	if (ctx.cr6.eq) goto loc_828376A8;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828376a8
	if (ctx.cr6.eq) goto loc_828376A8;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x828376d0
	if (!ctx.cr6.eq) goto loc_828376D0;
loc_828376A8:
	// li r11,75
	ctx.r11.s64 = 75;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828376B4:
	// li r11,375
	ctx.r11.s64 = 375;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828376C0:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828376CC:
	// li r11,325
	ctx.r11.s64 = 325;
loc_828376D0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828376D8"))) PPC_WEAK_FUNC(sub_828376D8);
PPC_FUNC_IMPL(__imp__sub_828376D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828376E0;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r24,13184(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r27,13192(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// lwz r26,13188(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// lwz r4,28776(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28776);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x82837750
	if (ctx.cr6.eq) goto loc_82837750;
	// bl 0x82bbdb28
	ctx.lr = 0x8283773C;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82837768
	if (ctx.cr6.eq) goto loc_82837768;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// b 0x82837764
	goto loc_82837764;
loc_82837750:
	// bl 0x82bbdb28
	ctx.lr = 0x82837754;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82837768
	if (ctx.cr6.eq) goto loc_82837768;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
loc_82837764:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82837768:
	// stw r27,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82837780"))) PPC_WEAK_FUNC(sub_82837780);
PPC_FUNC_IMPL(__imp__sub_82837780) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8283779c
	if (ctx.cr6.eq) goto loc_8283779C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828377a8
	if (ctx.cr6.eq) goto loc_828377A8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x828377a0
	if (!ctx.cr6.eq) goto loc_828377A0;
loc_8283779C:
	// li r11,325
	ctx.r11.s64 = 325;
loc_828377A0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828377A8:
	// li r11,375
	ctx.r11.s64 = 375;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828377B4"))) PPC_WEAK_FUNC(sub_828377B4);
PPC_FUNC_IMPL(__imp__sub_828377B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828377B8"))) PPC_WEAK_FUNC(sub_828377B8);
PPC_FUNC_IMPL(__imp__sub_828377B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,28800(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28800);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828377D0"))) PPC_WEAK_FUNC(sub_828377D0);
PPC_FUNC_IMPL(__imp__sub_828377D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,28800(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28800);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828377f0
	if (!ctx.cr6.gt) goto loc_828377F0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_828377F0:
	// lwz r11,28624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82837808
	if (ctx.cr6.eq) goto loc_82837808;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82837808:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837810"))) PPC_WEAK_FUNC(sub_82837810);
PPC_FUNC_IMPL(__imp__sub_82837810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82837818;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// ori r8,r9,49632
	ctx.r8.u64 = ctx.r9.u64 | 49632;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r11,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r11.u32);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8283788c
	if (ctx.cr6.eq) goto loc_8283788C;
	// bl 0x82bfc538
	ctx.lr = 0x8283787C;
	sub_82BFC538(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82837890
	if (!ctx.cr6.gt) goto loc_82837890;
loc_8283788C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82837890:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828378AC"))) PPC_WEAK_FUNC(sub_828378AC);
PPC_FUNC_IMPL(__imp__sub_828378AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828378B0"))) PPC_WEAK_FUNC(sub_828378B0);
PPC_FUNC_IMPL(__imp__sub_828378B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-14568
	ctx.r11.s64 = ctx.r11.s64 + -14568;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x828378d8
	if (!ctx.cr6.eq) goto loc_828378D8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_828378D8:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x828378ec
	if (!ctx.cr6.eq) goto loc_828378EC;
	// stw r9,15884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15884, ctx.r9.u32);
loc_828378EC:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r11,206
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 206, ctx.xer);
	// beq cr6,0x82837930
	if (ctx.cr6.eq) goto loc_82837930;
	// cmpwi cr6,r11,205
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 205, ctx.xer);
	// beq cr6,0x82837930
	if (ctx.cr6.eq) goto loc_82837930;
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// beq cr6,0x82837930
	if (ctx.cr6.eq) goto loc_82837930;
	// cmpwi cr6,r11,212
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 212, ctx.xer);
	// beq cr6,0x82837930
	if (ctx.cr6.eq) goto loc_82837930;
	// cmpwi cr6,r11,213
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 213, ctx.xer);
	// beq cr6,0x82837930
	if (ctx.cr6.eq) goto loc_82837930;
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// beq cr6,0x82837928
	if (ctx.cr6.eq) goto loc_82837928;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82837928:
	// stw r9,2960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2960, ctx.r9.u32);
	// blr 
	return;
loc_82837930:
	// stw r9,3196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3196, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837938"))) PPC_WEAK_FUNC(sub_82837938);
PPC_FUNC_IMPL(__imp__sub_82837938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lwz r9,-40(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,26592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26592);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f12,-36(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f10,-24(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f9,-20(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// bgt cr6,0x828379b4
	if (ctx.cr6.gt) goto loc_828379B4;
	// lwz r9,-36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x828379b4
	if (ctx.cr6.gt) goto loc_828379B4;
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x828379d4
	if (!ctx.cr6.gt) goto loc_828379D4;
loc_828379B4:
	// stfs f12,30148(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 30148, temp.u32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stfs f0,30144(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 30144, temp.u32);
	// stfs f11,30152(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 30152, temp.u32);
	// lfs f0,-27236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27236);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,30152(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 30152, temp.u32);
loc_828379D4:
	// lwz r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stfs f13,-48(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82837a0c
	if (ctx.cr6.gt) goto loc_82837A0C;
	// lwz r9,-20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82837a0c
	if (ctx.cr6.gt) goto loc_82837A0C;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82837a20
	if (!ctx.cr6.gt) goto loc_82837A20;
loc_82837A0C:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-14564
	ctx.r11.s64 = ctx.r11.s64 + -14564;
	// stfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82837A20:
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837A38"))) PPC_WEAK_FUNC(sub_82837A38);
PPC_FUNC_IMPL(__imp__sub_82837A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82837a6c
	if (ctx.cr6.eq) goto loc_82837A6C;
	// cmpwi cr6,r11,75
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 75, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,45624
	ctx.r8.u64 = ctx.r11.u64 | 45624;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
loc_82837A6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837A78"))) PPC_WEAK_FUNC(sub_82837A78);
PPC_FUNC_IMPL(__imp__sub_82837A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,-14568
	ctx.r11.s64 = ctx.r11.s64 + -14568;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837AA4"))) PPC_WEAK_FUNC(sub_82837AA4);
PPC_FUNC_IMPL(__imp__sub_82837AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837AA8"))) PPC_WEAK_FUNC(sub_82837AA8);
PPC_FUNC_IMPL(__imp__sub_82837AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x82837af0
	if (ctx.cr6.eq) goto loc_82837AF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82837ae8
	if (ctx.cr6.eq) goto loc_82837AE8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82837af4
	if (!ctx.cr6.eq) goto loc_82837AF4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82837af4
	goto loc_82837AF4;
loc_82837AE8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82837af4
	goto loc_82837AF4;
loc_82837AF0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82837AF4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82837b10
	if (ctx.cr6.eq) goto loc_82837B10;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82837b14
	if (ctx.cr6.eq) goto loc_82837B14;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// beq cr6,0x82837b14
	if (ctx.cr6.eq) goto loc_82837B14;
loc_82837B10:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82837B14:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,2968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2968, ctx.r11.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r10,2972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2972, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837B30"))) PPC_WEAK_FUNC(sub_82837B30);
PPC_FUNC_IMPL(__imp__sub_82837B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x82837b78
	if (ctx.cr6.eq) goto loc_82837B78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82837b70
	if (ctx.cr6.eq) goto loc_82837B70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82837b7c
	if (!ctx.cr6.eq) goto loc_82837B7C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82837b7c
	goto loc_82837B7C;
loc_82837B70:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82837b7c
	goto loc_82837B7C;
loc_82837B78:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82837B7C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82837b98
	if (ctx.cr6.eq) goto loc_82837B98;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82837b9c
	if (ctx.cr6.eq) goto loc_82837B9C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// beq cr6,0x82837b9c
	if (ctx.cr6.eq) goto loc_82837B9C;
loc_82837B98:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82837B9C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f12,30132(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30132);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lfs f13,-4008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4008);
	ctx.f13.f64 = double(temp.f32);
	// ld r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// ld r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmsubs f8,f9,f0,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x82837c18
	if (ctx.cr6.lt) goto loc_82837C18;
	// stw r10,28784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28784, ctx.r10.u32);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,30132(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 30132, temp.u32);
	// blr 
	return;
loc_82837C18:
	// stw r10,30720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30720, ctx.r10.u32);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,30512(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 30512, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837C44"))) PPC_WEAK_FUNC(sub_82837C44);
PPC_FUNC_IMPL(__imp__sub_82837C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837C48"))) PPC_WEAK_FUNC(sub_82837C48);
PPC_FUNC_IMPL(__imp__sub_82837C48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82837c68
	if (ctx.cr6.eq) goto loc_82837C68;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// blt cr6,0x82837c68
	if (ctx.cr6.lt) goto loc_82837C68;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// bgt cr6,0x82837c68
	if (ctx.cr6.gt) goto loc_82837C68;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82837C68:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837C70"))) PPC_WEAK_FUNC(sub_82837C70);
PPC_FUNC_IMPL(__imp__sub_82837C70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82837c98
	if (ctx.cr6.eq) goto loc_82837C98;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// blt cr6,0x82837c94
	if (ctx.cr6.lt) goto loc_82837C94;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// ble cr6,0x82837c98
	if (!ctx.cr6.gt) goto loc_82837C98;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// bge cr6,0x82837c98
	if (!ctx.cr6.lt) goto loc_82837C98;
loc_82837C94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82837C98:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837CA0"))) PPC_WEAK_FUNC(sub_82837CA0);
PPC_FUNC_IMPL(__imp__sub_82837CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,30508(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 30508, temp.u32);
	// stw r11,28788(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28788, ctx.r11.u32);
	// stfs f0,30132(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 30132, temp.u32);
	// stw r11,28784(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837CCC"))) PPC_WEAK_FUNC(sub_82837CCC);
PPC_FUNC_IMPL(__imp__sub_82837CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837CD0"))) PPC_WEAK_FUNC(sub_82837CD0);
PPC_FUNC_IMPL(__imp__sub_82837CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,50964
	ctx.r10.u64 = ctx.r10.u64 | 50964;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stwx r4,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837CEC"))) PPC_WEAK_FUNC(sub_82837CEC);
PPC_FUNC_IMPL(__imp__sub_82837CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837CF0"))) PPC_WEAK_FUNC(sub_82837CF0);
PPC_FUNC_IMPL(__imp__sub_82837CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,924(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 924);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82837d10
	if (ctx.cr6.eq) goto loc_82837D10;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82837D10:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837D18"))) PPC_WEAK_FUNC(sub_82837D18);
PPC_FUNC_IMPL(__imp__sub_82837D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,28648(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28648);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82837d38
	if (!ctx.cr6.eq) goto loc_82837D38;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82837D38:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837D40"))) PPC_WEAK_FUNC(sub_82837D40);
PPC_FUNC_IMPL(__imp__sub_82837D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,30392(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 30392, temp.u32);
	// stw r11,3148(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3148, ctx.r11.u32);
	// stfs f0,30512(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 30512, temp.u32);
	// stw r11,30720(r7)
	PPC_STORE_U32(ctx.r7.u32 + 30720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837D6C"))) PPC_WEAK_FUNC(sub_82837D6C);
PPC_FUNC_IMPL(__imp__sub_82837D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837D70"))) PPC_WEAK_FUNC(sub_82837D70);
PPC_FUNC_IMPL(__imp__sub_82837D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,28836(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28836);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837D88"))) PPC_WEAK_FUNC(sub_82837D88);
PPC_FUNC_IMPL(__imp__sub_82837D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82837D90;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,12729
	ctx.r10.s64 = ctx.r4.s64 + 12729;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r27,13188(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13184(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82837e04
	if (ctx.cr6.eq) goto loc_82837E04;
	// lwz r10,30396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30396);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r4,30396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30396, ctx.r4.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r8,30136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30136, ctx.r8.u32);
	// stw r10,28748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28748, ctx.r10.u32);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82808340
	ctx.lr = 0x82837E00;
	sub_82808340(ctx, base);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
loc_82837E04:
	// stw r27,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r27.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82837E18"))) PPC_WEAK_FUNC(sub_82837E18);
PPC_FUNC_IMPL(__imp__sub_82837E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82837E20;
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
	// lwz r9,30396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30396);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x82837e74
	if (ctx.cr6.eq) goto loc_82837E74;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82837d88
	ctx.lr = 0x82837E74;
	sub_82837D88(ctx, base);
loc_82837E74:
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

__attribute__((alias("__imp__sub_82837E8C"))) PPC_WEAK_FUNC(sub_82837E8C);
PPC_FUNC_IMPL(__imp__sub_82837E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837E90"))) PPC_WEAK_FUNC(sub_82837E90);
PPC_FUNC_IMPL(__imp__sub_82837E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82837E98;
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
	// lwz r9,30396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30396);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x82837ef0
	if (ctx.cr6.eq) goto loc_82837EF0;
	// stw r4,30372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30372, ctx.r4.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82837d88
	ctx.lr = 0x82837EF0;
	sub_82837D88(ctx, base);
loc_82837EF0:
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

__attribute__((alias("__imp__sub_82837F08"))) PPC_WEAK_FUNC(sub_82837F08);
PPC_FUNC_IMPL(__imp__sub_82837F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82837F10;
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
	// lwz r9,30396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30396);
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x82837f64
	if (ctx.cr6.eq) goto loc_82837F64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82837d88
	ctx.lr = 0x82837F64;
	sub_82837D88(ctx, base);
loc_82837F64:
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

__attribute__((alias("__imp__sub_82837F7C"))) PPC_WEAK_FUNC(sub_82837F7C);
PPC_FUNC_IMPL(__imp__sub_82837F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837F80"))) PPC_WEAK_FUNC(sub_82837F80);
PPC_FUNC_IMPL(__imp__sub_82837F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82837F88;
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
	// lwz r9,30396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30396);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x82837fdc
	if (ctx.cr6.eq) goto loc_82837FDC;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82837d88
	ctx.lr = 0x82837FDC;
	sub_82837D88(ctx, base);
loc_82837FDC:
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

__attribute__((alias("__imp__sub_82837FF4"))) PPC_WEAK_FUNC(sub_82837FF4);
PPC_FUNC_IMPL(__imp__sub_82837FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837FF8"))) PPC_WEAK_FUNC(sub_82837FF8);
PPC_FUNC_IMPL(__imp__sub_82837FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82838000;
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
	// lwz r9,30396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30396);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82838054
	if (ctx.cr6.eq) goto loc_82838054;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82837d88
	ctx.lr = 0x82838054;
	sub_82837D88(ctx, base);
loc_82838054:
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

__attribute__((alias("__imp__sub_8283806C"))) PPC_WEAK_FUNC(sub_8283806C);
PPC_FUNC_IMPL(__imp__sub_8283806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82838070"))) PPC_WEAK_FUNC(sub_82838070);
PPC_FUNC_IMPL(__imp__sub_82838070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838074"))) PPC_WEAK_FUNC(sub_82838074);
PPC_FUNC_IMPL(__imp__sub_82838074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82838078"))) PPC_WEAK_FUNC(sub_82838078);
PPC_FUNC_IMPL(__imp__sub_82838078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,30444(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30444);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838090"))) PPC_WEAK_FUNC(sub_82838090);
PPC_FUNC_IMPL(__imp__sub_82838090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// ori r10,r10,45616
	ctx.r10.u64 = ctx.r10.u64 | 45616;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r9,3152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3152, ctx.r9.u32);
	// stw r4,28796(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28796, ctx.r4.u32);
	// stwx r8,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828380BC"))) PPC_WEAK_FUNC(sub_828380BC);
PPC_FUNC_IMPL(__imp__sub_828380BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828380C0"))) PPC_WEAK_FUNC(sub_828380C0);
PPC_FUNC_IMPL(__imp__sub_828380C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x828380C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r21,13180(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r20,13192(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r19,13188(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r18,13184(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r29,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r29.u32);
	// stw r29,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r29.u32);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// lwz r7,2948(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2948);
	// addi r23,r23,-14568
	ctx.r23.s64 = ctx.r23.s64 + -14568;
	// lwz r10,3152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// stw r10,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r10.u32);
	// beq cr6,0x82838164
	if (ctx.cr6.eq) goto loc_82838164;
	// lwz r11,30364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30364);
	// lwz r9,28796(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28796);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82838164
	if (!ctx.cr6.eq) goto loc_82838164;
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82838164
	if (!ctx.cr6.eq) goto loc_82838164;
	// stw r24,2948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2948, ctx.r24.u32);
loc_82838164:
	// lwz r11,28796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82838350
	if (ctx.cr6.eq) goto loc_82838350;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828382c4
	if (ctx.cr6.eq) goto loc_828382C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838270
	if (ctx.cr6.eq) goto loc_82838270;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828381e4
	if (ctx.cr6.eq) goto loc_828381E4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x828383f8
	if (!ctx.cr6.eq) goto loc_828383F8;
	// lwz r11,3152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x828383f8
	if (!ctx.cr6.lt) goto loc_828383F8;
	// mulli r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 * 124;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,28844
	ctx.r3.s64 = ctx.r11.s64 + 28844;
	// lbz r11,28852(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28852);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// bl 0x827fea90
	ctx.lr = 0x828381CC;
	sub_827FEA90(ctx, base);
	// lwz r11,3152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// mulli r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 * 124;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,28844
	ctx.r10.s64 = ctx.r11.s64 + 28844;
	// lwz r11,28848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28848);
	// b 0x828383a8
	goto loc_828383A8;
loc_828381E4:
	// lwz r10,3152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x828383f8
	if (!ctx.cr6.lt) goto loc_828383F8;
	// lwz r9,3472(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	// addi r30,r31,3468
	ctx.r30.s64 = ctx.r31.s64 + 3468;
	// lwz r11,30368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30368);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r9,r7,124
	ctx.r9.s64 = ctx.r7.s64 * 124;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r8,124
	ctx.r11.s64 = ctx.r8.s64 * 124;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x827fea90
	ctx.lr = 0x82838248;
	sub_827FEA90(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,30368(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30368);
	// lwz r10,3152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r5,124
	ctx.r11.s64 = ctx.r5.s64 * 124;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828383a8
	goto loc_828383A8;
loc_82838270:
	// lwz r11,3152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x828383f8
	if (!ctx.cr6.lt) goto loc_828383F8;
	// mulli r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 * 124;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// lbz r11,30736(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// bl 0x827fea90
	ctx.lr = 0x828382AC;
	sub_827FEA90(ctx, base);
	// lwz r11,3152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// mulli r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 * 124;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,30728
	ctx.r10.s64 = ctx.r11.s64 + 30728;
	// lwz r11,30732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30732);
	// b 0x828383a8
	goto loc_828383A8;
loc_828382C4:
	// lwz r10,3152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x828383f8
	if (!ctx.cr6.lt) goto loc_828383F8;
	// lwz r9,15892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15892);
	// addi r30,r31,15888
	ctx.r30.s64 = ctx.r31.s64 + 15888;
	// lwz r11,30424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30424);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r9,r7,124
	ctx.r9.s64 = ctx.r7.s64 * 124;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r8,124
	ctx.r11.s64 = ctx.r8.s64 * 124;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x827fea90
	ctx.lr = 0x82838328;
	sub_827FEA90(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,30424(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30424);
	// lwz r10,3152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r5,124
	ctx.r11.s64 = ctx.r5.s64 * 124;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828383a8
	goto loc_828383A8;
loc_82838350:
	// lwz r11,3152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x828383f8
	if (!ctx.cr6.lt) goto loc_828383F8;
	// mulli r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 * 124;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r30,r10,45656
	ctx.r30.u64 = ctx.r10.u64 | 45656;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lbz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828383f8
	if (ctx.cr6.eq) goto loc_828383F8;
	// bl 0x827fea90
	ctx.lr = 0x82838394;
	sub_827FEA90(ctx, base);
	// lwz r11,3152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// mulli r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 * 124;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_828383A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828383b8
	if (ctx.cr6.eq) goto loc_828383B8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828383bc
	if (!ctx.cr6.eq) goto loc_828383BC;
loc_828383B8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828383BC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,45616
	ctx.r9.u64 = ctx.r10.u64 | 45616;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13232);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// beq cr6,0x828383e8
	if (ctx.cr6.eq) goto loc_828383E8;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x828383f8
	goto loc_828383F8;
loc_828383E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828380c0
	ctx.lr = 0x828383F4;
	sub_828380C0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828383F8:
	// stw r8,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
	// stw r20,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r20.u32);
	// stw r21,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r21.u32);
	// stw r18,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r18.u32);
	// stw r19,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82838414"))) PPC_WEAK_FUNC(sub_82838414);
PPC_FUNC_IMPL(__imp__sub_82838414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82838418"))) PPC_WEAK_FUNC(sub_82838418);
PPC_FUNC_IMPL(__imp__sub_82838418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3096(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3096);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838430"))) PPC_WEAK_FUNC(sub_82838430);
PPC_FUNC_IMPL(__imp__sub_82838430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,28624(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28624);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838448"))) PPC_WEAK_FUNC(sub_82838448);
PPC_FUNC_IMPL(__imp__sub_82838448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,30592(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30592);
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

__attribute__((alias("__imp__sub_8283846C"))) PPC_WEAK_FUNC(sub_8283846C);
PPC_FUNC_IMPL(__imp__sub_8283846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82838470"))) PPC_WEAK_FUNC(sub_82838470);
PPC_FUNC_IMPL(__imp__sub_82838470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,30428(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30428);
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

__attribute__((alias("__imp__sub_82838494"))) PPC_WEAK_FUNC(sub_82838494);
PPC_FUNC_IMPL(__imp__sub_82838494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82838498"))) PPC_WEAK_FUNC(sub_82838498);
PPC_FUNC_IMPL(__imp__sub_82838498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,30360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30360);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828384B0"))) PPC_WEAK_FUNC(sub_828384B0);
PPC_FUNC_IMPL(__imp__sub_828384B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r11.u32);
	// stw r11,460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828384CC"))) PPC_WEAK_FUNC(sub_828384CC);
PPC_FUNC_IMPL(__imp__sub_828384CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828384D0"))) PPC_WEAK_FUNC(sub_828384D0);
PPC_FUNC_IMPL(__imp__sub_828384D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 608, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828384E8"))) PPC_WEAK_FUNC(sub_828384E8);
PPC_FUNC_IMPL(__imp__sub_828384E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 724, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838500"))) PPC_WEAK_FUNC(sub_82838500);
PPC_FUNC_IMPL(__imp__sub_82838500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 460, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838518"))) PPC_WEAK_FUNC(sub_82838518);
PPC_FUNC_IMPL(__imp__sub_82838518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 608, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838530"))) PPC_WEAK_FUNC(sub_82838530);
PPC_FUNC_IMPL(__imp__sub_82838530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r10,75
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 75, ctx.xer);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// bne cr6,0x82838550
	if (!ctx.cr6.eq) goto loc_82838550;
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
loc_82838550:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x828385b4
	if (ctx.cr6.eq) goto loc_828385B4;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// beq cr6,0x828385ac
	if (ctx.cr6.eq) goto loc_828385AC;
	// cmpwi cr6,r10,66
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 66, ctx.xer);
	// beq cr6,0x828385a4
	if (ctx.cr6.eq) goto loc_828385A4;
	// cmpwi cr6,r10,211
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 211, ctx.xer);
	// beq cr6,0x828385a4
	if (ctx.cr6.eq) goto loc_828385A4;
	// cmpwi cr6,r10,201
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 201, ctx.xer);
	// beq cr6,0x8283859c
	if (ctx.cr6.eq) goto loc_8283859C;
	// cmpwi cr6,r10,67
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 67, ctx.xer);
	// beq cr6,0x82838594
	if (ctx.cr6.eq) goto loc_82838594;
	// cmpwi cr6,r10,103
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 103, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r9,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r9.u32);
	// blr 
	return;
loc_82838594:
	// stw r9,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r9.u32);
	// blr 
	return;
loc_8283859C:
	// stw r9,616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 616, ctx.r9.u32);
	// blr 
	return;
loc_828385A4:
	// stw r9,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r9.u32);
	// blr 
	return;
loc_828385AC:
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// blr 
	return;
loc_828385B4:
	// stw r9,812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 812, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828385BC"))) PPC_WEAK_FUNC(sub_828385BC);
PPC_FUNC_IMPL(__imp__sub_828385BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828385C0"))) PPC_WEAK_FUNC(sub_828385C0);
PPC_FUNC_IMPL(__imp__sub_828385C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828385CC"))) PPC_WEAK_FUNC(sub_828385CC);
PPC_FUNC_IMPL(__imp__sub_828385CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828385D0"))) PPC_WEAK_FUNC(sub_828385D0);
PPC_FUNC_IMPL(__imp__sub_828385D0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// beq cr6,0x82838624
	if (ctx.cr6.eq) goto loc_82838624;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8283861c
	if (ctx.cr6.eq) goto loc_8283861C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82838614
	if (ctx.cr6.eq) goto loc_82838614;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82838628
	goto loc_82838628;
loc_82838614:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838628
	goto loc_82838628;
loc_8283861C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82838628
	goto loc_82838628;
loc_82838624:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82838628:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828386e8
	if (ctx.cr6.eq) goto loc_828386E8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82838660
	if (ctx.cr6.eq) goto loc_82838660;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82838658
	if (ctx.cr6.eq) goto loc_82838658;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82838650
	if (ctx.cr6.eq) goto loc_82838650;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x82838664
	goto loc_82838664;
loc_82838650:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82838664
	goto loc_82838664;
loc_82838658:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x82838664
	goto loc_82838664;
loc_82838660:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82838664:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r6,344
	ctx.r11.s64 = ctx.r6.s64 + 344;
loc_8283866C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8283868c
	if (ctx.cr6.eq) goto loc_8283868C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8283866c
	if (ctx.cr6.lt) goto loc_8283866C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8283868C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x828386e8
	if (!ctx.cr6.lt) goto loc_828386E8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828386c0
	if (ctx.cr6.eq) goto loc_828386C0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828386bc
	if (ctx.cr6.eq) goto loc_828386BC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828386b4
	if (ctx.cr6.eq) goto loc_828386B4;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x828386c0
	goto loc_828386C0;
loc_828386B4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x828386c0
	goto loc_828386C0;
loc_828386BC:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_828386C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r6,556
	ctx.r11.s64 = ctx.r6.s64 + 556;
loc_828386C8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x828386e8
	if (ctx.cr6.eq) goto loc_828386E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x828386c8
	if (ctx.cr6.lt) goto loc_828386C8;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_828386E8:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828386F4"))) PPC_WEAK_FUNC(sub_828386F4);
PPC_FUNC_IMPL(__imp__sub_828386F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828386F8"))) PPC_WEAK_FUNC(sub_828386F8);
PPC_FUNC_IMPL(__imp__sub_828386F8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// beq cr6,0x82838750
	if (ctx.cr6.eq) goto loc_82838750;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82838748
	if (ctx.cr6.eq) goto loc_82838748;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82838740
	if (ctx.cr6.eq) goto loc_82838740;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82838754
	goto loc_82838754;
loc_82838740:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838754
	goto loc_82838754;
loc_82838748:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82838754
	goto loc_82838754;
loc_82838750:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82838754:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82838810
	if (ctx.cr6.eq) goto loc_82838810;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8283878c
	if (ctx.cr6.eq) goto loc_8283878C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82838784
	if (ctx.cr6.eq) goto loc_82838784;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8283877c
	if (ctx.cr6.eq) goto loc_8283877C;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x82838790
	goto loc_82838790;
loc_8283877C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82838790
	goto loc_82838790;
loc_82838784:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x82838790
	goto loc_82838790;
loc_8283878C:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82838790:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r6,344
	ctx.r11.s64 = ctx.r6.s64 + 344;
loc_82838798:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828387b8
	if (ctx.cr6.eq) goto loc_828387B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x82838798
	if (ctx.cr6.lt) goto loc_82838798;
	// b 0x828387c0
	goto loc_828387C0;
loc_828387B8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8283883c
	if (!ctx.cr6.lt) goto loc_8283883C;
loc_828387C0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828387ec
	if (ctx.cr6.eq) goto loc_828387EC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828387e8
	if (ctx.cr6.eq) goto loc_828387E8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828387e0
	if (ctx.cr6.eq) goto loc_828387E0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x828387ec
	goto loc_828387EC;
loc_828387E0:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x828387ec
	goto loc_828387EC;
loc_828387E8:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_828387EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r6,556
	ctx.r11.s64 = ctx.r6.s64 + 556;
loc_828387F4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82838820
	if (ctx.cr6.eq) goto loc_82838820;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x828387f4
	if (ctx.cr6.lt) goto loc_828387F4;
loc_82838810:
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82838820:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82838810
	if (ctx.cr6.lt) goto loc_82838810;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8283883C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838850"))) PPC_WEAK_FUNC(sub_82838850);
PPC_FUNC_IMPL(__imp__sub_82838850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82838858;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828388a4
	if (ctx.cr6.eq) goto loc_828388A4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82838894
	if (ctx.cr6.eq) goto loc_82838894;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828388ac
	if (!ctx.cr6.eq) goto loc_828388AC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828388ac
	goto loc_828388AC;
loc_82838894:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828388ac
	goto loc_828388AC;
loc_828388A4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828388AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828386f8
	ctx.lr = 0x828388B4;
	sub_828386F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828388d4
	if (ctx.cr6.eq) goto loc_828388D4;
	// addi r11,r11,75
	ctx.r11.s64 = ctx.r11.s64 + 75;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x828388e0
	if (ctx.cr6.gt) goto loc_828388E0;
loc_828388D4:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_828388E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828388F0"))) PPC_WEAK_FUNC(sub_828388F0);
PPC_FUNC_IMPL(__imp__sub_828388F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x82838948
	if (ctx.cr6.lt) goto loc_82838948;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bge cr6,0x82838948
	if (!ctx.cr6.lt) goto loc_82838948;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82838934
	if (ctx.cr6.eq) goto loc_82838934;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82838948
	if (!ctx.cr6.eq) goto loc_82838948;
	// addi r11,r6,139
	ctx.r11.s64 = ctx.r6.s64 + 139;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82838934:
	// addi r11,r6,86
	ctx.r11.s64 = ctx.r6.s64 + 86;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82838948:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838950"))) PPC_WEAK_FUNC(sub_82838950);
PPC_FUNC_IMPL(__imp__sub_82838950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,60
	ctx.r4.s64 = 60;
	// li r3,90
	ctx.r3.s64 = 90;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r5,48(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r9,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// stw r8,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r8.u32);
	// stw r7,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r7.u32);
	// stw r6,228(r5)
	PPC_STORE_U32(ctx.r5.u32 + 228, ctx.r6.u32);
	// stw r4,232(r5)
	PPC_STORE_U32(ctx.r5.u32 + 232, ctx.r4.u32);
	// stw r3,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r3.u32);
	// stw r11,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828389A0"))) PPC_WEAK_FUNC(sub_828389A0);
PPC_FUNC_IMPL(__imp__sub_828389A0) {
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

__attribute__((alias("__imp__sub_828389B4"))) PPC_WEAK_FUNC(sub_828389B4);
PPC_FUNC_IMPL(__imp__sub_828389B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828389B8"))) PPC_WEAK_FUNC(sub_828389B8);
PPC_FUNC_IMPL(__imp__sub_828389B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f13,284(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828389e0
	if (!ctx.cr6.gt) goto loc_828389E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828389E0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828389E8"))) PPC_WEAK_FUNC(sub_828389E8);
PPC_FUNC_IMPL(__imp__sub_828389E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828389F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r11.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,528(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82838a5c
	if (ctx.cr6.eq) goto loc_82838A5C;
	// bl 0x82bfc538
	ctx.lr = 0x82838A4C;
	sub_82BFC538(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82838a60
	if (!ctx.cr6.gt) goto loc_82838A60;
loc_82838A5C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82838A60:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82838A7C"))) PPC_WEAK_FUNC(sub_82838A7C);
PPC_FUNC_IMPL(__imp__sub_82838A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82838A80"))) PPC_WEAK_FUNC(sub_82838A80);
PPC_FUNC_IMPL(__imp__sub_82838A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 528, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838A98"))) PPC_WEAK_FUNC(sub_82838A98);
PPC_FUNC_IMPL(__imp__sub_82838A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82838AA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,528(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	// bl 0x82bbdb28
	ctx.lr = 0x82838AF4;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82838b08
	if (ctx.cr6.eq) goto loc_82838B08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82838B08:
	// stw r27,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r25.u32);
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

__attribute__((alias("__imp__sub_82838B20"))) PPC_WEAK_FUNC(sub_82838B20);
PPC_FUNC_IMPL(__imp__sub_82838B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82838B28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,528(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	// bl 0x82bbdb28
	ctx.lr = 0x82838B7C;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82838b90
	if (ctx.cr6.eq) goto loc_82838B90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82838B90:
	// stw r27,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r25.u32);
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

__attribute__((alias("__imp__sub_82838BA8"))) PPC_WEAK_FUNC(sub_82838BA8);
PPC_FUNC_IMPL(__imp__sub_82838BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,528(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 528);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82838bc8
	if (!ctx.cr6.gt) goto loc_82838BC8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82838BC8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838BD0"))) PPC_WEAK_FUNC(sub_82838BD0);
PPC_FUNC_IMPL(__imp__sub_82838BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r6,128
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82838c38
	if (ctx.cr6.eq) goto loc_82838C38;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82838c50
	if (!ctx.cr6.eq) goto loc_82838C50;
	// addi r10,r5,118
	ctx.r10.s64 = ctx.r5.s64 + 118;
	// addi r9,r5,165
	ctx.r9.s64 = ctx.r5.s64 + 165;
	// b 0x82838c40
	goto loc_82838C40;
loc_82838C38:
	// addi r10,r5,105
	ctx.r10.s64 = ctx.r5.s64 + 105;
	// addi r9,r5,195
	ctx.r9.s64 = ctx.r5.s64 + 195;
loc_82838C40:
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
loc_82838C50:
	// addi r10,r4,112
	ctx.r10.s64 = ctx.r4.s64 + 112;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838C68"))) PPC_WEAK_FUNC(sub_82838C68);
PPC_FUNC_IMPL(__imp__sub_82838C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82838ca4
	if (ctx.cr6.lt) goto loc_82838CA4;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bge cr6,0x82838ca4
	if (!ctx.cr6.lt) goto loc_82838CA4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r6,139
	ctx.r10.s64 = ctx.r6.s64 + 139;
	// bne cr6,0x82838c94
	if (!ctx.cr6.eq) goto loc_82838C94;
	// addi r10,r6,86
	ctx.r10.s64 = ctx.r6.s64 + 86;
loc_82838C94:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82838CA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838CB0"))) PPC_WEAK_FUNC(sub_82838CB0);
PPC_FUNC_IMPL(__imp__sub_82838CB0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// beq cr6,0x82838d00
	if (ctx.cr6.eq) goto loc_82838D00;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82838cf8
	if (ctx.cr6.eq) goto loc_82838CF8;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82838cf0
	if (ctx.cr6.eq) goto loc_82838CF0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82838d04
	goto loc_82838D04;
loc_82838CF0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838d04
	goto loc_82838D04;
loc_82838CF8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82838d04
	goto loc_82838D04;
loc_82838D00:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82838D04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82838dc4
	if (ctx.cr6.eq) goto loc_82838DC4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r10,344
	ctx.r9.s64 = ctx.r10.s64 + 344;
loc_82838D14:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82838d40
	if (ctx.cr6.eq) goto loc_82838D40;
	// lwz r11,212(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838d74
	if (ctx.cr6.eq) goto loc_82838D74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838d6c
	if (ctx.cr6.eq) goto loc_82838D6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82838d64
	if (ctx.cr6.eq) goto loc_82838D64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82838d78
	goto loc_82838D78;
loc_82838D40:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838d74
	if (ctx.cr6.eq) goto loc_82838D74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838d6c
	if (ctx.cr6.eq) goto loc_82838D6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82838d64
	if (ctx.cr6.eq) goto loc_82838D64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82838d78
	goto loc_82838D78;
loc_82838D64:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82838d78
	goto loc_82838D78;
loc_82838D6C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82838d78
	goto loc_82838D78;
loc_82838D74:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82838D78:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82838da8
	if (ctx.cr6.eq) goto loc_82838DA8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82838da0
	if (ctx.cr6.eq) goto loc_82838DA0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82838d98
	if (ctx.cr6.eq) goto loc_82838D98;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82838dac
	goto loc_82838DAC;
loc_82838D98:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838dac
	goto loc_82838DAC;
loc_82838DA0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82838dac
	goto loc_82838DAC;
loc_82838DA8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82838DAC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82838dd4
	if (ctx.cr6.eq) goto loc_82838DD4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x82838d14
	if (ctx.cr6.lt) goto loc_82838D14;
loc_82838DC4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82838DD4:
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838DE0"))) PPC_WEAK_FUNC(sub_82838DE0);
PPC_FUNC_IMPL(__imp__sub_82838DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82838e20
	if (ctx.cr6.eq) goto loc_82838E20;
	// addi r11,r5,139
	ctx.r11.s64 = ctx.r5.s64 + 139;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838e5c
	if (ctx.cr6.eq) goto loc_82838E5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838e4c
	if (ctx.cr6.eq) goto loc_82838E4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82838e64
	if (!ctx.cr6.eq) goto loc_82838E64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838e64
	goto loc_82838E64;
loc_82838E20:
	// addi r11,r5,86
	ctx.r11.s64 = ctx.r5.s64 + 86;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838e5c
	if (ctx.cr6.eq) goto loc_82838E5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838e4c
	if (ctx.cr6.eq) goto loc_82838E4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82838e64
	if (!ctx.cr6.eq) goto loc_82838E64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838e64
	goto loc_82838E64;
loc_82838E4C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82838e64
	goto loc_82838E64;
loc_82838E5C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82838E64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82838E78"))) PPC_WEAK_FUNC(sub_82838E78);
PPC_FUNC_IMPL(__imp__sub_82838E78) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,5
	ctx.r30.s64 = 5;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r6,r11,344
	ctx.r6.s64 = ctx.r11.s64 + 344;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82838EBC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82838f68
	if (ctx.cr6.eq) goto loc_82838F68;
	// lwz r11,212(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 212);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838ef8
	if (ctx.cr6.eq) goto loc_82838EF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838ef0
	if (ctx.cr6.eq) goto loc_82838EF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82838ee8
	if (ctx.cr6.eq) goto loc_82838EE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82838efc
	goto loc_82838EFC;
loc_82838EE8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82838efc
	goto loc_82838EFC;
loc_82838EF0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82838efc
	goto loc_82838EFC;
loc_82838EF8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82838EFC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82839034
	if (ctx.cr6.eq) goto loc_82839034;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838f2c
	if (ctx.cr6.eq) goto loc_82838F2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838f24
	if (ctx.cr6.eq) goto loc_82838F24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82838f30
	if (!ctx.cr6.eq) goto loc_82838F30;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838f30
	goto loc_82838F30;
loc_82838F24:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82838f30
	goto loc_82838F30;
loc_82838F2C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82838F30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82838f44
	if (ctx.cr6.eq) goto loc_82838F44;
	// stb r31,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r31.u8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82838F44:
	// lwz r11,212(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 212);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82839014
	if (ctx.cr6.eq) goto loc_82839014;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283900c
	if (ctx.cr6.eq) goto loc_8283900C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82839018
	if (!ctx.cr6.eq) goto loc_82839018;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82839018
	goto loc_82839018;
loc_82838F68:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838f9c
	if (ctx.cr6.eq) goto loc_82838F9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838f94
	if (ctx.cr6.eq) goto loc_82838F94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82838f8c
	if (ctx.cr6.eq) goto loc_82838F8C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82838fa0
	goto loc_82838FA0;
loc_82838F8C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82838fa0
	goto loc_82838FA0;
loc_82838F94:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82838fa0
	goto loc_82838FA0;
loc_82838F9C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82838FA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82839034
	if (ctx.cr6.eq) goto loc_82839034;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82838fd0
	if (ctx.cr6.eq) goto loc_82838FD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82838fc8
	if (ctx.cr6.eq) goto loc_82838FC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82838fd4
	if (!ctx.cr6.eq) goto loc_82838FD4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82838fd4
	goto loc_82838FD4;
loc_82838FC8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82838fd4
	goto loc_82838FD4;
loc_82838FD0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82838FD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82838fe8
	if (ctx.cr6.eq) goto loc_82838FE8;
	// stb r31,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r31.u8);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82838FE8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82839014
	if (ctx.cr6.eq) goto loc_82839014;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8283900c
	if (ctx.cr6.eq) goto loc_8283900C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82839018
	if (!ctx.cr6.eq) goto loc_82839018;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82839018
	goto loc_82839018;
loc_8283900C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82839018
	goto loc_82839018;
loc_82839014:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82839018:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82839034
	if (ctx.cr6.eq) goto loc_82839034;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// or r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stb r8,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r8.u8);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82839034:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82838ebc
	if (!ctx.cr0.eq) goto loc_82838EBC;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283904C"))) PPC_WEAK_FUNC(sub_8283904C);
PPC_FUNC_IMPL(__imp__sub_8283904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839050"))) PPC_WEAK_FUNC(sub_82839050);
PPC_FUNC_IMPL(__imp__sub_82839050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839054"))) PPC_WEAK_FUNC(sub_82839054);
PPC_FUNC_IMPL(__imp__sub_82839054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839058"))) PPC_WEAK_FUNC(sub_82839058);
PPC_FUNC_IMPL(__imp__sub_82839058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,548(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 548);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839070"))) PPC_WEAK_FUNC(sub_82839070);
PPC_FUNC_IMPL(__imp__sub_82839070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,540(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 540);
	// lwz r11,328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839090"))) PPC_WEAK_FUNC(sub_82839090);
PPC_FUNC_IMPL(__imp__sub_82839090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828390A8"))) PPC_WEAK_FUNC(sub_828390A8);
PPC_FUNC_IMPL(__imp__sub_828390A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828390B0;
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
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x827eee58
	ctx.lr = 0x82839100;
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

__attribute__((alias("__imp__sub_8283911C"))) PPC_WEAK_FUNC(sub_8283911C);
PPC_FUNC_IMPL(__imp__sub_8283911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839120"))) PPC_WEAK_FUNC(sub_82839120);
PPC_FUNC_IMPL(__imp__sub_82839120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82839128;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r11.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x8283918c
	if (ctx.cr6.eq) goto loc_8283918C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82839198
	if (!ctx.cr6.eq) goto loc_82839198;
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82839190
	goto loc_82839190;
loc_8283918C:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82839190:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eee58
	ctx.lr = 0x82839198;
	sub_827EEE58(ctx, base);
loc_82839198:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828391B4"))) PPC_WEAK_FUNC(sub_828391B4);
PPC_FUNC_IMPL(__imp__sub_828391B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828391B8"))) PPC_WEAK_FUNC(sub_828391B8);
PPC_FUNC_IMPL(__imp__sub_828391B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828391d8
	if (!ctx.cr6.eq) goto loc_828391D8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828391D8:
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828391E8"))) PPC_WEAK_FUNC(sub_828391E8);
PPC_FUNC_IMPL(__imp__sub_828391E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839200"))) PPC_WEAK_FUNC(sub_82839200);
PPC_FUNC_IMPL(__imp__sub_82839200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839218"))) PPC_WEAK_FUNC(sub_82839218);
PPC_FUNC_IMPL(__imp__sub_82839218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839230"))) PPC_WEAK_FUNC(sub_82839230);
PPC_FUNC_IMPL(__imp__sub_82839230) {
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

__attribute__((alias("__imp__sub_82839248"))) PPC_WEAK_FUNC(sub_82839248);
PPC_FUNC_IMPL(__imp__sub_82839248) {
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

__attribute__((alias("__imp__sub_82839260"))) PPC_WEAK_FUNC(sub_82839260);
PPC_FUNC_IMPL(__imp__sub_82839260) {
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

__attribute__((alias("__imp__sub_82839278"))) PPC_WEAK_FUNC(sub_82839278);
PPC_FUNC_IMPL(__imp__sub_82839278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839290"))) PPC_WEAK_FUNC(sub_82839290);
PPC_FUNC_IMPL(__imp__sub_82839290) {
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

__attribute__((alias("__imp__sub_828392A8"))) PPC_WEAK_FUNC(sub_828392A8);
PPC_FUNC_IMPL(__imp__sub_828392A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828392AC"))) PPC_WEAK_FUNC(sub_828392AC);
PPC_FUNC_IMPL(__imp__sub_828392AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828392B0"))) PPC_WEAK_FUNC(sub_828392B0);
PPC_FUNC_IMPL(__imp__sub_828392B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828392B8;
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
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x827eee58
	ctx.lr = 0x82839308;
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

__attribute__((alias("__imp__sub_82839324"))) PPC_WEAK_FUNC(sub_82839324);
PPC_FUNC_IMPL(__imp__sub_82839324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839328"))) PPC_WEAK_FUNC(sub_82839328);
PPC_FUNC_IMPL(__imp__sub_82839328) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,-6
	ctx.r11.s64 = ctx.r5.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283933C"))) PPC_WEAK_FUNC(sub_8283933C);
PPC_FUNC_IMPL(__imp__sub_8283933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839340"))) PPC_WEAK_FUNC(sub_82839340);
PPC_FUNC_IMPL(__imp__sub_82839340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82839348;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,262
	ctx.r10.s64 = ctx.r4.s64 + 262;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r27,13188(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13184(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828393bc
	if (ctx.cr6.eq) goto loc_828393BC;
	// lwz r10,996(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r4,996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 996, ctx.r4.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r8,988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 988, ctx.r8.u32);
	// stw r10,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r10.u32);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82808340
	ctx.lr = 0x828393B8;
	sub_82808340(ctx, base);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
loc_828393BC:
	// stw r27,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r27.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828393D0"))) PPC_WEAK_FUNC(sub_828393D0);
PPC_FUNC_IMPL(__imp__sub_828393D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828393D8;
	__savegprlr_23(ctx, base);
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
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
	// lwz r10,996(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 996);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82839434
	if (ctx.cr6.eq) goto loc_82839434;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82839340
	ctx.lr = 0x8283942C;
	sub_82839340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,920(r27)
	PPC_STORE_U32(ctx.r27.u32 + 920, ctx.r11.u32);
loc_82839434:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283944C"))) PPC_WEAK_FUNC(sub_8283944C);
PPC_FUNC_IMPL(__imp__sub_8283944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839450"))) PPC_WEAK_FUNC(sub_82839450);
PPC_FUNC_IMPL(__imp__sub_82839450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82839458;
	__savegprlr_23(ctx, base);
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
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
	// lwz r10,996(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 996);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828394b4
	if (ctx.cr6.eq) goto loc_828394B4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82839340
	ctx.lr = 0x828394AC;
	sub_82839340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,972(r27)
	PPC_STORE_U32(ctx.r27.u32 + 972, ctx.r11.u32);
loc_828394B4:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828394CC"))) PPC_WEAK_FUNC(sub_828394CC);
PPC_FUNC_IMPL(__imp__sub_828394CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828394D0"))) PPC_WEAK_FUNC(sub_828394D0);
PPC_FUNC_IMPL(__imp__sub_828394D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828394D8;
	__savegprlr_23(ctx, base);
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
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
	// lwz r10,996(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 996);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82839534
	if (ctx.cr6.eq) goto loc_82839534;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82839340
	ctx.lr = 0x8283952C;
	sub_82839340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,924(r27)
	PPC_STORE_U32(ctx.r27.u32 + 924, ctx.r11.u32);
loc_82839534:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283954C"))) PPC_WEAK_FUNC(sub_8283954C);
PPC_FUNC_IMPL(__imp__sub_8283954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839550"))) PPC_WEAK_FUNC(sub_82839550);
PPC_FUNC_IMPL(__imp__sub_82839550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82839558;
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
	// lwz r9,996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828395b4
	if (ctx.cr6.eq) goto loc_828395B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 548, ctx.r11.u32);
	// bl 0x82839340
	ctx.lr = 0x828395B4;
	sub_82839340(ctx, base);
loc_828395B4:
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

__attribute__((alias("__imp__sub_828395CC"))) PPC_WEAK_FUNC(sub_828395CC);
PPC_FUNC_IMPL(__imp__sub_828395CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828395D0"))) PPC_WEAK_FUNC(sub_828395D0);
PPC_FUNC_IMPL(__imp__sub_828395D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828395D8"))) PPC_WEAK_FUNC(sub_828395D8);
PPC_FUNC_IMPL(__imp__sub_828395D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828395E0;
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
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x827eee58
	ctx.lr = 0x82839630;
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

__attribute__((alias("__imp__sub_8283964C"))) PPC_WEAK_FUNC(sub_8283964C);
PPC_FUNC_IMPL(__imp__sub_8283964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839650"))) PPC_WEAK_FUNC(sub_82839650);
PPC_FUNC_IMPL(__imp__sub_82839650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,100(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839668"))) PPC_WEAK_FUNC(sub_82839668);
PPC_FUNC_IMPL(__imp__sub_82839668) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839670"))) PPC_WEAK_FUNC(sub_82839670);
PPC_FUNC_IMPL(__imp__sub_82839670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 + 10;
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

