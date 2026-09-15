#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8281CA78"))) PPC_WEAK_FUNC(sub_8281CA78);
PPC_FUNC_IMPL(__imp__sub_8281CA78) {
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

__attribute__((alias("__imp__sub_8281CA90"))) PPC_WEAK_FUNC(sub_8281CA90);
PPC_FUNC_IMPL(__imp__sub_8281CA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,45
	ctx.r10.s64 = ctx.r5.s64 + 45;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281CAB0"))) PPC_WEAK_FUNC(sub_8281CAB0);
PPC_FUNC_IMPL(__imp__sub_8281CAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8281CAB8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r9,-29532
	ctx.r7.s64 = ctx.r9.s64 + -29532;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13192(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r22,13188(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r21,13184(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-29532(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r27,4(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// beq cr6,0x8281cb48
	if (ctx.cr6.eq) goto loc_8281CB48;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281cb40
	if (ctx.cr6.eq) goto loc_8281CB40;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281cb38
	if (ctx.cr6.eq) goto loc_8281CB38;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x8281cb4c
	goto loc_8281CB4C;
loc_8281CB38:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8281cb4c
	goto loc_8281CB4C;
loc_8281CB40:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x8281cb4c
	goto loc_8281CB4C;
loc_8281CB48:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8281CB4C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8281cb7c
	if (ctx.cr6.eq) goto loc_8281CB7C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8281cb74
	if (ctx.cr6.eq) goto loc_8281CB74;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8281cb6c
	if (ctx.cr6.eq) goto loc_8281CB6C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281cb80
	goto loc_8281CB80;
loc_8281CB6C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8281cb80
	goto loc_8281CB80;
loc_8281CB74:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8281cb80
	goto loc_8281CB80;
loc_8281CB7C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8281CB80:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8281cd20
	if (ctx.cr6.eq) goto loc_8281CD20;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r8,r11,23
	ctx.r8.s64 = ctx.r11.s64 + 23;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r26,r11,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x8281cbd4
	if (ctx.cr6.eq) goto loc_8281CBD4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281cbcc
	if (ctx.cr6.eq) goto loc_8281CBCC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281cbc4
	if (ctx.cr6.eq) goto loc_8281CBC4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281cbd8
	goto loc_8281CBD8;
loc_8281CBC4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281cbd8
	goto loc_8281CBD8;
loc_8281CBCC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8281cbd8
	goto loc_8281CBD8;
loc_8281CBD4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8281CBD8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8281ccbc
	if (!ctx.cr6.gt) goto loc_8281CCBC;
	// li r9,96
	ctx.r9.s64 = 96;
loc_8281CBF8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281cc28
	if (ctx.cr6.eq) goto loc_8281CC28;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281cc20
	if (ctx.cr6.eq) goto loc_8281CC20;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281cc18
	if (ctx.cr6.eq) goto loc_8281CC18;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281cc2c
	goto loc_8281CC2C;
loc_8281CC18:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281cc2c
	goto loc_8281CC2C;
loc_8281CC20:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8281cc2c
	goto loc_8281CC2C;
loc_8281CC28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8281CC2C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281cc6c
	if (ctx.cr6.eq) goto loc_8281CC6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281cc64
	if (ctx.cr6.eq) goto loc_8281CC64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281cc5c
	if (ctx.cr6.eq) goto loc_8281CC5C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281cc70
	goto loc_8281CC70;
loc_8281CC5C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281cc70
	goto loc_8281CC70;
loc_8281CC64:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8281cc70
	goto loc_8281CC70;
loc_8281CC6C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8281CC70:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x8281cca0
	if (ctx.cr6.eq) goto loc_8281CCA0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x8281cc98
	if (ctx.cr6.eq) goto loc_8281CC98;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x8281cc90
	if (ctx.cr6.eq) goto loc_8281CC90;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8281cca4
	goto loc_8281CCA4;
loc_8281CC90:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281cca4
	goto loc_8281CCA4;
loc_8281CC98:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8281cca4
	goto loc_8281CCA4;
loc_8281CCA0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8281CCA4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8281cd20
	if (ctx.cr6.eq) goto loc_8281CD20;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8281cbf8
	if (ctx.cr6.lt) goto loc_8281CBF8;
loc_8281CCBC:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8281cd18
	if (!ctx.cr6.eq) goto loc_8281CD18;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281ccf4
	if (ctx.cr6.eq) goto loc_8281CCF4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281ccec
	if (ctx.cr6.eq) goto loc_8281CCEC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281cce4
	if (ctx.cr6.eq) goto loc_8281CCE4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281ccf8
	goto loc_8281CCF8;
loc_8281CCE4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281ccf8
	goto loc_8281CCF8;
loc_8281CCEC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8281ccf8
	goto loc_8281CCF8;
loc_8281CCF4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8281CCF8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8281cab0
	ctx.lr = 0x8281CD0C;
	sub_8281CAB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281cd20
	if (ctx.cr6.eq) goto loc_8281CD20;
loc_8281CD18:
	// stw r20,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r20.u32);
	// b 0x8281cd28
	goto loc_8281CD28;
loc_8281CD20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8281CD28:
	// stw r22,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r22.u32);
	// stw r21,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r21.u32);
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r23,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281CD40"))) PPC_WEAK_FUNC(sub_8281CD40);
PPC_FUNC_IMPL(__imp__sub_8281CD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_8281CD64"))) PPC_WEAK_FUNC(sub_8281CD64);
PPC_FUNC_IMPL(__imp__sub_8281CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281CD68"))) PPC_WEAK_FUNC(sub_8281CD68);
PPC_FUNC_IMPL(__imp__sub_8281CD68) {
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
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8281cdd0
	if (ctx.cr6.eq) goto loc_8281CDD0;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8281cdc8
	if (ctx.cr6.eq) goto loc_8281CDC8;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8281cdc0
	if (ctx.cr6.eq) goto loc_8281CDC0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281cdd4
	goto loc_8281CDD4;
loc_8281CDC0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8281cdd4
	goto loc_8281CDD4;
loc_8281CDC8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281cdd4
	goto loc_8281CDD4;
loc_8281CDD0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281CDD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281cee4
	if (ctx.cr6.eq) goto loc_8281CEE4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281ce10
	if (ctx.cr6.eq) goto loc_8281CE10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281ce08
	if (ctx.cr6.eq) goto loc_8281CE08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281ce00
	if (ctx.cr6.eq) goto loc_8281CE00;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281ce14
	goto loc_8281CE14;
loc_8281CE00:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8281ce14
	goto loc_8281CE14;
loc_8281CE08:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8281ce14
	goto loc_8281CE14;
loc_8281CE10:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8281CE14:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8281ce44
	if (ctx.cr6.eq) goto loc_8281CE44;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8281ce3c
	if (ctx.cr6.eq) goto loc_8281CE3C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8281ce34
	if (ctx.cr6.eq) goto loc_8281CE34;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281ce48
	goto loc_8281CE48;
loc_8281CE34:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8281ce48
	goto loc_8281CE48;
loc_8281CE3C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281ce48
	goto loc_8281CE48;
loc_8281CE44:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281CE48:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281ce60
	if (!ctx.cr6.eq) goto loc_8281CE60;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281CE60:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281ce94
	if (ctx.cr6.eq) goto loc_8281CE94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281ce8c
	if (ctx.cr6.eq) goto loc_8281CE8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281ce84
	if (ctx.cr6.eq) goto loc_8281CE84;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281ce98
	goto loc_8281CE98;
loc_8281CE84:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8281ce98
	goto loc_8281CE98;
loc_8281CE8C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8281ce98
	goto loc_8281CE98;
loc_8281CE94:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8281CE98:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8281cec8
	if (ctx.cr6.eq) goto loc_8281CEC8;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8281cec0
	if (ctx.cr6.eq) goto loc_8281CEC0;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8281ceb8
	if (ctx.cr6.eq) goto loc_8281CEB8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281cecc
	goto loc_8281CECC;
loc_8281CEB8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8281cecc
	goto loc_8281CECC;
loc_8281CEC0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281cecc
	goto loc_8281CECC;
loc_8281CEC8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281CECC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x8281cee8
	if (!ctx.cr6.eq) goto loc_8281CEE8;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8281CEE4:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8281CEE8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281CEF0"))) PPC_WEAK_FUNC(sub_8281CEF0);
PPC_FUNC_IMPL(__imp__sub_8281CEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8281CEF8;
	__savegprlr_23(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r10,-29532
	ctx.r11.s64 = ctx.r10.s64 + -29532;
	// lwz r25,-29532(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r29,13192(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13192);
	// lwz r28,13188(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r27,13180(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13180);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r26,13184(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281cf68
	if (ctx.cr6.eq) goto loc_8281CF68;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281cf60
	if (ctx.cr6.eq) goto loc_8281CF60;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8281cf58
	if (ctx.cr6.eq) goto loc_8281CF58;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8281cf6c
	goto loc_8281CF6C;
loc_8281CF58:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281cf6c
	goto loc_8281CF6C;
loc_8281CF60:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8281cf6c
	goto loc_8281CF6C;
loc_8281CF68:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8281CF6C:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r6,3
	ctx.r11.s64 = ctx.r6.s64 + 3;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r6,30
	ctx.r11.s64 = ctx.r6.s64 * 30;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f13,29744(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r30,r11,30
	ctx.r30.s64 = ctx.r11.s64 + 30;
	// lfsx f0,r23,r6
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8281d05c
	if (ctx.cr6.lt) goto loc_8281D05C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8281d044
	if (!ctx.cr6.lt) goto loc_8281D044;
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f11,-29864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29864);
	ctx.f11.f64 = double(temp.f32);
loc_8281CFBC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281cfec
	if (ctx.cr6.eq) goto loc_8281CFEC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281cfe4
	if (ctx.cr6.eq) goto loc_8281CFE4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8281cfdc
	if (ctx.cr6.eq) goto loc_8281CFDC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8281cff0
	goto loc_8281CFF0;
loc_8281CFDC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281cff0
	goto loc_8281CFF0;
loc_8281CFE4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8281cff0
	goto loc_8281CFF0;
loc_8281CFEC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8281CFF0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8281d038
	if (ctx.cr6.lt) goto loc_8281D038;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8281cfbc
	if (ctx.cr6.lt) goto loc_8281CFBC;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r28,13188(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13188, ctx.r28.u32);
	// stw r26,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r26.u32);
	// stw r27,13180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13180, ctx.r27.u32);
	// stw r29,13192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13192, ctx.r29.u32);
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_8281D038:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
loc_8281D044:
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r28,13188(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13188, ctx.r28.u32);
	// stw r26,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r26.u32);
	// stw r27,13180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13180, ctx.r27.u32);
	// stw r29,13192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13192, ctx.r29.u32);
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_8281D05C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r28,13188(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13188, ctx.r28.u32);
	// stw r26,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r26.u32);
	// stw r27,13180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13180, ctx.r27.u32);
	// stw r29,13192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13192, ctx.r29.u32);
	// lfs f0,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D07C"))) PPC_WEAK_FUNC(sub_8281D07C);
PPC_FUNC_IMPL(__imp__sub_8281D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D080"))) PPC_WEAK_FUNC(sub_8281D080);
PPC_FUNC_IMPL(__imp__sub_8281D080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8281D088;
	__savegprlr_24(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lis r4,-31942
	ctx.r4.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,13192(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13192);
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r28,13188(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13188);
	// lwz r27,13180(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// lwz r26,13184(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281d0f0
	if (ctx.cr6.eq) goto loc_8281D0F0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281d0e8
	if (ctx.cr6.eq) goto loc_8281D0E8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281d0e0
	if (ctx.cr6.eq) goto loc_8281D0E0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d0f4
	goto loc_8281D0F4;
loc_8281D0E0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d0f4
	goto loc_8281D0F4;
loc_8281D0E8:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8281d0f4
	goto loc_8281D0F4;
loc_8281D0F0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8281D0F4:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r25,r11,3
	ctx.r25.s64 = ctx.r11.s64 + 3;
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r24,48(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,180
	ctx.r8.s64 = ctx.r11.s64 + 180;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfsx f13,r25,r24
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,-29864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29864);
	ctx.f12.f64 = double(temp.f32);
loc_8281D12C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281d15c
	if (ctx.cr6.eq) goto loc_8281D15C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281d154
	if (ctx.cr6.eq) goto loc_8281D154;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281d14c
	if (ctx.cr6.eq) goto loc_8281D14C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d160
	goto loc_8281D160;
loc_8281D14C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d160
	goto loc_8281D160;
loc_8281D154:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8281d160
	goto loc_8281D160;
loc_8281D15C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8281D160:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f11,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x8281d1ac
	if (ctx.cr6.lt) goto loc_8281D1AC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r7,30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 30, ctx.xer);
	// blt cr6,0x8281d12c
	if (ctx.cr6.lt) goto loc_8281D12C;
	// stw r29,13192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13192, ctx.r29.u32);
	// stw r27,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r27.u32);
	// stw r26,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r26.u32);
	// stw r28,13188(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13188, ctx.r28.u32);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_8281D1AC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,13192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13192, ctx.r29.u32);
	// stw r27,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r27.u32);
	// stw r26,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r26.u32);
	// stw r28,13188(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13188, ctx.r28.u32);
	// lfs f12,-29824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29824);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D1D4"))) PPC_WEAK_FUNC(sub_8281D1D4);
PPC_FUNC_IMPL(__imp__sub_8281D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D1D8"))) PPC_WEAK_FUNC(sub_8281D1D8);
PPC_FUNC_IMPL(__imp__sub_8281D1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8281D1E0;
	__savegprlr_21(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,48(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281d250
	if (ctx.cr6.eq) goto loc_8281D250;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281d248
	if (ctx.cr6.eq) goto loc_8281D248;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281d240
	if (ctx.cr6.eq) goto loc_8281D240;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d254
	goto loc_8281D254;
loc_8281D240:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d254
	goto loc_8281D254;
loc_8281D248:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281d254
	goto loc_8281D254;
loc_8281D250:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281D254:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// blt cr6,0x8281d348
	if (ctx.cr6.lt) goto loc_8281D348;
loc_8281D278:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8281d348
	if (!ctx.cr6.lt) goto loc_8281D348;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281d2b0
	if (ctx.cr6.eq) goto loc_8281D2B0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281d2a8
	if (ctx.cr6.eq) goto loc_8281D2A8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281d2a0
	if (ctx.cr6.eq) goto loc_8281D2A0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d2b4
	goto loc_8281D2B4;
loc_8281D2A0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d2b4
	goto loc_8281D2B4;
loc_8281D2A8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281d2b4
	goto loc_8281D2B4;
loc_8281D2B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281D2B4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r21,r10,3
	ctx.r21.s64 = ctx.r10.s64 + 3;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfsx f0,r21,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8281d32c
	if (ctx.cr6.lt) goto loc_8281D32C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281d304
	if (ctx.cr6.eq) goto loc_8281D304;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281d2fc
	if (ctx.cr6.eq) goto loc_8281D2FC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281d2f4
	if (ctx.cr6.eq) goto loc_8281D2F4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d308
	goto loc_8281D308;
loc_8281D2F4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d308
	goto loc_8281D308;
loc_8281D2FC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281d308
	goto loc_8281D308;
loc_8281D304:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281D308:
	// lwz r21,32(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,4(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r21,48(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// lfsx f0,r11,r21
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8281d33c
	if (!ctx.cr6.gt) goto loc_8281D33C;
loc_8281D32C:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8281d278
	if (!ctx.cr0.lt) goto loc_8281D278;
	// b 0x8281d348
	goto loc_8281D348;
loc_8281D33C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8281d41c
	if (!ctx.cr6.lt) goto loc_8281D41C;
loc_8281D348:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8281d41c
	if (ctx.cr6.lt) goto loc_8281D41C;
loc_8281D354:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8281d41c
	if (!ctx.cr6.lt) goto loc_8281D41C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281d38c
	if (ctx.cr6.eq) goto loc_8281D38C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281d384
	if (ctx.cr6.eq) goto loc_8281D384;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281d37c
	if (ctx.cr6.eq) goto loc_8281D37C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d390
	goto loc_8281D390;
loc_8281D37C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d390
	goto loc_8281D390;
loc_8281D384:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281d390
	goto loc_8281D390;
loc_8281D38C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281D390:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8281d408
	if (ctx.cr6.lt) goto loc_8281D408;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281d3e0
	if (ctx.cr6.eq) goto loc_8281D3E0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281d3d8
	if (ctx.cr6.eq) goto loc_8281D3D8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281d3d0
	if (ctx.cr6.eq) goto loc_8281D3D0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d3e4
	goto loc_8281D3E4;
loc_8281D3D0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d3e4
	goto loc_8281D3E4;
loc_8281D3D8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281d3e4
	goto loc_8281D3E4;
loc_8281D3E0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281D3E4:
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,48(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfsx f0,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8281d418
	if (!ctx.cr6.gt) goto loc_8281D418;
loc_8281D408:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8281d354
	if (!ctx.cr0.lt) goto loc_8281D354;
	// b 0x8281d41c
	goto loc_8281D41C;
loc_8281D418:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8281D41C:
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D434"))) PPC_WEAK_FUNC(sub_8281D434);
PPC_FUNC_IMPL(__imp__sub_8281D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D438"))) PPC_WEAK_FUNC(sub_8281D438);
PPC_FUNC_IMPL(__imp__sub_8281D438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281d478
	if (ctx.cr6.eq) goto loc_8281D478;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281d468
	if (ctx.cr6.eq) goto loc_8281D468;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281d480
	if (!ctx.cr6.eq) goto loc_8281D480;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d480
	goto loc_8281D480;
loc_8281D468:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8281d480
	goto loc_8281D480;
loc_8281D478:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8281D480:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,25
	ctx.r8.s64 = ctx.r11.s64 + 25;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D4A4"))) PPC_WEAK_FUNC(sub_8281D4A4);
PPC_FUNC_IMPL(__imp__sub_8281D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D4A8"))) PPC_WEAK_FUNC(sub_8281D4A8);
PPC_FUNC_IMPL(__imp__sub_8281D4A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804270
	ctx.lr = 0x8281D4C4;
	sub_82804270(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8281D508"))) PPC_WEAK_FUNC(sub_8281D508);
PPC_FUNC_IMPL(__imp__sub_8281D508) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x8281D524;
	sub_82804410(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8281D568"))) PPC_WEAK_FUNC(sub_8281D568);
PPC_FUNC_IMPL(__imp__sub_8281D568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D580"))) PPC_WEAK_FUNC(sub_8281D580);
PPC_FUNC_IMPL(__imp__sub_8281D580) {
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

__attribute__((alias("__imp__sub_8281D598"))) PPC_WEAK_FUNC(sub_8281D598);
PPC_FUNC_IMPL(__imp__sub_8281D598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D5B0"))) PPC_WEAK_FUNC(sub_8281D5B0);
PPC_FUNC_IMPL(__imp__sub_8281D5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D5C8"))) PPC_WEAK_FUNC(sub_8281D5C8);
PPC_FUNC_IMPL(__imp__sub_8281D5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
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
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
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

__attribute__((alias("__imp__sub_8281D608"))) PPC_WEAK_FUNC(sub_8281D608);
PPC_FUNC_IMPL(__imp__sub_8281D608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D620"))) PPC_WEAK_FUNC(sub_8281D620);
PPC_FUNC_IMPL(__imp__sub_8281D620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
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
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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

__attribute__((alias("__imp__sub_8281D660"))) PPC_WEAK_FUNC(sub_8281D660);
PPC_FUNC_IMPL(__imp__sub_8281D660) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8281d680
	if (!ctx.cr6.eq) goto loc_8281D680;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8281D680:
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8281d690
	if (!ctx.cr6.eq) goto loc_8281D690;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8281D690:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D698"))) PPC_WEAK_FUNC(sub_8281D698);
PPC_FUNC_IMPL(__imp__sub_8281D698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281d6d4
	if (ctx.cr6.eq) goto loc_8281D6D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8281d6f4
	if (!ctx.cr6.eq) goto loc_8281D6F4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,2912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8281d6dc
	if (!ctx.cr6.lt) goto loc_8281D6DC;
	// stfs f0,2912(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2912, temp.u32);
	// b 0x8281d6dc
	goto loc_8281D6DC;
loc_8281D6D4:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
loc_8281D6DC:
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8281d6f4
	if (ctx.cr6.gt) goto loc_8281D6F4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_8281D6F4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// blt cr6,0x8281d748
	if (ctx.cr6.lt) goto loc_8281D748;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x8281d748
	if (ctx.cr6.lt) goto loc_8281D748;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8281D748:
	// fsubs f8,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsel f5,f8,f13,f0
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fsel f4,f7,f10,f12
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// stfs f4,28(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsel f3,f6,f9,f11
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsel f0,f8,f0,f13
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fsel f13,f7,f12,f10
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// fsel f12,f6,f11,f9
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D7C4"))) PPC_WEAK_FUNC(sub_8281D7C4);
PPC_FUNC_IMPL(__imp__sub_8281D7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D7C8"))) PPC_WEAK_FUNC(sub_8281D7C8);
PPC_FUNC_IMPL(__imp__sub_8281D7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8281D7D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13184(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r11.u32);
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r10.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8281d87c
	if (ctx.cr6.eq) goto loc_8281D87C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eee58
	ctx.lr = 0x8281D828;
	sub_827EEE58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8281d860
	if (ctx.cr6.eq) goto loc_8281D860;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8281d850
	if (ctx.cr6.eq) goto loc_8281D850;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8281d848
	if (ctx.cr6.eq) goto loc_8281D848;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d868
	goto loc_8281D868;
loc_8281D848:
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x8281d868
	goto loc_8281D868;
loc_8281D850:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8281d868
	goto loc_8281D868;
loc_8281D860:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8281D868:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281d87c
	if (ctx.cr6.eq) goto loc_8281D87C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_8281D87C:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D894"))) PPC_WEAK_FUNC(sub_8281D894);
PPC_FUNC_IMPL(__imp__sub_8281D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D898"))) PPC_WEAK_FUNC(sub_8281D898);
PPC_FUNC_IMPL(__imp__sub_8281D898) {
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

__attribute__((alias("__imp__sub_8281D8B0"))) PPC_WEAK_FUNC(sub_8281D8B0);
PPC_FUNC_IMPL(__imp__sub_8281D8B0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281d8f8
	if (ctx.cr6.eq) goto loc_8281D8F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281d8f0
	if (ctx.cr6.eq) goto loc_8281D8F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281d8fc
	if (!ctx.cr6.eq) goto loc_8281D8FC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281d8fc
	goto loc_8281D8FC;
loc_8281D8F0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281d8fc
	goto loc_8281D8FC;
loc_8281D8F8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281D8FC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8281d928
	if (ctx.cr6.eq) goto loc_8281D928;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281d924
	if (ctx.cr6.eq) goto loc_8281D924;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8281d91c
	if (ctx.cr6.eq) goto loc_8281D91C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8281d928
	goto loc_8281D928;
loc_8281D91C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281d928
	goto loc_8281D928;
loc_8281D924:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8281D928:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D93C"))) PPC_WEAK_FUNC(sub_8281D93C);
PPC_FUNC_IMPL(__imp__sub_8281D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D940"))) PPC_WEAK_FUNC(sub_8281D940);
PPC_FUNC_IMPL(__imp__sub_8281D940) {
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

__attribute__((alias("__imp__sub_8281D958"))) PPC_WEAK_FUNC(sub_8281D958);
PPC_FUNC_IMPL(__imp__sub_8281D958) {
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

__attribute__((alias("__imp__sub_8281D970"))) PPC_WEAK_FUNC(sub_8281D970);
PPC_FUNC_IMPL(__imp__sub_8281D970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8281d9b8
	if (ctx.cr6.eq) goto loc_8281D9B8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281d9ac
	if (ctx.cr6.eq) goto loc_8281D9AC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281d9a0
	if (ctx.cr6.eq) goto loc_8281D9A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281D9A0:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281D9AC:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281D9B8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D9C4"))) PPC_WEAK_FUNC(sub_8281D9C4);
PPC_FUNC_IMPL(__imp__sub_8281D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281D9C8"))) PPC_WEAK_FUNC(sub_8281D9C8);
PPC_FUNC_IMPL(__imp__sub_8281D9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
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

__attribute__((alias("__imp__sub_8281D9E8"))) PPC_WEAK_FUNC(sub_8281D9E8);
PPC_FUNC_IMPL(__imp__sub_8281D9E8) {
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

__attribute__((alias("__imp__sub_8281DA00"))) PPC_WEAK_FUNC(sub_8281DA00);
PPC_FUNC_IMPL(__imp__sub_8281DA00) {
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

__attribute__((alias("__imp__sub_8281DA14"))) PPC_WEAK_FUNC(sub_8281DA14);
PPC_FUNC_IMPL(__imp__sub_8281DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281DA18"))) PPC_WEAK_FUNC(sub_8281DA18);
PPC_FUNC_IMPL(__imp__sub_8281DA18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_8281DA34"))) PPC_WEAK_FUNC(sub_8281DA34);
PPC_FUNC_IMPL(__imp__sub_8281DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281DA38"))) PPC_WEAK_FUNC(sub_8281DA38);
PPC_FUNC_IMPL(__imp__sub_8281DA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8281da7c
	if (!ctx.cr6.eq) goto loc_8281DA7C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281da78
	if (ctx.cr6.eq) goto loc_8281DA78;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281da78
	if (ctx.cr6.eq) goto loc_8281DA78;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8281da7c
	if (!ctx.cr6.eq) goto loc_8281DA7C;
loc_8281DA78:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8281DA7C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8281da8c
	if (!ctx.cr6.eq) goto loc_8281DA8C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8281DA8C:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r8,11
	ctx.r8.s64 = 11;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8281daa4
	if (ctx.cr6.lt) goto loc_8281DAA4;
	// cmpwi cr6,r10,160
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 160, ctx.xer);
	// blt cr6,0x8281daa8
	if (ctx.cr6.lt) goto loc_8281DAA8;
loc_8281DAA4:
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
loc_8281DAA8:
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8281DAB0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8281dac4
	if (ctx.cr6.lt) goto loc_8281DAC4;
	// cmpwi cr6,r10,160
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 160, ctx.xer);
	// blt cr6,0x8281dac8
	if (ctx.cr6.lt) goto loc_8281DAC8;
loc_8281DAC4:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8281DAC8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8281dab0
	if (!ctx.cr0.eq) goto loc_8281DAB0;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281DADC"))) PPC_WEAK_FUNC(sub_8281DADC);
PPC_FUNC_IMPL(__imp__sub_8281DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281DAE0"))) PPC_WEAK_FUNC(sub_8281DAE0);
PPC_FUNC_IMPL(__imp__sub_8281DAE0) {
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
	// beq cr6,0x8281db3c
	if (ctx.cr6.eq) goto loc_8281DB3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281db34
	if (ctx.cr6.eq) goto loc_8281DB34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281db40
	if (!ctx.cr6.eq) goto loc_8281DB40;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281db40
	goto loc_8281DB40;
loc_8281DB34:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281db40
	goto loc_8281DB40;
loc_8281DB3C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8281DB40:
	// lwz r10,320(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 320);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281db6c
	if (ctx.cr6.eq) goto loc_8281DB6C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281db64
	if (ctx.cr6.eq) goto loc_8281DB64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8281db70
	if (!ctx.cr6.eq) goto loc_8281DB70;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281db70
	goto loc_8281DB70;
loc_8281DB64:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8281db70
	goto loc_8281DB70;
loc_8281DB6C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8281DB70:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,320(r6)
	PPC_STORE_U32(ctx.r6.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281DB88"))) PPC_WEAK_FUNC(sub_8281DB88);
PPC_FUNC_IMPL(__imp__sub_8281DB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-5188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5188);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r8,r9,5
	ctx.r8.s64 = ctx.r9.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r7,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r6,r9,6
	ctx.r6.s64 = ctx.r9.s64 + 6;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r4,r9,7
	ctx.r4.s64 = ctx.r9.s64 + 7;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f13,r4,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,20(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r7,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f12,-30440(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -30440);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,28(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r9,r7,28
	ctx.r9.s64 = ctx.r7.s64 * 28;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r9,r5,28
	ctx.r9.s64 = ctx.r5.s64 * 28;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 * 28;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r9,r8,28
	ctx.r9.s64 = ctx.r8.s64 * 28;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mulli r5,r6,28
	ctx.r5.s64 = ctx.r6.s64 * 28;
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,28(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,16(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,20(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,24(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E01C"))) PPC_WEAK_FUNC(sub_8281E01C);
PPC_FUNC_IMPL(__imp__sub_8281E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E020"))) PPC_WEAK_FUNC(sub_8281E020);
PPC_FUNC_IMPL(__imp__sub_8281E020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8281E028;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r23,13192(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13192);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r22,13188(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r21,13180(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r20,13184(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r11.u32);
	// lwz r3,13980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13980);
	// stw r10,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r10.u32);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786820
	ctx.lr = 0x8281E080;
	sub_82786820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281e08c
	if (ctx.cr6.eq) goto loc_8281E08C;
	// stw r28,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r28.u32);
loc_8281E08C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13980);
	// lwz r28,332(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// bl 0x82786820
	ctx.lr = 0x8281E09C;
	sub_82786820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281e0a8
	if (ctx.cr6.eq) goto loc_8281E0A8;
	// stw r28,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r28.u32);
loc_8281E0A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13980);
	// lwz r28,540(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// bl 0x82786820
	ctx.lr = 0x8281E0B8;
	sub_82786820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281e0c4
	if (ctx.cr6.eq) goto loc_8281E0C4;
	// stw r28,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r28.u32);
loc_8281E0C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13980);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82786820
	ctx.lr = 0x8281E0D4;
	sub_82786820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281e0e0
	if (ctx.cr6.eq) goto loc_8281E0E0;
	// stw r28,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r28.u32);
loc_8281E0E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13980);
	// lwz r28,540(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// bl 0x82786820
	ctx.lr = 0x8281E0F0;
	sub_82786820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281e0fc
	if (ctx.cr6.eq) goto loc_8281E0FC;
	// stw r28,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r28.u32);
loc_8281E0FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13980);
	// lwz r31,540(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// bl 0x82786820
	ctx.lr = 0x8281E10C;
	sub_82786820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281e118
	if (ctx.cr6.eq) goto loc_8281E118;
	// stw r31,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r31.u32);
loc_8281E118:
	// stw r23,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281E130"))) PPC_WEAK_FUNC(sub_8281E130);
PPC_FUNC_IMPL(__imp__sub_8281E130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8281E138;
	__savegprlr_21(ctx, base);
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
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r23,13192(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r22,13188(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r21,13184(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// bl 0x82806538
	ctx.lr = 0x8281E18C;
	sub_82806538(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8281e1a4
	if (ctx.cr6.eq) goto loc_8281E1A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828064e0
	ctx.lr = 0x8281E19C;
	sub_828064E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8281e1a8
	if (!ctx.cr6.eq) goto loc_8281E1A8;
loc_8281E1A4:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8281E1A8:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// stw r23,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r23.u32);
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
	// stw r21,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r21.u32);
	// stw r22,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281E1C4"))) PPC_WEAK_FUNC(sub_8281E1C4);
PPC_FUNC_IMPL(__imp__sub_8281E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E1C8"))) PPC_WEAK_FUNC(sub_8281E1C8);
PPC_FUNC_IMPL(__imp__sub_8281E1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,13980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13980);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r6,332(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,540(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 540);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r3,540(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 540);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// lwz r10,540(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 540);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E210"))) PPC_WEAK_FUNC(sub_8281E210);
PPC_FUNC_IMPL(__imp__sub_8281E210) {
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
	// lwz r11,320(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 320);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281e260
	if (ctx.cr6.eq) goto loc_8281E260;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281e258
	if (ctx.cr6.eq) goto loc_8281E258;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281e250
	if (ctx.cr6.eq) goto loc_8281E250;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281e264
	goto loc_8281E264;
loc_8281E250:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281e264
	goto loc_8281E264;
loc_8281E258:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8281e264
	goto loc_8281E264;
loc_8281E260:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8281E264:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281e294
	if (ctx.cr6.eq) goto loc_8281E294;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281e28c
	if (ctx.cr6.eq) goto loc_8281E28C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281e298
	if (!ctx.cr6.eq) goto loc_8281E298;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281e298
	goto loc_8281E298;
loc_8281E28C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281e298
	goto loc_8281E298;
loc_8281E294:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8281E298:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r10,13604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13604);
	// lwz r3,15652(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x827b2b20
	sub_827B2B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281E2B4"))) PPC_WEAK_FUNC(sub_8281E2B4);
PPC_FUNC_IMPL(__imp__sub_8281E2B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E2B8"))) PPC_WEAK_FUNC(sub_8281E2B8);
PPC_FUNC_IMPL(__imp__sub_8281E2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x8281e2f0
	if (!ctx.cr6.gt) goto loc_8281E2F0;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// li r10,300
	ctx.r10.s64 = 300;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// blr 
	return;
loc_8281E2F0:
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// li r10,300
	ctx.r10.s64 = 300;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E304"))) PPC_WEAK_FUNC(sub_8281E304);
PPC_FUNC_IMPL(__imp__sub_8281E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E308"))) PPC_WEAK_FUNC(sub_8281E308);
PPC_FUNC_IMPL(__imp__sub_8281E308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x8281e340
	if (!ctx.cr6.gt) goto loc_8281E340;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// li r10,296
	ctx.r10.s64 = 296;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// blr 
	return;
loc_8281E340:
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// li r10,296
	ctx.r10.s64 = 296;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E354"))) PPC_WEAK_FUNC(sub_8281E354);
PPC_FUNC_IMPL(__imp__sub_8281E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E358"))) PPC_WEAK_FUNC(sub_8281E358);
PPC_FUNC_IMPL(__imp__sub_8281E358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,308(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8281e37c
	if (!ctx.cr6.eq) goto loc_8281E37C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281E37C:
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E388"))) PPC_WEAK_FUNC(sub_8281E388);
PPC_FUNC_IMPL(__imp__sub_8281E388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,308(r9)
	PPC_STORE_U32(ctx.r9.u32 + 308, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E39C"))) PPC_WEAK_FUNC(sub_8281E39C);
PPC_FUNC_IMPL(__imp__sub_8281E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E3A0"))) PPC_WEAK_FUNC(sub_8281E3A0);
PPC_FUNC_IMPL(__imp__sub_8281E3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E3CC"))) PPC_WEAK_FUNC(sub_8281E3CC);
PPC_FUNC_IMPL(__imp__sub_8281E3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E3D0"))) PPC_WEAK_FUNC(sub_8281E3D0);
PPC_FUNC_IMPL(__imp__sub_8281E3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 324, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E3E4"))) PPC_WEAK_FUNC(sub_8281E3E4);
PPC_FUNC_IMPL(__imp__sub_8281E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E3E8"))) PPC_WEAK_FUNC(sub_8281E3E8);
PPC_FUNC_IMPL(__imp__sub_8281E3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8281E3F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8281e54c
	if (!ctx.cr6.eq) goto loc_8281E54C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8281e464
	if (ctx.cr6.eq) goto loc_8281E464;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281e45c
	if (ctx.cr6.eq) goto loc_8281E45C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281e454
	if (ctx.cr6.eq) goto loc_8281E454;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281e468
	goto loc_8281E468;
loc_8281E454:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8281e468
	goto loc_8281E468;
loc_8281E45C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281e468
	goto loc_8281E468;
loc_8281E464:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8281E468:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8281e564
	if (ctx.cr6.eq) goto loc_8281E564;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281e498
	if (ctx.cr6.eq) goto loc_8281E498;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281e49c
	if (ctx.cr6.eq) goto loc_8281E49C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281e490
	if (ctx.cr6.eq) goto loc_8281E490;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8281e49c
	goto loc_8281E49C;
loc_8281E490:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8281e49c
	goto loc_8281E49C;
loc_8281E498:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8281E49C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x8281E4A4;
	sub_82804410(ctx, base);
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// bl 0x82bf02b8
	ctx.lr = 0x8281E4D0;
	sub_82BF02B8(ctx, base);
	// fmuls f5,f7,f7
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,137
	ctx.r11.s64 = ctx.r11.s64 + 137;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f3,f10,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmuls f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfsx f1,r10,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8281e510
	if (ctx.cr6.lt) goto loc_8281E510;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_8281E510:
	// lfs f0,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f9,564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-4008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4008);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fmuls f31,f6,f0
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// b 0x8281e564
	goto loc_8281E564;
loc_8281E54C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_8281E564:
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281e598
	if (ctx.cr6.eq) goto loc_8281E598;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281e590
	if (ctx.cr6.eq) goto loc_8281E590;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8281e588
	if (ctx.cr6.eq) goto loc_8281E588;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8281e59c
	goto loc_8281E59C;
loc_8281E588:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8281e59c
	goto loc_8281E59C;
loc_8281E590:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281e59c
	goto loc_8281E59C;
loc_8281E598:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8281E59C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281e5f0
	if (ctx.cr6.eq) goto loc_8281E5F0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281e5cc
	if (ctx.cr6.eq) goto loc_8281E5CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281e5d0
	if (ctx.cr6.eq) goto loc_8281E5D0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8281e5c4
	if (ctx.cr6.eq) goto loc_8281E5C4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8281e5d0
	goto loc_8281E5D0;
loc_8281E5C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8281e5d0
	goto loc_8281E5D0;
loc_8281E5CC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8281E5D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x8281E5D8;
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
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f13,572(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f12,576(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
loc_8281E5F0:
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281E600"))) PPC_WEAK_FUNC(sub_8281E600);
PPC_FUNC_IMPL(__imp__sub_8281E600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E604"))) PPC_WEAK_FUNC(sub_8281E604);
PPC_FUNC_IMPL(__imp__sub_8281E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E608"))) PPC_WEAK_FUNC(sub_8281E608);
PPC_FUNC_IMPL(__imp__sub_8281E608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,284
	ctx.r10.s64 = 18612224;
	// lis r9,284
	ctx.r9.s64 = 18612224;
	// ori r8,r10,825
	ctx.r8.u64 = ctx.r10.u64 | 825;
	// ori r7,r9,826
	ctx.r7.u64 = ctx.r9.u64 | 826;
	// lwz r11,13604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// stw r8,16544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16544, ctx.r8.u32);
	// stw r7,16548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16548, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E62C"))) PPC_WEAK_FUNC(sub_8281E62C);
PPC_FUNC_IMPL(__imp__sub_8281E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E630"))) PPC_WEAK_FUNC(sub_8281E630);
PPC_FUNC_IMPL(__imp__sub_8281E630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 260, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E648"))) PPC_WEAK_FUNC(sub_8281E648);
PPC_FUNC_IMPL(__imp__sub_8281E648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f0,1068(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1068, temp.u32);
	// stw r4,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r4.u32);
	// bne cr6,0x8281e674
	if (!ctx.cr6.eq) goto loc_8281E674;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8281E674:
	// stw r10,2892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2892, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E67C"))) PPC_WEAK_FUNC(sub_8281E67C);
PPC_FUNC_IMPL(__imp__sub_8281E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E680"))) PPC_WEAK_FUNC(sub_8281E680);
PPC_FUNC_IMPL(__imp__sub_8281E680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8281e6bc
	if (ctx.cr6.eq) goto loc_8281E6BC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281e6ac
	if (ctx.cr6.eq) goto loc_8281E6AC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8281e6c4
	if (!ctx.cr6.eq) goto loc_8281E6C4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281e6c4
	goto loc_8281E6C4;
loc_8281E6AC:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8281e6c4
	goto loc_8281E6C4;
loc_8281E6BC:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r4,-29532(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8281E6C4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fsel f13,f1,f1,f0
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,2708(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2708, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E6F0"))) PPC_WEAK_FUNC(sub_8281E6F0);
PPC_FUNC_IMPL(__imp__sub_8281E6F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2904);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8281e724
	if (ctx.cr6.lt) goto loc_8281E724;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x8281e724
	if (!ctx.cr6.lt) goto loc_8281E724;
	// lwz r11,2896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8281e724
	if (ctx.cr6.lt) goto loc_8281E724;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8281e730
	if (ctx.cr6.lt) goto loc_8281E730;
loc_8281E724:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281E730:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E738"))) PPC_WEAK_FUNC(sub_8281E738);
PPC_FUNC_IMPL(__imp__sub_8281E738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2904(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2904);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8281e75c
	if (!ctx.cr6.eq) goto loc_8281E75C;
	// lwz r11,2896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8281e768
	if (ctx.cr6.eq) goto loc_8281E768;
loc_8281E75C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281E768:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E774"))) PPC_WEAK_FUNC(sub_8281E774);
PPC_FUNC_IMPL(__imp__sub_8281E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E778"))) PPC_WEAK_FUNC(sub_8281E778);
PPC_FUNC_IMPL(__imp__sub_8281E778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2904);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8281e7ac
	if (ctx.cr6.lt) goto loc_8281E7AC;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x8281e7ac
	if (!ctx.cr6.lt) goto loc_8281E7AC;
	// lwz r9,2896(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8281e7ac
	if (ctx.cr6.lt) goto loc_8281E7AC;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8281e7b8
	if (ctx.cr6.lt) goto loc_8281E7B8;
loc_8281E7AC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281E7B8:
	// lwz r8,2724(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2724);
	// addi r11,r11,2720
	ctx.r11.s64 = ctx.r11.s64 + 2720;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E7DC"))) PPC_WEAK_FUNC(sub_8281E7DC);
PPC_FUNC_IMPL(__imp__sub_8281E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E7E0"))) PPC_WEAK_FUNC(sub_8281E7E0);
PPC_FUNC_IMPL(__imp__sub_8281E7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2904);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8281e814
	if (ctx.cr6.lt) goto loc_8281E814;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x8281e814
	if (!ctx.cr6.lt) goto loc_8281E814;
	// lwz r9,2896(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8281e814
	if (ctx.cr6.lt) goto loc_8281E814;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8281e820
	if (ctx.cr6.lt) goto loc_8281E820;
loc_8281E814:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281E820:
	// lwz r8,2544(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2544);
	// addi r11,r11,2540
	ctx.r11.s64 = ctx.r11.s64 + 2540;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E844"))) PPC_WEAK_FUNC(sub_8281E844);
PPC_FUNC_IMPL(__imp__sub_8281E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E848"))) PPC_WEAK_FUNC(sub_8281E848);
PPC_FUNC_IMPL(__imp__sub_8281E848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2904);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8281e87c
	if (ctx.cr6.lt) goto loc_8281E87C;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x8281e87c
	if (!ctx.cr6.lt) goto loc_8281E87C;
	// lwz r11,2896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8281e87c
	if (ctx.cr6.lt) goto loc_8281E87C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8281e888
	if (ctx.cr6.lt) goto loc_8281E888;
loc_8281E87C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281E888:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E894"))) PPC_WEAK_FUNC(sub_8281E894);
PPC_FUNC_IMPL(__imp__sub_8281E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E898"))) PPC_WEAK_FUNC(sub_8281E898);
PPC_FUNC_IMPL(__imp__sub_8281E898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2904(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2904);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8281e8bc
	if (!ctx.cr6.eq) goto loc_8281E8BC;
	// lwz r11,2896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8281e8c8
	if (ctx.cr6.eq) goto loc_8281E8C8;
loc_8281E8BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281E8C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E8D4"))) PPC_WEAK_FUNC(sub_8281E8D4);
PPC_FUNC_IMPL(__imp__sub_8281E8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E8D8"))) PPC_WEAK_FUNC(sub_8281E8D8);
PPC_FUNC_IMPL(__imp__sub_8281E8D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,2720
	ctx.r11.s64 = ctx.r11.s64 + 2720;
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
}

__attribute__((alias("__imp__sub_8281E908"))) PPC_WEAK_FUNC(sub_8281E908);
PPC_FUNC_IMPL(__imp__sub_8281E908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,2916
	ctx.r11.s64 = ctx.r11.s64 + 2916;
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
}

__attribute__((alias("__imp__sub_8281E938"))) PPC_WEAK_FUNC(sub_8281E938);
PPC_FUNC_IMPL(__imp__sub_8281E938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,2540
	ctx.r11.s64 = ctx.r11.s64 + 2540;
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
}

__attribute__((alias("__imp__sub_8281E968"))) PPC_WEAK_FUNC(sub_8281E968);
PPC_FUNC_IMPL(__imp__sub_8281E968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
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
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281E998"))) PPC_WEAK_FUNC(sub_8281E998);
PPC_FUNC_IMPL(__imp__sub_8281E998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8281e9b4
	if (ctx.cr6.eq) goto loc_8281E9B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8281E9B4:
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
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

__attribute__((alias("__imp__sub_8281E9DC"))) PPC_WEAK_FUNC(sub_8281E9DC);
PPC_FUNC_IMPL(__imp__sub_8281E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281E9E0"))) PPC_WEAK_FUNC(sub_8281E9E0);
PPC_FUNC_IMPL(__imp__sub_8281E9E0) {
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
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8281ea14
	if (ctx.cr6.eq) goto loc_8281EA14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8281EA14:
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8281ea3c
	if (ctx.cr6.eq) goto loc_8281EA3C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8281e7e0
	ctx.lr = 0x8281EA30;
	sub_8281E7E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8281ea44
	if (ctx.cr6.eq) goto loc_8281EA44;
loc_8281EA3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8281ea48
	goto loc_8281EA48;
loc_8281EA44:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281EA48:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8281EA64"))) PPC_WEAK_FUNC(sub_8281EA64);
PPC_FUNC_IMPL(__imp__sub_8281EA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EA68"))) PPC_WEAK_FUNC(sub_8281EA68);
PPC_FUNC_IMPL(__imp__sub_8281EA68) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EA74"))) PPC_WEAK_FUNC(sub_8281EA74);
PPC_FUNC_IMPL(__imp__sub_8281EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EA78"))) PPC_WEAK_FUNC(sub_8281EA78);
PPC_FUNC_IMPL(__imp__sub_8281EA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EA7C"))) PPC_WEAK_FUNC(sub_8281EA7C);
PPC_FUNC_IMPL(__imp__sub_8281EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EA80"))) PPC_WEAK_FUNC(sub_8281EA80);
PPC_FUNC_IMPL(__imp__sub_8281EA80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EA84"))) PPC_WEAK_FUNC(sub_8281EA84);
PPC_FUNC_IMPL(__imp__sub_8281EA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EA88"))) PPC_WEAK_FUNC(sub_8281EA88);
PPC_FUNC_IMPL(__imp__sub_8281EA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EA8C"))) PPC_WEAK_FUNC(sub_8281EA8C);
PPC_FUNC_IMPL(__imp__sub_8281EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EA90"))) PPC_WEAK_FUNC(sub_8281EA90);
PPC_FUNC_IMPL(__imp__sub_8281EA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 568, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EAA8"))) PPC_WEAK_FUNC(sub_8281EAA8);
PPC_FUNC_IMPL(__imp__sub_8281EAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,55
	ctx.r10.s64 = ctx.r5.s64 + 55;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EACC"))) PPC_WEAK_FUNC(sub_8281EACC);
PPC_FUNC_IMPL(__imp__sub_8281EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EAD0"))) PPC_WEAK_FUNC(sub_8281EAD0);
PPC_FUNC_IMPL(__imp__sub_8281EAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,67
	ctx.r10.s64 = ctx.r5.s64 + 67;
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

__attribute__((alias("__imp__sub_8281EAF0"))) PPC_WEAK_FUNC(sub_8281EAF0);
PPC_FUNC_IMPL(__imp__sub_8281EAF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r8,r11,2540
	ctx.r8.s64 = ctx.r11.s64 + 2540;
	// lwz r6,2544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2544);
loc_8281EB08:
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
loc_8281EB10:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8281eb4c
	if (ctx.cr6.eq) goto loc_8281EB4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8281eb10
	if (ctx.cr6.lt) goto loc_8281EB10;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// blt cr6,0x8281eb08
	if (ctx.cr6.lt) goto loc_8281EB08;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281EB4C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EB54"))) PPC_WEAK_FUNC(sub_8281EB54);
PPC_FUNC_IMPL(__imp__sub_8281EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EB58"))) PPC_WEAK_FUNC(sub_8281EB58);
PPC_FUNC_IMPL(__imp__sub_8281EB58) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8281ebac
	if (ctx.cr6.lt) goto loc_8281EBAC;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bge cr6,0x8281ebac
	if (!ctx.cr6.lt) goto loc_8281EBAC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8281eba4
	if (ctx.cr6.lt) goto loc_8281EBA4;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bge cr6,0x8281eba4
	if (!ctx.cr6.lt) goto loc_8281EBA4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,67
	ctx.r10.s64 = ctx.r5.s64 + 67;
	// addi r9,r6,67
	ctx.r9.s64 = ctx.r6.s64 + 67;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8281ebac
	if (ctx.cr6.lt) goto loc_8281EBAC;
loc_8281EBA4:
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8281EBAC:
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EBB4"))) PPC_WEAK_FUNC(sub_8281EBB4);
PPC_FUNC_IMPL(__imp__sub_8281EBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EBB8"))) PPC_WEAK_FUNC(sub_8281EBB8);
PPC_FUNC_IMPL(__imp__sub_8281EBB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r10,r10,2540
	ctx.r10.s64 = ctx.r10.s64 + 2540;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
loc_8281EBD4:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8281ebfc
	if (ctx.cr6.eq) goto loc_8281EBFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8281ebd4
	if (ctx.cr6.lt) goto loc_8281EBD4;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8281EBFC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EC04"))) PPC_WEAK_FUNC(sub_8281EC04);
PPC_FUNC_IMPL(__imp__sub_8281EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EC08"))) PPC_WEAK_FUNC(sub_8281EC08);
PPC_FUNC_IMPL(__imp__sub_8281EC08) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8281ec88
	if (ctx.cr6.eq) goto loc_8281EC88;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281ec88
	if (ctx.cr6.eq) goto loc_8281EC88;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281ec7c
	if (ctx.cr6.eq) goto loc_8281EC7C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281ec7c
	if (ctx.cr6.eq) goto loc_8281EC7C;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8281ec70
	if (ctx.cr6.eq) goto loc_8281EC70;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8281ec64
	if (ctx.cr6.eq) goto loc_8281EC64;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8281ec64
	if (ctx.cr6.eq) goto loc_8281EC64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281ec64
	if (ctx.cr6.eq) goto loc_8281EC64;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8281ec64
	if (ctx.cr6.eq) goto loc_8281EC64;
	// addi r11,r5,-9
	ctx.r11.s64 = ctx.r5.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281EC64:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281EC70:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281EC7C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281EC88:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EC94"))) PPC_WEAK_FUNC(sub_8281EC94);
PPC_FUNC_IMPL(__imp__sub_8281EC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EC98"))) PPC_WEAK_FUNC(sub_8281EC98);
PPC_FUNC_IMPL(__imp__sub_8281EC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r7,r10,2916
	ctx.r7.s64 = ctx.r10.s64 + 2916;
	// lwz r8,2920(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2920);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// mullw r3,r8,r5
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
loc_8281ECBC:
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8281ecf8
	if (!ctx.cr6.eq) goto loc_8281ECF8;
	// lwz r8,576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// addi r9,r10,572
	ctx.r9.s64 = ctx.r10.s64 + 572;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8281ed08
	if (!ctx.cr6.gt) goto loc_8281ED08;
loc_8281ECF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8281ecbc
	if (ctx.cr6.lt) goto loc_8281ECBC;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8281ED08:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281ED10"))) PPC_WEAK_FUNC(sub_8281ED10);
PPC_FUNC_IMPL(__imp__sub_8281ED10) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13180);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r31,13188(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r5,24(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281ed78
	if (ctx.cr6.eq) goto loc_8281ED78;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281ed70
	if (ctx.cr6.eq) goto loc_8281ED70;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281ed68
	if (ctx.cr6.eq) goto loc_8281ED68;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281ed7c
	goto loc_8281ED7C;
loc_8281ED68:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8281ed7c
	goto loc_8281ED7C;
loc_8281ED70:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281ed7c
	goto loc_8281ED7C;
loc_8281ED78:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8281ED7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281ee20
	if (ctx.cr6.eq) goto loc_8281EE20;
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8281ee20
	if (!ctx.cr6.eq) goto loc_8281EE20;
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// li r3,5
	ctx.r3.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281ED9C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281edcc
	if (ctx.cr6.eq) goto loc_8281EDCC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281edc4
	if (ctx.cr6.eq) goto loc_8281EDC4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281edbc
	if (ctx.cr6.eq) goto loc_8281EDBC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8281edd0
	goto loc_8281EDD0;
loc_8281EDBC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8281edd0
	goto loc_8281EDD0;
loc_8281EDC4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281edd0
	goto loc_8281EDD0;
loc_8281EDCC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8281EDD0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281edfc
	if (ctx.cr6.eq) goto loc_8281EDFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281edf4
	if (ctx.cr6.eq) goto loc_8281EDF4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281ee00
	if (!ctx.cr6.eq) goto loc_8281EE00;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8281ee00
	goto loc_8281EE00;
loc_8281EDF4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281ee00
	goto loc_8281EE00;
loc_8281EDFC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8281EE00:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281ee14
	if (!ctx.cr6.eq) goto loc_8281EE14;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8281EE14:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8281ed9c
	if (!ctx.cr0.eq) goto loc_8281ED9C;
loc_8281EE20:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EE2C"))) PPC_WEAK_FUNC(sub_8281EE2C);
PPC_FUNC_IMPL(__imp__sub_8281EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EE30"))) PPC_WEAK_FUNC(sub_8281EE30);
PPC_FUNC_IMPL(__imp__sub_8281EE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,9104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9104);
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EE54"))) PPC_WEAK_FUNC(sub_8281EE54);
PPC_FUNC_IMPL(__imp__sub_8281EE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EE58"))) PPC_WEAK_FUNC(sub_8281EE58);
PPC_FUNC_IMPL(__imp__sub_8281EE58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,1758
	ctx.r10.s64 = ctx.r5.s64 + 1758;
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

__attribute__((alias("__imp__sub_8281EE78"))) PPC_WEAK_FUNC(sub_8281EE78);
PPC_FUNC_IMPL(__imp__sub_8281EE78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281EE7C"))) PPC_WEAK_FUNC(sub_8281EE7C);
PPC_FUNC_IMPL(__imp__sub_8281EE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281EE80"))) PPC_WEAK_FUNC(sub_8281EE80);
PPC_FUNC_IMPL(__imp__sub_8281EE80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,13188(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r6,24(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281eee4
	if (ctx.cr6.eq) goto loc_8281EEE4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281eedc
	if (ctx.cr6.eq) goto loc_8281EEDC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281eed4
	if (ctx.cr6.eq) goto loc_8281EED4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281eee8
	goto loc_8281EEE8;
loc_8281EED4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281eee8
	goto loc_8281EEE8;
loc_8281EEDC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281eee8
	goto loc_8281EEE8;
loc_8281EEE4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281EEE8:
	// lwz r11,2840(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2840);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281ef14
	if (ctx.cr6.eq) goto loc_8281EF14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281ef0c
	if (ctx.cr6.eq) goto loc_8281EF0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281ef18
	if (!ctx.cr6.eq) goto loc_8281EF18;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281ef18
	goto loc_8281EF18;
loc_8281EF0C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281ef18
	goto loc_8281EF18;
loc_8281EF14:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281EF18:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281ef30
	if (!ctx.cr6.eq) goto loc_8281EF30;
	// stw r4,2840(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2840, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281EF30:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281ef60
	if (ctx.cr6.eq) goto loc_8281EF60;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281ef58
	if (ctx.cr6.eq) goto loc_8281EF58;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281ef50
	if (ctx.cr6.eq) goto loc_8281EF50;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281ef64
	goto loc_8281EF64;
loc_8281EF50:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281ef64
	goto loc_8281EF64;
loc_8281EF58:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281ef64
	goto loc_8281EF64;
loc_8281EF60:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281EF64:
	// lwz r11,2844(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2844);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281ef90
	if (ctx.cr6.eq) goto loc_8281EF90;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281ef88
	if (ctx.cr6.eq) goto loc_8281EF88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281ef94
	if (!ctx.cr6.eq) goto loc_8281EF94;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281ef94
	goto loc_8281EF94;
loc_8281EF88:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281ef94
	goto loc_8281EF94;
loc_8281EF90:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281EF94:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281efa8
	if (!ctx.cr6.eq) goto loc_8281EFA8;
	// stw r4,2844(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2844, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281EFA8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281efd8
	if (ctx.cr6.eq) goto loc_8281EFD8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281efd0
	if (ctx.cr6.eq) goto loc_8281EFD0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281efc8
	if (ctx.cr6.eq) goto loc_8281EFC8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281efdc
	goto loc_8281EFDC;
loc_8281EFC8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281efdc
	goto loc_8281EFDC;
loc_8281EFD0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281efdc
	goto loc_8281EFDC;
loc_8281EFD8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281EFDC:
	// lwz r11,2848(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2848);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281f008
	if (ctx.cr6.eq) goto loc_8281F008;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281f000
	if (ctx.cr6.eq) goto loc_8281F000;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281f00c
	if (!ctx.cr6.eq) goto loc_8281F00C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281f00c
	goto loc_8281F00C;
loc_8281F000:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281f00c
	goto loc_8281F00C;
loc_8281F008:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281F00C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281f020
	if (!ctx.cr6.eq) goto loc_8281F020;
	// stw r4,2848(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2848, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281F020:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281f050
	if (ctx.cr6.eq) goto loc_8281F050;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281f048
	if (ctx.cr6.eq) goto loc_8281F048;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281f040
	if (ctx.cr6.eq) goto loc_8281F040;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281f054
	goto loc_8281F054;
loc_8281F040:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281f054
	goto loc_8281F054;
loc_8281F048:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281f054
	goto loc_8281F054;
loc_8281F050:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281F054:
	// lwz r11,2852(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281f080
	if (ctx.cr6.eq) goto loc_8281F080;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281f078
	if (ctx.cr6.eq) goto loc_8281F078;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281f084
	if (!ctx.cr6.eq) goto loc_8281F084;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281f084
	goto loc_8281F084;
loc_8281F078:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281f084
	goto loc_8281F084;
loc_8281F080:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281F084:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281f098
	if (!ctx.cr6.eq) goto loc_8281F098;
	// stw r4,2852(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2852, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281F098:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281f0c8
	if (ctx.cr6.eq) goto loc_8281F0C8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281f0c0
	if (ctx.cr6.eq) goto loc_8281F0C0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281f0b8
	if (ctx.cr6.eq) goto loc_8281F0B8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281f0cc
	goto loc_8281F0CC;
loc_8281F0B8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281f0cc
	goto loc_8281F0CC;
loc_8281F0C0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281f0cc
	goto loc_8281F0CC;
loc_8281F0C8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281F0CC:
	// lwz r11,7020(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7020);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281f0f8
	if (ctx.cr6.eq) goto loc_8281F0F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281f0f0
	if (ctx.cr6.eq) goto loc_8281F0F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281f0fc
	if (!ctx.cr6.eq) goto loc_8281F0FC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281f0fc
	goto loc_8281F0FC;
loc_8281F0F0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281f0fc
	goto loc_8281F0FC;
loc_8281F0F8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281F0FC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281f110
	if (!ctx.cr6.eq) goto loc_8281F110;
	// stw r4,7020(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7020, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281F110:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281f140
	if (ctx.cr6.eq) goto loc_8281F140;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281f138
	if (ctx.cr6.eq) goto loc_8281F138;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281f130
	if (ctx.cr6.eq) goto loc_8281F130;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281f144
	goto loc_8281F144;
loc_8281F130:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281f144
	goto loc_8281F144;
loc_8281F138:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281f144
	goto loc_8281F144;
loc_8281F140:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281F144:
	// lwz r11,9204(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281f170
	if (ctx.cr6.eq) goto loc_8281F170;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281f168
	if (ctx.cr6.eq) goto loc_8281F168;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281f174
	if (!ctx.cr6.eq) goto loc_8281F174;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281f174
	goto loc_8281F174;
loc_8281F168:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281f174
	goto loc_8281F174;
loc_8281F170:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281F174:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281f188
	if (!ctx.cr6.eq) goto loc_8281F188;
	// stw r4,9204(r5)
	PPC_STORE_U32(ctx.r5.u32 + 9204, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281F188:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281f1b8
	if (ctx.cr6.eq) goto loc_8281F1B8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281f1b0
	if (ctx.cr6.eq) goto loc_8281F1B0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281f1a8
	if (ctx.cr6.eq) goto loc_8281F1A8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281f1bc
	goto loc_8281F1BC;
loc_8281F1A8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281f1bc
	goto loc_8281F1BC;
loc_8281F1B0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281f1bc
	goto loc_8281F1BC;
loc_8281F1B8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281F1BC:
	// lwz r11,7956(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281f1e8
	if (ctx.cr6.eq) goto loc_8281F1E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281f1e0
	if (ctx.cr6.eq) goto loc_8281F1E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281f1ec
	if (!ctx.cr6.eq) goto loc_8281F1EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281f1ec
	goto loc_8281F1EC;
loc_8281F1E0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281f1ec
	goto loc_8281F1EC;
loc_8281F1E8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281F1EC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281f200
	if (!ctx.cr6.eq) goto loc_8281F200;
	// stw r4,7956(r5)
	PPC_STORE_U32(ctx.r5.u32 + 7956, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281F200:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281f230
	if (ctx.cr6.eq) goto loc_8281F230;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281f228
	if (ctx.cr6.eq) goto loc_8281F228;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281f220
	if (ctx.cr6.eq) goto loc_8281F220;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281f234
	goto loc_8281F234;
loc_8281F220:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281f234
	goto loc_8281F234;
loc_8281F228:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281f234
	goto loc_8281F234;
loc_8281F230:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8281F234:
	// lwz r11,4196(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4196);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281f260
	if (ctx.cr6.eq) goto loc_8281F260;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281f258
	if (ctx.cr6.eq) goto loc_8281F258;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281f264
	if (!ctx.cr6.eq) goto loc_8281F264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281f264
	goto loc_8281F264;
loc_8281F258:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281f264
	goto loc_8281F264;
loc_8281F260:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8281F264:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,4196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4196, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F278"))) PPC_WEAK_FUNC(sub_8281F278);
PPC_FUNC_IMPL(__imp__sub_8281F278) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281f2a8
	if (ctx.cr6.eq) goto loc_8281F2A8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281f29c
	if (ctx.cr6.eq) goto loc_8281F29C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8281f2a8
	if (!ctx.cr6.eq) goto loc_8281F2A8;
	// li r11,2092
	ctx.r11.s64 = 2092;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F29C:
	// li r11,25513
	ctx.r11.s64 = 25513;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F2A8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F2B4"))) PPC_WEAK_FUNC(sub_8281F2B4);
PPC_FUNC_IMPL(__imp__sub_8281F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F2B8"))) PPC_WEAK_FUNC(sub_8281F2B8);
PPC_FUNC_IMPL(__imp__sub_8281F2B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281f2f4
	if (ctx.cr6.eq) goto loc_8281F2F4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281f2e8
	if (ctx.cr6.eq) goto loc_8281F2E8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281f2dc
	if (ctx.cr6.eq) goto loc_8281F2DC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F2DC:
	// li r11,2081
	ctx.r11.s64 = 2081;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F2E8:
	// li r11,25390
	ctx.r11.s64 = 25390;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F2F4:
	// li r11,2094
	ctx.r11.s64 = 2094;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F300"))) PPC_WEAK_FUNC(sub_8281F300);
PPC_FUNC_IMPL(__imp__sub_8281F300) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281f33c
	if (ctx.cr6.eq) goto loc_8281F33C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281f330
	if (ctx.cr6.eq) goto loc_8281F330;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281f324
	if (ctx.cr6.eq) goto loc_8281F324;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F324:
	// li r11,24940
	ctx.r11.s64 = 24940;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F330:
	// li r11,25512
	ctx.r11.s64 = 25512;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F33C:
	// li r11,2103
	ctx.r11.s64 = 2103;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F348"))) PPC_WEAK_FUNC(sub_8281F348);
PPC_FUNC_IMPL(__imp__sub_8281F348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,13434
	ctx.r11.s64 = ctx.r11.s64 + 13434;
	// beq cr6,0x8281f430
	if (ctx.cr6.eq) goto loc_8281F430;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281f420
	if (ctx.cr6.eq) goto loc_8281F420;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281f410
	if (ctx.cr6.eq) goto loc_8281F410;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281f400
	if (ctx.cr6.eq) goto loc_8281F400;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281f3f0
	if (ctx.cr6.eq) goto loc_8281F3F0;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8281f3e0
	if (ctx.cr6.eq) goto loc_8281F3E0;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8281f3d0
	if (ctx.cr6.eq) goto loc_8281F3D0;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8281f3c0
	if (ctx.cr6.eq) goto loc_8281F3C0;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8281f3b0
	if (ctx.cr6.eq) goto loc_8281F3B0;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x8281f438
	if (!ctx.cr6.eq) goto loc_8281F438;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24712
	ctx.r11.s64 = ctx.r11.s64 + 24712;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F3B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24704
	ctx.r11.s64 = ctx.r11.s64 + 24704;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F3C0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24696
	ctx.r11.s64 = ctx.r11.s64 + 24696;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F3D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F3E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24680
	ctx.r11.s64 = ctx.r11.s64 + 24680;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F3F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24672
	ctx.r11.s64 = ctx.r11.s64 + 24672;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F400:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24664
	ctx.r11.s64 = ctx.r11.s64 + 24664;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F410:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24656
	ctx.r11.s64 = ctx.r11.s64 + 24656;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F420:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24648
	ctx.r11.s64 = ctx.r11.s64 + 24648;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F430:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24640
	ctx.r11.s64 = ctx.r11.s64 + 24640;
loc_8281F438:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F440"))) PPC_WEAK_FUNC(sub_8281F440);
PPC_FUNC_IMPL(__imp__sub_8281F440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,13434
	ctx.r11.s64 = ctx.r11.s64 + 13434;
	// beq cr6,0x8281f528
	if (ctx.cr6.eq) goto loc_8281F528;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281f518
	if (ctx.cr6.eq) goto loc_8281F518;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281f508
	if (ctx.cr6.eq) goto loc_8281F508;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281f4f8
	if (ctx.cr6.eq) goto loc_8281F4F8;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281f4e8
	if (ctx.cr6.eq) goto loc_8281F4E8;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8281f4d8
	if (ctx.cr6.eq) goto loc_8281F4D8;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8281f4c8
	if (ctx.cr6.eq) goto loc_8281F4C8;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8281f4b8
	if (ctx.cr6.eq) goto loc_8281F4B8;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8281f4a8
	if (ctx.cr6.eq) goto loc_8281F4A8;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x8281f530
	if (!ctx.cr6.eq) goto loc_8281F530;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24624
	ctx.r11.s64 = ctx.r11.s64 + 24624;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F4A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24608
	ctx.r11.s64 = ctx.r11.s64 + 24608;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F4B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24592
	ctx.r11.s64 = ctx.r11.s64 + 24592;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F4C8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24576
	ctx.r11.s64 = ctx.r11.s64 + 24576;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F4D8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24560
	ctx.r11.s64 = ctx.r11.s64 + 24560;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F4E8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24544
	ctx.r11.s64 = ctx.r11.s64 + 24544;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F4F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24528
	ctx.r11.s64 = ctx.r11.s64 + 24528;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F508:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24512
	ctx.r11.s64 = ctx.r11.s64 + 24512;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F518:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24496
	ctx.r11.s64 = ctx.r11.s64 + 24496;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F528:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24480
	ctx.r11.s64 = ctx.r11.s64 + 24480;
loc_8281F530:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F538"))) PPC_WEAK_FUNC(sub_8281F538);
PPC_FUNC_IMPL(__imp__sub_8281F538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r6,r6,-16764
	ctx.r6.s64 = ctx.r6.s64 + -16764;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r8,7280
	ctx.r11.s64 = ctx.r8.s64 + 7280;
	// stw r10,1952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1952, ctx.r10.u32);
	// stw r10,5292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5292, ctx.r10.u32);
loc_8281F564:
	// stw r10,-3852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3852, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r10,-4488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4488, ctx.r10.u32);
	// stw r10,1952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1952, ctx.r10.u32);
	// stw r7,-1972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1972, ctx.r7.u32);
	// stw r7,-2296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2296, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,9096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9096, ctx.r10.u32);
	// bne 0x8281f564
	if (!ctx.cr0.eq) goto loc_8281F564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F590"))) PPC_WEAK_FUNC(sub_8281F590);
PPC_FUNC_IMPL(__imp__sub_8281F590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,13434
	ctx.r11.s64 = ctx.r11.s64 + 13434;
	// beq cr6,0x8281f678
	if (ctx.cr6.eq) goto loc_8281F678;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281f668
	if (ctx.cr6.eq) goto loc_8281F668;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281f658
	if (ctx.cr6.eq) goto loc_8281F658;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281f648
	if (ctx.cr6.eq) goto loc_8281F648;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281f638
	if (ctx.cr6.eq) goto loc_8281F638;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8281f628
	if (ctx.cr6.eq) goto loc_8281F628;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8281f618
	if (ctx.cr6.eq) goto loc_8281F618;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8281f608
	if (ctx.cr6.eq) goto loc_8281F608;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8281f5f8
	if (ctx.cr6.eq) goto loc_8281F5F8;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x8281f680
	if (!ctx.cr6.eq) goto loc_8281F680;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24268
	ctx.r11.s64 = ctx.r11.s64 + 24268;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F5F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24260
	ctx.r11.s64 = ctx.r11.s64 + 24260;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F608:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24252
	ctx.r11.s64 = ctx.r11.s64 + 24252;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F618:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24244
	ctx.r11.s64 = ctx.r11.s64 + 24244;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F628:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24236
	ctx.r11.s64 = ctx.r11.s64 + 24236;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F638:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24228
	ctx.r11.s64 = ctx.r11.s64 + 24228;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F648:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24220
	ctx.r11.s64 = ctx.r11.s64 + 24220;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F658:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24212
	ctx.r11.s64 = ctx.r11.s64 + 24212;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F668:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24204
	ctx.r11.s64 = ctx.r11.s64 + 24204;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F678:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24196
	ctx.r11.s64 = ctx.r11.s64 + 24196;
loc_8281F680:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F688"))) PPC_WEAK_FUNC(sub_8281F688);
PPC_FUNC_IMPL(__imp__sub_8281F688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,13434
	ctx.r11.s64 = ctx.r11.s64 + 13434;
	// beq cr6,0x8281f770
	if (ctx.cr6.eq) goto loc_8281F770;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281f760
	if (ctx.cr6.eq) goto loc_8281F760;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281f750
	if (ctx.cr6.eq) goto loc_8281F750;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281f740
	if (ctx.cr6.eq) goto loc_8281F740;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281f730
	if (ctx.cr6.eq) goto loc_8281F730;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8281f720
	if (ctx.cr6.eq) goto loc_8281F720;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8281f710
	if (ctx.cr6.eq) goto loc_8281F710;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8281f700
	if (ctx.cr6.eq) goto loc_8281F700;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8281f6f0
	if (ctx.cr6.eq) goto loc_8281F6F0;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x8281f778
	if (!ctx.cr6.eq) goto loc_8281F778;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24172
	ctx.r11.s64 = ctx.r11.s64 + 24172;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F6F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24156
	ctx.r11.s64 = ctx.r11.s64 + 24156;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F700:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24140
	ctx.r11.s64 = ctx.r11.s64 + 24140;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F710:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F720:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24108
	ctx.r11.s64 = ctx.r11.s64 + 24108;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F730:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24092
	ctx.r11.s64 = ctx.r11.s64 + 24092;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F740:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24076
	ctx.r11.s64 = ctx.r11.s64 + 24076;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F750:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24060
	ctx.r11.s64 = ctx.r11.s64 + 24060;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F760:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24044
	ctx.r11.s64 = ctx.r11.s64 + 24044;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F770:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,24028
	ctx.r11.s64 = ctx.r11.s64 + 24028;
loc_8281F778:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F780"))) PPC_WEAK_FUNC(sub_8281F780);
PPC_FUNC_IMPL(__imp__sub_8281F780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4964
	ctx.r11.s64 = ctx.r11.s64 + 4964;
loc_8281F7A0:
	// stfs f0,-784(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -784, temp.u32);
	// stw r9,-88(r11)
	PPC_STORE_U32(ctx.r11.u32 + -88, ctx.r9.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8281f7a0
	if (!ctx.cr0.eq) goto loc_8281F7A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F7BC"))) PPC_WEAK_FUNC(sub_8281F7BC);
PPC_FUNC_IMPL(__imp__sub_8281F7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F7C0"))) PPC_WEAK_FUNC(sub_8281F7C0);
PPC_FUNC_IMPL(__imp__sub_8281F7C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F7C4"))) PPC_WEAK_FUNC(sub_8281F7C4);
PPC_FUNC_IMPL(__imp__sub_8281F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F7C8"))) PPC_WEAK_FUNC(sub_8281F7C8);
PPC_FUNC_IMPL(__imp__sub_8281F7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,872
	ctx.r10.s64 = ctx.r5.s64 + 872;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r3,r5,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r5.s64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F7FC"))) PPC_WEAK_FUNC(sub_8281F7FC);
PPC_FUNC_IMPL(__imp__sub_8281F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F800"))) PPC_WEAK_FUNC(sub_8281F800);
PPC_FUNC_IMPL(__imp__sub_8281F800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,872
	ctx.r10.s64 = ctx.r5.s64 + 872;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281f834
	if (ctx.cr6.eq) goto loc_8281F834;
	// addi r9,r6,872
	ctx.r9.s64 = ctx.r6.s64 + 872;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8281f840
	if (ctx.cr6.eq) goto loc_8281F840;
loc_8281F834:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281F840:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F84C"))) PPC_WEAK_FUNC(sub_8281F84C);
PPC_FUNC_IMPL(__imp__sub_8281F84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F850"))) PPC_WEAK_FUNC(sub_8281F850);
PPC_FUNC_IMPL(__imp__sub_8281F850) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,5652(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5652);
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// beq cr6,0x8281f870
	if (ctx.cr6.eq) goto loc_8281F870;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281F870:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F878"))) PPC_WEAK_FUNC(sub_8281F878);
PPC_FUNC_IMPL(__imp__sub_8281F878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8281F880;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r23,13192(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,9132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9132);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8281f8fc
	if (!ctx.cr6.eq) goto loc_8281F8FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,5652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5652);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,9132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 9132, ctx.r10.u32);
	// addi r9,r11,2364
	ctx.r9.s64 = ctx.r11.s64 + 2364;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x82808340
	ctx.lr = 0x8281F8E8;
	sub_82808340(ctx, base);
	// lwz r7,5652(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5652);
	// cmpwi cr6,r7,23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 23, ctx.xer);
	// bne cr6,0x8281f8fc
	if (!ctx.cr6.eq) goto loc_8281F8FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7236, ctx.r11.u32);
loc_8281F8FC:
	// stw r23,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r23.u32);
	// stw r25,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281F914"))) PPC_WEAK_FUNC(sub_8281F914);
PPC_FUNC_IMPL(__imp__sub_8281F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F918"))) PPC_WEAK_FUNC(sub_8281F918);
PPC_FUNC_IMPL(__imp__sub_8281F918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,13184(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13184);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,13184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13184, ctx.r8.u32);
	// lwz r7,9132(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9132);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,9132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9132, ctx.r6.u32);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F954"))) PPC_WEAK_FUNC(sub_8281F954);
PPC_FUNC_IMPL(__imp__sub_8281F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F958"))) PPC_WEAK_FUNC(sub_8281F958);
PPC_FUNC_IMPL(__imp__sub_8281F958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,5652(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5652);
	// addi r8,r11,-13
	ctx.r8.s64 = ctx.r11.s64 + -13;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F97C"))) PPC_WEAK_FUNC(sub_8281F97C);
PPC_FUNC_IMPL(__imp__sub_8281F97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F980"))) PPC_WEAK_FUNC(sub_8281F980);
PPC_FUNC_IMPL(__imp__sub_8281F980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1220(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1220);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F998"))) PPC_WEAK_FUNC(sub_8281F998);
PPC_FUNC_IMPL(__imp__sub_8281F998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,2500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2500, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F9AC"))) PPC_WEAK_FUNC(sub_8281F9AC);
PPC_FUNC_IMPL(__imp__sub_8281F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F9B0"))) PPC_WEAK_FUNC(sub_8281F9B0);
PPC_FUNC_IMPL(__imp__sub_8281F9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F9B4"))) PPC_WEAK_FUNC(sub_8281F9B4);
PPC_FUNC_IMPL(__imp__sub_8281F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F9B8"))) PPC_WEAK_FUNC(sub_8281F9B8);
PPC_FUNC_IMPL(__imp__sub_8281F9B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,5652(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5652);
	// addi r8,r11,-22
	ctx.r8.s64 = ctx.r11.s64 + -22;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281F9DC"))) PPC_WEAK_FUNC(sub_8281F9DC);
PPC_FUNC_IMPL(__imp__sub_8281F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281F9E0"))) PPC_WEAK_FUNC(sub_8281F9E0);
PPC_FUNC_IMPL(__imp__sub_8281F9E0) {
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
	// lwz r7,7976(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7976);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r9,7984
	ctx.r11.s64 = ctx.r9.s64 + 7984;
loc_8281FA04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,7976(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7976);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8281fa04
	if (!ctx.cr6.gt) goto loc_8281FA04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FA20"))) PPC_WEAK_FUNC(sub_8281FA20);
PPC_FUNC_IMPL(__imp__sub_8281FA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r11,2892
	ctx.r11.s64 = ctx.r11.s64 + 2892;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8281FA3C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8281fa3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8281FA3C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FA4C"))) PPC_WEAK_FUNC(sub_8281FA4C);
PPC_FUNC_IMPL(__imp__sub_8281FA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FA50"))) PPC_WEAK_FUNC(sub_8281FA50);
PPC_FUNC_IMPL(__imp__sub_8281FA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,1204(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1204);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8281fa70
	if (ctx.cr6.eq) goto loc_8281FA70;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281FA70:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FA78"))) PPC_WEAK_FUNC(sub_8281FA78);
PPC_FUNC_IMPL(__imp__sub_8281FA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,5324(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5324);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8281fa98
	if (ctx.cr6.eq) goto loc_8281FA98;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281FA98:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FAA0"))) PPC_WEAK_FUNC(sub_8281FAA0);
PPC_FUNC_IMPL(__imp__sub_8281FAA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FAA8"))) PPC_WEAK_FUNC(sub_8281FAA8);
PPC_FUNC_IMPL(__imp__sub_8281FAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1660(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1660);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FAC0"))) PPC_WEAK_FUNC(sub_8281FAC0);
PPC_FUNC_IMPL(__imp__sub_8281FAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,1256
	ctx.r10.s64 = ctx.r11.s64 + 1256;
	// stw r8,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8281FAE0:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8281fae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8281FAE0;
	// stw r8,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r8.u32);
	// addi r10,r11,1432
	ctx.r10.s64 = ctx.r11.s64 + 1432;
	// stw r8,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r8.u32);
	// stw r8,1440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1440, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FB00"))) PPC_WEAK_FUNC(sub_8281FB00);
PPC_FUNC_IMPL(__imp__sub_8281FB00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FB04"))) PPC_WEAK_FUNC(sub_8281FB04);
PPC_FUNC_IMPL(__imp__sub_8281FB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FB08"))) PPC_WEAK_FUNC(sub_8281FB08);
PPC_FUNC_IMPL(__imp__sub_8281FB08) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FB14"))) PPC_WEAK_FUNC(sub_8281FB14);
PPC_FUNC_IMPL(__imp__sub_8281FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FB18"))) PPC_WEAK_FUNC(sub_8281FB18);
PPC_FUNC_IMPL(__imp__sub_8281FB18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2152);
	// lwz r9,1888(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1888);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8281fb3c
	if (ctx.cr6.lt) goto loc_8281FB3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8281FB3C:
	// addi r10,r10,388
	ctx.r10.s64 = ctx.r10.s64 + 388;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FB50"))) PPC_WEAK_FUNC(sub_8281FB50);
PPC_FUNC_IMPL(__imp__sub_8281FB50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r9,r11,2164
	ctx.r9.s64 = ctx.r11.s64 + 2164;
	// stw r10,2164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2164, ctx.r10.u32);
	// stw r10,2168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2168, ctx.r10.u32);
	// stw r10,2172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2172, ctx.r10.u32);
	// stw r10,2176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2176, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FB78"))) PPC_WEAK_FUNC(sub_8281FB78);
PPC_FUNC_IMPL(__imp__sub_8281FB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2152);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8281fb98
	if (!ctx.cr0.lt) goto loc_8281FB98;
	// lwz r11,1888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1888);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8281FB98:
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FBAC"))) PPC_WEAK_FUNC(sub_8281FBAC);
PPC_FUNC_IMPL(__imp__sub_8281FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FBB0"))) PPC_WEAK_FUNC(sub_8281FBB0);
PPC_FUNC_IMPL(__imp__sub_8281FBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,2164
	ctx.r11.s64 = ctx.r11.s64 + 2164;
loc_8281FBC8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8281fbd8
	if (!ctx.cr6.eq) goto loc_8281FBD8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8281FBD8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8281fbc8
	if (!ctx.cr0.eq) goto loc_8281FBC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FBE8"))) PPC_WEAK_FUNC(sub_8281FBE8);
PPC_FUNC_IMPL(__imp__sub_8281FBE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,377
	ctx.r10.s64 = ctx.r5.s64 + 377;
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

__attribute__((alias("__imp__sub_8281FC08"))) PPC_WEAK_FUNC(sub_8281FC08);
PPC_FUNC_IMPL(__imp__sub_8281FC08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1240, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FC20"))) PPC_WEAK_FUNC(sub_8281FC20);
PPC_FUNC_IMPL(__imp__sub_8281FC20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r7,r10,15988
	ctx.r7.s64 = ctx.r10.s64 + 15988;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r9,16000
	ctx.r4.s64 = ctx.r9.s64 + 16000;
	// addi r10,r8,16012
	ctx.r10.s64 = ctx.r8.s64 + 16012;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r8,r6,16028
	ctx.r8.s64 = ctx.r6.s64 + 16028;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r3,16040
	ctx.r5.s64 = ctx.r3.s64 + 16040;
	// addi r3,r9,-10380
	ctx.r3.s64 = ctx.r9.s64 + -10380;
	// addi r9,r6,-10316
	ctx.r9.s64 = ctx.r6.s64 + -10316;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r7,1624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1624, ctx.r7.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r4,1628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1628, ctx.r4.u32);
	// addi r4,r6,16048
	ctx.r4.s64 = ctx.r6.s64 + 16048;
	// stw r10,1632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1632, ctx.r10.u32);
	// addi r10,r7,16064
	ctx.r10.s64 = ctx.r7.s64 + 16064;
	// stw r8,1636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1636, ctx.r8.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r5,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r5.u32);
	// li r5,464
	ctx.r5.s64 = 464;
	// stw r3,1644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1644, ctx.r3.u32);
	// li r3,24583
	ctx.r3.s64 = 24583;
	// stw r9,1648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1648, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r4,1652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1652, ctx.r4.u32);
	// li r4,24584
	ctx.r4.s64 = 24584;
	// stw r10,1656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1656, ctx.r10.u32);
	// li r10,1085
	ctx.r10.s64 = 1085;
	// stw r5,1920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1920, ctx.r5.u32);
	// li r5,24700
	ctx.r5.s64 = 24700;
	// stw r4,1924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1924, ctx.r4.u32);
	// li r4,24577
	ctx.r4.s64 = 24577;
	// stw r3,1928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1928, ctx.r3.u32);
	// li r3,25146
	ctx.r3.s64 = 25146;
	// stw r10,1932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1932, ctx.r10.u32);
	// li r10,23137
	ctx.r10.s64 = 23137;
	// stw r5,1936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1936, ctx.r5.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r4,1940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1940, ctx.r4.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r3,1944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1944, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1948, ctx.r10.u32);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// stw r5,1952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1952, ctx.r5.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// stw r10,1400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1400, ctx.r10.u32);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// stw r4,1380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1380, ctx.r4.u32);
	// stw r3,1384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1384, ctx.r3.u32);
	// stw r5,1388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1388, ctx.r5.u32);
	// stw r8,1208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1208, ctx.r8.u32);
	// stw r6,1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1212, ctx.r6.u32);
	// stw r7,1228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1228, ctx.r7.u32);
	// stw r9,1216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1216, ctx.r9.u32);
	// lwz r10,1204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fd3c
	if (ctx.cr6.eq) goto loc_8281FD3C;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u32);
loc_8281FD3C:
	// lwz r10,1208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fd54
	if (ctx.cr6.eq) goto loc_8281FD54;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8281FD54:
	// lwz r10,1212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fd6c
	if (ctx.cr6.eq) goto loc_8281FD6C;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
loc_8281FD6C:
	// lwz r10,1216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fd84
	if (ctx.cr6.eq) goto loc_8281FD84;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8281FD84:
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fda0
	if (ctx.cr6.eq) goto loc_8281FDA0;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8281FDA0:
	// lwz r10,1224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fdbc
	if (ctx.cr6.eq) goto loc_8281FDBC;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8281FDBC:
	// lwz r10,1228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1228);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fdd4
	if (ctx.cr6.eq) goto loc_8281FDD4;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8281FDD4:
	// lwz r10,1232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1232);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8281fdf0
	if (ctx.cr6.eq) goto loc_8281FDF0;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// li r9,7
	ctx.r9.s64 = 7;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8281FDF0:
	// lwz r10,1236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,490
	ctx.r10.s64 = ctx.r10.s64 + 490;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FE10"))) PPC_WEAK_FUNC(sub_8281FE10);
PPC_FUNC_IMPL(__imp__sub_8281FE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3784(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3784);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FE28"))) PPC_WEAK_FUNC(sub_8281FE28);
PPC_FUNC_IMPL(__imp__sub_8281FE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FE2C"))) PPC_WEAK_FUNC(sub_8281FE2C);
PPC_FUNC_IMPL(__imp__sub_8281FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FE30"))) PPC_WEAK_FUNC(sub_8281FE30);
PPC_FUNC_IMPL(__imp__sub_8281FE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FE34"))) PPC_WEAK_FUNC(sub_8281FE34);
PPC_FUNC_IMPL(__imp__sub_8281FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FE38"))) PPC_WEAK_FUNC(sub_8281FE38);
PPC_FUNC_IMPL(__imp__sub_8281FE38) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8281fec8
	if (ctx.cr6.eq) goto loc_8281FEC8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281feb8
	if (ctx.cr6.eq) goto loc_8281FEB8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281fea8
	if (ctx.cr6.eq) goto loc_8281FEA8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281fe98
	if (ctx.cr6.eq) goto loc_8281FE98;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8281fe88
	if (ctx.cr6.eq) goto loc_8281FE88;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8281fe78
	if (ctx.cr6.eq) goto loc_8281FE78;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,13434
	ctx.r10.s64 = ctx.r11.s64 + 13434;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8281FE78:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,15540
	ctx.r10.s64 = ctx.r11.s64 + 15540;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8281FE88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,10368
	ctx.r10.s64 = ctx.r11.s64 + 10368;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8281FE98:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,6952
	ctx.r10.s64 = ctx.r11.s64 + 6952;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8281FEA8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,10360
	ctx.r10.s64 = ctx.r11.s64 + 10360;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8281FEB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,9300
	ctx.r10.s64 = ctx.r11.s64 + 9300;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8281FEC8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,10348
	ctx.r10.s64 = ctx.r11.s64 + 10348;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FED8"))) PPC_WEAK_FUNC(sub_8281FED8);
PPC_FUNC_IMPL(__imp__sub_8281FED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FEDC"))) PPC_WEAK_FUNC(sub_8281FEDC);
PPC_FUNC_IMPL(__imp__sub_8281FEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FEE0"))) PPC_WEAK_FUNC(sub_8281FEE0);
PPC_FUNC_IMPL(__imp__sub_8281FEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FEE4"))) PPC_WEAK_FUNC(sub_8281FEE4);
PPC_FUNC_IMPL(__imp__sub_8281FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FEE8"))) PPC_WEAK_FUNC(sub_8281FEE8);
PPC_FUNC_IMPL(__imp__sub_8281FEE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FEEC"))) PPC_WEAK_FUNC(sub_8281FEEC);
PPC_FUNC_IMPL(__imp__sub_8281FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FEF0"))) PPC_WEAK_FUNC(sub_8281FEF0);
PPC_FUNC_IMPL(__imp__sub_8281FEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FEF4"))) PPC_WEAK_FUNC(sub_8281FEF4);
PPC_FUNC_IMPL(__imp__sub_8281FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FEF8"))) PPC_WEAK_FUNC(sub_8281FEF8);
PPC_FUNC_IMPL(__imp__sub_8281FEF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3256(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3256);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FF10"))) PPC_WEAK_FUNC(sub_8281FF10);
PPC_FUNC_IMPL(__imp__sub_8281FF10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2724(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2724);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8281ff58
	if (ctx.cr6.lt) goto loc_8281FF58;
	// cmpwi cr6,r9,38
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 38, ctx.xer);
	// bge cr6,0x8281ff58
	if (!ctx.cr6.lt) goto loc_8281FF58;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r8,2876
	ctx.r10.s64 = ctx.r8.s64 + 2876;
loc_8281FF3C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8281ff60
	if (ctx.cr6.eq) goto loc_8281FF60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// blt cr6,0x8281ff3c
	if (ctx.cr6.lt) goto loc_8281FF3C;
loc_8281FF58:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_8281FF60:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8281ff58
	if (ctx.cr6.eq) goto loc_8281FF58;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8281ff58
	if (!ctx.cr6.gt) goto loc_8281FF58;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281FF84"))) PPC_WEAK_FUNC(sub_8281FF84);
PPC_FUNC_IMPL(__imp__sub_8281FF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281FF88"))) PPC_WEAK_FUNC(sub_8281FF88);
PPC_FUNC_IMPL(__imp__sub_8281FF88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2724(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2724);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8281ffd0
	if (ctx.cr6.lt) goto loc_8281FFD0;
	// cmpwi cr6,r8,38
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 38, ctx.xer);
	// bge cr6,0x8281ffd0
	if (!ctx.cr6.lt) goto loc_8281FFD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,2876
	ctx.r10.s64 = ctx.r9.s64 + 2876;
loc_8281FFB4:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8281ffd8
	if (ctx.cr6.eq) goto loc_8281FFD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// blt cr6,0x8281ffb4
	if (ctx.cr6.lt) goto loc_8281FFB4;
loc_8281FFD0:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_8281FFD8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8281ffd0
	if (ctx.cr6.eq) goto loc_8281FFD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8281ffd0
	if (!ctx.cr6.gt) goto loc_8281FFD0;
	// addi r11,r11,718
	ctx.r11.s64 = ctx.r11.s64 + 718;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,906
	ctx.r8.s64 = ctx.r11.s64 + 906;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820008"))) PPC_WEAK_FUNC(sub_82820008);
PPC_FUNC_IMPL(__imp__sub_82820008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,1712(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1712, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282001C"))) PPC_WEAK_FUNC(sub_8282001C);
PPC_FUNC_IMPL(__imp__sub_8282001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820020"))) PPC_WEAK_FUNC(sub_82820020);
PPC_FUNC_IMPL(__imp__sub_82820020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820024"))) PPC_WEAK_FUNC(sub_82820024);
PPC_FUNC_IMPL(__imp__sub_82820024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820028"))) PPC_WEAK_FUNC(sub_82820028);
PPC_FUNC_IMPL(__imp__sub_82820028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1204, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820040"))) PPC_WEAK_FUNC(sub_82820040);
PPC_FUNC_IMPL(__imp__sub_82820040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1204, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820058"))) PPC_WEAK_FUNC(sub_82820058);
PPC_FUNC_IMPL(__imp__sub_82820058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1212(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1212);
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

__attribute__((alias("__imp__sub_8282007C"))) PPC_WEAK_FUNC(sub_8282007C);
PPC_FUNC_IMPL(__imp__sub_8282007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820080"))) PPC_WEAK_FUNC(sub_82820080);
PPC_FUNC_IMPL(__imp__sub_82820080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1204(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1204);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820098"))) PPC_WEAK_FUNC(sub_82820098);
PPC_FUNC_IMPL(__imp__sub_82820098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3780(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3780);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828200B0"))) PPC_WEAK_FUNC(sub_828200B0);
PPC_FUNC_IMPL(__imp__sub_828200B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,760(r9)
	PPC_STORE_U32(ctx.r9.u32 + 760, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828200C4"))) PPC_WEAK_FUNC(sub_828200C4);
PPC_FUNC_IMPL(__imp__sub_828200C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828200C8"))) PPC_WEAK_FUNC(sub_828200C8);
PPC_FUNC_IMPL(__imp__sub_828200C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828200E0"))) PPC_WEAK_FUNC(sub_828200E0);
PPC_FUNC_IMPL(__imp__sub_828200E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828200F8"))) PPC_WEAK_FUNC(sub_828200F8);
PPC_FUNC_IMPL(__imp__sub_828200F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f0,-30936(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30936);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30728);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f0,768(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 768, temp.u32);
	// ld r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,1072(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1072, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820148"))) PPC_WEAK_FUNC(sub_82820148);
PPC_FUNC_IMPL(__imp__sub_82820148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,192
	ctx.r10.s64 = ctx.r5.s64 + 192;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfsx f0,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828201b4
	if (!ctx.cr6.gt) goto loc_828201B4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r9,r5,268
	ctx.r9.s64 = ctx.r5.s64 + 268;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f13,-30728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30728);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// ld r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmsubs f8,f9,f13,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x828201c0
	if (ctx.cr6.lt) goto loc_828201C0;
loc_828201B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828201C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828201CC"))) PPC_WEAK_FUNC(sub_828201CC);
PPC_FUNC_IMPL(__imp__sub_828201CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828201D0"))) PPC_WEAK_FUNC(sub_828201D0);
PPC_FUNC_IMPL(__imp__sub_828201D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 664, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828201E8"))) PPC_WEAK_FUNC(sub_828201E8);
PPC_FUNC_IMPL(__imp__sub_828201E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,157
	ctx.r10.s64 = ctx.r4.s64 + 157;
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

__attribute__((alias("__imp__sub_82820204"))) PPC_WEAK_FUNC(sub_82820204);
PPC_FUNC_IMPL(__imp__sub_82820204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820208"))) PPC_WEAK_FUNC(sub_82820208);
PPC_FUNC_IMPL(__imp__sub_82820208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1092, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820220"))) PPC_WEAK_FUNC(sub_82820220);
PPC_FUNC_IMPL(__imp__sub_82820220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,168
	ctx.r10.s64 = ctx.r5.s64 + 168;
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

__attribute__((alias("__imp__sub_82820240"))) PPC_WEAK_FUNC(sub_82820240);
PPC_FUNC_IMPL(__imp__sub_82820240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,162
	ctx.r10.s64 = ctx.r4.s64 + 162;
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

__attribute__((alias("__imp__sub_8282025C"))) PPC_WEAK_FUNC(sub_8282025C);
PPC_FUNC_IMPL(__imp__sub_8282025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820260"))) PPC_WEAK_FUNC(sub_82820260);
PPC_FUNC_IMPL(__imp__sub_82820260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 652, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820278"))) PPC_WEAK_FUNC(sub_82820278);
PPC_FUNC_IMPL(__imp__sub_82820278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1092, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820290"))) PPC_WEAK_FUNC(sub_82820290);
PPC_FUNC_IMPL(__imp__sub_82820290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 648, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828202A4"))) PPC_WEAK_FUNC(sub_828202A4);
PPC_FUNC_IMPL(__imp__sub_828202A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828202A8"))) PPC_WEAK_FUNC(sub_828202A8);
PPC_FUNC_IMPL(__imp__sub_828202A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,676(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 676);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828202C0"))) PPC_WEAK_FUNC(sub_828202C0);
PPC_FUNC_IMPL(__imp__sub_828202C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,672(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828202D8"))) PPC_WEAK_FUNC(sub_828202D8);
PPC_FUNC_IMPL(__imp__sub_828202D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 628, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828202F0"))) PPC_WEAK_FUNC(sub_828202F0);
PPC_FUNC_IMPL(__imp__sub_828202F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,680(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 680);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820308"))) PPC_WEAK_FUNC(sub_82820308);
PPC_FUNC_IMPL(__imp__sub_82820308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,684(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 684);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820320"))) PPC_WEAK_FUNC(sub_82820320);
PPC_FUNC_IMPL(__imp__sub_82820320) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820328"))) PPC_WEAK_FUNC(sub_82820328);
PPC_FUNC_IMPL(__imp__sub_82820328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82820330;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r26,13180(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8282039c
	if (ctx.cr6.eq) goto loc_8282039C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b39a8
	ctx.lr = 0x82820390;
	sub_827B39A8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 ^ 1;
loc_8282039C:
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828203B8"))) PPC_WEAK_FUNC(sub_828203B8);
PPC_FUNC_IMPL(__imp__sub_828203B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828203f8
	if (ctx.cr6.eq) goto loc_828203F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828203e8
	if (ctx.cr6.eq) goto loc_828203E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82820400
	if (!ctx.cr6.eq) goto loc_82820400;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82820400
	goto loc_82820400;
loc_828203E8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82820400
	goto loc_82820400;
loc_828203F8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82820400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820414"))) PPC_WEAK_FUNC(sub_82820414);
PPC_FUNC_IMPL(__imp__sub_82820414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820418"))) PPC_WEAK_FUNC(sub_82820418);
PPC_FUNC_IMPL(__imp__sub_82820418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82820478
	if (ctx.cr6.eq) goto loc_82820478;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82820458
	if (ctx.cr6.eq) goto loc_82820458;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82820480
	if (!ctx.cr6.eq) goto loc_82820480;
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
loc_82820458:
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
loc_82820478:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82820480:
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

__attribute__((alias("__imp__sub_82820494"))) PPC_WEAK_FUNC(sub_82820494);
PPC_FUNC_IMPL(__imp__sub_82820494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820498"))) PPC_WEAK_FUNC(sub_82820498);
PPC_FUNC_IMPL(__imp__sub_82820498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,604(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 604);
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

__attribute__((alias("__imp__sub_828204C0"))) PPC_WEAK_FUNC(sub_828204C0);
PPC_FUNC_IMPL(__imp__sub_828204C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,604(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 604);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828204D8"))) PPC_WEAK_FUNC(sub_828204D8);
PPC_FUNC_IMPL(__imp__sub_828204D8) {
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

__attribute__((alias("__imp__sub_828204F0"))) PPC_WEAK_FUNC(sub_828204F0);
PPC_FUNC_IMPL(__imp__sub_828204F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 548, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820504"))) PPC_WEAK_FUNC(sub_82820504);
PPC_FUNC_IMPL(__imp__sub_82820504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820508"))) PPC_WEAK_FUNC(sub_82820508);
PPC_FUNC_IMPL(__imp__sub_82820508) {
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

__attribute__((alias("__imp__sub_82820520"))) PPC_WEAK_FUNC(sub_82820520);
PPC_FUNC_IMPL(__imp__sub_82820520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r8,r8,9784
	ctx.r8.s64 = ctx.r8.s64 + 9784;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r7,9768
	ctx.r7.s64 = ctx.r7.s64 + 9768;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r5,r10,100
	ctx.r5.s64 = ctx.r10.s64 + 100;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8282054C:
	// stw r7,-52(r11)
	PPC_STORE_U32(ctx.r11.u32 + -52, ctx.r7.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r6,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8282054c
	if (!ctx.cr0.eq) goto loc_8282054C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,9804
	ctx.r8.s64 = ctx.r11.s64 + 9804;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r9,9816
	ctx.r6.s64 = ctx.r9.s64 + 9816;
	// stw r8,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r8.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r3,1949
	ctx.r3.s64 = 1949;
	// stw r6,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r6.u32);
	// addi r11,r7,9832
	ctx.r11.s64 = ctx.r7.s64 + 9832;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r3,432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 432, ctx.r3.u32);
	// addi r8,r4,9844
	ctx.r8.s64 = ctx.r4.s64 + 9844;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,1950
	ctx.r6.s64 = 1950;
	// stw r8,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r8.u32);
	// addi r4,r9,9860
	ctx.r4.s64 = ctx.r9.s64 + 9860;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r6,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r6.u32);
	// addi r11,r7,9872
	ctx.r11.s64 = ctx.r7.s64 + 9872;
	// stw r4,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r4.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r8,1951
	ctx.r8.s64 = 1951;
	// stw r11,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r11.u32);
	// addi r7,r3,9888
	ctx.r7.s64 = ctx.r3.s64 + 9888;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 440, ctx.r8.u32);
	// addi r4,r9,9900
	ctx.r4.s64 = ctx.r9.s64 + 9900;
	// stw r7,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r11,1952
	ctx.r11.s64 = 1952;
	// stw r4,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r4.u32);
	// addi r9,r6,9916
	ctx.r9.s64 = ctx.r6.s64 + 9916;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// addi r7,r3,9928
	ctx.r7.s64 = ctx.r3.s64 + 9928;
	// stw r9,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r4,1953
	ctx.r4.s64 = 1953;
	// stw r7,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r7.u32);
	// addi r3,r8,9944
	ctx.r3.s64 = ctx.r8.s64 + 9944;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r4.u32);
	// addi r9,r6,9960
	ctx.r9.s64 = ctx.r6.s64 + 9960;
	// stw r3,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r3.u32);
	// li r8,1959
	ctx.r8.s64 = 1959;
	// addi r7,r11,9980
	ctx.r7.s64 = ctx.r11.s64 + 9980;
	// stw r9,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r8.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r7,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r7.u32);
	// li r3,1967
	ctx.r3.s64 = 1967;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// addi r11,r6,9992
	ctx.r11.s64 = ctx.r6.s64 + 9992;
	// addi r9,r4,10008
	ctx.r9.s64 = ctx.r4.s64 + 10008;
	// stw r3,424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 424, ctx.r3.u32);
	// li r8,1962
	ctx.r8.s64 = 1962;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// stw r9,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r9.u32);
	// stw r8,428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 428, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820660"))) PPC_WEAK_FUNC(sub_82820660);
PPC_FUNC_IMPL(__imp__sub_82820660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82820668;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13180(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// bl 0x82beeed8
	ctx.lr = 0x828206AC;
	sub_82BEEED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x828206c0
	if (!ctx.cr6.gt) goto loc_828206C0;
	// bl 0x82beeed8
	ctx.lr = 0x828206B8;
	sub_82BEEED8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x828206c8
	if (ctx.cr6.lt) goto loc_828206C8;
loc_828206C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828206cc
	goto loc_828206CC;
loc_828206C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828206CC:
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r26.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828206E8"))) PPC_WEAK_FUNC(sub_828206E8);
PPC_FUNC_IMPL(__imp__sub_828206E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820700"))) PPC_WEAK_FUNC(sub_82820700);
PPC_FUNC_IMPL(__imp__sub_82820700) {
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
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// bl 0x827f95a8
	ctx.lr = 0x82820718;
	sub_827F95A8(ctx, base);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282072C"))) PPC_WEAK_FUNC(sub_8282072C);
PPC_FUNC_IMPL(__imp__sub_8282072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820730"))) PPC_WEAK_FUNC(sub_82820730);
PPC_FUNC_IMPL(__imp__sub_82820730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82820738;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r9,13312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13312);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13180(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// bl 0x827f95a8
	ctx.lr = 0x8282078C;
	sub_827F95A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828207a8
	if (ctx.cr6.eq) goto loc_828207A8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x827f9298
	ctx.lr = 0x8282079C;
	sub_827F9298(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x828207ac
	if (!ctx.cr6.eq) goto loc_828207AC;
loc_828207A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828207AC:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828207C8"))) PPC_WEAK_FUNC(sub_828207C8);
PPC_FUNC_IMPL(__imp__sub_828207C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828207D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,13180(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r30,13192(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13192);
	// lwz r29,13188(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// lwz r28,13184(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// stw r3,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r11.u32);
	// bl 0x82beeed8
	ctx.lr = 0x82820814;
	sub_82BEEED8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r30,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r30.u32);
	// stw r31,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r31.u32);
	// stw r28,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r28.u32);
	// stw r29,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82820830"))) PPC_WEAK_FUNC(sub_82820830);
PPC_FUNC_IMPL(__imp__sub_82820830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82820838;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r26,13180(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,13312(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13312);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// bl 0x827f95a8
	ctx.lr = 0x82820888;
	sub_827F95A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828208a8
	if (ctx.cr6.eq) goto loc_828208A8;
	// bl 0x82beeed8
	ctx.lr = 0x82820894;
	sub_82BEEED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x828208a8
	if (!ctx.cr6.gt) goto loc_828208A8;
	// bl 0x82beeed8
	ctx.lr = 0x828208A0;
	sub_82BEEED8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x828208b0
	if (ctx.cr6.lt) goto loc_828208B0;
loc_828208A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828208b4
	goto loc_828208B4;
loc_828208B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828208B4:
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r26.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828208D0"))) PPC_WEAK_FUNC(sub_828208D0);
PPC_FUNC_IMPL(__imp__sub_828208D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,-4476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f11,-30384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30384);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-30872(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30872);
	ctx.f9.f64 = double(temp.f32);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lfs f8,29752(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29752);
	ctx.f8.f64 = double(temp.f32);
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lfs f7,-4416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4416);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,-30180(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30180);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,268
	ctx.r10.s64 = ctx.r11.s64 + 268;
	// lfs f12,-30784(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -30784);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// stfs f13,280(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// stfs f11,284(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// stfs f9,288(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// stfs f8,292(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// stfs f7,296(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r7,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r3,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r8,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r7,r9,6
	ctx.r7.s64 = ctx.r9.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f9,r6,r10
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r5,r9,7
	ctx.r5.s64 = ctx.r9.s64 + 7;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f8,r4,r10
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f10,r9,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r8,272(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f12,12(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r4,272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f11,r8,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,272(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f9,28(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f9,-29812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -29812);
	ctx.f9.f64 = double(temp.f32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,-29816(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -29816);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-29820(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29820);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f10,r5,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r6,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f11,28(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r3,272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f8,8(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r8,272(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f9,12(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f10,r5,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r4,272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lwz r7,272(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,28(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f8,12(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f9,16(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r5,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820B9C"))) PPC_WEAK_FUNC(sub_82820B9C);
PPC_FUNC_IMPL(__imp__sub_82820B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820BA0"))) PPC_WEAK_FUNC(sub_82820BA0);
PPC_FUNC_IMPL(__imp__sub_82820BA0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82820c00
	if (ctx.cr6.eq) goto loc_82820C00;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82820c00
	if (ctx.cr6.eq) goto loc_82820C00;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82820c00
	if (ctx.cr6.eq) goto loc_82820C00;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82820bf4
	if (ctx.cr6.eq) goto loc_82820BF4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82820bf4
	if (ctx.cr6.eq) goto loc_82820BF4;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82820bf4
	if (ctx.cr6.eq) goto loc_82820BF4;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82820bf4
	if (ctx.cr6.eq) goto loc_82820BF4;
	// bgt cr6,0x82820be8
	if (ctx.cr6.gt) goto loc_82820BE8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820BE8:
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820BF4:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820C00:
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820C0C"))) PPC_WEAK_FUNC(sub_82820C0C);
PPC_FUNC_IMPL(__imp__sub_82820C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820C10"))) PPC_WEAK_FUNC(sub_82820C10);
PPC_FUNC_IMPL(__imp__sub_82820C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82820c74
	if (ctx.cr6.eq) goto loc_82820C74;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82820c60
	if (ctx.cr6.eq) goto loc_82820C60;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82820c4c
	if (ctx.cr6.eq) goto loc_82820C4C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82820c80
	if (!ctx.cr6.eq) goto loc_82820C80;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,-4408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4408);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82820C4C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,-4404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4404);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82820C60:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82820C74:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29808);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82820C80:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820C88"))) PPC_WEAK_FUNC(sub_82820C88);
PPC_FUNC_IMPL(__imp__sub_82820C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82820cb0
	if (!ctx.cr6.eq) goto loc_82820CB0;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,-4416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82820ca8
	if (ctx.cr6.lt) goto loc_82820CA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82820CA8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820CB0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82820cd4
	if (!ctx.cr6.eq) goto loc_82820CD4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,-29796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29796);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82820ca8
	if (ctx.cr6.lt) goto loc_82820CA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820CD4:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82820cf8
	if (!ctx.cr6.eq) goto loc_82820CF8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,-29800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29800);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82820ca8
	if (ctx.cr6.lt) goto loc_82820CA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820CF8:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82820ca8
	if (!ctx.cr6.eq) goto loc_82820CA8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82820ca8
	if (ctx.cr6.lt) goto loc_82820CA8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820D1C"))) PPC_WEAK_FUNC(sub_82820D1C);
PPC_FUNC_IMPL(__imp__sub_82820D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820D20"))) PPC_WEAK_FUNC(sub_82820D20);
PPC_FUNC_IMPL(__imp__sub_82820D20) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82820d90
	if (ctx.cr6.eq) goto loc_82820D90;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82820d84
	if (ctx.cr6.eq) goto loc_82820D84;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82820d78
	if (ctx.cr6.eq) goto loc_82820D78;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82820d6c
	if (ctx.cr6.eq) goto loc_82820D6C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82820d60
	if (ctx.cr6.eq) goto loc_82820D60;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x82820d94
	if (!ctx.cr6.eq) goto loc_82820D94;
	// li r11,24516
	ctx.r11.s64 = 24516;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820D60:
	// li r11,24533
	ctx.r11.s64 = 24533;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820D6C:
	// li r11,24529
	ctx.r11.s64 = 24529;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820D78:
	// li r11,24532
	ctx.r11.s64 = 24532;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820D84:
	// li r11,24911
	ctx.r11.s64 = 24911;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820D90:
	// li r11,24910
	ctx.r11.s64 = 24910;
loc_82820D94:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820D9C"))) PPC_WEAK_FUNC(sub_82820D9C);
PPC_FUNC_IMPL(__imp__sub_82820D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820DA0"))) PPC_WEAK_FUNC(sub_82820DA0);
PPC_FUNC_IMPL(__imp__sub_82820DA0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82820df0
	if (ctx.cr6.eq) goto loc_82820DF0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82820df0
	if (ctx.cr6.eq) goto loc_82820DF0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82820df0
	if (ctx.cr6.eq) goto loc_82820DF0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82820de4
	if (ctx.cr6.eq) goto loc_82820DE4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82820de4
	if (ctx.cr6.eq) goto loc_82820DE4;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82820de4
	if (ctx.cr6.eq) goto loc_82820DE4;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82820de4
	if (ctx.cr6.eq) goto loc_82820DE4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820DE4:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82820DF0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820DFC"))) PPC_WEAK_FUNC(sub_82820DFC);
PPC_FUNC_IMPL(__imp__sub_82820DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820E00"))) PPC_WEAK_FUNC(sub_82820E00);
PPC_FUNC_IMPL(__imp__sub_82820E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82820e50
	if (ctx.cr6.lt) goto loc_82820E50;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bge cr6,0x82820e50
	if (!ctx.cr6.lt) goto loc_82820E50;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82820e50
	if (ctx.cr6.lt) goto loc_82820E50;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// bge cr6,0x82820e50
	if (!ctx.cr6.lt) goto loc_82820E50;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,268
	ctx.r11.s64 = ctx.r11.s64 + 268;
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
	// lfsx f0,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82820E50:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820E58"))) PPC_WEAK_FUNC(sub_82820E58);
PPC_FUNC_IMPL(__imp__sub_82820E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x82820ea0
	if (ctx.cr6.eq) goto loc_82820EA0;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82820ea0
	if (ctx.cr6.eq) goto loc_82820EA0;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x82820ea0
	if (ctx.cr6.eq) goto loc_82820EA0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,1256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// bl 0x82ba03e0
	ctx.lr = 0x82820E90;
	sub_82BA03E0(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,-30832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82820eb8
	if (ctx.cr6.gt) goto loc_82820EB8;
loc_82820EA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82820EB8:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820ECC"))) PPC_WEAK_FUNC(sub_82820ECC);
PPC_FUNC_IMPL(__imp__sub_82820ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

