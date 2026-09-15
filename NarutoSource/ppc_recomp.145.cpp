#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82865598"))) PPC_WEAK_FUNC(sub_82865598);
PPC_FUNC_IMPL(__imp__sub_82865598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828655A0;
	__savegprlr_24(ctx, base);
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r27,13192(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r11.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x828655f8
	if (ctx.cr6.eq) goto loc_828655F8;
	// stw r4,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bf1e68
	ctx.lr = 0x828655F8;
	sub_82BF1E68(ctx, base);
loc_828655F8:
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

__attribute__((alias("__imp__sub_82865610"))) PPC_WEAK_FUNC(sub_82865610);
PPC_FUNC_IMPL(__imp__sub_82865610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82865618;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r11.u32);
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,296(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// bl 0x82becee0
	ctx.lr = 0x8286566C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286567c
	if (ctx.cr6.eq) goto loc_8286567C;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x8286567C;
	sub_827CC4E0(ctx, base);
loc_8286567C:
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// lwz r4,296(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// bl 0x82becee0
	ctx.lr = 0x82865688;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828656a8
	if (ctx.cr6.eq) goto loc_828656A8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828656a8
	if (ctx.cr6.eq) goto loc_828656A8;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_828656A8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r11,296(r27)
	PPC_STORE_U32(ctx.r27.u32 + 296, ctx.r11.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828656C8"))) PPC_WEAK_FUNC(sub_828656C8);
PPC_FUNC_IMPL(__imp__sub_828656C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828656D0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286573c
	if (ctx.cr6.eq) goto loc_8286573C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82865734
	if (ctx.cr6.eq) goto loc_82865734;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286572c
	if (ctx.cr6.eq) goto loc_8286572C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82865740
	goto loc_82865740;
loc_8286572C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82865740
	goto loc_82865740;
loc_82865734:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82865740
	goto loc_82865740;
loc_8286573C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82865740:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828658e0
	if (ctx.cr6.eq) goto loc_828658E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82865770
	if (ctx.cr6.eq) goto loc_82865770;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82865768
	if (ctx.cr6.eq) goto loc_82865768;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82865774
	if (!ctx.cr6.eq) goto loc_82865774;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82865774
	goto loc_82865774;
loc_82865768:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82865774
	goto loc_82865774;
loc_82865770:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82865774:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f30,26592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26592);
	ctx.f30.f64 = double(temp.f32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f31,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x828658a0
	if (ctx.cr6.lt) goto loc_828658A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82804410
	ctx.lr = 0x828657A4;
	sub_82804410(ctx, base);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// fsubs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f9,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsqrts f12,f1
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// beq cr6,0x82865804
	if (ctx.cr6.eq) goto loc_82865804;
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// b 0x82865808
	goto loc_82865808;
loc_82865804:
	// fmr f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f9.f64;
loc_82865808:
	// fmuls f13,f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fabs f8,f13
	ctx.f8.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// blt cr6,0x82865880
	if (ctx.cr6.lt) goto loc_82865880;
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// lfs f4,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmuls f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f10,f6
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f2,f7,f10
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f10,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fadds f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// b 0x82865908
	goto loc_82865908;
loc_82865880:
	// stfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// b 0x82865908
	goto loc_82865908;
loc_828658A0:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_828658E0:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_82865908:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82865920"))) PPC_WEAK_FUNC(sub_82865920);
PPC_FUNC_IMPL(__imp__sub_82865920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82865928;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,236(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82865984
	if (!ctx.cr6.gt) goto loc_82865984;
	// bl 0x82bf2028
	ctx.lr = 0x8286597C;
	sub_82BF2028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 236, ctx.r11.u32);
loc_82865984:
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

__attribute__((alias("__imp__sub_8286599C"))) PPC_WEAK_FUNC(sub_8286599C);
PPC_FUNC_IMPL(__imp__sub_8286599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828659A0"))) PPC_WEAK_FUNC(sub_828659A0);
PPC_FUNC_IMPL(__imp__sub_828659A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828659A8;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 976);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82865a04
	if (!ctx.cr6.gt) goto loc_82865A04;
	// bl 0x82bf2028
	ctx.lr = 0x828659FC;
	sub_82BF2028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,976(r27)
	PPC_STORE_U32(ctx.r27.u32 + 976, ctx.r11.u32);
loc_82865A04:
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

__attribute__((alias("__imp__sub_82865A1C"))) PPC_WEAK_FUNC(sub_82865A1C);
PPC_FUNC_IMPL(__imp__sub_82865A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865A20"))) PPC_WEAK_FUNC(sub_82865A20);
PPC_FUNC_IMPL(__imp__sub_82865A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82865A28;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 976);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82865aa8
	if (!ctx.cr6.gt) goto loc_82865AA8;
	// bl 0x82bf20a0
	ctx.lr = 0x82865A80;
	sub_82BF20A0(ctx, base);
	// lwz r3,976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 976);
	// bl 0x82bf1e68
	ctx.lr = 0x82865A88;
	sub_82BF1E68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 976);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x82bf1f38
	ctx.lr = 0x82865AA8;
	sub_82BF1F38(ctx, base);
loc_82865AA8:
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

__attribute__((alias("__imp__sub_82865AC0"))) PPC_WEAK_FUNC(sub_82865AC0);
PPC_FUNC_IMPL(__imp__sub_82865AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82865AC8;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r19,13192(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r18,13188(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// li r21,-1
	ctx.r21.s64 = -1;
	// lwz r17,13180(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r16,13184(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// lwz r10,940(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82865c24
	if (!ctx.cr6.gt) goto loc_82865C24;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r22,r30,948
	ctx.r22.s64 = ctx.r30.s64 + 948;
	// addi r23,r11,-29532
	ctx.r23.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82865B38:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82865b6c
	if (ctx.cr6.eq) goto loc_82865B6C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82865b64
	if (ctx.cr6.eq) goto loc_82865B64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82865b5c
	if (ctx.cr6.eq) goto loc_82865B5C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82865b70
	goto loc_82865B70;
loc_82865B5C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82865b70
	goto loc_82865B70;
loc_82865B64:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82865b70
	goto loc_82865B70;
loc_82865B6C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82865B70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82865c08
	if (ctx.cr6.eq) goto loc_82865C08;
	// lwz r11,-440(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82865c08
	if (ctx.cr6.eq) goto loc_82865C08;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82865bac
	if (ctx.cr6.eq) goto loc_82865BAC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82865bb0
	if (ctx.cr6.eq) goto loc_82865BB0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82865ba4
	if (ctx.cr6.eq) goto loc_82865BA4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82865bb0
	goto loc_82865BB0;
loc_82865BA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82865bb0
	goto loc_82865BB0;
loc_82865BAC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82865BB0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82865BB8;
	sub_82804410(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bef8d8
	ctx.lr = 0x82865BC8;
	sub_82BEF8D8(ctx, base);
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f0.f64));
	// lfs f12,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f6,460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f4,f10,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f6
	ctx.cr6.compare(ctx.f3.f64, ctx.f6.f64);
	// blt cr6,0x82865c20
	if (ctx.cr6.lt) goto loc_82865C20;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_82865C08:
	// lwz r11,940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82865b38
	if (ctx.cr6.lt) goto loc_82865B38;
	// b 0x82865c24
	goto loc_82865C24;
loc_82865C20:
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
loc_82865C24:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// stw r19,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r19.u32);
	// stw r17,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r17.u32);
	// stw r16,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r16.u32);
	// stw r18,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82865C40"))) PPC_WEAK_FUNC(sub_82865C40);
PPC_FUNC_IMPL(__imp__sub_82865C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82865C48;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// li r25,2
	ctx.r25.s64 = 2;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r21,13180(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r20,13184(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r23,13192(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r22,13188(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// addi r31,r10,616
	ctx.r31.s64 = ctx.r10.s64 + 616;
	// stw r3,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r3.u32);
	// addi r19,r11,-15760
	ctx.r19.s64 = ctx.r11.s64 + -15760;
loc_82865CA0:
	// lwz r3,13416(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13416);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82becee0
	ctx.lr = 0x82865CAC;
	sub_82BECEE0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82865cdc
	if (ctx.cr6.eq) goto loc_82865CDC;
	// addi r3,r19,252
	ctx.r3.s64 = ctx.r19.s64 + 252;
	// bl 0x82c09bec
	ctx.lr = 0x82865CC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82865CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r19,252
	ctx.r3.s64 = ctx.r19.s64 + 252;
	// bl 0x82c09bdc
	ctx.lr = 0x82865CDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82865CDC:
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82865ca0
	if (!ctx.cr0.eq) goto loc_82865CA0;
	// stw r23,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82865D04"))) PPC_WEAK_FUNC(sub_82865D04);
PPC_FUNC_IMPL(__imp__sub_82865D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865D08"))) PPC_WEAK_FUNC(sub_82865D08);
PPC_FUNC_IMPL(__imp__sub_82865D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82865D10;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,792(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 792);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82865d6c
	if (!ctx.cr6.gt) goto loc_82865D6C;
	// bl 0x82bf2028
	ctx.lr = 0x82865D64;
	sub_82BF2028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,792(r27)
	PPC_STORE_U32(ctx.r27.u32 + 792, ctx.r11.u32);
loc_82865D6C:
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

__attribute__((alias("__imp__sub_82865D84"))) PPC_WEAK_FUNC(sub_82865D84);
PPC_FUNC_IMPL(__imp__sub_82865D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865D88"))) PPC_WEAK_FUNC(sub_82865D88);
PPC_FUNC_IMPL(__imp__sub_82865D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82865dbc
	if (!ctx.cr6.gt) goto loc_82865DBC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,416(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
loc_82865DBC:
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
	// beq cr6,0x82865de0
	if (ctx.cr6.eq) goto loc_82865DE0;
	// lfs f0,416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82865dec
	if (!ctx.cr6.gt) goto loc_82865DEC;
loc_82865DE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82865DEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82865DF8"))) PPC_WEAK_FUNC(sub_82865DF8);
PPC_FUNC_IMPL(__imp__sub_82865DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82865E00;
	__savegprlr_24(ctx, base);
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r27,13192(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r26,13188(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r11.u32);
	// lwz r3,13416(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13416);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,964(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 964);
	// bl 0x82becee0
	ctx.lr = 0x82865E54;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82865e64
	if (ctx.cr6.eq) goto loc_82865E64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82865E64;
	sub_827CC4E0(ctx, base);
loc_82865E64:
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

__attribute__((alias("__imp__sub_82865E7C"))) PPC_WEAK_FUNC(sub_82865E7C);
PPC_FUNC_IMPL(__imp__sub_82865E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865E80"))) PPC_WEAK_FUNC(sub_82865E80);
PPC_FUNC_IMPL(__imp__sub_82865E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82865E88;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r11.u32);
	// lwz r3,13416(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13416);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,964(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// bl 0x82becee0
	ctx.lr = 0x82865EDC;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82865eec
	if (ctx.cr6.eq) goto loc_82865EEC;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc5b8
	ctx.lr = 0x82865EEC;
	sub_827CC5B8(ctx, base);
loc_82865EEC:
	// lwz r3,964(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// bl 0x82bf1e68
	ctx.lr = 0x82865EF4;
	sub_82BF1E68(ctx, base);
	// stw r26,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
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

__attribute__((alias("__imp__sub_82865F0C"))) PPC_WEAK_FUNC(sub_82865F0C);
PPC_FUNC_IMPL(__imp__sub_82865F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865F10"))) PPC_WEAK_FUNC(sub_82865F10);
PPC_FUNC_IMPL(__imp__sub_82865F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82865F18;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,972(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 972);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82865f74
	if (ctx.cr6.eq) goto loc_82865F74;
	// bl 0x82bf2318
	ctx.lr = 0x82865F6C;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,972(r27)
	PPC_STORE_U32(ctx.r27.u32 + 972, ctx.r11.u32);
loc_82865F74:
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

__attribute__((alias("__imp__sub_82865F8C"))) PPC_WEAK_FUNC(sub_82865F8C);
PPC_FUNC_IMPL(__imp__sub_82865F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865F90"))) PPC_WEAK_FUNC(sub_82865F90);
PPC_FUNC_IMPL(__imp__sub_82865F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82865F98;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,420(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82865ffc
	if (ctx.cr6.eq) goto loc_82865FFC;
	// bl 0x82bf2028
	ctx.lr = 0x82865FEC;
	sub_82BF2028(ctx, base);
	// lwz r3,420(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// bl 0x82bf2318
	ctx.lr = 0x82865FF4;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,420(r27)
	PPC_STORE_U32(ctx.r27.u32 + 420, ctx.r11.u32);
loc_82865FFC:
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

__attribute__((alias("__imp__sub_82866014"))) PPC_WEAK_FUNC(sub_82866014);
PPC_FUNC_IMPL(__imp__sub_82866014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82866018"))) PPC_WEAK_FUNC(sub_82866018);
PPC_FUNC_IMPL(__imp__sub_82866018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82866020;
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
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82866090
	if (!ctx.cr6.gt) goto loc_82866090;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82866078;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82866090
	if (ctx.cr6.eq) goto loc_82866090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82866090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82866090:
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

__attribute__((alias("__imp__sub_828660A8"))) PPC_WEAK_FUNC(sub_828660A8);
PPC_FUNC_IMPL(__imp__sub_828660A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828660B0;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8286610c
	if (!ctx.cr6.gt) goto loc_8286610C;
	// bl 0x82bf2028
	ctx.lr = 0x82866104;
	sub_82BF2028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r11.u32);
loc_8286610C:
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

__attribute__((alias("__imp__sub_82866124"))) PPC_WEAK_FUNC(sub_82866124);
PPC_FUNC_IMPL(__imp__sub_82866124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82866128"))) PPC_WEAK_FUNC(sub_82866128);
PPC_FUNC_IMPL(__imp__sub_82866128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82866130;
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
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x828661a0
	if (!ctx.cr6.gt) goto loc_828661A0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82866188;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828661a0
	if (ctx.cr6.eq) goto loc_828661A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828661A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828661A0:
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

__attribute__((alias("__imp__sub_828661B8"))) PPC_WEAK_FUNC(sub_828661B8);
PPC_FUNC_IMPL(__imp__sub_828661B8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828661E4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82866218
	if (ctx.cr6.eq) goto loc_82866218;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82866210
	if (ctx.cr6.eq) goto loc_82866210;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82866208
	if (ctx.cr6.eq) goto loc_82866208;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286621c
	goto loc_8286621C;
loc_82866208:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286621c
	goto loc_8286621C;
loc_82866210:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8286621c
	goto loc_8286621C;
loc_82866218:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8286621C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82866268
	if (ctx.cr6.eq) goto loc_82866268;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286624c
	if (ctx.cr6.eq) goto loc_8286624C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82866244
	if (ctx.cr6.eq) goto loc_82866244;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82866250
	if (!ctx.cr6.eq) goto loc_82866250;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82866250
	goto loc_82866250;
loc_82866244:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82866250
	goto loc_82866250;
loc_8286624C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82866250:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82866284
	if (ctx.cr6.eq) goto loc_82866284;
loc_82866268:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x828661e4
	if (ctx.cr6.lt) goto loc_828661E4;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82866284:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82866294"))) PPC_WEAK_FUNC(sub_82866294);
PPC_FUNC_IMPL(__imp__sub_82866294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82866298"))) PPC_WEAK_FUNC(sub_82866298);
PPC_FUNC_IMPL(__imp__sub_82866298) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,13188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828662ec
	if (ctx.cr6.eq) goto loc_828662EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828662dc
	if (ctx.cr6.eq) goto loc_828662DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828662f4
	if (!ctx.cr6.eq) goto loc_828662F4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828662f4
	goto loc_828662F4;
loc_828662DC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828662f4
	goto loc_828662F4;
loc_828662EC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828662F4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8283b290
	ctx.lr = 0x828662FC;
	sub_8283B290(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82866310"))) PPC_WEAK_FUNC(sub_82866310);
PPC_FUNC_IMPL(__imp__sub_82866310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82866318;
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
	// bl 0x828660a8
	ctx.lr = 0x82866358;
	sub_828660A8(ctx, base);
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

__attribute__((alias("__imp__sub_82866370"))) PPC_WEAK_FUNC(sub_82866370);
PPC_FUNC_IMPL(__imp__sub_82866370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82866378;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
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
	// addi r7,r9,-29532
	ctx.r7.s64 = ctx.r9.s64 + -29532;
	// lwz r8,-29532(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r27,13192(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// lwz r26,13188(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r24,13184(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828663fc
	if (ctx.cr6.eq) goto loc_828663FC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828663f4
	if (ctx.cr6.eq) goto loc_828663F4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828663ec
	if (ctx.cr6.eq) goto loc_828663EC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82866400
	goto loc_82866400;
loc_828663EC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82866400
	goto loc_82866400;
loc_828663F4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82866400
	goto loc_82866400;
loc_828663FC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82866400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82866518
	if (ctx.cr6.eq) goto loc_82866518;
	// lwz r11,176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286643c
	if (ctx.cr6.eq) goto loc_8286643C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82866434
	if (ctx.cr6.eq) goto loc_82866434;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286642c
	if (ctx.cr6.eq) goto loc_8286642C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82866440
	goto loc_82866440;
loc_8286642C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82866440
	goto loc_82866440;
loc_82866434:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82866440
	goto loc_82866440;
loc_8286643C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82866440:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82866518
	if (ctx.cr6.eq) goto loc_82866518;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82866470
	if (ctx.cr6.eq) goto loc_82866470;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82866468
	if (ctx.cr6.eq) goto loc_82866468;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82866474
	if (!ctx.cr6.eq) goto loc_82866474;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82866474
	goto loc_82866474;
loc_82866468:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82866474
	goto loc_82866474;
loc_82866470:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82866474:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-30804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,29744(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lfs f12,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x828664b0
	if (!ctx.cr6.gt) goto loc_828664B0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x828664b4
	goto loc_828664B4;
loc_828664B0:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_828664B4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x828664d8
	if (ctx.cr6.lt) goto loc_828664D8;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x828664dc
	if (!ctx.cr6.gt) goto loc_828664DC;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x828664dc
	goto loc_828664DC;
loc_828664D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828664DC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82866504
	if (ctx.cr6.eq) goto loc_82866504;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828664fc
	if (ctx.cr6.eq) goto loc_828664FC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82866508
	if (ctx.cr6.eq) goto loc_82866508;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82866508
	goto loc_82866508;
loc_828664FC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x82866508
	goto loc_82866508;
loc_82866504:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82866508:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bf1580
	ctx.lr = 0x82866518;
	sub_82BF1580(ctx, base);
loc_82866518:
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

__attribute__((alias("__imp__sub_82866530"))) PPC_WEAK_FUNC(sub_82866530);
PPC_FUNC_IMPL(__imp__sub_82866530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82866538;
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
	// lwz r4,156(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x828665a8
	if (!ctx.cr6.gt) goto loc_828665A8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82866590;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828665a8
	if (ctx.cr6.eq) goto loc_828665A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828665A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828665A8:
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

__attribute__((alias("__imp__sub_828665C0"))) PPC_WEAK_FUNC(sub_828665C0);
PPC_FUNC_IMPL(__imp__sub_828665C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828665C8;
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
	// lwz r4,156(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82866638
	if (!ctx.cr6.gt) goto loc_82866638;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82866620;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82866638
	if (ctx.cr6.eq) goto loc_82866638;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82866638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82866638:
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

__attribute__((alias("__imp__sub_82866650"))) PPC_WEAK_FUNC(sub_82866650);
PPC_FUNC_IMPL(__imp__sub_82866650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82866658;
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
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r4,288(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x828666d0
	if (!ctx.cr6.gt) goto loc_828666D0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x828666B0;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828666c8
	if (ctx.cr6.eq) goto loc_828666C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828666C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828666C8:
	// lwz r3,288(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// bl 0x82bf1db8
	ctx.lr = 0x828666D0;
	sub_82BF1DB8(ctx, base);
loc_828666D0:
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

__attribute__((alias("__imp__sub_828666E8"))) PPC_WEAK_FUNC(sub_828666E8);
PPC_FUNC_IMPL(__imp__sub_828666E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828666F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r4,288(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8286677c
	if (!ctx.cr6.gt) goto loc_8286677C;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82866748;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82866758
	if (ctx.cr6.eq) goto loc_82866758;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82866758;
	sub_827CC4E0(ctx, base);
loc_82866758:
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// lwz r4,288(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// bl 0x82becee0
	ctx.lr = 0x82866764;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286677c
	if (ctx.cr6.eq) goto loc_8286677C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8286677C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8286677C:
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

__attribute__((alias("__imp__sub_82866794"))) PPC_WEAK_FUNC(sub_82866794);
PPC_FUNC_IMPL(__imp__sub_82866794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82866798"))) PPC_WEAK_FUNC(sub_82866798);
PPC_FUNC_IMPL(__imp__sub_82866798) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x828667A0;
	__savegprlr_26(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,13192(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13192);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,13188(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// lwz r27,13180(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// lwz r26,13184(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13184);
loc_828667C8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82866818
	if (ctx.cr6.lt) goto loc_82866818;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// bge cr6,0x82866818
	if (!ctx.cr6.lt) goto loc_82866818;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82866818
	if (ctx.cr6.lt) goto loc_82866818;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x82866818
	if (!ctx.cr6.lt) goto loc_82866818;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82866828
	if (ctx.cr6.eq) goto loc_82866828;
loc_82866818:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x828667c8
	if (ctx.cr6.lt) goto loc_828667C8;
	// b 0x8286682c
	goto loc_8286682C;
loc_82866828:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8286682C:
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// stw r29,13192(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13192, ctx.r29.u32);
	// stw r27,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r27.u32);
	// stw r26,13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13184, ctx.r26.u32);
	// stw r28,13188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13188, ctx.r28.u32);
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82866844"))) PPC_WEAK_FUNC(sub_82866844);
PPC_FUNC_IMPL(__imp__sub_82866844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82866848"))) PPC_WEAK_FUNC(sub_82866848);
PPC_FUNC_IMPL(__imp__sub_82866848) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82866850;
	__savegprlr_26(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,13192(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13192);
	// lwz r28,13188(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// lwz r27,13180(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// lwz r26,13184(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
loc_82866874:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x828669b4
	if (ctx.cr6.lt) goto loc_828669B4;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// bge cr6,0x828669b4
	if (!ctx.cr6.lt) goto loc_828669B4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x828669b4
	if (ctx.cr6.lt) goto loc_828669B4;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x828669b4
	if (!ctx.cr6.lt) goto loc_828669B4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r8,r5
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x828669b4
	if (ctx.cr6.eq) goto loc_828669B4;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addic. r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82866998
	if (ctx.cr0.lt) goto loc_82866998;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bge cr6,0x82866998
	if (!ctx.cr6.lt) goto loc_82866998;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82866998
	if (ctx.cr6.eq) goto loc_82866998;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x828669a0
	if (ctx.cr6.lt) goto loc_828669A0;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bge cr6,0x828669a0
	if (!ctx.cr6.lt) goto loc_828669A0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x828669a0
	if (ctx.cr6.eq) goto loc_828669A0;
	// addic. r9,r8,1
	ctx.xer.ca = ctx.r8.u32 > 4294967294;
	ctx.r9.s64 = ctx.r8.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x828669a8
	if (ctx.cr0.lt) goto loc_828669A8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bge cr6,0x828669a8
	if (!ctx.cr6.lt) goto loc_828669A8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x828669a8
	if (ctx.cr6.eq) goto loc_828669A8;
	// addic. r9,r8,2
	ctx.xer.ca = ctx.r8.u32 > 4294967293;
	ctx.r9.s64 = ctx.r8.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x828669b0
	if (ctx.cr0.lt) goto loc_828669B0;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bge cr6,0x828669b0
	if (!ctx.cr6.lt) goto loc_828669B0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 6;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x828669b0
	if (ctx.cr6.eq) goto loc_828669B0;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x82866874
	if (ctx.cr6.lt) goto loc_82866874;
	// b 0x828669b4
	goto loc_828669B4;
loc_82866998:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x828669b4
	goto loc_828669B4;
loc_828669A0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x828669b4
	goto loc_828669B4;
loc_828669A8:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x828669b4
	goto loc_828669B4;
loc_828669B0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_828669B4:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r29,13192(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13192, ctx.r29.u32);
	// stw r27,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r27.u32);
	// stw r26,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r26.u32);
	// stw r28,13188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13188, ctx.r28.u32);
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828669CC"))) PPC_WEAK_FUNC(sub_828669CC);
PPC_FUNC_IMPL(__imp__sub_828669CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828669D0"))) PPC_WEAK_FUNC(sub_828669D0);
PPC_FUNC_IMPL(__imp__sub_828669D0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r8,r10,13434
	ctx.r8.s64 = ctx.r10.s64 + 13434;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r3,13188(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13188);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,128(r7)
	PPC_STORE_U32(ctx.r7.u32 + 128, ctx.r8.u32);
	// bl 0x8283bdf0
	ctx.lr = 0x82866A00;
	sub_8283BDF0(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82866A14"))) PPC_WEAK_FUNC(sub_82866A14);
PPC_FUNC_IMPL(__imp__sub_82866A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82866A18"))) PPC_WEAK_FUNC(sub_82866A18);
PPC_FUNC_IMPL(__imp__sub_82866A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1936(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1936);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82866a48
	if (!ctx.cr6.eq) goto loc_82866A48;
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
loc_82866A48:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82866A50"))) PPC_WEAK_FUNC(sub_82866A50);
PPC_FUNC_IMPL(__imp__sub_82866A50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2084(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2084);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82866aa0
	if (!ctx.cr6.eq) goto loc_82866AA0;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283d360
	ctx.lr = 0x82866A94;
	sub_8283D360(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82866aa8
	if (!ctx.cr6.eq) goto loc_82866AA8;
loc_82866AA0:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82866ab0
	goto loc_82866AB0;
loc_82866AA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82866AB0:
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

__attribute__((alias("__imp__sub_82866AC8"))) PPC_WEAK_FUNC(sub_82866AC8);
PPC_FUNC_IMPL(__imp__sub_82866AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82866AD0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,13192(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r22,13180(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r21,13184(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r9,r10,18
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFF;
	// rlwinm r9,r9,0,31,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82866b6c
	if (!ctx.cr6.eq) goto loc_82866B6C;
	// rlwinm r11,r10,0,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFC;
	// rlwinm r11,r11,0,29,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC007;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,29744
	ctx.r11.s64 = ctx.r11.s64 + 29744;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x82866b58
	if (!ctx.cr6.eq) goto loc_82866B58;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82866b94
	goto loc_82866B94;
loc_82866B58:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f0,-29444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29448(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29448);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82866b8c
	goto loc_82866B8C;
loc_82866B6C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,29744
	ctx.r11.s64 = ctx.r11.s64 + 29744;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f0,-29452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,-29456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29456);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82866B8C:
	// stfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82866B94:
	// stfs f31,816(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r30,r31,808
	ctx.r30.s64 = ctx.r31.s64 + 808;
	// lwz r9,812(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82866bdc
	if (!ctx.cr6.eq) goto loc_82866BDC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804270
	ctx.lr = 0x82866BC4;
	sub_82804270(ctx, base);
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
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82866BDC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8212c210
	ctx.lr = 0x82866C18;
	sub_8212C210(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82808fd8
	ctx.lr = 0x82866C28;
	sub_82808FD8(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lfs f0,1052(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,1820
	ctx.r30.s64 = ctx.r31.s64 + 1820;
	// lfs f13,1056(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// addi r11,r11,852
	ctx.r11.s64 = ctx.r11.s64 + 852;
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,1820(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// stfs f7,1824(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1824, temp.u32);
	// stfs f6,1828(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82866c8c
	if (!ctx.cr6.lt) goto loc_82866C8C;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,76(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// b 0x82866c90
	goto loc_82866C90;
loc_82866C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82866C90:
	// stw r3,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r3.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82866cc4
	if (ctx.cr6.eq) goto loc_82866CC4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82866cb4
	if (ctx.cr6.eq) goto loc_82866CB4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82866ccc
	if (!ctx.cr6.eq) goto loc_82866CCC;
	// lwz r3,13188(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// b 0x82866ccc
	goto loc_82866CCC;
loc_82866CB4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82866ccc
	goto loc_82866CCC;
loc_82866CC4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82866CCC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82804410
	ctx.lr = 0x82866CD4;
	sub_82804410(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r24,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r24.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r22,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r22.u32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stw r21,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r21.u32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,1064(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// stfs f7,1068(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1068, temp.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// stfs f6,1072(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82866D20"))) PPC_WEAK_FUNC(sub_82866D20);
PPC_FUNC_IMPL(__imp__sub_82866D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82866D28;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8221ad04
	ctx.lr = 0x82866D30;
	__savefpr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// fmr f23,f2
	ctx.f23.f64 = ctx.f2.f64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r23,13192(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r22,13188(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r21,13180(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r20,13184(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// bl 0x82beb878
	ctx.lr = 0x82866D8C;
	sub_82BEB878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x82866D9C;
	sub_82804410(ctx, base);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,-29532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x82866df4
	if (ctx.cr6.eq) goto loc_82866DF4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82866dec
	if (ctx.cr6.eq) goto loc_82866DEC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82866de4
	if (ctx.cr6.eq) goto loc_82866DE4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82866df8
	goto loc_82866DF8;
loc_82866DE4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82866df8
	goto loc_82866DF8;
loc_82866DEC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82866df8
	goto loc_82866DF8;
loc_82866DF4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82866DF8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82866e40
	if (ctx.cr6.eq) goto loc_82866E40;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82866e2c
	if (ctx.cr6.eq) goto loc_82866E2C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82866e28
	if (ctx.cr6.eq) goto loc_82866E28;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82866e20
	if (ctx.cr6.eq) goto loc_82866E20;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82866e2c
	goto loc_82866E2C;
loc_82866E20:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82866e2c
	goto loc_82866E2C;
loc_82866E28:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82866E2C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82866E38;
	sub_82804410(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82866E40:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,13412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// addi r3,r11,852
	ctx.r3.s64 = ctx.r11.s64 + 852;
	// bl 0x827c8c08
	ctx.lr = 0x82866E5C;
	sub_827C8C08(ctx, base);
	// lwz r11,13412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,852
	ctx.r3.s64 = ctx.r11.s64 + 852;
	// lfs f30,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// fmr f25,f30
	ctx.f25.f64 = ctx.f30.f64;
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x827c8b10
	ctx.lr = 0x82866E84;
	sub_827C8B10(ctx, base);
	// lwz r11,13412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,852
	ctx.r3.s64 = ctx.r11.s64 + 852;
	// lfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f26,100(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x827c8b10
	ctx.lr = 0x82866EB4;
	sub_827C8B10(ctx, base);
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f26,f30
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// fsubs f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f28,f29
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f8,f27,f31
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fsubs f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(ctx.f24.f64, ctx.f0.f64);
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f30,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f4,f30,f29
	ctx.f4.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f3,f9,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f2,f4,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f1,f8,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f13,f7,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fsqrts f27,f1
	ctx.f27.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsqrts f26,f13
	ctx.f26.f64 = double(float(sqrt(ctx.f13.f64)));
	// blt cr6,0x82866f9c
	if (ctx.cr6.lt) goto loc_82866F9C;
	// fcmpu cr6,f27,f26
	ctx.cr6.compare(ctx.f27.f64, ctx.f26.f64);
	// blt cr6,0x82866f5c
	if (ctx.cr6.lt) goto loc_82866F5C;
	// fcmpu cr6,f26,f24
	ctx.cr6.compare(ctx.f26.f64, ctx.f24.f64);
	// blt cr6,0x82866f3c
	if (ctx.cr6.lt) goto loc_82866F3C;
	// fcmpu cr6,f26,f23
	ctx.cr6.compare(ctx.f26.f64, ctx.f23.f64);
	// bge cr6,0x82866fe8
	if (!ctx.cr6.lt) goto loc_82866FE8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x82866fe8
	goto loc_82866FE8;
loc_82866F3C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8283cdc8
	ctx.lr = 0x82866F54;
	sub_8283CDC8(ctx, base);
	// lfs f29,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82866fe0
	goto loc_82866FE0;
loc_82866F5C:
	// fcmpu cr6,f27,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f24.f64);
	// blt cr6,0x82866f7c
	if (ctx.cr6.lt) goto loc_82866F7C;
	// fcmpu cr6,f27,f23
	ctx.cr6.compare(ctx.f27.f64, ctx.f23.f64);
	// bgt cr6,0x82866fe8
	if (ctx.cr6.gt) goto loc_82866FE8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x82866fe8
	goto loc_82866FE8;
loc_82866F7C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8283cdc8
	ctx.lr = 0x82866F94;
	sub_8283CDC8(ctx, base);
	// lfs f29,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82866fe0
	goto loc_82866FE0;
loc_82866F9C:
	// fabs f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,4700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82866fd0
	if (ctx.cr6.lt) goto loc_82866FD0;
	// fabs f13,f26
	ctx.f13.u64 = ctx.f26.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82866fe8
	if (!ctx.cr6.lt) goto loc_82866FE8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x82866FC8;
	sub_82804410(ctx, base);
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x82866fe0
	goto loc_82866FE0;
loc_82866FD0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x82866FDC;
	sub_82804410(ctx, base);
	// fmr f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f28.f64;
loc_82866FE0:
	// lfs f25,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f25.f64 = double(temp.f32);
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
loc_82866FE8:
	// fcmpu cr6,f27,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f24.f64);
	// blt cr6,0x82866ff8
	if (ctx.cr6.lt) goto loc_82866FF8;
	// fcmpu cr6,f26,f24
	ctx.cr6.compare(ctx.f26.f64, ctx.f24.f64);
	// bge cr6,0x82867000
	if (!ctx.cr6.lt) goto loc_82867000;
loc_82866FF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1600(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1600, ctx.r11.u32);
loc_82867000:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f25,84(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r22.u32);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8221ad50
	ctx.lr = 0x82867040;
	__restfpr_23(ctx, base);
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82867044"))) PPC_WEAK_FUNC(sub_82867044);
PPC_FUNC_IMPL(__imp__sub_82867044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82867048"))) PPC_WEAK_FUNC(sub_82867048);
PPC_FUNC_IMPL(__imp__sub_82867048) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2084(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2084);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x828670b4
	if (!ctx.cr6.eq) goto loc_828670B4;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283d360
	ctx.lr = 0x82867090;
	sub_8283D360(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828670bc
	if (!ctx.cr6.eq) goto loc_828670BC;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8283d360
	ctx.lr = 0x828670A8;
	sub_8283D360(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828670bc
	if (!ctx.cr6.eq) goto loc_828670BC;
loc_828670B4:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x828670c4
	goto loc_828670C4;
loc_828670BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_828670C4:
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

__attribute__((alias("__imp__sub_828670DC"))) PPC_WEAK_FUNC(sub_828670DC);
PPC_FUNC_IMPL(__imp__sub_828670DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828670E0"))) PPC_WEAK_FUNC(sub_828670E0);
PPC_FUNC_IMPL(__imp__sub_828670E0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f7,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// bl 0x82beede8
	ctx.lr = 0x82867104;
	sub_82BEEDE8(ctx, base);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867148
	if (ctx.cr6.eq) goto loc_82867148;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867148
	if (ctx.cr6.eq) goto loc_82867148;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f9,f11,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_82867148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82867158"))) PPC_WEAK_FUNC(sub_82867158);
PPC_FUNC_IMPL(__imp__sub_82867158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82867160;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r30.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82beee50
	ctx.lr = 0x828671B0;
	sub_82BEEE50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82beede8
	ctx.lr = 0x828671BC;
	sub_82BEEDE8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,776
	ctx.r11.s64 = ctx.r31.s64 + 776;
	// stfs f10,784(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// lfs f12,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,776(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f11,780(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 780, temp.u32);
	// lwz r10,12492(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// stfs f12,784(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f9,780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f6,776(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f6,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fsqrts f10,f4
	ctx.f10.f64 = double(float(sqrt(ctx.f4.f64)));
	// beq cr6,0x82867228
	if (ctx.cr6.eq) goto loc_82867228;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8286722c
	goto loc_8286722C;
loc_82867228:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8286722C:
	// fmuls f11,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f9,956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	ctx.f9.f64 = double(temp.f32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// lfs f13,-4472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4472);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f7,f8,f8,f12
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f12.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fsubs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fmuls f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmadds f2,f4,f9,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f2,956(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82867274"))) PPC_WEAK_FUNC(sub_82867274);
PPC_FUNC_IMPL(__imp__sub_82867274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82867278"))) PPC_WEAK_FUNC(sub_82867278);
PPC_FUNC_IMPL(__imp__sub_82867278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82867280;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r23,13184(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828672e4
	if (ctx.cr6.eq) goto loc_828672E4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828672e4
	if (ctx.cr6.eq) goto loc_828672E4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_828672E4:
	// lis r4,16386
	ctx.r4.s64 = 1073872896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4100
	ctx.r4.u64 = ctx.r4.u64 | 4100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beee50
	ctx.lr = 0x828672F8;
	sub_82BEEE50(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f12,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x8286731c
	if (ctx.cr6.eq) goto loc_8286731C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286731c
	if (ctx.cr6.eq) goto loc_8286731C;
	// stfs f12,32(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
loc_8286731C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82867408
	if (ctx.cr6.eq) goto loc_82867408;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82867360
	if (ctx.cr6.eq) goto loc_82867360;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82867360
	if (ctx.cr6.eq) goto loc_82867360;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lfs f13,-29820(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29820);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_82867360:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867408
	if (ctx.cr6.eq) goto loc_82867408;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82867394
	if (ctx.cr6.eq) goto loc_82867394;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82867394
	if (ctx.cr6.eq) goto loc_82867394;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
loc_82867394:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867408
	if (ctx.cr6.eq) goto loc_82867408;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828673b8
	if (ctx.cr6.eq) goto loc_828673B8;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828673b8
	if (ctx.cr6.eq) goto loc_828673B8;
	// stfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_828673B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867408
	if (ctx.cr6.eq) goto loc_82867408;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828673d8
	if (ctx.cr6.eq) goto loc_828673D8;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,-3896(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
loc_828673D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867408
	if (ctx.cr6.eq) goto loc_82867408;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867408
	if (ctx.cr6.eq) goto loc_82867408;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,-30464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30464);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27476);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f13,88(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
loc_82867408:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82867420"))) PPC_WEAK_FUNC(sub_82867420);
PPC_FUNC_IMPL(__imp__sub_82867420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82867428;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r18,13188(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r19,13192(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13192);
	// lwz r17,13180(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13180);
	// lwz r16,13184(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13184);
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r3,13192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r11.u32);
	// lwz r8,1748(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1748);
	// stw r11,13184(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13184, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x828677d4
	if (ctx.cr6.eq) goto loc_828677D4;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828677d4
	if (!ctx.cr6.eq) goto loc_828677D4;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// addi r25,r11,-29532
	ctx.r25.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x828674c4
	if (ctx.cr6.eq) goto loc_828674C4;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x828674bc
	if (ctx.cr6.eq) goto loc_828674BC;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x828674b4
	if (ctx.cr6.eq) goto loc_828674B4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x828674c8
	goto loc_828674C8;
loc_828674B4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828674c8
	goto loc_828674C8;
loc_828674BC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x828674c8
	goto loc_828674C8;
loc_828674C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_828674C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828677d4
	if (ctx.cr6.eq) goto loc_828677D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283d1e0
	ctx.lr = 0x828674D8;
	sub_8283D1E0(ctx, base);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lwz r29,13188(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// beq cr6,0x82867514
	if (ctx.cr6.eq) goto loc_82867514;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x8286750c
	if (ctx.cr6.eq) goto loc_8286750C;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x82867504
	if (ctx.cr6.eq) goto loc_82867504;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82867518
	goto loc_82867518;
loc_82867504:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82867518
	goto loc_82867518;
loc_8286750C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82867518
	goto loc_82867518;
loc_82867514:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82867518:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828675a4
	if (ctx.cr6.eq) goto loc_828675A4;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x8286755c
	if (ctx.cr6.eq) goto loc_8286755C;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x82867554
	if (ctx.cr6.eq) goto loc_82867554;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// beq cr6,0x8286754c
	if (ctx.cr6.eq) goto loc_8286754C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82867560
	goto loc_82867560;
loc_8286754C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82867560
	goto loc_82867560;
loc_82867554:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82867560
	goto loc_82867560;
loc_8286755C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82867560:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x82867590
	if (ctx.cr6.eq) goto loc_82867590;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82867588
	if (ctx.cr6.eq) goto loc_82867588;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x82867580
	if (ctx.cr6.eq) goto loc_82867580;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82867594
	goto loc_82867594;
loc_82867580:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82867594
	goto loc_82867594;
loc_82867588:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82867594
	goto loc_82867594;
loc_82867590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82867594:
	// bl 0x82bf1238
	ctx.lr = 0x82867598;
	sub_82BF1238(ctx, base);
	// lwz r29,13188(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_828675A4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x828675d4
	if (ctx.cr6.eq) goto loc_828675D4;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x828675cc
	if (ctx.cr6.eq) goto loc_828675CC;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x828675c4
	if (ctx.cr6.eq) goto loc_828675C4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x828675d8
	goto loc_828675D8;
loc_828675C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828675d8
	goto loc_828675D8;
loc_828675CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828675d8
	goto loc_828675D8;
loc_828675D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828675D8:
	// bl 0x82803468
	ctx.lr = 0x828675DC;
	sub_82803468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828677d4
	if (ctx.cr6.eq) goto loc_828677D4;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x82867614
	if (ctx.cr6.eq) goto loc_82867614;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x8286760c
	if (ctx.cr6.eq) goto loc_8286760C;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x82867604
	if (ctx.cr6.eq) goto loc_82867604;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82867618
	goto loc_82867618;
loc_82867604:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82867618
	goto loc_82867618;
loc_8286760C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82867618
	goto loc_82867618;
loc_82867614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82867618:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82beb878
	ctx.lr = 0x82867620;
	sub_82BEB878(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82867650
	if (ctx.cr6.eq) goto loc_82867650;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82867648
	if (ctx.cr6.eq) goto loc_82867648;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82867640
	if (ctx.cr6.eq) goto loc_82867640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867654
	goto loc_82867654;
loc_82867640:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82867654
	goto loc_82867654;
loc_82867648:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82867654
	goto loc_82867654;
loc_82867650:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82867654:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828676cc
	if (ctx.cr6.eq) goto loc_828676CC;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x8286768c
	if (ctx.cr6.eq) goto loc_8286768C;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x82867684
	if (ctx.cr6.eq) goto loc_82867684;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// beq cr6,0x8286767c
	if (ctx.cr6.eq) goto loc_8286767C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82867690
	goto loc_82867690;
loc_8286767C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82867690
	goto loc_82867690;
loc_82867684:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82867690
	goto loc_82867690;
loc_8286768C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82867690:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828676b8
	if (ctx.cr6.eq) goto loc_828676B8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828676b0
	if (ctx.cr6.eq) goto loc_828676B0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828676bc
	if (!ctx.cr6.eq) goto loc_828676BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828676bc
	goto loc_828676BC;
loc_828676B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828676bc
	goto loc_828676BC;
loc_828676B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828676BC:
	// bl 0x82bf1238
	ctx.lr = 0x828676C0;
	sub_82BF1238(ctx, base);
	// lwz r29,13188(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_828676CC:
	// addi r28,r28,1936
	ctx.r28.s64 = ctx.r28.s64 + 1936;
	// li r27,5
	ctx.r27.s64 = 5;
loc_828676D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828677c8
	if (ctx.cr6.eq) goto loc_828677C8;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x82867710
	if (ctx.cr6.eq) goto loc_82867710;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82867708
	if (ctx.cr6.eq) goto loc_82867708;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x82867700
	if (ctx.cr6.eq) goto loc_82867700;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82867714
	goto loc_82867714;
loc_82867700:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82867714
	goto loc_82867714;
loc_82867708:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82867714
	goto loc_82867714;
loc_82867710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82867714:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82beb878
	ctx.lr = 0x8286771C;
	sub_82BEB878(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286774c
	if (ctx.cr6.eq) goto loc_8286774C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82867744
	if (ctx.cr6.eq) goto loc_82867744;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286773c
	if (ctx.cr6.eq) goto loc_8286773C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867750
	goto loc_82867750;
loc_8286773C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82867750
	goto loc_82867750;
loc_82867744:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82867750
	goto loc_82867750;
loc_8286774C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82867750:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828677c8
	if (ctx.cr6.eq) goto loc_828677C8;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x82867788
	if (ctx.cr6.eq) goto loc_82867788;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x82867780
	if (ctx.cr6.eq) goto loc_82867780;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// beq cr6,0x82867778
	if (ctx.cr6.eq) goto loc_82867778;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x8286778c
	goto loc_8286778C;
loc_82867778:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8286778c
	goto loc_8286778C;
loc_82867780:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8286778c
	goto loc_8286778C;
loc_82867788:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8286778C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828677b4
	if (ctx.cr6.eq) goto loc_828677B4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828677ac
	if (ctx.cr6.eq) goto loc_828677AC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828677b8
	if (!ctx.cr6.eq) goto loc_828677B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828677b8
	goto loc_828677B8;
loc_828677AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828677b8
	goto loc_828677B8;
loc_828677B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828677B8:
	// bl 0x82bf1238
	ctx.lr = 0x828677BC;
	sub_82BF1238(ctx, base);
	// lwz r29,13188(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_828677C8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x828676d4
	if (!ctx.cr0.eq) goto loc_828676D4;
loc_828677D4:
	// stw r19,13192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13192, ctx.r19.u32);
	// stw r17,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r17.u32);
	// stw r16,13184(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13184, ctx.r16.u32);
	// stw r18,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828677EC"))) PPC_WEAK_FUNC(sub_828677EC);
PPC_FUNC_IMPL(__imp__sub_828677EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828677F0"))) PPC_WEAK_FUNC(sub_828677F0);
PPC_FUNC_IMPL(__imp__sub_828677F0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r7,r8,-29532
	ctx.r7.s64 = ctx.r8.s64 + -29532;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,-29532(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,456(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867840
	if (ctx.cr6.eq) goto loc_82867840;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867838
	if (ctx.cr6.eq) goto loc_82867838;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867844
	if (!ctx.cr6.eq) goto loc_82867844;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82867844
	goto loc_82867844;
loc_82867838:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867844
	goto loc_82867844;
loc_82867840:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82867844:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// addi r11,r11,1964
	ctx.r11.s64 = ctx.r11.s64 + 1964;
loc_82867858:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82867878
	if (ctx.cr6.eq) goto loc_82867878;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x82867858
	if (ctx.cr6.lt) goto loc_82867858;
	// blr 
	return;
loc_82867878:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,1516(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1516);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x828678c0
	if (!ctx.cr6.eq) goto loc_828678C0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828678b4
	if (ctx.cr6.eq) goto loc_828678B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828678b8
	if (ctx.cr6.eq) goto loc_828678B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828678ac
	if (ctx.cr6.eq) goto loc_828678AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x828678b8
	goto loc_828678B8;
loc_828678AC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x828678b8
	goto loc_828678B8;
loc_828678B4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_828678B8:
	// lwz r5,2084(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2084);
	// b 0x82841298
	sub_82841298(ctx, base);
	return;
loc_828678C0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828678e8
	if (ctx.cr6.eq) goto loc_828678E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828678ec
	if (ctx.cr6.eq) goto loc_828678EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828678e0
	if (ctx.cr6.eq) goto loc_828678E0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x828678ec
	goto loc_828678EC;
loc_828678E0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x828678ec
	goto loc_828678EC;
loc_828678E8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_828678EC:
	// lwz r5,2084(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2084);
	// b 0x82841130
	sub_82841130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828678F4"))) PPC_WEAK_FUNC(sub_828678F4);
PPC_FUNC_IMPL(__imp__sub_828678F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828678F8"))) PPC_WEAK_FUNC(sub_828678F8);
PPC_FUNC_IMPL(__imp__sub_828678F8) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867948
	if (ctx.cr6.eq) goto loc_82867948;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867940
	if (ctx.cr6.eq) goto loc_82867940;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82867938
	if (ctx.cr6.eq) goto loc_82867938;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286794c
	goto loc_8286794C;
loc_82867938:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286794c
	goto loc_8286794C;
loc_82867940:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286794c
	goto loc_8286794C;
loc_82867948:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8286794C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828679ac
	if (ctx.cr6.eq) goto loc_828679AC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286797c
	if (ctx.cr6.eq) goto loc_8286797C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867974
	if (ctx.cr6.eq) goto loc_82867974;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867980
	if (!ctx.cr6.eq) goto loc_82867980;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867980
	goto loc_82867980;
loc_82867974:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82867980
	goto loc_82867980;
loc_8286797C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82867980:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x828679ac
	if (!ctx.cr6.gt) goto loc_828679AC;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bge cr6,0x828679ac
	if (!ctx.cr6.lt) goto loc_828679AC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r4,14
	ctx.r10.s64 = ctx.r4.s64 + 14;
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
loc_828679AC:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828679B0"))) PPC_WEAK_FUNC(sub_828679B0);
PPC_FUNC_IMPL(__imp__sub_828679B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,1516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828679f0
	if (ctx.cr6.eq) goto loc_828679F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828679e8
	if (ctx.cr6.eq) goto loc_828679E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828679f4
	if (!ctx.cr6.eq) goto loc_828679F4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828679f4
	goto loc_828679F4;
loc_828679E8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828679f4
	goto loc_828679F4;
loc_828679F0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828679F4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,284(r6)
	PPC_STORE_U32(ctx.r6.u32 + 284, ctx.r8.u32);
	// lwz r11,1516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867a34
	if (ctx.cr6.eq) goto loc_82867A34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867a2c
	if (ctx.cr6.eq) goto loc_82867A2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867a38
	if (!ctx.cr6.eq) goto loc_82867A38;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867a38
	goto loc_82867A38;
loc_82867A2C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82867a38
	goto loc_82867A38;
loc_82867A34:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82867A38:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,288(r6)
	PPC_STORE_U32(ctx.r6.u32 + 288, ctx.r8.u32);
	// lwz r11,1516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867a74
	if (ctx.cr6.eq) goto loc_82867A74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867a6c
	if (ctx.cr6.eq) goto loc_82867A6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867a78
	if (!ctx.cr6.eq) goto loc_82867A78;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867a78
	goto loc_82867A78;
loc_82867A6C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82867a78
	goto loc_82867A78;
loc_82867A74:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82867A78:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,292(r6)
	PPC_STORE_U32(ctx.r6.u32 + 292, ctx.r8.u32);
	// lwz r11,1516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867ad4
	if (ctx.cr6.eq) goto loc_82867AD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867abc
	if (ctx.cr6.eq) goto loc_82867ABC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867ad8
	if (!ctx.cr6.eq) goto loc_82867AD8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r8.u32);
	// blr 
	return;
loc_82867ABC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r8.u32);
	// blr 
	return;
loc_82867AD4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82867AD8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82867AEC"))) PPC_WEAK_FUNC(sub_82867AEC);
PPC_FUNC_IMPL(__imp__sub_82867AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82867AF0"))) PPC_WEAK_FUNC(sub_82867AF0);
PPC_FUNC_IMPL(__imp__sub_82867AF0) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867b40
	if (ctx.cr6.eq) goto loc_82867B40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867b38
	if (ctx.cr6.eq) goto loc_82867B38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82867b30
	if (ctx.cr6.eq) goto loc_82867B30;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82867b44
	goto loc_82867B44;
loc_82867B30:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82867b44
	goto loc_82867B44;
loc_82867B38:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82867b44
	goto loc_82867B44;
loc_82867B40:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82867B44:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82867b94
	if (ctx.cr6.eq) goto loc_82867B94;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867b74
	if (ctx.cr6.eq) goto loc_82867B74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867b6c
	if (ctx.cr6.eq) goto loc_82867B6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867b78
	if (!ctx.cr6.eq) goto loc_82867B78;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867b78
	goto loc_82867B78;
loc_82867B6C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82867b78
	goto loc_82867B78;
loc_82867B74:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82867B78:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82867b94
	if (!ctx.cr6.gt) goto loc_82867B94;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// blt cr6,0x82867ba0
	if (ctx.cr6.lt) goto loc_82867BA0;
loc_82867B94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82867BA0:
	// addi r10,r5,14
	ctx.r10.s64 = ctx.r5.s64 + 14;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82867BB4"))) PPC_WEAK_FUNC(sub_82867BB4);
PPC_FUNC_IMPL(__imp__sub_82867BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82867BB8"))) PPC_WEAK_FUNC(sub_82867BB8);
PPC_FUNC_IMPL(__imp__sub_82867BB8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r6,-2
	ctx.r6.s64 = -2;
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
	// lwz r9,1516(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82867c10
	if (ctx.cr6.eq) goto loc_82867C10;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82867c08
	if (ctx.cr6.eq) goto loc_82867C08;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82867c00
	if (ctx.cr6.eq) goto loc_82867C00;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82867c14
	goto loc_82867C14;
loc_82867C00:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867c14
	goto loc_82867C14;
loc_82867C08:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82867c14
	goto loc_82867C14;
loc_82867C10:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82867C14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82867c7c
	if (ctx.cr6.eq) goto loc_82867C7C;
	// lwz r11,456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867c48
	if (ctx.cr6.eq) goto loc_82867C48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867c40
	if (ctx.cr6.eq) goto loc_82867C40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867c4c
	if (!ctx.cr6.eq) goto loc_82867C4C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867c4c
	goto loc_82867C4C;
loc_82867C40:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82867c4c
	goto loc_82867C4C;
loc_82867C48:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82867C4C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r11,r11,1964
	ctx.r11.s64 = ctx.r11.s64 + 1964;
loc_82867C60:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82867c88
	if (ctx.cr6.eq) goto loc_82867C88;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82867c60
	if (ctx.cr6.lt) goto loc_82867C60;
loc_82867C7C:
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82867C88:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82867c7c
	if (ctx.cr6.lt) goto loc_82867C7C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82867cc0
	if (ctx.cr6.eq) goto loc_82867CC0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82867cb8
	if (ctx.cr6.eq) goto loc_82867CB8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82867cb0
	if (ctx.cr6.eq) goto loc_82867CB0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82867cc4
	goto loc_82867CC4;
loc_82867CB0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867cc4
	goto loc_82867CC4;
loc_82867CB8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82867cc4
	goto loc_82867CC4;
loc_82867CC0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82867CC4:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x82867cf0
	if (!ctx.cr6.lt) goto loc_82867CF0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,71
	ctx.r10.s64 = ctx.r10.s64 + 71;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82867CF0:
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82867D00"))) PPC_WEAK_FUNC(sub_82867D00);
PPC_FUNC_IMPL(__imp__sub_82867D00) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867d50
	if (ctx.cr6.eq) goto loc_82867D50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867d48
	if (ctx.cr6.eq) goto loc_82867D48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82867d40
	if (ctx.cr6.eq) goto loc_82867D40;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82867d54
	goto loc_82867D54;
loc_82867D40:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82867d54
	goto loc_82867D54;
loc_82867D48:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82867d54
	goto loc_82867D54;
loc_82867D50:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82867D54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867da4
	if (ctx.cr6.eq) goto loc_82867DA4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867d8c
	if (ctx.cr6.eq) goto loc_82867D8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867da8
	if (!ctx.cr6.eq) goto loc_82867DA8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r4.u32);
	// blr 
	return;
loc_82867D8C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r4.u32);
	// blr 
	return;
loc_82867DA4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82867DA8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82867DBC"))) PPC_WEAK_FUNC(sub_82867DBC);
PPC_FUNC_IMPL(__imp__sub_82867DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82867DC0"))) PPC_WEAK_FUNC(sub_82867DC0);
PPC_FUNC_IMPL(__imp__sub_82867DC0) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867e10
	if (ctx.cr6.eq) goto loc_82867E10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867e08
	if (ctx.cr6.eq) goto loc_82867E08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82867e00
	if (ctx.cr6.eq) goto loc_82867E00;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82867e14
	goto loc_82867E14;
loc_82867E00:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82867e14
	goto loc_82867E14;
loc_82867E08:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82867e14
	goto loc_82867E14;
loc_82867E10:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82867E14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82867e74
	if (ctx.cr6.eq) goto loc_82867E74;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867e44
	if (ctx.cr6.eq) goto loc_82867E44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867e3c
	if (ctx.cr6.eq) goto loc_82867E3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867e48
	if (!ctx.cr6.eq) goto loc_82867E48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867e48
	goto loc_82867E48;
loc_82867E3C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82867e48
	goto loc_82867E48;
loc_82867E44:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82867E48:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x82867e74
	if (!ctx.cr6.gt) goto loc_82867E74;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bge cr6,0x82867e74
	if (!ctx.cr6.lt) goto loc_82867E74;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r4,14
	ctx.r10.s64 = ctx.r4.s64 + 14;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82867E74:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82867E78"))) PPC_WEAK_FUNC(sub_82867E78);
PPC_FUNC_IMPL(__imp__sub_82867E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,48(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867ec0
	if (ctx.cr6.eq) goto loc_82867EC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867eb8
	if (ctx.cr6.eq) goto loc_82867EB8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867ec4
	if (!ctx.cr6.eq) goto loc_82867EC4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867ec4
	goto loc_82867EC4;
loc_82867EB8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82867ec4
	goto loc_82867EC4;
loc_82867EC0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82867EC4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// addi r11,r11,1964
	ctx.r11.s64 = ctx.r11.s64 + 1964;
loc_82867ED8:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,39
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 39, ctx.xer);
	// beq cr6,0x82867ef8
	if (ctx.cr6.eq) goto loc_82867EF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82867ed8
	if (ctx.cr6.lt) goto loc_82867ED8;
	// blr 
	return;
loc_82867EF8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82867f54
	if (ctx.cr6.lt) goto loc_82867F54;
	// lwz r11,1516(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867f2c
	if (ctx.cr6.eq) goto loc_82867F2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867f24
	if (ctx.cr6.eq) goto loc_82867F24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867f30
	if (!ctx.cr6.eq) goto loc_82867F30;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867f30
	goto loc_82867F30;
loc_82867F24:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82867f30
	goto loc_82867F30;
loc_82867F2C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82867F30:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x82867f54
	if (!ctx.cr6.lt) goto loc_82867F54;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,71
	ctx.r10.s64 = ctx.r10.s64 + 71;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82867F54:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82867F58"))) PPC_WEAK_FUNC(sub_82867F58);
PPC_FUNC_IMPL(__imp__sub_82867F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,1516(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867fac
	if (ctx.cr6.eq) goto loc_82867FAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867fa4
	if (ctx.cr6.eq) goto loc_82867FA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82867f9c
	if (ctx.cr6.eq) goto loc_82867F9C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82867fb0
	goto loc_82867FB0;
loc_82867F9C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82867fb0
	goto loc_82867FB0;
loc_82867FA4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82867fb0
	goto loc_82867FB0;
loc_82867FAC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82867FB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82867ffc
	if (ctx.cr6.eq) goto loc_82867FFC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82867fe0
	if (ctx.cr6.eq) goto loc_82867FE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82867fd8
	if (ctx.cr6.eq) goto loc_82867FD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82867fe4
	if (!ctx.cr6.eq) goto loc_82867FE4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82867fe4
	goto loc_82867FE4;
loc_82867FD8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82867fe4
	goto loc_82867FE4;
loc_82867FE0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82867FE4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82867FFC:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82868004"))) PPC_WEAK_FUNC(sub_82868004);
PPC_FUNC_IMPL(__imp__sub_82868004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82868008"))) PPC_WEAK_FUNC(sub_82868008);
PPC_FUNC_IMPL(__imp__sub_82868008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// lwz r10,1840(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1840);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82868058
	if (ctx.cr6.eq) goto loc_82868058;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82868050
	if (ctx.cr6.eq) goto loc_82868050;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82868048
	if (ctx.cr6.eq) goto loc_82868048;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8286805c
	goto loc_8286805C;
loc_82868048:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8286805c
	goto loc_8286805C;
loc_82868050:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x8286805c
	goto loc_8286805C;
loc_82868058:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8286805C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828680bc
	if (ctx.cr6.eq) goto loc_828680BC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82868090
	if (ctx.cr6.eq) goto loc_82868090;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286808c
	if (ctx.cr6.eq) goto loc_8286808C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82868084
	if (ctx.cr6.eq) goto loc_82868084;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82868090
	goto loc_82868090;
loc_82868084:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868090
	goto loc_82868090;
loc_8286808C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82868090:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r4,11680(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11680, ctx.r4.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r5,11680(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11680);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x828680bc
	if (!ctx.cr6.eq) goto loc_828680BC;
	// stw r4,10128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10128, ctx.r4.u32);
loc_828680BC:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828680C0"))) PPC_WEAK_FUNC(sub_828680C0);
PPC_FUNC_IMPL(__imp__sub_828680C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828680C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r27,13180(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r8.u32);
	// stw r8,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r8.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286813c
	if (ctx.cr6.eq) goto loc_8286813C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8286812c
	if (ctx.cr6.eq) goto loc_8286812C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82868124
	if (ctx.cr6.eq) goto loc_82868124;
	// b 0x82868144
	goto loc_82868144;
loc_82868124:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82868144
	goto loc_82868144;
loc_8286812C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82868144
	goto loc_82868144;
loc_8286813C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82868144:
	// bl 0x82801328
	ctx.lr = 0x82868148;
	sub_82801328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286815c
	if (ctx.cr6.eq) goto loc_8286815C;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8283de08
	ctx.lr = 0x8286815C;
	sub_8283DE08(ctx, base);
loc_8286815C:
	// stw r25,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r27,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r27.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82868174"))) PPC_WEAK_FUNC(sub_82868174);
PPC_FUNC_IMPL(__imp__sub_82868174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82868178"))) PPC_WEAK_FUNC(sub_82868178);
PPC_FUNC_IMPL(__imp__sub_82868178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82868180;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r31,13192(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r30,13188(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r29,13180(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// stw r10,2144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2144, ctx.r10.u32);
	// bl 0x8283de08
	ctx.lr = 0x828681D0;
	sub_8283DE08(ctx, base);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// stw r29,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828681E8"))) PPC_WEAK_FUNC(sub_828681E8);
PPC_FUNC_IMPL(__imp__sub_828681E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828681F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r31,13192(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r30,13188(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r29,13180(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// stw r10,1308(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1308, ctx.r10.u32);
	// bl 0x8283de08
	ctx.lr = 0x82868240;
	sub_8283DE08(ctx, base);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// stw r29,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82868258"))) PPC_WEAK_FUNC(sub_82868258);
PPC_FUNC_IMPL(__imp__sub_82868258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82868260;
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
	// lwz r9,1224(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1224);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828682b4
	if (ctx.cr6.eq) goto loc_828682B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8283de08
	ctx.lr = 0x828682B4;
	sub_8283DE08(ctx, base);
loc_828682B4:
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

__attribute__((alias("__imp__sub_828682CC"))) PPC_WEAK_FUNC(sub_828682CC);
PPC_FUNC_IMPL(__imp__sub_828682CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828682D0"))) PPC_WEAK_FUNC(sub_828682D0);
PPC_FUNC_IMPL(__imp__sub_828682D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828682D8;
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
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r8,1224(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1224);
	// stw r10,1272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1272, ctx.r10.u32);
	// cmpwi cr6,r8,11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 11, ctx.xer);
	// beq cr6,0x82868330
	if (ctx.cr6.eq) goto loc_82868330;
	// bl 0x828680c0
	ctx.lr = 0x82868330;
	sub_828680C0(ctx, base);
loc_82868330:
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

__attribute__((alias("__imp__sub_82868348"))) PPC_WEAK_FUNC(sub_82868348);
PPC_FUNC_IMPL(__imp__sub_82868348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82868350;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,48(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,1220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1220);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828683ac
	if (ctx.cr6.eq) goto loc_828683AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828683a4
	if (ctx.cr6.eq) goto loc_828683A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286839c
	if (ctx.cr6.eq) goto loc_8286839C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828683b0
	goto loc_828683B0;
loc_8286839C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828683b0
	goto loc_828683B0;
loc_828683A4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828683b0
	goto loc_828683B0;
loc_828683AC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828683B0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82868484
	if (ctx.cr6.eq) goto loc_82868484;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828683e0
	if (ctx.cr6.eq) goto loc_828683E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828683d8
	if (ctx.cr6.eq) goto loc_828683D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828683e4
	if (!ctx.cr6.eq) goto loc_828683E4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828683e4
	goto loc_828683E4;
loc_828683D8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828683e4
	goto loc_828683E4;
loc_828683E0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828683E4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x828683F0;
	sub_82804410(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x828683FC;
	sub_82804410(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82747da0
	ctx.lr = 0x82868438;
	sub_82747DA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82747a18
	ctx.lr = 0x82868448;
	sub_82747A18(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f5,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-27236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27236);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82be05c8
	ctx.lr = 0x8286847C;
	sub_82BE05C8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82868484:
	// lwz r10,2056(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828684b8
	if (ctx.cr6.eq) goto loc_828684B8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828684b0
	if (ctx.cr6.eq) goto loc_828684B0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828684a8
	if (ctx.cr6.eq) goto loc_828684A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828684bc
	goto loc_828684BC;
loc_828684A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828684bc
	goto loc_828684BC;
loc_828684B0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828684bc
	goto loc_828684BC;
loc_828684B8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828684BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82868578
	if (ctx.cr6.eq) goto loc_82868578;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828684ec
	if (ctx.cr6.eq) goto loc_828684EC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828684f0
	if (ctx.cr6.eq) goto loc_828684F0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828684e4
	if (ctx.cr6.eq) goto loc_828684E4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x828684f0
	goto loc_828684F0;
loc_828684E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828684f0
	goto loc_828684F0;
loc_828684EC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_828684F0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x828684F8;
	sub_82804410(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x82868504;
	sub_82804410(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82747da0
	ctx.lr = 0x82868540;
	sub_82747DA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82747a18
	ctx.lr = 0x82868550;
	sub_82747A18(ctx, base);
	// lfs f5,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82be05c8
	ctx.lr = 0x82868578;
	sub_82BE05C8(ctx, base);
loc_82868578:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x828685ac
	if (!ctx.cr6.eq) goto loc_828685AC;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1164(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1164, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_828685AC:
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82be07b0
	ctx.lr = 0x828685CC;
	sub_82BE07B0(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be07b0
	ctx.lr = 0x828685E8;
	sub_82BE07B0(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f0,1160(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29688);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f7,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8286862c
	if (!ctx.cr6.gt) goto loc_8286862C;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,1164(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1164, temp.u32);
loc_8286862C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82868638"))) PPC_WEAK_FUNC(sub_82868638);
PPC_FUNC_IMPL(__imp__sub_82868638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82868640;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad04
	ctx.lr = 0x82868648;
	__savefpr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,48(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,2056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868690
	if (ctx.cr6.eq) goto loc_82868690;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868688
	if (ctx.cr6.eq) goto loc_82868688;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868694
	if (!ctx.cr6.eq) goto loc_82868694;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82868694
	goto loc_82868694;
loc_82868688:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82868694
	goto loc_82868694;
loc_82868690:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82868694:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82868870
	if (ctx.cr6.eq) goto loc_82868870;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82be07b0
	ctx.lr = 0x828686C0;
	sub_82BE07B0(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r10,r28,-18644
	ctx.r10.s64 = ctx.r28.s64 + -18644;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-8592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8592);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f26,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f25.f64 = double(temp.f32);
	// bl 0x82be07b0
	ctx.lr = 0x828686F8;
	sub_82BE07B0(ctx, base);
	// lwz r11,2056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lfs f0,-18644(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -18644);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fsubs f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82868738
	if (ctx.cr6.eq) goto loc_82868738;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868730
	if (ctx.cr6.eq) goto loc_82868730;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286873c
	if (!ctx.cr6.eq) goto loc_8286873C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8286873c
	goto loc_8286873C;
loc_82868730:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8286873c
	goto loc_8286873C;
loc_82868738:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8286873C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82868748;
	sub_82804410(ctx, base);
	// lfs f27,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// lfs f23,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f23.f64 = double(temp.f32);
	// bgt cr6,0x8286876c
	if (ctx.cr6.gt) goto loc_8286876C;
	// fsubs f0,f29,f25
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f25.f64));
	// fsubs f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f12,f30,f26
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// b 0x82868778
	goto loc_82868778;
loc_8286876C:
	// fsubs f0,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f24.f64));
	// fsubs f13,f28,f27
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// fsubs f12,f30,f23
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f23.f64));
loc_82868778:
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f31,f9
	ctx.f31.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x82804410
	ctx.lr = 0x82868794;
	sub_82804410(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f9,f28,f11
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82747da0
	ctx.lr = 0x828687C4;
	sub_82747DA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82747a18
	ctx.lr = 0x828687D4;
	sub_82747A18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x828687E0;
	sub_82804410(ctx, base);
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f23,f8
	ctx.f6.f64 = double(float(ctx.f23.f64 - ctx.f8.f64));
	// fsubs f4,f24,f7
	ctx.f4.f64 = double(float(ctx.f24.f64 - ctx.f7.f64));
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fsubs f3,f27,f5
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f5.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82747da0
	ctx.lr = 0x82868810;
	sub_82747DA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82747a18
	ctx.lr = 0x82868820;
	sub_82747A18(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f1,f31,f0,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82be06c8
	ctx.lr = 0x82868860;
	sub_82BE06C8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be05c8
	ctx.lr = 0x82868870;
	sub_82BE05C8(ctx, base);
loc_82868870:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad50
	ctx.lr = 0x8286887C;
	__restfpr_23(ctx, base);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82868880"))) PPC_WEAK_FUNC(sub_82868880);
PPC_FUNC_IMPL(__imp__sub_82868880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,48(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,1756(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1756);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828688d0
	if (ctx.cr6.eq) goto loc_828688D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828688c8
	if (ctx.cr6.eq) goto loc_828688C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828688c0
	if (ctx.cr6.eq) goto loc_828688C0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828688d4
	goto loc_828688D4;
loc_828688C0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828688d4
	goto loc_828688D4;
loc_828688C8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828688d4
	goto loc_828688D4;
loc_828688D0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828688D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82868920
	if (ctx.cr6.eq) goto loc_82868920;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868904
	if (ctx.cr6.eq) goto loc_82868904;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828688fc
	if (ctx.cr6.eq) goto loc_828688FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868908
	if (!ctx.cr6.eq) goto loc_82868908;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868908
	goto loc_82868908;
loc_828688FC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82868908
	goto loc_82868908;
loc_82868904:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82868908:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,328(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 328);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82868968
	if (!ctx.cr6.eq) goto loc_82868968;
loc_82868920:
	// lwz r11,456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286894c
	if (ctx.cr6.eq) goto loc_8286894C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868944
	if (ctx.cr6.eq) goto loc_82868944;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868950
	if (!ctx.cr6.eq) goto loc_82868950;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868950
	goto loc_82868950;
loc_82868944:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82868950
	goto loc_82868950;
loc_8286894C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82868950:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
loc_82868968:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82868970"))) PPC_WEAK_FUNC(sub_82868970);
PPC_FUNC_IMPL(__imp__sub_82868970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,48(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,456(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828689b8
	if (ctx.cr6.eq) goto loc_828689B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828689b0
	if (ctx.cr6.eq) goto loc_828689B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828689bc
	if (!ctx.cr6.eq) goto loc_828689BC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828689bc
	goto loc_828689BC;
loc_828689B0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828689bc
	goto loc_828689BC;
loc_828689B8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828689BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,1964
	ctx.r11.s64 = ctx.r11.s64 + 1964;
loc_828689D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x828689f8
	if (ctx.cr6.eq) goto loc_828689F8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x828689d0
	if (ctx.cr6.lt) goto loc_828689D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828689F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82868abc
	if (ctx.cr6.lt) goto loc_82868ABC;
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868a34
	if (ctx.cr6.eq) goto loc_82868A34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868a2c
	if (ctx.cr6.eq) goto loc_82868A2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82868a24
	if (ctx.cr6.eq) goto loc_82868A24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82868a38
	goto loc_82868A38;
loc_82868A24:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82868a38
	goto loc_82868A38;
loc_82868A2C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82868a38
	goto loc_82868A38;
loc_82868A34:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82868A38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82868abc
	if (ctx.cr6.eq) goto loc_82868ABC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868a68
	if (ctx.cr6.eq) goto loc_82868A68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868a60
	if (ctx.cr6.eq) goto loc_82868A60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868a6c
	if (!ctx.cr6.eq) goto loc_82868A6C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868a6c
	goto loc_82868A6C;
loc_82868A60:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82868a6c
	goto loc_82868A6C;
loc_82868A68:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82868A6C:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x82868a90
	if (!ctx.cr6.lt) goto loc_82868A90;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r9,71
	ctx.r10.s64 = ctx.r9.s64 + 71;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x82868a94
	goto loc_82868A94;
loc_82868A90:
	// li r11,-2
	ctx.r11.s64 = -2;
loc_82868A94:
	// lwz r10,2084(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2084);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82868ab4
	if (ctx.cr6.eq) goto loc_82868AB4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blt cr6,0x82868abc
	if (ctx.cr6.lt) goto loc_82868ABC;
loc_82868AA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82868AB4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82868aa8
	if (!ctx.cr6.lt) goto loc_82868AA8;
loc_82868ABC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82868AC8"))) PPC_WEAK_FUNC(sub_82868AC8);
PPC_FUNC_IMPL(__imp__sub_82868AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82868AD0;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r20,-29532(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r28,48(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r21,4(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r26,r28,1976
	ctx.r26.s64 = ctx.r28.s64 + 1976;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lwz r23,2084(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2084);
	// lwz r22,1980(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1980);
loc_82868B34:
	// mullw r11,r22,r27
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r10,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x8283f358
	ctx.lr = 0x82868B58;
	sub_8283F358(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283d648
	ctx.lr = 0x82868B60;
	sub_8283D648(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82868b74
	if (ctx.cr6.eq) goto loc_82868B74;
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x82868b88
	goto loc_82868B88;
loc_82868B74:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82867bb8
	ctx.lr = 0x82868B84;
	sub_82867BB8(ctx, base);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82868B88:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82868bb8
	if (ctx.cr6.eq) goto loc_82868BB8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82868bb0
	if (ctx.cr6.eq) goto loc_82868BB0;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82868ba8
	if (ctx.cr6.eq) goto loc_82868BA8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82868bbc
	goto loc_82868BBC;
loc_82868BA8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82868bbc
	goto loc_82868BBC;
loc_82868BB0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82868bbc
	goto loc_82868BBC;
loc_82868BB8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82868BBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82868cbc
	if (ctx.cr6.eq) goto loc_82868CBC;
	// cmpwi cr6,r24,-2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -2, ctx.xer);
	// ble cr6,0x82868cbc
	if (!ctx.cr6.gt) goto loc_82868CBC;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x82868bdc
	if (!ctx.cr6.eq) goto loc_82868BDC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82868cbc
	if (ctx.cr6.lt) goto loc_82868CBC;
loc_82868BDC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82868BE4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82868c14
	if (ctx.cr6.eq) goto loc_82868C14;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82868c0c
	if (ctx.cr6.eq) goto loc_82868C0C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82868c04
	if (ctx.cr6.eq) goto loc_82868C04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82868c18
	goto loc_82868C18;
loc_82868C04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82868c18
	goto loc_82868C18;
loc_82868C0C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x82868c18
	goto loc_82868C18;
loc_82868C14:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82868C18:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8283b630
	ctx.lr = 0x82868C20;
	sub_8283B630(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82868c44
	if (!ctx.cr6.gt) goto loc_82868C44;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82868be4
	if (ctx.cr6.lt) goto loc_82868BE4;
	// b 0x82868c4c
	goto loc_82868C4C;
loc_82868C44:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82868cbc
	if (ctx.cr6.eq) goto loc_82868CBC;
loc_82868C4C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82868cac
	if (!ctx.cr6.gt) goto loc_82868CAC;
	// lwz r11,1144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1144);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82868C70:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82868c80
	if (!ctx.cr6.lt) goto loc_82868C80;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82868C80:
	// addi r8,r8,1864
	ctx.r8.s64 = ctx.r8.s64 + 1864;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r8,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82868cbc
	if (!ctx.cr6.eq) goto loc_82868CBC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82868c70
	if (ctx.cr6.lt) goto loc_82868C70;
loc_82868CAC:
	// stw r24,1632(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1632, ctx.r24.u32);
	// stw r30,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
loc_82868CBC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x82868b34
	if (ctx.cr6.lt) goto loc_82868B34;
	// stw r25,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r25.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82868CD4"))) PPC_WEAK_FUNC(sub_82868CD4);
PPC_FUNC_IMPL(__imp__sub_82868CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82868CD8"))) PPC_WEAK_FUNC(sub_82868CD8);
PPC_FUNC_IMPL(__imp__sub_82868CD8) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868d28
	if (ctx.cr6.eq) goto loc_82868D28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868d20
	if (ctx.cr6.eq) goto loc_82868D20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82868d18
	if (ctx.cr6.eq) goto loc_82868D18;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82868d2c
	goto loc_82868D2C;
loc_82868D18:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82868d2c
	goto loc_82868D2C;
loc_82868D20:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82868d2c
	goto loc_82868D2C;
loc_82868D28:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82868D2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82868d40
	if (!ctx.cr6.eq) goto loc_82868D40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82868D40:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868d68
	if (ctx.cr6.eq) goto loc_82868D68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868d60
	if (ctx.cr6.eq) goto loc_82868D60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868d6c
	if (!ctx.cr6.eq) goto loc_82868D6C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868d6c
	goto loc_82868D6C;
loc_82868D60:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82868d6c
	goto loc_82868D6C;
loc_82868D68:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82868D6C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,232(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// lwz r7,212(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82868D90"))) PPC_WEAK_FUNC(sub_82868D90);
PPC_FUNC_IMPL(__imp__sub_82868D90) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868de0
	if (ctx.cr6.eq) goto loc_82868DE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868dd8
	if (ctx.cr6.eq) goto loc_82868DD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82868dd0
	if (ctx.cr6.eq) goto loc_82868DD0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82868de4
	goto loc_82868DE4;
loc_82868DD0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82868de4
	goto loc_82868DE4;
loc_82868DD8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82868de4
	goto loc_82868DE4;
loc_82868DE0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82868DE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82868df8
	if (!ctx.cr6.eq) goto loc_82868DF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82868DF8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868e20
	if (ctx.cr6.eq) goto loc_82868E20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868e18
	if (ctx.cr6.eq) goto loc_82868E18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868e24
	if (!ctx.cr6.eq) goto loc_82868E24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868e24
	goto loc_82868E24;
loc_82868E18:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82868e24
	goto loc_82868E24;
loc_82868E20:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82868E24:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82868E3C"))) PPC_WEAK_FUNC(sub_82868E3C);
PPC_FUNC_IMPL(__imp__sub_82868E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82868E40"))) PPC_WEAK_FUNC(sub_82868E40);
PPC_FUNC_IMPL(__imp__sub_82868E40) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868e90
	if (ctx.cr6.eq) goto loc_82868E90;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868e88
	if (ctx.cr6.eq) goto loc_82868E88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82868e80
	if (ctx.cr6.eq) goto loc_82868E80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82868e94
	goto loc_82868E94;
loc_82868E80:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82868e94
	goto loc_82868E94;
loc_82868E88:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82868e94
	goto loc_82868E94;
loc_82868E90:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82868E94:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82868ee4
	if (ctx.cr6.eq) goto loc_82868EE4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868ec4
	if (ctx.cr6.eq) goto loc_82868EC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868ebc
	if (ctx.cr6.eq) goto loc_82868EBC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868ec8
	if (!ctx.cr6.eq) goto loc_82868EC8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868ec8
	goto loc_82868EC8;
loc_82868EBC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82868ec8
	goto loc_82868EC8;
loc_82868EC4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82868EC8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,232(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82868ef0
	if (!ctx.cr6.eq) goto loc_82868EF0;
loc_82868EE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82868EF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82868EFC"))) PPC_WEAK_FUNC(sub_82868EFC);
PPC_FUNC_IMPL(__imp__sub_82868EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82868F00"))) PPC_WEAK_FUNC(sub_82868F00);
PPC_FUNC_IMPL(__imp__sub_82868F00) {
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
	// lwz r11,1516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868f50
	if (ctx.cr6.eq) goto loc_82868F50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868f48
	if (ctx.cr6.eq) goto loc_82868F48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82868f40
	if (ctx.cr6.eq) goto loc_82868F40;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82868f54
	goto loc_82868F54;
loc_82868F40:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82868f54
	goto loc_82868F54;
loc_82868F48:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82868f54
	goto loc_82868F54;
loc_82868F50:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82868F54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82868fc8
	if (ctx.cr6.eq) goto loc_82868FC8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82868f84
	if (ctx.cr6.eq) goto loc_82868F84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82868f7c
	if (ctx.cr6.eq) goto loc_82868F7C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82868f88
	if (!ctx.cr6.eq) goto loc_82868F88;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82868f88
	goto loc_82868F88;
loc_82868F7C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82868f88
	goto loc_82868F88;
loc_82868F84:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82868F88:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// and r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ctx.r9.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82868fc8
	if (ctx.cr6.eq) goto loc_82868FC8;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// beq cr6,0x82868fc4
	if (ctx.cr6.eq) goto loc_82868FC4;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
loc_82868FC4:
	// stw r9,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r9.u32);
loc_82868FC8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82868FCC"))) PPC_WEAK_FUNC(sub_82868FCC);
PPC_FUNC_IMPL(__imp__sub_82868FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82868FD0"))) PPC_WEAK_FUNC(sub_82868FD0);
PPC_FUNC_IMPL(__imp__sub_82868FD0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x82868cd8
	ctx.lr = 0x82869004;
	sub_82868CD8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82869018
	if (!ctx.cr6.eq) goto loc_82869018;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82869028
	goto loc_82869028;
loc_82869018:
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r11,1
	ctx.r11.s64 = 1;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
loc_82869028:
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

__attribute__((alias("__imp__sub_82869044"))) PPC_WEAK_FUNC(sub_82869044);
PPC_FUNC_IMPL(__imp__sub_82869044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82869048"))) PPC_WEAK_FUNC(sub_82869048);
PPC_FUNC_IMPL(__imp__sub_82869048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,230
	ctx.r10.s64 = ctx.r4.s64 + 230;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828690bc
	if (ctx.cr6.eq) goto loc_828690BC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828690bc
	if (!ctx.cr6.lt) goto loc_828690BC;
	// addi r10,r4,351
	ctx.r10.s64 = ctx.r4.s64 + 351;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-30252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30252);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x828690bc
	if (ctx.cr6.gt) goto loc_828690BC;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_828690BC:
	// addi r10,r4,351
	ctx.r10.s64 = ctx.r4.s64 + 351;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x8283fa08
	sub_8283FA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828690D0"))) PPC_WEAK_FUNC(sub_828690D0);
PPC_FUNC_IMPL(__imp__sub_828690D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828690D4"))) PPC_WEAK_FUNC(sub_828690D4);
PPC_FUNC_IMPL(__imp__sub_828690D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828690D8"))) PPC_WEAK_FUNC(sub_828690D8);
PPC_FUNC_IMPL(__imp__sub_828690D8) {
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
	// fmr f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64;
	// fneg f1,f9
	ctx.f1.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// bl 0x82869048
	ctx.lr = 0x828690F0;
	sub_82869048(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x8286911c
	if (!ctx.cr6.gt) goto loc_8286911C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,283
	ctx.r10.s64 = ctx.r4.s64 + 283;
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
loc_8286911C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286912C"))) PPC_WEAK_FUNC(sub_8286912C);
PPC_FUNC_IMPL(__imp__sub_8286912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82869130"))) PPC_WEAK_FUNC(sub_82869130);
PPC_FUNC_IMPL(__imp__sub_82869130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,275
	ctx.r10.s64 = ctx.r4.s64 + 275;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r4,351
	ctx.r7.s64 = ctx.r4.s64 + 351;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f8,f9,f11,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfsx f8,r10,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r4,490
	ctx.r10.s64 = ctx.r4.s64 + 490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82869190"))) PPC_WEAK_FUNC(sub_82869190);
PPC_FUNC_IMPL(__imp__sub_82869190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r8,r4,275
	ctx.r8.s64 = ctx.r4.s64 + 275;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-30832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f11,f13,f1,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// stfsx f11,r10,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// beq cr6,0x828691d8
	if (ctx.cr6.eq) goto loc_828691D8;
	// addi r9,r4,490
	ctx.r9.s64 = ctx.r4.s64 + 490;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
loc_828691D8:
	// addi r9,r4,351
	ctx.r9.s64 = ctx.r4.s64 + 351;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f0,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f8,f9,f11,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfsx f8,r6,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r4,490
	ctx.r10.s64 = ctx.r4.s64 + 490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82869230"))) PPC_WEAK_FUNC(sub_82869230);
PPC_FUNC_IMPL(__imp__sub_82869230) {
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
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-27236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctid f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x82869048
	ctx.lr = 0x82869280;
	sub_82869048(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82869290"))) PPC_WEAK_FUNC(sub_82869290);
PPC_FUNC_IMPL(__imp__sub_82869290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82869298;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x828692F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82869300;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8286930C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82869320;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82869348
	if (ctx.cr6.eq) goto loc_82869348;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82869348
	if (!ctx.cr6.eq) goto loc_82869348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x82869344;
	sub_82BFEA70(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
loc_82869348:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82869360"))) PPC_WEAK_FUNC(sub_82869360);
PPC_FUNC_IMPL(__imp__sub_82869360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82869368;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x828693C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x828693D0;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x828693DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r11,15828
	ctx.r31.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x828693F4;
	sub_828097A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82869440
	if (ctx.cr6.eq) goto loc_82869440;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// bne cr6,0x82869440
	if (!ctx.cr6.eq) goto loc_82869440;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x82869418;
	sub_82BFEA70(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// addi r5,r20,24
	ctx.r5.s64 = ctx.r20.s64 + 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82809be0
	ctx.lr = 0x82869430;
	sub_82809BE0(ctx, base);
	// li r6,58
	ctx.r6.s64 = 58;
	// addi r5,r20,260
	ctx.r5.s64 = ctx.r20.s64 + 260;
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x82809be0
	ctx.lr = 0x82869440;
	sub_82809BE0(ctx, base);
loc_82869440:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82869458"))) PPC_WEAK_FUNC(sub_82869458);
PPC_FUNC_IMPL(__imp__sub_82869458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82869480
	if (ctx.cr6.eq) goto loc_82869480;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82869480:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82869488"))) PPC_WEAK_FUNC(sub_82869488);
PPC_FUNC_IMPL(__imp__sub_82869488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82869490;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r28,r10,-10192
	ctx.r28.s64 = ctx.r10.s64 + -10192;
	// addi r7,r9,-10172
	ctx.r7.s64 = ctx.r9.s64 + -10172;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r30,25277
	ctx.r30.s64 = 25277;
	// li r8,24701
	ctx.r8.s64 = 24701;
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r11,6632
	ctx.r10.s64 = ctx.r11.s64 + 6632;
	// addi r9,r11,1200
	ctx.r9.s64 = ctx.r11.s64 + 1200;
	// lwz r31,10204(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10204);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r10,10204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10204);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r10,10204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10204);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,10204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10204, ctx.r9.u32);
	// bl 0x828407d0
	ctx.lr = 0x82869500;
	sub_828407D0(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r8,-10380
	ctx.r7.s64 = ctx.r8.s64 + -10380;
	// li r8,24702
	ctx.r8.s64 = 24702;
	// li r6,70
	ctx.r6.s64 = 70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828407d0
	ctx.lr = 0x82869520;
	sub_828407D0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r7,-16392
	ctx.r7.s64 = ctx.r7.s64 + -16392;
	// li r8,3920
	ctx.r8.s64 = 3920;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828407d0
	ctx.lr = 0x82869540;
	sub_828407D0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r6,-16312
	ctx.r7.s64 = ctx.r6.s64 + -16312;
	// li r8,3919
	ctx.r8.s64 = 3919;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828407d0
	ctx.lr = 0x82869560;
	sub_828407D0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r5,-16432
	ctx.r7.s64 = ctx.r5.s64 + -16432;
	// li r8,3918
	ctx.r8.s64 = 3918;
	// li r6,21
	ctx.r6.s64 = 21;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828407d0
	ctx.lr = 0x82869580;
	sub_828407D0(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r4,-16132
	ctx.r7.s64 = ctx.r4.s64 + -16132;
	// li r8,3917
	ctx.r8.s64 = 3917;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828407d0
	ctx.lr = 0x828695A0;
	sub_828407D0(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r8,3916
	ctx.r8.s64 = 3916;
	// addi r7,r3,-16644
	ctx.r7.s64 = ctx.r3.s64 + -16644;
	// li r6,49
	ctx.r6.s64 = 49;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x828695C0;
	sub_828407D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,3921
	ctx.r8.s64 = 3921;
	// addi r7,r11,-10156
	ctx.r7.s64 = ctx.r11.s64 + -10156;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x828695E0;
	sub_828407D0(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r27,r10,-10140
	ctx.r27.s64 = ctx.r10.s64 + -10140;
	// addi r7,r9,-10128
	ctx.r7.s64 = ctx.r9.s64 + -10128;
	// li r28,2424
	ctx.r28.s64 = 2424;
	// li r8,25267
	ctx.r8.s64 = 25267;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,6632
	ctx.r10.s64 = ctx.r11.s64 + 6632;
	// addi r9,r11,1200
	ctx.r9.s64 = ctx.r11.s64 + 1200;
	// lwz r30,6636(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6636);
	// lwz r31,10208(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10208);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r31,1204(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// lwz r10,10208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10208);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r10,10208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10208);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,10208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10208, ctx.r9.u32);
	// bl 0x828407d0
	ctx.lr = 0x8286965C;
	sub_828407D0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r8,25266
	ctx.r8.s64 = 25266;
	// addi r7,r7,-10120
	ctx.r7.s64 = ctx.r7.s64 + -10120;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x8286967C;
	sub_828407D0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r8,25268
	ctx.r8.s64 = 25268;
	// addi r7,r6,-10112
	ctx.r7.s64 = ctx.r6.s64 + -10112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x8286969C;
	sub_828407D0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r8,25269
	ctx.r8.s64 = 25269;
	// addi r7,r5,-10100
	ctx.r7.s64 = ctx.r5.s64 + -10100;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x828696BC;
	sub_828407D0(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r8,25271
	ctx.r8.s64 = 25271;
	// addi r7,r4,-10088
	ctx.r7.s64 = ctx.r4.s64 + -10088;
	// li r6,43
	ctx.r6.s64 = 43;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x828696DC;
	sub_828407D0(ctx, base);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r31,24700
	ctx.r31.s64 = 24700;
	// addi r6,r3,-10072
	ctx.r6.s64 = ctx.r3.s64 + -10072;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r10,r11,6632
	ctx.r10.s64 = ctx.r11.s64 + 6632;
	// addi r9,r11,1200
	ctx.r9.s64 = ctx.r11.s64 + 1200;
	// lwz r7,10212(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10212);
	// lwz r8,6636(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6636);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r5,10212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10212);
	// lwz r10,1204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r8,2419
	ctx.r8.s64 = 2419;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r7,r6,-15796
	ctx.r7.s64 = ctx.r6.s64 + -15796;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,10212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10212);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,10212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10212, ctx.r9.u32);
	// bl 0x828407d0
	ctx.lr = 0x82869760;
	sub_828407D0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r8,2421
	ctx.r8.s64 = 2421;
	// addi r7,r7,-10056
	ctx.r7.s64 = ctx.r7.s64 + -10056;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x82869780;
	sub_828407D0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r8,2420
	ctx.r8.s64 = 2420;
	// addi r7,r6,-15780
	ctx.r7.s64 = ctx.r6.s64 + -15780;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x828697A0;
	sub_828407D0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r8,24610
	ctx.r8.s64 = 24610;
	// addi r7,r5,-10048
	ctx.r7.s64 = ctx.r5.s64 + -10048;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x828697C0;
	sub_828407D0(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r8,24703
	ctx.r8.s64 = 24703;
	// addi r7,r4,-10036
	ctx.r7.s64 = ctx.r4.s64 + -10036;
	// li r6,45
	ctx.r6.s64 = 45;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x828697E0;
	sub_828407D0(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r8,25447
	ctx.r8.s64 = 25447;
	// addi r7,r3,-10024
	ctx.r7.s64 = ctx.r3.s64 + -10024;
	// li r6,77
	ctx.r6.s64 = 77;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x82869800;
	sub_828407D0(ctx, base);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r11,-10016
	ctx.r5.s64 = ctx.r11.s64 + -10016;
	// addi r7,r10,-10004
	ctx.r7.s64 = ctx.r10.s64 + -10004;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,24699
	ctx.r31.s64 = 24699;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r9,r11,6632
	ctx.r9.s64 = ctx.r11.s64 + 6632;
	// addi r4,r11,1200
	ctx.r4.s64 = ctx.r11.s64 + 1200;
	// lwz r10,6636(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6636);
	// lwz r6,10216(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10216);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r8,10216(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10216);
	// lwz r10,1204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r8,24811
	ctx.r8.s64 = 24811;
	// li r6,54
	ctx.r6.s64 = 54;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r31,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r31.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,10216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10216);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,10216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10216, ctx.r9.u32);
	// bl 0x828407d0
	ctx.lr = 0x8286988C;
	sub_828407D0(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r8,-9992
	ctx.r7.s64 = ctx.r8.s64 + -9992;
	// li r8,24809
	ctx.r8.s64 = 24809;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828407d0
	ctx.lr = 0x828698AC;
	sub_828407D0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r7,-9980
	ctx.r7.s64 = ctx.r7.s64 + -9980;
	// li r8,24803
	ctx.r8.s64 = 24803;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828407d0
	ctx.lr = 0x828698CC;
	sub_828407D0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r6,-9968
	ctx.r7.s64 = ctx.r6.s64 + -9968;
	// li r8,24816
	ctx.r8.s64 = 24816;
	// li r6,62
	ctx.r6.s64 = 62;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828407d0
	ctx.lr = 0x828698EC;
	sub_828407D0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r5,-9964
	ctx.r7.s64 = ctx.r5.s64 + -9964;
	// li r8,24807
	ctx.r8.s64 = 24807;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828407d0
	ctx.lr = 0x8286990C;
	sub_828407D0(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r4,-9948
	ctx.r7.s64 = ctx.r4.s64 + -9948;
	// li r8,24818
	ctx.r8.s64 = 24818;
	// li r6,66
	ctx.r6.s64 = 66;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828407d0
	ctx.lr = 0x8286992C;
	sub_828407D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r11,-9932
	ctx.r7.s64 = ctx.r11.s64 + -9932;
	// li r8,24805
	ctx.r8.s64 = 24805;
	// li r6,68
	ctx.r6.s64 = 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828407d0
	ctx.lr = 0x8286994C;
	sub_828407D0(ctx, base);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r10,-9916
	ctx.r5.s64 = ctx.r10.s64 + -9916;
	// addi r7,r9,-9908
	ctx.r7.s64 = ctx.r9.s64 + -9908;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,24698
	ctx.r31.s64 = 24698;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r11,6632
	ctx.r10.s64 = ctx.r11.s64 + 6632;
	// addi r9,r11,1200
	ctx.r9.s64 = ctx.r11.s64 + 1200;
	// lwz r6,6636(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6636);
	// lwz r8,10220(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10220);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r10,10220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10220);
	// lwz r6,1204(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// li r8,25204
	ctx.r8.s64 = 25204;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,10220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10220);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,10220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10220, ctx.r9.u32);
	// bl 0x828407d0
	ctx.lr = 0x828699D0;
	sub_828407D0(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r8,-9896
	ctx.r7.s64 = ctx.r8.s64 + -9896;
	// li r8,25203
	ctx.r8.s64 = 25203;
	// li r6,18
	ctx.r6.s64 = 18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828407d0
	ctx.lr = 0x828699F0;
	sub_828407D0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r7,-9888
	ctx.r7.s64 = ctx.r7.s64 + -9888;
	// li r8,25200
	ctx.r8.s64 = 25200;
	// li r6,19
	ctx.r6.s64 = 19;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828407d0
	ctx.lr = 0x82869A10;
	sub_828407D0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r6,-9880
	ctx.r7.s64 = ctx.r6.s64 + -9880;
	// li r8,25197
	ctx.r8.s64 = 25197;
	// li r6,31
	ctx.r6.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828407d0
	ctx.lr = 0x82869A30;
	sub_828407D0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r5,-9872
	ctx.r7.s64 = ctx.r5.s64 + -9872;
	// li r8,25198
	ctx.r8.s64 = 25198;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828407d0
	ctx.lr = 0x82869A50;
	sub_828407D0(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r4,-9864
	ctx.r7.s64 = ctx.r4.s64 + -9864;
	// li r8,25196
	ctx.r8.s64 = 25196;
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828407d0
	ctx.lr = 0x82869A70;
	sub_828407D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r11,-9856
	ctx.r7.s64 = ctx.r11.s64 + -9856;
	// li r8,25195
	ctx.r8.s64 = 25195;
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828407d0
	ctx.lr = 0x82869A90;
	sub_828407D0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r10,-9848
	ctx.r7.s64 = ctx.r10.s64 + -9848;
	// li r8,25205
	ctx.r8.s64 = 25205;
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828407d0
	ctx.lr = 0x82869AB0;
	sub_828407D0(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r8,25206
	ctx.r8.s64 = 25206;
	// addi r7,r9,-9840
	ctx.r7.s64 = ctx.r9.s64 + -9840;
	// li r6,39
	ctx.r6.s64 = 39;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828407d0
	ctx.lr = 0x82869AD0;
	sub_828407D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82869AD8"))) PPC_WEAK_FUNC(sub_82869AD8);
PPC_FUNC_IMPL(__imp__sub_82869AD8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82869AE0;
	__savegprlr_21(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,13192(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r26,13188(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r25,13180(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13180);
	// lwz r24,13184(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13184);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82869bdc
	if (ctx.cr6.eq) goto loc_82869BDC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,6624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82869bdc
	if (!ctx.cr6.gt) goto loc_82869BDC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,10844
	ctx.r9.s64 = 10844;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r23,48(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r21,-29532(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r22,4(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82869B50:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82869b60
	if (ctx.cr6.lt) goto loc_82869B60;
	// cmpwi cr6,r8,20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 20, ctx.xer);
	// blt cr6,0x82869b6c
	if (ctx.cr6.lt) goto loc_82869B6C;
loc_82869B60:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82869ba4
	goto loc_82869BA4;
loc_82869B6C:
	// lwzx r10,r9,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82869ba0
	if (ctx.cr6.eq) goto loc_82869BA0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82869b98
	if (ctx.cr6.eq) goto loc_82869B98;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82869b90
	if (ctx.cr6.eq) goto loc_82869B90;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82869ba4
	goto loc_82869BA4;
loc_82869B90:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82869ba4
	goto loc_82869BA4;
loc_82869B98:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82869ba4
	goto loc_82869BA4;
loc_82869BA0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82869BA4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82869bd8
	if (ctx.cr6.eq) goto loc_82869BD8;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,6624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6624);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82869b50
	if (ctx.cr6.lt) goto loc_82869B50;
	// b 0x82869bdc
	goto loc_82869BDC;
loc_82869BD8:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82869BDC:
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// stw r27,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r26.u32);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82869BF4"))) PPC_WEAK_FUNC(sub_82869BF4);
PPC_FUNC_IMPL(__imp__sub_82869BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82869BF8"))) PPC_WEAK_FUNC(sub_82869BF8);
PPC_FUNC_IMPL(__imp__sub_82869BF8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82869C00;
	__savegprlr_23(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,13192(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13192);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,13188(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// lwz r28,13180(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13180);
	// lwz r27,13184(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13184);
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,6624(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6624);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82869ce4
	if (!ctx.cr6.gt) goto loc_82869CE4;
	// lwz r26,32(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,10844
	ctx.r9.s64 = 10844;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r25,4(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r26,6624(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6624);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r24,r11,-29532
	ctx.r24.s64 = ctx.r11.s64 + -29532;
	// lwz r25,48(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r23,-29532(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r24,4(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_82869C70:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82869c80
	if (ctx.cr6.lt) goto loc_82869C80;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82869c88
	if (ctx.cr6.lt) goto loc_82869C88;
loc_82869C80:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82869cb8
	goto loc_82869CB8;
loc_82869C88:
	// lwzx r11,r9,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82869cb4
	if (ctx.cr6.eq) goto loc_82869CB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82869cac
	if (ctx.cr6.eq) goto loc_82869CAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82869cb8
	if (!ctx.cr6.eq) goto loc_82869CB8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82869cb8
	goto loc_82869CB8;
loc_82869CAC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82869cb8
	goto loc_82869CB8;
loc_82869CB4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82869CB8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82869cd4
	if (ctx.cr6.eq) goto loc_82869CD4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82869CD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82869c70
	if (ctx.cr6.lt) goto loc_82869C70;
loc_82869CE4:
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// stw r30,13192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13192, ctx.r30.u32);
	// stw r28,13180(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13180, ctx.r28.u32);
	// stw r27,13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13184, ctx.r27.u32);
	// stw r29,13188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13188, ctx.r29.u32);
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82869CFC"))) PPC_WEAK_FUNC(sub_82869CFC);
PPC_FUNC_IMPL(__imp__sub_82869CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82869D00"))) PPC_WEAK_FUNC(sub_82869D00);
PPC_FUNC_IMPL(__imp__sub_82869D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82869D08;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x82869D64;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82869D70;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82869D7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,15828
	ctx.r7.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82869D94;
	sub_828097A0(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82869dd0
	if (ctx.cr6.eq) goto loc_82869DD0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82869dd0
	if (!ctx.cr6.eq) goto loc_82869DD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x82869DB8;
	sub_82BFEA70(ctx, base);
	// stw r3,10224(r20)
	PPC_STORE_U32(ctx.r20.u32 + 10224, ctx.r3.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r20,4512
	ctx.r5.s64 = ctx.r20.s64 + 4512;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82809be0
	ctx.lr = 0x82869DD0;
	sub_82809BE0(ctx, base);
loc_82869DD0:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82869DE8"))) PPC_WEAK_FUNC(sub_82869DE8);
PPC_FUNC_IMPL(__imp__sub_82869DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82869DF0;
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
	// bl 0x82840f80
	ctx.lr = 0x82869E30;
	sub_82840F80(ctx, base);
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

__attribute__((alias("__imp__sub_82869E48"))) PPC_WEAK_FUNC(sub_82869E48);
PPC_FUNC_IMPL(__imp__sub_82869E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82869E50;
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,6628(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6628);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82869eac
	if (ctx.cr6.eq) goto loc_82869EAC;
	// bl 0x82bf2318
	ctx.lr = 0x82869EA4;
	sub_82BF2318(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6628(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6628, ctx.r11.u32);
loc_82869EAC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r11,10924(r27)
	PPC_STORE_U32(ctx.r27.u32 + 10924, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82869ECC"))) PPC_WEAK_FUNC(sub_82869ECC);
PPC_FUNC_IMPL(__imp__sub_82869ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82869ED0"))) PPC_WEAK_FUNC(sub_82869ED0);
PPC_FUNC_IMPL(__imp__sub_82869ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82869ED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r30,-29532(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x82869f38
	if (ctx.cr6.eq) goto loc_82869F38;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82869f30
	if (ctx.cr6.eq) goto loc_82869F30;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82869f28
	if (ctx.cr6.eq) goto loc_82869F28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82869f3c
	goto loc_82869F3C;
loc_82869F28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82869f3c
	goto loc_82869F3C;
loc_82869F30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82869f3c
	goto loc_82869F3C;
loc_82869F38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82869F3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82867048
	ctx.lr = 0x82869F44;
	sub_82867048(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82869ff0
	if (!ctx.cr6.eq) goto loc_82869FF0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82869f80
	if (ctx.cr6.eq) goto loc_82869F80;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82869f78
	if (ctx.cr6.eq) goto loc_82869F78;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82869f70
	if (ctx.cr6.eq) goto loc_82869F70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82869f84
	goto loc_82869F84;
loc_82869F70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82869f84
	goto loc_82869F84;
loc_82869F78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82869f84
	goto loc_82869F84;
loc_82869F80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82869F84:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8283db80
	ctx.lr = 0x82869F8C;
	sub_8283DB80(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82869ff0
	if (!ctx.cr6.eq) goto loc_82869FF0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82869fc8
	if (ctx.cr6.eq) goto loc_82869FC8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82869fc0
	if (ctx.cr6.eq) goto loc_82869FC0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82869fb8
	if (ctx.cr6.eq) goto loc_82869FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82869fcc
	goto loc_82869FCC;
loc_82869FB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82869fcc
	goto loc_82869FCC;
loc_82869FC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82869fcc
	goto loc_82869FCC;
loc_82869FC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82869FCC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8283dda8
	ctx.lr = 0x82869FD4;
	sub_8283DDA8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82869FF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286A000"))) PPC_WEAK_FUNC(sub_8286A000);
PPC_FUNC_IMPL(__imp__sub_8286A000) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8286A008;
	__savegprlr_27(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,13192(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13192);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r30,13188(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// li r11,284
	ctx.r11.s64 = 284;
	// lwz r29,13180(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13180);
	// lwz r28,13184(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13184);
loc_8286A034:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8286a05c
	if (ctx.cr6.lt) goto loc_8286A05C;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bge cr6,0x8286a05c
	if (!ctx.cr6.lt) goto loc_8286A05C;
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r27,48(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwzx r27,r27,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -2, ctx.xer);
	// bgt cr6,0x8286a070
	if (ctx.cr6.gt) goto loc_8286A070;
loc_8286A05C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// blt cr6,0x8286a034
	if (ctx.cr6.lt) goto loc_8286A034;
	// b 0x8286a074
	goto loc_8286A074;
loc_8286A070:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8286A074:
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r31,13192(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13192, ctx.r31.u32);
	// stw r29,13180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13188, ctx.r30.u32);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286A08C"))) PPC_WEAK_FUNC(sub_8286A08C);
PPC_FUNC_IMPL(__imp__sub_8286A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286A090"))) PPC_WEAK_FUNC(sub_8286A090);
PPC_FUNC_IMPL(__imp__sub_8286A090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// beq cr6,0x8286a0cc
	if (ctx.cr6.eq) goto loc_8286A0CC;
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
loc_8286A0CC:
	// stw r9,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286A0D4"))) PPC_WEAK_FUNC(sub_8286A0D4);
PPC_FUNC_IMPL(__imp__sub_8286A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286A0D8"))) PPC_WEAK_FUNC(sub_8286A0D8);
PPC_FUNC_IMPL(__imp__sub_8286A0D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 + 60;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// ble cr6,0x8286a0f8
	if (!ctx.cr6.gt) goto loc_8286A0F8;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// blt cr6,0x8286a104
	if (ctx.cr6.lt) goto loc_8286A104;
loc_8286A0F8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8286A104:
	// addi r11,r11,614
	ctx.r11.s64 = ctx.r11.s64 + 614;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286A118"))) PPC_WEAK_FUNC(sub_8286A118);
PPC_FUNC_IMPL(__imp__sub_8286A118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8286a170
	if (ctx.cr6.lt) goto loc_8286A170;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8286a170
	if (!ctx.cr6.lt) goto loc_8286A170;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 + 60;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// ble cr6,0x8286a170
	if (!ctx.cr6.gt) goto loc_8286A170;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// bge cr6,0x8286a170
	if (!ctx.cr6.lt) goto loc_8286A170;
	// addi r11,r11,5195
	ctx.r11.s64 = ctx.r11.s64 + 5195;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8286a170
	if (!ctx.cr6.gt) goto loc_8286A170;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8286a17c
	if (ctx.cr6.lt) goto loc_8286A17C;
loc_8286A170:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8286A17C:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// mullw r9,r8,r5
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8286A1A0"))) PPC_WEAK_FUNC(sub_8286A1A0);
PPC_FUNC_IMPL(__imp__sub_8286A1A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8286a1d0
	if (ctx.cr6.lt) goto loc_8286A1D0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8286a1d0
	if (!ctx.cr6.lt) goto loc_8286A1D0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 + 60;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// ble cr6,0x8286a1d0
	if (!ctx.cr6.gt) goto loc_8286A1D0;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// blt cr6,0x8286a1dc
	if (ctx.cr6.lt) goto loc_8286A1DC;
loc_8286A1D0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8286A1DC:
	// addi r11,r11,5195
	ctx.r11.s64 = ctx.r11.s64 + 5195;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286A1F0"))) PPC_WEAK_FUNC(sub_8286A1F0);
PPC_FUNC_IMPL(__imp__sub_8286A1F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x8286a28c
	if (!ctx.cr6.gt) goto loc_8286A28C;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x8286a28c
	if (!ctx.cr6.lt) goto loc_8286A28C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,9997
	ctx.r9.s64 = ctx.r5.s64 + 9997;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r5,r4,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8286a28c
	if (ctx.cr6.lt) goto loc_8286A28C;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// bge cr6,0x8286a28c
	if (!ctx.cr6.lt) goto loc_8286A28C;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x8286a274
	if (ctx.cr6.eq) goto loc_8286A274;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8286a264
	if (ctx.cr6.eq) goto loc_8286A264;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8286a27c
	if (!ctx.cr6.eq) goto loc_8286A27C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8286a27c
	goto loc_8286A27C;
loc_8286A264:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286a27c
	goto loc_8286A27C;
loc_8286A274:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286A27C:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82846008
	ctx.lr = 0x8286A288;
	sub_82846008(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8286A28C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286A2A4"))) PPC_WEAK_FUNC(sub_8286A2A4);
PPC_FUNC_IMPL(__imp__sub_8286A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286A2A8"))) PPC_WEAK_FUNC(sub_8286A2A8);
PPC_FUNC_IMPL(__imp__sub_8286A2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r4,5195
	ctx.r11.s64 = ctx.r4.s64 + 5195;
	// addi r10,r4,5427
	ctx.r10.s64 = ctx.r4.s64 + 5427;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f13,29744(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r10,r11,23540
	ctx.r10.s64 = ctx.r11.s64 + 23540;
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x8286a308
	if (!ctx.cr6.gt) goto loc_8286A308;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8286a30c
	goto loc_8286A30C;
loc_8286A308:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8286A30C:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r7,58
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 58, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8286a340
	if (ctx.cr6.gt) goto loc_8286A340;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8286A340:
	// addi r9,r7,2159
	ctx.r9.s64 = ctx.r7.s64 + 2159;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286A350"))) PPC_WEAK_FUNC(sub_8286A350);
PPC_FUNC_IMPL(__imp__sub_8286A350) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x8286a388
	if (!ctx.cr6.gt) goto loc_8286A388;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x8286a388
	if (!ctx.cr6.lt) goto loc_8286A388;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,9997
	ctx.r10.s64 = ctx.r5.s64 + 9997;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8286a388
	if (!ctx.cr6.gt) goto loc_8286A388;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// blt cr6,0x8286a394
	if (ctx.cr6.lt) goto loc_8286A394;
loc_8286A388:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8286A394:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x8286a3b0
	if (ctx.cr6.lt) goto loc_8286A3B0;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// blt cr6,0x8286a3bc
	if (ctx.cr6.lt) goto loc_8286A3BC;
loc_8286A3B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8286A3BC:
	// addi r11,r11,4776
	ctx.r11.s64 = ctx.r11.s64 + 4776;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286A3D0"))) PPC_WEAK_FUNC(sub_8286A3D0);
PPC_FUNC_IMPL(__imp__sub_8286A3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r5,9997
	ctx.r11.s64 = ctx.r5.s64 + 9997;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8286a414
	if (!ctx.cr6.gt) goto loc_8286A414;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// bge cr6,0x8286a414
	if (!ctx.cr6.lt) goto loc_8286A414;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x8286a414
	if (ctx.cr6.lt) goto loc_8286A414;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// blt cr6,0x8286a420
	if (ctx.cr6.lt) goto loc_8286A420;
loc_8286A414:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8286A420:
	// addi r11,r11,2159
	ctx.r11.s64 = ctx.r11.s64 + 2159;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286A434"))) PPC_WEAK_FUNC(sub_8286A434);
PPC_FUNC_IMPL(__imp__sub_8286A434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286A438"))) PPC_WEAK_FUNC(sub_8286A438);
PPC_FUNC_IMPL(__imp__sub_8286A438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x8286A440;
	__savegprlr_14(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r30,r11,-4448
	ctx.r30.s64 = ctx.r11.s64 + -4448;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r3,r9,-11288
	ctx.r3.s64 = ctx.r9.s64 + -11288;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r10,r8,42088
	ctx.r10.u64 = ctx.r8.u64 | 42088;
	// li r8,24259
	ctx.r8.s64 = 24259;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lfs f11,-24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// ori r9,r7,40228
	ctx.r9.u64 = ctx.r7.u64 | 40228;
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// addi r24,r5,-11280
	ctx.r24.s64 = ctx.r5.s64 + -11280;
	// li r25,25
	ctx.r25.s64 = 25;
	// li r7,24321
	ctx.r7.s64 = 24321;
	// li r6,62
	ctx.r6.s64 = 62;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r8,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r8.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,3
	ctx.r26.s64 = 3;
	// stw r24,19628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19628, ctx.r24.u32);
	// stw r6,21484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21484, ctx.r6.u32);
	// stfs f11,22700(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22700, temp.u32);
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// li r3,50
	ctx.r3.s64 = 50;
	// stw r7,20092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20092, ctx.r7.u32);
	// addi r7,r11,2916
	ctx.r7.s64 = ctx.r11.s64 + 2916;
	// stwx r25,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r25.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r4,28852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28852, ctx.r4.u32);
	// li r23,75
	ctx.r23.s64 = 75;
	// stw r28,23320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23320, ctx.r28.u32);
	// addi r18,r6,-11236
	ctx.r18.s64 = ctx.r6.s64 + -11236;
	// stw r26,2696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2696, ctx.r26.u32);
	// li r22,20
	ctx.r22.s64 = 20;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r9,r11,13988
	ctx.r9.s64 = ctx.r11.s64 + 13988;
	// lis r21,0
	ctx.r21.s64 = 0;
	// lis r20,0
	ctx.r20.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,6
	ctx.r29.s64 = 6;
	// li r27,12
	ctx.r27.s64 = 12;
	// ori r17,r20,40232
	ctx.r17.u64 = ctx.r20.u64 | 40232;
	// li r16,24266
	ctx.r16.s64 = 24266;
	// li r15,24319
	ctx.r15.s64 = 24319;
	// li r14,63
	ctx.r14.s64 = 63;
	// lwz r10,2920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 * 240;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r11,29800
	ctx.r10.s64 = ctx.r11.s64 + 29800;
	// stw r25,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r25.u32);
	// lwz r8,2920(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r8,r8,240
	ctx.r8.s64 = ctx.r8.s64 * 240;
	// add r19,r8,r7
	ctx.r19.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r11,8920
	ctx.r8.s64 = ctx.r11.s64 + 8920;
	// stw r3,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r3.u32);
	// ori r3,r21,42092
	ctx.r3.u64 = ctx.r21.u64 | 42092;
	// lwz r6,2920(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r6,r6,240
	ctx.r6.s64 = ctx.r6.s64 * 240;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r23,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r23.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r23,29804(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// stw r6,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// mulli r6,r23,240
	ctx.r6.s64 = ctx.r23.s64 * 240;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r23,4
	ctx.r23.s64 = 4;
	// stw r22,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r22.u32);
	// lwz r6,29804(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r6,r6,240
	ctx.r6.s64 = ctx.r6.s64 * 240;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r5,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r5.u32);
	// lwz r6,13992(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r6,r6,240
	ctx.r6.s64 = ctx.r6.s64 * 240;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// lwz r6,13992(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// li r20,300
	ctx.r20.s64 = 300;
	// li r21,26
	ctx.r21.s64 = 26;
	// std r30,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r30.u64);
	// mulli r6,r6,240
	ctx.r6.s64 = ctx.r6.s64 * 240;
	// stw r20,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r20.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// li r19,400
	ctx.r19.s64 = 400;
	// li r22,200
	ctx.r22.s64 = 200;
	// stw r19,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r19.u32);
	// li r20,15
	ctx.r20.s64 = 15;
	// li r30,60
	ctx.r30.s64 = 60;
	// stw r31,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r31.u32);
	// li r19,16
	ctx.r19.s64 = 16;
	// lwz r6,8924(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r6,r6,240
	ctx.r6.s64 = ctx.r6.s64 * 240;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r29,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r29.u32);
	// lwz r6,8924(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r6,r6,240
	ctx.r6.s64 = ctx.r6.s64 * 240;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r27,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r27.u32);
	// stw r18,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r18.u32);
	// stw r16,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r16.u32);
	// stw r24,19632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19632, ctx.r24.u32);
	// stfs f11,22704(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22704, temp.u32);
	// stwx r23,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r23.u32);
	// lwz r3,-176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// stw r4,28856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28856, ctx.r4.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r15,20096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20096, ctx.r15.u32);
	// stwx r21,r11,r17
	PPC_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r21.u32);
	// stw r14,21488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21488, ctx.r14.u32);
	// stw r3,23324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23324, ctx.r3.u32);
	// stw r28,20560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20560, ctx.r28.u32);
	// stw r26,2700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2700, ctx.r26.u32);
	// lwz r6,2920(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r6,r6,244
	ctx.r6.s64 = ctx.r6.s64 * 244;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r24,-172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// stw r22,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
	// lwz r6,2920(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r6,r6,244
	ctx.r6.s64 = ctx.r6.s64 * 244;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// lwz r6,2920(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r6,r6,244
	ctx.r6.s64 = ctx.r6.s64 * 244;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r24,-168(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,244
	ctx.r7.s64 = ctx.r7.s64 * 244;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r20,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r20.u32);
	// lwz r3,29804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r3,244
	ctx.r7.s64 = ctx.r3.s64 * 244;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r5,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// lwz r6,29804(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r6,244
	ctx.r7.s64 = ctx.r6.s64 * 244;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// lwz r3,13992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r7,r3,244
	ctx.r7.s64 = ctx.r3.s64 * 244;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// lwz r6,13992(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r7,r6,244
	ctx.r7.s64 = ctx.r6.s64 * 244;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r31.u32);
	// lwz r3,13992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r7,r3,244
	ctx.r7.s64 = ctx.r3.s64 * 244;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r31,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r31.u32);
	// lwz r6,8924(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r7,r6,244
	ctx.r7.s64 = ctx.r6.s64 * 244;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r29,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r29.u32);
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r7,r3,244
	ctx.r7.s64 = ctx.r3.s64 * 244;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r27,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r27.u32);
	// lwz r6,8924(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r7,r6,244
	ctx.r7.s64 = ctx.r6.s64 * 244;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r18,20(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r7,-31945
	ctx.r7.s64 = -2093547520;
	// ld r30,-160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r22,r7,-29532
	ctx.r22.s64 = ctx.r7.s64 + -29532;
	// stw r19,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r19.u32);
	// lwz r17,32(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// lwz r7,-29532(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -29532);
	// lwz r24,4(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_8286A6F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8286A6FC:
	// lwz r6,4(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r6,48(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// blt cr6,0x8286a724
	if (ctx.cr6.lt) goto loc_8286A724;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x8286a724
	if (!ctx.cr6.lt) goto loc_8286A724;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8286a724
	if (!ctx.cr6.gt) goto loc_8286A724;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x8286a730
	if (ctx.cr6.lt) goto loc_8286A730;
loc_8286A724:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8286a780
	goto loc_8286A780;
loc_8286A730:
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8286a77c
	if (ctx.cr6.eq) goto loc_8286A77C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8286a774
	if (ctx.cr6.eq) goto loc_8286A774;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8286a76c
	if (ctx.cr6.eq) goto loc_8286A76C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8286a780
	goto loc_8286A780;
loc_8286A76C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// b 0x8286a780
	goto loc_8286A780;
loc_8286A774:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x8286a780
	goto loc_8286A780;
loc_8286A77C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_8286A780:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8286a7ec
	if (ctx.cr6.eq) goto loc_8286A7EC;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8286a7b4
	if (ctx.cr6.eq) goto loc_8286A7B4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8286a7b0
	if (ctx.cr6.eq) goto loc_8286A7B0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8286a7a8
	if (ctx.cr6.eq) goto loc_8286A7A8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x8286a7b4
	goto loc_8286A7B4;
loc_8286A7A8:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// b 0x8286a7b4
	goto loc_8286A7B4;
loc_8286A7B0:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_8286A7B4:
	// lwz r5,32(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// addi r6,r4,60
	ctx.r6.s64 = ctx.r4.s64 + 60;
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// addi r7,r11,23540
	ctx.r7.s64 = ctx.r11.s64 + 23540;
	// mullw r6,r24,r6
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r6.s32);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r5,48(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lfs f0,80(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lwz r24,4(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_8286A7EC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x8286a6fc
	if (ctx.cr6.lt) goto loc_8286A6FC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8286a6f8
	if (ctx.cr6.lt) goto loc_8286A6F8;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// ori r3,r6,42096
	ctx.r3.u64 = ctx.r6.u64 | 42096;
	// addi r4,r7,-11220
	ctx.r4.s64 = ctx.r7.s64 + -11220;
	// li r7,24260
	ctx.r7.s64 = 24260;
	// addi r6,r5,-11208
	ctx.r6.s64 = ctx.r5.s64 + -11208;
	// stw r4,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r4.u32);
	// li r5,24322
	ctx.r5.s64 = 24322;
	// stw r7,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r7.u32);
	// stw r6,19636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19636, ctx.r6.u32);
	// addi r7,r11,23540
	ctx.r7.s64 = ctx.r11.s64 + 23540;
	// stwx r23,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r23.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r5,20100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20100, ctx.r5.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// stw r29,28860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28860, ctx.r29.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r25,21956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21956, ctx.r25.u32);
	// li r31,20
	ctx.r31.s64 = 20;
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r6,248
	ctx.r6.s64 = ctx.r6.s64 * 248;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f0,29736(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 29736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-10420(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -10420);
	ctx.f12.f64 = double(temp.f32);
	// li r4,250
	ctx.r4.s64 = 250;
	// li r5,500
	ctx.r5.s64 = 500;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// lis r17,0
	ctx.r17.s64 = 0;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r6,248
	ctx.r6.s64 = ctx.r6.s64 * 248;
	// lfs f0,-28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// addi r24,r24,-11172
	ctx.r24.s64 = ctx.r24.s64 + -11172;
	// li r22,24267
	ctx.r22.s64 = 24267;
	// addi r18,r18,-11148
	ctx.r18.s64 = ctx.r18.s64 + -11148;
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r6,248
	ctx.r6.s64 = ctx.r6.s64 * 248;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ori r30,r17,42100
	ctx.r30.u64 = ctx.r17.u64 | 42100;
	// li r17,24320
	ctx.r17.s64 = 24320;
	// stfs f12,20(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stw r28,23328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23328, ctx.r28.u32);
	// stw r26,2704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2704, ctx.r26.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r6,r6,248
	ctx.r6.s64 = ctx.r6.s64 * 248;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r6,r3,248
	ctx.r6.s64 = ctx.r3.s64 * 248;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r31,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r31.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r6,r3,248
	ctx.r6.s64 = ctx.r3.s64 * 248;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r4,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r6,r4,248
	ctx.r6.s64 = ctx.r4.s64 * 248;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r6,r6,248
	ctx.r6.s64 = ctx.r6.s64 * 248;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r29,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r29.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r6,r3,248
	ctx.r6.s64 = ctx.r3.s64 * 248;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// li r3,750
	ctx.r3.s64 = 750;
	// stw r27,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r27.u32);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// stw r24,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r24.u32);
	// stw r22,764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 764, ctx.r22.u32);
	// stw r18,19640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19640, ctx.r18.u32);
	// stw r17,20104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20104, ctx.r17.u32);
	// stw r29,28864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28864, ctx.r29.u32);
	// lwz r4,13192(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13192);
	// stwx r23,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r23.u32);
	// stw r21,21960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21960, ctx.r21.u32);
	// lwz r31,23544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r4,13192(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13192, ctx.r4.u32);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r4,13180(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13180);
	// stw r4,13180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13180, ctx.r4.u32);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r4,13184(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13184);
	// stw r4,13184(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13184, ctx.r4.u32);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r4,13188(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// stw r4,13188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13188, ctx.r4.u32);
	// mulli r6,r31,252
	ctx.r6.s64 = ctx.r31.s64 * 252;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r4,252
	ctx.r6.s64 = ctx.r4.s64 * 252;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r4,252
	ctx.r6.s64 = ctx.r4.s64 * 252;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f13,20(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stw r28,23332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23332, ctx.r28.u32);
	// stw r26,2708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2708, ctx.r26.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r6,252
	ctx.r11.s64 = ctx.r6.s64 * 252;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 * 252;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r25.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r7,252
	ctx.r11.s64 = ctx.r7.s64 * 252;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r5,252
	ctx.r11.s64 = ctx.r5.s64 * 252;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r3.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r11,r3,252
	ctx.r11.s64 = ctx.r3.s64 * 252;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r11,r10,252
	ctx.r11.s64 = ctx.r10.s64 * 252;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r19,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r19.u32);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286AA14"))) PPC_WEAK_FUNC(sub_8286AA14);
PPC_FUNC_IMPL(__imp__sub_8286AA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286AA18"))) PPC_WEAK_FUNC(sub_8286AA18);
PPC_FUNC_IMPL(__imp__sub_8286AA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x8286AA20;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r22,13192(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r21,13188(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r20,13180(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// lwz r19,13184(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r31,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r31.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// ble cr6,0x8286ab28
	if (!ctx.cr6.gt) goto loc_8286AB28;
	// cmpwi cr6,r24,115
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 115, ctx.xer);
	// bge cr6,0x8286ab28
	if (!ctx.cr6.lt) goto loc_8286AB28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828433d0
	ctx.lr = 0x8286AA98;
	sub_828433D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8286ab28
	if (!ctx.cr6.eq) goto loc_8286AB28;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r24,7153
	ctx.r10.s64 = ctx.r24.s64 + 7153;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r5,r9,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// lwz r25,48(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
loc_8286AAC0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8286ab04
	if (ctx.cr6.lt) goto loc_8286AB04;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8286ab04
	if (!ctx.cr6.lt) goto loc_8286AB04;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8286ab04
	if (ctx.cr6.lt) goto loc_8286AB04;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x8286ab04
	if (!ctx.cr6.lt) goto loc_8286AB04;
	// lwz r10,8876(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8876);
	// addi r11,r25,8872
	ctx.r11.s64 = ctx.r25.s64 + 8872;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x8286ab1c
	if (!ctx.cr6.eq) goto loc_8286AB1C;
loc_8286AB04:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82843710
	ctx.lr = 0x8286AB10;
	sub_82843710(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286ab30
	if (ctx.cr6.eq) goto loc_8286AB30;
loc_8286AB1C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x8286aac0
	if (ctx.cr6.lt) goto loc_8286AAC0;
loc_8286AB28:
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// b 0x8286ab8c
	goto loc_8286AB8C;
loc_8286AB30:
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// beq cr6,0x8286ab68
	if (ctx.cr6.eq) goto loc_8286AB68;
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// beq cr6,0x8286ab58
	if (ctx.cr6.eq) goto loc_8286AB58;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x8286ab50
	if (ctx.cr6.eq) goto loc_8286AB50;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// b 0x8286ab70
	goto loc_8286AB70;
loc_8286AB50:
	// lwz r7,13188(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// b 0x8286ab70
	goto loc_8286AB70;
loc_8286AB58:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286ab70
	goto loc_8286AB70;
loc_8286AB68:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286AB70:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828435a8
	ctx.lr = 0x8286AB84;
	sub_828435A8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_8286AB8C:
	// stw r21,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r21.u32);
	// stw r19,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r19.u32);
	// stw r20,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r20.u32);
	// stw r22,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286ABA4"))) PPC_WEAK_FUNC(sub_8286ABA4);
PPC_FUNC_IMPL(__imp__sub_8286ABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286ABA8"))) PPC_WEAK_FUNC(sub_8286ABA8);
PPC_FUNC_IMPL(__imp__sub_8286ABA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8286ABB0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r23,13192(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r22,13188(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// addi r30,r10,-15760
	ctx.r30.s64 = ctx.r10.s64 + -15760;
	// lwz r21,13180(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r20,13184(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8286AC0C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8286AC18;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8286AC24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r11,15828
	ctx.r31.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8286AC3C;
	sub_828097A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286ac94
	if (ctx.cr6.eq) goto loc_8286AC94;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,460
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 460, ctx.xer);
	// bne cr6,0x8286ac94
	if (!ctx.cr6.eq) goto loc_8286AC94;
	// addi r25,r24,2744
	ctx.r25.s64 = ctx.r24.s64 + 2744;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8286AC64:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82809be0
	ctx.lr = 0x8286AC84;
	sub_82809BE0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r30,115
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 115, ctx.xer);
	// blt cr6,0x8286ac64
	if (ctx.cr6.lt) goto loc_8286AC64;
loc_8286AC94:
	// stw r23,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286ACAC"))) PPC_WEAK_FUNC(sub_8286ACAC);
PPC_FUNC_IMPL(__imp__sub_8286ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286ACB0"))) PPC_WEAK_FUNC(sub_8286ACB0);
PPC_FUNC_IMPL(__imp__sub_8286ACB0) {
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
	// lwz r31,13188(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82846630
	ctx.lr = 0x8286ACD0;
	sub_82846630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82846518
	ctx.lr = 0x8286ACD8;
	sub_82846518(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
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

__attribute__((alias("__imp__sub_8286ACF0"))) PPC_WEAK_FUNC(sub_8286ACF0);
PPC_FUNC_IMPL(__imp__sub_8286ACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286AD14"))) PPC_WEAK_FUNC(sub_8286AD14);
PPC_FUNC_IMPL(__imp__sub_8286AD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286AD18"))) PPC_WEAK_FUNC(sub_8286AD18);
PPC_FUNC_IMPL(__imp__sub_8286AD18) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r3,13188(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286ad7c
	if (ctx.cr6.eq) goto loc_8286AD7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286ad74
	if (ctx.cr6.eq) goto loc_8286AD74;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286ad6c
	if (ctx.cr6.eq) goto loc_8286AD6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286ad80
	goto loc_8286AD80;
loc_8286AD6C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286ad80
	goto loc_8286AD80;
loc_8286AD74:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286ad80
	goto loc_8286AD80;
loc_8286AD7C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8286AD80:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286adbc
	if (ctx.cr6.eq) goto loc_8286ADBC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286adb0
	if (ctx.cr6.eq) goto loc_8286ADB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286ada8
	if (ctx.cr6.eq) goto loc_8286ADA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286adb4
	if (!ctx.cr6.eq) goto loc_8286ADB4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286adb4
	goto loc_8286ADB4;
loc_8286ADA8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286adb4
	goto loc_8286ADB4;
loc_8286ADB0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286ADB4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82846ad8
	ctx.lr = 0x8286ADBC;
	sub_82846AD8(ctx, base);
loc_8286ADBC:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286ADD0"))) PPC_WEAK_FUNC(sub_8286ADD0);
PPC_FUNC_IMPL(__imp__sub_8286ADD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286ADD8"))) PPC_WEAK_FUNC(sub_8286ADD8);
PPC_FUNC_IMPL(__imp__sub_8286ADD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286ADE0"))) PPC_WEAK_FUNC(sub_8286ADE0);
PPC_FUNC_IMPL(__imp__sub_8286ADE0) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r3,13188(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286ae44
	if (ctx.cr6.eq) goto loc_8286AE44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286ae3c
	if (ctx.cr6.eq) goto loc_8286AE3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286ae34
	if (ctx.cr6.eq) goto loc_8286AE34;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286ae48
	goto loc_8286AE48;
loc_8286AE34:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286ae48
	goto loc_8286AE48;
loc_8286AE3C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286ae48
	goto loc_8286AE48;
loc_8286AE44:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8286AE48:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286ae84
	if (ctx.cr6.eq) goto loc_8286AE84;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286ae78
	if (ctx.cr6.eq) goto loc_8286AE78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286ae70
	if (ctx.cr6.eq) goto loc_8286AE70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286ae7c
	if (!ctx.cr6.eq) goto loc_8286AE7C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286ae7c
	goto loc_8286AE7C;
loc_8286AE70:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286ae7c
	goto loc_8286AE7C;
loc_8286AE78:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286AE7C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82847a50
	ctx.lr = 0x8286AE84;
	sub_82847A50(ctx, base);
loc_8286AE84:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286AE98"))) PPC_WEAK_FUNC(sub_8286AE98);
PPC_FUNC_IMPL(__imp__sub_8286AE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8286AEA0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8286AEFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8286AF08;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8286AF14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8286AF28;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286af50
	if (ctx.cr6.eq) goto loc_8286AF50;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8286af50
	if (!ctx.cr6.eq) goto loc_8286AF50;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8286AF4C;
	sub_82BFEA70(ctx, base);
	// stw r3,72(r20)
	PPC_STORE_U32(ctx.r20.u32 + 72, ctx.r3.u32);
loc_8286AF50:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286AF68"))) PPC_WEAK_FUNC(sub_8286AF68);
PPC_FUNC_IMPL(__imp__sub_8286AF68) {
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
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// lwz r10,15828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286afdc
	if (ctx.cr6.eq) goto loc_8286AFDC;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8286afb8
	if (!ctx.cr6.eq) goto loc_8286AFB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286afdc
	goto loc_8286AFDC;
loc_8286AFB8:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8286afcc
	if (!ctx.cr6.eq) goto loc_8286AFCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286afdc
	goto loc_8286AFDC;
loc_8286AFCC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8286AFDC:
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b02c
	if (ctx.cr6.eq) goto loc_8286B02C;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8286b004
	if (ctx.cr6.gt) goto loc_8286B004;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b02c
	goto loc_8286B02C;
loc_8286B004:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8286b018
	if (ctx.cr6.gt) goto loc_8286B018;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b02c
	goto loc_8286B02C;
loc_8286B018:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286B02C:
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b07c
	if (ctx.cr6.eq) goto loc_8286B07C;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x8286b054
	if (ctx.cr6.gt) goto loc_8286B054;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b07c
	goto loc_8286B07C;
loc_8286B054:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x8286b068
	if (ctx.cr6.gt) goto loc_8286B068;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b07c
	goto loc_8286B07C;
loc_8286B068:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286B07C:
	// stw r11,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r11.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r31,924
	ctx.r5.s64 = ctx.r31.s64 + 924;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82809be0
	ctx.lr = 0x8286B090;
	sub_82809BE0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b0dc
	if (ctx.cr6.eq) goto loc_8286B0DC;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,53
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 53, ctx.xer);
	// bgt cr6,0x8286b0b4
	if (ctx.cr6.gt) goto loc_8286B0B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b0dc
	goto loc_8286B0DC;
loc_8286B0B4:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,53
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 53, ctx.xer);
	// bgt cr6,0x8286b0c8
	if (ctx.cr6.gt) goto loc_8286B0C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b0dc
	goto loc_8286B0DC;
loc_8286B0C8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,53
	ctx.r9.s64 = ctx.r11.s64 + 53;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286B0DC:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b12c
	if (ctx.cr6.eq) goto loc_8286B12C;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,54
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 54, ctx.xer);
	// bgt cr6,0x8286b104
	if (ctx.cr6.gt) goto loc_8286B104;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b12c
	goto loc_8286B12C;
loc_8286B104:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,54
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 54, ctx.xer);
	// bgt cr6,0x8286b118
	if (ctx.cr6.gt) goto loc_8286B118;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b12c
	goto loc_8286B12C;
loc_8286B118:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,54
	ctx.r9.s64 = ctx.r11.s64 + 54;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286B12C:
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b17c
	if (ctx.cr6.eq) goto loc_8286B17C;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,55
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 55, ctx.xer);
	// bgt cr6,0x8286b154
	if (ctx.cr6.gt) goto loc_8286B154;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b17c
	goto loc_8286B17C;
loc_8286B154:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,55
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 55, ctx.xer);
	// bgt cr6,0x8286b168
	if (ctx.cr6.gt) goto loc_8286B168;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b17c
	goto loc_8286B17C;
loc_8286B168:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,55
	ctx.r9.s64 = ctx.r11.s64 + 55;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286B17C:
	// stw r11,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b1cc
	if (ctx.cr6.eq) goto loc_8286B1CC;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,56
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 56, ctx.xer);
	// bgt cr6,0x8286b1a4
	if (ctx.cr6.gt) goto loc_8286B1A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b1cc
	goto loc_8286B1CC;
loc_8286B1A4:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,56
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 56, ctx.xer);
	// bgt cr6,0x8286b1b8
	if (ctx.cr6.gt) goto loc_8286B1B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b1cc
	goto loc_8286B1CC;
loc_8286B1B8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286B1CC:
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8286b1e8
	if (!ctx.cr6.eq) goto loc_8286B1E8;
loc_8286B1E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b214
	goto loc_8286B214;
loc_8286B1E8:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x8286b1e0
	if (!ctx.cr6.gt) goto loc_8286B1E0;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x8286b1e0
	if (!ctx.cr6.gt) goto loc_8286B1E0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,57
	ctx.r9.s64 = ctx.r11.s64 + 57;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286B214:
	// li r10,58
	ctx.r10.s64 = 58;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8286B238"))) PPC_WEAK_FUNC(sub_8286B238);
PPC_FUNC_IMPL(__imp__sub_8286B238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8286B240;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,15828
	ctx.r28.s64 = ctx.r29.s64 + 15828;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82809688
	ctx.lr = 0x8286B270;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,2032(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8286B284;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,2036(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8286B298;
	sub_82809688(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r31,924
	ctx.r5.s64 = ctx.r31.s64 + 924;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82809b40
	ctx.lr = 0x8286B2AC;
	sub_82809B40(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8286B2C0;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,54
	ctx.r4.s64 = 54;
	// lwz r5,1556(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8286B2D4;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,55
	ctx.r4.s64 = 55;
	// lwz r5,2048(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8286B2E8;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r5,912(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8286B2FC;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,57
	ctx.r4.s64 = 57;
	// lwz r5,904(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8286B310;
	sub_82809688(ctx, base);
	// li r9,58
	ctx.r9.s64 = 58;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B320"))) PPC_WEAK_FUNC(sub_8286B320);
PPC_FUNC_IMPL(__imp__sub_8286B320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286B328;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r20,12480(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8286B388;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r20,4132
	ctx.r4.s64 = ctx.r20.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8286B394;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8286B3A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,15828
	ctx.r7.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8286B3B8;
	sub_828097A0(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b3d4
	if (ctx.cr6.eq) goto loc_8286B3D4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8286b3dc
	if (ctx.cr6.eq) goto loc_8286B3DC;
loc_8286B3D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286b3f4
	goto loc_8286B3F4;
loc_8286B3DC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r19,232
	ctx.r5.s64 = ctx.r19.s64 + 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82809be0
	ctx.lr = 0x8286B3F0;
	sub_82809BE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8286B3F4:
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B410"))) PPC_WEAK_FUNC(sub_8286B410);
PPC_FUNC_IMPL(__imp__sub_8286B410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r7,r11,328
	ctx.r7.s64 = ctx.r11.s64 + 328;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8286B444:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286b478
	if (ctx.cr6.eq) goto loc_8286B478;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286b470
	if (ctx.cr6.eq) goto loc_8286B470;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286b468
	if (ctx.cr6.eq) goto loc_8286B468;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286b47c
	goto loc_8286B47C;
loc_8286B468:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286b47c
	goto loc_8286B47C;
loc_8286B470:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286b47c
	goto loc_8286B47C;
loc_8286B478:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286B47C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b580
	if (ctx.cr6.eq) goto loc_8286B580;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286b4b4
	if (ctx.cr6.eq) goto loc_8286B4B4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286b4ac
	if (ctx.cr6.eq) goto loc_8286B4AC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286b4a4
	if (ctx.cr6.eq) goto loc_8286B4A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286b4b8
	goto loc_8286B4B8;
loc_8286B4A4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286b4b8
	goto loc_8286B4B8;
loc_8286B4AC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286b4b8
	goto loc_8286B4B8;
loc_8286B4B4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286B4B8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r5,900(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8286b580
	if (!ctx.cr6.eq) goto loc_8286B580;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286b500
	if (ctx.cr6.eq) goto loc_8286B500;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286b4f8
	if (ctx.cr6.eq) goto loc_8286B4F8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286b4f0
	if (ctx.cr6.eq) goto loc_8286B4F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286b504
	goto loc_8286B504;
loc_8286B4F0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286b504
	goto loc_8286B504;
loc_8286B4F8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286b504
	goto loc_8286B504;
loc_8286B500:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286B504:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r5,2272(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2272);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// beq cr6,0x8286b558
	if (ctx.cr6.eq) goto loc_8286B558;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286b550
	if (ctx.cr6.eq) goto loc_8286B550;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286b548
	if (ctx.cr6.eq) goto loc_8286B548;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286b55c
	goto loc_8286B55C;
loc_8286B548:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286b55c
	goto loc_8286B55C;
loc_8286B550:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286b55c
	goto loc_8286B55C;
loc_8286B558:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286B55C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,2012(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2012);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// lfd f0,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
loc_8286B580:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8286b444
	if (!ctx.cr0.eq) goto loc_8286B444;
	// stfs f12,-24(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286B5B4"))) PPC_WEAK_FUNC(sub_8286B5B4);
PPC_FUNC_IMPL(__imp__sub_8286B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286B5B8"))) PPC_WEAK_FUNC(sub_8286B5B8);
PPC_FUNC_IMPL(__imp__sub_8286B5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286B5C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r22,13192(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// addi r26,r9,-15760
	ctx.r26.s64 = ctx.r9.s64 + -15760;
	// lwz r21,13188(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r20,13184(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12480);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// bl 0x82c09bec
	ctx.lr = 0x8286B624;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8286B630;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8286B63C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8286B650;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b66c
	if (ctx.cr6.eq) goto loc_8286B66C;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x8286b674
	if (ctx.cr6.eq) goto loc_8286B674;
loc_8286B66C:
	// stw r19,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r19.u32);
	// b 0x8286b6b4
	goto loc_8286B6B4;
loc_8286B674:
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286b698
	if (ctx.cr6.eq) goto loc_8286B698;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8286b6a0
	if (!ctx.cr6.eq) goto loc_8286B6A0;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286b6a0
	goto loc_8286B6A0;
loc_8286B698:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286B6A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8286af68
	ctx.lr = 0x8286B6AC;
	sub_8286AF68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8286B6B4:
	// stw r21,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r21.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r22,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B6CC"))) PPC_WEAK_FUNC(sub_8286B6CC);
PPC_FUNC_IMPL(__imp__sub_8286B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286B6D0"))) PPC_WEAK_FUNC(sub_8286B6D0);
PPC_FUNC_IMPL(__imp__sub_8286B6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286B6D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r22,13192(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// addi r26,r9,-15760
	ctx.r26.s64 = ctx.r9.s64 + -15760;
	// lwz r21,13188(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r20,13184(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12480);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// bl 0x82c09bec
	ctx.lr = 0x8286B73C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8286B748;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8286B754;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8286B768;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b784
	if (ctx.cr6.eq) goto loc_8286B784;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x8286b78c
	if (ctx.cr6.eq) goto loc_8286B78C;
loc_8286B784:
	// stw r19,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r19.u32);
	// b 0x8286b7cc
	goto loc_8286B7CC;
loc_8286B78C:
	// lwz r3,13188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286b7b0
	if (ctx.cr6.eq) goto loc_8286B7B0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8286b7b8
	if (!ctx.cr6.eq) goto loc_8286B7B8;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286b7b8
	goto loc_8286B7B8;
loc_8286B7B0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286B7B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8286af68
	ctx.lr = 0x8286B7C4;
	sub_8286AF68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8286B7CC:
	// stw r21,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r21.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r22,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B7E4"))) PPC_WEAK_FUNC(sub_8286B7E4);
PPC_FUNC_IMPL(__imp__sub_8286B7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286B7E8"))) PPC_WEAK_FUNC(sub_8286B7E8);
PPC_FUNC_IMPL(__imp__sub_8286B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x8286B7F0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,13556(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,-20176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20176);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r18,13180(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13180);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r16,13188(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lis r20,-31940
	ctx.r20.s64 = -2093219840;
	// lwz r17,13192(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// lis r24,-31940
	ctx.r24.s64 = -2093219840;
	// lwz r15,13184(r21)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13184);
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// stw r3,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r3.u32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// stw r11,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r11.u32);
	// stw r27,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r27.u32);
	// stw r11,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286b918
	if (ctx.cr6.eq) goto loc_8286B918;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r11,9218
	ctx.r11.s64 = 604110848;
	// ori r4,r11,19480
	ctx.r4.u64 = ctx.r11.u64 | 19480;
	// lwz r6,12480(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286B874;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286b890
	if (ctx.cr6.eq) goto loc_8286B890;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286B884;
	sub_82BCD500(ctx, base);
	// lwz r27,13188(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r6,12480(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12480);
	// b 0x8286b894
	goto loc_8286B894;
loc_8286B890:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286B894:
	// lis r11,-29439
	ctx.r11.s64 = -1929314304;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r11,3735
	ctx.r4.u64 = ctx.r11.u64 | 3735;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r5,-29128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29128, ctx.r5.u32);
	// bl 0x82bcd3b8
	ctx.lr = 0x8286B8AC;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286b8cc
	if (ctx.cr6.eq) goto loc_8286B8CC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286B8BC;
	sub_82BCD500(ctx, base);
	// lwz r5,-29128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29128);
	// lwz r27,13188(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r6,12480(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12480);
	// b 0x8286b8d0
	goto loc_8286B8D0;
loc_8286B8CC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286B8D0:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// stw r3,-29124(r24)
	PPC_STORE_U32(ctx.r24.u32 + -29124, ctx.r3.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r11,9072
	ctx.r4.u64 = ctx.r11.u64 | 9072;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286B8E4;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286b908
	if (ctx.cr6.eq) goto loc_8286B908;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286B8F4;
	sub_82BCD500(ctx, base);
	// lwz r5,-29128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29128);
	// lwz r27,13188(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// stw r3,-29132(r20)
	PPC_STORE_U32(ctx.r20.u32 + -29132, ctx.r3.u32);
	// stw r29,-20176(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20176, ctx.r29.u32);
	// b 0x8286b91c
	goto loc_8286B91C;
loc_8286B908:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r29,-20176(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20176, ctx.r29.u32);
	// stw r3,-29132(r20)
	PPC_STORE_U32(ctx.r20.u32 + -29132, ctx.r3.u32);
	// b 0x8286b91c
	goto loc_8286B91C;
loc_8286B918:
	// lwz r5,-29128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29128);
loc_8286B91C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x8286b960
	if (ctx.cr6.eq) goto loc_8286B960;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286b958
	if (ctx.cr6.eq) goto loc_8286B958;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286b950
	if (ctx.cr6.eq) goto loc_8286B950;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8286b964
	goto loc_8286B964;
loc_8286B950:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x8286b964
	goto loc_8286B964;
loc_8286B958:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x8286b964
	goto loc_8286B964;
loc_8286B960:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8286B964:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8286b994
	if (ctx.cr6.eq) goto loc_8286B994;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8286b98c
	if (ctx.cr6.eq) goto loc_8286B98C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8286b984
	if (ctx.cr6.eq) goto loc_8286B984;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8286b998
	goto loc_8286B998;
loc_8286B984:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8286b998
	goto loc_8286B998;
loc_8286B98C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286b998
	goto loc_8286B998;
loc_8286B994:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8286B998:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8286b9b8
	if (!ctx.cr6.eq) goto loc_8286B9B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x827eee58
	ctx.lr = 0x8286B9AC;
	sub_827EEE58(ctx, base);
	// lwz r27,13188(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8286B9B8:
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286b9ec
	if (ctx.cr6.eq) goto loc_8286B9EC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286b9e4
	if (ctx.cr6.eq) goto loc_8286B9E4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286b9dc
	if (ctx.cr6.eq) goto loc_8286B9DC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286b9f0
	goto loc_8286B9F0;
loc_8286B9DC:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8286b9f0
	goto loc_8286B9F0;
loc_8286B9E4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286b9f0
	goto loc_8286B9F0;
loc_8286B9EC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8286B9F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286bb8c
	if (ctx.cr6.eq) goto loc_8286BB8C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286ba28
	if (ctx.cr6.eq) goto loc_8286BA28;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286ba20
	if (ctx.cr6.eq) goto loc_8286BA20;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286ba18
	if (ctx.cr6.eq) goto loc_8286BA18;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286ba2c
	goto loc_8286BA2C;
loc_8286BA18:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8286ba2c
	goto loc_8286BA2C;
loc_8286BA20:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286ba2c
	goto loc_8286BA2C;
loc_8286BA28:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8286BA2C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286ba98
	if (ctx.cr6.eq) goto loc_8286BA98;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286ba98
	if (ctx.cr6.eq) goto loc_8286BA98;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,-29124(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29124);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8286ba98
	if (!ctx.cr6.eq) goto loc_8286BA98;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286ba84
	if (ctx.cr6.eq) goto loc_8286BA84;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286ba7c
	if (ctx.cr6.eq) goto loc_8286BA7C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286ba74
	if (ctx.cr6.eq) goto loc_8286BA74;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286ba88
	goto loc_8286BA88;
loc_8286BA74:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8286ba88
	goto loc_8286BA88;
loc_8286BA7C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286ba88
	goto loc_8286BA88;
loc_8286BA84:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8286BA88:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r3,20(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
loc_8286BA98:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286bac8
	if (ctx.cr6.eq) goto loc_8286BAC8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286bac0
	if (ctx.cr6.eq) goto loc_8286BAC0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286bab8
	if (ctx.cr6.eq) goto loc_8286BAB8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286bacc
	goto loc_8286BACC;
loc_8286BAB8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8286bacc
	goto loc_8286BACC;
loc_8286BAC0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286bacc
	goto loc_8286BACC;
loc_8286BAC8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8286BACC:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286baf4
	if (ctx.cr6.eq) goto loc_8286BAF4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286baf4
	if (ctx.cr6.eq) goto loc_8286BAF4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,-29132(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29132);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8286bb44
	if (ctx.cr6.eq) goto loc_8286BB44;
loc_8286BAF4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286bb20
	if (ctx.cr6.eq) goto loc_8286BB20;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286bb1c
	if (ctx.cr6.eq) goto loc_8286BB1C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286bb14
	if (ctx.cr6.eq) goto loc_8286BB14;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286bb20
	goto loc_8286BB20;
loc_8286BB14:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8286bb20
	goto loc_8286BB20;
loc_8286BB1C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286BB20:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bb8c
	if (ctx.cr6.eq) goto loc_8286BB8C;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8286bb8c
	if (ctx.cr6.eq) goto loc_8286BB8C;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8286bb8c
	goto loc_8286BB8C;
loc_8286BB44:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286bb70
	if (ctx.cr6.eq) goto loc_8286BB70;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286bb6c
	if (ctx.cr6.eq) goto loc_8286BB6C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286bb64
	if (ctx.cr6.eq) goto loc_8286BB64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286bb70
	goto loc_8286BB70;
loc_8286BB64:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8286bb70
	goto loc_8286BB70;
loc_8286BB6C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286BB70:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r7,28,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
loc_8286BB8C:
	// stw r9,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r9.u32);
	// stw r17,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r17.u32);
	// stw r18,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r18.u32);
	// stw r15,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r15.u32);
	// stw r16,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r16.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286BBA8"))) PPC_WEAK_FUNC(sub_8286BBA8);
PPC_FUNC_IMPL(__imp__sub_8286BBA8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x828492e0
	ctx.lr = 0x8286BBC8;
	sub_828492E0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286BBE0"))) PPC_WEAK_FUNC(sub_8286BBE0);
PPC_FUNC_IMPL(__imp__sub_8286BBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8286BBE8;
	__savegprlr_20(ctx, base);
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r25,13192(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r21,48(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// bne cr6,0x8286bc50
	if (!ctx.cr6.eq) goto loc_8286BC50;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f29,-29396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29396);
	ctx.f29.f64 = double(temp.f32);
	// b 0x8286bc58
	goto loc_8286BC58;
loc_8286BC50:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f29,-29432(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29432);
	ctx.f29.f64 = double(temp.f32);
loc_8286BC58:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r20,10
	ctx.r20.s64 = 10;
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f30,-30764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30764);
	ctx.f30.f64 = double(temp.f32);
loc_8286BC6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bbcba0
	ctx.lr = 0x8286BC78;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x8286BC7C;
	sub_8221BF50(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f31,f12,f30,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// bne 0x8286bc6c
	if (!ctx.cr0.eq) goto loc_8286BC6C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,256(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 256);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lfs f0,-27236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// beq cr6,0x8286bccc
	if (ctx.cr6.eq) goto loc_8286BCCC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8286bcd0
	if (ctx.cr6.lt) goto loc_8286BCD0;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x8286bcd0
	if (ctx.cr6.gt) goto loc_8286BCD0;
loc_8286BCCC:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8286BCD0:
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
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286BCF8"))) PPC_WEAK_FUNC(sub_8286BCF8);
PPC_FUNC_IMPL(__imp__sub_8286BCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286BD00;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
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
	// lwz r27,13556(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,-20240(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20240);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r22,13188(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r23,13192(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// lwz r21,13180(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r20,13184(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r6,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r6.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286bdb0
	if (ctx.cr6.eq) goto loc_8286BDB0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,11109
	ctx.r4.u64 = ctx.r10.u64 | 11109;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286BD7C;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286bda0
	if (ctx.cr6.eq) goto loc_8286BDA0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286BD8C;
	sub_82BCD500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,13188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r27,-20240(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20240, ctx.r27.u32);
	// stw r11,-29216(r25)
	PPC_STORE_U32(ctx.r25.u32 + -29216, ctx.r11.u32);
	// b 0x8286bdb4
	goto loc_8286BDB4;
loc_8286BDA0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,-20240(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20240, ctx.r27.u32);
	// stw r11,-29216(r25)
	PPC_STORE_U32(ctx.r25.u32 + -29216, ctx.r11.u32);
	// b 0x8286bdb4
	goto loc_8286BDB4;
loc_8286BDB0:
	// lwz r11,-29216(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -29216);
loc_8286BDB4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286bde4
	if (ctx.cr6.eq) goto loc_8286BDE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286bdd4
	if (ctx.cr6.eq) goto loc_8286BDD4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286bdec
	if (!ctx.cr6.eq) goto loc_8286BDEC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8286bdec
	goto loc_8286BDEC;
loc_8286BDD4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286bdec
	goto loc_8286BDEC;
loc_8286BDE4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286BDEC:
	// lwz r10,500(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 500);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// blt cr6,0x8286be34
	if (ctx.cr6.lt) goto loc_8286BE34;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x8286be34
	if (!ctx.cr6.lt) goto loc_8286BE34;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8286be34
	if (ctx.cr6.eq) goto loc_8286BE34;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,3788
	ctx.r11.s64 = ctx.r11.s64 + 3788;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8286be3c
	if (!ctx.cr6.eq) goto loc_8286BE3C;
loc_8286BE34:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286be40
	goto loc_8286BE40;
loc_8286BE3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8286BE40:
	// stw r22,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r22.u32);
	// stw r20,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r20.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r21,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r21.u32);
	// stw r23,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286BE5C"))) PPC_WEAK_FUNC(sub_8286BE5C);
PPC_FUNC_IMPL(__imp__sub_8286BE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286BE60"))) PPC_WEAK_FUNC(sub_8286BE60);
PPC_FUNC_IMPL(__imp__sub_8286BE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286BE68;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r10,-20256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20256);
	// lwz r31,13556(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r21,13188(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r22,13192(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13192);
	// lis r28,-31940
	ctx.r28.s64 = -2093219840;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r20,13180(r24)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// lwz r19,13184(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r29,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r29.u32);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r5,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r5.u32);
	// stw r11,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286bf24
	if (ctx.cr6.eq) goto loc_8286BF24;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,11109
	ctx.r4.u64 = ctx.r10.u64 | 11109;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286BEEC;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286bf10
	if (ctx.cr6.eq) goto loc_8286BF10;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286BEFC;
	sub_82BCD500(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,13188(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// stw r31,-20256(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20256, ctx.r31.u32);
	// stw r6,-29236(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29236, ctx.r6.u32);
	// b 0x8286bf28
	goto loc_8286BF28;
loc_8286BF10:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20256(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20256, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,-29236(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29236, ctx.r6.u32);
	// b 0x8286bf28
	goto loc_8286BF28;
loc_8286BF24:
	// lwz r6,-29236(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29236);
loc_8286BF28:
	// lwz r11,500(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 500);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8286c040
	if (!ctx.cr6.eq) goto loc_8286C040;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,528(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 528);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r31,-29532(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x8286bf78
	if (ctx.cr6.eq) goto loc_8286BF78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286bf70
	if (ctx.cr6.eq) goto loc_8286BF70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286bf68
	if (ctx.cr6.eq) goto loc_8286BF68;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286bf7c
	goto loc_8286BF7C;
loc_8286BF68:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8286bf7c
	goto loc_8286BF7C;
loc_8286BF70:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8286bf7c
	goto loc_8286BF7C;
loc_8286BF78:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8286BF7C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286bfc8
	if (ctx.cr6.eq) goto loc_8286BFC8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286bfac
	if (ctx.cr6.eq) goto loc_8286BFAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286bfa4
	if (ctx.cr6.eq) goto loc_8286BFA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286bfb0
	if (!ctx.cr6.eq) goto loc_8286BFB0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286bfb0
	goto loc_8286BFB0;
loc_8286BFA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286bfb0
	goto loc_8286BFB0;
loc_8286BFAC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8286BFB0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8286c03c
	if (!ctx.cr6.eq) goto loc_8286C03C;
loc_8286BFC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82849228
	ctx.lr = 0x8286BFD4;
	sub_82849228(ctx, base);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8286c004
	if (ctx.cr6.eq) goto loc_8286C004;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8286bffc
	if (ctx.cr6.eq) goto loc_8286BFFC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8286bff4
	if (ctx.cr6.eq) goto loc_8286BFF4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8286c008
	goto loc_8286C008;
loc_8286BFF4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286c008
	goto loc_8286C008;
loc_8286BFFC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286c008
	goto loc_8286C008;
loc_8286C004:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8286C008:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8286c038
	if (ctx.cr6.lt) goto loc_8286C038;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x8286c038
	if (!ctx.cr6.lt) goto loc_8286C038;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,421
	ctx.r10.s64 = ctx.r10.s64 + 421;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x8286c03c
	goto loc_8286C03C;
loc_8286C038:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8286C03C:
	// stw r11,500(r23)
	PPC_STORE_U32(ctx.r23.u32 + 500, ctx.r11.u32);
loc_8286C040:
	// stw r22,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r22.u32);
	// stw r20,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C058"))) PPC_WEAK_FUNC(sub_8286C058);
PPC_FUNC_IMPL(__imp__sub_8286C058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x8286C060;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r10,-20288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20288);
	// lwz r29,13556(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r20,13188(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r21,13192(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lis r24,-31940
	ctx.r24.s64 = -2093219840;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// lwz r19,13180(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r18,13184(r25)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13184);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// stw r6,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r6.u32);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286c114
	if (ctx.cr6.eq) goto loc_8286C114;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,24468
	ctx.r4.u64 = ctx.r10.u64 | 24468;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286C0E0;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286c104
	if (ctx.cr6.eq) goto loc_8286C104;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286C0F0;
	sub_82BCD500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,13188(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// stw r29,-20288(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20288, ctx.r29.u32);
	// stw r11,-29276(r24)
	PPC_STORE_U32(ctx.r24.u32 + -29276, ctx.r11.u32);
	// b 0x8286c118
	goto loc_8286C118;
loc_8286C104:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,-20288(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20288, ctx.r29.u32);
	// stw r11,-29276(r24)
	PPC_STORE_U32(ctx.r24.u32 + -29276, ctx.r11.u32);
	// b 0x8286c118
	goto loc_8286C118;
loc_8286C114:
	// lwz r11,-29276(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29276);
loc_8286C118:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,108(r23)
	PPC_STORE_U32(ctx.r23.u32 + 108, ctx.r10.u32);
	// beq cr6,0x8286c150
	if (ctx.cr6.eq) goto loc_8286C150;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c140
	if (ctx.cr6.eq) goto loc_8286C140;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286c158
	if (!ctx.cr6.eq) goto loc_8286C158;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8286c158
	goto loc_8286C158;
loc_8286C140:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286c158
	goto loc_8286C158;
loc_8286C150:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286C158:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// ble cr6,0x8286c1a0
	if (!ctx.cr6.gt) goto loc_8286C1A0;
	// cmpwi cr6,r22,1000
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1000, ctx.xer);
	// bge cr6,0x8286c1a0
	if (!ctx.cr6.lt) goto loc_8286C1A0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r22,2003
	ctx.r10.s64 = ctx.r22.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8286c1a0
	if (ctx.cr6.eq) goto loc_8286C1A0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 852, ctx.r10.u32);
loc_8286C1A0:
	// stw r21,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r21.u32);
	// stw r19,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r19.u32);
	// stw r18,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r18.u32);
	// stw r20,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r20.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C1B8"))) PPC_WEAK_FUNC(sub_8286C1B8);
PPC_FUNC_IMPL(__imp__sub_8286C1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x8286C1C0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lwz r10,-20316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20316);
	// lwz r31,13556(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r18,13188(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r19,13192(r22)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// lis r28,-31940
	ctx.r28.s64 = -2093219840;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r24,-31940
	ctx.r24.s64 = -2093219840;
	// lwz r17,13180(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13180);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r16,13184(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// stw r27,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r27.u32);
	// stw r5,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r5.u32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286c2b0
	if (ctx.cr6.eq) goto loc_8286C2B0;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r11,28160
	ctx.r11.s64 = 1845493760;
	// ori r4,r11,4621
	ctx.r4.u64 = ctx.r11.u64 | 4621;
	// lwz r6,12480(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286C244;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286c260
	if (ctx.cr6.eq) goto loc_8286C260;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286C254;
	sub_82BCD500(ctx, base);
	// lwz r5,13188(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r6,12480(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12480);
	// b 0x8286c264
	goto loc_8286C264;
loc_8286C260:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286C264:
	// lis r11,6917
	ctx.r11.s64 = 453312512;
	// stw r3,-29344(r24)
	PPC_STORE_U32(ctx.r24.u32 + -29344, ctx.r3.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r11,16088
	ctx.r4.u64 = ctx.r11.u64 | 16088;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286C278;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286c29c
	if (ctx.cr6.eq) goto loc_8286C29C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286C288;
	sub_82BCD500(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,13188(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// stw r31,-20316(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20316, ctx.r31.u32);
	// stw r29,-29340(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29340, ctx.r29.u32);
	// b 0x8286c2b4
	goto loc_8286C2B4;
loc_8286C29C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20316(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20316, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,-29340(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29340, ctx.r29.u32);
	// b 0x8286c2b4
	goto loc_8286C2B4;
loc_8286C2B0:
	// lwz r29,-29340(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29340);
loc_8286C2B4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c304
	if (ctx.cr6.eq) goto loc_8286C304;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c304
	if (ctx.cr6.eq) goto loc_8286C304;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c304
	if (ctx.cr6.eq) goto loc_8286C304;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c304
	if (ctx.cr6.eq) goto loc_8286C304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82befb68
	ctx.lr = 0x8286C2FC;
	sub_82BEFB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8286c308
	if (!ctx.cr6.eq) goto loc_8286C308;
loc_8286C304:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_8286C308:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,192(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x8286c34c
	if (ctx.cr6.eq) goto loc_8286C34C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c344
	if (ctx.cr6.eq) goto loc_8286C344;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286c33c
	if (ctx.cr6.eq) goto loc_8286C33C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286c350
	goto loc_8286C350;
loc_8286C33C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8286c350
	goto loc_8286C350;
loc_8286C344:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8286c350
	goto loc_8286C350;
loc_8286C34C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8286C350:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c3b8
	if (ctx.cr6.eq) goto loc_8286C3B8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286c380
	if (ctx.cr6.eq) goto loc_8286C380;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c378
	if (ctx.cr6.eq) goto loc_8286C378;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286c384
	if (!ctx.cr6.eq) goto loc_8286C384;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286c384
	goto loc_8286C384;
loc_8286C378:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286c384
	goto loc_8286C384;
loc_8286C380:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286C384:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c3ac
	if (ctx.cr6.eq) goto loc_8286C3AC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c3ac
	if (ctx.cr6.eq) goto loc_8286C3AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,-29344(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29344);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8286c3b8
	if (ctx.cr6.eq) goto loc_8286C3B8;
loc_8286C3AC:
	// stw r6,192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 192, ctx.r6.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8286C3B8:
	// lwz r11,252(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 252);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286c3ec
	if (ctx.cr6.eq) goto loc_8286C3EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c3e4
	if (ctx.cr6.eq) goto loc_8286C3E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286c3dc
	if (ctx.cr6.eq) goto loc_8286C3DC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286c3f0
	goto loc_8286C3F0;
loc_8286C3DC:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8286c3f0
	goto loc_8286C3F0;
loc_8286C3E4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8286c3f0
	goto loc_8286C3F0;
loc_8286C3EC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8286C3F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c45c
	if (ctx.cr6.eq) goto loc_8286C45C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286c420
	if (ctx.cr6.eq) goto loc_8286C420;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c418
	if (ctx.cr6.eq) goto loc_8286C418;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286c424
	if (!ctx.cr6.eq) goto loc_8286C424;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286c424
	goto loc_8286C424;
loc_8286C418:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286c424
	goto loc_8286C424;
loc_8286C420:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286C424:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c448
	if (ctx.cr6.eq) goto loc_8286C448;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c448
	if (ctx.cr6.eq) goto loc_8286C448;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8286c45c
	if (ctx.cr6.eq) goto loc_8286C45C;
loc_8286C448:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r6,252(r9)
	PPC_STORE_U32(ctx.r9.u32 + 252, ctx.r6.u32);
	// stw r6,332(r9)
	PPC_STORE_U32(ctx.r9.u32 + 332, ctx.r6.u32);
loc_8286C45C:
	// stw r4,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r4.u32);
	// stw r19,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r19.u32);
	// stw r17,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r17.u32);
	// stw r16,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r16.u32);
	// stw r18,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C478"))) PPC_WEAK_FUNC(sub_8286C478);
PPC_FUNC_IMPL(__imp__sub_8286C478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x8286C480;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r10,-20344(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20344);
	// lwz r30,13556(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lwz r19,13180(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13180);
	// lwz r17,13188(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r18,13192(r22)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// lis r27,-31940
	ctx.r27.s64 = -2093219840;
	// lwz r16,13184(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r11.u32);
	// stw r31,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r31.u32);
	// stw r25,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r25.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286c540
	if (ctx.cr6.eq) goto loc_8286C540;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,6400
	ctx.r10.s64 = 419430400;
	// ori r4,r10,565
	ctx.r4.u64 = ctx.r10.u64 | 565;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286C50C;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286c530
	if (ctx.cr6.eq) goto loc_8286C530;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286C51C;
	sub_82BCD500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r25,13188(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// stw r30,-20344(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20344, ctx.r30.u32);
	// stw r5,-29388(r27)
	PPC_STORE_U32(ctx.r27.u32 + -29388, ctx.r5.u32);
	// b 0x8286c544
	goto loc_8286C544;
loc_8286C530:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r30,-20344(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20344, ctx.r30.u32);
	// stw r5,-29388(r27)
	PPC_STORE_U32(ctx.r27.u32 + -29388, ctx.r5.u32);
	// b 0x8286c544
	goto loc_8286C544;
loc_8286C540:
	// lwz r5,-29388(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29388);
loc_8286C544:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828492e0
	ctx.lr = 0x8286C550;
	sub_828492E0(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8286c590
	if (ctx.cr6.eq) goto loc_8286C590;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8286c588
	if (ctx.cr6.eq) goto loc_8286C588;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8286c580
	if (ctx.cr6.eq) goto loc_8286C580;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8286c594
	goto loc_8286C594;
loc_8286C580:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8286c594
	goto loc_8286C594;
loc_8286C588:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8286c594
	goto loc_8286C594;
loc_8286C590:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8286C594:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82816b18
	ctx.lr = 0x8286C5A0;
	sub_82816B18(ctx, base);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// beq cr6,0x8286c5d0
	if (ctx.cr6.eq) goto loc_8286C5D0;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x8286c5c8
	if (ctx.cr6.eq) goto loc_8286C5C8;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x8286c5c0
	if (ctx.cr6.eq) goto loc_8286C5C0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x8286c5d4
	goto loc_8286C5D4;
loc_8286C5C0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286c5d4
	goto loc_8286C5D4;
loc_8286C5C8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286c5d4
	goto loc_8286C5D4;
loc_8286C5D0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8286C5D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c69c
	if (ctx.cr6.eq) goto loc_8286C69C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286c610
	if (ctx.cr6.eq) goto loc_8286C610;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c608
	if (ctx.cr6.eq) goto loc_8286C608;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286c600
	if (ctx.cr6.eq) goto loc_8286C600;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286c614
	goto loc_8286C614;
loc_8286C600:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x8286c614
	goto loc_8286C614;
loc_8286C608:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8286c614
	goto loc_8286C614;
loc_8286C610:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8286C614:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c69c
	if (ctx.cr6.eq) goto loc_8286C69C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286c644
	if (ctx.cr6.eq) goto loc_8286C644;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c63c
	if (ctx.cr6.eq) goto loc_8286C63C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286c648
	if (!ctx.cr6.eq) goto loc_8286C648;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286c648
	goto loc_8286C648;
loc_8286C63C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286c648
	goto loc_8286C648;
loc_8286C644:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8286C648:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r31,132(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// beq cr6,0x8286c688
	if (ctx.cr6.eq) goto loc_8286C688;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x8286c680
	if (ctx.cr6.eq) goto loc_8286C680;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x8286c678
	if (ctx.cr6.eq) goto loc_8286C678;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x8286c68c
	goto loc_8286C68C;
loc_8286C678:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8286c68c
	goto loc_8286C68C;
loc_8286C680:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8286c68c
	goto loc_8286C68C;
loc_8286C688:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8286C68C:
	// bl 0x828040c8
	ctx.lr = 0x8286C690;
	sub_828040C8(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8286c69c
	if (!ctx.cr6.eq) goto loc_8286C69C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8286C69C:
	// stw r28,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r28.u32);
	// stw r18,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r18.u32);
	// stw r19,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r19.u32);
	// stw r16,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r16.u32);
	// stw r17,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r17.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C6B8"))) PPC_WEAK_FUNC(sub_8286C6B8);
PPC_FUNC_IMPL(__imp__sub_8286C6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x8286C6C0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lwz r10,-20360(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20360);
	// lwz r30,13556(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lwz r17,13188(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r18,13192(r22)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// lis r26,-31940
	ctx.r26.s64 = -2093219840;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r16,13180(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13180);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r15,13184(r20)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13184);
	// stw r28,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r28.u32);
	// stw r25,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r25.u32);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286c7b0
	if (ctx.cr6.eq) goto loc_8286C7B0;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// ori r4,r11,10340
	ctx.r4.u64 = ctx.r11.u64 | 10340;
	// lwz r6,12480(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286C744;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286c764
	if (ctx.cr6.eq) goto loc_8286C764;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286C754;
	sub_82BCD500(ctx, base);
	// lwz r25,13188(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// lwz r6,12480(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8286c768
	goto loc_8286C768;
loc_8286C764:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_8286C768:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// stw r5,-29416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29416, ctx.r5.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r11,27293
	ctx.r4.u64 = ctx.r11.u64 | 27293;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286C77C;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286c7a0
	if (ctx.cr6.eq) goto loc_8286C7A0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286C78C;
	sub_82BCD500(ctx, base);
	// lwz r5,-29416(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29416);
	// lwz r25,13188(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// stw r30,-20360(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20360, ctx.r30.u32);
	// stw r3,-29420(r26)
	PPC_STORE_U32(ctx.r26.u32 + -29420, ctx.r3.u32);
	// b 0x8286c7b8
	goto loc_8286C7B8;
loc_8286C7A0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,-20360(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20360, ctx.r30.u32);
	// stw r3,-29420(r26)
	PPC_STORE_U32(ctx.r26.u32 + -29420, ctx.r3.u32);
	// b 0x8286c7b8
	goto loc_8286C7B8;
loc_8286C7B0:
	// lwz r5,-29416(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29416);
	// lwz r3,-29420(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29420);
loc_8286C7B8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8286c7f4
	if (ctx.cr6.eq) goto loc_8286C7F4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8286c7ec
	if (ctx.cr6.eq) goto loc_8286C7EC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8286c7f8
	if (!ctx.cr6.eq) goto loc_8286C7F8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x8286c7f8
	goto loc_8286C7F8;
loc_8286C7EC:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x8286c7f8
	goto loc_8286C7F8;
loc_8286C7F4:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_8286C7F8:
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8286c83c
	if (ctx.cr6.eq) goto loc_8286C83C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8286c83c
	if (ctx.cr6.lt) goto loc_8286C83C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x8286c83c
	if (!ctx.cr6.lt) goto loc_8286C83C;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// addi r9,r11,363
	ctx.r9.s64 = ctx.r11.s64 + 363;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
loc_8286C83C:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,552(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 552);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286c85c
	if (ctx.cr6.eq) goto loc_8286C85C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8286c9e0
	if (!ctx.cr6.eq) goto loc_8286C9E0;
loc_8286C85C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286c88c
	if (ctx.cr6.eq) goto loc_8286C88C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286c884
	if (ctx.cr6.eq) goto loc_8286C884;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286c87c
	if (ctx.cr6.eq) goto loc_8286C87C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286c890
	goto loc_8286C890;
loc_8286C87C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286c890
	goto loc_8286C890;
loc_8286C884:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286c890
	goto loc_8286C890;
loc_8286C88C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286C890:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c990
	if (ctx.cr6.eq) goto loc_8286C990;
	// lwz r9,340(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 340);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286c8cc
	if (ctx.cr6.eq) goto loc_8286C8CC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286c8c4
	if (ctx.cr6.eq) goto loc_8286C8C4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286c8bc
	if (ctx.cr6.eq) goto loc_8286C8BC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286c8d0
	goto loc_8286C8D0;
loc_8286C8BC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286c8d0
	goto loc_8286C8D0;
loc_8286C8C4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286c8d0
	goto loc_8286C8D0;
loc_8286C8CC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286C8D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c990
	if (ctx.cr6.eq) goto loc_8286C990;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286c900
	if (ctx.cr6.eq) goto loc_8286C900;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286c8f8
	if (ctx.cr6.eq) goto loc_8286C8F8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8286c904
	if (!ctx.cr6.eq) goto loc_8286C904;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x8286c904
	goto loc_8286C904;
loc_8286C8F8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8286c904
	goto loc_8286C904;
loc_8286C900:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8286C904:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286c934
	if (ctx.cr6.eq) goto loc_8286C934;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286c92c
	if (ctx.cr6.eq) goto loc_8286C92C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286c924
	if (ctx.cr6.eq) goto loc_8286C924;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286c938
	goto loc_8286C938;
loc_8286C924:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286c938
	goto loc_8286C938;
loc_8286C92C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286c938
	goto loc_8286C938;
loc_8286C934:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286C938:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8286c990
	if (ctx.cr6.eq) goto loc_8286C990;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286c970
	if (ctx.cr6.eq) goto loc_8286C970;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286c968
	if (ctx.cr6.eq) goto loc_8286C968;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286c960
	if (ctx.cr6.eq) goto loc_8286C960;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286c974
	goto loc_8286C974;
loc_8286C960:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286c974
	goto loc_8286C974;
loc_8286C968:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286c974
	goto loc_8286C974;
loc_8286C970:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286C974:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r5,88(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8286c990
	if (ctx.cr6.eq) goto loc_8286C990;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8286C990:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8286c9c0
	if (ctx.cr6.eq) goto loc_8286C9C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8286c9b8
	if (ctx.cr6.eq) goto loc_8286C9B8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286c9b0
	if (ctx.cr6.eq) goto loc_8286C9B0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286c9c4
	goto loc_8286C9C4;
loc_8286C9B0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286c9c4
	goto loc_8286C9C4;
loc_8286C9B8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286c9c4
	goto loc_8286C9C4;
loc_8286C9C0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286C9C4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8286c9e0
	if (!ctx.cr6.gt) goto loc_8286C9E0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8286C9E0:
	// stw r6,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r6.u32);
	// stw r18,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r18.u32);
	// stw r16,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r16.u32);
	// stw r15,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r15.u32);
	// stw r17,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r17.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C9FC"))) PPC_WEAK_FUNC(sub_8286C9FC);
PPC_FUNC_IMPL(__imp__sub_8286C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286CA00"))) PPC_WEAK_FUNC(sub_8286CA00);
PPC_FUNC_IMPL(__imp__sub_8286CA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x8286CA08;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r10,-20372(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20372);
	// lwz r31,13556(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r21,13188(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r22,13192(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r27,-31940
	ctx.r27.s64 = -2093219840;
	// lwz r20,13180(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r19,13184(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r29,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r29.u32);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r6,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r6.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286cacc
	if (ctx.cr6.eq) goto loc_8286CACC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,11109
	ctx.r4.u64 = ctx.r10.u64 | 11109;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286CA98;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286cabc
	if (ctx.cr6.eq) goto loc_8286CABC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286CAA8;
	sub_82BCD500(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,13188(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// stw r31,-20372(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20372, ctx.r31.u32);
	// stw r8,-29432(r27)
	PPC_STORE_U32(ctx.r27.u32 + -29432, ctx.r8.u32);
	// b 0x8286cad0
	goto loc_8286CAD0;
loc_8286CABC:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r31,-20372(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20372, ctx.r31.u32);
	// stw r8,-29432(r27)
	PPC_STORE_U32(ctx.r27.u32 + -29432, ctx.r8.u32);
	// b 0x8286cad0
	goto loc_8286CAD0;
loc_8286CACC:
	// lwz r8,-29432(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29432);
loc_8286CAD0:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8286cbec
	if (!ctx.cr6.eq) goto loc_8286CBEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8280d798
	ctx.lr = 0x8286CAE8;
	sub_8280D798(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8286cbcc
	if (ctx.cr6.eq) goto loc_8286CBCC;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x8286cb34
	if (ctx.cr6.eq) goto loc_8286CB34;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8286cb2c
	if (ctx.cr6.eq) goto loc_8286CB2C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8286cb24
	if (ctx.cr6.eq) goto loc_8286CB24;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286cb38
	goto loc_8286CB38;
loc_8286CB24:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8286cb38
	goto loc_8286CB38;
loc_8286CB2C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286cb38
	goto loc_8286CB38;
loc_8286CB34:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8286CB38:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f0,328(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x8286cbb8
	if (ctx.cr6.gt) goto loc_8286CBB8;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8286cb7c
	if (ctx.cr6.eq) goto loc_8286CB7C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8286cb74
	if (ctx.cr6.eq) goto loc_8286CB74;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x8286cb80
	if (!ctx.cr6.eq) goto loc_8286CB80;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// b 0x8286cb80
	goto loc_8286CB80;
loc_8286CB74:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x8286cb80
	goto loc_8286CB80;
loc_8286CB7C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8286CB80:
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x8286cba8
	if (ctx.cr6.gt) goto loc_8286CBA8;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8286cbd0
	if (!ctx.cr6.eq) goto loc_8286CBD0;
loc_8286CBA8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286cbec
	if (ctx.cr6.eq) goto loc_8286CBEC;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8286cbdc
	goto loc_8286CBDC;
loc_8286CBB8:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286cbec
	if (ctx.cr6.eq) goto loc_8286CBEC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8286cbdc
	goto loc_8286CBDC;
loc_8286CBCC:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
loc_8286CBD0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286cbec
	if (ctx.cr6.eq) goto loc_8286CBEC;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8286CBDC:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
loc_8286CBEC:
	// stw r21,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r21.u32);
	// stw r19,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r19.u32);
	// stw r20,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r20.u32);
	// stw r22,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286CC08"))) PPC_WEAK_FUNC(sub_8286CC08);
PPC_FUNC_IMPL(__imp__sub_8286CC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8286CC10;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,-20396(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20396);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r27,13556(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r23,13180(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// lwz r22,13192(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// lwz r21,13188(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r20,13184(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r11,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r11.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286ccbc
	if (ctx.cr6.eq) goto loc_8286CCBC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-13312
	ctx.r10.s64 = -872415232;
	// ori r4,r10,142
	ctx.r4.u64 = ctx.r10.u64 | 142;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286CC84;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286cc98
	if (ctx.cr6.eq) goto loc_8286CC98;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286CC94;
	sub_82BCD500(ctx, base);
	// b 0x8286cc9c
	goto loc_8286CC9C;
loc_8286CC98:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286CC9C:
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// stw r3,-29460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29460, ctx.r3.u32);
	// bl 0x8212c040
	ctx.lr = 0x8286CCA8;
	sub_8212C040(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r27,-20396(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20396, ctx.r27.u32);
	// addi r11,r11,1564
	ctx.r11.s64 = ctx.r11.s64 + 1564;
	// stw r11,-19160(r25)
	PPC_STORE_U32(ctx.r25.u32 + -19160, ctx.r11.u32);
	// b 0x8286ccc0
	goto loc_8286CCC0;
loc_8286CCBC:
	// lwz r11,-19160(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19160);
loc_8286CCC0:
	// lis r10,20736
	ctx.r10.s64 = 1358954496;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,10829
	ctx.r8.u64 = ctx.r10.u64 | 10829;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8286ccdc
	if (!ctx.cr6.eq) goto loc_8286CCDC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8286CCDC:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r22,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r22.u32);
	// stw r23,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r23.u32);
	// stw r20,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r20.u32);
	// stw r21,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286CCF8"))) PPC_WEAK_FUNC(sub_8286CCF8);
PPC_FUNC_IMPL(__imp__sub_8286CCF8) {
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r9,13180(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286cd88
	if (ctx.cr6.eq) goto loc_8286CD88;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,3584
	ctx.r10.s64 = 234881024;
	// ori r4,r10,35377
	ctx.r4.u64 = ctx.r10.u64 | 35377;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286CD64;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286cd7c
	if (ctx.cr6.eq) goto loc_8286CD7C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286CD74;
	sub_82BCD500(ctx, base);
	// stw r3,-29500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29500, ctx.r3.u32);
	// b 0x8286cd8c
	goto loc_8286CD8C;
loc_8286CD7C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r3,-29500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29500, ctx.r3.u32);
	// b 0x8286cd8c
	goto loc_8286CD8C;
loc_8286CD88:
	// lwz r3,-29500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29500);
loc_8286CD8C:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// bgt 0x8286cda8
	if (ctx.cr0.gt) goto loc_8286CDA8;
	// bl 0x82808190
	ctx.lr = 0x8286CDA0;
	sub_82808190(ctx, base);
	// cmpwi cr6,r3,1000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1000, ctx.xer);
	// bne cr6,0x8286cdac
	if (!ctx.cr6.eq) goto loc_8286CDAC;
loc_8286CDA8:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8286CDAC:
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

__attribute__((alias("__imp__sub_8286CDC4"))) PPC_WEAK_FUNC(sub_8286CDC4);
PPC_FUNC_IMPL(__imp__sub_8286CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286CDC8"))) PPC_WEAK_FUNC(sub_8286CDC8);
PPC_FUNC_IMPL(__imp__sub_8286CDC8) {
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286ce4c
	if (ctx.cr6.eq) goto loc_8286CE4C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,6400
	ctx.r10.s64 = 419430400;
	// ori r4,r10,565
	ctx.r4.u64 = ctx.r10.u64 | 565;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286CE24;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286ce40
	if (ctx.cr6.eq) goto loc_8286CE40;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286CE34;
	sub_82BCD500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,-29564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29564, ctx.r11.u32);
	// b 0x8286ce50
	goto loc_8286CE50;
loc_8286CE40:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r11,-29564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29564, ctx.r11.u32);
	// b 0x8286ce50
	goto loc_8286CE50;
loc_8286CE4C:
	// lwz r11,-29564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29564);
loc_8286CE50:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r4,13188(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// beq cr6,0x8286ce88
	if (ctx.cr6.eq) goto loc_8286CE88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286ce78
	if (ctx.cr6.eq) goto loc_8286CE78;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286ce90
	if (!ctx.cr6.eq) goto loc_8286CE90;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8286ce90
	goto loc_8286CE90;
loc_8286CE78:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286ce90
	goto loc_8286CE90;
loc_8286CE88:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286CE90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82817ce8
	ctx.lr = 0x8286CE98;
	sub_82817CE8(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
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

__attribute__((alias("__imp__sub_8286CEB0"))) PPC_WEAK_FUNC(sub_8286CEB0);
PPC_FUNC_IMPL(__imp__sub_8286CEB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286cf2c
	if (ctx.cr6.eq) goto loc_8286CF2C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,35596
	ctx.r4.u64 = ctx.r10.u64 | 35596;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286CF10;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286cf24
	if (ctx.cr6.eq) goto loc_8286CF24;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286CF20;
	sub_82BCD500(ctx, base);
	// b 0x8286cf28
	goto loc_8286CF28;
loc_8286CF24:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286CF28:
	// stw r3,-29572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29572, ctx.r3.u32);
loc_8286CF2C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286CF48;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286CF50;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286CF60;
	sub_82219130(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r8,-29572(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29572);
	// lwz r3,13188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_8286CFC4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8286d05c
	if (ctx.cr6.eq) goto loc_8286D05C;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8286cffc
	if (ctx.cr6.eq) goto loc_8286CFFC;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8286cff4
	if (ctx.cr6.eq) goto loc_8286CFF4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8286cfec
	if (ctx.cr6.eq) goto loc_8286CFEC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286d000
	goto loc_8286D000;
loc_8286CFEC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286d000
	goto loc_8286D000;
loc_8286CFF4:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8286d000
	goto loc_8286D000;
loc_8286CFFC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8286D000:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8286d0e8
	if (!ctx.cr6.gt) goto loc_8286D0E8;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bge cr6,0x8286d0e8
	if (!ctx.cr6.lt) goto loc_8286D0E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8286d0e8
	if (ctx.cr6.lt) goto loc_8286D0E8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8286d0e8
	if (!ctx.cr6.lt) goto loc_8286D0E8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// b 0x8286d0e8
	goto loc_8286D0E8;
loc_8286D05C:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8286d08c
	if (ctx.cr6.eq) goto loc_8286D08C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8286d084
	if (ctx.cr6.eq) goto loc_8286D084;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8286d07c
	if (ctx.cr6.eq) goto loc_8286D07C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286d090
	goto loc_8286D090;
loc_8286D07C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286d090
	goto loc_8286D090;
loc_8286D084:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8286d090
	goto loc_8286D090;
loc_8286D08C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8286D090:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8286d0e8
	if (!ctx.cr6.gt) goto loc_8286D0E8;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bge cr6,0x8286d0e8
	if (!ctx.cr6.lt) goto loc_8286D0E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8286d0e8
	if (ctx.cr6.lt) goto loc_8286D0E8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8286d0e8
	if (!ctx.cr6.lt) goto loc_8286D0E8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
loc_8286D0E8:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x8286cfc4
	if (ctx.cr6.lt) goto loc_8286CFC4;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8286D11C"))) PPC_WEAK_FUNC(sub_8286D11C);
PPC_FUNC_IMPL(__imp__sub_8286D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286D120"))) PPC_WEAK_FUNC(sub_8286D120);
PPC_FUNC_IMPL(__imp__sub_8286D120) {
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286d19c
	if (ctx.cr6.eq) goto loc_8286D19C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,35596
	ctx.r4.u64 = ctx.r10.u64 | 35596;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286D180;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286d194
	if (ctx.cr6.eq) goto loc_8286D194;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286D190;
	sub_82BCD500(ctx, base);
	// b 0x8286d198
	goto loc_8286D198;
loc_8286D194:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286D198:
	// stw r3,-29576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29576, ctx.r3.u32);
loc_8286D19C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D1B8;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D1C0;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286D1D0;
	sub_82219130(ctx, base);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r10,-29576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29576);
	// addi r5,r9,-29532
	ctx.r5.s64 = ctx.r9.s64 + -29532;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r8,-29532(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r4,13188(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// beq cr6,0x8286d220
	if (ctx.cr6.eq) goto loc_8286D220;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286d218
	if (ctx.cr6.eq) goto loc_8286D218;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286d210
	if (ctx.cr6.eq) goto loc_8286D210;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286d224
	goto loc_8286D224;
loc_8286D210:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8286d224
	goto loc_8286D224;
loc_8286D218:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286d224
	goto loc_8286D224;
loc_8286D220:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286D224:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r7,r7,39980
	ctx.r7.u64 = ctx.r7.u64 | 39980;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// blt cr6,0x8286d250
	if (ctx.cr6.lt) goto loc_8286D250;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x8286d254
	if (ctx.cr6.lt) goto loc_8286D254;
loc_8286D250:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8286D254:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8286d2c4
	if (ctx.cr6.lt) goto loc_8286D2C4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8286d2c4
	if (!ctx.cr6.eq) goto loc_8286D2C4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286d294
	if (ctx.cr6.eq) goto loc_8286D294;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286d28c
	if (ctx.cr6.eq) goto loc_8286D28C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286d284
	if (ctx.cr6.eq) goto loc_8286D284;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286d298
	goto loc_8286D298;
loc_8286D284:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8286d298
	goto loc_8286D298;
loc_8286D28C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286d298
	goto loc_8286D298;
loc_8286D294:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286D298:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8286d2c4
	if (ctx.cr6.lt) goto loc_8286D2C4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x8286d2c4
	if (!ctx.cr6.lt) goto loc_8286D2C4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// ori r8,r10,41840
	ctx.r8.u64 = ctx.r10.u64 | 41840;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8286D2C4:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286D2EC"))) PPC_WEAK_FUNC(sub_8286D2EC);
PPC_FUNC_IMPL(__imp__sub_8286D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286D2F0"))) PPC_WEAK_FUNC(sub_8286D2F0);
PPC_FUNC_IMPL(__imp__sub_8286D2F0) {
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286d36c
	if (ctx.cr6.eq) goto loc_8286D36C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,35596
	ctx.r4.u64 = ctx.r10.u64 | 35596;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286D350;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286d364
	if (ctx.cr6.eq) goto loc_8286D364;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286D360;
	sub_82BCD500(ctx, base);
	// b 0x8286d368
	goto loc_8286D368;
loc_8286D364:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286D368:
	// stw r3,-29584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29584, ctx.r3.u32);
loc_8286D36C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D388;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D390;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286D3A0;
	sub_82219130(ctx, base);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lwz r9,-29584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29584);
	// addi r4,r8,-29532
	ctx.r4.s64 = ctx.r8.s64 + -29532;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r7,-29532(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// lwz r5,13188(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13188);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// beq cr6,0x8286d3f0
	if (ctx.cr6.eq) goto loc_8286D3F0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286d3e8
	if (ctx.cr6.eq) goto loc_8286D3E8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286d3e0
	if (ctx.cr6.eq) goto loc_8286D3E0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8286d3f4
	goto loc_8286D3F4;
loc_8286D3E0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8286d3f4
	goto loc_8286D3F4;
loc_8286D3E8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286d3f4
	goto loc_8286D3F4;
loc_8286D3F0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8286D3F4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r10,23072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23072);
	// blt cr6,0x8286d418
	if (ctx.cr6.lt) goto loc_8286D418;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8286d41c
	if (ctx.cr6.lt) goto loc_8286D41C;
loc_8286D418:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8286D41C:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8286d478
	if (ctx.cr6.lt) goto loc_8286D478;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8286d478
	if (!ctx.cr6.eq) goto loc_8286D478;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286d454
	if (ctx.cr6.eq) goto loc_8286D454;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286d458
	if (ctx.cr6.eq) goto loc_8286D458;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286d44c
	if (ctx.cr6.eq) goto loc_8286D44C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286d458
	goto loc_8286D458;
loc_8286D44C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286d458
	goto loc_8286D458;
loc_8286D454:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8286D458:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8286d478
	if (ctx.cr6.lt) goto loc_8286D478;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bge cr6,0x8286d478
	if (!ctx.cr6.lt) goto loc_8286D478;
	// stw r8,23072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23072, ctx.r8.u32);
loc_8286D478:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286D4A0"))) PPC_WEAK_FUNC(sub_8286D4A0);
PPC_FUNC_IMPL(__imp__sub_8286D4A0) {
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286d51c
	if (ctx.cr6.eq) goto loc_8286D51C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,35596
	ctx.r4.u64 = ctx.r10.u64 | 35596;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286D500;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286d514
	if (ctx.cr6.eq) goto loc_8286D514;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286D510;
	sub_82BCD500(ctx, base);
	// b 0x8286d518
	goto loc_8286D518;
loc_8286D514:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286D518:
	// stw r3,-29588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29588, ctx.r3.u32);
loc_8286D51C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D538;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D540;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286D550;
	sub_82219130(ctx, base);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lwz r9,-29588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29588);
	// addi r4,r8,-29532
	ctx.r4.s64 = ctx.r8.s64 + -29532;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r7,-29532(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// lwz r5,13188(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13188);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// beq cr6,0x8286d5a0
	if (ctx.cr6.eq) goto loc_8286D5A0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286d598
	if (ctx.cr6.eq) goto loc_8286D598;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286d590
	if (ctx.cr6.eq) goto loc_8286D590;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8286d5a4
	goto loc_8286D5A4;
loc_8286D590:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8286d5a4
	goto loc_8286D5A4;
loc_8286D598:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286d5a4
	goto loc_8286D5A4;
loc_8286D5A0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8286D5A4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r10,23068(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23068);
	// blt cr6,0x8286d5c8
	if (ctx.cr6.lt) goto loc_8286D5C8;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x8286d5cc
	if (ctx.cr6.lt) goto loc_8286D5CC;
loc_8286D5C8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8286D5CC:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8286d628
	if (ctx.cr6.lt) goto loc_8286D628;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8286d628
	if (!ctx.cr6.eq) goto loc_8286D628;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286d604
	if (ctx.cr6.eq) goto loc_8286D604;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286d608
	if (ctx.cr6.eq) goto loc_8286D608;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286d5fc
	if (ctx.cr6.eq) goto loc_8286D5FC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286d608
	goto loc_8286D608;
loc_8286D5FC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286d608
	goto loc_8286D608;
loc_8286D604:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8286D608:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8286d628
	if (ctx.cr6.lt) goto loc_8286D628;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bge cr6,0x8286d628
	if (!ctx.cr6.lt) goto loc_8286D628;
	// stw r8,23068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23068, ctx.r8.u32);
loc_8286D628:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286D650"))) PPC_WEAK_FUNC(sub_8286D650);
PPC_FUNC_IMPL(__imp__sub_8286D650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8286D658;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286d6c4
	if (ctx.cr6.eq) goto loc_8286D6C4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,6400
	ctx.r10.s64 = 419430400;
	// ori r4,r10,565
	ctx.r4.u64 = ctx.r10.u64 | 565;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286D6A8;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286d6bc
	if (ctx.cr6.eq) goto loc_8286D6BC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286D6B8;
	sub_82BCD500(ctx, base);
	// b 0x8286d6c0
	goto loc_8286D6C0;
loc_8286D6BC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286D6C0:
	// stw r3,-29612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29612, ctx.r3.u32);
loc_8286D6C4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D6E0;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D6E8;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286D6F8;
	sub_82219130(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r31,-29612(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29612);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lwz r29,13188(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
loc_8286D768:
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286d7bc
	if (ctx.cr6.eq) goto loc_8286D7BC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8286d7a4
	if (ctx.cr6.eq) goto loc_8286D7A4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8286d79c
	if (ctx.cr6.eq) goto loc_8286D79C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8286d794
	if (ctx.cr6.eq) goto loc_8286D794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8286d7a8
	goto loc_8286D7A8;
loc_8286D794:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8286d7a8
	goto loc_8286D7A8;
loc_8286D79C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8286d7a8
	goto loc_8286D7A8;
loc_8286D7A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8286D7A8:
	// bl 0x828504a0
	ctx.lr = 0x8286D7AC;
	sub_828504A0(ctx, base);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// blt cr6,0x8286d768
	if (ctx.cr6.lt) goto loc_8286D768;
loc_8286D7BC:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D7D4"))) PPC_WEAK_FUNC(sub_8286D7D4);
PPC_FUNC_IMPL(__imp__sub_8286D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286D7D8"))) PPC_WEAK_FUNC(sub_8286D7D8);
PPC_FUNC_IMPL(__imp__sub_8286D7D8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D804;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D80C;
	sub_82B73C78(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286D830"))) PPC_WEAK_FUNC(sub_8286D830);
PPC_FUNC_IMPL(__imp__sub_8286D830) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D85C;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D864;
	sub_82B73C78(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286D888"))) PPC_WEAK_FUNC(sub_8286D888);
PPC_FUNC_IMPL(__imp__sub_8286D888) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D8B4;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D8BC;
	sub_82B73C78(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286D8E0"))) PPC_WEAK_FUNC(sub_8286D8E0);
PPC_FUNC_IMPL(__imp__sub_8286D8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8286D8E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r30,-31940
	ctx.r30.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286d988
	if (ctx.cr6.eq) goto loc_8286D988;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// ori r4,r11,10340
	ctx.r4.u64 = ctx.r11.u64 | 10340;
	// lwz r6,12480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286D938;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286d954
	if (ctx.cr6.eq) goto loc_8286D954;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286D948;
	sub_82BCD500(ctx, base);
	// lwz r6,12480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286d958
	goto loc_8286D958;
loc_8286D954:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8286D958:
	// lis r9,-31940
	ctx.r9.s64 = -2093219840;
	// lis r10,6400
	ctx.r10.s64 = 419430400;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r10,565
	ctx.r4.u64 = ctx.r10.u64 | 565;
	// stw r11,-29708(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29708, ctx.r11.u32);
	// bl 0x82bcd3b8
	ctx.lr = 0x8286D970;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286d984
	if (ctx.cr6.eq) goto loc_8286D984;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286D980;
	sub_82BCD500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8286D984:
	// stw r4,-29704(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29704, ctx.r4.u32);
loc_8286D988:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286D9A4;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286D9AC;
	sub_82B73C78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286D9BC;
	sub_82219130(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lwz r31,-29704(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29704);
	// lwz r30,13188(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
loc_8286DA38:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8286dbdc
	if (ctx.cr6.eq) goto loc_8286DBDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r5,r28,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// li r4,1376
	ctx.r4.s64 = 1376;
loc_8286DA50:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8286da80
	if (ctx.cr6.eq) goto loc_8286DA80;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8286da78
	if (ctx.cr6.eq) goto loc_8286DA78;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8286da70
	if (ctx.cr6.eq) goto loc_8286DA70;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8286da84
	goto loc_8286DA84;
loc_8286DA70:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286da84
	goto loc_8286DA84;
loc_8286DA78:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286da84
	goto loc_8286DA84;
loc_8286DA80:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8286DA84:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8286daa0
	if (ctx.cr6.lt) goto loc_8286DAA0;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// blt cr6,0x8286daa8
	if (ctx.cr6.lt) goto loc_8286DAA8;
loc_8286DAA0:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8286daac
	goto loc_8286DAAC;
loc_8286DAA8:
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
loc_8286DAAC:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8286dadc
	if (ctx.cr6.eq) goto loc_8286DADC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8286dad4
	if (ctx.cr6.eq) goto loc_8286DAD4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8286dacc
	if (ctx.cr6.eq) goto loc_8286DACC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8286dae0
	goto loc_8286DAE0;
loc_8286DACC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8286dae0
	goto loc_8286DAE0;
loc_8286DAD4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286dae0
	goto loc_8286DAE0;
loc_8286DADC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8286DAE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8286db24
	if (ctx.cr6.lt) goto loc_8286DB24;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x8286db24
	if (!ctx.cr6.lt) goto loc_8286DB24;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r10,r9,6
	ctx.r10.s64 = ctx.r9.s64 + 6;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286db3c
	if (ctx.cr6.eq) goto loc_8286DB3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286db34
	if (ctx.cr6.eq) goto loc_8286DB34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286db2c
	if (ctx.cr6.eq) goto loc_8286DB2C;
loc_8286DB24:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286db40
	goto loc_8286DB40;
loc_8286DB2C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8286db40
	goto loc_8286DB40;
loc_8286DB34:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8286db40
	goto loc_8286DB40;
loc_8286DB3C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8286DB40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286dbbc
	if (ctx.cr6.eq) goto loc_8286DBBC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286db70
	if (ctx.cr6.eq) goto loc_8286DB70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286db68
	if (ctx.cr6.eq) goto loc_8286DB68;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286db74
	if (!ctx.cr6.eq) goto loc_8286DB74;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286db74
	goto loc_8286DB74;
loc_8286DB68:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286db74
	goto loc_8286DB74;
loc_8286DB70:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8286DB74:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// and r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 & ctx.r9.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8286dbbc
	if (ctx.cr6.eq) goto loc_8286DBBC;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// andc r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// beq cr6,0x8286dbb0
	if (ctx.cr6.eq) goto loc_8286DBB0;
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_8286DBB0:
	// stw r9,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r9.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_8286DBBC:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r4,1416
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1416, ctx.xer);
	// blt cr6,0x8286da50
	if (ctx.cr6.lt) goto loc_8286DA50;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r26,10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 10, ctx.xer);
	// blt cr6,0x8286da38
	if (ctx.cr6.lt) goto loc_8286DA38;
loc_8286DBDC:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286DBF4"))) PPC_WEAK_FUNC(sub_8286DBF4);
PPC_FUNC_IMPL(__imp__sub_8286DBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286DBF8"))) PPC_WEAK_FUNC(sub_8286DBF8);
PPC_FUNC_IMPL(__imp__sub_8286DBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286DC00;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r22,13192(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r21,13188(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// addi r25,r10,-15760
	ctx.r25.s64 = ctx.r10.s64 + -15760;
	// lwz r20,13180(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r19,13184(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// addi r3,r25,28
	ctx.r3.s64 = ctx.r25.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r30.u32);
	// lwz r24,12480(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8286DC60;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r24,4132
	ctx.r4.s64 = ctx.r24.s64 + 4132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8286DC6C;
	sub_82BC5990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r25,28
	ctx.r3.s64 = ctx.r25.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8286DC78;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8286DC8C;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286dca8
	if (ctx.cr6.eq) goto loc_8286DCA8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x8286dcb0
	if (ctx.cr6.eq) goto loc_8286DCB0;
loc_8286DCA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286ddb4
	goto loc_8286DDB4;
loc_8286DCB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8286DCB8;
	sub_82BFEA70(ctx, base);
	// stw r3,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfea70
	ctx.lr = 0x8286DCC4;
	sub_82BFEA70(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82bfea70
	ctx.lr = 0x8286DCD0;
	sub_82BFEA70(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82bfea70
	ctx.lr = 0x8286DCDC;
	sub_82BFEA70(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82bfea70
	ctx.lr = 0x8286DCE8;
	sub_82BFEA70(ctx, base);
	// stw r3,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r3.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82bfea70
	ctx.lr = 0x8286DCF4;
	sub_82BFEA70(ctx, base);
	// stw r3,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r3.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD00;
	sub_82BFEA70(ctx, base);
	// stw r3,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r3.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD0C;
	sub_82BFEA70(ctx, base);
	// stw r3,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r3.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD18;
	sub_82BFEA70(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD24;
	sub_82BFEA70(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD30;
	sub_82BFEA70(ctx, base);
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD3C;
	sub_82BFEA70(ctx, base);
	// stw r3,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD48;
	sub_82BFEA70(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD54;
	sub_82BFEA70(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8286dd6c
	if (ctx.cr6.eq) goto loc_8286DD6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eee58
	ctx.lr = 0x8286DD64;
	sub_827EEE58(ctx, base);
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// b 0x8286dd74
	goto loc_8286DD74;
loc_8286DD6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_8286DD74:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD7C;
	sub_82BFEA70(ctx, base);
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82bfeeb0
	ctx.lr = 0x8286DD88;
	sub_82BFEEB0(ctx, base);
	// stfs f1,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82bfea70
	ctx.lr = 0x8286DD94;
	sub_82BFEA70(ctx, base);
	// stw r3,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r3.u32);
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82bfea70
	ctx.lr = 0x8286DDA0;
	sub_82BFEA70(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82bfea70
	ctx.lr = 0x8286DDAC;
	sub_82BFEA70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
loc_8286DDB4:
	// stw r21,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r21.u32);
	// stw r19,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r19.u32);
	// stw r20,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r20.u32);
	// stw r22,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r22.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286DDD0"))) PPC_WEAK_FUNC(sub_8286DDD0);
PPC_FUNC_IMPL(__imp__sub_8286DDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x8286DDD8;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13556(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13556);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r10,-20492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20492);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// lwz r21,13192(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// lwz r20,13188(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r19,13180(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r18,13184(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286de88
	if (ctx.cr6.eq) goto loc_8286DE88;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-29439
	ctx.r10.s64 = -1929314304;
	// ori r4,r10,4531
	ctx.r4.u64 = ctx.r10.u64 | 4531;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286DE54;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286de74
	if (ctx.cr6.eq) goto loc_8286DE74;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286DE64;
	sub_82BCD500(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r31,-20492(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20492, ctx.r31.u32);
	// stw r23,-29756(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29756, ctx.r23.u32);
	// b 0x8286de8c
	goto loc_8286DE8C;
loc_8286DE74:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20492(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20492, ctx.r31.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r23,-29756(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29756, ctx.r23.u32);
	// b 0x8286de8c
	goto loc_8286DE8C;
loc_8286DE88:
	// lwz r23,-29756(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29756);
loc_8286DE8C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r24,584
	ctx.r31.s64 = ctx.r24.s64 + 584;
	// li r29,12
	ctx.r29.s64 = 12;
loc_8286DE98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286deac
	if (ctx.cr6.eq) goto loc_8286DEAC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8286deb0
	if (!ctx.cr6.eq) goto loc_8286DEB0;
loc_8286DEAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8286DEB0:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8286dee4
	if (!ctx.cr6.eq) goto loc_8286DEE4;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x827fec40
	ctx.lr = 0x8286DEC0;
	sub_827FEC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286DED0;
	sub_82219130(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x8286dee4
	if (!ctx.cr6.eq) goto loc_8286DEE4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8286DEE4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,124
	ctx.r31.s64 = ctx.r31.s64 + 124;
	// bne 0x8286de98
	if (!ctx.cr0.eq) goto loc_8286DE98;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// stw r21,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r21.u32);
	// stw r19,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r19.u32);
	// stw r18,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r18.u32);
	// stw r20,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r20.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286DF0C"))) PPC_WEAK_FUNC(sub_8286DF0C);
PPC_FUNC_IMPL(__imp__sub_8286DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286DF10"))) PPC_WEAK_FUNC(sub_8286DF10);
PPC_FUNC_IMPL(__imp__sub_8286DF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286DF18;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13556(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,-20496(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20496);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r21,13188(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// lwz r22,13192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13192);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r20,13180(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r19,13184(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r3.u32);
	// stw r5,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r5.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286dfc4
	if (ctx.cr6.eq) goto loc_8286DFC4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,9072
	ctx.r4.u64 = ctx.r10.u64 | 9072;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286DF94;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286dfb4
	if (ctx.cr6.eq) goto loc_8286DFB4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286DFA4;
	sub_82BCD500(ctx, base);
	// lwz r5,13188(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// stw r31,-20496(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20496, ctx.r31.u32);
	// stw r3,-29760(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29760, ctx.r3.u32);
	// b 0x8286dfc8
	goto loc_8286DFC8;
loc_8286DFB4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20496(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20496, ctx.r31.u32);
	// stw r3,-29760(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29760, ctx.r3.u32);
	// b 0x8286dfc8
	goto loc_8286DFC8;
loc_8286DFC4:
	// lwz r3,-29760(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29760);
loc_8286DFC8:
	// addi r11,r28,2176
	ctx.r11.s64 = ctx.r28.s64 + 2176;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8286DFD4:
	// lwz r8,-64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bge cr6,0x8286dfe4
	if (!ctx.cr6.lt) goto loc_8286DFE4;
	// stw r9,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r9.u32);
loc_8286DFE4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bge cr6,0x8286dff4
	if (!ctx.cr6.lt) goto loc_8286DFF4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8286DFF4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8286dfd4
	if (!ctx.cr0.eq) goto loc_8286DFD4;
	// lwz r11,2112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2112);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8286e014
	if (!ctx.cr6.eq) goto loc_8286E014;
	// stw r4,2112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2112, ctx.r4.u32);
loc_8286E014:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8286e024
	if (!ctx.cr6.lt) goto loc_8286E024;
	// stw r4,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r4.u32);
loc_8286E024:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r6,r28,2308
	ctx.r6.s64 = ctx.r28.s64 + 2308;
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// li r31,7
	ctx.r31.s64 = 7;
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_8286E03C:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286e070
	if (ctx.cr6.eq) goto loc_8286E070;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286e068
	if (ctx.cr6.eq) goto loc_8286E068;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286e060
	if (ctx.cr6.eq) goto loc_8286E060;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286e074
	goto loc_8286E074;
loc_8286E060:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286e074
	goto loc_8286E074;
loc_8286E068:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286e074
	goto loc_8286E074;
loc_8286E070:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286E074:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286e138
	if (ctx.cr6.eq) goto loc_8286E138;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286e0ac
	if (ctx.cr6.eq) goto loc_8286E0AC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286e0a4
	if (ctx.cr6.eq) goto loc_8286E0A4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286e09c
	if (ctx.cr6.eq) goto loc_8286E09C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286e0b0
	goto loc_8286E0B0;
loc_8286E09C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286e0b0
	goto loc_8286E0B0;
loc_8286E0A4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286e0b0
	goto loc_8286E0B0;
loc_8286E0AC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286E0B0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286e12c
	if (ctx.cr6.eq) goto loc_8286E12C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286e12c
	if (ctx.cr6.eq) goto loc_8286E12C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8286e12c
	if (!ctx.cr6.eq) goto loc_8286E12C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286e0fc
	if (ctx.cr6.eq) goto loc_8286E0FC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286e0f4
	if (ctx.cr6.eq) goto loc_8286E0F4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8286e100
	if (!ctx.cr6.eq) goto loc_8286E100;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8286e100
	goto loc_8286E100;
loc_8286E0F4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8286e100
	goto loc_8286E100;
loc_8286E0FC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8286E100:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8286e120
	if (ctx.cr6.eq) goto loc_8286E120;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8286e118
	if (ctx.cr6.eq) goto loc_8286E118;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286e124
	goto loc_8286E124;
loc_8286E118:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286e124
	goto loc_8286E124;
loc_8286E120:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286E124:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8286e138
	if (!ctx.cr6.eq) goto loc_8286E138;
loc_8286E12C:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_8286E138:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x8286e03c
	if (!ctx.cr0.eq) goto loc_8286E03C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r22,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r22.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r20,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286E164"))) PPC_WEAK_FUNC(sub_8286E164);
PPC_FUNC_IMPL(__imp__sub_8286E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286E168"))) PPC_WEAK_FUNC(sub_8286E168);
PPC_FUNC_IMPL(__imp__sub_8286E168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8286E170;
	__savegprlr_23(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8286E194:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8286e194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8286E194;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r23,452(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 452);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r8,448
	ctx.r25.s64 = ctx.r8.s64 + 448;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r29,13404(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13404);
	// addi r27,r11,-12952
	ctx.r27.s64 = ctx.r11.s64 + -12952;
loc_8286E1BC:
	// li r28,0
	ctx.r28.s64 = 0;
	// mullw r26,r23,r24
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r24.s32);
loc_8286E1C4:
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8286e2bc
	if (ctx.cr6.eq) goto loc_8286E2BC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8286E1E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827cbad0
	ctx.lr = 0x8286E1F0;
	sub_827CBAD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286e290
	if (ctx.cr6.eq) goto loc_8286E290;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8286e290
	if (!ctx.cr6.eq) goto loc_8286E290;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286e290
	if (ctx.cr6.eq) goto loc_8286E290;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8286E218:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8286e23c
	if (ctx.cr6.eq) goto loc_8286E23C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8286e218
	if (ctx.cr6.eq) goto loc_8286E218;
loc_8286E23C:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8286e290
	if (ctx.cr6.eq) goto loc_8286E290;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8286E254:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8286e274
	if (ctx.cr6.eq) goto loc_8286E274;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// blt cr6,0x8286e254
	if (ctx.cr6.lt) goto loc_8286E254;
	// b 0x8286e27c
	goto loc_8286E27C;
loc_8286E274:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8286e290
	if (!ctx.cr6.eq) goto loc_8286E290;
loc_8286E27C:
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// bge cr6,0x8286e290
	if (!ctx.cr6.lt) goto loc_8286E290;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8286E290:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827cbd20
	ctx.lr = 0x8286E298;
	sub_827CBD20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286e2ac
	if (ctx.cr6.eq) goto loc_8286E2AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// b 0x8286e2b0
	goto loc_8286E2B0;
loc_8286E2AC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8286E2B0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8286e1e8
	if (!ctx.cr6.eq) goto loc_8286E1E8;
loc_8286E2BC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// blt cr6,0x8286e1c4
	if (ctx.cr6.lt) goto loc_8286E1C4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 8, ctx.xer);
	// blt cr6,0x8286e1bc
	if (ctx.cr6.lt) goto loc_8286E1BC;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286E2DC"))) PPC_WEAK_FUNC(sub_8286E2DC);
PPC_FUNC_IMPL(__imp__sub_8286E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286E2E0"))) PPC_WEAK_FUNC(sub_8286E2E0);
PPC_FUNC_IMPL(__imp__sub_8286E2E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x8286E2E8;
	__savegprlr_14(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,21780
	ctx.r9.s64 = 21780;
	// li r8,21701
	ctx.r8.s64 = 21701;
	// li r7,21760
	ctx.r7.s64 = 21760;
	// li r6,21770
	ctx.r6.s64 = 21770;
	// li r5,21783
	ctx.r5.s64 = 21783;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,21814
	ctx.r3.s64 = 21814;
	// li r31,21827
	ctx.r31.s64 = 21827;
	// li r30,21840
	ctx.r30.s64 = 21840;
	// li r29,22109
	ctx.r29.s64 = 22109;
	// li r28,21704
	ctx.r28.s64 = 21704;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r4,21763
	ctx.r4.s64 = 21763;
	// li r27,21773
	ctx.r27.s64 = 21773;
	// addi r10,r11,448
	ctx.r10.s64 = ctx.r11.s64 + 448;
	// li r26,21784
	ctx.r26.s64 = 21784;
	// li r25,21815
	ctx.r25.s64 = 21815;
	// stw r9,456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 456, ctx.r9.u32);
	// li r24,21828
	ctx.r24.s64 = 21828;
	// stw r9,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r9.u32);
	// li r23,21841
	ctx.r23.s64 = 21841;
	// stw r9,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r9.u32);
	// li r22,22110
	ctx.r22.s64 = 22110;
	// stw r9,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r9.u32);
	// li r21,21705
	ctx.r21.s64 = 21705;
	// stw r9,472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 472, ctx.r9.u32);
	// li r20,21764
	ctx.r20.s64 = 21764;
	// stw r8,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r8.u32);
	// li r8,21774
	ctx.r8.s64 = 21774;
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// li r7,21781
	ctx.r7.s64 = 21781;
	// stw r6,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
	// li r6,21812
	ctx.r6.s64 = 21812;
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r3,r9,6
	ctx.r3.s64 = ctx.r9.s64 + 6;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r5,r9,7
	ctx.r5.s64 = ctx.r9.s64 + 7;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r4,r9,9
	ctx.r4.s64 = ctx.r9.s64 + 9;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r26,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r4,452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r24,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r24.u32);
	// lwz r4,452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r9,22111
	ctx.r9.s64 = 22111;
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r23.u32);
	// li r5,21825
	ctx.r5.s64 = 21825;
	// stw r9,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r9.u32);
	// li r4,21838
	ctx.r4.s64 = 21838;
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,22107
	ctx.r3.s64 = 22107;
	// li r31,21702
	ctx.r31.s64 = 21702;
	// li r30,21761
	ctx.r30.s64 = 21761;
	// li r29,21771
	ctx.r29.s64 = 21771;
	// stwx r22,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r22.u32);
	// li r28,21782
	ctx.r28.s64 = 21782;
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r27,21813
	ctx.r27.s64 = 21813;
	// li r26,21826
	ctx.r26.s64 = 21826;
	// li r25,21839
	ctx.r25.s64 = 21839;
	// li r24,22108
	ctx.r24.s64 = 22108;
	// stw r21,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r21.u32);
	// li r23,21703
	ctx.r23.s64 = 21703;
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r19,21762
	ctx.r19.s64 = 21762;
	// li r18,21772
	ctx.r18.s64 = 21772;
	// li r17,21786
	ctx.r17.s64 = 21786;
	// li r16,21816
	ctx.r16.s64 = 21816;
	// stwx r20,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u32);
	// li r15,21829
	ctx.r15.s64 = 21829;
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r14,21842
	ctx.r14.s64 = 21842;
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r5.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r4.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r30.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,21706
	ctx.r7.s64 = 21706;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r5,21765
	ctx.r5.s64 = 21765;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,21775
	ctx.r31.s64 = 21775;
	// li r30,21807
	ctx.r30.s64 = 21807;
	// li r22,21817
	ctx.r22.s64 = 21817;
	// li r21,21830
	ctx.r21.s64 = 21830;
	// stwx r29,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r29.u32);
	// li r4,21843
	ctx.r4.s64 = 21843;
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,21831
	ctx.r3.s64 = 21831;
	// li r29,22112
	ctx.r29.s64 = 22112;
	// li r20,21707
	ctx.r20.s64 = 21707;
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r27,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r27.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r26,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r6,452(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r25,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r25.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r24.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r23,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r23.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r19,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r19.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r18,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r18.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r17,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r17.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r16,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r16.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r15,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r15.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r14,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r14.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r28,21766
	ctx.r28.s64 = 21766;
	// li r27,21776
	ctx.r27.s64 = 21776;
	// li r26,21808
	ctx.r26.s64 = 21808;
	// li r25,21818
	ctx.r25.s64 = 21818;
	// stw r7,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// li r24,22113
	ctx.r24.s64 = 22113;
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r23,21708
	ctx.r23.s64 = 21708;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r19,21767
	ctx.r19.s64 = 21767;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r18,21777
	ctx.r18.s64 = 21777;
	// addi r9,r11,740
	ctx.r9.s64 = ctx.r11.s64 + 740;
	// stw r5,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r31,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r31.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r22,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r22.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r21,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r21.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r4,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r4.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r29,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r20,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r20.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r28,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r28.u32);
	// lwz r8,452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r27,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r27.u32);
	// lwz r4,452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mulli r8,r4,28
	ctx.r8.s64 = ctx.r4.s64 * 28;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r26,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r26.u32);
	// lwz r4,452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mulli r8,r4,28
	ctx.r8.s64 = ctx.r4.s64 * 28;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r25,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r25.u32);
	// addi r8,r11,208
	ctx.r8.s64 = ctx.r11.s64 + 208;
	// lwz r4,452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r31,6
	ctx.r31.s64 = 6;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// lwz r4,452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r3,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r3.u32);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mulli r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 * 28;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r24,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r24.u32);
	// lwz r4,452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// mulli r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 * 28;
	// stwx r23,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mulli r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 * 28;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r19,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r19.u32);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mulli r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 * 28;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r18,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r18.u32);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lwz r4,748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lwz r10,748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r4,748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r3,748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lwz r3,748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r3,748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// li r29,7
	ctx.r29.s64 = 7;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r4,748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r3,744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r4,748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r3,744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lwz r3,748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r28,748(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// lwz r28,748(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r5,744(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r6,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// lwz r5,748(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r4,748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r5,744(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// lwz r5,748(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r31,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r31.u32);
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r4,748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// lwz r4,748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// mullw r5,r4,r10
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// lwz r5,748(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// mulli r10,r4,108
	ctx.r10.s64 = ctx.r4.s64 * 108;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mulli r10,r5,108
	ctx.r10.s64 = ctx.r5.s64 * 108;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lwz r6,744(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// lwz r10,748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mulli r10,r5,108
	ctx.r10.s64 = ctx.r5.s64 * 108;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// lwz r3,748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// mullw r6,r3,r10
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mulli r10,r6,108
	ctx.r10.s64 = ctx.r6.s64 * 108;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// lwz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286EB58"))) PPC_WEAK_FUNC(sub_8286EB58);
PPC_FUNC_IMPL(__imp__sub_8286EB58) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x8286ebac
	if (ctx.cr6.eq) goto loc_8286EBAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286eb9c
	if (ctx.cr6.eq) goto loc_8286EB9C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286ebb4
	if (!ctx.cr6.eq) goto loc_8286EBB4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286ebb4
	goto loc_8286EBB4;
loc_8286EB9C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286ebb4
	goto loc_8286EBB4;
loc_8286EBAC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286EBB4:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82868970
	ctx.lr = 0x8286EBC4;
	sub_82868970(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8286ebd8
	if (!ctx.cr6.eq) goto loc_8286EBD8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ebdc
	goto loc_8286EBDC;
loc_8286EBD8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8286EBDC:
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

__attribute__((alias("__imp__sub_8286EBF4"))) PPC_WEAK_FUNC(sub_8286EBF4);
PPC_FUNC_IMPL(__imp__sub_8286EBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286EBF8"))) PPC_WEAK_FUNC(sub_8286EBF8);
PPC_FUNC_IMPL(__imp__sub_8286EBF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,204(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8286ec54
	if (ctx.cr6.eq) goto loc_8286EC54;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8286ec3c
	if (ctx.cr6.lt) goto loc_8286EC3C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x8286ec3c
	if (!ctx.cr6.lt) goto loc_8286EC3C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r11,363
	ctx.r9.s64 = ctx.r11.s64 + 363;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
loc_8286EC3C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286eca4
	if (ctx.cr6.eq) goto loc_8286ECA4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286ec84
	if (ctx.cr6.eq) goto loc_8286EC84;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286ec6c
	if (ctx.cr6.eq) goto loc_8286EC6C;
loc_8286EC54:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
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
loc_8286EC6C:
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
loc_8286EC84:
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
loc_8286ECA4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
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

__attribute__((alias("__imp__sub_8286ECC0"))) PPC_WEAK_FUNC(sub_8286ECC0);
PPC_FUNC_IMPL(__imp__sub_8286ECC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r7,r9,-29532
	ctx.r7.s64 = ctx.r9.s64 + -29532;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,204(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8286ed3c
	if (ctx.cr6.eq) goto loc_8286ED3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8286ed24
	if (ctx.cr6.lt) goto loc_8286ED24;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x8286ed24
	if (!ctx.cr6.lt) goto loc_8286ED24;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r7,r11,363
	ctx.r7.s64 = ctx.r11.s64 + 363;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
loc_8286ED24:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286ed54
	if (ctx.cr6.eq) goto loc_8286ED54;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286ed4c
	if (ctx.cr6.eq) goto loc_8286ED4C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286ed44
	if (ctx.cr6.eq) goto loc_8286ED44;
loc_8286ED3C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286ed58
	goto loc_8286ED58;
loc_8286ED44:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286ed58
	goto loc_8286ED58;
loc_8286ED4C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286ed58
	goto loc_8286ED58;
loc_8286ED54:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286ED58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286ee10
	if (ctx.cr6.eq) goto loc_8286EE10;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286ed90
	if (ctx.cr6.eq) goto loc_8286ED90;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286ed88
	if (ctx.cr6.eq) goto loc_8286ED88;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286ed80
	if (ctx.cr6.eq) goto loc_8286ED80;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286ed94
	goto loc_8286ED94;
loc_8286ED80:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286ed94
	goto loc_8286ED94;
loc_8286ED88:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286ed94
	goto loc_8286ED94;
loc_8286ED90:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286ED94:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,468(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 468);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// beq cr6,0x8286ede8
	if (ctx.cr6.eq) goto loc_8286EDE8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286ede0
	if (ctx.cr6.eq) goto loc_8286EDE0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286edd8
	if (ctx.cr6.eq) goto loc_8286EDD8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286edec
	goto loc_8286EDEC;
loc_8286EDD8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286edec
	goto loc_8286EDEC;
loc_8286EDE0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286edec
	goto loc_8286EDEC;
loc_8286EDE8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286EDEC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
loc_8286EE10:
	// stfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286EE38"))) PPC_WEAK_FUNC(sub_8286EE38);
PPC_FUNC_IMPL(__imp__sub_8286EE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8286EE40;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13556(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,-20540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20540);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r21,13188(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// lwz r22,13192(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r20,13180(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r19,13184(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r5,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r5.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8286eef4
	if (ctx.cr6.eq) goto loc_8286EEF4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,9072
	ctx.r4.u64 = ctx.r10.u64 | 9072;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286EEBC;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286eee0
	if (ctx.cr6.eq) goto loc_8286EEE0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286EECC;
	sub_82BCD500(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r5,13188(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// stw r31,-20540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20540, ctx.r31.u32);
	// stw r10,-29836(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29836, ctx.r10.u32);
	// b 0x8286eef8
	goto loc_8286EEF8;
loc_8286EEE0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20540, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,-29836(r29)
	PPC_STORE_U32(ctx.r29.u32 + -29836, ctx.r10.u32);
	// b 0x8286eef8
	goto loc_8286EEF8;
loc_8286EEF4:
	// lwz r10,-29836(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29836);
loc_8286EEF8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x8286ef38
	if (ctx.cr6.eq) goto loc_8286EF38;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x8286ef30
	if (ctx.cr6.eq) goto loc_8286EF30;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x8286ef28
	if (ctx.cr6.eq) goto loc_8286EF28;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8286ef3c
	goto loc_8286EF3C;
loc_8286EF28:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286ef3c
	goto loc_8286EF3C;
loc_8286EF30:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286ef3c
	goto loc_8286EF3C;
loc_8286EF38:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286EF3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f000
	if (ctx.cr6.eq) goto loc_8286F000;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x8286ef74
	if (ctx.cr6.eq) goto loc_8286EF74;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x8286ef6c
	if (ctx.cr6.eq) goto loc_8286EF6C;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x8286ef64
	if (ctx.cr6.eq) goto loc_8286EF64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8286ef78
	goto loc_8286EF78;
loc_8286EF64:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8286ef78
	goto loc_8286EF78;
loc_8286EF6C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286ef78
	goto loc_8286EF78;
loc_8286EF74:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286EF78:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f000
	if (ctx.cr6.eq) goto loc_8286F000;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f000
	if (ctx.cr6.eq) goto loc_8286F000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8286f000
	if (!ctx.cr6.eq) goto loc_8286F000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r23,16
	ctx.r11.s64 = ctx.r23.s64 + 16;
loc_8286EFA4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8286efc4
	if (ctx.cr6.eq) goto loc_8286EFC4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8286efa4
	if (ctx.cr6.lt) goto loc_8286EFA4;
	// b 0x8286f000
	goto loc_8286F000;
loc_8286EFC4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x8286efec
	if (ctx.cr6.eq) goto loc_8286EFEC;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x8286eff0
	if (ctx.cr6.eq) goto loc_8286EFF0;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x8286efe4
	if (ctx.cr6.eq) goto loc_8286EFE4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x8286eff0
	goto loc_8286EFF0;
loc_8286EFE4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8286eff0
	goto loc_8286EFF0;
loc_8286EFEC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8286EFF0:
	// bl 0x828040c8
	ctx.lr = 0x8286EFF4;
	sub_828040C8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r3.u32);
loc_8286F000:
	// stw r22,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r22.u32);
	// stw r20,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286F018"))) PPC_WEAK_FUNC(sub_8286F018);
PPC_FUNC_IMPL(__imp__sub_8286F018) {
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286f094
	if (ctx.cr6.eq) goto loc_8286F094;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// ori r4,r10,3291
	ctx.r4.u64 = ctx.r10.u64 | 3291;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286F078;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286f08c
	if (ctx.cr6.eq) goto loc_8286F08C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286F088;
	sub_82BCD500(ctx, base);
	// b 0x8286f090
	goto loc_8286F090;
loc_8286F08C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286F090:
	// stw r3,-29860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29860, ctx.r3.u32);
loc_8286F094:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286F0B0;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286F0B8;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286F0C8;
	sub_82219130(ctx, base);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r9,-29532
	ctx.r5.s64 = ctx.r9.s64 + -29532;
	// li r6,4
	ctx.r6.s64 = 4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r7,13188(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// beq cr6,0x8286f118
	if (ctx.cr6.eq) goto loc_8286F118;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286f110
	if (ctx.cr6.eq) goto loc_8286F110;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286f108
	if (ctx.cr6.eq) goto loc_8286F108;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286f11c
	goto loc_8286F11C;
loc_8286F108:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286f11c
	goto loc_8286F11C;
loc_8286F110:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286f11c
	goto loc_8286F11C;
loc_8286F118:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286F11C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f1e8
	if (ctx.cr6.eq) goto loc_8286F1E8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286f154
	if (ctx.cr6.eq) goto loc_8286F154;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286f14c
	if (ctx.cr6.eq) goto loc_8286F14C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286f144
	if (ctx.cr6.eq) goto loc_8286F144;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286f158
	goto loc_8286F158;
loc_8286F144:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286f158
	goto loc_8286F158;
loc_8286F14C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286f158
	goto loc_8286F158;
loc_8286F154:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286F158:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f1e8
	if (ctx.cr6.eq) goto loc_8286F1E8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f1e8
	if (ctx.cr6.eq) goto loc_8286F1E8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,-29860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29860);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8286f1e8
	if (!ctx.cr6.eq) goto loc_8286F1E8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286f1b0
	if (ctx.cr6.eq) goto loc_8286F1B0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286f1a8
	if (ctx.cr6.eq) goto loc_8286F1A8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286f1a0
	if (ctx.cr6.eq) goto loc_8286F1A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286f1b4
	goto loc_8286F1B4;
loc_8286F1A0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286f1b4
	goto loc_8286F1B4;
loc_8286F1A8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286f1b4
	goto loc_8286F1B4;
loc_8286F1B0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286F1B4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8286f1dc
	if (ctx.cr6.eq) goto loc_8286F1DC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8286f1e8
	if (ctx.cr6.eq) goto loc_8286F1E8;
	// b 0x8286f1e4
	goto loc_8286F1E4;
loc_8286F1DC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8286f1e8
	if (!ctx.cr6.eq) goto loc_8286F1E8;
loc_8286F1E4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8286F1E8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r6,13232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13232, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8286F20C"))) PPC_WEAK_FUNC(sub_8286F20C);
PPC_FUNC_IMPL(__imp__sub_8286F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286F210"))) PPC_WEAK_FUNC(sub_8286F210);
PPC_FUNC_IMPL(__imp__sub_8286F210) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,13172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r10,13556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13556);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286f294
	if (ctx.cr6.eq) goto loc_8286F294;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,6400
	ctx.r10.s64 = 419430400;
	// ori r4,r10,565
	ctx.r4.u64 = ctx.r10.u64 | 565;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286F278;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286f28c
	if (ctx.cr6.eq) goto loc_8286F28C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286F288;
	sub_82BCD500(ctx, base);
	// b 0x8286f290
	goto loc_8286F290;
loc_8286F28C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286F290:
	// stw r3,-29864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29864, ctx.r3.u32);
loc_8286F294:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286F2B0;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286F2B8;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286F2C8;
	sub_82219130(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r6,4
	ctx.r6.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8286f33c
	if (ctx.cr6.eq) goto loc_8286F33C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8286f3b0
	if (!ctx.cr6.eq) goto loc_8286F3B0;
	// lwz r11,-29864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29864);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286f318
	if (ctx.cr6.eq) goto loc_8286F318;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286f308
	if (ctx.cr6.eq) goto loc_8286F308;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286f320
	if (!ctx.cr6.eq) goto loc_8286F320;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// b 0x8286f320
	goto loc_8286F320;
loc_8286F308:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286f320
	goto loc_8286F320;
loc_8286F318:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286F320:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82850ea0
	ctx.lr = 0x8286F32C;
	sub_82850EA0(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// b 0x8286f3a8
	goto loc_8286F3A8;
loc_8286F33C:
	// lwz r11,-29864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29864);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286f374
	if (ctx.cr6.eq) goto loc_8286F374;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286f364
	if (ctx.cr6.eq) goto loc_8286F364;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286f37c
	if (!ctx.cr6.eq) goto loc_8286F37C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// b 0x8286f37c
	goto loc_8286F37C;
loc_8286F364:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286f37c
	goto loc_8286F37C;
loc_8286F374:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286F37C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	// beq cr6,0x8286f3a4
	if (ctx.cr6.eq) goto loc_8286F3A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8286f3ac
	if (!ctx.cr6.eq) goto loc_8286F3AC;
	// b 0x8286f3b0
	goto loc_8286F3B0;
loc_8286F3A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8286F3A8:
	// bne cr6,0x8286f3b0
	if (!ctx.cr6.eq) goto loc_8286F3B0;
loc_8286F3AC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8286F3B0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r6,13232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13232, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8286F3D4"))) PPC_WEAK_FUNC(sub_8286F3D4);
PPC_FUNC_IMPL(__imp__sub_8286F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286F3D8"))) PPC_WEAK_FUNC(sub_8286F3D8);
PPC_FUNC_IMPL(__imp__sub_8286F3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8286F3E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r30,-31940
	ctx.r30.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286f44c
	if (ctx.cr6.eq) goto loc_8286F44C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,27097
	ctx.r4.u64 = ctx.r10.u64 | 27097;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286F430;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286f444
	if (ctx.cr6.eq) goto loc_8286F444;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286F440;
	sub_82BCD500(ctx, base);
	// b 0x8286f448
	goto loc_8286F448;
loc_8286F444:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286F448:
	// stw r3,-29868(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29868, ctx.r3.u32);
loc_8286F44C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r29,r11,14416
	ctx.r29.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286F46C;
	sub_82219130(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286F474;
	sub_82B73C78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286F484;
	sub_82219130(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8286f498
	if (!ctx.cr6.gt) goto loc_8286F498;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x8286f49c
	if (ctx.cr6.lt) goto loc_8286F49C;
loc_8286F498:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8286F49C:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8286f520
	if (ctx.cr6.lt) goto loc_8286F520;
	// cmpwi cr6,r9,58
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 58, ctx.xer);
	// bge cr6,0x8286f520
	if (!ctx.cr6.lt) goto loc_8286F520;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8286f520
	if (!ctx.cr6.eq) goto loc_8286F520;
	// lwz r11,-29868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29868);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286f4f0
	if (ctx.cr6.eq) goto loc_8286F4F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286f4e0
	if (ctx.cr6.eq) goto loc_8286F4E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286f4f8
	if (!ctx.cr6.eq) goto loc_8286F4F8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// b 0x8286f4f8
	goto loc_8286F4F8;
loc_8286F4E0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8286f4f8
	goto loc_8286F4F8;
loc_8286F4F0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286F4F8:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8286f520
	if (!ctx.cr6.gt) goto loc_8286F520;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x8286f520
	if (!ctx.cr6.lt) goto loc_8286F520;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,218
	ctx.r10.s64 = ctx.r10.s64 + 218;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8286F520:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286F538"))) PPC_WEAK_FUNC(sub_8286F538);
PPC_FUNC_IMPL(__imp__sub_8286F538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286F564;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286F56C;
	sub_82B73C78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286F57C;
	sub_82219130(ctx, base);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r9,-29532
	ctx.r5.s64 = ctx.r9.s64 + -29532;
	// li r6,4
	ctx.r6.s64 = 4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r7,13188(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// beq cr6,0x8286f5cc
	if (ctx.cr6.eq) goto loc_8286F5CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286f5c4
	if (ctx.cr6.eq) goto loc_8286F5C4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286f5bc
	if (ctx.cr6.eq) goto loc_8286F5BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286f5d0
	goto loc_8286F5D0;
loc_8286F5BC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286f5d0
	goto loc_8286F5D0;
loc_8286F5C4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286f5d0
	goto loc_8286F5D0;
loc_8286F5CC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286F5D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f67c
	if (ctx.cr6.eq) goto loc_8286F67C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286f608
	if (ctx.cr6.eq) goto loc_8286F608;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286f600
	if (ctx.cr6.eq) goto loc_8286F600;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286f5f8
	if (ctx.cr6.eq) goto loc_8286F5F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286f60c
	goto loc_8286F60C;
loc_8286F5F8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286f60c
	goto loc_8286F60C;
loc_8286F600:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286f60c
	goto loc_8286F60C;
loc_8286F608:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286F60C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286f67c
	if (ctx.cr6.eq) goto loc_8286F67C;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rlwinm r5,r11,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8286f67c
	if (ctx.cr6.eq) goto loc_8286F67C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286f658
	if (ctx.cr6.eq) goto loc_8286F658;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286f650
	if (ctx.cr6.eq) goto loc_8286F650;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286f648
	if (ctx.cr6.eq) goto loc_8286F648;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8286f65c
	goto loc_8286F65C;
loc_8286F648:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286f65c
	goto loc_8286F65C;
loc_8286F650:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286f65c
	goto loc_8286F65C;
loc_8286F658:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286F65C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8286f67c
	if (!ctx.cr6.eq) goto loc_8286F67C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8286F67C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r6,13232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13232, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286F69C"))) PPC_WEAK_FUNC(sub_8286F69C);
PPC_FUNC_IMPL(__imp__sub_8286F69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286F6A0"))) PPC_WEAK_FUNC(sub_8286F6A0);
PPC_FUNC_IMPL(__imp__sub_8286F6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8286F6A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286f714
	if (ctx.cr6.eq) goto loc_8286F714;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,6400
	ctx.r10.s64 = 419430400;
	// ori r4,r10,565
	ctx.r4.u64 = ctx.r10.u64 | 565;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286F6F8;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286f70c
	if (ctx.cr6.eq) goto loc_8286F70C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286F708;
	sub_82BCD500(ctx, base);
	// b 0x8286f710
	goto loc_8286F710;
loc_8286F70C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286F710:
	// stw r3,-29892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29892, ctx.r3.u32);
loc_8286F714:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286F730;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286F738;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286F748;
	sub_82219130(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,-29892(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29892);
	// lfs f7,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f7.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f8,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
loc_8286F79C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8286f7fc
	if (ctx.cr6.eq) goto loc_8286F7FC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfsx f1,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f7
	ctx.cr6.compare(ctx.f1.f64, ctx.f7.f64);
	// blt cr6,0x8286f7fc
	if (ctx.cr6.lt) goto loc_8286F7FC;
	// fcmpu cr6,f1,f8
	ctx.cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// bgt cr6,0x8286f7fc
	if (ctx.cr6.gt) goto loc_8286F7FC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8286f7f4
	if (ctx.cr6.eq) goto loc_8286F7F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8286f7ec
	if (ctx.cr6.eq) goto loc_8286F7EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8286f7e4
	if (ctx.cr6.eq) goto loc_8286F7E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8286f7f8
	goto loc_8286F7F8;
loc_8286F7E4:
	// lwz r3,13188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// b 0x8286f7f8
	goto loc_8286F7F8;
loc_8286F7EC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8286f7f8
	goto loc_8286F7F8;
loc_8286F7F4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8286F7F8:
	// bl 0x82850190
	ctx.lr = 0x8286F7FC;
	sub_82850190(ctx, base);
loc_8286F7FC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// blt cr6,0x8286f79c
	if (ctx.cr6.lt) goto loc_8286F79C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286F824"))) PPC_WEAK_FUNC(sub_8286F824);
PPC_FUNC_IMPL(__imp__sub_8286F824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286F828"))) PPC_WEAK_FUNC(sub_8286F828);
PPC_FUNC_IMPL(__imp__sub_8286F828) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,13172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r10,13556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13556);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286f8ac
	if (ctx.cr6.eq) goto loc_8286F8AC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,35596
	ctx.r4.u64 = ctx.r10.u64 | 35596;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286F890;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286f8a4
	if (ctx.cr6.eq) goto loc_8286F8A4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286F8A0;
	sub_82BCD500(ctx, base);
	// b 0x8286f8a8
	goto loc_8286F8A8;
loc_8286F8A4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286F8A8:
	// stw r3,-29916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29916, ctx.r3.u32);
loc_8286F8AC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286F8C8;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286F8D0;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286F8E0;
	sub_82219130(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r11,-29916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29916);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,13188(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13188);
	// beq cr6,0x8286f91c
	if (ctx.cr6.eq) goto loc_8286F91C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286f90c
	if (ctx.cr6.eq) goto loc_8286F90C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286f924
	if (!ctx.cr6.eq) goto loc_8286F924;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286f924
	goto loc_8286F924;
loc_8286F90C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286f924
	goto loc_8286F924;
loc_8286F91C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286F924:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82846008
	ctx.lr = 0x8286F93C;
	sub_82846008(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286F964"))) PPC_WEAK_FUNC(sub_8286F964);
PPC_FUNC_IMPL(__imp__sub_8286F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286F968"))) PPC_WEAK_FUNC(sub_8286F968);
PPC_FUNC_IMPL(__imp__sub_8286F968) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286F994;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286F99C;
	sub_82B73C78(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286F9C0"))) PPC_WEAK_FUNC(sub_8286F9C0);
PPC_FUNC_IMPL(__imp__sub_8286F9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8286F9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r30,-31940
	ctx.r30.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286fa34
	if (ctx.cr6.eq) goto loc_8286FA34;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,34966
	ctx.r4.u64 = ctx.r10.u64 | 34966;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286FA18;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286fa2c
	if (ctx.cr6.eq) goto loc_8286FA2C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286FA28;
	sub_82BCD500(ctx, base);
	// b 0x8286fa30
	goto loc_8286FA30;
loc_8286FA2C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286FA30:
	// stw r3,-29960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29960, ctx.r3.u32);
loc_8286FA34:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r29,r11,14416
	ctx.r29.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286FA54;
	sub_82219130(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286FA5C;
	sub_82B73C78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286FA6C;
	sub_82219130(ctx, base);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r8,-29532
	ctx.r6.s64 = ctx.r8.s64 + -29532;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,-29532(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// lwz r7,13188(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// beq cr6,0x8286fab8
	if (ctx.cr6.eq) goto loc_8286FAB8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286fab0
	if (ctx.cr6.eq) goto loc_8286FAB0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286faa8
	if (ctx.cr6.eq) goto loc_8286FAA8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8286fabc
	goto loc_8286FABC;
loc_8286FAA8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8286fabc
	goto loc_8286FABC;
loc_8286FAB0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286fabc
	goto loc_8286FABC;
loc_8286FAB8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8286FABC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286fb20
	if (ctx.cr6.eq) goto loc_8286FB20;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286faf4
	if (ctx.cr6.eq) goto loc_8286FAF4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286faec
	if (ctx.cr6.eq) goto loc_8286FAEC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286fae4
	if (ctx.cr6.eq) goto loc_8286FAE4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8286faf8
	goto loc_8286FAF8;
loc_8286FAE4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8286faf8
	goto loc_8286FAF8;
loc_8286FAEC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286faf8
	goto loc_8286FAF8;
loc_8286FAF4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8286FAF8:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286fb20
	if (ctx.cr6.eq) goto loc_8286FB20;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286fb20
	if (ctx.cr6.eq) goto loc_8286FB20;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,-29960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29960);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8286fb24
	if (ctx.cr6.eq) goto loc_8286FB24;
loc_8286FB20:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8286FB24:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8286fb94
	if (ctx.cr6.lt) goto loc_8286FB94;
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// bge cr6,0x8286fb94
	if (!ctx.cr6.lt) goto loc_8286FB94;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8286fb94
	if (!ctx.cr6.eq) goto loc_8286FB94;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286fb68
	if (ctx.cr6.eq) goto loc_8286FB68;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286fb6c
	if (ctx.cr6.eq) goto loc_8286FB6C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286fb60
	if (ctx.cr6.eq) goto loc_8286FB60;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286fb6c
	goto loc_8286FB6C;
loc_8286FB60:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8286fb6c
	goto loc_8286FB6C;
loc_8286FB68:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286FB6C:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13232, ctx.r11.u32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r10,2224(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2224, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8286FB94:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286FBAC"))) PPC_WEAK_FUNC(sub_8286FBAC);
PPC_FUNC_IMPL(__imp__sub_8286FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8286FBB0"))) PPC_WEAK_FUNC(sub_8286FBB0);
PPC_FUNC_IMPL(__imp__sub_8286FBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286FBDC;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286FBE4;
	sub_82B73C78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286FBF4;
	sub_82219130(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286fc30
	if (ctx.cr6.eq) goto loc_8286FC30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286fc20
	if (ctx.cr6.eq) goto loc_8286FC20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286fc38
	if (!ctx.cr6.eq) goto loc_8286FC38;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// b 0x8286fc38
	goto loc_8286FC38;
loc_8286FC20:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8286fc38
	goto loc_8286FC38;
loc_8286FC30:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286FC38:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8286fc74
	if (!ctx.cr6.eq) goto loc_8286FC74;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8286FC74:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r10,13232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13232, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286FC90"))) PPC_WEAK_FUNC(sub_8286FC90);
PPC_FUNC_IMPL(__imp__sub_8286FC90) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286FCBC;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286FCC4;
	sub_82B73C78(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286FCE8"))) PPC_WEAK_FUNC(sub_8286FCE8);
PPC_FUNC_IMPL(__imp__sub_8286FCE8) {
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8286fd64
	if (ctx.cr6.eq) goto loc_8286FD64;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,35596
	ctx.r4.u64 = ctx.r10.u64 | 35596;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286FD48;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286fd5c
	if (ctx.cr6.eq) goto loc_8286FD5C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286FD58;
	sub_82BCD500(ctx, base);
	// b 0x8286fd60
	goto loc_8286FD60;
loc_8286FD5C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286FD60:
	// stw r3,-30056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30056, ctx.r3.u32);
loc_8286FD64:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,14416
	ctx.r30.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286FD80;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286FD88;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286FD98;
	sub_82219130(ctx, base);
	// lwz r11,-30056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30056);
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286fdd4
	if (ctx.cr6.eq) goto loc_8286FDD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286fdc4
	if (ctx.cr6.eq) goto loc_8286FDC4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286fddc
	if (!ctx.cr6.eq) goto loc_8286FDDC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// b 0x8286fddc
	goto loc_8286FDDC;
loc_8286FDC4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286fddc
	goto loc_8286FDDC;
loc_8286FDD4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286FDDC:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// blt cr6,0x8286fdfc
	if (ctx.cr6.lt) goto loc_8286FDFC;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// blt cr6,0x8286fe04
	if (ctx.cr6.lt) goto loc_8286FE04;
loc_8286FDFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8286fe10
	goto loc_8286FE10;
loc_8286FE04:
	// addi r11,r11,4776
	ctx.r11.s64 = ctx.r11.s64 + 4776;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8286FE10:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8286fe30
	if (ctx.cr6.lt) goto loc_8286FE30;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// b 0x8286fe38
	goto loc_8286FE38;
loc_8286FE30:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r9,13232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13232, ctx.r9.u32);
loc_8286FE38:
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

__attribute__((alias("__imp__sub_8286FE50"))) PPC_WEAK_FUNC(sub_8286FE50);
PPC_FUNC_IMPL(__imp__sub_8286FE50) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r30,r10,14416
	ctx.r30.s64 = ctx.r10.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13228(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13228);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82219130
	ctx.lr = 0x8286FE8C;
	sub_82219130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286FE94;
	sub_82B73C78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286FEA4;
	sub_82219130(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8286ff00
	if (!ctx.cr6.gt) goto loc_8286FF00;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286fef0
	if (ctx.cr6.eq) goto loc_8286FEF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286fee0
	if (ctx.cr6.eq) goto loc_8286FEE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286fef8
	if (!ctx.cr6.eq) goto loc_8286FEF8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// b 0x8286fef8
	goto loc_8286FEF8;
loc_8286FEE0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286fef8
	goto loc_8286FEF8;
loc_8286FEF0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286FEF8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8280e5a8
	ctx.lr = 0x8286FF00;
	sub_8280E5A8(ctx, base);
loc_8286FF00:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8286FF28"))) PPC_WEAK_FUNC(sub_8286FF28);
PPC_FUNC_IMPL(__imp__sub_8286FF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8286FF30;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// lwz r11,13556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r9,13180(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286ffa8
	if (ctx.cr6.eq) goto loc_8286FFA8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-29439
	ctx.r10.s64 = -1929314304;
	// ori r4,r10,3830
	ctx.r4.u64 = ctx.r10.u64 | 3830;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x8286FF8C;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8286ffa0
	if (ctx.cr6.eq) goto loc_8286FFA0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8286FF9C;
	sub_82BCD500(ctx, base);
	// b 0x8286ffa4
	goto loc_8286FFA4;
loc_8286FFA0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8286FFA4:
	// stw r3,-30068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30068, ctx.r3.u32);
loc_8286FFA8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r29,r11,14416
	ctx.r29.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8286FFC4;
	sub_82219130(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8286FFCC;
	sub_82B73C78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8286FFDC;
	sub_82219130(ctx, base);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r9,-29532
	ctx.r7.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r3,13188(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x82870028
	if (ctx.cr6.eq) goto loc_82870028;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82870020
	if (ctx.cr6.eq) goto loc_82870020;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82870018
	if (ctx.cr6.eq) goto loc_82870018;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8287002c
	goto loc_8287002C;
loc_82870018:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8287002c
	goto loc_8287002C;
loc_82870020:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8287002c
	goto loc_8287002C;
loc_82870028:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8287002C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828700f4
	if (ctx.cr6.eq) goto loc_828700F4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82870064
	if (ctx.cr6.eq) goto loc_82870064;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8287005c
	if (ctx.cr6.eq) goto loc_8287005C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82870054
	if (ctx.cr6.eq) goto loc_82870054;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82870068
	goto loc_82870068;
loc_82870054:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82870068
	goto loc_82870068;
loc_8287005C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82870068
	goto loc_82870068;
loc_82870064:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82870068:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828700f4
	if (ctx.cr6.eq) goto loc_828700F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828700f4
	if (ctx.cr6.eq) goto loc_828700F4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,-30068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30068);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828700f4
	if (!ctx.cr6.eq) goto loc_828700F4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828700b8
	if (ctx.cr6.eq) goto loc_828700B8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828700b0
	if (ctx.cr6.eq) goto loc_828700B0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828700bc
	if (!ctx.cr6.eq) goto loc_828700BC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828700bc
	goto loc_828700BC;
loc_828700B0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828700bc
	goto loc_828700BC;
loc_828700B8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828700BC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828700e8
	if (ctx.cr6.eq) goto loc_828700E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828700e0
	if (ctx.cr6.eq) goto loc_828700E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828700ec
	if (ctx.cr6.eq) goto loc_828700EC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x828700ec
	goto loc_828700EC;
loc_828700E0:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x828700ec
	goto loc_828700EC;
loc_828700E8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_828700EC:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82849b50
	ctx.lr = 0x828700F4;
	sub_82849B50(ctx, base);
loc_828700F4:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287010C"))) PPC_WEAK_FUNC(sub_8287010C);
PPC_FUNC_IMPL(__imp__sub_8287010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82870110"))) PPC_WEAK_FUNC(sub_82870110);
PPC_FUNC_IMPL(__imp__sub_82870110) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x8287013C;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x82870144;
	sub_82B73C78(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,13232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82870168"))) PPC_WEAK_FUNC(sub_82870168);
PPC_FUNC_IMPL(__imp__sub_82870168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,14416
	ctx.r31.s64 = ctx.r11.s64 + 14416;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13228);
	// bl 0x82219130
	ctx.lr = 0x82870194;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73c78
	ctx.lr = 0x8287019C;
	sub_82B73C78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x828701AC;
	sub_82219130(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828701e8
	if (ctx.cr6.eq) goto loc_828701E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828701d8
	if (ctx.cr6.eq) goto loc_828701D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828701f0
	if (!ctx.cr6.eq) goto loc_828701F0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// b 0x828701f0
	goto loc_828701F0;
loc_828701D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828701f0
	goto loc_828701F0;
loc_828701E8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828701F0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8287022c
	if (!ctx.cr6.eq) goto loc_8287022C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13232, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8287022C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r10,13232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13232, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82870248"))) PPC_WEAK_FUNC(sub_82870248);
PPC_FUNC_IMPL(__imp__sub_82870248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82870250;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13556(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13556);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r10,-20556(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20556);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r22,13192(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r21,13188(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r20,13180(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r19,13184(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828702f4
	if (ctx.cr6.eq) goto loc_828702F4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-29439
	ctx.r10.s64 = -1929314304;
	// ori r4,r10,4060
	ctx.r4.u64 = ctx.r10.u64 | 4060;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x828702C8;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828702e4
	if (ctx.cr6.eq) goto loc_828702E4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x828702D8;
	sub_82BCD500(ctx, base);
	// stw r31,-20556(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20556, ctx.r31.u32);
	// stw r3,-30120(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30120, ctx.r3.u32);
	// b 0x828702f8
	goto loc_828702F8;
loc_828702E4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20556(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20556, ctx.r31.u32);
	// stw r3,-30120(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30120, ctx.r3.u32);
	// b 0x828702f8
	goto loc_828702F8;
loc_828702F4:
	// lwz r3,-30120(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30120);
loc_828702F8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82870378
	if (ctx.cr6.lt) goto loc_82870378;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x82870378
	if (!ctx.cr6.lt) goto loc_82870378;
	// mulli r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 * 124;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82870378
	if (ctx.cr6.eq) goto loc_82870378;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82870378
	if (ctx.cr6.eq) goto loc_82870378;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82870378
	if (ctx.cr6.eq) goto loc_82870378;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82870350
	if (ctx.cr6.eq) goto loc_82870350;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82870354
	if (!ctx.cr6.eq) goto loc_82870354;
loc_82870350:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82870354:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82870378
	if (!ctx.cr6.eq) goto loc_82870378;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827fec40
	ctx.lr = 0x82870364;
	sub_827FEC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x82870374;
	sub_82219130(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82870378:
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// stw r22,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r22.u32);
	// stw r20,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82870394"))) PPC_WEAK_FUNC(sub_82870394);
PPC_FUNC_IMPL(__imp__sub_82870394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82870398"))) PPC_WEAK_FUNC(sub_82870398);
PPC_FUNC_IMPL(__imp__sub_82870398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828703A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r31,13192(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,13188(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r29,13180(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// lwz r28,13184(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// stw r11,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r11.u32);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r3.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8284a020
	ctx.lr = 0x828703FC;
	sub_8284A020(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r31.u32);
	// stw r29,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r30.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287041C"))) PPC_WEAK_FUNC(sub_8287041C);
PPC_FUNC_IMPL(__imp__sub_8287041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82870420"))) PPC_WEAK_FUNC(sub_82870420);
PPC_FUNC_IMPL(__imp__sub_82870420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82870428;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// blt cr6,0x828704c0
	if (ctx.cr6.lt) goto loc_828704C0;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// blt cr6,0x828704e0
	if (ctx.cr6.lt) goto loc_828704E0;
loc_828704C0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828704CC:
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828704cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828704CC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82870500
	goto loc_82870500;
loc_828704E0:
	// mulli r11,r9,124
	ctx.r11.s64 = ctx.r9.s64 * 124;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x827fec40
	ctx.lr = 0x828704F0;
	sub_827FEC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x82870500;
	sub_82219130(ctx, base);
loc_82870500:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82219130
	ctx.lr = 0x82870510;
	sub_82219130(ctx, base);
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82870528"))) PPC_WEAK_FUNC(sub_82870528);
PPC_FUNC_IMPL(__imp__sub_82870528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82870530;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,15828
	ctx.r30.s64 = ctx.r11.s64 + 15828;
	// lwz r10,15828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82870594
	if (ctx.cr6.eq) goto loc_82870594;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82870570
	if (!ctx.cr6.eq) goto loc_82870570;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82870594
	goto loc_82870594;
loc_82870570:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82870584
	if (!ctx.cr6.eq) goto loc_82870584;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82870594
	goto loc_82870594;
loc_82870584:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82870594:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828705e4
	if (ctx.cr6.eq) goto loc_828705E4;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x828705bc
	if (ctx.cr6.gt) goto loc_828705BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828705e4
	goto loc_828705E4;
loc_828705BC:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x828705d0
	if (ctx.cr6.gt) goto loc_828705D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828705e4
	goto loc_828705E4;
loc_828705D0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_828705E4:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82870634
	if (ctx.cr6.eq) goto loc_82870634;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x8287060c
	if (ctx.cr6.gt) goto loc_8287060C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82870634
	goto loc_82870634;
loc_8287060C:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x82870620
	if (ctx.cr6.gt) goto loc_82870620;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82870634
	goto loc_82870634;
loc_82870620:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_82870634:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82870650
	if (!ctx.cr6.eq) goto loc_82870650;
loc_82870648:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8287067c
	goto loc_8287067C;
loc_82870650:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// ble cr6,0x82870648
	if (!ctx.cr6.gt) goto loc_82870648;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// ble cr6,0x82870648
	if (!ctx.cr6.gt) goto loc_82870648;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8287067C:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8280a870
	ctx.lr = 0x82870690;
	sub_8280A870(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,7
	ctx.r4.s64 = 7;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x8280a870
	ctx.lr = 0x828706B8;
	sub_8280A870(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f10,76(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828706E0"))) PPC_WEAK_FUNC(sub_828706E0);
PPC_FUNC_IMPL(__imp__sub_828706E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x828706E8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r10,-20584(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20584);
	// lwz r30,13556(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lis r24,-31940
	ctx.r24.s64 = -2093219840;
	// lwz r22,13192(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r21,13188(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r20,13184(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r31,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r31.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82870794
	if (ctx.cr6.eq) goto loc_82870794;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-29439
	ctx.r10.s64 = -1929314304;
	// ori r4,r10,3757
	ctx.r4.u64 = ctx.r10.u64 | 3757;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82870764;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82870784
	if (ctx.cr6.eq) goto loc_82870784;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82870774;
	sub_82BCD500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,-20584(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20584, ctx.r30.u32);
	// stw r11,-30232(r24)
	PPC_STORE_U32(ctx.r24.u32 + -30232, ctx.r11.u32);
	// b 0x82870798
	goto loc_82870798;
loc_82870784:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,-20584(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20584, ctx.r30.u32);
	// stw r11,-30232(r24)
	PPC_STORE_U32(ctx.r24.u32 + -30232, ctx.r11.u32);
	// b 0x82870798
	goto loc_82870798;
loc_82870794:
	// lwz r11,-30232(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30232);
loc_82870798:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828707f8
	if (ctx.cr6.eq) goto loc_828707F8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828707f8
	if (ctx.cr6.eq) goto loc_828707F8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828707f8
	if (!ctx.cr6.eq) goto loc_828707F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828040c8
	ctx.lr = 0x828707C4;
	sub_828040C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828707e8
	if (ctx.cr6.eq) goto loc_828707E8;
	// bl 0x82bfead8
	ctx.lr = 0x828707D0;
	sub_82BFEAD8(ctx, base);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bne cr6,0x828707e8
	if (!ctx.cr6.eq) goto loc_828707E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82870528
	ctx.lr = 0x828707E8;
	sub_82870528(ctx, base);
loc_828707E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// sth r9,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
loc_828707F8:
	// stw r22,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r22.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r20,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r20.u32);
	// stw r21,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82870810"))) PPC_WEAK_FUNC(sub_82870810);
PPC_FUNC_IMPL(__imp__sub_82870810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82870818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,15828
	ctx.r28.s64 = ctx.r29.s64 + 15828;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82809688
	ctx.lr = 0x82870848;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x8287085C;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x82870870;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x82870884;
	sub_82809688(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8280a378
	ctx.lr = 0x82870894;
	sub_8280A378(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8280a378
	ctx.lr = 0x828708A4;
	sub_8280A378(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828708B4"))) PPC_WEAK_FUNC(sub_828708B4);
PPC_FUNC_IMPL(__imp__sub_828708B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828708B8"))) PPC_WEAK_FUNC(sub_828708B8);
PPC_FUNC_IMPL(__imp__sub_828708B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x828708C0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r10,-20600(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20600);
	// lwz r30,13556(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r19,13188(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r20,13192(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lis r23,-31940
	ctx.r23.s64 = -2093219840;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r18,13180(r25)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r17,13184(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// stw r31,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r31.u32);
	// stw r27,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r27.u32);
	// lwz r21,48(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82870974
	if (ctx.cr6.eq) goto loc_82870974;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,9218
	ctx.r10.s64 = 604110848;
	// ori r4,r10,19480
	ctx.r4.u64 = ctx.r10.u64 | 19480;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82870940;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82870964
	if (ctx.cr6.eq) goto loc_82870964;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82870950;
	sub_82BCD500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r27,13188(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// stw r30,-20600(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20600, ctx.r30.u32);
	// stw r5,-30252(r23)
	PPC_STORE_U32(ctx.r23.u32 + -30252, ctx.r5.u32);
	// b 0x82870978
	goto loc_82870978;
loc_82870964:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r30,-20600(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20600, ctx.r30.u32);
	// stw r5,-30252(r23)
	PPC_STORE_U32(ctx.r23.u32 + -30252, ctx.r5.u32);
	// b 0x82870978
	goto loc_82870978;
loc_82870974:
	// lwz r5,-30252(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30252);
loc_82870978:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82870988
	if (ctx.cr6.eq) goto loc_82870988;
	// lwz r30,24(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
loc_82870988:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828073d0
	ctx.lr = 0x82870994;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828709f0
	if (!ctx.cr6.eq) goto loc_828709F0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828709e0
	if (ctx.cr6.eq) goto loc_828709E0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828709cc
	if (ctx.cr6.eq) goto loc_828709CC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828709c0
	if (ctx.cr6.eq) goto loc_828709C0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82870a34
	goto loc_82870A34;
loc_828709C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82870a34
	goto loc_82870A34;
loc_828709CC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82870a34
	goto loc_82870A34;
loc_828709E0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// b 0x82870a34
	goto loc_82870A34;
loc_828709F0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82870a28
	if (ctx.cr6.eq) goto loc_82870A28;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82870a18
	if (ctx.cr6.eq) goto loc_82870A18;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82870a10
	if (ctx.cr6.eq) goto loc_82870A10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82870a30
	goto loc_82870A30;
loc_82870A10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82870a30
	goto loc_82870A30;
loc_82870A18:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82870a30
	goto loc_82870A30;
loc_82870A28:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82870A30:
	// li r5,10
	ctx.r5.s64 = 10;
loc_82870A34:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82854580
	ctx.lr = 0x82870A40;
	sub_82854580(ctx, base);
	// stw r20,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r20.u32);
	// stw r18,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r18.u32);
	// stw r17,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r17.u32);
	// stw r19,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82870A58"))) PPC_WEAK_FUNC(sub_82870A58);
PPC_FUNC_IMPL(__imp__sub_82870A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82870A60;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13556(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lis r27,-31940
	ctx.r27.s64 = -2093219840;
	// lwz r9,-20652(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20652);
	// lis r26,-31940
	ctx.r26.s64 = -2093219840;
	// lwz r20,13188(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r21,13192(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13192);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// lwz r19,13180(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// lwz r18,13184(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82870b34
	if (ctx.cr6.eq) goto loc_82870B34;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r11,25600
	ctx.r11.s64 = 1677721600;
	// ori r4,r11,36552
	ctx.r4.u64 = ctx.r11.u64 | 36552;
	// lwz r6,12480(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82870ADC;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82870af8
	if (ctx.cr6.eq) goto loc_82870AF8;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82870AEC;
	sub_82BCD500(ctx, base);
	// lwz r6,12480(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12480);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82870afc
	goto loc_82870AFC;
loc_82870AF8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82870AFC:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// stw r5,-30436(r26)
	PPC_STORE_U32(ctx.r26.u32 + -30436, ctx.r5.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r11,24468
	ctx.r4.u64 = ctx.r11.u64 | 24468;
	// bl 0x82bcd3b8
	ctx.lr = 0x82870B10;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82870b28
	if (ctx.cr6.eq) goto loc_82870B28;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82870B20;
	sub_82BCD500(ctx, base);
	// lwz r5,-30436(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30436);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82870B28:
	// stw r4,-30432(r27)
	PPC_STORE_U32(ctx.r27.u32 + -30432, ctx.r4.u32);
	// stw r31,-20652(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20652, ctx.r31.u32);
	// b 0x82870b38
	goto loc_82870B38;
loc_82870B34:
	// lwz r5,-30436(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30436);
loc_82870B38:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// beq cr6,0x82870b68
	if (ctx.cr6.eq) goto loc_82870B68;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82870b60
	if (ctx.cr6.eq) goto loc_82870B60;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82870b6c
	if (!ctx.cr6.eq) goto loc_82870B6C;
	// lwz r5,13188(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// b 0x82870b6c
	goto loc_82870B6C;
loc_82870B60:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82870b6c
	goto loc_82870B6C;
loc_82870B68:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82870B6C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f31,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// lfs f5,-19780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19780);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f4,-27236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27236);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8281a3f0
	ctx.lr = 0x82870B98;
	sub_8281A3F0(ctx, base);
	// lwz r11,-30432(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -30432);
	// lwz r7,13188(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82870bd0
	if (ctx.cr6.eq) goto loc_82870BD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82870bc8
	if (ctx.cr6.eq) goto loc_82870BC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82870bd4
	if (!ctx.cr6.eq) goto loc_82870BD4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82870bd4
	goto loc_82870BD4;
loc_82870BC8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82870bd4
	goto loc_82870BD4;
loc_82870BD0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82870BD4:
	// lwz r10,13204(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13204);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x82870c0c
	if (!ctx.cr6.gt) goto loc_82870C0C;
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// bge cr6,0x82870c0c
	if (!ctx.cr6.lt) goto loc_82870C0C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,2003
	ctx.r10.s64 = ctx.r10.s64 + 2003;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r11,r3,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82870c60
	if (!ctx.cr6.eq) goto loc_82870C60;
loc_82870C0C:
	// lwz r10,2756(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 2756);
	// lwz r11,-30436(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30436);
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r5,29
	ctx.r5.u64 = ctx.r5.u32 & 0x7;
	// rlwinm r5,r5,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// beq cr6,0x82870c4c
	if (ctx.cr6.eq) goto loc_82870C4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82870c44
	if (ctx.cr6.eq) goto loc_82870C44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82870c50
	if (!ctx.cr6.eq) goto loc_82870C50;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82870c50
	goto loc_82870C50;
loc_82870C44:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82870c50
	goto loc_82870C50;
loc_82870C4C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82870C50:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f1,-3896(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3896);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8281a628
	ctx.lr = 0x82870C60;
	sub_8281A628(ctx, base);
loc_82870C60:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f31,2444(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r22.u32 + 2444, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r21,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r21.u32);
	// stw r19,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r19.u32);
	// stw r10,2256(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2256, ctx.r10.u32);
	// stw r18,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r18.u32);
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// stw r20,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r20.u32);
	// stfs f0,13020(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 13020, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82870C94"))) PPC_WEAK_FUNC(sub_82870C94);
PPC_FUNC_IMPL(__imp__sub_82870C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82870C98"))) PPC_WEAK_FUNC(sub_82870C98);
PPC_FUNC_IMPL(__imp__sub_82870C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82870CA0;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8221ad18
	ctx.lr = 0x82870CA8;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lwz r10,-20660(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20660);
	// lwz r29,13556(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lwz r18,13188(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// lis r26,-31940
	ctx.r26.s64 = -2093219840;
	// lwz r19,13192(r22)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// lis r30,-31940
	ctx.r30.s64 = -2093219840;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// lwz r17,13180(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13180);
	// lwz r16,13184(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13184);
	// stw r31,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r31.u32);
	// stw r24,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r24.u32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82870d9c
	if (ctx.cr6.eq) goto loc_82870D9C;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r4,r11,23484
	ctx.r4.u64 = ctx.r11.u64 | 23484;
	// lwz r6,12480(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82870D28;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82870d48
	if (ctx.cr6.eq) goto loc_82870D48;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82870D38;
	sub_82BCD500(ctx, base);
	// lwz r24,13188(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// lwz r6,12480(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82870d4c
	goto loc_82870D4C;
loc_82870D48:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82870D4C:
	// lis r11,25600
	ctx.r11.s64 = 1677721600;
	// stw r5,-30460(r30)
	PPC_STORE_U32(ctx.r30.u32 + -30460, ctx.r5.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r11,36290
	ctx.r4.u64 = ctx.r11.u64 | 36290;
	// bl 0x82bcd3b8
	ctx.lr = 0x82870D60;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82870d88
	if (ctx.cr6.eq) goto loc_82870D88;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82870D70;
	sub_82BCD500(ctx, base);
	// lwz r5,-30460(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30460);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r24,13188(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// stw r29,-20660(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20660, ctx.r29.u32);
	// stw r30,-30456(r26)
	PPC_STORE_U32(ctx.r26.u32 + -30456, ctx.r30.u32);
	// b 0x82870da4
	goto loc_82870DA4;
loc_82870D88:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r29,-20660(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20660, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,-30456(r26)
	PPC_STORE_U32(ctx.r26.u32 + -30456, ctx.r30.u32);
	// b 0x82870da4
	goto loc_82870DA4;
loc_82870D9C:
	// lwz r5,-30460(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30460);
	// lwz r30,-30456(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30456);
loc_82870DA4:
	// lwz r11,2256(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82871240
	if (ctx.cr6.eq) goto loc_82871240;
	// lwz r11,2788(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82871240
	if (ctx.cr6.eq) goto loc_82871240;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82870ddc
	if (ctx.cr6.eq) goto loc_82870DDC;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82870de4
	goto loc_82870DE4;
loc_82870DDC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82870DE4:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,5568(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5568);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5544(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5544);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,2064(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2064);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fadds f0,f31,f11
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,5544(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 5544, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82870e14
	if (!ctx.cr6.gt) goto loc_82870E14;
	// li r11,0
	ctx.r11.s64 = 0;
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stw r11,2788(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2788, ctx.r11.u32);
loc_82870E14:
	// lwz r10,2788(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828711fc
	if (ctx.cr6.eq) goto loc_828711FC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828711b4
	if (ctx.cr6.eq) goto loc_828711B4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82871154
	if (ctx.cr6.eq) goto loc_82871154;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x828710f4
	if (ctx.cr6.eq) goto loc_828710F4;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r31,-29532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x82870e78
	if (ctx.cr6.eq) goto loc_82870E78;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82870e70
	if (ctx.cr6.eq) goto loc_82870E70;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82870e68
	if (ctx.cr6.eq) goto loc_82870E68;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82870e7c
	goto loc_82870E7C;
loc_82870E68:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82870e7c
	goto loc_82870E7C;
loc_82870E70:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82870e7c
	goto loc_82870E7C;
loc_82870E78:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82870E7C:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f30,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f28.f64 = double(temp.f32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82871024
	if (ctx.cr6.eq) goto loc_82871024;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82870fb4
	if (ctx.cr6.eq) goto loc_82870FB4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82870f38
	if (ctx.cr6.eq) goto loc_82870F38;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8287109c
	if (!ctx.cr6.eq) goto loc_8287109C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82870eec
	if (ctx.cr6.eq) goto loc_82870EEC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82870ee4
	if (ctx.cr6.eq) goto loc_82870EE4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82870edc
	if (ctx.cr6.eq) goto loc_82870EDC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82870ef0
	goto loc_82870EF0;
loc_82870EDC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82870ef0
	goto loc_82870EF0;
loc_82870EE4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82870ef0
	goto loc_82870EF0;
loc_82870EEC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82870EF0:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fsubs f5,f30,f8
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f4,f29,f7
	ctx.f4.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f3,f28,f6
	ctx.f3.f64 = double(float(ctx.f28.f64 - ctx.f6.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8287109c
	goto loc_8287109C;
loc_82870F38:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82870f68
	if (ctx.cr6.eq) goto loc_82870F68;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82870f60
	if (ctx.cr6.eq) goto loc_82870F60;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82870f58
	if (ctx.cr6.eq) goto loc_82870F58;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82870f6c
	goto loc_82870F6C;
loc_82870F58:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82870f6c
	goto loc_82870F6C;
loc_82870F60:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82870f6c
	goto loc_82870F6C;
loc_82870F68:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82870F6C:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f4,f7,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f3,f6,f28
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8287109c
	goto loc_8287109C;
loc_82870FB4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82870fe4
	if (ctx.cr6.eq) goto loc_82870FE4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82870fdc
	if (ctx.cr6.eq) goto loc_82870FDC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82870fd4
	if (ctx.cr6.eq) goto loc_82870FD4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82870fe8
	goto loc_82870FE8;
loc_82870FD4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82870fe8
	goto loc_82870FE8;
loc_82870FDC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82870fe8
	goto loc_82870FE8;
loc_82870FE4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82870FE8:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82124928
	ctx.lr = 0x82870FFC;
	sub_82124928(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fsubs f8,f30,f12
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fsubs f7,f29,f10
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// fsubs f6,f28,f9
	ctx.f6.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// b 0x82871090
	goto loc_82871090;
loc_82871024:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82871054
	if (ctx.cr6.eq) goto loc_82871054;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8287104c
	if (ctx.cr6.eq) goto loc_8287104C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82871044
	if (ctx.cr6.eq) goto loc_82871044;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82871058
	goto loc_82871058;
loc_82871044:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82871058
	goto loc_82871058;
loc_8287104C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82871058
	goto loc_82871058;
loc_82871054:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82871058:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82124928
	ctx.lr = 0x8287106C;
	sub_82124928(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fadds f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fadds f7,f10,f29
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// fadds f6,f9,f28
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
loc_82871090:
	// stfs f6,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8287109C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x828710e4
	if (ctx.cr6.eq) goto loc_828710E4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x828710d4
	if (ctx.cr6.eq) goto loc_828710D4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x828710c4
	if (ctx.cr6.eq) goto loc_828710C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82be61d0
	ctx.lr = 0x828710C0;
	sub_82BE61D0(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_828710C4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82be61d0
	ctx.lr = 0x828710D0;
	sub_82BE61D0(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_828710D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82be61d0
	ctx.lr = 0x828710E0;
	sub_82BE61D0(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_828710E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82be61d0
	ctx.lr = 0x828710F0;
	sub_82BE61D0(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_828710F4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8287113c
	if (ctx.cr6.eq) goto loc_8287113C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82871120
	if (ctx.cr6.eq) goto loc_82871120;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82871144
	if (!ctx.cr6.eq) goto loc_82871144;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82804a78
	ctx.lr = 0x8287111C;
	sub_82804A78(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_82871120:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82804a78
	ctx.lr = 0x82871138;
	sub_82804A78(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_8287113C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871144:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// bl 0x82804a78
	ctx.lr = 0x82871150;
	sub_82804A78(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_82871154:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8287119c
	if (ctx.cr6.eq) goto loc_8287119C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82871180
	if (ctx.cr6.eq) goto loc_82871180;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828711a4
	if (!ctx.cr6.eq) goto loc_828711A4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82804a78
	ctx.lr = 0x8287117C;
	sub_82804A78(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_82871180:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82804a78
	ctx.lr = 0x82871198;
	sub_82804A78(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_8287119C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828711A4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82804a78
	ctx.lr = 0x828711B0;
	sub_82804A78(ctx, base);
	// b 0x82871240
	goto loc_82871240;
loc_828711B4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828711ec
	if (ctx.cr6.eq) goto loc_828711EC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828711d8
	if (ctx.cr6.eq) goto loc_828711D8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828711f4
	if (!ctx.cr6.eq) goto loc_828711F4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82871238
	goto loc_82871238;
loc_828711D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871238
	goto loc_82871238;
loc_828711EC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828711F4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82871238
	goto loc_82871238;
loc_828711FC:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8287122c
	if (ctx.cr6.eq) goto loc_8287122C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8287121c
	if (ctx.cr6.eq) goto loc_8287121C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82871234
	if (!ctx.cr6.eq) goto loc_82871234;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82871234
	goto loc_82871234;
loc_8287121C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871234
	goto loc_82871234;
loc_8287122C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871234:
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_82871238:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82804680
	ctx.lr = 0x82871240;
	sub_82804680(ctx, base);
loc_82871240:
	// stw r19,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r19.u32);
	// stw r17,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r17.u32);
	// stw r16,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r16.u32);
	// stw r18,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8221ad64
	ctx.lr = 0x8287125C;
	__restfpr_28(ctx, base);
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82871260"))) PPC_WEAK_FUNC(sub_82871260);
PPC_FUNC_IMPL(__imp__sub_82871260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x82871268;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,13556(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,-20680(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20680);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r17,13188(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r18,13192(r22)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// lis r26,-31940
	ctx.r26.s64 = -2093219840;
	// lwz r16,13180(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13180);
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r15,13184(r20)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13184);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r3.u32);
	// stw r24,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r24.u32);
	// stw r11,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82871358
	if (ctx.cr6.eq) goto loc_82871358;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// ori r4,r11,35596
	ctx.r4.u64 = ctx.r11.u64 | 35596;
	// lwz r6,12480(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x828712EC;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871308
	if (ctx.cr6.eq) goto loc_82871308;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x828712FC;
	sub_82BCD500(ctx, base);
	// lwz r24,13188(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// lwz r6,12480(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12480);
	// b 0x8287130c
	goto loc_8287130C;
loc_82871308:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8287130C:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r11,11967
	ctx.r4.u64 = ctx.r11.u64 | 11967;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r5,-30508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30508, ctx.r5.u32);
	// bl 0x82bcd3b8
	ctx.lr = 0x82871324;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871348
	if (ctx.cr6.eq) goto loc_82871348;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82871334;
	sub_82BCD500(ctx, base);
	// lwz r5,-30508(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30508);
	// lwz r24,13188(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13188);
	// stw r30,-20680(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20680, ctx.r30.u32);
	// stw r3,-30504(r26)
	PPC_STORE_U32(ctx.r26.u32 + -30504, ctx.r3.u32);
	// b 0x82871360
	goto loc_82871360;
loc_82871348:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,-20680(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20680, ctx.r30.u32);
	// stw r3,-30504(r26)
	PPC_STORE_U32(ctx.r26.u32 + -30504, ctx.r3.u32);
	// b 0x82871360
	goto loc_82871360;
loc_82871358:
	// lwz r5,-30508(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30508);
	// lwz r3,-30504(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30504);
loc_82871360:
	// lwz r10,2276(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2276);
	// addi r11,r25,2272
	ctx.r11.s64 = ctx.r25.s64 + 2272;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828716a4
	if (ctx.cr6.eq) goto loc_828716A4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r4,r8,5
	ctx.r4.s64 = ctx.r8.s64 + 5;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// beq cr6,0x82871620
	if (ctx.cr6.eq) goto loc_82871620;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828715b0
	if (ctx.cr6.eq) goto loc_828715B0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82871534
	if (ctx.cr6.eq) goto loc_82871534;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8287169c
	if (!ctx.cr6.eq) goto loc_8287169C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82871480
	if (!ctx.cr6.eq) goto loc_82871480;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8287140c
	if (ctx.cr6.eq) goto loc_8287140C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82871404
	if (ctx.cr6.eq) goto loc_82871404;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8287140c
	if (!ctx.cr6.eq) goto loc_8287140C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x82871410
	goto loc_82871410;
loc_82871404:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82871410
	goto loc_82871410;
loc_8287140C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82871410:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfs f13,1104(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1104);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82871444
	if (ctx.cr6.eq) goto loc_82871444;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82871440
	if (ctx.cr6.eq) goto loc_82871440;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82871444
	if (!ctx.cr6.eq) goto loc_82871444;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82871444
	goto loc_82871444;
loc_82871440:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82871444:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-30884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30884);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f10,1100(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// b 0x82871694
	goto loc_82871694;
loc_82871480:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8287169c
	if (!ctx.cr6.eq) goto loc_8287169C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828714c0
	if (ctx.cr6.eq) goto loc_828714C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828714b8
	if (ctx.cr6.eq) goto loc_828714B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828714c0
	if (!ctx.cr6.eq) goto loc_828714C0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x828714c4
	goto loc_828714C4;
loc_828714B8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828714c4
	goto loc_828714C4;
loc_828714C0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828714C4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfs f13,1100(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x828714f8
	if (ctx.cr6.eq) goto loc_828714F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828714f4
	if (ctx.cr6.eq) goto loc_828714F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828714f8
	if (!ctx.cr6.eq) goto loc_828714F8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x828714f8
	goto loc_828714F8;
loc_828714F4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828714F8:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f10,1104(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-30884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// b 0x82871694
	goto loc_82871694;
loc_82871534:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8287156c
	if (ctx.cr6.eq) goto loc_8287156C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8287155c
	if (ctx.cr6.eq) goto loc_8287155C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82871554
	if (ctx.cr6.eq) goto loc_82871554;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82871574
	goto loc_82871574;
loc_82871554:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82871574
	goto loc_82871574;
loc_8287155C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871574
	goto loc_82871574;
loc_8287156C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871574:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8287169c
	if (ctx.cr6.lt) goto loc_8287169C;
	// cmpwi cr6,r9,99
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 99, ctx.xer);
	// bge cr6,0x8287169c
	if (!ctx.cr6.lt) goto loc_8287169C;
	// addi r10,r9,181
	ctx.r10.s64 = ctx.r9.s64 + 181;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8287169c
	if (ctx.cr6.eq) goto loc_8287169C;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r7.u32);
	// b 0x828716ac
	goto loc_828716AC;
loc_828715B0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8287169c
	if (!ctx.cr6.eq) goto loc_8287169C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828715e8
	if (ctx.cr6.eq) goto loc_828715E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828715e4
	if (ctx.cr6.eq) goto loc_828715E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828715e8
	if (!ctx.cr6.eq) goto loc_828715E8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x828715e8
	goto loc_828715E8;
loc_828715E4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828715E8:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f11,1104(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1104);
	ctx.f11.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-30884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// b 0x82871694
	goto loc_82871694;
loc_82871620:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82871658
	if (ctx.cr6.eq) goto loc_82871658;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82871648
	if (ctx.cr6.eq) goto loc_82871648;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82871640
	if (ctx.cr6.eq) goto loc_82871640;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82871660
	goto loc_82871660;
loc_82871640:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82871660
	goto loc_82871660;
loc_82871648:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871660
	goto loc_82871660;
loc_82871658:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871660:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8287167c
	if (ctx.cr6.lt) goto loc_8287167C;
	// cmpwi cr6,r9,58
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 58, ctx.xer);
	// blt cr6,0x82871684
	if (ctx.cr6.lt) goto loc_82871684;
loc_8287167C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82871690
	goto loc_82871690;
loc_82871684:
	// addi r10,r9,4776
	ctx.r10.s64 = ctx.r9.s64 + 4776;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82871690:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
loc_82871694:
	// blt cr6,0x8287169c
	if (ctx.cr6.lt) goto loc_8287169C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8287169C:
	// stw r7,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r7.u32);
	// b 0x828716ac
	goto loc_828716AC;
loc_828716A4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_828716AC:
	// stw r17,13188(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13188, ctx.r17.u32);
	// stw r15,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r15.u32);
	// stw r16,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r16.u32);
	// stw r18,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r18.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828716C4"))) PPC_WEAK_FUNC(sub_828716C4);
PPC_FUNC_IMPL(__imp__sub_828716C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828716C8"))) PPC_WEAK_FUNC(sub_828716C8);
PPC_FUNC_IMPL(__imp__sub_828716C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828716D0;
	__savegprlr_23(ctx, base);
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// lwz r8,12600(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12600);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82871754
	if (!ctx.cr6.gt) goto loc_82871754;
	// addi r9,r9,2272
	ctx.r9.s64 = ctx.r9.s64 + 2272;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82871730:
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8287175c
	if (ctx.cr6.eq) goto loc_8287175C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82871730
	if (ctx.cr6.lt) goto loc_82871730;
loc_82871754:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8287176c
	goto loc_8287176C;
loc_8287175C:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82871260
	ctx.lr = 0x82871768;
	sub_82871260(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8287176C:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82871788"))) PPC_WEAK_FUNC(sub_82871788);
PPC_FUNC_IMPL(__imp__sub_82871788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82871790;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r22,13192(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r21,13188(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r20,13184(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82871850
	if (ctx.cr6.eq) goto loc_82871850;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lwz r25,13404(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
loc_828717F4:
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// bge cr6,0x82871830
	if (!ctx.cr6.lt) goto loc_82871830;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bl 0x827cbd20
	ctx.lr = 0x82871810;
	sub_827CBD20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82871824
	if (ctx.cr6.eq) goto loc_82871824;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// b 0x82871828
	goto loc_82871828;
loc_82871824:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82871828:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x828717f4
	if (!ctx.cr6.eq) goto loc_828717F4;
loc_82871830:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82871850
	if (!ctx.cr6.gt) goto loc_82871850;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82809308
	ctx.lr = 0x82871844;
	sub_82809308(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82871850:
	// stw r4,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r4.u32);
	// stw r22,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r22.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r20,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r20.u32);
	// stw r21,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287186C"))) PPC_WEAK_FUNC(sub_8287186C);
PPC_FUNC_IMPL(__imp__sub_8287186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82871870"))) PPC_WEAK_FUNC(sub_82871870);
PPC_FUNC_IMPL(__imp__sub_82871870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82871878;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r27,13556(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// lwz r10,-20728(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20728);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r20,13180(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r18,13188(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r19,13192(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r17,13184(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r6,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r6.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8287192c
	if (ctx.cr6.eq) goto loc_8287192C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,9297
	ctx.r4.u64 = ctx.r10.u64 | 9297;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x828718FC;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8287191c
	if (ctx.cr6.eq) goto loc_8287191C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x8287190C;
	sub_82BCD500(ctx, base);
	// lwz r6,13188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r27,-20728(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20728, ctx.r27.u32);
	// stw r3,-30640(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30640, ctx.r3.u32);
	// b 0x82871930
	goto loc_82871930;
loc_8287191C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r27,-20728(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20728, ctx.r27.u32);
	// stw r3,-30640(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30640, ctx.r3.u32);
	// b 0x82871930
	goto loc_82871930;
loc_8287192C:
	// lwz r3,-30640(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30640);
loc_82871930:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82871960
	if (ctx.cr6.eq) goto loc_82871960;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82871950
	if (ctx.cr6.eq) goto loc_82871950;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82871968
	if (!ctx.cr6.eq) goto loc_82871968;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82871968
	goto loc_82871968;
loc_82871950:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871968
	goto loc_82871968;
loc_82871960:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871968:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x828107b0
	ctx.lr = 0x82871980;
	sub_828107B0(ctx, base);
	// stw r19,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r19.u32);
	// stw r20,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r20.u32);
	// stw r17,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r17.u32);
	// stw r18,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82871998"))) PPC_WEAK_FUNC(sub_82871998);
PPC_FUNC_IMPL(__imp__sub_82871998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x828719A0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r10,-20732(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20732);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r27,13556(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r20,13180(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r18,13188(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r19,13192(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r17,13184(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r6,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r6.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82871a54
	if (ctx.cr6.eq) goto loc_82871A54;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,9297
	ctx.r4.u64 = ctx.r10.u64 | 9297;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82871A24;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871a44
	if (ctx.cr6.eq) goto loc_82871A44;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82871A34;
	sub_82BCD500(ctx, base);
	// lwz r6,13188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r27,-20732(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20732, ctx.r27.u32);
	// stw r3,-30644(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30644, ctx.r3.u32);
	// b 0x82871a58
	goto loc_82871A58;
loc_82871A44:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r27,-20732(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20732, ctx.r27.u32);
	// stw r3,-30644(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30644, ctx.r3.u32);
	// b 0x82871a58
	goto loc_82871A58;
loc_82871A54:
	// lwz r3,-30644(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30644);
loc_82871A58:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82871a88
	if (ctx.cr6.eq) goto loc_82871A88;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82871a78
	if (ctx.cr6.eq) goto loc_82871A78;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82871a90
	if (!ctx.cr6.eq) goto loc_82871A90;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82871a90
	goto loc_82871A90;
loc_82871A78:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871a90
	goto loc_82871A90;
loc_82871A88:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871A90:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828107b0
	ctx.lr = 0x82871AA8;
	sub_828107B0(ctx, base);
	// stw r19,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r19.u32);
	// stw r20,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r20.u32);
	// stw r17,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r17.u32);
	// stw r18,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82871AC0"))) PPC_WEAK_FUNC(sub_82871AC0);
PPC_FUNC_IMPL(__imp__sub_82871AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82871AC8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r27,13556(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// lwz r10,-20736(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20736);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r21,13180(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r19,13188(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r20,13192(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r18,13184(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r6,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r6.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82871b78
	if (ctx.cr6.eq) goto loc_82871B78;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,9297
	ctx.r4.u64 = ctx.r10.u64 | 9297;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82871B48;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871b68
	if (ctx.cr6.eq) goto loc_82871B68;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82871B58;
	sub_82BCD500(ctx, base);
	// lwz r6,13188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r27,-20736(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20736, ctx.r27.u32);
	// stw r3,-30648(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30648, ctx.r3.u32);
	// b 0x82871b7c
	goto loc_82871B7C;
loc_82871B68:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r27,-20736(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20736, ctx.r27.u32);
	// stw r3,-30648(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30648, ctx.r3.u32);
	// b 0x82871b7c
	goto loc_82871B7C;
loc_82871B78:
	// lwz r3,-30648(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30648);
loc_82871B7C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82871bac
	if (ctx.cr6.eq) goto loc_82871BAC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82871b9c
	if (ctx.cr6.eq) goto loc_82871B9C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82871bb4
	if (!ctx.cr6.eq) goto loc_82871BB4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82871bb4
	goto loc_82871BB4;
loc_82871B9C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871bb4
	goto loc_82871BB4;
loc_82871BAC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871BB4:
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82810748
	ctx.lr = 0x82871BC8;
	sub_82810748(ctx, base);
	// stw r20,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r20.u32);
	// stw r21,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r21.u32);
	// stw r18,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r18.u32);
	// stw r19,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82871BE0"))) PPC_WEAK_FUNC(sub_82871BE0);
PPC_FUNC_IMPL(__imp__sub_82871BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82871BE8;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,13556(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,-20740(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20740);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r20,13180(r24)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r18,13188(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lis r22,-31940
	ctx.r22.s64 = -2093219840;
	// lwz r19,13192(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13192);
	// lis r30,-31940
	ctx.r30.s64 = -2093219840;
	// lwz r17,13184(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13184);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r11,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r11.u32);
	// stw r3,13192(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13192, ctx.r3.u32);
	// stw r27,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r27.u32);
	// stw r11,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82871ce0
	if (ctx.cr6.eq) goto loc_82871CE0;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r11,6400
	ctx.r11.s64 = 419430400;
	// ori r4,r11,565
	ctx.r4.u64 = ctx.r11.u64 | 565;
	// lwz r6,12480(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82871C6C;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871c8c
	if (ctx.cr6.eq) goto loc_82871C8C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82871C7C;
	sub_82BCD500(ctx, base);
	// lwz r27,13188(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r6,12480(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12480);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82871c90
	goto loc_82871C90;
loc_82871C8C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82871C90:
	// lis r11,-25088
	ctx.r11.s64 = -1644167168;
	// stw r5,-30652(r30)
	PPC_STORE_U32(ctx.r30.u32 + -30652, ctx.r5.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r11,27293
	ctx.r4.u64 = ctx.r11.u64 | 27293;
	// bl 0x82bcd3b8
	ctx.lr = 0x82871CA4;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871ccc
	if (ctx.cr6.eq) goto loc_82871CCC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82871CB4;
	sub_82BCD500(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-30652(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30652);
	// lwz r27,13188(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r29,-20740(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20740, ctx.r29.u32);
	// stw r6,-30656(r22)
	PPC_STORE_U32(ctx.r22.u32 + -30656, ctx.r6.u32);
	// b 0x82871ce8
	goto loc_82871CE8;
loc_82871CCC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r29,-20740(r28)
	PPC_STORE_U32(ctx.r28.u32 + -20740, ctx.r29.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,-30656(r22)
	PPC_STORE_U32(ctx.r22.u32 + -30656, ctx.r6.u32);
	// b 0x82871ce8
	goto loc_82871CE8;
loc_82871CE0:
	// lwz r5,-30652(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30652);
	// lwz r6,-30656(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30656);
loc_82871CE8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r30,-29532(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x82871d20
	if (ctx.cr6.eq) goto loc_82871D20;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82871d18
	if (ctx.cr6.eq) goto loc_82871D18;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82871d24
	if (!ctx.cr6.eq) goto loc_82871D24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82871d24
	goto loc_82871D24;
loc_82871D18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82871d24
	goto loc_82871D24;
loc_82871D20:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82871D24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82850ea0
	ctx.lr = 0x82871D30;
	sub_82850EA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82871d68
	if (ctx.cr6.eq) goto loc_82871D68;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82871d60
	if (ctx.cr6.eq) goto loc_82871D60;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82871d6c
	if (ctx.cr6.eq) goto loc_82871D6C;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// b 0x82871d6c
	goto loc_82871D6C;
loc_82871D60:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x82871d6c
	goto loc_82871D6C;
loc_82871D68:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82871D6C:
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82871d88
	if (!ctx.cr6.gt) goto loc_82871D88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82871D88:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r19,13192(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13192, ctx.r19.u32);
	// stw r20,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r20.u32);
	// stw r17,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r17.u32);
	// stw r18,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82871DA4"))) PPC_WEAK_FUNC(sub_82871DA4);
PPC_FUNC_IMPL(__imp__sub_82871DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82871DA8"))) PPC_WEAK_FUNC(sub_82871DA8);
PPC_FUNC_IMPL(__imp__sub_82871DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82871DB0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,13556(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,-20764(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20764);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r21,13188(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r22,13192(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r20,13180(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r19,13184(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r6,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r6.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82871e60
	if (ctx.cr6.eq) goto loc_82871E60;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r4,r10,12172
	ctx.r4.u64 = ctx.r10.u64 | 12172;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82871E2C;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871e50
	if (ctx.cr6.eq) goto loc_82871E50;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82871E3C;
	sub_82BCD500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,13188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r30,-20764(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20764, ctx.r30.u32);
	// stw r11,-30708(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30708, ctx.r11.u32);
	// b 0x82871e64
	goto loc_82871E64;
loc_82871E50:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,-20764(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20764, ctx.r30.u32);
	// stw r11,-30708(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30708, ctx.r11.u32);
	// b 0x82871e64
	goto loc_82871E64;
loc_82871E60:
	// lwz r11,-30708(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30708);
loc_82871E64:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82871e94
	if (ctx.cr6.eq) goto loc_82871E94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82871e84
	if (ctx.cr6.eq) goto loc_82871E84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82871e9c
	if (!ctx.cr6.eq) goto loc_82871E9C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82871e9c
	goto loc_82871E9C;
loc_82871E84:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82871e9c
	goto loc_82871E9C;
loc_82871E94:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82871E9C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x82871ebc
	if (ctx.cr6.lt) goto loc_82871EBC;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// blt cr6,0x82871ec4
	if (ctx.cr6.lt) goto loc_82871EC4;
loc_82871EBC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82871ed0
	goto loc_82871ED0;
loc_82871EC4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82871ED0:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r22,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r22.u32);
	// stw r20,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82871EEC"))) PPC_WEAK_FUNC(sub_82871EEC);
PPC_FUNC_IMPL(__imp__sub_82871EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82871EF0"))) PPC_WEAK_FUNC(sub_82871EF0);
PPC_FUNC_IMPL(__imp__sub_82871EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82871EF8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lwz r10,-20772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20772);
	// lwz r31,13556(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r18,13188(r25)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r19,13192(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13192);
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r17,13180(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13180);
	// lwz r16,13184(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13184);
	// stw r26,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r26.u32);
	// stw r28,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r28.u32);
	// lwz r21,48(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82871fb0
	if (ctx.cr6.eq) goto loc_82871FB0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,9218
	ctx.r10.s64 = 604110848;
	// ori r4,r10,19480
	ctx.r4.u64 = ctx.r10.u64 | 19480;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82871F78;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82871f9c
	if (ctx.cr6.eq) goto loc_82871F9C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82871F88;
	sub_82BCD500(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,13188(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// stw r31,-20772(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20772, ctx.r31.u32);
	// stw r27,-30724(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30724, ctx.r27.u32);
	// b 0x82871fb4
	goto loc_82871FB4;
loc_82871F9C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20772(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20772, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,-30724(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30724, ctx.r27.u32);
	// b 0x82871fb4
	goto loc_82871FB4;
loc_82871FB0:
	// lwz r27,-30724(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30724);
loc_82871FB4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f12,56(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmsubs f8,f9,f0,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x828721a4
	if (ctx.cr6.lt) goto loc_828721A4;
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// bne cr6,0x828720a4
	if (!ctx.cr6.eq) goto loc_828720A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82872040
	if (ctx.cr6.eq) goto loc_82872040;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82872038
	if (ctx.cr6.eq) goto loc_82872038;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82872040
	if (!ctx.cr6.eq) goto loc_82872040;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82872044
	goto loc_82872044;
loc_82872038:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82872044
	goto loc_82872044;
loc_82872040:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82872044:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828720ac
	if (ctx.cr6.eq) goto loc_828720AC;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8287206c
	if (ctx.cr6.eq) goto loc_8287206C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82872064
	if (ctx.cr6.eq) goto loc_82872064;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82872070
	goto loc_82872070;
loc_82872064:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82872070
	goto loc_82872070;
loc_8287206C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82872070:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8287208c
	if (ctx.cr6.eq) goto loc_8287208C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82872090
	if (ctx.cr6.eq) goto loc_82872090;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82872090
	if (ctx.cr6.eq) goto loc_82872090;
loc_8287208C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82872090:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x8287209C;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82872198
	if (!ctx.cr6.eq) goto loc_82872198;
loc_828720A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_828720AC:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x828720dc
	if (ctx.cr6.eq) goto loc_828720DC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x828720d4
	if (ctx.cr6.eq) goto loc_828720D4;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x828720cc
	if (ctx.cr6.eq) goto loc_828720CC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x828720e0
	goto loc_828720E0;
loc_828720CC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x828720e0
	goto loc_828720E0;
loc_828720D4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828720e0
	goto loc_828720E0;
loc_828720DC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828720E0:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,684(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 684);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82872118
	if (ctx.cr6.eq) goto loc_82872118;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82872110
	if (ctx.cr6.eq) goto loc_82872110;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8287211c
	if (!ctx.cr6.eq) goto loc_8287211C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8287211c
	goto loc_8287211C;
loc_82872110:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8287211c
	goto loc_8287211C;
loc_82872118:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8287211C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828721a4
	if (!ctx.cr6.eq) goto loc_828721A4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8287214c
	if (ctx.cr6.eq) goto loc_8287214C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8287213c
	if (ctx.cr6.eq) goto loc_8287213C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82872144
	if (ctx.cr6.eq) goto loc_82872144;
loc_8287213C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82872150
	goto loc_82872150;
loc_82872144:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82872150
	goto loc_82872150;
loc_8287214C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82872150:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828721a4
	if (ctx.cr6.eq) goto loc_828721A4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82872178
	if (ctx.cr6.eq) goto loc_82872178;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82872174
	if (ctx.cr6.eq) goto loc_82872174;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x82872178
	if (ctx.cr6.eq) goto loc_82872178;
loc_82872174:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82872178:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x82872188;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828721a4
	if (ctx.cr6.eq) goto loc_828721A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8287219c
	goto loc_8287219C;
loc_82872198:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8287219C:
	// stw r11,84(r21)
	PPC_STORE_U32(ctx.r21.u32 + 84, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_828721A4:
	// stw r30,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// stw r19,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r19.u32);
	// stw r17,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r17.u32);
	// stw r16,13184(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13184, ctx.r16.u32);
	// stw r18,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828721C0"))) PPC_WEAK_FUNC(sub_828721C0);
PPC_FUNC_IMPL(__imp__sub_828721C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x828721C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82872244
	if (ctx.cr6.eq) goto loc_82872244;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82872234
	if (ctx.cr6.eq) goto loc_82872234;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8287224c
	if (ctx.cr6.eq) goto loc_8287224C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8287224c
	goto loc_8287224C;
loc_82872234:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8287224c
	goto loc_8287224C;
loc_82872244:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8287224C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82871da8
	ctx.lr = 0x82872254;
	sub_82871DA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82872268
	if (ctx.cr6.lt) goto loc_82872268;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82872270
	if (ctx.cr6.lt) goto loc_82872270;
loc_82872268:
	// stw r21,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r21.u32);
	// b 0x82872280
	goto loc_82872280;
loc_82872270:
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82872280:
	// stw r25,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82872298"))) PPC_WEAK_FUNC(sub_82872298);
PPC_FUNC_IMPL(__imp__sub_82872298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x828722A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,-29532(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8287232c
	if (ctx.cr6.eq) goto loc_8287232C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82872324
	if (ctx.cr6.eq) goto loc_82872324;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8287231c
	if (ctx.cr6.eq) goto loc_8287231C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82872330
	goto loc_82872330;
loc_8287231C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82872330
	goto loc_82872330;
loc_82872324:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82872330
	goto loc_82872330;
loc_8287232C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82872330:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// beq cr6,0x82872370
	if (ctx.cr6.eq) goto loc_82872370;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82872368
	if (ctx.cr6.eq) goto loc_82872368;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82872360
	if (ctx.cr6.eq) goto loc_82872360;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82872374
	goto loc_82872374;
loc_82872360:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82872374
	goto loc_82872374;
loc_82872368:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82872374
	goto loc_82872374;
loc_82872370:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82872374:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,136(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// blt cr6,0x828723f4
	if (ctx.cr6.lt) goto loc_828723F4;
	// cmpwi cr6,r8,58
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 58, ctx.xer);
	// bge cr6,0x828723f4
	if (!ctx.cr6.lt) goto loc_828723F4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x828723f4
	if (ctx.cr6.lt) goto loc_828723F4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x828723f4
	if (!ctx.cr6.lt) goto loc_828723F4;
	// lwz r10,3520(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3520);
	// addi r11,r22,3516
	ctx.r11.s64 = ctx.r22.s64 + 3516;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828723e8
	if (ctx.cr6.eq) goto loc_828723E8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828723e0
	if (ctx.cr6.eq) goto loc_828723E0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828723ec
	if (!ctx.cr6.eq) goto loc_828723EC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828723ec
	goto loc_828723EC;
loc_828723E0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x828723ec
	goto loc_828723EC;
loc_828723E8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_828723EC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82872458
	if (!ctx.cr6.eq) goto loc_82872458;
loc_828723F4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8287241c
	if (ctx.cr6.eq) goto loc_8287241C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82872414
	if (ctx.cr6.eq) goto loc_82872414;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82872420
	if (ctx.cr6.eq) goto loc_82872420;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82872420
	goto loc_82872420;
loc_82872414:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82872420
	goto loc_82872420;
loc_8287241C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_82872420:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82871da8
	ctx.lr = 0x82872428;
	sub_82871DA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8287243c
	if (ctx.cr6.lt) goto loc_8287243C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82872444
	if (ctx.cr6.lt) goto loc_82872444;
loc_8287243C:
	// stw r21,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r21.u32);
	// b 0x82872474
	goto loc_82872474;
loc_82872444:
	// addi r11,r11,998
	ctx.r11.s64 = ctx.r11.s64 + 998;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// b 0x82872474
	goto loc_82872474;
loc_82872458:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
loc_82872474:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287248C"))) PPC_WEAK_FUNC(sub_8287248C);
PPC_FUNC_IMPL(__imp__sub_8287248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82872490"))) PPC_WEAK_FUNC(sub_82872490);
PPC_FUNC_IMPL(__imp__sub_82872490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82872498;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r31,13556(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// lwz r10,-20812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20812);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r21,13188(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r22,13192(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// lwz r20,13180(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r19,13184(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r18,48(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r5,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r5.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82872548
	if (ctx.cr6.eq) goto loc_82872548;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-25088
	ctx.r10.s64 = -1644167168;
	// ori r4,r10,23659
	ctx.r4.u64 = ctx.r10.u64 | 23659;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82872518;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82872538
	if (ctx.cr6.eq) goto loc_82872538;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82872528;
	sub_82BCD500(ctx, base);
	// lwz r5,13188(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// stw r31,-20812(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20812, ctx.r31.u32);
	// stw r3,-30768(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30768, ctx.r3.u32);
	// b 0x8287254c
	goto loc_8287254C;
loc_82872538:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20812(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20812, ctx.r31.u32);
	// stw r3,-30768(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30768, ctx.r3.u32);
	// b 0x8287254c
	goto loc_8287254C;
loc_82872548:
	// lwz r3,-30768(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30768);
loc_8287254C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x8287258c
	if (ctx.cr6.eq) goto loc_8287258C;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82872584
	if (ctx.cr6.eq) goto loc_82872584;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x8287257c
	if (ctx.cr6.eq) goto loc_8287257C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82872590
	goto loc_82872590;
loc_8287257C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82872590
	goto loc_82872590;
loc_82872584:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82872590
	goto loc_82872590;
loc_8287258C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82872590:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872650
	if (ctx.cr6.eq) goto loc_82872650;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x828725c8
	if (ctx.cr6.eq) goto loc_828725C8;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x828725c0
	if (ctx.cr6.eq) goto loc_828725C0;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x828725b8
	if (ctx.cr6.eq) goto loc_828725B8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x828725cc
	goto loc_828725CC;
loc_828725B8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x828725cc
	goto loc_828725CC;
loc_828725C0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828725cc
	goto loc_828725CC;
loc_828725C8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828725CC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872650
	if (ctx.cr6.eq) goto loc_82872650;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872650
	if (ctx.cr6.eq) goto loc_82872650;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82872650
	if (!ctx.cr6.eq) goto loc_82872650;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x82872618
	if (ctx.cr6.eq) goto loc_82872618;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82872610
	if (ctx.cr6.eq) goto loc_82872610;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x8287261c
	if (ctx.cr6.eq) goto loc_8287261C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x8287261c
	goto loc_8287261C;
loc_82872610:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x8287261c
	goto loc_8287261C;
loc_82872618:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8287261C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r18,8
	ctx.r11.s64 = ctx.r18.s64 + 8;
loc_82872624:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82872648
	if (ctx.cr6.eq) goto loc_82872648;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82872624
	if (ctx.cr6.lt) goto loc_82872624;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8287265c
	goto loc_8287265C;
loc_82872648:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82872658
	if (!ctx.cr6.eq) goto loc_82872658;
loc_82872650:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8287265c
	goto loc_8287265C;
loc_82872658:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8287265C:
	// stw r21,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r21.u32);
	// stw r19,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r19.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r20,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r20.u32);
	// stw r22,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82872678"))) PPC_WEAK_FUNC(sub_82872678);
PPC_FUNC_IMPL(__imp__sub_82872678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82872680;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r21,13192(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r20,13188(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// addi r30,r10,-15760
	ctx.r30.s64 = ctx.r10.s64 + -15760;
	// lwz r19,13180(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r18,13184(r24)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r31.u32);
	// lwz r29,12480(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x828726DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r29,4132
	ctx.r4.s64 = ctx.r29.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x828726E8;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x828726F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r22,496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 496, ctx.r22.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,15828
	ctx.r30.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82872714;
	sub_828097A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872928
	if (ctx.cr6.eq) goto loc_82872928;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bne cr6,0x82872928
	if (!ctx.cr6.eq) goto loc_82872928;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x82872738;
	sub_82BFEA70(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfea70
	ctx.lr = 0x82872744;
	sub_82BFEA70(ctx, base);
	// stw r3,1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1692, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82bfea70
	ctx.lr = 0x82872750;
	sub_82BFEA70(ctx, base);
	// stw r3,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r3.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82bfea70
	ctx.lr = 0x8287275C;
	sub_82BFEA70(ctx, base);
	// stw r3,1688(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1688, ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82bfea70
	ctx.lr = 0x82872768;
	sub_82BFEA70(ctx, base);
	// stw r3,1472(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1472, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r29,r28,1420
	ctx.r29.s64 = ctx.r28.s64 + 1420;
	// addi r31,r28,1876
	ctx.r31.s64 = ctx.r28.s64 + 1876;
	// li r23,10
	ctx.r23.s64 = 10;
loc_8287277C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x8280a870
	ctx.lr = 0x82872788;
	sub_8280A870(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x8280a870
	ctx.lr = 0x828727B0;
	sub_8280A870(ctx, base);
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,-1028(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1028, temp.u32);
	// stfs f10,-1024(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1024, temp.u32);
	// stfs f9,-1020(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1020, temp.u32);
	// bl 0x8280a870
	ctx.lr = 0x828727D8;
	sub_8280A870(ctx, base);
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// lfs f8,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,-580(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + -580, temp.u32);
	// stfs f7,-584(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -584, temp.u32);
	// stfs f6,-576(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + -576, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8287280c
	if (!ctx.cr6.eq) goto loc_8287280C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82872848
	goto loc_82872848;
loc_8287280C:
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82872820
	if (ctx.cr6.lt) goto loc_82872820;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82872848
	goto loc_82872848;
loc_82872820:
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82872834
	if (ctx.cr6.lt) goto loc_82872834;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82872848
	goto loc_82872848;
loc_82872834:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
loc_82872848:
	// stw r11,404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 404, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82872868
	if (!ctx.cr6.eq) goto loc_82872868;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// b 0x828728a8
	goto loc_828728A8;
loc_82872868:
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8287287c
	if (ctx.cr6.lt) goto loc_8287287C;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// b 0x828728a8
	goto loc_828728A8;
loc_8287287C:
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82872890
	if (ctx.cr6.lt) goto loc_82872890;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// b 0x828728a8
	goto loc_828728A8;
loc_82872890:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_828728A8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828728cc
	if (!ctx.cr6.eq) goto loc_828728CC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82872908
	goto loc_82872908;
loc_828728CC:
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x828728e0
	if (ctx.cr6.lt) goto loc_828728E0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82872908
	goto loc_82872908;
loc_828728E0:
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x828728f4
	if (ctx.cr6.lt) goto loc_828728F4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82872908
	goto loc_82872908;
loc_828728F4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
loc_82872908:
	// stw r11,-1348(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1348, ctx.r11.u32);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8287277c
	if (!ctx.cr0.eq) goto loc_8287277C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 496, ctx.r11.u32);
loc_82872928:
	// stw r21,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r21.u32);
	// stw r19,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r19.u32);
	// stw r18,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r18.u32);
	// stw r20,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82872940"))) PPC_WEAK_FUNC(sub_82872940);
PPC_FUNC_IMPL(__imp__sub_82872940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82872948;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,13556(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,-20848(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20848);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r21,13188(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r22,13192(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r20,13180(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r19,13184(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r6,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r6.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828729f4
	if (ctx.cr6.eq) goto loc_828729F4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,25600
	ctx.r10.s64 = 1677721600;
	// ori r4,r10,32
	ctx.r4.u64 = ctx.r10.u64 | 32;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x828729C4;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828729e4
	if (ctx.cr6.eq) goto loc_828729E4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x828729D4;
	sub_82BCD500(ctx, base);
	// lwz r6,13188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r30,-20848(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20848, ctx.r30.u32);
	// stw r3,-30808(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30808, ctx.r3.u32);
	// b 0x828729f8
	goto loc_828729F8;
loc_828729E4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,-20848(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20848, ctx.r30.u32);
	// stw r3,-30808(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30808, ctx.r3.u32);
	// b 0x828729f8
	goto loc_828729F8;
loc_828729F4:
	// lwz r3,-30808(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30808);
loc_828729F8:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,1216(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1216);
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x82872a3c
	if (ctx.cr6.eq) goto loc_82872A3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82872a34
	if (ctx.cr6.eq) goto loc_82872A34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82872a2c
	if (ctx.cr6.eq) goto loc_82872A2C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82872a40
	goto loc_82872A40;
loc_82872A2C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82872a40
	goto loc_82872A40;
loc_82872A34:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82872a40
	goto loc_82872A40;
loc_82872A3C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82872A40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82872a98
	if (ctx.cr6.eq) goto loc_82872A98;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82872a70
	if (ctx.cr6.eq) goto loc_82872A70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82872a68
	if (ctx.cr6.eq) goto loc_82872A68;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82872a74
	if (ctx.cr6.eq) goto loc_82872A74;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82872a74
	goto loc_82872A74;
loc_82872A68:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82872a74
	goto loc_82872A74;
loc_82872A70:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82872A74:
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872a98
	if (ctx.cr6.eq) goto loc_82872A98;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872a98
	if (ctx.cr6.eq) goto loc_82872A98;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82872aa0
	if (ctx.cr6.eq) goto loc_82872AA0;
loc_82872A98:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82872aa4
	goto loc_82872AA4;
loc_82872AA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82872AA4:
	// stw r21,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r21.u32);
	// stw r19,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r19.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r20,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r20.u32);
	// stw r22,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82872AC0"))) PPC_WEAK_FUNC(sub_82872AC0);
PPC_FUNC_IMPL(__imp__sub_82872AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82872AC8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,13556(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,-20880(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20880);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r21,13188(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r22,13192(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r20,13180(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r19,13184(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r6,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r6.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82872b74
	if (ctx.cr6.eq) goto loc_82872B74;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,25600
	ctx.r10.s64 = 1677721600;
	// ori r4,r10,32
	ctx.r4.u64 = ctx.r10.u64 | 32;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82872B44;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82872b64
	if (ctx.cr6.eq) goto loc_82872B64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82872B54;
	sub_82BCD500(ctx, base);
	// lwz r6,13188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// stw r30,-20880(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20880, ctx.r30.u32);
	// stw r3,-30844(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30844, ctx.r3.u32);
	// b 0x82872b78
	goto loc_82872B78;
loc_82872B64:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,-20880(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20880, ctx.r30.u32);
	// stw r3,-30844(r25)
	PPC_STORE_U32(ctx.r25.u32 + -30844, ctx.r3.u32);
	// b 0x82872b78
	goto loc_82872B78;
loc_82872B74:
	// lwz r3,-30844(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30844);
loc_82872B78:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,2052(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2052);
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x82872bbc
	if (ctx.cr6.eq) goto loc_82872BBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82872bb4
	if (ctx.cr6.eq) goto loc_82872BB4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82872bac
	if (ctx.cr6.eq) goto loc_82872BAC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82872bc0
	goto loc_82872BC0;
loc_82872BAC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82872bc0
	goto loc_82872BC0;
loc_82872BB4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82872bc0
	goto loc_82872BC0;
loc_82872BBC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82872BC0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82872c18
	if (ctx.cr6.eq) goto loc_82872C18;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82872bf0
	if (ctx.cr6.eq) goto loc_82872BF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82872be8
	if (ctx.cr6.eq) goto loc_82872BE8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82872bf4
	if (ctx.cr6.eq) goto loc_82872BF4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82872bf4
	goto loc_82872BF4;
loc_82872BE8:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82872bf4
	goto loc_82872BF4;
loc_82872BF0:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82872BF4:
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872c18
	if (ctx.cr6.eq) goto loc_82872C18;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872c18
	if (ctx.cr6.eq) goto loc_82872C18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82872c20
	if (ctx.cr6.eq) goto loc_82872C20;
loc_82872C18:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82872c24
	goto loc_82872C24;
loc_82872C20:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82872C24:
	// stw r21,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r21.u32);
	// stw r19,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r19.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r20,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r20.u32);
	// stw r22,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82872C40"))) PPC_WEAK_FUNC(sub_82872C40);
PPC_FUNC_IMPL(__imp__sub_82872C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82872C48;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r17,13180(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13180);
	// lwz r15,13188(r26)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r16,13192(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13192);
	// lwz r14,13184(r21)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r11.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82872d10
	if (ctx.cr6.eq) goto loc_82872D10;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82872d10
	if (ctx.cr6.eq) goto loc_82872D10;
	// stw r11,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r27,r11,-29532
	ctx.r27.s64 = ctx.r11.s64 + -29532;
	// stw r25,13192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13192, ctx.r25.u32);
	// stw r8,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r8.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r19,r22,568
	ctx.r19.s64 = ctx.r22.s64 + 568;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82872CC4:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82872df0
	if (ctx.cr6.eq) goto loc_82872DF0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r22,288
	ctx.r30.s64 = ctx.r22.s64 + 288;
loc_82872CD8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82872d2c
	if (ctx.cr6.eq) goto loc_82872D2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82872d24
	if (ctx.cr6.eq) goto loc_82872D24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82872d30
	if (!ctx.cr6.eq) goto loc_82872D30;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82872d30
	goto loc_82872D30;
loc_82872D10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r17,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r17.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_82872D24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82872d30
	goto loc_82872D30;
loc_82872D2C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82872D30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872de4
	if (ctx.cr6.eq) goto loc_82872DE4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r6,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82872d78
	if (ctx.cr6.eq) goto loc_82872D78;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82872d70
	if (ctx.cr6.eq) goto loc_82872D70;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82872d7c
	if (!ctx.cr6.eq) goto loc_82872D7C;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// b 0x82872d7c
	goto loc_82872D7C;
loc_82872D70:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82872d7c
	goto loc_82872D7C;
loc_82872D78:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82872D7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r11,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82872de4
	if (ctx.cr6.eq) goto loc_82872DE4;
	// rlwinm r7,r11,0,5,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82872de4
	if (ctx.cr6.eq) goto loc_82872DE4;
	// rlwinm r10,r11,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82872dcc
	if (ctx.cr6.eq) goto loc_82872DCC;
	// rlwinm r11,r10,0,5,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7C00000;
	// rlwinm r11,r11,0,9,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFC7FFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82872dcc
	if (!ctx.cr6.eq) goto loc_82872DCC;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x82bd6e90
	ctx.lr = 0x82872DCC;
	sub_82BD6E90(ctx, base);
loc_82872DCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e52f8
	ctx.lr = 0x82872DD8;
	sub_827E52F8(ctx, base);
	// lwz r8,13188(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82872DE4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// blt cr6,0x82872cd8
	if (ctx.cr6.lt) goto loc_82872CD8;
loc_82872DF0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// blt cr6,0x82872cc4
	if (ctx.cr6.lt) goto loc_82872CC4;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x82bd7068
	ctx.lr = 0x82872E10;
	sub_82BD7068(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r16,13192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13192, ctx.r16.u32);
	// stw r14,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r14.u32);
	// stw r15,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r15.u32);
	// stw r17,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r17.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82872E30"))) PPC_WEAK_FUNC(sub_82872E30);
PPC_FUNC_IMPL(__imp__sub_82872E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82872E38;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13556(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13556);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,-20920(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20920);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r18,13188(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r19,13192(r22)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// lwz r17,13180(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13180);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// lwz r16,13184(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13184);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r3.u32);
	// stw r27,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r27.u32);
	// stw r11,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82872ef0
	if (ctx.cr6.eq) goto loc_82872EF0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,9218
	ctx.r10.s64 = 604110848;
	// ori r4,r10,19480
	ctx.r4.u64 = ctx.r10.u64 | 19480;
	// lwz r6,12480(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x82872EB8;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82872edc
	if (ctx.cr6.eq) goto loc_82872EDC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82872EC8;
	sub_82BCD500(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r27,13188(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// stw r31,-20920(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20920, ctx.r31.u32);
	// stw r23,-30908(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30908, ctx.r23.u32);
	// b 0x82872ef4
	goto loc_82872EF4;
loc_82872EDC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,-20920(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20920, ctx.r31.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r23,-30908(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30908, ctx.r23.u32);
	// b 0x82872ef4
	goto loc_82872EF4;
loc_82872EF0:
	// lwz r23,-30908(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30908);
loc_82872EF4:
	// lwz r11,1616(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r28,129
	ctx.r11.s64 = ctx.r28.s64 + 129;
	// bne cr6,0x82872f08
	if (!ctx.cr6.eq) goto loc_82872F08;
	// addi r11,r28,74
	ctx.r11.s64 = ctx.r28.s64 + 74;
loc_82872F08:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwzx r31,r10,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r30,-29532(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x82872f50
	if (ctx.cr6.eq) goto loc_82872F50;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82872f48
	if (ctx.cr6.eq) goto loc_82872F48;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82872f40
	if (ctx.cr6.eq) goto loc_82872F40;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82872f54
	goto loc_82872F54;
loc_82872F40:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82872f54
	goto loc_82872F54;
loc_82872F48:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82872f54
	goto loc_82872F54;
loc_82872F50:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82872F54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828730f8
	if (ctx.cr6.eq) goto loc_828730F8;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82872f8c
	if (ctx.cr6.eq) goto loc_82872F8C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82872f84
	if (ctx.cr6.eq) goto loc_82872F84;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82872f7c
	if (ctx.cr6.eq) goto loc_82872F7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82872f90
	goto loc_82872F90;
loc_82872F7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82872f90
	goto loc_82872F90;
loc_82872F84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82872f90
	goto loc_82872F90;
loc_82872F8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82872F90:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828073d0
	ctx.lr = 0x82872F98;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82872ff4
	if (!ctx.cr6.eq) goto loc_82872FF4;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82872fd0
	if (ctx.cr6.eq) goto loc_82872FD0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82872fc8
	if (ctx.cr6.eq) goto loc_82872FC8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82872fc0
	if (ctx.cr6.eq) goto loc_82872FC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82872fd4
	goto loc_82872FD4;
loc_82872FC0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82872fd4
	goto loc_82872FD4;
loc_82872FC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82872fd4
	goto loc_82872FD4;
loc_82872FD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82872FD4:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x828073d0
	ctx.lr = 0x82872FDC;
	sub_828073D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// b 0x82872ff8
	goto loc_82872FF8;
loc_82872FF4:
	// li r5,3
	ctx.r5.s64 = 3;
loc_82872FF8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82873088
	if (!ctx.cr6.eq) goto loc_82873088;
	// lwz r11,280(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 280);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828730f8
	if (ctx.cr6.eq) goto loc_828730F8;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8287303c
	if (ctx.cr6.eq) goto loc_8287303C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82873034
	if (ctx.cr6.eq) goto loc_82873034;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8287302c
	if (ctx.cr6.eq) goto loc_8287302C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82873040
	goto loc_82873040;
loc_8287302C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82873040
	goto loc_82873040;
loc_82873034:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82873040
	goto loc_82873040;
loc_8287303C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82873040:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x8287307c
	if (ctx.cr6.eq) goto loc_8287307C;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x82873070
	if (ctx.cr6.eq) goto loc_82873070;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// beq cr6,0x82873064
	if (ctx.cr6.eq) goto loc_82873064;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828730f4
	goto loc_828730F4;
loc_82873064:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828730f4
	goto loc_828730F4;
loc_82873070:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828730f4
	goto loc_828730F4;
loc_8287307C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828730f4
	goto loc_828730F4;
loc_82873088:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828730b8
	if (ctx.cr6.eq) goto loc_828730B8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828730b0
	if (ctx.cr6.eq) goto loc_828730B0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828730a8
	if (ctx.cr6.eq) goto loc_828730A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x828730bc
	goto loc_828730BC;
loc_828730A8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x828730bc
	goto loc_828730BC;
loc_828730B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x828730bc
	goto loc_828730BC;
loc_828730B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828730BC:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x828730ec
	if (ctx.cr6.eq) goto loc_828730EC;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x828730e4
	if (ctx.cr6.eq) goto loc_828730E4;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// beq cr6,0x828730dc
	if (ctx.cr6.eq) goto loc_828730DC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x828730f0
	goto loc_828730F0;
loc_828730DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x828730f0
	goto loc_828730F0;
loc_828730E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828730f0
	goto loc_828730F0;
loc_828730EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828730F0:
	// lwz r6,280(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 280);
loc_828730F4:
	// bl 0x82854580
	ctx.lr = 0x828730F8;
	sub_82854580(ctx, base);
loc_828730F8:
	// stw r19,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r19.u32);
	// stw r17,13180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13180, ctx.r17.u32);
	// stw r16,13184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13184, ctx.r16.u32);
	// stw r18,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82873110"))) PPC_WEAK_FUNC(sub_82873110);
PPC_FUNC_IMPL(__imp__sub_82873110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82873118;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r19,-31942
	ctx.r19.s64 = -2093350912;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lwz r10,13188(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 13188);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r5,13192(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13192);
	// lis r24,-31940
	ctx.r24.s64 = -2093219840;
	// lwz r4,13180(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lis r25,-31940
	ctx.r25.s64 = -2093219840;
	// lwz r23,13184(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13184);
	// lis r26,-31940
	ctx.r26.s64 = -2093219840;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r27,-31940
	ctx.r27.s64 = -2093219840;
	// lwz r31,13556(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13556);
	// lis r28,-31940
	ctx.r28.s64 = -2093219840;
	// lwz r10,-20924(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20924);
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lis r22,-31940
	ctx.r22.s64 = -2093219840;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r3,13192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13192, ctx.r3.u32);
	// stw r21,13188(r19)
	PPC_STORE_U32(ctx.r19.u32 + 13188, ctx.r21.u32);
	// stw r11,13180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82873254
	if (ctx.cr6.eq) goto loc_82873254;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r4,r11,321
	ctx.r4.u64 = ctx.r11.u64 | 321;
	// lwz r6,12480(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12480);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x828731C4;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828731e0
	if (ctx.cr6.eq) goto loc_828731E0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x828731D4;
	sub_82BCD500(ctx, base);
	// lwz r21,13188(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 13188);
	// lwz r6,12480(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12480);
	// b 0x828731e4
	goto loc_828731E4;
loc_828731E0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_828731E4:
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// stw r3,-30916(r22)
	PPC_STORE_U32(ctx.r22.u32 + -30916, ctx.r3.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r4,r11,50526
	ctx.r4.u64 = ctx.r11.u64 | 50526;
	// bl 0x82bcd3b8
	ctx.lr = 0x828731F8;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82873210
	if (ctx.cr6.eq) goto loc_82873210;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bcd500
	ctx.lr = 0x82873208;
	sub_82BCD500(ctx, base);
	// lwz r21,13188(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 13188);
	// b 0x82873214
	goto loc_82873214;
loc_82873210:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82873214:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r23,-30912(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30912, ctx.r23.u32);
	// bl 0x8212c040
	ctx.lr = 0x82873220;
	sub_8212C040(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r31,-20924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20924, ctx.r31.u32);
	// addi r18,r11,288
	ctx.r18.s64 = ctx.r11.s64 + 288;
	// addi r17,r11,700
	ctx.r17.s64 = ctx.r11.s64 + 700;
	// addi r16,r11,388
	ctx.r16.s64 = ctx.r11.s64 + 388;
	// stw r18,-19156(r28)
	PPC_STORE_U32(ctx.r28.u32 + -19156, ctx.r18.u32);
	// addi r15,r11,188
	ctx.r15.s64 = ctx.r11.s64 + 188;
	// stw r17,-19152(r27)
	PPC_STORE_U32(ctx.r27.u32 + -19152, ctx.r17.u32);
	// addi r14,r11,236
	ctx.r14.s64 = ctx.r11.s64 + 236;
	// stw r16,-19148(r26)
	PPC_STORE_U32(ctx.r26.u32 + -19148, ctx.r16.u32);
	// stw r15,-19144(r25)
	PPC_STORE_U32(ctx.r25.u32 + -19144, ctx.r15.u32);
	// stw r14,-19140(r24)
	PPC_STORE_U32(ctx.r24.u32 + -19140, ctx.r14.u32);
	// b 0x8287326c
	goto loc_8287326C;
loc_82873254:
	// lwz r23,-30912(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30912);
	// lwz r18,-19156(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19156);
	// lwz r17,-19152(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19152);
	// lwz r16,-19148(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19148);
	// lwz r15,-19144(r25)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19144);
	// lwz r14,-19140(r24)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19140);
loc_8287326C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addi r5,r10,-29532
	ctx.r5.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// beq cr6,0x828732b0
	if (ctx.cr6.eq) goto loc_828732B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828732a8
	if (ctx.cr6.eq) goto loc_828732A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828732a0
	if (ctx.cr6.eq) goto loc_828732A0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828732b4
	goto loc_828732B4;
loc_828732A0:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x828732b4
	goto loc_828732B4;
loc_828732A8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828732b4
	goto loc_828732B4;
loc_828732B0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828732B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828734d4
	if (ctx.cr6.eq) goto loc_828734D4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828732e4
	if (ctx.cr6.eq) goto loc_828732E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828732dc
	if (ctx.cr6.eq) goto loc_828732DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828732e8
	if (!ctx.cr6.eq) goto loc_828732E8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x828732e8
	goto loc_828732E8;
loc_828732DC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828732e8
	goto loc_828732E8;
loc_828732E4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828732E8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828734d4
	if (ctx.cr6.eq) goto loc_828734D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828734d4
	if (ctx.cr6.eq) goto loc_828734D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,-30916(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30916);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828734d4
	if (!ctx.cr6.eq) goto loc_828734D4;
	// lwz r11,1412(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1412);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8287332c
	if (!ctx.cr6.lt) goto loc_8287332C;
	// stw r31,1412(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1412, ctx.r31.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8287332C:
	// addi r6,r20,568
	ctx.r6.s64 = ctx.r20.s64 + 568;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,3
	ctx.r28.s64 = 3;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82873350
	goto loc_82873350;
loc_82873348:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82873350:
	// lwz r11,-52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -52);
	// addi r7,r6,408
	ctx.r7.s64 = ctx.r6.s64 + 408;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82873380
	if (ctx.cr6.eq) goto loc_82873380;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82873378
	if (ctx.cr6.eq) goto loc_82873378;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82873384
	if (!ctx.cr6.eq) goto loc_82873384;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82873384
	goto loc_82873384;
loc_82873378:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82873384
	goto loc_82873384;
loc_82873380:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82873384:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82873484
	if (ctx.cr6.eq) goto loc_82873484;
	// lwz r11,-848(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -848);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828733b8
	if (ctx.cr6.eq) goto loc_828733B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828733b0
	if (ctx.cr6.eq) goto loc_828733B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828733bc
	if (!ctx.cr6.eq) goto loc_828733BC;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x828733bc
	goto loc_828733BC;
loc_828733B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828733bc
	goto loc_828733BC;
loc_828733B8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828733BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8287347c
	if (!ctx.cr6.eq) goto loc_8287347C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828733d8
	if (!ctx.cr6.eq) goto loc_828733D8;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// b 0x82873488
	goto loc_82873488;
loc_828733D8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828733f0
	if (!ctx.cr6.eq) goto loc_828733F0;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82befab0
	ctx.lr = 0x828733E8;
	sub_82BEFAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828733f8
	if (ctx.cr6.eq) goto loc_828733F8;
loc_828733F0:
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// b 0x828733fc
	goto loc_828733FC;
loc_828733F8:
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
loc_828733FC:
	// lwz r11,560(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 560);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82873488
	if (!ctx.cr6.eq) goto loc_82873488;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x82873438
	if (ctx.cr6.eq) goto loc_82873438;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x82873430
	if (ctx.cr6.eq) goto loc_82873430;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// beq cr6,0x82873428
	if (ctx.cr6.eq) goto loc_82873428;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8287343c
	goto loc_8287343C;
loc_82873428:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x8287343c
	goto loc_8287343C;
loc_82873430:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x8287343c
	goto loc_8287343C;
loc_82873438:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8287343C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,-360(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x8287345c
	if (ctx.cr6.lt) goto loc_8287345C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x82873468
	if (ctx.cr6.lt) goto loc_82873468;
loc_8287345C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,560(r20)
	PPC_STORE_U32(ctx.r20.u32 + 560, ctx.r11.u32);
	// b 0x82873488
	goto loc_82873488;
loc_82873468:
	// addi r11,r11,145
	ctx.r11.s64 = ctx.r11.s64 + 145;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,560(r20)
	PPC_STORE_U32(ctx.r20.u32 + 560, ctx.r11.u32);
	// b 0x82873488
	goto loc_82873488;
loc_8287347C:
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// b 0x82873488
	goto loc_82873488;
loc_82873484:
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
loc_82873488:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82873348
	if (!ctx.cr0.eq) goto loc_82873348;
	// lwz r11,264(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 264);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828734d4
	if (!ctx.cr6.eq) goto loc_828734D4;
	// lwz r11,1684(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1684);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828734d4
	if (!ctx.cr6.eq) goto loc_828734D4;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// stw r11,264(r20)
	PPC_STORE_U32(ctx.r20.u32 + 264, ctx.r11.u32);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// stw r10,268(r20)
	PPC_STORE_U32(ctx.r20.u32 + 268, ctx.r10.u32);
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// stw r9,1684(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1684, ctx.r9.u32);
	// lwz r8,0(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// stw r8,188(r20)
	PPC_STORE_U32(ctx.r20.u32 + 188, ctx.r8.u32);
	// lwz r7,0(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// stw r7,272(r20)
	PPC_STORE_U32(ctx.r20.u32 + 272, ctx.r7.u32);
loc_828734D4:
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,13188(r19)
	PPC_STORE_U32(ctx.r19.u32 + 13188, ctx.r5.u32);
	// stw r7,13184(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13184, ctx.r7.u32);
	// stw r8,13180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13180, ctx.r8.u32);
	// stw r10,13192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13192, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82873508"))) PPC_WEAK_FUNC(sub_82873508);
PPC_FUNC_IMPL(__imp__sub_82873508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82873510;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,-20932(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -20932);
	// lwz r26,13556(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r20,13180(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r18,13188(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r19,13192(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lis r24,-31940
	ctx.r24.s64 = -2093219840;
	// lwz r17,13184(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r6,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r6.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828735d8
	if (ctx.cr6.eq) goto loc_828735D8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,25600
	ctx.r10.s64 = 1677721600;
	// ori r4,r10,36552
	ctx.r4.u64 = ctx.r10.u64 | 36552;
	// lwz r5,12480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd3b8
	ctx.lr = 0x828735A0;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828735c4
	if (ctx.cr6.eq) goto loc_828735C4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82bcd500
	ctx.lr = 0x828735B0;
	sub_82BCD500(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r6,13188(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// stw r26,-20932(r25)
	PPC_STORE_U32(ctx.r25.u32 + -20932, ctx.r26.u32);
	// stw r10,-30924(r24)
	PPC_STORE_U32(ctx.r24.u32 + -30924, ctx.r10.u32);
	// b 0x828735dc
	goto loc_828735DC;
loc_828735C4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r26,-20932(r25)
	PPC_STORE_U32(ctx.r25.u32 + -20932, ctx.r26.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,-30924(r24)
	PPC_STORE_U32(ctx.r24.u32 + -30924, ctx.r10.u32);
	// b 0x828735dc
	goto loc_828735DC;
loc_828735D8:
	// lwz r10,-30924(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30924);
loc_828735DC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828735fc
	if (ctx.cr6.eq) goto loc_828735FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82873604
	if (!ctx.cr6.eq) goto loc_82873604;
loc_828735FC:
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// b 0x82873688
	goto loc_82873688;
loc_82873604:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x82873644
	if (ctx.cr6.eq) goto loc_82873644;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x8287363c
	if (ctx.cr6.eq) goto loc_8287363C;
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// beq cr6,0x82873634
	if (ctx.cr6.eq) goto loc_82873634;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// b 0x82873648
	goto loc_82873648;
loc_82873634:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82873648
	goto loc_82873648;
loc_8287363C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82873648
	goto loc_82873648;
loc_82873644:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82873648:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82873670
	if (ctx.cr6.eq) goto loc_82873670;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82873674
	if (ctx.cr6.eq) goto loc_82873674;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82873668
	if (ctx.cr6.eq) goto loc_82873668;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82873674
	goto loc_82873674;
loc_82873668:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82873674
	goto loc_82873674;
loc_82873670:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82873674:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82851d08
	ctx.lr = 0x82873680;
	sub_82851D08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82873688:
	// stw r18,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r18.u32);
	// stw r17,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r17.u32);
	// stw r20,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r20.u32);
	// stw r19,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r19.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828736A4"))) PPC_WEAK_FUNC(sub_828736A4);
PPC_FUNC_IMPL(__imp__sub_828736A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828736A8"))) PPC_WEAK_FUNC(sub_828736A8);
PPC_FUNC_IMPL(__imp__sub_828736A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x828736B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r17,13180(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13180);
	// lwz r15,13188(r26)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r16,13192(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13192);
	// lwz r14,13184(r21)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r11.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82873778
	if (ctx.cr6.eq) goto loc_82873778;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82873778
	if (ctx.cr6.eq) goto loc_82873778;
	// stw r11,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r27,r11,-29532
	ctx.r27.s64 = ctx.r11.s64 + -29532;
	// stw r25,13192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13192, ctx.r25.u32);
	// stw r8,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r8.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r19,r22,568
	ctx.r19.s64 = ctx.r22.s64 + 568;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_8287372C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82873854
	if (ctx.cr6.eq) goto loc_82873854;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r22,288
	ctx.r30.s64 = ctx.r22.s64 + 288;
loc_82873740:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82873794
	if (ctx.cr6.eq) goto loc_82873794;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8287378c
	if (ctx.cr6.eq) goto loc_8287378C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82873798
	if (!ctx.cr6.eq) goto loc_82873798;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82873798
	goto loc_82873798;
loc_82873778:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r17,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r17.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_8287378C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82873798
	goto loc_82873798;
loc_82873794:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82873798:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82873848
	if (ctx.cr6.eq) goto loc_82873848;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r6,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828737e0
	if (ctx.cr6.eq) goto loc_828737E0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828737d8
	if (ctx.cr6.eq) goto loc_828737D8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x828737e4
	if (!ctx.cr6.eq) goto loc_828737E4;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// b 0x828737e4
	goto loc_828737E4;
loc_828737D8:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x828737e4
	goto loc_828737E4;
loc_828737E0:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_828737E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r11,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82873848
	if (ctx.cr6.eq) goto loc_82873848;
	// rlwinm r7,r11,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82873848
	if (!ctx.cr6.eq) goto loc_82873848;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82873830
	if (ctx.cr6.eq) goto loc_82873830;
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82873830
	if (!ctx.cr6.eq) goto loc_82873830;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x82bd6cd8
	ctx.lr = 0x82873830;
	sub_82BD6CD8(ctx, base);
loc_82873830:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e5410
	ctx.lr = 0x8287383C;
	sub_827E5410(ctx, base);
	// lwz r8,13188(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82873848:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// blt cr6,0x82873740
	if (ctx.cr6.lt) goto loc_82873740;
loc_82873854:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// blt cr6,0x8287372c
	if (ctx.cr6.lt) goto loc_8287372C;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x82bd70e0
	ctx.lr = 0x82873874;
	sub_82BD70E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r16,13192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13192, ctx.r16.u32);
	// stw r14,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r14.u32);
	// stw r15,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r15.u32);
	// stw r17,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r17.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82873894"))) PPC_WEAK_FUNC(sub_82873894);
PPC_FUNC_IMPL(__imp__sub_82873894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82873898"))) PPC_WEAK_FUNC(sub_82873898);
PPC_FUNC_IMPL(__imp__sub_82873898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828738A0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8221ad14
	ctx.lr = 0x828738A8;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f31,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r24,13188(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lfs f2,152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bne cr6,0x82873914
	if (!ctx.cr6.eq) goto loc_82873914;
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82873a10
	goto loc_82873A10;
loc_82873914:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82809390
	ctx.lr = 0x8287391C;
	sub_82809390(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f30,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82809390
	ctx.lr = 0x8287393C;
	sub_82809390(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82809308
	ctx.lr = 0x8287394C;
	sub_82809308(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8287396c
	if (ctx.cr6.eq) goto loc_8287396C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-30464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82873978
	goto loc_82873978;
loc_8287396C:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82873978:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828739a8
	if (ctx.cr6.eq) goto loc_828739A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828739a4
	if (ctx.cr6.eq) goto loc_828739A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828739a8
	if (!ctx.cr6.eq) goto loc_828739A8;
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x828739a8
	goto loc_828739A8;
loc_828739A4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828739A8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804270
	ctx.lr = 0x828739B4;
	sub_82804270(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82128270
	ctx.lr = 0x828739D8;
	sub_82128270(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82808fd8
	ctx.lr = 0x828739EC;
	sub_82808FD8(ctx, base);
	// lfs f12,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f9,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f12,f9,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
loc_82873A10:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r24.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8221ad60
	ctx.lr = 0x82873A50;
	__restfpr_27(ctx, base);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82873A54"))) PPC_WEAK_FUNC(sub_82873A54);
PPC_FUNC_IMPL(__imp__sub_82873A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82873A58"))) PPC_WEAK_FUNC(sub_82873A58);
PPC_FUNC_IMPL(__imp__sub_82873A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82873A60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13180(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13184(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r11.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82873ae4
	if (ctx.cr6.eq) goto loc_82873AE4;
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x82bd7068
	ctx.lr = 0x82873AC4;
	sub_82BD7068(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r23,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// stw r26,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_82873AE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r26.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

