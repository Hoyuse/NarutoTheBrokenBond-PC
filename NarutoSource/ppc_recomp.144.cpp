#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828560C8"))) PPC_WEAK_FUNC(sub_828560C8);
PPC_FUNC_IMPL(__imp__sub_828560C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828560D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r25,13192(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r24,13188(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r30.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8285621c
	if (ctx.cr6.eq) goto loc_8285621C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bef368
	ctx.lr = 0x82856128;
	sub_82BEF368(ctx, base);
	// lfs f0,1092(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x828561bc
	if (ctx.cr6.gt) goto loc_828561BC;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82856180
	if (!ctx.cr6.lt) goto loc_82856180;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82856154
	if (!ctx.cr6.gt) goto loc_82856154;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82856154:
	// bl 0x82855308
	ctx.lr = 0x82856158;
	sub_82855308(ctx, base);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82856180
	if (ctx.cr6.eq) goto loc_82856180;
	// lfs f0,1516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,2376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x828561f8
	if (!ctx.cr6.lt) goto loc_828561F8;
loc_8285617C:
	// stfs f0,2768(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2768, temp.u32);
loc_82856180:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bef368
	ctx.lr = 0x82856188;
	sub_82BEF368(ctx, base);
	// lfs f0,1092(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8285621c
	if (!ctx.cr6.eq) goto loc_8285621C;
	// lwz r10,1096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82856200
	if (!ctx.cr6.eq) goto loc_82856200;
	// lwz r10,1100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8285621c
	if (ctx.cr6.eq) goto loc_8285621C;
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
	// b 0x8285621c
	goto loc_8285621C;
loc_828561BC:
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x828561d4
	if (!ctx.cr6.lt) goto loc_828561D4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_828561D4:
	// bl 0x82855308
	ctx.lr = 0x828561D8;
	sub_82855308(ctx, base);
	// lfs f0,1088(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82856180
	if (ctx.cr6.eq) goto loc_82856180;
	// lfs f12,1516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8285617c
	if (ctx.cr6.gt) goto loc_8285617C;
loc_828561F8:
	// stfs f13,2768(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2768, temp.u32);
	// b 0x82856180
	goto loc_82856180;
loc_82856200:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,1088(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2376, temp.u32);
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// stw r10,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828232b8
	ctx.lr = 0x8285621C;
	sub_828232B8(ctx, base);
loc_8285621C:
	// stw r25,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82856234"))) PPC_WEAK_FUNC(sub_82856234);
PPC_FUNC_IMPL(__imp__sub_82856234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82856238"))) PPC_WEAK_FUNC(sub_82856238);
PPC_FUNC_IMPL(__imp__sub_82856238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82856240;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
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
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lwz r10,1096(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82856368
	if (!ctx.cr6.eq) goto loc_82856368;
	// lwz r11,1100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82856368
	if (!ctx.cr6.eq) goto loc_82856368;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,2372(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-4472
	ctx.r11.s64 = ctx.r11.s64 + -4472;
	// lfs f11,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x828562c8
	if (!ctx.cr6.eq) goto loc_828562C8;
	// lfs f13,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x8285635c
	if (ctx.cr6.gt) goto loc_8285635C;
loc_828562C8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x828562e4
	if (!ctx.cr6.gt) goto loc_828562E4;
	// lfs f13,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x828562e4
	if (!ctx.cr6.lt) goto loc_828562E4;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bne cr6,0x8285633c
	if (!ctx.cr6.eq) goto loc_8285633C;
loc_828562E4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82856300
	if (!ctx.cr6.gt) goto loc_82856300;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f11,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-27236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82856334
	if (!ctx.cr6.gt) goto loc_82856334;
loc_82856300:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82856314
	if (!ctx.cr6.lt) goto loc_82856314;
	// lfs f13,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82856328
	if (ctx.cr6.gt) goto loc_82856328;
loc_82856314:
	// lfs f13,1512(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82856368
	if (ctx.cr6.lt) goto loc_82856368;
loc_82856328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828232b8
	ctx.lr = 0x82856330;
	sub_828232B8(ctx, base);
	// b 0x82856368
	goto loc_82856368;
loc_82856334:
	// lfs f1,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82856360
	goto loc_82856360;
loc_8285633C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bef368
	ctx.lr = 0x82856344;
	sub_82BEF368(ctx, base);
	// lfs f0,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82856360
	goto loc_82856360;
loc_8285635C:
	// lfs f1,2368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2368);
	ctx.f1.f64 = double(temp.f32);
loc_82856360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82822f40
	ctx.lr = 0x82856368;
	sub_82822F40(ctx, base);
loc_82856368:
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82856380"))) PPC_WEAK_FUNC(sub_82856380);
PPC_FUNC_IMPL(__imp__sub_82856380) {
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
	// lwz r11,2100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828563d0
	if (ctx.cr6.eq) goto loc_828563D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828563c8
	if (ctx.cr6.eq) goto loc_828563C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828563c0
	if (ctx.cr6.eq) goto loc_828563C0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828563d4
	goto loc_828563D4;
loc_828563C0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828563d4
	goto loc_828563D4;
loc_828563C8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828563d4
	goto loc_828563D4;
loc_828563D0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828563D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828563e8
	if (!ctx.cr6.eq) goto loc_828563E8;
	// lwz r11,1760(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1760);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828563E8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856410
	if (ctx.cr6.eq) goto loc_82856410;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856408
	if (ctx.cr6.eq) goto loc_82856408;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82856414
	if (!ctx.cr6.eq) goto loc_82856414;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82856414
	goto loc_82856414;
loc_82856408:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82856414
	goto loc_82856414;
loc_82856410:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82856414:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285642C"))) PPC_WEAK_FUNC(sub_8285642C);
PPC_FUNC_IMPL(__imp__sub_8285642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82856430"))) PPC_WEAK_FUNC(sub_82856430);
PPC_FUNC_IMPL(__imp__sub_82856430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82856438;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad18
	ctx.lr = 0x82856440;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285649c
	if (ctx.cr6.eq) goto loc_8285649C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856494
	if (ctx.cr6.eq) goto loc_82856494;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828564a0
	if (!ctx.cr6.eq) goto loc_828564A0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828564a0
	goto loc_828564A0;
loc_82856494:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828564a0
	goto loc_828564A0;
loc_8285649C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828564A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828564fc
	if (ctx.cr6.eq) goto loc_828564FC;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828564dc
	if (ctx.cr6.eq) goto loc_828564DC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828564d4
	if (ctx.cr6.eq) goto loc_828564D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828564cc
	if (ctx.cr6.eq) goto loc_828564CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828564e0
	goto loc_828564E0;
loc_828564CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828564e0
	goto loc_828564E0;
loc_828564D4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828564e0
	goto loc_828564E0;
loc_828564DC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828564E0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,348(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 348);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82856598
	if (!ctx.cr6.eq) goto loc_82856598;
loc_828564FC:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856528
	if (ctx.cr6.eq) goto loc_82856528;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285652c
	if (ctx.cr6.eq) goto loc_8285652C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82856520
	if (ctx.cr6.eq) goto loc_82856520;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8285652c
	goto loc_8285652C;
loc_82856520:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8285652c
	goto loc_8285652C;
loc_82856528:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8285652C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8281d508
	ctx.lr = 0x82856534;
	sub_8281D508(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82856584
	if (ctx.cr6.eq) goto loc_82856584;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856570
	if (ctx.cr6.eq) goto loc_82856570;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82856588
	if (!ctx.cr6.eq) goto loc_82856588;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8281d508
	ctx.lr = 0x8285656C;
	sub_8281D508(ctx, base);
	// b 0x82856614
	goto loc_82856614;
loc_82856570:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8281d508
	ctx.lr = 0x82856580;
	sub_8281D508(ctx, base);
	// b 0x82856614
	goto loc_82856614;
loc_82856584:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82856588:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8281d508
	ctx.lr = 0x82856594;
	sub_8281D508(ctx, base);
	// b 0x82856614
	goto loc_82856614;
loc_82856598:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828565c0
	if (ctx.cr6.eq) goto loc_828565C0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828565c4
	if (ctx.cr6.eq) goto loc_828565C4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828565b8
	if (ctx.cr6.eq) goto loc_828565B8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x828565c4
	goto loc_828565C4;
loc_828565B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828565c4
	goto loc_828565C4;
loc_828565C0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_828565C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x828565CC;
	sub_82804410(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82856604
	if (ctx.cr6.eq) goto loc_82856604;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828565fc
	if (ctx.cr6.eq) goto loc_828565FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82856608
	if (!ctx.cr6.eq) goto loc_82856608;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82856608
	goto loc_82856608;
loc_828565FC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82856608
	goto loc_82856608;
loc_82856604:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82856608:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82856614;
	sub_82804410(ctx, base);
loc_82856614:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-30468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30468);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bgt cr6,0x82856640
	if (ctx.cr6.gt) goto loc_82856640;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x8285668c
	goto loc_8285668C;
loc_82856640:
	// fsubs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f12,f11
	ctx.f12.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x82856668
	if (ctx.cr6.gt) goto loc_82856668;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// b 0x8285668c
	goto loc_8285668C;
loc_82856668:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f11,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fadds f0,f9,f30
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// fadds f13,f8,f29
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
loc_8285668C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad64
	ctx.lr = 0x828566BC;
	__restfpr_28(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828566C0"))) PPC_WEAK_FUNC(sub_828566C0);
PPC_FUNC_IMPL(__imp__sub_828566C0) {
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
	// lwz r11,2100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856710
	if (ctx.cr6.eq) goto loc_82856710;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856708
	if (ctx.cr6.eq) goto loc_82856708;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82856700
	if (ctx.cr6.eq) goto loc_82856700;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82856714
	goto loc_82856714;
loc_82856700:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82856714
	goto loc_82856714;
loc_82856708:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82856714
	goto loc_82856714;
loc_82856710:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82856714:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82856728
	if (!ctx.cr6.eq) goto loc_82856728;
	// lwz r11,1764(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1764);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82856728:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856750
	if (ctx.cr6.eq) goto loc_82856750;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856748
	if (ctx.cr6.eq) goto loc_82856748;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82856754
	if (!ctx.cr6.eq) goto loc_82856754;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82856754
	goto loc_82856754;
loc_82856748:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82856754
	goto loc_82856754;
loc_82856750:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82856754:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285676C"))) PPC_WEAK_FUNC(sub_8285676C);
PPC_FUNC_IMPL(__imp__sub_8285676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82856770"))) PPC_WEAK_FUNC(sub_82856770);
PPC_FUNC_IMPL(__imp__sub_82856770) {
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
	// lwz r11,2100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828567c0
	if (ctx.cr6.eq) goto loc_828567C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828567b8
	if (ctx.cr6.eq) goto loc_828567B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828567b0
	if (ctx.cr6.eq) goto loc_828567B0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828567c4
	goto loc_828567C4;
loc_828567B0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828567c4
	goto loc_828567C4;
loc_828567B8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828567c4
	goto loc_828567C4;
loc_828567C0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828567C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828567d8
	if (!ctx.cr6.eq) goto loc_828567D8;
	// lwz r11,1760(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1760);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828567D8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856800
	if (ctx.cr6.eq) goto loc_82856800;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828567f8
	if (ctx.cr6.eq) goto loc_828567F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82856804
	if (!ctx.cr6.eq) goto loc_82856804;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82856804
	goto loc_82856804;
loc_828567F8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82856804
	goto loc_82856804;
loc_82856800:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82856804:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285681C"))) PPC_WEAK_FUNC(sub_8285681C);
PPC_FUNC_IMPL(__imp__sub_8285681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82856820"))) PPC_WEAK_FUNC(sub_82856820);
PPC_FUNC_IMPL(__imp__sub_82856820) {
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
	// lwz r11,2100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856870
	if (ctx.cr6.eq) goto loc_82856870;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856868
	if (ctx.cr6.eq) goto loc_82856868;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82856860
	if (ctx.cr6.eq) goto loc_82856860;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82856874
	goto loc_82856874;
loc_82856860:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82856874
	goto loc_82856874;
loc_82856868:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82856874
	goto loc_82856874;
loc_82856870:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82856874:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82856888
	if (!ctx.cr6.eq) goto loc_82856888;
	// lwz r11,1764(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1764);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82856888:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828568b0
	if (ctx.cr6.eq) goto loc_828568B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828568a8
	if (ctx.cr6.eq) goto loc_828568A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828568b4
	if (!ctx.cr6.eq) goto loc_828568B4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828568b4
	goto loc_828568B4;
loc_828568A8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828568b4
	goto loc_828568B4;
loc_828568B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828568B4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828568CC"))) PPC_WEAK_FUNC(sub_828568CC);
PPC_FUNC_IMPL(__imp__sub_828568CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828568D0"))) PPC_WEAK_FUNC(sub_828568D0);
PPC_FUNC_IMPL(__imp__sub_828568D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828568D8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad0c
	ctx.lr = 0x828568E0;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lfs f30,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// lfs f31,-30868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30868);
	ctx.f31.f64 = double(temp.f32);
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,48(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,2100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856954
	if (ctx.cr6.eq) goto loc_82856954;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285694c
	if (ctx.cr6.eq) goto loc_8285694C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82856944
	if (ctx.cr6.eq) goto loc_82856944;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82856958
	goto loc_82856958;
loc_82856944:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82856958
	goto loc_82856958;
loc_8285694C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82856958
	goto loc_82856958;
loc_82856954:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82856958:
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f25,-4368(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4368);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,29760(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29760);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x82856b14
	if (ctx.cr6.eq) goto loc_82856B14;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856998
	if (ctx.cr6.eq) goto loc_82856998;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856990
	if (ctx.cr6.eq) goto loc_82856990;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285699c
	if (!ctx.cr6.eq) goto loc_8285699C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285699c
	goto loc_8285699C;
loc_82856990:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285699c
	goto loc_8285699C;
loc_82856998:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285699C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f28,396(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 396);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// ble cr6,0x82856b14
	if (!ctx.cr6.gt) goto loc_82856B14;
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828569e0
	if (ctx.cr6.eq) goto loc_828569E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828569e4
	if (ctx.cr6.eq) goto loc_828569E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828569d8
	if (ctx.cr6.eq) goto loc_828569D8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x828569e4
	goto loc_828569E4;
loc_828569D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828569e4
	goto loc_828569E4;
loc_828569E0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_828569E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8281d508
	ctx.lr = 0x828569EC;
	sub_8281D508(ctx, base);
	// lwz r3,904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82856a18
	if (ctx.cr6.eq) goto loc_82856A18;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82856a10
	if (ctx.cr6.eq) goto loc_82856A10;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82856a1c
	if (!ctx.cr6.eq) goto loc_82856A1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82856a1c
	goto loc_82856A1C;
loc_82856A10:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82856a1c
	goto loc_82856A1C;
loc_82856A18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82856A1C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8281d508
	ctx.lr = 0x82856A24;
	sub_8281D508(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f28,f25
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f25.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,2100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2100);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fsubs f0,f1,f25
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f25.f64));
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fsel f12,f13,f13,f30
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f30.f64;
	// fsubs f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// fsel f13,f11,f26,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f26.f64 : ctx.f12.f64;
	// beq cr6,0x82856aac
	if (ctx.cr6.eq) goto loc_82856AAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856aa4
	if (ctx.cr6.eq) goto loc_82856AA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82856a9c
	if (ctx.cr6.eq) goto loc_82856A9C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82856ab0
	goto loc_82856AB0;
loc_82856A9C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82856ab0
	goto loc_82856AB0;
loc_82856AA4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82856ab0
	goto loc_82856AB0;
loc_82856AAC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82856AB0:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,212(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82856ae8
	if (ctx.cr6.eq) goto loc_82856AE8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856ae0
	if (ctx.cr6.eq) goto loc_82856AE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82856aec
	if (!ctx.cr6.eq) goto loc_82856AEC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82856aec
	goto loc_82856AEC;
loc_82856AE0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82856aec
	goto loc_82856AEC;
loc_82856AE8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82856AEC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fmuls f29,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f12,248(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f27,f13,f12
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fsel f31,f9,f31,f10
	ctx.f31.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
loc_82856B14:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82856b40
	if (!ctx.cr6.eq) goto loc_82856B40;
	// fneg f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lfs f13,1320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// fsel f9,f10,f29,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f29.f64 : ctx.f11.f64;
	// stfs f9,1320(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1320, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82856B40:
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82856b6c
	if (ctx.cr6.eq) goto loc_82856B6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82856b70
	if (ctx.cr6.eq) goto loc_82856B70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82856b64
	if (ctx.cr6.eq) goto loc_82856B64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82856b70
	goto loc_82856B70;
loc_82856B64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82856b70
	goto loc_82856B70;
loc_82856B6C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82856B70:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8281d4a8
	ctx.lr = 0x82856B78;
	sub_8281D4A8(ctx, base);
	// lfs f0,2456(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,2452(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2452);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,2448(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2448);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,27476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f7,f8,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bgt cr6,0x82856bc8
	if (ctx.cr6.gt) goto loc_82856BC8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82856bc0
	if (ctx.cr6.lt) goto loc_82856BC0;
	// lfs f13,1320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82856bcc
	goto loc_82856BCC;
loc_82856BC0:
	// fneg f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// b 0x82856bcc
	goto loc_82856BCC;
loc_82856BC8:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
loc_82856BCC:
	// lfs f0,1320(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	ctx.f0.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f10,f13,f30,f12
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f8,f0,f30,f12
	ctx.f8.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fsel f7,f11,f10,f26
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f10.f64 : ctx.f26.f64;
	// fsel f6,f9,f8,f26
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f8.f64 : ctx.f26.f64;
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// beq cr6,0x82856bf4
	if (ctx.cr6.eq) goto loc_82856BF4;
	// fmuls f31,f31,f25
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
loc_82856BF4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f12,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// bgt cr6,0x82856c30
	if (ctx.cr6.gt) goto loc_82856C30;
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsel f9,f10,f11,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// stfs f7,1320(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1320, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad58
	ctx.lr = 0x82856C2C;
	__restfpr_25(ctx, base);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82856C30:
	// fmadds f11,f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f9,f10,f11,f0
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f7,f8,f13,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfs f7,1320(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1320, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad58
	ctx.lr = 0x82856C54;
	__restfpr_25(ctx, base);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82856C58"))) PPC_WEAK_FUNC(sub_82856C58);
PPC_FUNC_IMPL(__imp__sub_82856C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82856C60;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r23,13184(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
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
	// bl 0x82804410
	ctx.lr = 0x82856CAC;
	sub_82804410(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,2476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82856d1c
	if (ctx.cr6.eq) goto loc_82856D1C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x82856D04;
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
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82856D1C:
	// lwz r11,2040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// addi r3,r31,2032
	ctx.r3.s64 = ctx.r31.s64 + 2032;
	// lwz r10,2036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82856d84
	if (ctx.cr6.eq) goto loc_82856D84;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82856d84
	if (ctx.cr6.eq) goto loc_82856D84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8212c210
	ctx.lr = 0x82856D80;
	sub_8212C210(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82856D84:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-29464(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29464);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82856da8
	if (!ctx.cr6.gt) goto loc_82856DA8;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// b 0x82856dac
	goto loc_82856DAC;
loc_82856DA8:
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
loc_82856DAC:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f0,-29468(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82856dc8
	if (!ctx.cr6.lt) goto loc_82856DC8;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// b 0x82856dcc
	goto loc_82856DCC;
loc_82856DC8:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82856DCC:
	// stw r26,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82856DE8"))) PPC_WEAK_FUNC(sub_82856DE8);
PPC_FUNC_IMPL(__imp__sub_82856DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82856DF0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lfs f0,26592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26592);
	ctx.f0.f64 = double(temp.f32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,-4012(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// stw r30,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r30.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r30,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r30.u32);
	// addi r8,r31,1072
	ctx.r8.s64 = ctx.r31.s64 + 1072;
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// addi r4,r31,780
	ctx.r4.s64 = ctx.r31.s64 + 780;
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f13,1072(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// stfs f12,1076(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// stfs f11,1080(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,780(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 780, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,784(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,788(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// stfs f0,2352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2352, temp.u32);
	// lwz r7,1072(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82856ecc
	if (ctx.cr6.gt) goto loc_82856ECC;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82856ecc
	if (ctx.cr6.gt) goto loc_82856ECC;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82856f54
	if (!ctx.cr6.gt) goto loc_82856F54;
loc_82856ECC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82808cf8
	ctx.lr = 0x82856ED4;
	sub_82808CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82856f54
	if (!ctx.cr6.eq) goto loc_82856F54;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lfs f30,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8212c210
	ctx.lr = 0x82856EFC;
	sub_8212C210(ctx, base);
	// lfs f13,2352(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stfs f0,804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 804, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x82856f40
	if (ctx.cr6.eq) goto loc_82856F40;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82856f30
	if (ctx.cr6.eq) goto loc_82856F30;
	// lfs f30,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
loc_82856F30:
	// fdivs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,1300(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
loc_82856F40:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82856f54
	if (ctx.cr6.eq) goto loc_82856F54;
	// lfs f13,1300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f12,1300(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
loc_82856F54:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82856F74"))) PPC_WEAK_FUNC(sub_82856F74);
PPC_FUNC_IMPL(__imp__sub_82856F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82856F78"))) PPC_WEAK_FUNC(sub_82856F78);
PPC_FUNC_IMPL(__imp__sub_82856F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82856F80;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r25,13192(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r11.u32);
	// lwz r22,13184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// lwz r28,48(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82bef8d8
	ctx.lr = 0x82856FD4;
	sub_82BEF8D8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r25,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// lfs f0,-4008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8285701c
	if (ctx.cr6.lt) goto loc_8285701C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,72(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f12,72(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_8285701C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,72(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,72(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285703C"))) PPC_WEAK_FUNC(sub_8285703C);
PPC_FUNC_IMPL(__imp__sub_8285703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82857040"))) PPC_WEAK_FUNC(sub_82857040);
PPC_FUNC_IMPL(__imp__sub_82857040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82857048;
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
	// bl 0x82855308
	ctx.lr = 0x82857088;
	sub_82855308(ctx, base);
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

__attribute__((alias("__imp__sub_828570A0"))) PPC_WEAK_FUNC(sub_828570A0);
PPC_FUNC_IMPL(__imp__sub_828570A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828570A8;
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13192(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
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
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,2468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2468);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82855308
	ctx.lr = 0x828570F0;
	sub_82855308(ctx, base);
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

__attribute__((alias("__imp__sub_82857108"))) PPC_WEAK_FUNC(sub_82857108);
PPC_FUNC_IMPL(__imp__sub_82857108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82857110;
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
	ctx.lr = 0x8285716C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82857178;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82857184;
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
	ctx.lr = 0x82857198;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828571c0
	if (ctx.cr6.eq) goto loc_828571C0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828571c0
	if (!ctx.cr6.eq) goto loc_828571C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x828571BC;
	sub_82BFEA70(ctx, base);
	// stw r3,136(r20)
	PPC_STORE_U32(ctx.r20.u32 + 136, ctx.r3.u32);
loc_828571C0:
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

__attribute__((alias("__imp__sub_828571D8"))) PPC_WEAK_FUNC(sub_828571D8);
PPC_FUNC_IMPL(__imp__sub_828571D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828571E0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8285724c
	if (ctx.cr6.eq) goto loc_8285724C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82857244
	if (ctx.cr6.eq) goto loc_82857244;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8285723c
	if (ctx.cr6.eq) goto loc_8285723C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82857250
	goto loc_82857250;
loc_8285723C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82857250
	goto loc_82857250;
loc_82857244:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82857250
	goto loc_82857250;
loc_8285724C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82857250:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8285728c
	if (!ctx.cr6.eq) goto loc_8285728C;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82857584
	goto loc_82857584;
loc_8285728C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828572bc
	if (ctx.cr6.eq) goto loc_828572BC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828572b4
	if (ctx.cr6.eq) goto loc_828572B4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828572ac
	if (ctx.cr6.eq) goto loc_828572AC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828572c0
	goto loc_828572C0;
loc_828572AC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828572c0
	goto loc_828572C0;
loc_828572B4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828572c0
	goto loc_828572C0;
loc_828572BC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828572C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828572d0
	if (ctx.cr6.eq) goto loc_828572D0;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828572d4
	goto loc_828572D4;
loc_828572D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828572D4:
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82747a18
	ctx.lr = 0x828572E0;
	sub_82747A18(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82857554
	if (ctx.cr6.eq) goto loc_82857554;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828574f4
	if (ctx.cr6.eq) goto loc_828574F4;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x8285734c
	if (ctx.cr6.eq) goto loc_8285734C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82857344
	if (ctx.cr6.eq) goto loc_82857344;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82857350
	if (!ctx.cr6.eq) goto loc_82857350;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x82857350
	goto loc_82857350;
loc_82857344:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// b 0x82857350
	goto loc_82857350;
loc_8285734C:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82857350:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82804410
	ctx.lr = 0x8285735C;
	sub_82804410(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828573ac
	if (ctx.cr6.eq) goto loc_828573AC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828573a4
	if (ctx.cr6.eq) goto loc_828573A4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828573b0
	if (!ctx.cr6.eq) goto loc_828573B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828573b0
	goto loc_828573B0;
loc_828573A4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828573b0
	goto loc_828573B0;
loc_828573AC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828573B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x828091b0
	ctx.lr = 0x828573BC;
	sub_828091B0(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
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
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82857400
	if (ctx.cr6.eq) goto loc_82857400;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828573f8
	if (ctx.cr6.eq) goto loc_828573F8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82857404
	if (!ctx.cr6.eq) goto loc_82857404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82857404
	goto loc_82857404;
loc_828573F8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82857404
	goto loc_82857404;
loc_82857400:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82857404:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x828091b0
	ctx.lr = 0x82857410;
	sub_828091B0(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82857484
	if (ctx.cr6.eq) goto loc_82857484;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857470
	if (ctx.cr6.eq) goto loc_82857470;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285745c
	if (ctx.cr6.eq) goto loc_8285745C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82857450
	if (ctx.cr6.eq) goto loc_82857450;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8285748c
	if (ctx.cr6.eq) goto loc_8285748C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82857494
	if (!ctx.cr6.eq) goto loc_82857494;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82857494
	goto loc_82857494;
loc_82857450:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82857494
	goto loc_82857494;
loc_8285745C:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82857494
	goto loc_82857494;
loc_82857470:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82857494
	goto loc_82857494;
loc_82857484:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8285748C:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82857494:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828574c0
	if (ctx.cr6.eq) goto loc_828574C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828574b8
	if (ctx.cr6.eq) goto loc_828574B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828574c4
	if (!ctx.cr6.eq) goto loc_828574C4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828574c4
	goto loc_828574C4;
loc_828574B8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828574c4
	goto loc_828574C4;
loc_828574C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828574C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828574d4
	if (ctx.cr6.eq) goto loc_828574D4;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828574d8
	goto loc_828574D8;
loc_828574D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828574D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82747a18
	ctx.lr = 0x828574E4;
	sub_82747A18(ctx, base);
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
	// b 0x82857578
	goto loc_82857578;
loc_828574F4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8285751c
	if (ctx.cr6.eq) goto loc_8285751C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82857514
	if (ctx.cr6.eq) goto loc_82857514;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82857520
	if (!ctx.cr6.eq) goto loc_82857520;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x82857520
	goto loc_82857520;
loc_82857514:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// b 0x82857520
	goto loc_82857520;
loc_8285751C:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82857520:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82804410
	ctx.lr = 0x8285752C;
	sub_82804410(ctx, base);
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
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// b 0x82857578
	goto loc_82857578;
loc_82857554:
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
loc_82857578:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82857584:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828575B0"))) PPC_WEAK_FUNC(sub_828575B0);
PPC_FUNC_IMPL(__imp__sub_828575B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x828575B8;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r17,13188(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// lwz r18,13192(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13192);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r16,13180(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13180);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r15,13184(r21)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13184);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13192, ctx.r31.u32);
	// stw r27,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r27.u32);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r11.u32);
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82857654
	if (!ctx.cr6.gt) goto loc_82857654;
	// bl 0x82bfc538
	ctx.lr = 0x82857620;
	sub_82BFC538(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82857650
	if (ctx.cr6.gt) goto loc_82857650;
	// stw r28,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82857650
	if (!ctx.cr6.eq) goto loc_82857650;
	// stw r28,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r28.u32);
loc_82857650:
	// lwz r27,13188(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
loc_82857654:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828579ac
	if (ctx.cr6.eq) goto loc_828579AC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x828579ac
	if (ctx.cr6.eq) goto loc_828579AC;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// addi r25,r11,-29532
	ctx.r25.s64 = ctx.r11.s64 + -29532;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// beq cr6,0x828576bc
	if (ctx.cr6.eq) goto loc_828576BC;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x828576b4
	if (ctx.cr6.eq) goto loc_828576B4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x828576ac
	if (ctx.cr6.eq) goto loc_828576AC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x828576c0
	goto loc_828576C0;
loc_828576AC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x828576c0
	goto loc_828576C0;
loc_828576B4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828576c0
	goto loc_828576C0;
loc_828576BC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828576C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828579ac
	if (ctx.cr6.eq) goto loc_828579AC;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828579a8
	if (ctx.cr6.eq) goto loc_828579A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857874
	if (ctx.cr6.eq) goto loc_82857874;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828579ac
	if (!ctx.cr6.eq) goto loc_828579AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828073d0
	ctx.lr = 0x828576F0;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82857744
	if (ctx.cr6.eq) goto loc_82857744;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x82857724
	if (ctx.cr6.eq) goto loc_82857724;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82857720
	if (ctx.cr6.eq) goto loc_82857720;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82857718
	if (ctx.cr6.eq) goto loc_82857718;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x82857724
	goto loc_82857724;
loc_82857718:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82857724
	goto loc_82857724;
loc_82857720:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82857724:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d6628
	ctx.lr = 0x82857734;
	sub_827D6628(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828579a8
	if (!ctx.cr6.eq) goto loc_828579A8;
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82857744:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828579ac
	if (ctx.cr6.eq) goto loc_828579AC;
	// addi r30,r30,304
	ctx.r30.s64 = ctx.r30.s64 + 304;
loc_82857754:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82857788
	if (ctx.cr6.eq) goto loc_82857788;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82857780
	if (ctx.cr6.eq) goto loc_82857780;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82857778
	if (ctx.cr6.eq) goto loc_82857778;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285778c
	goto loc_8285778C;
loc_82857778:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8285778c
	goto loc_8285778C;
loc_82857780:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285778c
	goto loc_8285778C;
loc_82857788:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8285778C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82857860
	if (ctx.cr6.eq) goto loc_82857860;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828577c4
	if (ctx.cr6.eq) goto loc_828577C4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828577bc
	if (ctx.cr6.eq) goto loc_828577BC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828577b4
	if (ctx.cr6.eq) goto loc_828577B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828577c8
	goto loc_828577C8;
loc_828577B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x828577c8
	goto loc_828577C8;
loc_828577BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828577c8
	goto loc_828577C8;
loc_828577C4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_828577C8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x828073d0
	ctx.lr = 0x828577D0;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82857860
	if (ctx.cr6.eq) goto loc_82857860;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x82857808
	if (ctx.cr6.eq) goto loc_82857808;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82857800
	if (ctx.cr6.eq) goto loc_82857800;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x828577f8
	if (ctx.cr6.eq) goto loc_828577F8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8285780c
	goto loc_8285780C;
loc_828577F8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8285780c
	goto loc_8285780C;
loc_82857800:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285780c
	goto loc_8285780C;
loc_82857808:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8285780C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8285783c
	if (ctx.cr6.eq) goto loc_8285783C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82857834
	if (ctx.cr6.eq) goto loc_82857834;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285782c
	if (ctx.cr6.eq) goto loc_8285782C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82857840
	goto loc_82857840;
loc_8285782C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82857840
	goto loc_82857840;
loc_82857834:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82857840
	goto loc_82857840;
loc_8285783C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82857840:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x827d6628
	ctx.lr = 0x82857850;
	sub_827D6628(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828579a8
	if (!ctx.cr6.eq) goto loc_828579A8;
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82857860:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// blt cr6,0x82857754
	if (ctx.cr6.lt) goto loc_82857754;
	// b 0x828579ac
	goto loc_828579AC;
loc_82857874:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x828578a4
	if (ctx.cr6.eq) goto loc_828578A4;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x8285789c
	if (ctx.cr6.eq) goto loc_8285789C;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82857894
	if (ctx.cr6.eq) goto loc_82857894;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x828578a8
	goto loc_828578A8;
loc_82857894:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x828578a8
	goto loc_828578A8;
loc_8285789C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828578a8
	goto loc_828578A8;
loc_828578A4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828578A8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x828578B8;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828579a8
	if (!ctx.cr6.eq) goto loc_828579A8;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828579ac
	if (ctx.cr6.eq) goto loc_828579AC;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r30,304
	ctx.r31.s64 = ctx.r30.s64 + 304;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_828578D8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285790c
	if (ctx.cr6.eq) goto loc_8285790C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82857904
	if (ctx.cr6.eq) goto loc_82857904;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828578fc
	if (ctx.cr6.eq) goto loc_828578FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82857910
	goto loc_82857910;
loc_828578FC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82857910
	goto loc_82857910;
loc_82857904:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857910
	goto loc_82857910;
loc_8285790C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82857910:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82857994
	if (ctx.cr6.eq) goto loc_82857994;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x82857948
	if (ctx.cr6.eq) goto loc_82857948;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82857940
	if (ctx.cr6.eq) goto loc_82857940;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82857938
	if (ctx.cr6.eq) goto loc_82857938;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8285794c
	goto loc_8285794C;
loc_82857938:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8285794c
	goto loc_8285794C;
loc_82857940:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285794c
	goto loc_8285794C;
loc_82857948:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285794C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82857974
	if (ctx.cr6.eq) goto loc_82857974;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82857978
	if (ctx.cr6.eq) goto loc_82857978;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8285796c
	if (ctx.cr6.eq) goto loc_8285796C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82857978
	goto loc_82857978;
loc_8285796C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82857978
	goto loc_82857978;
loc_82857974:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82857978:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x82857984;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828579a8
	if (!ctx.cr6.eq) goto loc_828579A8;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82857994:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// blt cr6,0x828578d8
	if (ctx.cr6.lt) goto loc_828578D8;
	// b 0x828579ac
	goto loc_828579AC;
loc_828579A8:
	// li r20,1
	ctx.r20.s64 = 1;
loc_828579AC:
	// stw r20,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r20.u32);
	// stw r18,13192(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13192, ctx.r18.u32);
	// stw r16,13180(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13180, ctx.r16.u32);
	// stw r15,13184(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13184, ctx.r15.u32);
	// stw r17,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r17.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828579C8"))) PPC_WEAK_FUNC(sub_828579C8);
PPC_FUNC_IMPL(__imp__sub_828579C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x828579D0;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r16,13180(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r15,13184(r26)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r18,13192(r24)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13192);
	// li r23,-969
	ctx.r23.s64 = -969;
	// lwz r17,13188(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// li r20,150
	ctx.r20.s64 = 150;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r3,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r3.u32);
	// addi r22,r10,8
	ctx.r22.s64 = ctx.r10.s64 + 8;
	// addi r28,r11,-29532
	ctx.r28.s64 = ctx.r11.s64 + -29532;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r9,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r9.u32);
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82857A40:
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82857a74
	if (ctx.cr6.eq) goto loc_82857A74;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82857a6c
	if (ctx.cr6.eq) goto loc_82857A6C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82857a64
	if (ctx.cr6.eq) goto loc_82857A64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82857a78
	goto loc_82857A78;
loc_82857A64:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82857a78
	goto loc_82857A78;
loc_82857A6C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857a78
	goto loc_82857A78;
loc_82857A74:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82857A78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82857b90
	if (ctx.cr6.eq) goto loc_82857B90;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82857ab0
	if (ctx.cr6.eq) goto loc_82857AB0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82857aa8
	if (ctx.cr6.eq) goto loc_82857AA8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82857aa0
	if (ctx.cr6.eq) goto loc_82857AA0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82857ab4
	goto loc_82857AB4;
loc_82857AA0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82857ab4
	goto loc_82857AB4;
loc_82857AA8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857ab4
	goto loc_82857AB4;
loc_82857AB0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82857AB4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r30,236(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 236);
	// beq cr6,0x82857af4
	if (ctx.cr6.eq) goto loc_82857AF4;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82857aec
	if (ctx.cr6.eq) goto loc_82857AEC;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82857ae4
	if (ctx.cr6.eq) goto loc_82857AE4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82857af8
	goto loc_82857AF8;
loc_82857AE4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82857af8
	goto loc_82857AF8;
loc_82857AEC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857af8
	goto loc_82857AF8;
loc_82857AF4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82857AF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82857b08
	if (ctx.cr6.eq) goto loc_82857B08;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x82857b90
	if (!ctx.cr6.gt) goto loc_82857B90;
loc_82857B08:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// beq cr6,0x82857b38
	if (ctx.cr6.eq) goto loc_82857B38;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x82857b30
	if (ctx.cr6.eq) goto loc_82857B30;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x82857b28
	if (ctx.cr6.eq) goto loc_82857B28;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// b 0x82857b3c
	goto loc_82857B3C;
loc_82857B28:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x82857b3c
	goto loc_82857B3C;
loc_82857B30:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82857b3c
	goto loc_82857B3C;
loc_82857B38:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82857B3C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82857b64
	if (ctx.cr6.eq) goto loc_82857B64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82857b68
	if (ctx.cr6.eq) goto loc_82857B68;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82857b5c
	if (ctx.cr6.eq) goto loc_82857B5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82857b68
	goto loc_82857B68;
loc_82857B5C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82857b68
	goto loc_82857B68;
loc_82857B64:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82857B68:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828575b0
	ctx.lr = 0x82857B70;
	sub_828575B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,13188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x82857b90
	if (ctx.cr6.eq) goto loc_82857B90;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82857B90:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// bne 0x82857a40
	if (!ctx.cr0.eq) goto loc_82857A40;
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// stw r18,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r18.u32);
	// stw r16,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r16.u32);
	// stw r15,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r15.u32);
	// stw r17,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82857BB8"))) PPC_WEAK_FUNC(sub_82857BB8);
PPC_FUNC_IMPL(__imp__sub_82857BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82857BC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r25,3744(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3744);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82857bfc
	if (!ctx.cr6.eq) goto loc_82857BFC;
	// lwz r11,3612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82857d54
	if (ctx.cr6.eq) goto loc_82857D54;
loc_82857BFC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r27,r30,3684
	ctx.r27.s64 = ctx.r30.s64 + 3684;
	// lwz r28,-29532(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82857C18:
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82857c38
	if (ctx.cr6.lt) goto loc_82857C38;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,3540(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3540);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82826b40
	ctx.lr = 0x82857C34;
	sub_82826B40(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82857C38:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82857c68
	if (ctx.cr6.eq) goto loc_82857C68;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82857c60
	if (ctx.cr6.eq) goto loc_82857C60;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82857c58
	if (ctx.cr6.eq) goto loc_82857C58;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82857c6c
	goto loc_82857C6C;
loc_82857C58:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82857c6c
	goto loc_82857C6C;
loc_82857C60:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82857c6c
	goto loc_82857C6C;
loc_82857C68:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82857C6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82857d44
	if (ctx.cr6.eq) goto loc_82857D44;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82857ca4
	if (ctx.cr6.eq) goto loc_82857CA4;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82857c9c
	if (ctx.cr6.eq) goto loc_82857C9C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82857c94
	if (ctx.cr6.eq) goto loc_82857C94;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82857ca8
	goto loc_82857CA8;
loc_82857C94:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82857ca8
	goto loc_82857CA8;
loc_82857C9C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82857ca8
	goto loc_82857CA8;
loc_82857CA4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82857CA8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// blt cr6,0x82857cc8
	if (ctx.cr6.lt) goto loc_82857CC8;
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// ble cr6,0x82857d30
	if (!ctx.cr6.gt) goto loc_82857D30;
loc_82857CC8:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82857d1c
	if (ctx.cr6.eq) goto loc_82857D1C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82857d08
	if (ctx.cr6.eq) goto loc_82857D08;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82857cf4
	if (ctx.cr6.eq) goto loc_82857CF4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82825e38
	ctx.lr = 0x82857CEC;
	sub_82825E38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82857d34
	goto loc_82857D34;
loc_82857CF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82825e38
	ctx.lr = 0x82857D00;
	sub_82825E38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82857d34
	goto loc_82857D34;
loc_82857D08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82825e38
	ctx.lr = 0x82857D14;
	sub_82825E38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82857d34
	goto loc_82857D34;
loc_82857D1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82825e38
	ctx.lr = 0x82857D28;
	sub_82825E38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82857d34
	goto loc_82857D34;
loc_82857D30:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82857D34:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82857d44
	if (!ctx.cr6.eq) goto loc_82857D44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82857d64
	if (ctx.cr6.eq) goto loc_82857D64;
loc_82857D44:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// blt cr6,0x82857c18
	if (ctx.cr6.lt) goto loc_82857C18;
loc_82857D54:
	// lwz r11,3132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3132);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_82857D64:
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82857D70"))) PPC_WEAK_FUNC(sub_82857D70);
PPC_FUNC_IMPL(__imp__sub_82857D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857db0
	if (ctx.cr6.eq) goto loc_82857DB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857da8
	if (ctx.cr6.eq) goto loc_82857DA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857db4
	if (!ctx.cr6.eq) goto loc_82857DB4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857db4
	goto loc_82857DB4;
loc_82857DA8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857db4
	goto loc_82857DB4;
loc_82857DB0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857DB4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,3724(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3724);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,160(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 160, temp.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857df4
	if (ctx.cr6.eq) goto loc_82857DF4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857dec
	if (ctx.cr6.eq) goto loc_82857DEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857df8
	if (!ctx.cr6.eq) goto loc_82857DF8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857df8
	goto loc_82857DF8;
loc_82857DEC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857df8
	goto loc_82857DF8;
loc_82857DF4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857DF8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,60(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857e38
	if (ctx.cr6.eq) goto loc_82857E38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857e30
	if (ctx.cr6.eq) goto loc_82857E30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857e3c
	if (!ctx.cr6.eq) goto loc_82857E3C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857e3c
	goto loc_82857E3C;
loc_82857E30:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857e3c
	goto loc_82857E3C;
loc_82857E38:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857E3C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,464(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857e7c
	if (ctx.cr6.eq) goto loc_82857E7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857e74
	if (ctx.cr6.eq) goto loc_82857E74;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857e80
	if (!ctx.cr6.eq) goto loc_82857E80;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857e80
	goto loc_82857E80;
loc_82857E74:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857e80
	goto loc_82857E80;
loc_82857E7C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857E80:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3376(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3376);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857ec0
	if (ctx.cr6.eq) goto loc_82857EC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857eb8
	if (ctx.cr6.eq) goto loc_82857EB8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857ec4
	if (!ctx.cr6.eq) goto loc_82857EC4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857ec4
	goto loc_82857EC4;
loc_82857EB8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857ec4
	goto loc_82857EC4;
loc_82857EC0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857EC4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,468(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857f04
	if (ctx.cr6.eq) goto loc_82857F04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857efc
	if (ctx.cr6.eq) goto loc_82857EFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857f08
	if (!ctx.cr6.eq) goto loc_82857F08;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857f08
	goto loc_82857F08;
loc_82857EFC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857f08
	goto loc_82857F08;
loc_82857F04:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857F08:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,472(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857f48
	if (ctx.cr6.eq) goto loc_82857F48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857f40
	if (ctx.cr6.eq) goto loc_82857F40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857f4c
	if (!ctx.cr6.eq) goto loc_82857F4C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857f4c
	goto loc_82857F4C;
loc_82857F40:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857f4c
	goto loc_82857F4C;
loc_82857F48:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857F4C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3132(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3132);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857f8c
	if (ctx.cr6.eq) goto loc_82857F8C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857f84
	if (ctx.cr6.eq) goto loc_82857F84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857f90
	if (!ctx.cr6.eq) goto loc_82857F90;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857f90
	goto loc_82857F90;
loc_82857F84:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857f90
	goto loc_82857F90;
loc_82857F8C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857F90:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3756(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3756);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,176(r6)
	PPC_STORE_U32(ctx.r6.u32 + 176, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82857fd0
	if (ctx.cr6.eq) goto loc_82857FD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82857fc8
	if (ctx.cr6.eq) goto loc_82857FC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82857fd4
	if (!ctx.cr6.eq) goto loc_82857FD4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82857fd4
	goto loc_82857FD4;
loc_82857FC8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82857fd4
	goto loc_82857FD4;
loc_82857FD0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82857FD4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3540(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3540);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858014
	if (ctx.cr6.eq) goto loc_82858014;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285800c
	if (ctx.cr6.eq) goto loc_8285800C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858018
	if (!ctx.cr6.eq) goto loc_82858018;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858018
	goto loc_82858018;
loc_8285800C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858018
	goto loc_82858018;
loc_82858014:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858018:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3416(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3416);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858058
	if (ctx.cr6.eq) goto loc_82858058;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858050
	if (ctx.cr6.eq) goto loc_82858050;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285805c
	if (!ctx.cr6.eq) goto loc_8285805C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285805c
	goto loc_8285805C;
loc_82858050:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285805c
	goto loc_8285805C;
loc_82858058:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285805C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3316(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285809c
	if (ctx.cr6.eq) goto loc_8285809C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858094
	if (ctx.cr6.eq) goto loc_82858094;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828580a0
	if (!ctx.cr6.eq) goto loc_828580A0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828580a0
	goto loc_828580A0;
loc_82858094:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828580a0
	goto loc_828580A0;
loc_8285809C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828580A0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,36(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828580e0
	if (ctx.cr6.eq) goto loc_828580E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828580d8
	if (ctx.cr6.eq) goto loc_828580D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828580e4
	if (!ctx.cr6.eq) goto loc_828580E4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828580e4
	goto loc_828580E4;
loc_828580D8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828580e4
	goto loc_828580E4;
loc_828580E0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828580E4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,3496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3496);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,108(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 108, temp.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858124
	if (ctx.cr6.eq) goto loc_82858124;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285811c
	if (ctx.cr6.eq) goto loc_8285811C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858128
	if (!ctx.cr6.eq) goto loc_82858128;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858128
	goto loc_82858128;
loc_8285811C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858128
	goto loc_82858128;
loc_82858124:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858128:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3688(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3688);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858168
	if (ctx.cr6.eq) goto loc_82858168;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858160
	if (ctx.cr6.eq) goto loc_82858160;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285816c
	if (!ctx.cr6.eq) goto loc_8285816C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285816c
	goto loc_8285816C;
loc_82858160:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285816c
	goto loc_8285816C;
loc_82858168:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285816C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,3684(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3684);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 136, ctx.r8.u32);
	// lwz r11,3500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828581ac
	if (ctx.cr6.eq) goto loc_828581AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828581a4
	if (ctx.cr6.eq) goto loc_828581A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828581b0
	if (!ctx.cr6.eq) goto loc_828581B0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828581b0
	goto loc_828581B0;
loc_828581A4:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828581b0
	goto loc_828581B0;
loc_828581AC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828581B0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,3692(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3692);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828581C8"))) PPC_WEAK_FUNC(sub_828581C8);
PPC_FUNC_IMPL(__imp__sub_828581C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858210
	if (ctx.cr6.eq) goto loc_82858210;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858208
	if (ctx.cr6.eq) goto loc_82858208;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858200
	if (ctx.cr6.eq) goto loc_82858200;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858214
	goto loc_82858214;
loc_82858200:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858214
	goto loc_82858214;
loc_82858208:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858214
	goto loc_82858214;
loc_82858210:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858214:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f13,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stfs f13,160(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 160, temp.u32);
	// beq cr6,0x8285825c
	if (ctx.cr6.eq) goto loc_8285825C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858254
	if (ctx.cr6.eq) goto loc_82858254;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285824c
	if (ctx.cr6.eq) goto loc_8285824C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858260
	goto loc_82858260;
loc_8285824C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858260
	goto loc_82858260;
loc_82858254:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858260
	goto loc_82858260;
loc_8285825C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858260:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29760(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stfs f0,60(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// beq cr6,0x828582a0
	if (ctx.cr6.eq) goto loc_828582A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858298
	if (ctx.cr6.eq) goto loc_82858298;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828582a4
	if (!ctx.cr6.eq) goto loc_828582A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828582a4
	goto loc_828582A4;
loc_82858298:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828582a4
	goto loc_828582A4;
loc_828582A0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828582A4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828582e4
	if (ctx.cr6.eq) goto loc_828582E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828582dc
	if (ctx.cr6.eq) goto loc_828582DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828582e8
	if (!ctx.cr6.eq) goto loc_828582E8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828582e8
	goto loc_828582E8;
loc_828582DC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828582e8
	goto loc_828582E8;
loc_828582E4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828582E8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858324
	if (ctx.cr6.eq) goto loc_82858324;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285831c
	if (ctx.cr6.eq) goto loc_8285831C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858328
	if (!ctx.cr6.eq) goto loc_82858328;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858328
	goto loc_82858328;
loc_8285831C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858328
	goto loc_82858328;
loc_82858324:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858328:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858364
	if (ctx.cr6.eq) goto loc_82858364;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285835c
	if (ctx.cr6.eq) goto loc_8285835C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858368
	if (!ctx.cr6.eq) goto loc_82858368;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858368
	goto loc_82858368;
loc_8285835C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858368
	goto loc_82858368;
loc_82858364:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858368:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828583a8
	if (ctx.cr6.eq) goto loc_828583A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828583a0
	if (ctx.cr6.eq) goto loc_828583A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828583ac
	if (!ctx.cr6.eq) goto loc_828583AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828583ac
	goto loc_828583AC;
loc_828583A0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828583ac
	goto loc_828583AC;
loc_828583A8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828583AC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r10,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r10.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828583e8
	if (ctx.cr6.eq) goto loc_828583E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828583e0
	if (ctx.cr6.eq) goto loc_828583E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828583ec
	if (!ctx.cr6.eq) goto loc_828583EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828583ec
	goto loc_828583EC;
loc_828583E0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828583ec
	goto loc_828583EC;
loc_828583E8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828583EC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858428
	if (ctx.cr6.eq) goto loc_82858428;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858420
	if (ctx.cr6.eq) goto loc_82858420;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285842c
	if (!ctx.cr6.eq) goto loc_8285842C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285842c
	goto loc_8285842C;
loc_82858420:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285842c
	goto loc_8285842C;
loc_82858428:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285842C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858468
	if (ctx.cr6.eq) goto loc_82858468;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858460
	if (ctx.cr6.eq) goto loc_82858460;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285846c
	if (!ctx.cr6.eq) goto loc_8285846C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285846c
	goto loc_8285846C;
loc_82858460:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285846c
	goto loc_8285846C;
loc_82858468:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285846C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 136, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828584a8
	if (ctx.cr6.eq) goto loc_828584A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828584a0
	if (ctx.cr6.eq) goto loc_828584A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828584ac
	if (!ctx.cr6.eq) goto loc_828584AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828584ac
	goto loc_828584AC;
loc_828584A0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828584ac
	goto loc_828584AC;
loc_828584A8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828584AC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828584e8
	if (ctx.cr6.eq) goto loc_828584E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828584e0
	if (ctx.cr6.eq) goto loc_828584E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828584ec
	if (!ctx.cr6.eq) goto loc_828584EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828584ec
	goto loc_828584EC;
loc_828584E0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828584ec
	goto loc_828584EC;
loc_828584E8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828584EC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r5,80(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// stw r5,176(r6)
	PPC_STORE_U32(ctx.r6.u32 + 176, ctx.r5.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285852c
	if (ctx.cr6.eq) goto loc_8285852C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858524
	if (ctx.cr6.eq) goto loc_82858524;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858530
	if (!ctx.cr6.eq) goto loc_82858530;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858530
	goto loc_82858530;
loc_82858524:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858530
	goto loc_82858530;
loc_8285852C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858530:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285856c
	if (ctx.cr6.eq) goto loc_8285856C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858564
	if (ctx.cr6.eq) goto loc_82858564;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858570
	if (!ctx.cr6.eq) goto loc_82858570;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858570
	goto loc_82858570;
loc_82858564:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858570
	goto loc_82858570;
loc_8285856C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858570:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r10,88(r5)
	PPC_STORE_U32(ctx.r5.u32 + 88, ctx.r10.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828585b0
	if (ctx.cr6.eq) goto loc_828585B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828585a8
	if (ctx.cr6.eq) goto loc_828585A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828585b4
	if (!ctx.cr6.eq) goto loc_828585B4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828585b4
	goto loc_828585B4;
loc_828585A8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828585b4
	goto loc_828585B4;
loc_828585B0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828585B4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r7.u32);
	// lwz r11,3500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828585f8
	if (ctx.cr6.eq) goto loc_828585F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828585f0
	if (ctx.cr6.eq) goto loc_828585F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828585e8
	if (ctx.cr6.eq) goto loc_828585E8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828585fc
	goto loc_828585FC;
loc_828585E8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828585fc
	goto loc_828585FC;
loc_828585F0:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828585fc
	goto loc_828585FC;
loc_828585F8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828585FC:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f13,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// beq cr6,0x82858654
	if (ctx.cr6.eq) goto loc_82858654;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285863c
	if (ctx.cr6.eq) goto loc_8285863C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858658
	if (!ctx.cr6.eq) goto loc_82858658;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,108(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 108, temp.u32);
	// blr 
	return;
loc_8285863C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,108(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 108, temp.u32);
	// blr 
	return;
loc_82858654:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858658:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,108(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285866C"))) PPC_WEAK_FUNC(sub_8285866C);
PPC_FUNC_IMPL(__imp__sub_8285866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82858670"))) PPC_WEAK_FUNC(sub_82858670);
PPC_FUNC_IMPL(__imp__sub_82858670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,3500(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828586b8
	if (ctx.cr6.eq) goto loc_828586B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828586b0
	if (ctx.cr6.eq) goto loc_828586B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828586a8
	if (ctx.cr6.eq) goto loc_828586A8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828586bc
	goto loc_828586BC;
loc_828586A8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828586bc
	goto loc_828586BC;
loc_828586B0:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828586bc
	goto loc_828586BC;
loc_828586B8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828586BC:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,160(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3724(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 3724, temp.u32);
	// beq cr6,0x82858700
	if (ctx.cr6.eq) goto loc_82858700;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828586f8
	if (ctx.cr6.eq) goto loc_828586F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828586f0
	if (ctx.cr6.eq) goto loc_828586F0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858704
	goto loc_82858704;
loc_828586F0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858704
	goto loc_82858704;
loc_828586F8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858704
	goto loc_82858704;
loc_82858700:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858704:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,60(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 348, temp.u32);
	// beq cr6,0x82858748
	if (ctx.cr6.eq) goto loc_82858748;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858740
	if (ctx.cr6.eq) goto loc_82858740;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858738
	if (ctx.cr6.eq) goto loc_82858738;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285874c
	goto loc_8285874C;
loc_82858738:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285874c
	goto loc_8285874C;
loc_82858740:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285874c
	goto loc_8285874C;
loc_82858748:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285874C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// stw r5,464(r7)
	PPC_STORE_U32(ctx.r7.u32 + 464, ctx.r5.u32);
	// beq cr6,0x82858790
	if (ctx.cr6.eq) goto loc_82858790;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858788
	if (ctx.cr6.eq) goto loc_82858788;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858780
	if (ctx.cr6.eq) goto loc_82858780;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858794
	goto loc_82858794;
loc_82858780:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858794
	goto loc_82858794;
loc_82858788:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858794
	goto loc_82858794;
loc_82858790:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858794:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r5,3376(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3376, ctx.r5.u32);
	// beq cr6,0x828587d8
	if (ctx.cr6.eq) goto loc_828587D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828587d0
	if (ctx.cr6.eq) goto loc_828587D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828587c8
	if (ctx.cr6.eq) goto loc_828587C8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828587dc
	goto loc_828587DC;
loc_828587C8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828587dc
	goto loc_828587DC;
loc_828587D0:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828587dc
	goto loc_828587DC;
loc_828587D8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828587DC:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,44(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// stw r5,468(r7)
	PPC_STORE_U32(ctx.r7.u32 + 468, ctx.r5.u32);
	// beq cr6,0x82858820
	if (ctx.cr6.eq) goto loc_82858820;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858818
	if (ctx.cr6.eq) goto loc_82858818;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858810
	if (ctx.cr6.eq) goto loc_82858810;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858824
	goto loc_82858824;
loc_82858810:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858824
	goto loc_82858824;
loc_82858818:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858824
	goto loc_82858824;
loc_82858820:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858824:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r5,472(r7)
	PPC_STORE_U32(ctx.r7.u32 + 472, ctx.r5.u32);
	// beq cr6,0x82858868
	if (ctx.cr6.eq) goto loc_82858868;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858860
	if (ctx.cr6.eq) goto loc_82858860;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858858
	if (ctx.cr6.eq) goto loc_82858858;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285886c
	goto loc_8285886C;
loc_82858858:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285886c
	goto loc_8285886C;
loc_82858860:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285886c
	goto loc_8285886C;
loc_82858868:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285886C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// stw r5,3132(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3132, ctx.r5.u32);
	// beq cr6,0x828588b0
	if (ctx.cr6.eq) goto loc_828588B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828588a8
	if (ctx.cr6.eq) goto loc_828588A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828588a0
	if (ctx.cr6.eq) goto loc_828588A0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828588b4
	goto loc_828588B4;
loc_828588A0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828588b4
	goto loc_828588B4;
loc_828588A8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828588b4
	goto loc_828588B4;
loc_828588B0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828588B4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,176(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 176);
	// stw r5,3756(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3756, ctx.r5.u32);
	// beq cr6,0x828588f8
	if (ctx.cr6.eq) goto loc_828588F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828588f0
	if (ctx.cr6.eq) goto loc_828588F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828588e8
	if (ctx.cr6.eq) goto loc_828588E8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828588fc
	goto loc_828588FC;
loc_828588E8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828588fc
	goto loc_828588FC;
loc_828588F0:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828588fc
	goto loc_828588FC;
loc_828588F8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828588FC:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// stw r5,3540(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3540, ctx.r5.u32);
	// beq cr6,0x82858940
	if (ctx.cr6.eq) goto loc_82858940;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858938
	if (ctx.cr6.eq) goto loc_82858938;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858930
	if (ctx.cr6.eq) goto loc_82858930;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858944
	goto loc_82858944;
loc_82858930:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858944
	goto loc_82858944;
loc_82858938:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858944
	goto loc_82858944;
loc_82858940:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858944:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// stw r5,3416(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3416, ctx.r5.u32);
	// beq cr6,0x82858988
	if (ctx.cr6.eq) goto loc_82858988;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858980
	if (ctx.cr6.eq) goto loc_82858980;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858978
	if (ctx.cr6.eq) goto loc_82858978;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285898c
	goto loc_8285898C;
loc_82858978:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285898c
	goto loc_8285898C;
loc_82858980:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285898c
	goto loc_8285898C;
loc_82858988:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285898C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,72(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// stw r5,3316(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3316, ctx.r5.u32);
	// beq cr6,0x828589d0
	if (ctx.cr6.eq) goto loc_828589D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828589c8
	if (ctx.cr6.eq) goto loc_828589C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828589c0
	if (ctx.cr6.eq) goto loc_828589C0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828589d4
	goto loc_828589D4;
loc_828589C0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828589d4
	goto loc_828589D4;
loc_828589C8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828589d4
	goto loc_828589D4;
loc_828589D0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828589D4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 420, temp.u32);
	// beq cr6,0x82858a18
	if (ctx.cr6.eq) goto loc_82858A18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858a10
	if (ctx.cr6.eq) goto loc_82858A10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858a08
	if (ctx.cr6.eq) goto loc_82858A08;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858a1c
	goto loc_82858A1C;
loc_82858A08:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858a1c
	goto loc_82858A1C;
loc_82858A10:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858a1c
	goto loc_82858A1C;
loc_82858A18:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858A1C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,108(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3496(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 3496, temp.u32);
	// beq cr6,0x82858a58
	if (ctx.cr6.eq) goto loc_82858A58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858a50
	if (ctx.cr6.eq) goto loc_82858A50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858a5c
	if (!ctx.cr6.eq) goto loc_82858A5C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858a5c
	goto loc_82858A5C;
loc_82858A50:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858a5c
	goto loc_82858A5C;
loc_82858A58:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858A5C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r6,140(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// stw r6,3688(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3688, ctx.r6.u32);
	// lwz r11,3500(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858a9c
	if (ctx.cr6.eq) goto loc_82858A9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858a94
	if (ctx.cr6.eq) goto loc_82858A94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858aa0
	if (!ctx.cr6.eq) goto loc_82858AA0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858aa0
	goto loc_82858AA0;
loc_82858A94:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858aa0
	goto loc_82858AA0;
loc_82858A9C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858AA0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r6,136(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// stw r6,3684(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3684, ctx.r6.u32);
	// lwz r11,3500(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858ae0
	if (ctx.cr6.eq) goto loc_82858AE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858ad8
	if (ctx.cr6.eq) goto loc_82858AD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858ae4
	if (!ctx.cr6.eq) goto loc_82858AE4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858ae4
	goto loc_82858AE4;
loc_82858AD8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82858ae4
	goto loc_82858AE4;
loc_82858AE0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82858AE4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// stw r8,3692(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3692, ctx.r8.u32);
	// lwz r9,3540(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3540);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82858b2c
	if (!ctx.cr6.gt) goto loc_82858B2C;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r7,528
	ctx.r11.s64 = ctx.r7.s64 + 528;
	// lwz r8,532(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 532);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82858b38
	if (!ctx.cr6.eq) goto loc_82858B38;
loc_82858B2C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,492(r7)
	PPC_STORE_U32(ctx.r7.u32 + 492, ctx.r11.u32);
	// blr 
	return;
loc_82858B38:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// stw r4,492(r7)
	PPC_STORE_U32(ctx.r7.u32 + 492, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82858B58"))) PPC_WEAK_FUNC(sub_82858B58);
PPC_FUNC_IMPL(__imp__sub_82858B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82858B5C"))) PPC_WEAK_FUNC(sub_82858B5C);
PPC_FUNC_IMPL(__imp__sub_82858B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82858B60"))) PPC_WEAK_FUNC(sub_82858B60);
PPC_FUNC_IMPL(__imp__sub_82858B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3500(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858ba0
	if (ctx.cr6.eq) goto loc_82858BA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858b90
	if (ctx.cr6.eq) goto loc_82858B90;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858ba8
	if (!ctx.cr6.eq) goto loc_82858BA8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858ba8
	goto loc_82858BA8;
loc_82858B90:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82858ba8
	goto loc_82858BA8;
loc_82858BA0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82858BA8:
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
}

__attribute__((alias("__imp__sub_82858BC0"))) PPC_WEAK_FUNC(sub_82858BC0);
PPC_FUNC_IMPL(__imp__sub_82858BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3500(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858c00
	if (ctx.cr6.eq) goto loc_82858C00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858bf0
	if (ctx.cr6.eq) goto loc_82858BF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858c08
	if (!ctx.cr6.eq) goto loc_82858C08;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858c08
	goto loc_82858C08;
loc_82858BF0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82858c08
	goto loc_82858C08;
loc_82858C00:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82858C08:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82858C20"))) PPC_WEAK_FUNC(sub_82858C20);
PPC_FUNC_IMPL(__imp__sub_82858C20) {
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
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858c70
	if (ctx.cr6.eq) goto loc_82858C70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858c68
	if (ctx.cr6.eq) goto loc_82858C68;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858c60
	if (ctx.cr6.eq) goto loc_82858C60;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858c74
	goto loc_82858C74;
loc_82858C60:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858c74
	goto loc_82858C74;
loc_82858C68:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82858c74
	goto loc_82858C74;
loc_82858C70:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82858C74:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82858c8c
	if (!ctx.cr6.eq) goto loc_82858C8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82858C8C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858cb4
	if (ctx.cr6.eq) goto loc_82858CB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858cac
	if (ctx.cr6.eq) goto loc_82858CAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858cb8
	if (!ctx.cr6.eq) goto loc_82858CB8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858cb8
	goto loc_82858CB8;
loc_82858CAC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82858cb8
	goto loc_82858CB8;
loc_82858CB4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82858CB8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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

__attribute__((alias("__imp__sub_82858CD0"))) PPC_WEAK_FUNC(sub_82858CD0);
PPC_FUNC_IMPL(__imp__sub_82858CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82858CD8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r25,3
	ctx.r25.s64 = 3;
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r23,13188(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// addi r26,r10,548
	ctx.r26.s64 = ctx.r10.s64 + 548;
	// addi r27,r11,-29532
	ctx.r27.s64 = ctx.r11.s64 + -29532;
	// stw r9,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r9.u32);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82858D34:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858d68
	if (ctx.cr6.eq) goto loc_82858D68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858d60
	if (ctx.cr6.eq) goto loc_82858D60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858d58
	if (ctx.cr6.eq) goto loc_82858D58;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858d6c
	goto loc_82858D6C;
loc_82858D58:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82858d6c
	goto loc_82858D6C;
loc_82858D60:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858d6c
	goto loc_82858D6C;
loc_82858D68:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82858D6C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82858e28
	if (ctx.cr6.eq) goto loc_82858E28;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858d9c
	if (ctx.cr6.eq) goto loc_82858D9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858d94
	if (ctx.cr6.eq) goto loc_82858D94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858da0
	if (!ctx.cr6.eq) goto loc_82858DA0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82858da0
	goto loc_82858DA0;
loc_82858D94:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858da0
	goto loc_82858DA0;
loc_82858D9C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82858DA0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1840(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1840);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82858de0
	if (ctx.cr6.eq) goto loc_82858DE0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82858dd8
	if (ctx.cr6.eq) goto loc_82858DD8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82858dd0
	if (ctx.cr6.eq) goto loc_82858DD0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82858de4
	goto loc_82858DE4;
loc_82858DD0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82858de4
	goto loc_82858DE4;
loc_82858DD8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858de4
	goto loc_82858DE4;
loc_82858DE0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82858DE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82858e28
	if (ctx.cr6.eq) goto loc_82858E28;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82858e14
	if (ctx.cr6.eq) goto loc_82858E14;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82858e18
	if (ctx.cr6.eq) goto loc_82858E18;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82858e0c
	if (ctx.cr6.eq) goto loc_82858E0C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82858e18
	goto loc_82858E18;
loc_82858E0C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82858e18
	goto loc_82858E18;
loc_82858E14:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82858E18:
	// bl 0x82b3f320
	ctx.lr = 0x82858E1C;
	sub_82B3F320(ctx, base);
	// lwz r9,13188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82858E28:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82858d34
	if (!ctx.cr0.eq) goto loc_82858D34;
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82858E4C"))) PPC_WEAK_FUNC(sub_82858E4C);
PPC_FUNC_IMPL(__imp__sub_82858E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82858E50"))) PPC_WEAK_FUNC(sub_82858E50);
PPC_FUNC_IMPL(__imp__sub_82858E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82858E58;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r25,3
	ctx.r25.s64 = 3;
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r23,13188(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// addi r26,r10,548
	ctx.r26.s64 = ctx.r10.s64 + 548;
	// addi r27,r11,-29532
	ctx.r27.s64 = ctx.r11.s64 + -29532;
	// stw r9,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r9.u32);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82858EB4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858ee8
	if (ctx.cr6.eq) goto loc_82858EE8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858ee0
	if (ctx.cr6.eq) goto loc_82858EE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82858ed8
	if (ctx.cr6.eq) goto loc_82858ED8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82858eec
	goto loc_82858EEC;
loc_82858ED8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82858eec
	goto loc_82858EEC;
loc_82858EE0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82858eec
	goto loc_82858EEC;
loc_82858EE8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82858EEC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82858fa8
	if (ctx.cr6.eq) goto loc_82858FA8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82858f1c
	if (ctx.cr6.eq) goto loc_82858F1C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82858f14
	if (ctx.cr6.eq) goto loc_82858F14;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82858f20
	if (!ctx.cr6.eq) goto loc_82858F20;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82858f20
	goto loc_82858F20;
loc_82858F14:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858f20
	goto loc_82858F20;
loc_82858F1C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82858F20:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1840(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1840);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82858f60
	if (ctx.cr6.eq) goto loc_82858F60;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82858f58
	if (ctx.cr6.eq) goto loc_82858F58;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82858f50
	if (ctx.cr6.eq) goto loc_82858F50;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82858f64
	goto loc_82858F64;
loc_82858F50:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82858f64
	goto loc_82858F64;
loc_82858F58:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82858f64
	goto loc_82858F64;
loc_82858F60:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82858F64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82858fa8
	if (ctx.cr6.eq) goto loc_82858FA8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82858f94
	if (ctx.cr6.eq) goto loc_82858F94;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82858f98
	if (ctx.cr6.eq) goto loc_82858F98;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82858f8c
	if (ctx.cr6.eq) goto loc_82858F8C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82858f98
	goto loc_82858F98;
loc_82858F8C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82858f98
	goto loc_82858F98;
loc_82858F94:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82858F98:
	// bl 0x82b4f008
	ctx.lr = 0x82858F9C;
	sub_82B4F008(ctx, base);
	// lwz r9,13188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82858FA8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82858eb4
	if (!ctx.cr0.eq) goto loc_82858EB4;
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82858FCC"))) PPC_WEAK_FUNC(sub_82858FCC);
PPC_FUNC_IMPL(__imp__sub_82858FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82858FD0"))) PPC_WEAK_FUNC(sub_82858FD0);
PPC_FUNC_IMPL(__imp__sub_82858FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82858FD8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r21,13180(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// li r24,3
	ctx.r24.s64 = 3;
	// lwz r20,13184(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r23,13192(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r22,13188(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// addi r25,r10,548
	ctx.r25.s64 = ctx.r10.s64 + 548;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// stw r9,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r9.u32);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82859038:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285906c
	if (ctx.cr6.eq) goto loc_8285906C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82859064
	if (ctx.cr6.eq) goto loc_82859064;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285905c
	if (ctx.cr6.eq) goto loc_8285905C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82859070
	goto loc_82859070;
loc_8285905C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82859070
	goto loc_82859070;
loc_82859064:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82859070
	goto loc_82859070;
loc_8285906C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82859070:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82859130
	if (ctx.cr6.eq) goto loc_82859130;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828590a0
	if (ctx.cr6.eq) goto loc_828590A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82859098
	if (ctx.cr6.eq) goto loc_82859098;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828590a4
	if (!ctx.cr6.eq) goto loc_828590A4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828590a4
	goto loc_828590A4;
loc_82859098:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828590a4
	goto loc_828590A4;
loc_828590A0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828590A4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1840(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1840);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828590e4
	if (ctx.cr6.eq) goto loc_828590E4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828590dc
	if (ctx.cr6.eq) goto loc_828590DC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828590d4
	if (ctx.cr6.eq) goto loc_828590D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828590e8
	goto loc_828590E8;
loc_828590D4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828590e8
	goto loc_828590E8;
loc_828590DC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828590e8
	goto loc_828590E8;
loc_828590E4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828590E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82859130
	if (ctx.cr6.eq) goto loc_82859130;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82859118
	if (ctx.cr6.eq) goto loc_82859118;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285911c
	if (ctx.cr6.eq) goto loc_8285911C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82859110
	if (ctx.cr6.eq) goto loc_82859110;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8285911c
	goto loc_8285911C;
loc_82859110:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x8285911c
	goto loc_8285911C;
loc_82859118:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8285911C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82b34cb8
	ctx.lr = 0x82859124;
	sub_82B34CB8(ctx, base);
	// lwz r9,13188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82859130:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82859038
	if (!ctx.cr0.eq) goto loc_82859038;
	// stw r23,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859154"))) PPC_WEAK_FUNC(sub_82859154);
PPC_FUNC_IMPL(__imp__sub_82859154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82859158"))) PPC_WEAK_FUNC(sub_82859158);
PPC_FUNC_IMPL(__imp__sub_82859158) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r10,r8,10040
	ctx.r10.s64 = ctx.r8.s64 + 10040;
loc_82859170:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,2096(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2096);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r7.u32);
	// blt cr6,0x82859170
	if (ctx.cr6.lt) goto loc_82859170;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285919C"))) PPC_WEAK_FUNC(sub_8285919C);
PPC_FUNC_IMPL(__imp__sub_8285919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828591A0"))) PPC_WEAK_FUNC(sub_828591A0);
PPC_FUNC_IMPL(__imp__sub_828591A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x828591A8;
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
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828591f0
	if (ctx.cr6.eq) goto loc_828591F0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828591e8
	if (ctx.cr6.eq) goto loc_828591E8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828591f4
	if (!ctx.cr6.eq) goto loc_828591F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828591f4
	goto loc_828591F4;
loc_828591E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828591f4
	goto loc_828591F4;
loc_828591F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828591F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804270
	ctx.lr = 0x828591FC;
	sub_82804270(ctx, base);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,171
	ctx.r11.s64 = ctx.r11.s64 + 171;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82859258
	if (ctx.cr6.eq) goto loc_82859258;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82859250
	if (ctx.cr6.eq) goto loc_82859250;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285925c
	if (!ctx.cr6.eq) goto loc_8285925C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285925c
	goto loc_8285925C;
loc_82859250:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285925c
	goto loc_8285925C;
loc_82859258:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285925C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82859268;
	sub_82804410(ctx, base);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,2540
	ctx.r10.s64 = ctx.r11.s64 + 2540;
	// stfs f0,2544(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2544, temp.u32);
	// stfs f13,2548(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2548, temp.u32);
	// stfs f12,2540(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2540, temp.u32);
	// lwz r9,11700(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x828592d4
	if (ctx.cr6.eq) goto loc_828592D4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828592cc
	if (ctx.cr6.eq) goto loc_828592CC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828592c4
	if (ctx.cr6.eq) goto loc_828592C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828592d8
	goto loc_828592D8;
loc_828592C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828592d8
	goto loc_828592D8;
loc_828592CC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828592d8
	goto loc_828592D8;
loc_828592D4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828592D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82859320
	if (ctx.cr6.eq) goto loc_82859320;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r10,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82859320
	if (ctx.cr6.eq) goto loc_82859320;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82859320
	if (ctx.cr6.eq) goto loc_82859320;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82859320
	if (ctx.cr6.eq) goto loc_82859320;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82859320
	if (ctx.cr6.eq) goto loc_82859320;
	// lhz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// b 0x82859324
	goto loc_82859324;
loc_82859320:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82859324:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x828594d0
	if (ctx.cr6.eq) goto loc_828594D0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82859378
	if (ctx.cr6.eq) goto loc_82859378;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82859370
	if (ctx.cr6.eq) goto loc_82859370;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82859368
	if (ctx.cr6.eq) goto loc_82859368;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x8285937c
	goto loc_8285937C;
loc_82859368:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8285937c
	goto loc_8285937C;
loc_82859370:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x8285937c
	goto loc_8285937C;
loc_82859378:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8285937C:
	// bl 0x82befc38
	ctx.lr = 0x82859380;
	sub_82BEFC38(ctx, base);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x828594d0
	if (ctx.cr6.eq) goto loc_828594D0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828593b8
	if (ctx.cr6.eq) goto loc_828593B8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828593b0
	if (ctx.cr6.eq) goto loc_828593B0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828593a8
	if (ctx.cr6.eq) goto loc_828593A8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x828593bc
	goto loc_828593BC;
loc_828593A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828593bc
	goto loc_828593BC;
loc_828593B0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x828593bc
	goto loc_828593BC;
loc_828593B8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_828593BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdeb38
	ctx.lr = 0x828593C4;
	sub_82BDEB38(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r9,r11,3063
	ctx.r9.s64 = ctx.r11.s64 + 3063;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r8,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82859414
	if (ctx.cr6.eq) goto loc_82859414;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8285940c
	if (ctx.cr6.eq) goto loc_8285940C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82859418
	if (!ctx.cr6.eq) goto loc_82859418;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82859418
	goto loc_82859418;
loc_8285940C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82859418
	goto loc_82859418;
loc_82859414:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82859418:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bde8a0
	ctx.lr = 0x82859420;
	sub_82BDE8A0(ctx, base);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r11,r11,625
	ctx.r11.s64 = ctx.r11.s64 + 625;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8285945c
	if (ctx.cr6.eq) goto loc_8285945C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82859454
	if (ctx.cr6.eq) goto loc_82859454;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82859460
	if (!ctx.cr6.eq) goto loc_82859460;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82859460
	goto loc_82859460;
loc_82859454:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82859460
	goto loc_82859460;
loc_8285945C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82859460:
	// lwz r5,2096(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r11,r5,704
	ctx.r11.s64 = ctx.r5.s64 + 704;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82be5090
	ctx.lr = 0x82859474;
	sub_82BE5090(ctx, base);
	// addi r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 + 3;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828594ac
	if (ctx.cr6.eq) goto loc_828594AC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828594a4
	if (ctx.cr6.eq) goto loc_828594A4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828594b0
	if (!ctx.cr6.eq) goto loc_828594B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828594b0
	goto loc_828594B0;
loc_828594A4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828594b0
	goto loc_828594B0;
loc_828594AC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828594B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdebd0
	ctx.lr = 0x828594B8;
	sub_82BDEBD0(ctx, base);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r11,r11,241
	ctx.r11.s64 = ctx.r11.s64 + 241;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828594D0:
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828594fc
	if (ctx.cr6.eq) goto loc_828594FC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828594f4
	if (ctx.cr6.eq) goto loc_828594F4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82859500
	if (!ctx.cr6.eq) goto loc_82859500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82859500
	goto loc_82859500;
loc_828594F4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x82859500
	goto loc_82859500;
loc_828594FC:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82859500:
	// lwz r8,2096(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r11,r8,704
	ctx.r11.s64 = ctx.r8.s64 + 704;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x828011c8
	ctx.lr = 0x82859514;
	sub_828011C8(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// addi r8,r8,707
	ctx.r8.s64 = ctx.r8.s64 + 707;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r7,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lwz r3,11700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82859560
	if (ctx.cr6.eq) goto loc_82859560;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82859558
	if (ctx.cr6.eq) goto loc_82859558;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82859564
	if (!ctx.cr6.eq) goto loc_82859564;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82859564
	goto loc_82859564;
loc_82859558:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82859564
	goto loc_82859564;
loc_82859560:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82859564:
	// lwz r7,2096(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r11,r7,704
	ctx.r11.s64 = ctx.r7.s64 + 704;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82801280
	ctx.lr = 0x82859578;
	sub_82801280(ctx, base);
	// addi r9,r7,712
	ctx.r9.s64 = ctx.r7.s64 + 712;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r7,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r6,r11,2923
	ctx.r6.s64 = ctx.r11.s64 + 2923;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r4,r11,1533
	ctx.r4.s64 = ctx.r11.s64 + 1533;
	// addi r3,r11,260
	ctx.r3.s64 = ctx.r11.s64 + 260;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// stdx r9,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u64);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828595e0
	if (ctx.cr6.eq) goto loc_828595E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828595d8
	if (ctx.cr6.eq) goto loc_828595D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828595e4
	if (!ctx.cr6.eq) goto loc_828595E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828595e4
	goto loc_828595E4;
loc_828595D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828595e4
	goto loc_828595E4;
loc_828595E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828595E4:
	// lwz r8,2096(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r8,704
	ctx.r11.s64 = ctx.r8.s64 + 704;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82801458
	ctx.lr = 0x828595FC;
	sub_82801458(ctx, base);
	// addi r9,r8,1533
	ctx.r9.s64 = ctx.r8.s64 + 1533;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r3,r7,r31
	PPC_STORE_U64(ctx.r7.u32 + ctx.r31.u32, ctx.r3.u64);
	// stw r8,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859618"))) PPC_WEAK_FUNC(sub_82859618);
PPC_FUNC_IMPL(__imp__sub_82859618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82859620;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r25,13192(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r24,13188(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r31.u32);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// addi r6,r7,6552
	ctx.r6.s64 = ctx.r7.s64 + 6552;
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r10,6556(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6556);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r9,2096(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2096);
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x828596dc
	if (!ctx.cr6.eq) goto loc_828596DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828596cc
	if (ctx.cr6.eq) goto loc_828596CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828596bc
	if (ctx.cr6.eq) goto loc_828596BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828596d0
	if (!ctx.cr6.eq) goto loc_828596D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82859710
	goto loc_82859710;
loc_828596BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82859710
	goto loc_82859710;
loc_828596CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828596D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82859710
	goto loc_82859710;
loc_828596DC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82859704
	if (ctx.cr6.eq) goto loc_82859704;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828596fc
	if (ctx.cr6.eq) goto loc_828596FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82859708
	if (!ctx.cr6.eq) goto loc_82859708;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82859708
	goto loc_82859708;
loc_828596FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82859708
	goto loc_82859708;
loc_82859704:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82859708:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82859710:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82807678
	ctx.lr = 0x82859718;
	sub_82807678(ctx, base);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,2096(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2096);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r3,11700(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82859784
	if (!ctx.cr6.eq) goto loc_82859784;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82859774
	if (ctx.cr6.eq) goto loc_82859774;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82859764
	if (ctx.cr6.eq) goto loc_82859764;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82859778
	if (!ctx.cr6.eq) goto loc_82859778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828597b8
	goto loc_828597B8;
loc_82859764:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828597b8
	goto loc_828597B8;
loc_82859774:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82859778:
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828597b8
	goto loc_828597B8;
loc_82859784:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828597ac
	if (ctx.cr6.eq) goto loc_828597AC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828597a4
	if (ctx.cr6.eq) goto loc_828597A4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828597b0
	if (!ctx.cr6.eq) goto loc_828597B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828597b0
	goto loc_828597B0;
loc_828597A4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x828597b0
	goto loc_828597B0;
loc_828597AC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828597B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
loc_828597B8:
	// bl 0x82beee50
	ctx.lr = 0x828597BC;
	sub_82BEEE50(ctx, base);
	// stw r25,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828597D4"))) PPC_WEAK_FUNC(sub_828597D4);
PPC_FUNC_IMPL(__imp__sub_828597D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828597D8"))) PPC_WEAK_FUNC(sub_828597D8);
PPC_FUNC_IMPL(__imp__sub_828597D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x828597E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,1601
	ctx.r9.s64 = ctx.r5.s64 + 1601;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x82828d60
	ctx.lr = 0x82859810;
	sub_82828D60(ctx, base);
	// addi r7,r29,720
	ctx.r7.s64 = ctx.r29.s64 + 720;
	// addi r6,r29,1380
	ctx.r6.s64 = ctx.r29.s64 + 1380;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stwx r11,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859838"))) PPC_WEAK_FUNC(sub_82859838);
PPC_FUNC_IMPL(__imp__sub_82859838) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// stw r9,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r9.u32);
	// lwz r7,980(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,2096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2096, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82859884"))) PPC_WEAK_FUNC(sub_82859884);
PPC_FUNC_IMPL(__imp__sub_82859884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82859888"))) PPC_WEAK_FUNC(sub_82859888);
PPC_FUNC_IMPL(__imp__sub_82859888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82859890;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r31.u32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r9,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r9.u32);
	// stw r9,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r9.u32);
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// lwz r20,2096(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// stw r26,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r26.u32);
	// lwz r9,980(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82859940
	if (ctx.cr6.eq) goto loc_82859940;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r11,r26,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82bfc538
	ctx.lr = 0x8285992C;
	sub_82BFC538(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lfs f0,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82859940
	if (ctx.cr6.gt) goto loc_82859940;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82859940:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r20,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r20.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285996C"))) PPC_WEAK_FUNC(sub_8285996C);
PPC_FUNC_IMPL(__imp__sub_8285996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82859970"))) PPC_WEAK_FUNC(sub_82859970);
PPC_FUNC_IMPL(__imp__sub_82859970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82859978;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,13184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r9,12492(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12492);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r10.u32);
	// lwz r21,2096(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// stw r8,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r8.u32);
	// lwz r6,980(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r4,r11,51
	ctx.r4.s64 = ctx.r11.s64 + 51;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82bbdb28
	ctx.lr = 0x828599F8;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82859a0c
	if (!ctx.cr6.eq) goto loc_82859A0C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82859a10
	goto loc_82859A10;
loc_82859A0C:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82859A10:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r21,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859A3C"))) PPC_WEAK_FUNC(sub_82859A3C);
PPC_FUNC_IMPL(__imp__sub_82859A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82859A40"))) PPC_WEAK_FUNC(sub_82859A40);
PPC_FUNC_IMPL(__imp__sub_82859A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// stw r9,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r9.u32);
	// lwz r7,980(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82859a84
	if (ctx.cr6.eq) goto loc_82859A84;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82859A84:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82859A9C"))) PPC_WEAK_FUNC(sub_82859A9C);
PPC_FUNC_IMPL(__imp__sub_82859A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82859AA0"))) PPC_WEAK_FUNC(sub_82859AA0);
PPC_FUNC_IMPL(__imp__sub_82859AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82859AA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,13184(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r9,12492(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12492);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r10.u32);
	// lwz r22,2096(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// stw r8,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r8.u32);
	// lwz r6,980(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r4,r11,51
	ctx.r4.s64 = ctx.r11.s64 + 51;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82bbdb28
	ctx.lr = 0x82859B24;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82859b38
	if (ctx.cr6.eq) goto loc_82859B38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82859B38:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r26,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r22,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859B60"))) PPC_WEAK_FUNC(sub_82859B60);
PPC_FUNC_IMPL(__imp__sub_82859B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82859B68;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,13184(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r9,12492(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12492);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r10.u32);
	// lwz r22,2096(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// stw r8,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r8.u32);
	// lwz r6,980(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r4,r11,51
	ctx.r4.s64 = ctx.r11.s64 + 51;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82bbdb28
	ctx.lr = 0x82859BE4;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82859bf8
	if (ctx.cr6.eq) goto loc_82859BF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82859BF8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r26,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r22,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859C20"))) PPC_WEAK_FUNC(sub_82859C20);
PPC_FUNC_IMPL(__imp__sub_82859C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,11680(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11680, ctx.r4.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r6,11680(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11680);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,10128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10128, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82859C50"))) PPC_WEAK_FUNC(sub_82859C50);
PPC_FUNC_IMPL(__imp__sub_82859C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82859C58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r28,r11,-29532
	ctx.r28.s64 = ctx.r11.s64 + -29532;
	// lwz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r31,r29,10040
	ctx.r31.s64 = ctx.r29.s64 + 10040;
	// lfs f13,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f13.f64 = double(temp.f32);
loc_82859C84:
	// lwz r10,2096(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2096);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// beq cr6,0x82859d44
	if (ctx.cr6.eq) goto loc_82859D44;
	// lwz r11,11700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82859cec
	if (ctx.cr6.eq) goto loc_82859CEC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82859ce4
	if (ctx.cr6.eq) goto loc_82859CE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82859cf0
	if (!ctx.cr6.eq) goto loc_82859CF0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82859cf0
	goto loc_82859CF0;
loc_82859CE4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82859cf0
	goto loc_82859CF0;
loc_82859CEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82859CF0:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// beq cr6,0x82859d44
	if (ctx.cr6.eq) goto loc_82859D44;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82859d44
	if (ctx.cr6.eq) goto loc_82859D44;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82859d44
	if (ctx.cr6.eq) goto loc_82859D44;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82859d44
	if (ctx.cr6.eq) goto loc_82859D44;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x8279f6a8
	ctx.lr = 0x82859D44;
	sub_8279F6A8(ctx, base);
loc_82859D44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// blt cr6,0x82859c84
	if (ctx.cr6.lt) goto loc_82859C84;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859D58"))) PPC_WEAK_FUNC(sub_82859D58);
PPC_FUNC_IMPL(__imp__sub_82859D58) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82859e0c
	if (!ctx.cr6.eq) goto loc_82859E0C;
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82859db8
	if (ctx.cr6.eq) goto loc_82859DB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82859da8
	if (ctx.cr6.eq) goto loc_82859DA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82859dc0
	if (!ctx.cr6.eq) goto loc_82859DC0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82859dc0
	goto loc_82859DC0;
loc_82859DA8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82859dc0
	goto loc_82859DC0;
loc_82859DB8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82859DC0:
	// ld r6,3828(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// lwz r4,6408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6408);
	// beq cr6,0x82859e30
	if (ctx.cr6.eq) goto loc_82859E30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82859e30
	if (ctx.cr6.eq) goto loc_82859E30;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82859e30
	if (ctx.cr6.eq) goto loc_82859E30;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82859e30
	if (ctx.cr6.eq) goto loc_82859E30;
	// bl 0x8279f5e0
	ctx.lr = 0x82859E08;
	sub_8279F5E0(ctx, base);
	// b 0x82859e30
	goto loc_82859E30;
loc_82859E0C:
	// lwz r10,2096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r11,r31,6552
	ctx.r11.s64 = ctx.r31.s64 + 6552;
	// lwz r9,6556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82859e68
	if (ctx.cr6.eq) goto loc_82859E68;
loc_82859E30:
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r10,r31,6552
	ctx.r10.s64 = ctx.r31.s64 + 6552;
	// lwz r9,6556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r8,r9,5
	ctx.r8.s64 = ctx.r9.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82859e68
	if (ctx.cr6.eq) goto loc_82859E68;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82829458
	ctx.lr = 0x82859E68;
	sub_82829458(ctx, base);
loc_82859E68:
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

__attribute__((alias("__imp__sub_82859E80"))) PPC_WEAK_FUNC(sub_82859E80);
PPC_FUNC_IMPL(__imp__sub_82859E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82859E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r28,r11,-29532
	ctx.r28.s64 = ctx.r11.s64 + -29532;
	// lwz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r31,r29,10040
	ctx.r31.s64 = ctx.r29.s64 + 10040;
	// lfs f10,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f10.f64 = double(temp.f32);
loc_82859EB4:
	// lwz r10,2096(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2096);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// beq cr6,0x82859f3c
	if (ctx.cr6.eq) goto loc_82859F3C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,11700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82859f2c
	if (ctx.cr6.eq) goto loc_82859F2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82859f24
	if (ctx.cr6.eq) goto loc_82859F24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82859f30
	if (!ctx.cr6.eq) goto loc_82859F30;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82859f30
	goto loc_82859F30;
loc_82859F24:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82859f30
	goto loc_82859F30;
loc_82859F2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82859F30:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82802930
	ctx.lr = 0x82859F3C;
	sub_82802930(ctx, base);
loc_82859F3C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// blt cr6,0x82859eb4
	if (ctx.cr6.lt) goto loc_82859EB4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82859F50"))) PPC_WEAK_FUNC(sub_82859F50);
PPC_FUNC_IMPL(__imp__sub_82859F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82859F58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82859fac
	if (ctx.cr6.eq) goto loc_82859FAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82859fa4
	if (ctx.cr6.eq) goto loc_82859FA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82859fb0
	if (!ctx.cr6.eq) goto loc_82859FB0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82859fb0
	goto loc_82859FB0;
loc_82859FA4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82859fb0
	goto loc_82859FB0;
loc_82859FAC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82859FB0:
	// ld r6,3900(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// lwz r4,6404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6404);
	// beq cr6,0x8285a000
	if (ctx.cr6.eq) goto loc_8285A000;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8285a000
	if (ctx.cr6.eq) goto loc_8285A000;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285a000
	if (ctx.cr6.eq) goto loc_8285A000;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285a000
	if (ctx.cr6.eq) goto loc_8285A000;
	// bl 0x8279f5e0
	ctx.lr = 0x82859FF8;
	sub_8279F5E0(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285A000:
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285a0b4
	if (!ctx.cr6.eq) goto loc_8285A0B4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8285a03c
	if (!ctx.cr6.eq) goto loc_8285A03C;
	// lwz r11,6604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285a03c
	if (ctx.cr6.eq) goto loc_8285A03C;
	// lwz r10,6556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	// addi r11,r31,6552
	ctx.r11.s64 = ctx.r31.s64 + 6552;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8285a0b4
	if (ctx.cr6.eq) goto loc_8285A0B4;
loc_8285A03C:
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285a068
	if (ctx.cr6.eq) goto loc_8285A068;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285a060
	if (ctx.cr6.eq) goto loc_8285A060;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285a06c
	if (!ctx.cr6.eq) goto loc_8285A06C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285a06c
	goto loc_8285A06C;
loc_8285A060:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8285a06c
	goto loc_8285A06C;
loc_8285A068:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285A06C:
	// ld r6,3860(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// lwz r4,6404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6404);
	// beq cr6,0x8285a0b4
	if (ctx.cr6.eq) goto loc_8285A0B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285a0b4
	if (ctx.cr6.eq) goto loc_8285A0B4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285a0b4
	if (ctx.cr6.eq) goto loc_8285A0B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285a0b4
	if (ctx.cr6.eq) goto loc_8285A0B4;
	// bl 0x8279f5e0
	ctx.lr = 0x8285A0B4;
	sub_8279F5E0(ctx, base);
loc_8285A0B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285A0BC"))) PPC_WEAK_FUNC(sub_8285A0BC);
PPC_FUNC_IMPL(__imp__sub_8285A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285A0C0"))) PPC_WEAK_FUNC(sub_8285A0C0);
PPC_FUNC_IMPL(__imp__sub_8285A0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8285A0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8285a108
	if (ctx.cr6.eq) goto loc_8285A108;
	// lwz r10,2096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r11,r31,6552
	ctx.r11.s64 = ctx.r31.s64 + 6552;
	// lwz r9,6556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8285a1a4
	if (ctx.cr6.eq) goto loc_8285A1A4;
loc_8285A108:
	// lwz r10,6556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	// addi r30,r31,6552
	ctx.r30.s64 = ctx.r31.s64 + 6552;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8285a158
	if (ctx.cr6.eq) goto loc_8285A158;
	// lwz r9,8300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8300);
	// addi r10,r31,8296
	ctx.r10.s64 = ctx.r31.s64 + 8296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82829458
	ctx.lr = 0x8285A158;
	sub_82829458(ctx, base);
loc_8285A158:
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8285a1a4
	if (ctx.cr6.eq) goto loc_8285A1A4;
	// lwz r9,8300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8300);
	// addi r10,r31,8296
	ctx.r10.s64 = ctx.r31.s64 + 8296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82829458
	ctx.lr = 0x8285A1A4;
	sub_82829458(ctx, base);
loc_8285A1A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285A1AC"))) PPC_WEAK_FUNC(sub_8285A1AC);
PPC_FUNC_IMPL(__imp__sub_8285A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285A1B0"))) PPC_WEAK_FUNC(sub_8285A1B0);
PPC_FUNC_IMPL(__imp__sub_8285A1B0) {
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
	// addi r7,r8,34
	ctx.r7.s64 = ctx.r8.s64 + 34;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8285a214
	if (ctx.cr6.eq) goto loc_8285A214;
	// lwz r9,8300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r11,r11,8296
	ctx.r11.s64 = ctx.r11.s64 + 8296;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r8,r10,34
	ctx.r8.s64 = ctx.r10.s64 + 34;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82829458
	ctx.lr = 0x8285A214;
	sub_82829458(ctx, base);
loc_8285A214:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285A224"))) PPC_WEAK_FUNC(sub_8285A224);
PPC_FUNC_IMPL(__imp__sub_8285A224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285A228"))) PPC_WEAK_FUNC(sub_8285A228);
PPC_FUNC_IMPL(__imp__sub_8285A228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r31,3
	ctx.r31.s64 = 3;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,18876
	ctx.r10.s64 = ctx.r11.s64 + 18876;
	// addi r5,r11,548
	ctx.r5.s64 = ctx.r11.s64 + 548;
	// lfs f11,18876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18876);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,18880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18880);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,18884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18884);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,18876(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 18876, temp.u32);
	// stfs f7,18880(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 18880, temp.u32);
	// stfs f6,18884(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 18884, temp.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_8285A284:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285a2b8
	if (ctx.cr6.eq) goto loc_8285A2B8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285a2b0
	if (ctx.cr6.eq) goto loc_8285A2B0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8285a2a8
	if (ctx.cr6.eq) goto loc_8285A2A8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8285a2bc
	goto loc_8285A2BC;
loc_8285A2A8:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8285a2bc
	goto loc_8285A2BC;
loc_8285A2B0:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x8285a2bc
	goto loc_8285A2BC;
loc_8285A2B8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8285A2BC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285a3d8
	if (ctx.cr6.eq) goto loc_8285A3D8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285a2f4
	if (ctx.cr6.eq) goto loc_8285A2F4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285a2ec
	if (ctx.cr6.eq) goto loc_8285A2EC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8285a2e4
	if (ctx.cr6.eq) goto loc_8285A2E4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x8285a2f8
	goto loc_8285A2F8;
loc_8285A2E4:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8285a2f8
	goto loc_8285A2F8;
loc_8285A2EC:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x8285a2f8
	goto loc_8285A2F8;
loc_8285A2F4:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8285A2F8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8285a328
	if (ctx.cr6.eq) goto loc_8285A328;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8285a320
	if (ctx.cr6.eq) goto loc_8285A320;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8285a318
	if (ctx.cr6.eq) goto loc_8285A318;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// b 0x8285a32c
	goto loc_8285A32C;
loc_8285A318:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8285a32c
	goto loc_8285A32C;
loc_8285A320:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x8285a32c
	goto loc_8285A32C;
loc_8285A328:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8285A32C:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8285a3d8
	if (ctx.cr6.eq) goto loc_8285A3D8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285a35c
	if (ctx.cr6.eq) goto loc_8285A35C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285a354
	if (ctx.cr6.eq) goto loc_8285A354;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285a360
	if (!ctx.cr6.eq) goto loc_8285A360;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285a360
	goto loc_8285A360;
loc_8285A354:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8285a360
	goto loc_8285A360;
loc_8285A35C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8285A360:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,1840(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1840);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285a39c
	if (ctx.cr6.eq) goto loc_8285A39C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285a398
	if (ctx.cr6.eq) goto loc_8285A398;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8285a390
	if (ctx.cr6.eq) goto loc_8285A390;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8285a39c
	goto loc_8285A39C;
loc_8285A390:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285a39c
	goto loc_8285A39C;
loc_8285A398:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8285A39C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,18876
	ctx.r11.s64 = ctx.r11.s64 + 18876;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8285A3D8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x8285a284
	if (!ctx.cr0.eq) goto loc_8285A284;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285A3EC"))) PPC_WEAK_FUNC(sub_8285A3EC);
PPC_FUNC_IMPL(__imp__sub_8285A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285A3F0"))) PPC_WEAK_FUNC(sub_8285A3F0);
PPC_FUNC_IMPL(__imp__sub_8285A3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,11700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11700);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285a430
	if (ctx.cr6.eq) goto loc_8285A430;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285a420
	if (ctx.cr6.eq) goto loc_8285A420;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285a438
	if (!ctx.cr6.eq) goto loc_8285A438;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285a438
	goto loc_8285A438;
loc_8285A420:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285a438
	goto loc_8285A438;
loc_8285A430:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8285A438:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f13,18956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18956);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,936(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8285a4d0
	if (!ctx.cr6.gt) goto loc_8285A4D0;
	// lwz r10,21796(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8285a4dc
	if (!ctx.cr6.eq) goto loc_8285A4DC;
	// lwz r10,22844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r9,r10,5279
	ctx.r9.s64 = ctx.r10.s64 + 5279;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8285a4dc
	if (ctx.cr6.eq) goto loc_8285A4DC;
	// lfs f13,14140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,23244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23244);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,14136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,23240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,14208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14208);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f4,f7
	ctx.cr6.compare(ctx.f4.f64, ctx.f7.f64);
	// blt cr6,0x8285a4dc
	if (ctx.cr6.lt) goto loc_8285A4DC;
	// addi r10,r10,3986
	ctx.r10.s64 = ctx.r10.s64 + 3986;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8285a4dc
	if (!ctx.cr6.lt) goto loc_8285A4DC;
loc_8285A4D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8285A4DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285A4E8"))) PPC_WEAK_FUNC(sub_8285A4E8);
PPC_FUNC_IMPL(__imp__sub_8285A4E8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,48(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,13460(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13460);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285a558
	if (ctx.cr6.eq) goto loc_8285A558;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285a550
	if (ctx.cr6.eq) goto loc_8285A550;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285a548
	if (ctx.cr6.eq) goto loc_8285A548;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285a55c
	goto loc_8285A55C;
loc_8285A548:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285a55c
	goto loc_8285A55C;
loc_8285A550:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8285a55c
	goto loc_8285A55C;
loc_8285A558:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8285A55C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285a5b8
	if (ctx.cr6.eq) goto loc_8285A5B8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285a58c
	if (ctx.cr6.eq) goto loc_8285A58C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285a584
	if (ctx.cr6.eq) goto loc_8285A584;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285a590
	if (!ctx.cr6.eq) goto loc_8285A590;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285a590
	goto loc_8285A590;
loc_8285A584:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8285a590
	goto loc_8285A590;
loc_8285A58C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285A590:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8283b630
	ctx.lr = 0x8285A59C;
	sub_8283B630(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
loc_8285A5B8:
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8285A5D0"))) PPC_WEAK_FUNC(sub_8285A5D0);
PPC_FUNC_IMPL(__imp__sub_8285A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8285A5D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r26,13180(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x8285a6e8
	if (ctx.cr6.eq) goto loc_8285A6E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8285a6d8
	if (ctx.cr6.eq) goto loc_8285A6D8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8285a6c8
	if (ctx.cr6.eq) goto loc_8285A6C8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8285a6b8
	if (ctx.cr6.eq) goto loc_8285A6B8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8285a6b8
	if (ctx.cr6.eq) goto loc_8285A6B8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8285a6a8
	if (ctx.cr6.eq) goto loc_8285A6A8;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x8285a678
	if (ctx.cr6.eq) goto loc_8285A678;
loc_8285A670:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8285a6f4
	goto loc_8285A6F4;
loc_8285A678:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,98
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 98, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bne cr6,0x8285a670
	if (!ctx.cr6.eq) goto loc_8285A670;
	// lwz r9,22844(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,5279
	ctx.r7.s64 = ctx.r9.s64 + 5279;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r11,23300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23300, ctx.r11.u32);
	// b 0x8285a6f4
	goto loc_8285A6F4;
loc_8285A6A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8282be48
	ctx.lr = 0x8285A6B0;
	sub_8282BE48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8285a6f4
	goto loc_8285A6F4;
loc_8285A6B8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8282b4e8
	ctx.lr = 0x8285A6C0;
	sub_8282B4E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8285a6f4
	goto loc_8285A6F4;
loc_8285A6C8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8282b9f0
	ctx.lr = 0x8285A6D0;
	sub_8282B9F0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8285a6f4
	goto loc_8285A6F4;
loc_8285A6D8:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8282b930
	ctx.lr = 0x8285A6E0;
	sub_8282B930(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8285a6f4
	goto loc_8285A6F4;
loc_8285A6E8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282b2a0
	ctx.lr = 0x8285A6F0;
	sub_8282B2A0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8285A6F4:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285A710"))) PPC_WEAK_FUNC(sub_8285A710);
PPC_FUNC_IMPL(__imp__sub_8285A710) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8285a7fc
	if (ctx.cr6.eq) goto loc_8285A7FC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8285a7e8
	if (ctx.cr6.eq) goto loc_8285A7E8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8285a7d4
	if (ctx.cr6.eq) goto loc_8285A7D4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8285a7c0
	if (ctx.cr6.eq) goto loc_8285A7C0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8285a7ac
	if (ctx.cr6.eq) goto loc_8285A7AC;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8285a798
	if (ctx.cr6.eq) goto loc_8285A798;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x8285a784
	if (ctx.cr6.eq) goto loc_8285A784;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8285a80c
	goto loc_8285A80C;
loc_8285A784:
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8282ab20
	ctx.lr = 0x8285A790;
	sub_8282AB20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8285a80c
	goto loc_8285A80C;
loc_8285A798:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8282b388
	ctx.lr = 0x8285A7A4;
	sub_8282B388(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8285a80c
	goto loc_8285A80C;
loc_8285A7AC:
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8282bc58
	ctx.lr = 0x8285A7B8;
	sub_8282BC58(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8285a80c
	goto loc_8285A80C;
loc_8285A7C0:
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8282a9e8
	ctx.lr = 0x8285A7CC;
	sub_8282A9E8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8285a80c
	goto loc_8285A80C;
loc_8285A7D4:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8282b010
	ctx.lr = 0x8285A7E0;
	sub_8282B010(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8285a80c
	goto loc_8285A80C;
loc_8285A7E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x8282aca0
	ctx.lr = 0x8285A7F4;
	sub_8282ACA0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8285a80c
	goto loc_8285A80C;
loc_8285A7FC:
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8282a848
	ctx.lr = 0x8285A808;
	sub_8282A848(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8285A80C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8285A824"))) PPC_WEAK_FUNC(sub_8285A824);
PPC_FUNC_IMPL(__imp__sub_8285A824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285A828"))) PPC_WEAK_FUNC(sub_8285A828);
PPC_FUNC_IMPL(__imp__sub_8285A828) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,14948(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14948);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8285a920
	if (ctx.cr6.eq) goto loc_8285A920;
	// bl 0x8282bf78
	ctx.lr = 0x8285A860;
	sub_8282BF78(ctx, base);
	// lwz r11,14948(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285a884
	if (ctx.cr6.eq) goto loc_8285A884;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285a87c
	if (ctx.cr6.eq) goto loc_8285A87C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x8285a888
	goto loc_8285A888;
loc_8285A87C:
	// li r10,154
	ctx.r10.s64 = 154;
	// b 0x8285a888
	goto loc_8285A888;
loc_8285A884:
	// li r10,153
	ctx.r10.s64 = 153;
loc_8285A888:
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285a8bc
	if (ctx.cr6.eq) goto loc_8285A8BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285a8ac
	if (ctx.cr6.eq) goto loc_8285A8AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285a8c4
	if (!ctx.cr6.eq) goto loc_8285A8C4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285a8c4
	goto loc_8285A8C4;
loc_8285A8AC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285a8c4
	goto loc_8285A8C4;
loc_8285A8BC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285A8C4:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r6,2856(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 2856);
	// lwz r4,6468(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ld r5,3780(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3780);
	// beq cr6,0x8285a914
	if (ctx.cr6.eq) goto loc_8285A914;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285a914
	if (ctx.cr6.eq) goto loc_8285A914;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285a914
	if (ctx.cr6.eq) goto loc_8285A914;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285a914
	if (ctx.cr6.eq) goto loc_8285A914;
	// bl 0x8279f5e0
	ctx.lr = 0x8285A914;
	sub_8279F5E0(ctx, base);
loc_8285A914:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282c000
	ctx.lr = 0x8285A920;
	sub_8282C000(ctx, base);
loc_8285A920:
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

__attribute__((alias("__imp__sub_8285A934"))) PPC_WEAK_FUNC(sub_8285A934);
PPC_FUNC_IMPL(__imp__sub_8285A934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285A938"))) PPC_WEAK_FUNC(sub_8285A938);
PPC_FUNC_IMPL(__imp__sub_8285A938) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x8282bf78
	ctx.lr = 0x8285A96C;
	sub_8282BF78(ctx, base);
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285a9a0
	if (ctx.cr6.eq) goto loc_8285A9A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285a990
	if (ctx.cr6.eq) goto loc_8285A990;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285a9a8
	if (!ctx.cr6.eq) goto loc_8285A9A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285a9a8
	goto loc_8285A9A8;
loc_8285A990:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285a9a8
	goto loc_8285A9A8;
loc_8285A9A0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285A9A8:
	// ld r6,2856(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 2856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,4748(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4748);
	// lwz r4,6440(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6440);
	// beq cr6,0x8285a9f0
	if (ctx.cr6.eq) goto loc_8285A9F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285a9f0
	if (ctx.cr6.eq) goto loc_8285A9F0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285a9f0
	if (ctx.cr6.eq) goto loc_8285A9F0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285a9f0
	if (ctx.cr6.eq) goto loc_8285A9F0;
	// bl 0x8279f5e0
	ctx.lr = 0x8285A9F0;
	sub_8279F5E0(ctx, base);
loc_8285A9F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282c000
	ctx.lr = 0x8285A9FC;
	sub_8282C000(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8285AA1C"))) PPC_WEAK_FUNC(sub_8285AA1C);
PPC_FUNC_IMPL(__imp__sub_8285AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285AA20"))) PPC_WEAK_FUNC(sub_8285AA20);
PPC_FUNC_IMPL(__imp__sub_8285AA20) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,14464(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14464);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8285ab08
	if (ctx.cr6.eq) goto loc_8285AB08;
	// bl 0x8282bf78
	ctx.lr = 0x8285AA5C;
	sub_8282BF78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,14464(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14464);
	// bl 0x82829f98
	ctx.lr = 0x8285AA6C;
	sub_82829F98(ctx, base);
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285aaa0
	if (ctx.cr6.eq) goto loc_8285AAA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285aa90
	if (ctx.cr6.eq) goto loc_8285AA90;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285aaa8
	if (!ctx.cr6.eq) goto loc_8285AAA8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285aaa8
	goto loc_8285AAA8;
loc_8285AA90:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285aaa8
	goto loc_8285AAA8;
loc_8285AAA0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285AAA8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r6,2856(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 2856);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,6468(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6468);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ld r5,3780(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3780);
	// beq cr6,0x8285aafc
	if (ctx.cr6.eq) goto loc_8285AAFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285aafc
	if (ctx.cr6.eq) goto loc_8285AAFC;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285aafc
	if (ctx.cr6.eq) goto loc_8285AAFC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285aafc
	if (ctx.cr6.eq) goto loc_8285AAFC;
	// bl 0x8279f5e0
	ctx.lr = 0x8285AAFC;
	sub_8279F5E0(ctx, base);
loc_8285AAFC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282c000
	ctx.lr = 0x8285AB08;
	sub_8282C000(ctx, base);
loc_8285AB08:
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

__attribute__((alias("__imp__sub_8285AB1C"))) PPC_WEAK_FUNC(sub_8285AB1C);
PPC_FUNC_IMPL(__imp__sub_8285AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285AB20"))) PPC_WEAK_FUNC(sub_8285AB20);
PPC_FUNC_IMPL(__imp__sub_8285AB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8285AB28;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x8282bf78
	ctx.lr = 0x8285AB50;
	sub_8282BF78(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r25,r11,-29532
	ctx.r25.s64 = ctx.r11.s64 + -29532;
	// lwz r11,11700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// lwz r23,0(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r22,4(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285ab8c
	if (ctx.cr6.eq) goto loc_8285AB8C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285ab84
	if (ctx.cr6.eq) goto loc_8285AB84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285ab90
	if (!ctx.cr6.eq) goto loc_8285AB90;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8285ab90
	goto loc_8285AB90;
loc_8285AB84:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8285ab90
	goto loc_8285AB90;
loc_8285AB8C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8285AB90:
	// ld r5,5404(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 5404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,6468(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6468);
	// beq cr6,0x8285abdc
	if (ctx.cr6.eq) goto loc_8285ABDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285abdc
	if (ctx.cr6.eq) goto loc_8285ABDC;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285abdc
	if (ctx.cr6.eq) goto loc_8285ABDC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285abdc
	if (ctx.cr6.eq) goto loc_8285ABDC;
	// bl 0x8279f458
	ctx.lr = 0x8285ABD4;
	sub_8279F458(ctx, base);
	// lwz r22,4(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r23,0(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8285ABDC:
	// addi r27,r29,16668
	ctx.r27.s64 = ctx.r29.s64 + 16668;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_8285ABE4:
	// ld r28,2856(r29)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + 2856);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwz r10,22844(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22844);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mullw r30,r11,r10
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_8285ABFC:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x8285ac34
	if (!ctx.cr6.gt) goto loc_8285AC34;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82829db8
	ctx.lr = 0x8285AC24;
	sub_82829DB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ld r5,3780(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3780);
loc_8285AC34:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8285abfc
	if (ctx.cr6.lt) goto loc_8285ABFC;
	// cmpd cr6,r5,r28
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r28.s64, ctx.xer);
	// blt cr6,0x8285ac4c
	if (ctx.cr6.lt) goto loc_8285AC4C;
	// beq cr6,0x8285acd0
	if (ctx.cr6.eq) goto loc_8285ACD0;
loc_8285AC4C:
	// lwz r11,11700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285ac78
	if (ctx.cr6.eq) goto loc_8285AC78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285ac70
	if (ctx.cr6.eq) goto loc_8285AC70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285ac7c
	if (!ctx.cr6.eq) goto loc_8285AC7C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8285ac7c
	goto loc_8285AC7C;
loc_8285AC70:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8285ac7c
	goto loc_8285AC7C;
loc_8285AC78:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8285AC7C:
	// lwz r4,6468(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285acc4
	if (ctx.cr6.eq) goto loc_8285ACC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285acc4
	if (ctx.cr6.eq) goto loc_8285ACC4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285acc4
	if (ctx.cr6.eq) goto loc_8285ACC4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285acc4
	if (ctx.cr6.eq) goto loc_8285ACC4;
	// bl 0x8279f380
	ctx.lr = 0x8285ACBC;
	sub_8279F380(ctx, base);
	// lwz r22,4(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r23,0(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8285ACC4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// blt cr6,0x8285abe4
	if (ctx.cr6.lt) goto loc_8285ABE4;
loc_8285ACD0:
	// lwz r11,11700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285acfc
	if (ctx.cr6.eq) goto loc_8285ACFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285acf4
	if (ctx.cr6.eq) goto loc_8285ACF4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285ad00
	if (!ctx.cr6.eq) goto loc_8285AD00;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8285ad00
	goto loc_8285AD00;
loc_8285ACF4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8285ad00
	goto loc_8285AD00;
loc_8285ACFC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8285AD00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285ad3c
	if (ctx.cr6.eq) goto loc_8285AD3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285ad3c
	if (ctx.cr6.eq) goto loc_8285AD3C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285ad3c
	if (ctx.cr6.eq) goto loc_8285AD3C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285ad3c
	if (ctx.cr6.eq) goto loc_8285AD3C;
	// bl 0x8279e028
	ctx.lr = 0x8285AD3C;
	sub_8279E028(ctx, base);
loc_8285AD3C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8282c000
	ctx.lr = 0x8285AD48;
	sub_8282C000(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285AD58"))) PPC_WEAK_FUNC(sub_8285AD58);
PPC_FUNC_IMPL(__imp__sub_8285AD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8285AD60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,48(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,11700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285adb8
	if (ctx.cr6.eq) goto loc_8285ADB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285adb0
	if (ctx.cr6.eq) goto loc_8285ADB0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285adbc
	if (!ctx.cr6.eq) goto loc_8285ADBC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285adbc
	goto loc_8285ADBC;
loc_8285ADB0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8285adbc
	goto loc_8285ADBC;
loc_8285ADB8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285ADBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285ae00
	if (ctx.cr6.eq) goto loc_8285AE00;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8285ae00
	if (ctx.cr6.eq) goto loc_8285AE00;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285ae00
	if (ctx.cr6.eq) goto loc_8285AE00;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285ae00
	if (ctx.cr6.eq) goto loc_8285AE00;
	// bl 0x8279ddc8
	ctx.lr = 0x8285ADF8;
	sub_8279DDC8(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8285AE00:
	// lwz r11,11700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285ae2c
	if (ctx.cr6.eq) goto loc_8285AE2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285ae24
	if (ctx.cr6.eq) goto loc_8285AE24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285ae30
	if (!ctx.cr6.eq) goto loc_8285AE30;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285ae30
	goto loc_8285AE30;
loc_8285AE24:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8285ae30
	goto loc_8285AE30;
loc_8285AE2C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285AE30:
	// ld r6,2856(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 2856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,5196(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 5196);
	// lwz r4,6468(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6468);
	// beq cr6,0x8285ae80
	if (ctx.cr6.eq) goto loc_8285AE80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8285ae80
	if (ctx.cr6.eq) goto loc_8285AE80;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285ae80
	if (ctx.cr6.eq) goto loc_8285AE80;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285ae80
	if (ctx.cr6.eq) goto loc_8285AE80;
	// bl 0x8279f5e0
	ctx.lr = 0x8285AE78;
	sub_8279F5E0(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8285AE80:
	// lwz r11,11700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285aeb4
	if (ctx.cr6.eq) goto loc_8285AEB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285aeac
	if (ctx.cr6.eq) goto loc_8285AEAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285aea4
	if (ctx.cr6.eq) goto loc_8285AEA4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285aeb8
	goto loc_8285AEB8;
loc_8285AEA4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8285aeb8
	goto loc_8285AEB8;
loc_8285AEAC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8285aeb8
	goto loc_8285AEB8;
loc_8285AEB4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8285AEB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285af00
	if (ctx.cr6.eq) goto loc_8285AF00;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8285af00
	if (ctx.cr6.eq) goto loc_8285AF00;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8285af00
	if (ctx.cr6.eq) goto loc_8285AF00;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285af00
	if (ctx.cr6.eq) goto loc_8285AF00;
	// lhz r10,2496(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8285af00
	if (!ctx.cr6.gt) goto loc_8285AF00;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8285AF00:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285af28
	if (ctx.cr6.eq) goto loc_8285AF28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285af20
	if (ctx.cr6.eq) goto loc_8285AF20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285af2c
	if (!ctx.cr6.eq) goto loc_8285AF2C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285af2c
	goto loc_8285AF2C;
loc_8285AF20:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8285af2c
	goto loc_8285AF2C;
loc_8285AF28:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285AF2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285af68
	if (ctx.cr6.eq) goto loc_8285AF68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285af68
	if (ctx.cr6.eq) goto loc_8285AF68;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285af68
	if (ctx.cr6.eq) goto loc_8285AF68;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285af68
	if (ctx.cr6.eq) goto loc_8285AF68;
	// bl 0x8279dd48
	ctx.lr = 0x8285AF68;
	sub_8279DD48(ctx, base);
loc_8285AF68:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285AF74"))) PPC_WEAK_FUNC(sub_8285AF74);
PPC_FUNC_IMPL(__imp__sub_8285AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285AF78"))) PPC_WEAK_FUNC(sub_8285AF78);
PPC_FUNC_IMPL(__imp__sub_8285AF78) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x8282bf78
	ctx.lr = 0x8285AFAC;
	sub_8282BF78(ctx, base);
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285afe0
	if (ctx.cr6.eq) goto loc_8285AFE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285afd0
	if (ctx.cr6.eq) goto loc_8285AFD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285afe8
	if (!ctx.cr6.eq) goto loc_8285AFE8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285afe8
	goto loc_8285AFE8;
loc_8285AFD0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285afe8
	goto loc_8285AFE8;
loc_8285AFE0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285AFE8:
	// ld r6,2856(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 2856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,5156(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 5156);
	// lwz r4,6468(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6468);
	// beq cr6,0x8285b030
	if (ctx.cr6.eq) goto loc_8285B030;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285b030
	if (ctx.cr6.eq) goto loc_8285B030;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285b030
	if (ctx.cr6.eq) goto loc_8285B030;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285b030
	if (ctx.cr6.eq) goto loc_8285B030;
	// bl 0x8279f5e0
	ctx.lr = 0x8285B030;
	sub_8279F5E0(ctx, base);
loc_8285B030:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282c000
	ctx.lr = 0x8285B03C;
	sub_8282C000(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8285B05C"))) PPC_WEAK_FUNC(sub_8285B05C);
PPC_FUNC_IMPL(__imp__sub_8285B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285B060"))) PPC_WEAK_FUNC(sub_8285B060);
PPC_FUNC_IMPL(__imp__sub_8285B060) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,21228(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21228);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8285b168
	if (ctx.cr6.eq) goto loc_8285B168;
	// bl 0x8282bf78
	ctx.lr = 0x8285B098;
	sub_8282BF78(ctx, base);
	// lwz r11,21228(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285b0cc
	if (ctx.cr6.eq) goto loc_8285B0CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285b0c4
	if (ctx.cr6.eq) goto loc_8285B0C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b0bc
	if (ctx.cr6.eq) goto loc_8285B0BC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x8285b0d0
	goto loc_8285B0D0;
loc_8285B0BC:
	// li r10,163
	ctx.r10.s64 = 163;
	// b 0x8285b0d0
	goto loc_8285B0D0;
loc_8285B0C4:
	// li r10,152
	ctx.r10.s64 = 152;
	// b 0x8285b0d0
	goto loc_8285B0D0;
loc_8285B0CC:
	// li r10,151
	ctx.r10.s64 = 151;
loc_8285B0D0:
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285b104
	if (ctx.cr6.eq) goto loc_8285B104;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b0f4
	if (ctx.cr6.eq) goto loc_8285B0F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285b10c
	if (!ctx.cr6.eq) goto loc_8285B10C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285b10c
	goto loc_8285B10C;
loc_8285B0F4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285b10c
	goto loc_8285B10C;
loc_8285B104:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285B10C:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r6,2856(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 2856);
	// lwz r4,6468(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ld r5,3780(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3780);
	// beq cr6,0x8285b15c
	if (ctx.cr6.eq) goto loc_8285B15C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285b15c
	if (ctx.cr6.eq) goto loc_8285B15C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285b15c
	if (ctx.cr6.eq) goto loc_8285B15C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285b15c
	if (ctx.cr6.eq) goto loc_8285B15C;
	// bl 0x8279f5e0
	ctx.lr = 0x8285B15C;
	sub_8279F5E0(ctx, base);
loc_8285B15C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282c000
	ctx.lr = 0x8285B168;
	sub_8282C000(ctx, base);
loc_8285B168:
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

__attribute__((alias("__imp__sub_8285B17C"))) PPC_WEAK_FUNC(sub_8285B17C);
PPC_FUNC_IMPL(__imp__sub_8285B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285B180"))) PPC_WEAK_FUNC(sub_8285B180);
PPC_FUNC_IMPL(__imp__sub_8285B180) {
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
	// beq cr6,0x8285b1d0
	if (ctx.cr6.eq) goto loc_8285B1D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b1c0
	if (ctx.cr6.eq) goto loc_8285B1C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285b1d8
	if (!ctx.cr6.eq) goto loc_8285B1D8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285b1d8
	goto loc_8285B1D8;
loc_8285B1C0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285b1d8
	goto loc_8285B1D8;
loc_8285B1D0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285B1D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804270
	ctx.lr = 0x8285B1E4;
	sub_82804270(ctx, base);
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

__attribute__((alias("__imp__sub_8285B1F8"))) PPC_WEAK_FUNC(sub_8285B1F8);
PPC_FUNC_IMPL(__imp__sub_8285B1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,7160(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7160);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8285b408
	if (!ctx.cr6.eq) goto loc_8285B408;
	// lwz r11,6556(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6556);
	// addi r9,r8,6552
	ctx.r9.s64 = ctx.r8.s64 + 6552;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8285b408
	if (!ctx.cr6.eq) goto loc_8285B408;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,18532(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18532);
	// addi r6,r10,-29532
	ctx.r6.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,-29532(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// beq cr6,0x8285b270
	if (ctx.cr6.eq) goto loc_8285B270;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b268
	if (ctx.cr6.eq) goto loc_8285B268;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285b260
	if (ctx.cr6.eq) goto loc_8285B260;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285b274
	goto loc_8285B274;
loc_8285B260:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285b274
	goto loc_8285B274;
loc_8285B268:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8285b274
	goto loc_8285B274;
loc_8285B270:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8285B274:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r5,23220(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23220);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8285b2a4
	if (!ctx.cr6.eq) goto loc_8285B2A4;
	// lwz r5,2820(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2820);
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x8285b2c8
	if (ctx.cr6.eq) goto loc_8285B2C8;
	// lwz r10,23224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8285b2c8
	if (ctx.cr6.eq) goto loc_8285B2C8;
loc_8285B2A4:
	// lwz r10,7152(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8285b3fc
	if (!ctx.cr6.eq) goto loc_8285B3FC;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,150
	ctx.r10.s64 = ctx.r10.s64 + 150;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8285b3fc
	if (!ctx.cr6.eq) goto loc_8285B3FC;
loc_8285B2C8:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,23220(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23220);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8285b354
	if (!ctx.cr6.eq) goto loc_8285B354;
	// lwz r9,2820(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2820);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8285b2f8
	if (ctx.cr6.eq) goto loc_8285B2F8;
	// lwz r10,23224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8285b354
	if (!ctx.cr6.eq) goto loc_8285B354;
loc_8285B2F8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285b320
	if (ctx.cr6.eq) goto loc_8285B320;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b318
	if (ctx.cr6.eq) goto loc_8285B318;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285b324
	if (!ctx.cr6.eq) goto loc_8285B324;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285b324
	goto loc_8285B324;
loc_8285B318:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8285b324
	goto loc_8285B324;
loc_8285B320:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8285B324:
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
	// bne cr6,0x8285b354
	if (!ctx.cr6.eq) goto loc_8285B354;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8285b3cc
	if (ctx.cr6.eq) goto loc_8285B3CC;
	// lwz r11,23224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285b3cc
	if (ctx.cr6.eq) goto loc_8285B3CC;
loc_8285B354:
	// lfs f13,23240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23240);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,11700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11700);
	// lfs f0,14136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,14140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,23244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23244);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f13,f7
	ctx.f13.f64 = double(float(sqrt(ctx.f7.f64)));
	// beq cr6,0x8285b3a4
	if (ctx.cr6.eq) goto loc_8285B3A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b39c
	if (ctx.cr6.eq) goto loc_8285B39C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285b3a8
	if (!ctx.cr6.eq) goto loc_8285B3A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285b3a8
	goto loc_8285B3A8;
loc_8285B39C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8285b3a8
	goto loc_8285B3A8;
loc_8285B3A4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8285B3A8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-4388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4388);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f12,1160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x8285b3fc
	if (ctx.cr6.lt) goto loc_8285B3FC;
loc_8285B3CC:
	// lwz r11,22800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285b3fc
	if (!ctx.cr6.eq) goto loc_8285B3FC;
	// lwz r11,22804(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285b3fc
	if (!ctx.cr6.eq) goto loc_8285B3FC;
	// lwz r11,13408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285b3fc
	if (!ctx.cr6.eq) goto loc_8285B3FC;
	// lwz r11,13412(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285b408
	if (ctx.cr6.eq) goto loc_8285B408;
loc_8285B3FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8285B408:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285B414"))) PPC_WEAK_FUNC(sub_8285B414);
PPC_FUNC_IMPL(__imp__sub_8285B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285B418"))) PPC_WEAK_FUNC(sub_8285B418);
PPC_FUNC_IMPL(__imp__sub_8285B418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285B41C"))) PPC_WEAK_FUNC(sub_8285B41C);
PPC_FUNC_IMPL(__imp__sub_8285B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285B420"))) PPC_WEAK_FUNC(sub_8285B420);
PPC_FUNC_IMPL(__imp__sub_8285B420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,23276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23276);
	// ld r5,2856(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 2856);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8285b454
	if (!ctx.cr6.eq) goto loc_8285B454;
	// ld r11,5012(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5012);
	// ld r9,5004(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5004);
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
loc_8285B454:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,20140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20140);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8285b478
	if (!ctx.cr6.eq) goto loc_8285B478;
	// lwz r11,22812(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285b490
	if (ctx.cr6.eq) goto loc_8285B490;
loc_8285B478:
	// ld r11,5220(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5220);
	// ld r9,5204(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5204);
	// ld r8,5196(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5196);
	// or r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
loc_8285B490:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r9,18532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18532);
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x8285b4cc
	if (ctx.cr6.eq) goto loc_8285B4CC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8285b4c4
	if (ctx.cr6.eq) goto loc_8285B4C4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8285b4d0
	if (!ctx.cr6.eq) goto loc_8285B4D0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8285b4d0
	goto loc_8285B4D0;
loc_8285B4C4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8285b4d0
	goto loc_8285B4D0;
loc_8285B4CC:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8285B4D0:
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,48(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,14424(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14424);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8285b500
	if (ctx.cr6.eq) goto loc_8285B500;
	// ld r7,5100(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5100);
	// ld r9,5156(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5156);
	// ld r4,5092(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5092);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 | ctx.r4.u64;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
loc_8285B500:
	// lwz r9,11700(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11700);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8285b52c
	if (ctx.cr6.eq) goto loc_8285B52C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8285b530
	if (ctx.cr6.eq) goto loc_8285B530;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8285b524
	if (ctx.cr6.eq) goto loc_8285B524;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8285b530
	goto loc_8285B530;
loc_8285B524:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285b530
	goto loc_8285B530;
loc_8285B52C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8285B530:
	// lwz r4,6468(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6468);
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
	// b 0x8279f5e0
	sub_8279F5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285B570"))) PPC_WEAK_FUNC(sub_8285B570);
PPC_FUNC_IMPL(__imp__sub_8285B570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285B574"))) PPC_WEAK_FUNC(sub_8285B574);
PPC_FUNC_IMPL(__imp__sub_8285B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285B578"))) PPC_WEAK_FUNC(sub_8285B578);
PPC_FUNC_IMPL(__imp__sub_8285B578) {
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
	// beq cr6,0x8285b5b8
	if (ctx.cr6.eq) goto loc_8285B5B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b5a8
	if (ctx.cr6.eq) goto loc_8285B5A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285b5c0
	if (!ctx.cr6.eq) goto loc_8285B5C0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285b5c0
	goto loc_8285B5C0;
loc_8285B5A8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285b5c0
	goto loc_8285B5C0;
loc_8285B5B8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285B5C0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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

__attribute__((alias("__imp__sub_8285B5D8"))) PPC_WEAK_FUNC(sub_8285B5D8);
PPC_FUNC_IMPL(__imp__sub_8285B5D8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285b638
	if (ctx.cr6.eq) goto loc_8285B638;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285b628
	if (ctx.cr6.eq) goto loc_8285B628;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285b640
	if (ctx.cr6.eq) goto loc_8285B640;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8285b640
	goto loc_8285B640;
loc_8285B628:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285b640
	goto loc_8285B640;
loc_8285B638:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285B640:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283d648
	ctx.lr = 0x8285B648;
	sub_8283D648(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285b6a4
	if (ctx.cr6.eq) goto loc_8285B6A4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f12,12748(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12748);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r7,112(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
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
	// bge cr6,0x8285b6a4
	if (!ctx.cr6.lt) goto loc_8285B6A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8285b6a8
	goto loc_8285B6A8;
loc_8285B6A4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8285B6A8:
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

__attribute__((alias("__imp__sub_8285B6C0"))) PPC_WEAK_FUNC(sub_8285B6C0);
PPC_FUNC_IMPL(__imp__sub_8285B6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8285B6C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r27,-29532(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r26,4(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,48(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r31,11700(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8285b738
	if (ctx.cr6.eq) goto loc_8285B738;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285b730
	if (ctx.cr6.eq) goto loc_8285B730;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285b728
	if (ctx.cr6.eq) goto loc_8285B728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285b73c
	goto loc_8285B73C;
loc_8285B728:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8285b73c
	goto loc_8285B73C;
loc_8285B730:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8285b73c
	goto loc_8285B73C;
loc_8285B738:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8285B73C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283f2a8
	ctx.lr = 0x8285B744;
	sub_8283F2A8(ctx, base);
	// lwz r11,14184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x8285b75c
	if (ctx.cr6.eq) goto loc_8285B75C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x8285b8a4
	if (!ctx.cr6.eq) goto loc_8285B8A4;
loc_8285B75C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8285b78c
	if (ctx.cr6.eq) goto loc_8285B78C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8285b784
	if (ctx.cr6.eq) goto loc_8285B784;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8285b77c
	if (ctx.cr6.eq) goto loc_8285B77C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8285b790
	goto loc_8285B790;
loc_8285B77C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8285b790
	goto loc_8285B790;
loc_8285B784:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8285b790
	goto loc_8285B790;
loc_8285B78C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8285B790:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,10348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10348);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8285b894
	if (!ctx.cr6.eq) goto loc_8285B894;
	// lwz r10,10240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10240);
	// addi r11,r11,10236
	ctx.r11.s64 = ctx.r11.s64 + 10236;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8285b894
	if (!ctx.cr6.eq) goto loc_8285B894;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8285b7f4
	if (ctx.cr6.eq) goto loc_8285B7F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285b7ec
	if (ctx.cr6.eq) goto loc_8285B7EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285b7e4
	if (ctx.cr6.eq) goto loc_8285B7E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285b7f8
	goto loc_8285B7F8;
loc_8285B7E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8285b7f8
	goto loc_8285B7F8;
loc_8285B7EC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8285b7f8
	goto loc_8285B7F8;
loc_8285B7F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8285B7F8:
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8283ed00
	ctx.lr = 0x8285B804;
	sub_8283ED00(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285b864
	if (!ctx.cr6.eq) goto loc_8285B864;
	// lwz r3,17412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17412);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8285b83c
	if (ctx.cr6.eq) goto loc_8285B83C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8285b834
	if (ctx.cr6.eq) goto loc_8285B834;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8285b840
	if (!ctx.cr6.eq) goto loc_8285B840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8285b840
	goto loc_8285B840;
loc_8285B834:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8285b840
	goto loc_8285B840;
loc_8285B83C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8285B840:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8283f2a8
	ctx.lr = 0x8285B848;
	sub_8283F2A8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x8285b8d0
	if (!ctx.cr6.eq) goto loc_8285B8D0;
	// li r25,7
	ctx.r25.s64 = 7;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_8285B864:
	// cmpwi cr6,r28,22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 22, ctx.xer);
	// beq cr6,0x8285b884
	if (ctx.cr6.eq) goto loc_8285B884;
	// cmpwi cr6,r28,31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 31, ctx.xer);
	// bne cr6,0x8285b8d0
	if (!ctx.cr6.eq) goto loc_8285B8D0;
	// li r25,8
	ctx.r25.s64 = 8;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_8285B884:
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_8285B894:
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_8285B8A4:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// beq cr6,0x8285b8cc
	if (ctx.cr6.eq) goto loc_8285B8CC;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 13, ctx.xer);
	// beq cr6,0x8285b8bc
	if (ctx.cr6.eq) goto loc_8285B8BC;
	// cmpwi cr6,r28,63
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 63, ctx.xer);
	// bne cr6,0x8285b8d0
	if (!ctx.cr6.eq) goto loc_8285B8D0;
loc_8285B8BC:
	// li r25,4
	ctx.r25.s64 = 4;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_8285B8CC:
	// li r25,5
	ctx.r25.s64 = 5;
loc_8285B8D0:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285B8DC"))) PPC_WEAK_FUNC(sub_8285B8DC);
PPC_FUNC_IMPL(__imp__sub_8285B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285B8E0"))) PPC_WEAK_FUNC(sub_8285B8E0);
PPC_FUNC_IMPL(__imp__sub_8285B8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8285B8E8;
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
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8282ee78
	ctx.lr = 0x8285B930;
	sub_8282EE78(ctx, base);
	// lfs f0,18876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18876);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,14136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,18880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18880);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,23240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23240);
	ctx.f10.f64 = double(temp.f32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// lfs f7,14140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14140);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,18876
	ctx.r11.s64 = ctx.r31.s64 + 18876;
	// lfs f4,23244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23244);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r22,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmuls f1,f9,f9
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f0,f5,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f13,f3,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x8285b99c
	if (!ctx.cr6.gt) goto loc_8285B99C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8285B99C:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285B9A8"))) PPC_WEAK_FUNC(sub_8285B9A8);
PPC_FUNC_IMPL(__imp__sub_8285B9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x8285B9B0;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// addi r26,r10,-29532
	ctx.r26.s64 = ctx.r10.s64 + -29532;
	// lwz r24,-29532(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r21,13192(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r20,13188(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r19,13180(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r18,13184(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r23,4(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r10,11700(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 11700);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285ba3c
	if (ctx.cr6.eq) goto loc_8285BA3C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285ba34
	if (ctx.cr6.eq) goto loc_8285BA34;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285ba40
	if (!ctx.cr6.eq) goto loc_8285BA40;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8285ba40
	goto loc_8285BA40;
loc_8285BA34:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x8285ba40
	goto loc_8285BA40;
loc_8285BA3C:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8285BA40:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1272);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8285bc14
	if (!ctx.cr6.eq) goto loc_8285BC14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8285b1f8
	ctx.lr = 0x8285BA64;
	sub_8285B1F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285bc14
	if (ctx.cr6.eq) goto loc_8285BC14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bef3d0
	ctx.lr = 0x8285BA78;
	sub_82BEF3D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8285baac
	if (ctx.cr6.eq) goto loc_8285BAAC;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// beq cr6,0x8285baa4
	if (ctx.cr6.eq) goto loc_8285BAA4;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x8285ba9c
	if (ctx.cr6.eq) goto loc_8285BA9C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8285bab0
	goto loc_8285BAB0;
loc_8285BA9C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285bab0
	goto loc_8285BAB0;
loc_8285BAA4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8285bab0
	goto loc_8285BAB0;
loc_8285BAAC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8285BAB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285bc14
	if (ctx.cr6.eq) goto loc_8285BC14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,14136(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 14136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23240(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 23240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14140(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 14140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,23244(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 23244);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8285bc14
	if (ctx.cr6.eq) goto loc_8285BC14;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82124928
	ctx.lr = 0x8285BB10;
	sub_82124928(ctx, base);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8285bb40
	if (ctx.cr6.eq) goto loc_8285BB40;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// beq cr6,0x8285bb38
	if (ctx.cr6.eq) goto loc_8285BB38;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x8285bb30
	if (ctx.cr6.eq) goto loc_8285BB30;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8285bb44
	goto loc_8285BB44;
loc_8285BB30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285bb44
	goto loc_8285BB44;
loc_8285BB38:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8285bb44
	goto loc_8285BB44;
loc_8285BB40:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8285BB44:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82804270
	ctx.lr = 0x8285BB4C;
	sub_82804270(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8285bc14
	if (ctx.cr6.eq) goto loc_8285BC14;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82124928
	ctx.lr = 0x8285BB8C;
	sub_82124928(ctx, base);
	// lfs f7,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmsubs f8,f13,f31,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f12.f64));
	// fsubs f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmadds f2,f8,f10,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f1,f4,f9,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8285bbd4
	if (ctx.cr6.gt) goto loc_8285BBD4;
	// stw r17,20136(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20136, ctx.r17.u32);
	// b 0x8285bbdc
	goto loc_8285BBDC;
loc_8285BBD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20136(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20136, ctx.r11.u32);
loc_8285BBDC:
	// lwz r3,11700(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8285bc08
	if (ctx.cr6.eq) goto loc_8285BC08;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8285bc00
	if (ctx.cr6.eq) goto loc_8285BC00;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8285bc0c
	if (!ctx.cr6.eq) goto loc_8285BC0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285bc0c
	goto loc_8285BC0C;
loc_8285BC00:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x8285bc0c
	goto loc_8285BC0C;
loc_8285BC08:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_8285BC0C:
	// lwz r4,20136(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20136);
	// bl 0x828022b0
	ctx.lr = 0x8285BC14;
	sub_828022B0(ctx, base);
loc_8285BC14:
	// stw r21,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r21.u32);
	// stw r19,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r19.u32);
	// stw r18,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r18.u32);
	// stw r20,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r20.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285BC30"))) PPC_WEAK_FUNC(sub_8285BC30);
PPC_FUNC_IMPL(__imp__sub_8285BC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,18876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18876);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// lfs f13,23240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,18880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18880);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,23244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23244);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f9,18884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18884);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,23248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23248);
	ctx.f7.f64 = double(temp.f32);
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
	// beq cr6,0x8285bcb0
	if (ctx.cr6.eq) goto loc_8285BCB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285bca0
	if (ctx.cr6.eq) goto loc_8285BCA0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285bcb8
	if (!ctx.cr6.eq) goto loc_8285BCB8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285bcb8
	goto loc_8285BCB8;
loc_8285BCA0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285bcb8
	goto loc_8285BCB8;
loc_8285BCB0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285BCB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285bcc8
	if (ctx.cr6.eq) goto loc_8285BCC8;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8285bccc
	goto loc_8285BCCC;
loc_8285BCC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8285BCCC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82747da0
	ctx.lr = 0x8285BCD4;
	sub_82747DA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82747a18
	ctx.lr = 0x8285BCE4;
	sub_82747A18(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fabs f0,f11
	ctx.f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8285bd24
	if (!ctx.cr6.lt) goto loc_8285BD24;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8285bd24
	if (!ctx.cr6.gt) goto loc_8285BD24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-29792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29792);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8285bd3c
	if (!ctx.cr6.gt) goto loc_8285BD3C;
loc_8285BD24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8285BD3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285BD54"))) PPC_WEAK_FUNC(sub_8285BD54);
PPC_FUNC_IMPL(__imp__sub_8285BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285BD58"))) PPC_WEAK_FUNC(sub_8285BD58);
PPC_FUNC_IMPL(__imp__sub_8285BD58) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8285bea0
	if (ctx.cr6.eq) goto loc_8285BEA0;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// stw r6,12724(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12724, ctx.r6.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lfs f0,-4012(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x8285bdc8
	if (ctx.cr6.eq) goto loc_8285BDC8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285bdc0
	if (ctx.cr6.eq) goto loc_8285BDC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285bdcc
	if (!ctx.cr6.eq) goto loc_8285BDCC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285bdcc
	goto loc_8285BDCC;
loc_8285BDC0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285bdcc
	goto loc_8285BDCC;
loc_8285BDC8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285BDCC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8285bdf4
	if (ctx.cr6.eq) goto loc_8285BDF4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8285be00
	if (!ctx.cr6.eq) goto loc_8285BE00;
loc_8285BDF4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_8285BE00:
	// lfs f13,21208(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21208);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// lfs f12,21196(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21196);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,21200(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21200);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,21204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21204);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x8285be80
	if (ctx.cr6.eq) goto loc_8285BE80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285be60
	if (ctx.cr6.eq) goto loc_8285BE60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285be84
	if (ctx.cr6.eq) goto loc_8285BE84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82807a90
	ctx.lr = 0x8285BE50;
	sub_82807A90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8285BE60:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82807a90
	ctx.lr = 0x8285BE70;
	sub_82807A90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8285BE80:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285BE84:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82807a90
	ctx.lr = 0x8285BE90;
	sub_82807A90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8285BEA0:
	// lwz r11,12724(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285bf88
	if (ctx.cr6.eq) goto loc_8285BF88;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r5,r7,21200
	ctx.r5.s64 = ctx.r7.s64 + 21200;
	// lfs f0,556(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// stfs f0,21196(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 21196, temp.u32);
	// lfs f0,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29684(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29684);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,21200(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 21200, temp.u32);
	// stfs f0,21204(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 21204, temp.u32);
	// stfs f13,21208(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 21208, temp.u32);
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285bf0c
	if (ctx.cr6.eq) goto loc_8285BF0C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285bf04
	if (ctx.cr6.eq) goto loc_8285BF04;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285bf10
	if (!ctx.cr6.eq) goto loc_8285BF10;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285bf10
	goto loc_8285BF10;
loc_8285BF04:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285bf10
	goto loc_8285BF10;
loc_8285BF0C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285BF10:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,21196(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8285bf3c
	if (ctx.cr6.eq) goto loc_8285BF3C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8285bf48
	if (!ctx.cr6.eq) goto loc_8285BF48;
loc_8285BF3C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_8285BF48:
	// lwz r11,11700(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285bf74
	if (ctx.cr6.eq) goto loc_8285BF74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285bf6c
	if (ctx.cr6.eq) goto loc_8285BF6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285bf78
	if (ctx.cr6.eq) goto loc_8285BF78;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8285bf78
	goto loc_8285BF78;
loc_8285BF6C:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285bf78
	goto loc_8285BF78;
loc_8285BF74:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8285BF78:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82807a90
	ctx.lr = 0x8285BF80;
	sub_82807A90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12724(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12724, ctx.r11.u32);
loc_8285BF88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285BF98"))) PPC_WEAK_FUNC(sub_8285BF98);
PPC_FUNC_IMPL(__imp__sub_8285BF98) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x8285b1f8
	ctx.lr = 0x8285BFC4;
	sub_8285B1F8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8285c00c
	if (ctx.cr6.eq) goto loc_8285C00C;
	// lfs f0,23240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23240);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,23240
	ctx.r5.s64 = ctx.r31.s64 + 23240;
	// stfs f0,21624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 21624, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f13,23244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,21628(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 21628, temp.u32);
	// lfs f12,23248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 23248);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,21632(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 21632, temp.u32);
	// bl 0x8282d528
	ctx.lr = 0x8285BFF4;
	sub_8282D528(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,14400(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14400, temp.u32);
	// stfs f10,14404(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14404, temp.u32);
	// stfs f9,14408(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14408, temp.u32);
loc_8285C00C:
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

__attribute__((alias("__imp__sub_8285C020"))) PPC_WEAK_FUNC(sub_8285C020);
PPC_FUNC_IMPL(__imp__sub_8285C020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,2096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// addi r9,r10,3352
	ctx.r9.s64 = ctx.r10.s64 + 3352;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r7,23220(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23220);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r8,2820(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2820);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x8285c074
	if (ctx.cr6.eq) goto loc_8285C074;
	// lwz r9,23224(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23224);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8285C074:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x8285bf98
	sub_8285BF98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285C080"))) PPC_WEAK_FUNC(sub_8285C080);
PPC_FUNC_IMPL(__imp__sub_8285C080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285C084"))) PPC_WEAK_FUNC(sub_8285C084);
PPC_FUNC_IMPL(__imp__sub_8285C084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285C088"))) PPC_WEAK_FUNC(sub_8285C088);
PPC_FUNC_IMPL(__imp__sub_8285C088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8285C090;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r27,13188(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// beq cr6,0x8285c0d8
	if (ctx.cr6.eq) goto loc_8285C0D8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c0d0
	if (ctx.cr6.eq) goto loc_8285C0D0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c0c8
	if (ctx.cr6.eq) goto loc_8285C0C8;
	// b 0x8285c0dc
	goto loc_8285C0DC;
loc_8285C0C8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c0dc
	goto loc_8285C0DC;
loc_8285C0D0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c0dc
	goto loc_8285C0DC;
loc_8285C0D8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C0DC:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,4652
	ctx.r6.s64 = ctx.r10.s64 + 4652;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6428(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// bl 0x82828d60
	ctx.lr = 0x8285C104;
	sub_82828D60(ctx, base);
	// lwz r8,6428(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5720(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5720, ctx.r8.u32);
	// stw r7,3080(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3080, ctx.r7.u32);
	// beq cr6,0x8285c144
	if (ctx.cr6.eq) goto loc_8285C144;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c13c
	if (ctx.cr6.eq) goto loc_8285C13C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c134
	if (ctx.cr6.eq) goto loc_8285C134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c148
	goto loc_8285C148;
loc_8285C134:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c148
	goto loc_8285C148;
loc_8285C13C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c148
	goto loc_8285C148;
loc_8285C144:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C148:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4064
	ctx.r6.s64 = ctx.r11.s64 + 4064;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6428(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// bl 0x82828d60
	ctx.lr = 0x8285C16C;
	sub_82828D60(ctx, base);
	// lwz r8,6428(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5724(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5724, ctx.r8.u32);
	// stw r7,3084(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3084, ctx.r7.u32);
	// beq cr6,0x8285c1ac
	if (ctx.cr6.eq) goto loc_8285C1AC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c1a4
	if (ctx.cr6.eq) goto loc_8285C1A4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c19c
	if (ctx.cr6.eq) goto loc_8285C19C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c1b0
	goto loc_8285C1B0;
loc_8285C19C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c1b0
	goto loc_8285C1B0;
loc_8285C1A4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c1b0
	goto loc_8285C1B0;
loc_8285C1AC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C1B0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4076
	ctx.r6.s64 = ctx.r11.s64 + 4076;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6428(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// bl 0x82828d60
	ctx.lr = 0x8285C1D4;
	sub_82828D60(ctx, base);
	// lwz r8,6428(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5728(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5728, ctx.r8.u32);
	// stw r7,3088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3088, ctx.r7.u32);
	// beq cr6,0x8285c214
	if (ctx.cr6.eq) goto loc_8285C214;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c20c
	if (ctx.cr6.eq) goto loc_8285C20C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c204
	if (ctx.cr6.eq) goto loc_8285C204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c218
	goto loc_8285C218;
loc_8285C204:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c218
	goto loc_8285C218;
loc_8285C20C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c218
	goto loc_8285C218;
loc_8285C214:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C218:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4088
	ctx.r6.s64 = ctx.r11.s64 + 4088;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6428(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// bl 0x82828d60
	ctx.lr = 0x8285C23C;
	sub_82828D60(ctx, base);
	// lwz r8,6428(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6428);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5732(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5732, ctx.r8.u32);
	// stw r7,3092(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3092, ctx.r7.u32);
	// beq cr6,0x8285c27c
	if (ctx.cr6.eq) goto loc_8285C27C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c274
	if (ctx.cr6.eq) goto loc_8285C274;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c26c
	if (ctx.cr6.eq) goto loc_8285C26C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c280
	goto loc_8285C280;
loc_8285C26C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c280
	goto loc_8285C280;
loc_8285C274:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c280
	goto loc_8285C280;
loc_8285C27C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C280:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4668
	ctx.r6.s64 = ctx.r11.s64 + 4668;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6432(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6432);
	// bl 0x82828d60
	ctx.lr = 0x8285C2A4;
	sub_82828D60(ctx, base);
	// lwz r8,6432(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6432);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5740(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5740, ctx.r8.u32);
	// stw r7,3100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3100, ctx.r7.u32);
	// beq cr6,0x8285c2e4
	if (ctx.cr6.eq) goto loc_8285C2E4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c2dc
	if (ctx.cr6.eq) goto loc_8285C2DC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c2d4
	if (ctx.cr6.eq) goto loc_8285C2D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c2e8
	goto loc_8285C2E8;
loc_8285C2D4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c2e8
	goto loc_8285C2E8;
loc_8285C2DC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c2e8
	goto loc_8285C2E8;
loc_8285C2E4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C2E8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4680
	ctx.r6.s64 = ctx.r11.s64 + 4680;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6432(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6432);
	// bl 0x82828d60
	ctx.lr = 0x8285C30C;
	sub_82828D60(ctx, base);
	// lwz r8,6432(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6432);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6340(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6340, ctx.r8.u32);
	// stw r7,3700(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3700, ctx.r7.u32);
	// beq cr6,0x8285c34c
	if (ctx.cr6.eq) goto loc_8285C34C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c344
	if (ctx.cr6.eq) goto loc_8285C344;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c33c
	if (ctx.cr6.eq) goto loc_8285C33C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c350
	goto loc_8285C350;
loc_8285C33C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c350
	goto loc_8285C350;
loc_8285C344:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c350
	goto loc_8285C350;
loc_8285C34C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C350:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4700
	ctx.r6.s64 = ctx.r11.s64 + 4700;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6420(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6420);
	// bl 0x82828d60
	ctx.lr = 0x8285C374;
	sub_82828D60(ctx, base);
	// lwz r8,6420(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6420);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5876(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5876, ctx.r8.u32);
	// stw r7,3236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3236, ctx.r7.u32);
	// beq cr6,0x8285c3b4
	if (ctx.cr6.eq) goto loc_8285C3B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c3ac
	if (ctx.cr6.eq) goto loc_8285C3AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c3a4
	if (ctx.cr6.eq) goto loc_8285C3A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c3b8
	goto loc_8285C3B8;
loc_8285C3A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c3b8
	goto loc_8285C3B8;
loc_8285C3AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c3b8
	goto loc_8285C3B8;
loc_8285C3B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C3B8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4712
	ctx.r6.s64 = ctx.r11.s64 + 4712;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C3DC;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5744(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5744, ctx.r8.u32);
	// stw r7,3104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3104, ctx.r7.u32);
	// beq cr6,0x8285c41c
	if (ctx.cr6.eq) goto loc_8285C41C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c414
	if (ctx.cr6.eq) goto loc_8285C414;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c40c
	if (ctx.cr6.eq) goto loc_8285C40C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c420
	goto loc_8285C420;
loc_8285C40C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c420
	goto loc_8285C420;
loc_8285C414:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c420
	goto loc_8285C420;
loc_8285C41C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C420:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4728
	ctx.r6.s64 = ctx.r11.s64 + 4728;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C444;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5748(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5748, ctx.r8.u32);
	// stw r7,3108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3108, ctx.r7.u32);
	// beq cr6,0x8285c484
	if (ctx.cr6.eq) goto loc_8285C484;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c47c
	if (ctx.cr6.eq) goto loc_8285C47C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c474
	if (ctx.cr6.eq) goto loc_8285C474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c488
	goto loc_8285C488;
loc_8285C474:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c488
	goto loc_8285C488;
loc_8285C47C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c488
	goto loc_8285C488;
loc_8285C484:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C488:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4748
	ctx.r6.s64 = ctx.r11.s64 + 4748;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C4AC;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5752(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5752, ctx.r8.u32);
	// stw r7,3112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3112, ctx.r7.u32);
	// beq cr6,0x8285c4ec
	if (ctx.cr6.eq) goto loc_8285C4EC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c4e4
	if (ctx.cr6.eq) goto loc_8285C4E4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c4dc
	if (ctx.cr6.eq) goto loc_8285C4DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c4f0
	goto loc_8285C4F0;
loc_8285C4DC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c4f0
	goto loc_8285C4F0;
loc_8285C4E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c4f0
	goto loc_8285C4F0;
loc_8285C4EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C4F0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4768
	ctx.r6.s64 = ctx.r11.s64 + 4768;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C514;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5756(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5756, ctx.r8.u32);
	// stw r7,3116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3116, ctx.r7.u32);
	// beq cr6,0x8285c554
	if (ctx.cr6.eq) goto loc_8285C554;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c54c
	if (ctx.cr6.eq) goto loc_8285C54C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c544
	if (ctx.cr6.eq) goto loc_8285C544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c558
	goto loc_8285C558;
loc_8285C544:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c558
	goto loc_8285C558;
loc_8285C54C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c558
	goto loc_8285C558;
loc_8285C554:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C558:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4788
	ctx.r6.s64 = ctx.r11.s64 + 4788;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C57C;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5760(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5760, ctx.r8.u32);
	// stw r7,3120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3120, ctx.r7.u32);
	// beq cr6,0x8285c5bc
	if (ctx.cr6.eq) goto loc_8285C5BC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c5b4
	if (ctx.cr6.eq) goto loc_8285C5B4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c5ac
	if (ctx.cr6.eq) goto loc_8285C5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c5c0
	goto loc_8285C5C0;
loc_8285C5AC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c5c0
	goto loc_8285C5C0;
loc_8285C5B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c5c0
	goto loc_8285C5C0;
loc_8285C5BC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C5C0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4808
	ctx.r6.s64 = ctx.r11.s64 + 4808;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C5E4;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5800(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5800, ctx.r8.u32);
	// stw r7,3160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3160, ctx.r7.u32);
	// beq cr6,0x8285c624
	if (ctx.cr6.eq) goto loc_8285C624;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c61c
	if (ctx.cr6.eq) goto loc_8285C61C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c614
	if (ctx.cr6.eq) goto loc_8285C614;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c628
	goto loc_8285C628;
loc_8285C614:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c628
	goto loc_8285C628;
loc_8285C61C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c628
	goto loc_8285C628;
loc_8285C624:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C628:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4828
	ctx.r6.s64 = ctx.r11.s64 + 4828;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C64C;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5764(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5764, ctx.r8.u32);
	// stw r7,3124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3124, ctx.r7.u32);
	// beq cr6,0x8285c68c
	if (ctx.cr6.eq) goto loc_8285C68C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c684
	if (ctx.cr6.eq) goto loc_8285C684;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c67c
	if (ctx.cr6.eq) goto loc_8285C67C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c690
	goto loc_8285C690;
loc_8285C67C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c690
	goto loc_8285C690;
loc_8285C684:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c690
	goto loc_8285C690;
loc_8285C68C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C690:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4844
	ctx.r6.s64 = ctx.r11.s64 + 4844;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C6B4;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5768(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5768, ctx.r8.u32);
	// stw r7,3128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3128, ctx.r7.u32);
	// beq cr6,0x8285c6f4
	if (ctx.cr6.eq) goto loc_8285C6F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c6ec
	if (ctx.cr6.eq) goto loc_8285C6EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c6e4
	if (ctx.cr6.eq) goto loc_8285C6E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c6f8
	goto loc_8285C6F8;
loc_8285C6E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c6f8
	goto loc_8285C6F8;
loc_8285C6EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c6f8
	goto loc_8285C6F8;
loc_8285C6F4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C6F8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4868
	ctx.r6.s64 = ctx.r11.s64 + 4868;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C71C;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5772(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5772, ctx.r8.u32);
	// stw r7,3132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3132, ctx.r7.u32);
	// beq cr6,0x8285c75c
	if (ctx.cr6.eq) goto loc_8285C75C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c754
	if (ctx.cr6.eq) goto loc_8285C754;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c74c
	if (ctx.cr6.eq) goto loc_8285C74C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c760
	goto loc_8285C760;
loc_8285C74C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c760
	goto loc_8285C760;
loc_8285C754:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c760
	goto loc_8285C760;
loc_8285C75C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C760:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4892
	ctx.r6.s64 = ctx.r11.s64 + 4892;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C784;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5776(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5776, ctx.r8.u32);
	// stw r7,3136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3136, ctx.r7.u32);
	// beq cr6,0x8285c7c4
	if (ctx.cr6.eq) goto loc_8285C7C4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c7bc
	if (ctx.cr6.eq) goto loc_8285C7BC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c7b4
	if (ctx.cr6.eq) goto loc_8285C7B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c7c8
	goto loc_8285C7C8;
loc_8285C7B4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c7c8
	goto loc_8285C7C8;
loc_8285C7BC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c7c8
	goto loc_8285C7C8;
loc_8285C7C4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C7C8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4908
	ctx.r6.s64 = ctx.r11.s64 + 4908;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C7EC;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5780(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5780, ctx.r8.u32);
	// stw r7,3140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3140, ctx.r7.u32);
	// beq cr6,0x8285c82c
	if (ctx.cr6.eq) goto loc_8285C82C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c824
	if (ctx.cr6.eq) goto loc_8285C824;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c81c
	if (ctx.cr6.eq) goto loc_8285C81C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c830
	goto loc_8285C830;
loc_8285C81C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c830
	goto loc_8285C830;
loc_8285C824:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c830
	goto loc_8285C830;
loc_8285C82C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C830:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4932
	ctx.r6.s64 = ctx.r11.s64 + 4932;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C854;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5784(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5784, ctx.r8.u32);
	// stw r7,3144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3144, ctx.r7.u32);
	// beq cr6,0x8285c894
	if (ctx.cr6.eq) goto loc_8285C894;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c88c
	if (ctx.cr6.eq) goto loc_8285C88C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c884
	if (ctx.cr6.eq) goto loc_8285C884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c898
	goto loc_8285C898;
loc_8285C884:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c898
	goto loc_8285C898;
loc_8285C88C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c898
	goto loc_8285C898;
loc_8285C894:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C898:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4956
	ctx.r6.s64 = ctx.r11.s64 + 4956;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C8BC;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5788(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5788, ctx.r8.u32);
	// stw r7,3148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3148, ctx.r7.u32);
	// beq cr6,0x8285c8fc
	if (ctx.cr6.eq) goto loc_8285C8FC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c8f4
	if (ctx.cr6.eq) goto loc_8285C8F4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c8ec
	if (ctx.cr6.eq) goto loc_8285C8EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c900
	goto loc_8285C900;
loc_8285C8EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c900
	goto loc_8285C900;
loc_8285C8F4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c900
	goto loc_8285C900;
loc_8285C8FC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C900:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4980
	ctx.r6.s64 = ctx.r11.s64 + 4980;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6448(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// bl 0x82828d60
	ctx.lr = 0x8285C924;
	sub_82828D60(ctx, base);
	// lwz r8,6448(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6448);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6348(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6348, ctx.r8.u32);
	// stw r7,3708(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3708, ctx.r7.u32);
	// beq cr6,0x8285c964
	if (ctx.cr6.eq) goto loc_8285C964;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c95c
	if (ctx.cr6.eq) goto loc_8285C95C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c954
	if (ctx.cr6.eq) goto loc_8285C954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c968
	goto loc_8285C968;
loc_8285C954:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c968
	goto loc_8285C968;
loc_8285C95C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c968
	goto loc_8285C968;
loc_8285C964:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C968:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5012
	ctx.r6.s64 = ctx.r11.s64 + 5012;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6408(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6408);
	// bl 0x82828d60
	ctx.lr = 0x8285C98C;
	sub_82828D60(ctx, base);
	// lwz r8,6408(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6408);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5792(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5792, ctx.r8.u32);
	// stw r7,3152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3152, ctx.r7.u32);
	// beq cr6,0x8285c9cc
	if (ctx.cr6.eq) goto loc_8285C9CC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285c9c4
	if (ctx.cr6.eq) goto loc_8285C9C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285c9bc
	if (ctx.cr6.eq) goto loc_8285C9BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285c9d0
	goto loc_8285C9D0;
loc_8285C9BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285c9d0
	goto loc_8285C9D0;
loc_8285C9C4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285c9d0
	goto loc_8285C9D0;
loc_8285C9CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285C9D0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5028
	ctx.r6.s64 = ctx.r11.s64 + 5028;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6416(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6416);
	// bl 0x82828d60
	ctx.lr = 0x8285C9F4;
	sub_82828D60(ctx, base);
	// lwz r8,6416(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6416);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5796(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5796, ctx.r8.u32);
	// stw r7,3156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3156, ctx.r7.u32);
	// beq cr6,0x8285ca34
	if (ctx.cr6.eq) goto loc_8285CA34;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ca2c
	if (ctx.cr6.eq) goto loc_8285CA2C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ca24
	if (ctx.cr6.eq) goto loc_8285CA24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ca38
	goto loc_8285CA38;
loc_8285CA24:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ca38
	goto loc_8285CA38;
loc_8285CA2C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ca38
	goto loc_8285CA38;
loc_8285CA34:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CA38:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5048
	ctx.r6.s64 = ctx.r11.s64 + 5048;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CA5C;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5804(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5804, ctx.r8.u32);
	// stw r7,3164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3164, ctx.r7.u32);
	// beq cr6,0x8285ca9c
	if (ctx.cr6.eq) goto loc_8285CA9C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ca94
	if (ctx.cr6.eq) goto loc_8285CA94;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ca8c
	if (ctx.cr6.eq) goto loc_8285CA8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285caa0
	goto loc_8285CAA0;
loc_8285CA8C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285caa0
	goto loc_8285CAA0;
loc_8285CA94:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285caa0
	goto loc_8285CAA0;
loc_8285CA9C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CAA0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4180
	ctx.r6.s64 = ctx.r11.s64 + 4180;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CAC4;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5808(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5808, ctx.r8.u32);
	// stw r7,3168(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3168, ctx.r7.u32);
	// beq cr6,0x8285cb04
	if (ctx.cr6.eq) goto loc_8285CB04;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cafc
	if (ctx.cr6.eq) goto loc_8285CAFC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285caf4
	if (ctx.cr6.eq) goto loc_8285CAF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cb08
	goto loc_8285CB08;
loc_8285CAF4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cb08
	goto loc_8285CB08;
loc_8285CAFC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cb08
	goto loc_8285CB08;
loc_8285CB04:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CB08:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5056
	ctx.r6.s64 = ctx.r11.s64 + 5056;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CB2C;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5812(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5812, ctx.r8.u32);
	// stw r7,3172(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3172, ctx.r7.u32);
	// beq cr6,0x8285cb6c
	if (ctx.cr6.eq) goto loc_8285CB6C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cb64
	if (ctx.cr6.eq) goto loc_8285CB64;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cb5c
	if (ctx.cr6.eq) goto loc_8285CB5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cb70
	goto loc_8285CB70;
loc_8285CB5C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cb70
	goto loc_8285CB70;
loc_8285CB64:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cb70
	goto loc_8285CB70;
loc_8285CB6C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CB70:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5068
	ctx.r6.s64 = ctx.r11.s64 + 5068;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CB94;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5816(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5816, ctx.r8.u32);
	// stw r7,3176(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3176, ctx.r7.u32);
	// beq cr6,0x8285cbd4
	if (ctx.cr6.eq) goto loc_8285CBD4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cbcc
	if (ctx.cr6.eq) goto loc_8285CBCC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cbc4
	if (ctx.cr6.eq) goto loc_8285CBC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cbd8
	goto loc_8285CBD8;
loc_8285CBC4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cbd8
	goto loc_8285CBD8;
loc_8285CBCC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cbd8
	goto loc_8285CBD8;
loc_8285CBD4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CBD8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5076
	ctx.r6.s64 = ctx.r11.s64 + 5076;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CBFC;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5820(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5820, ctx.r8.u32);
	// stw r7,3180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3180, ctx.r7.u32);
	// beq cr6,0x8285cc3c
	if (ctx.cr6.eq) goto loc_8285CC3C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cc34
	if (ctx.cr6.eq) goto loc_8285CC34;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cc2c
	if (ctx.cr6.eq) goto loc_8285CC2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cc40
	goto loc_8285CC40;
loc_8285CC2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cc40
	goto loc_8285CC40;
loc_8285CC34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cc40
	goto loc_8285CC40;
loc_8285CC3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CC40:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5092
	ctx.r6.s64 = ctx.r11.s64 + 5092;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CC64;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5824(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5824, ctx.r8.u32);
	// stw r7,3184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3184, ctx.r7.u32);
	// beq cr6,0x8285cca4
	if (ctx.cr6.eq) goto loc_8285CCA4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cc9c
	if (ctx.cr6.eq) goto loc_8285CC9C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cc94
	if (ctx.cr6.eq) goto loc_8285CC94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cca8
	goto loc_8285CCA8;
loc_8285CC94:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cca8
	goto loc_8285CCA8;
loc_8285CC9C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cca8
	goto loc_8285CCA8;
loc_8285CCA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CCA8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5112
	ctx.r6.s64 = ctx.r11.s64 + 5112;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CCCC;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5828(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5828, ctx.r8.u32);
	// stw r7,3188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3188, ctx.r7.u32);
	// beq cr6,0x8285cd0c
	if (ctx.cr6.eq) goto loc_8285CD0C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cd04
	if (ctx.cr6.eq) goto loc_8285CD04;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ccfc
	if (ctx.cr6.eq) goto loc_8285CCFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cd10
	goto loc_8285CD10;
loc_8285CCFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cd10
	goto loc_8285CD10;
loc_8285CD04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cd10
	goto loc_8285CD10;
loc_8285CD0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CD10:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5128
	ctx.r6.s64 = ctx.r11.s64 + 5128;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CD34;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6364(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6364, ctx.r8.u32);
	// stw r7,3724(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3724, ctx.r7.u32);
	// beq cr6,0x8285cd74
	if (ctx.cr6.eq) goto loc_8285CD74;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cd6c
	if (ctx.cr6.eq) goto loc_8285CD6C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cd64
	if (ctx.cr6.eq) goto loc_8285CD64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cd78
	goto loc_8285CD78;
loc_8285CD64:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cd78
	goto loc_8285CD78;
loc_8285CD6C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cd78
	goto loc_8285CD78;
loc_8285CD74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CD78:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5148
	ctx.r6.s64 = ctx.r11.s64 + 5148;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6464(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// bl 0x82828d60
	ctx.lr = 0x8285CD9C;
	sub_82828D60(ctx, base);
	// lwz r8,6464(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6464);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5832(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5832, ctx.r8.u32);
	// stw r7,3192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3192, ctx.r7.u32);
	// beq cr6,0x8285cddc
	if (ctx.cr6.eq) goto loc_8285CDDC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cdd4
	if (ctx.cr6.eq) goto loc_8285CDD4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cdcc
	if (ctx.cr6.eq) goto loc_8285CDCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cde0
	goto loc_8285CDE0;
loc_8285CDCC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cde0
	goto loc_8285CDE0;
loc_8285CDD4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cde0
	goto loc_8285CDE0;
loc_8285CDDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CDE0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5164
	ctx.r6.s64 = ctx.r11.s64 + 5164;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6436(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// bl 0x82828d60
	ctx.lr = 0x8285CE04;
	sub_82828D60(ctx, base);
	// lwz r8,6436(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5852(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5852, ctx.r8.u32);
	// stw r7,3212(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3212, ctx.r7.u32);
	// beq cr6,0x8285ce44
	if (ctx.cr6.eq) goto loc_8285CE44;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ce3c
	if (ctx.cr6.eq) goto loc_8285CE3C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ce34
	if (ctx.cr6.eq) goto loc_8285CE34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ce48
	goto loc_8285CE48;
loc_8285CE34:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ce48
	goto loc_8285CE48;
loc_8285CE3C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ce48
	goto loc_8285CE48;
loc_8285CE44:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CE48:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5180
	ctx.r6.s64 = ctx.r11.s64 + 5180;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6436(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// bl 0x82828d60
	ctx.lr = 0x8285CE6C;
	sub_82828D60(ctx, base);
	// lwz r8,6436(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5856(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5856, ctx.r8.u32);
	// stw r7,3216(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3216, ctx.r7.u32);
	// beq cr6,0x8285ceac
	if (ctx.cr6.eq) goto loc_8285CEAC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cea4
	if (ctx.cr6.eq) goto loc_8285CEA4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ce9c
	if (ctx.cr6.eq) goto loc_8285CE9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ceb0
	goto loc_8285CEB0;
loc_8285CE9C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ceb0
	goto loc_8285CEB0;
loc_8285CEA4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ceb0
	goto loc_8285CEB0;
loc_8285CEAC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CEB0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5208
	ctx.r6.s64 = ctx.r11.s64 + 5208;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6436(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// bl 0x82828d60
	ctx.lr = 0x8285CED4;
	sub_82828D60(ctx, base);
	// lwz r8,6436(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5860(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5860, ctx.r8.u32);
	// stw r7,3220(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3220, ctx.r7.u32);
	// beq cr6,0x8285cf14
	if (ctx.cr6.eq) goto loc_8285CF14;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cf0c
	if (ctx.cr6.eq) goto loc_8285CF0C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cf04
	if (ctx.cr6.eq) goto loc_8285CF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cf18
	goto loc_8285CF18;
loc_8285CF04:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cf18
	goto loc_8285CF18;
loc_8285CF0C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cf18
	goto loc_8285CF18;
loc_8285CF14:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CF18:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5228
	ctx.r6.s64 = ctx.r11.s64 + 5228;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6436(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// bl 0x82828d60
	ctx.lr = 0x8285CF3C;
	sub_82828D60(ctx, base);
	// lwz r8,6436(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6436);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5864(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5864, ctx.r8.u32);
	// stw r7,3224(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3224, ctx.r7.u32);
	// beq cr6,0x8285cf7c
	if (ctx.cr6.eq) goto loc_8285CF7C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cf74
	if (ctx.cr6.eq) goto loc_8285CF74;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cf6c
	if (ctx.cr6.eq) goto loc_8285CF6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cf80
	goto loc_8285CF80;
loc_8285CF6C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cf80
	goto loc_8285CF80;
loc_8285CF74:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cf80
	goto loc_8285CF80;
loc_8285CF7C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CF80:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5252
	ctx.r6.s64 = ctx.r11.s64 + 5252;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6404(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6404);
	// bl 0x82828d60
	ctx.lr = 0x8285CFA4;
	sub_82828D60(ctx, base);
	// lwz r8,6404(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6404);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5868(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5868, ctx.r8.u32);
	// stw r7,3228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3228, ctx.r7.u32);
	// beq cr6,0x8285cfe4
	if (ctx.cr6.eq) goto loc_8285CFE4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285cfdc
	if (ctx.cr6.eq) goto loc_8285CFDC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285cfd4
	if (ctx.cr6.eq) goto loc_8285CFD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285cfe8
	goto loc_8285CFE8;
loc_8285CFD4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285cfe8
	goto loc_8285CFE8;
loc_8285CFDC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285cfe8
	goto loc_8285CFE8;
loc_8285CFE4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285CFE8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5268
	ctx.r6.s64 = ctx.r11.s64 + 5268;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6404(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6404);
	// bl 0x82828d60
	ctx.lr = 0x8285D00C;
	sub_82828D60(ctx, base);
	// lwz r8,6404(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6404);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5872(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5872, ctx.r8.u32);
	// stw r7,3232(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3232, ctx.r7.u32);
	// beq cr6,0x8285d04c
	if (ctx.cr6.eq) goto loc_8285D04C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285d044
	if (ctx.cr6.eq) goto loc_8285D044;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285d03c
	if (ctx.cr6.eq) goto loc_8285D03C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285d050
	goto loc_8285D050;
loc_8285D03C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285d050
	goto loc_8285D050;
loc_8285D044:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285d050
	goto loc_8285D050;
loc_8285D04C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285D050:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5288
	ctx.r6.s64 = ctx.r11.s64 + 5288;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6404(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6404);
	// bl 0x82828d60
	ctx.lr = 0x8285D074;
	sub_82828D60(ctx, base);
	// lwz r7,6404(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6404);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r8,5308
	ctx.r29.s64 = ctx.r8.s64 + 5308;
	// stw r7,5880(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5880, ctx.r7.u32);
	// stw r6,3240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3240, ctx.r6.u32);
	// bl 0x8212c000
	ctx.lr = 0x8285D094;
	sub_8212C000(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D0A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,5332
	ctx.r30.s64 = ctx.r5.s64 + 5332;
	// bl 0x8212c000
	ctx.lr = 0x8285D0B4;
	sub_8212C000(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D0C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,5352
	ctx.r30.s64 = ctx.r4.s64 + 5352;
	// bl 0x8212c000
	ctx.lr = 0x8285D0D4;
	sub_8212C000(ctx, base);
	// li r4,93
	ctx.r4.s64 = 93;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D0E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5368
	ctx.r30.s64 = ctx.r11.s64 + 5368;
	// bl 0x8212c000
	ctx.lr = 0x8285D0F4;
	sub_8212C000(ctx, base);
	// li r4,82
	ctx.r4.s64 = 82;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D104;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,2572
	ctx.r30.s64 = ctx.r10.s64 + 2572;
	// bl 0x8212c000
	ctx.lr = 0x8285D114;
	sub_8212C000(ctx, base);
	// li r4,94
	ctx.r4.s64 = 94;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D124;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,2584
	ctx.r30.s64 = ctx.r9.s64 + 2584;
	// bl 0x8212c000
	ctx.lr = 0x8285D134;
	sub_8212C000(ctx, base);
	// li r4,95
	ctx.r4.s64 = 95;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D144;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,5380
	ctx.r30.s64 = ctx.r8.s64 + 5380;
	// bl 0x8212c000
	ctx.lr = 0x8285D154;
	sub_8212C000(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D164;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,5392
	ctx.r30.s64 = ctx.r7.s64 + 5392;
	// bl 0x8212c000
	ctx.lr = 0x8285D174;
	sub_8212C000(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D184;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,5412
	ctx.r30.s64 = ctx.r6.s64 + 5412;
	// bl 0x8212c000
	ctx.lr = 0x8285D194;
	sub_8212C000(ctx, base);
	// li r4,98
	ctx.r4.s64 = 98;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D1A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,5428
	ctx.r30.s64 = ctx.r5.s64 + 5428;
	// bl 0x8212c000
	ctx.lr = 0x8285D1B4;
	sub_8212C000(ctx, base);
	// li r4,99
	ctx.r4.s64 = 99;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D1C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,5444
	ctx.r30.s64 = ctx.r4.s64 + 5444;
	// bl 0x8212c000
	ctx.lr = 0x8285D1D4;
	sub_8212C000(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D1E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5468
	ctx.r30.s64 = ctx.r11.s64 + 5468;
	// bl 0x8212c000
	ctx.lr = 0x8285D1F4;
	sub_8212C000(ctx, base);
	// li r4,101
	ctx.r4.s64 = 101;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D204;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,5488
	ctx.r30.s64 = ctx.r10.s64 + 5488;
	// bl 0x8212c000
	ctx.lr = 0x8285D214;
	sub_8212C000(ctx, base);
	// li r4,102
	ctx.r4.s64 = 102;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D224;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,5496
	ctx.r30.s64 = ctx.r9.s64 + 5496;
	// bl 0x8212c000
	ctx.lr = 0x8285D234;
	sub_8212C000(ctx, base);
	// li r4,103
	ctx.r4.s64 = 103;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D244;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,5512
	ctx.r30.s64 = ctx.r8.s64 + 5512;
	// bl 0x8212c000
	ctx.lr = 0x8285D254;
	sub_8212C000(ctx, base);
	// li r4,104
	ctx.r4.s64 = 104;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D264;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,5524
	ctx.r30.s64 = ctx.r7.s64 + 5524;
	// bl 0x8212c000
	ctx.lr = 0x8285D274;
	sub_8212C000(ctx, base);
	// li r4,105
	ctx.r4.s64 = 105;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D284;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,5536
	ctx.r30.s64 = ctx.r6.s64 + 5536;
	// bl 0x8212c000
	ctx.lr = 0x8285D294;
	sub_8212C000(ctx, base);
	// li r4,106
	ctx.r4.s64 = 106;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D2A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,5548
	ctx.r30.s64 = ctx.r5.s64 + 5548;
	// bl 0x8212c000
	ctx.lr = 0x8285D2B4;
	sub_8212C000(ctx, base);
	// li r4,107
	ctx.r4.s64 = 107;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D2C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,5560
	ctx.r30.s64 = ctx.r4.s64 + 5560;
	// bl 0x8212c000
	ctx.lr = 0x8285D2D4;
	sub_8212C000(ctx, base);
	// li r4,108
	ctx.r4.s64 = 108;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D2E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5572
	ctx.r30.s64 = ctx.r11.s64 + 5572;
	// bl 0x8212c000
	ctx.lr = 0x8285D2F4;
	sub_8212C000(ctx, base);
	// li r4,109
	ctx.r4.s64 = 109;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D304;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,5584
	ctx.r30.s64 = ctx.r10.s64 + 5584;
	// bl 0x8212c000
	ctx.lr = 0x8285D314;
	sub_8212C000(ctx, base);
	// li r4,110
	ctx.r4.s64 = 110;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D324;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,5604
	ctx.r30.s64 = ctx.r9.s64 + 5604;
	// bl 0x8212c000
	ctx.lr = 0x8285D334;
	sub_8212C000(ctx, base);
	// li r4,111
	ctx.r4.s64 = 111;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D344;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,5628
	ctx.r30.s64 = ctx.r8.s64 + 5628;
	// bl 0x8212c000
	ctx.lr = 0x8285D354;
	sub_8212C000(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D364;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,5656
	ctx.r30.s64 = ctx.r7.s64 + 5656;
	// bl 0x8212c000
	ctx.lr = 0x8285D374;
	sub_8212C000(ctx, base);
	// li r4,113
	ctx.r4.s64 = 113;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D384;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,3964
	ctx.r30.s64 = ctx.r6.s64 + 3964;
	// bl 0x8212c000
	ctx.lr = 0x8285D394;
	sub_8212C000(ctx, base);
	// li r4,114
	ctx.r4.s64 = 114;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D3A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,3948
	ctx.r30.s64 = ctx.r5.s64 + 3948;
	// bl 0x8212c000
	ctx.lr = 0x8285D3B4;
	sub_8212C000(ctx, base);
	// li r4,115
	ctx.r4.s64 = 115;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D3C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3980
	ctx.r30.s64 = ctx.r4.s64 + 3980;
	// bl 0x8212c000
	ctx.lr = 0x8285D3D4;
	sub_8212C000(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D3E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5672
	ctx.r30.s64 = ctx.r11.s64 + 5672;
	// bl 0x8212c000
	ctx.lr = 0x8285D3F4;
	sub_8212C000(ctx, base);
	// li r4,117
	ctx.r4.s64 = 117;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D404;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,5684
	ctx.r30.s64 = ctx.r10.s64 + 5684;
	// bl 0x8212c000
	ctx.lr = 0x8285D414;
	sub_8212C000(ctx, base);
	// li r4,206
	ctx.r4.s64 = 206;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D424;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,5704
	ctx.r30.s64 = ctx.r9.s64 + 5704;
	// bl 0x8212c000
	ctx.lr = 0x8285D434;
	sub_8212C000(ctx, base);
	// li r4,118
	ctx.r4.s64 = 118;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D444;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,5716
	ctx.r30.s64 = ctx.r8.s64 + 5716;
	// bl 0x8212c000
	ctx.lr = 0x8285D454;
	sub_8212C000(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D464;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,5736
	ctx.r30.s64 = ctx.r7.s64 + 5736;
	// bl 0x8212c000
	ctx.lr = 0x8285D474;
	sub_8212C000(ctx, base);
	// li r4,120
	ctx.r4.s64 = 120;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D484;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,-13308
	ctx.r30.s64 = ctx.r6.s64 + -13308;
	// bl 0x8212c000
	ctx.lr = 0x8285D494;
	sub_8212C000(ctx, base);
	// li r4,121
	ctx.r4.s64 = 121;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D4A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,5752
	ctx.r30.s64 = ctx.r5.s64 + 5752;
	// bl 0x8212c000
	ctx.lr = 0x8285D4B4;
	sub_8212C000(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D4C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,5764
	ctx.r30.s64 = ctx.r4.s64 + 5764;
	// bl 0x8212c000
	ctx.lr = 0x8285D4D4;
	sub_8212C000(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D4E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5780
	ctx.r30.s64 = ctx.r11.s64 + 5780;
	// bl 0x8212c000
	ctx.lr = 0x8285D4F4;
	sub_8212C000(ctx, base);
	// li r4,124
	ctx.r4.s64 = 124;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D504;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,5800
	ctx.r30.s64 = ctx.r10.s64 + 5800;
	// bl 0x8212c000
	ctx.lr = 0x8285D514;
	sub_8212C000(ctx, base);
	// li r4,125
	ctx.r4.s64 = 125;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D524;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,5816
	ctx.r30.s64 = ctx.r9.s64 + 5816;
	// bl 0x8212c000
	ctx.lr = 0x8285D534;
	sub_8212C000(ctx, base);
	// li r4,81
	ctx.r4.s64 = 81;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D544;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,5832
	ctx.r30.s64 = ctx.r8.s64 + 5832;
	// bl 0x8212c000
	ctx.lr = 0x8285D554;
	sub_8212C000(ctx, base);
	// li r4,209
	ctx.r4.s64 = 209;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D564;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,3992
	ctx.r30.s64 = ctx.r7.s64 + 3992;
	// bl 0x8212c000
	ctx.lr = 0x8285D574;
	sub_8212C000(ctx, base);
	// li r4,212
	ctx.r4.s64 = 212;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D584;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,4012
	ctx.r30.s64 = ctx.r6.s64 + 4012;
	// bl 0x8212c000
	ctx.lr = 0x8285D594;
	sub_8212C000(ctx, base);
	// li r4,213
	ctx.r4.s64 = 213;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D5A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,5856
	ctx.r30.s64 = ctx.r5.s64 + 5856;
	// bl 0x8212c000
	ctx.lr = 0x8285D5B4;
	sub_8212C000(ctx, base);
	// li r4,214
	ctx.r4.s64 = 214;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D5C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,5880
	ctx.r30.s64 = ctx.r4.s64 + 5880;
	// bl 0x8212c000
	ctx.lr = 0x8285D5D4;
	sub_8212C000(ctx, base);
	// li r4,216
	ctx.r4.s64 = 216;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D5E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5896
	ctx.r30.s64 = ctx.r11.s64 + 5896;
	// bl 0x8212c000
	ctx.lr = 0x8285D5F4;
	sub_8212C000(ctx, base);
	// li r4,198
	ctx.r4.s64 = 198;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D604;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,5908
	ctx.r30.s64 = ctx.r10.s64 + 5908;
	// bl 0x8212c000
	ctx.lr = 0x8285D614;
	sub_8212C000(ctx, base);
	// li r4,199
	ctx.r4.s64 = 199;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D624;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,5924
	ctx.r30.s64 = ctx.r9.s64 + 5924;
	// bl 0x8212c000
	ctx.lr = 0x8285D634;
	sub_8212C000(ctx, base);
	// li r4,200
	ctx.r4.s64 = 200;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D644;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,5940
	ctx.r30.s64 = ctx.r8.s64 + 5940;
	// bl 0x8212c000
	ctx.lr = 0x8285D654;
	sub_8212C000(ctx, base);
	// li r4,201
	ctx.r4.s64 = 201;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D664;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,5952
	ctx.r30.s64 = ctx.r7.s64 + 5952;
	// bl 0x8212c000
	ctx.lr = 0x8285D674;
	sub_8212C000(ctx, base);
	// li r4,126
	ctx.r4.s64 = 126;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D684;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,5968
	ctx.r30.s64 = ctx.r6.s64 + 5968;
	// bl 0x8212c000
	ctx.lr = 0x8285D694;
	sub_8212C000(ctx, base);
	// li r4,127
	ctx.r4.s64 = 127;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D6A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,5980
	ctx.r30.s64 = ctx.r5.s64 + 5980;
	// bl 0x8212c000
	ctx.lr = 0x8285D6B4;
	sub_8212C000(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D6C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,5992
	ctx.r30.s64 = ctx.r4.s64 + 5992;
	// bl 0x8212c000
	ctx.lr = 0x8285D6D4;
	sub_8212C000(ctx, base);
	// li r4,129
	ctx.r4.s64 = 129;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D6E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5996
	ctx.r30.s64 = ctx.r11.s64 + 5996;
	// bl 0x8212c000
	ctx.lr = 0x8285D6F4;
	sub_8212C000(ctx, base);
	// li r4,130
	ctx.r4.s64 = 130;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D704;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6012
	ctx.r30.s64 = ctx.r10.s64 + 6012;
	// bl 0x8212c000
	ctx.lr = 0x8285D714;
	sub_8212C000(ctx, base);
	// li r4,131
	ctx.r4.s64 = 131;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D724;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6028
	ctx.r30.s64 = ctx.r9.s64 + 6028;
	// bl 0x8212c000
	ctx.lr = 0x8285D734;
	sub_8212C000(ctx, base);
	// li r4,132
	ctx.r4.s64 = 132;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D744;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,6044
	ctx.r30.s64 = ctx.r8.s64 + 6044;
	// bl 0x8212c000
	ctx.lr = 0x8285D754;
	sub_8212C000(ctx, base);
	// li r4,133
	ctx.r4.s64 = 133;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D764;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,6060
	ctx.r30.s64 = ctx.r7.s64 + 6060;
	// bl 0x8212c000
	ctx.lr = 0x8285D774;
	sub_8212C000(ctx, base);
	// li r4,79
	ctx.r4.s64 = 79;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D784;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6080
	ctx.r30.s64 = ctx.r6.s64 + 6080;
	// bl 0x8212c000
	ctx.lr = 0x8285D794;
	sub_8212C000(ctx, base);
	// li r4,134
	ctx.r4.s64 = 134;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D7A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,6100
	ctx.r30.s64 = ctx.r5.s64 + 6100;
	// bl 0x8212c000
	ctx.lr = 0x8285D7B4;
	sub_8212C000(ctx, base);
	// li r4,54
	ctx.r4.s64 = 54;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D7C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,6116
	ctx.r30.s64 = ctx.r4.s64 + 6116;
	// bl 0x8212c000
	ctx.lr = 0x8285D7D4;
	sub_8212C000(ctx, base);
	// li r4,135
	ctx.r4.s64 = 135;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D7E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6132
	ctx.r30.s64 = ctx.r11.s64 + 6132;
	// bl 0x8212c000
	ctx.lr = 0x8285D7F4;
	sub_8212C000(ctx, base);
	// li r4,136
	ctx.r4.s64 = 136;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D804;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6148
	ctx.r30.s64 = ctx.r10.s64 + 6148;
	// bl 0x8212c000
	ctx.lr = 0x8285D814;
	sub_8212C000(ctx, base);
	// li r4,137
	ctx.r4.s64 = 137;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D824;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6168
	ctx.r30.s64 = ctx.r9.s64 + 6168;
	// bl 0x8212c000
	ctx.lr = 0x8285D834;
	sub_8212C000(ctx, base);
	// li r4,138
	ctx.r4.s64 = 138;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D844;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,6180
	ctx.r30.s64 = ctx.r8.s64 + 6180;
	// bl 0x8212c000
	ctx.lr = 0x8285D854;
	sub_8212C000(ctx, base);
	// li r4,139
	ctx.r4.s64 = 139;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D864;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,6200
	ctx.r30.s64 = ctx.r7.s64 + 6200;
	// bl 0x8212c000
	ctx.lr = 0x8285D874;
	sub_8212C000(ctx, base);
	// li r4,140
	ctx.r4.s64 = 140;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D884;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6216
	ctx.r30.s64 = ctx.r6.s64 + 6216;
	// bl 0x8212c000
	ctx.lr = 0x8285D894;
	sub_8212C000(ctx, base);
	// li r4,141
	ctx.r4.s64 = 141;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D8A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,6232
	ctx.r30.s64 = ctx.r5.s64 + 6232;
	// bl 0x8212c000
	ctx.lr = 0x8285D8B4;
	sub_8212C000(ctx, base);
	// li r4,142
	ctx.r4.s64 = 142;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D8C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3936
	ctx.r30.s64 = ctx.r4.s64 + 3936;
	// bl 0x8212c000
	ctx.lr = 0x8285D8D4;
	sub_8212C000(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D8E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6252
	ctx.r30.s64 = ctx.r11.s64 + 6252;
	// bl 0x8212c000
	ctx.lr = 0x8285D8F4;
	sub_8212C000(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D904;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6268
	ctx.r30.s64 = ctx.r10.s64 + 6268;
	// bl 0x8212c000
	ctx.lr = 0x8285D914;
	sub_8212C000(ctx, base);
	// li r4,210
	ctx.r4.s64 = 210;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D924;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6280
	ctx.r30.s64 = ctx.r9.s64 + 6280;
	// bl 0x8212c000
	ctx.lr = 0x8285D934;
	sub_8212C000(ctx, base);
	// li r4,143
	ctx.r4.s64 = 143;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D944;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,6292
	ctx.r30.s64 = ctx.r8.s64 + 6292;
	// bl 0x8212c000
	ctx.lr = 0x8285D954;
	sub_8212C000(ctx, base);
	// li r4,191
	ctx.r4.s64 = 191;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D964;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,6320
	ctx.r30.s64 = ctx.r7.s64 + 6320;
	// bl 0x8212c000
	ctx.lr = 0x8285D974;
	sub_8212C000(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D984;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6348
	ctx.r30.s64 = ctx.r6.s64 + 6348;
	// bl 0x8212c000
	ctx.lr = 0x8285D994;
	sub_8212C000(ctx, base);
	// li r4,193
	ctx.r4.s64 = 193;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D9A4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,6376
	ctx.r30.s64 = ctx.r5.s64 + 6376;
	// bl 0x8212c000
	ctx.lr = 0x8285D9B4;
	sub_8212C000(ctx, base);
	// li r4,194
	ctx.r4.s64 = 194;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D9C4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,6396
	ctx.r30.s64 = ctx.r4.s64 + 6396;
	// bl 0x8212c000
	ctx.lr = 0x8285D9D4;
	sub_8212C000(ctx, base);
	// li r4,195
	ctx.r4.s64 = 195;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285D9E4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6432
	ctx.r30.s64 = ctx.r11.s64 + 6432;
	// bl 0x8212c000
	ctx.lr = 0x8285D9F4;
	sub_8212C000(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DA04;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6460
	ctx.r30.s64 = ctx.r10.s64 + 6460;
	// bl 0x8212c000
	ctx.lr = 0x8285DA14;
	sub_8212C000(ctx, base);
	// li r4,197
	ctx.r4.s64 = 197;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DA24;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6496
	ctx.r30.s64 = ctx.r9.s64 + 6496;
	// bl 0x8212c000
	ctx.lr = 0x8285DA34;
	sub_8212C000(ctx, base);
	// li r4,144
	ctx.r4.s64 = 144;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DA44;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,6516
	ctx.r30.s64 = ctx.r8.s64 + 6516;
	// bl 0x8212c000
	ctx.lr = 0x8285DA54;
	sub_8212C000(ctx, base);
	// li r4,145
	ctx.r4.s64 = 145;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DA64;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,6540
	ctx.r30.s64 = ctx.r7.s64 + 6540;
	// bl 0x8212c000
	ctx.lr = 0x8285DA74;
	sub_8212C000(ctx, base);
	// li r4,146
	ctx.r4.s64 = 146;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DA84;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6556
	ctx.r30.s64 = ctx.r6.s64 + 6556;
	// bl 0x8212c000
	ctx.lr = 0x8285DA94;
	sub_8212C000(ctx, base);
	// li r4,147
	ctx.r4.s64 = 147;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DAA4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,6576
	ctx.r30.s64 = ctx.r5.s64 + 6576;
	// bl 0x8212c000
	ctx.lr = 0x8285DAB4;
	sub_8212C000(ctx, base);
	// li r4,148
	ctx.r4.s64 = 148;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DAC4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,6600
	ctx.r30.s64 = ctx.r4.s64 + 6600;
	// bl 0x8212c000
	ctx.lr = 0x8285DAD4;
	sub_8212C000(ctx, base);
	// li r4,149
	ctx.r4.s64 = 149;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DAE4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6628
	ctx.r30.s64 = ctx.r11.s64 + 6628;
	// bl 0x8212c000
	ctx.lr = 0x8285DAF4;
	sub_8212C000(ctx, base);
	// li r4,150
	ctx.r4.s64 = 150;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DB04;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6648
	ctx.r30.s64 = ctx.r10.s64 + 6648;
	// bl 0x8212c000
	ctx.lr = 0x8285DB14;
	sub_8212C000(ctx, base);
	// li r4,215
	ctx.r4.s64 = 215;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DB24;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6668
	ctx.r30.s64 = ctx.r9.s64 + 6668;
	// bl 0x8212c000
	ctx.lr = 0x8285DB34;
	sub_8212C000(ctx, base);
	// li r4,151
	ctx.r4.s64 = 151;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DB44;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,6684
	ctx.r30.s64 = ctx.r8.s64 + 6684;
	// bl 0x8212c000
	ctx.lr = 0x8285DB54;
	sub_8212C000(ctx, base);
	// li r4,152
	ctx.r4.s64 = 152;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DB64;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,6696
	ctx.r30.s64 = ctx.r7.s64 + 6696;
	// bl 0x8212c000
	ctx.lr = 0x8285DB74;
	sub_8212C000(ctx, base);
	// li r4,153
	ctx.r4.s64 = 153;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DB84;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6716
	ctx.r30.s64 = ctx.r6.s64 + 6716;
	// bl 0x8212c000
	ctx.lr = 0x8285DB94;
	sub_8212C000(ctx, base);
	// li r4,154
	ctx.r4.s64 = 154;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DBA4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,6732
	ctx.r30.s64 = ctx.r5.s64 + 6732;
	// bl 0x8212c000
	ctx.lr = 0x8285DBB4;
	sub_8212C000(ctx, base);
	// li r4,155
	ctx.r4.s64 = 155;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DBC4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,6748
	ctx.r30.s64 = ctx.r4.s64 + 6748;
	// bl 0x8212c000
	ctx.lr = 0x8285DBD4;
	sub_8212C000(ctx, base);
	// li r4,156
	ctx.r4.s64 = 156;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DBE4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6764
	ctx.r30.s64 = ctx.r11.s64 + 6764;
	// bl 0x8212c000
	ctx.lr = 0x8285DBF4;
	sub_8212C000(ctx, base);
	// li r4,157
	ctx.r4.s64 = 157;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DC04;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6780
	ctx.r30.s64 = ctx.r10.s64 + 6780;
	// bl 0x8212c000
	ctx.lr = 0x8285DC14;
	sub_8212C000(ctx, base);
	// li r4,158
	ctx.r4.s64 = 158;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DC24;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6796
	ctx.r30.s64 = ctx.r9.s64 + 6796;
	// bl 0x8212c000
	ctx.lr = 0x8285DC34;
	sub_8212C000(ctx, base);
	// li r4,159
	ctx.r4.s64 = 159;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DC44;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,6812
	ctx.r30.s64 = ctx.r8.s64 + 6812;
	// bl 0x8212c000
	ctx.lr = 0x8285DC54;
	sub_8212C000(ctx, base);
	// li r4,160
	ctx.r4.s64 = 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DC64;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,1152
	ctx.r30.s64 = ctx.r7.s64 + 1152;
	// bl 0x8212c000
	ctx.lr = 0x8285DC74;
	sub_8212C000(ctx, base);
	// li r4,161
	ctx.r4.s64 = 161;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DC84;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6824
	ctx.r30.s64 = ctx.r6.s64 + 6824;
	// bl 0x8212c000
	ctx.lr = 0x8285DC94;
	sub_8212C000(ctx, base);
	// li r4,162
	ctx.r4.s64 = 162;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DCA4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,6840
	ctx.r30.s64 = ctx.r5.s64 + 6840;
	// bl 0x8212c000
	ctx.lr = 0x8285DCB4;
	sub_8212C000(ctx, base);
	// li r4,163
	ctx.r4.s64 = 163;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DCC4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,6856
	ctx.r30.s64 = ctx.r4.s64 + 6856;
	// bl 0x8212c000
	ctx.lr = 0x8285DCD4;
	sub_8212C000(ctx, base);
	// li r4,164
	ctx.r4.s64 = 164;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DCE4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6868
	ctx.r30.s64 = ctx.r11.s64 + 6868;
	// bl 0x8212c000
	ctx.lr = 0x8285DCF4;
	sub_8212C000(ctx, base);
	// li r4,165
	ctx.r4.s64 = 165;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DD04;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6880
	ctx.r30.s64 = ctx.r10.s64 + 6880;
	// bl 0x8212c000
	ctx.lr = 0x8285DD14;
	sub_8212C000(ctx, base);
	// li r4,166
	ctx.r4.s64 = 166;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DD24;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6892
	ctx.r30.s64 = ctx.r9.s64 + 6892;
	// bl 0x8212c000
	ctx.lr = 0x8285DD34;
	sub_8212C000(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DD44;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,6904
	ctx.r30.s64 = ctx.r8.s64 + 6904;
	// bl 0x8212c000
	ctx.lr = 0x8285DD54;
	sub_8212C000(ctx, base);
	// li r4,168
	ctx.r4.s64 = 168;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DD64;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,6916
	ctx.r30.s64 = ctx.r7.s64 + 6916;
	// bl 0x8212c000
	ctx.lr = 0x8285DD74;
	sub_8212C000(ctx, base);
	// li r4,169
	ctx.r4.s64 = 169;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DD84;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6928
	ctx.r30.s64 = ctx.r6.s64 + 6928;
	// bl 0x8212c000
	ctx.lr = 0x8285DD94;
	sub_8212C000(ctx, base);
	// li r4,170
	ctx.r4.s64 = 170;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DDA4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,6940
	ctx.r30.s64 = ctx.r5.s64 + 6940;
	// bl 0x8212c000
	ctx.lr = 0x8285DDB4;
	sub_8212C000(ctx, base);
	// li r4,171
	ctx.r4.s64 = 171;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DDC4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,6952
	ctx.r30.s64 = ctx.r4.s64 + 6952;
	// bl 0x8212c000
	ctx.lr = 0x8285DDD4;
	sub_8212C000(ctx, base);
	// li r4,172
	ctx.r4.s64 = 172;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DDE4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,6960
	ctx.r30.s64 = ctx.r11.s64 + 6960;
	// bl 0x8212c000
	ctx.lr = 0x8285DDF4;
	sub_8212C000(ctx, base);
	// li r4,173
	ctx.r4.s64 = 173;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DE04;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6968
	ctx.r30.s64 = ctx.r10.s64 + 6968;
	// bl 0x8212c000
	ctx.lr = 0x8285DE14;
	sub_8212C000(ctx, base);
	// li r4,174
	ctx.r4.s64 = 174;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DE24;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,6980
	ctx.r30.s64 = ctx.r9.s64 + 6980;
	// bl 0x8212c000
	ctx.lr = 0x8285DE34;
	sub_8212C000(ctx, base);
	// li r4,175
	ctx.r4.s64 = 175;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DE44;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,7000
	ctx.r30.s64 = ctx.r8.s64 + 7000;
	// bl 0x8212c000
	ctx.lr = 0x8285DE54;
	sub_8212C000(ctx, base);
	// li r4,176
	ctx.r4.s64 = 176;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DE64;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,7016
	ctx.r30.s64 = ctx.r7.s64 + 7016;
	// bl 0x8212c000
	ctx.lr = 0x8285DE74;
	sub_8212C000(ctx, base);
	// li r4,177
	ctx.r4.s64 = 177;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DE84;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,7032
	ctx.r30.s64 = ctx.r6.s64 + 7032;
	// bl 0x8212c000
	ctx.lr = 0x8285DE94;
	sub_8212C000(ctx, base);
	// li r4,178
	ctx.r4.s64 = 178;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DEA4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,7044
	ctx.r30.s64 = ctx.r5.s64 + 7044;
	// bl 0x8212c000
	ctx.lr = 0x8285DEB4;
	sub_8212C000(ctx, base);
	// li r4,179
	ctx.r4.s64 = 179;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DEC4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,7052
	ctx.r30.s64 = ctx.r4.s64 + 7052;
	// bl 0x8212c000
	ctx.lr = 0x8285DED4;
	sub_8212C000(ctx, base);
	// li r4,180
	ctx.r4.s64 = 180;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DEE4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7060
	ctx.r30.s64 = ctx.r11.s64 + 7060;
	// bl 0x8212c000
	ctx.lr = 0x8285DEF4;
	sub_8212C000(ctx, base);
	// li r4,181
	ctx.r4.s64 = 181;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DF04;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,7072
	ctx.r30.s64 = ctx.r10.s64 + 7072;
	// bl 0x8212c000
	ctx.lr = 0x8285DF14;
	sub_8212C000(ctx, base);
	// li r4,182
	ctx.r4.s64 = 182;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DF24;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,7084
	ctx.r30.s64 = ctx.r9.s64 + 7084;
	// bl 0x8212c000
	ctx.lr = 0x8285DF34;
	sub_8212C000(ctx, base);
	// li r4,184
	ctx.r4.s64 = 184;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DF44;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,7104
	ctx.r30.s64 = ctx.r8.s64 + 7104;
	// bl 0x8212c000
	ctx.lr = 0x8285DF54;
	sub_8212C000(ctx, base);
	// li r4,183
	ctx.r4.s64 = 183;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DF64;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,7124
	ctx.r30.s64 = ctx.r7.s64 + 7124;
	// bl 0x8212c000
	ctx.lr = 0x8285DF74;
	sub_8212C000(ctx, base);
	// li r4,185
	ctx.r4.s64 = 185;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DF84;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,7132
	ctx.r30.s64 = ctx.r6.s64 + 7132;
	// bl 0x8212c000
	ctx.lr = 0x8285DF94;
	sub_8212C000(ctx, base);
	// li r4,186
	ctx.r4.s64 = 186;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DFA4;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,7144
	ctx.r30.s64 = ctx.r5.s64 + 7144;
	// bl 0x8212c000
	ctx.lr = 0x8285DFB4;
	sub_8212C000(ctx, base);
	// li r4,187
	ctx.r4.s64 = 187;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DFC4;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,7156
	ctx.r30.s64 = ctx.r4.s64 + 7156;
	// bl 0x8212c000
	ctx.lr = 0x8285DFD4;
	sub_8212C000(ctx, base);
	// li r4,188
	ctx.r4.s64 = 188;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285DFE4;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7168
	ctx.r30.s64 = ctx.r11.s64 + 7168;
	// bl 0x8212c000
	ctx.lr = 0x8285DFF4;
	sub_8212C000(ctx, base);
	// li r4,189
	ctx.r4.s64 = 189;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285E004;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r10,7180
	ctx.r31.s64 = ctx.r10.s64 + 7180;
	// bl 0x8212c000
	ctx.lr = 0x8285E014;
	sub_8212C000(ctx, base);
	// li r4,190
	ctx.r4.s64 = 190;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285E024;
	sub_828597D8(ctx, base);
	// stw r27,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285E030"))) PPC_WEAK_FUNC(sub_8285E030);
PPC_FUNC_IMPL(__imp__sub_8285E030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8285E038;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r30,r11,12296
	ctx.r30.s64 = ctx.r11.s64 + 12296;
loc_8285E068:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82831be0
	ctx.lr = 0x8285E07C;
	sub_82831BE0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82831af0
	ctx.lr = 0x8285E098;
	sub_82831AF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x8285e068
	if (ctx.cr6.lt) goto loc_8285E068;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285E0BC"))) PPC_WEAK_FUNC(sub_8285E0BC);
PPC_FUNC_IMPL(__imp__sub_8285E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285E0C0"))) PPC_WEAK_FUNC(sub_8285E0C0);
PPC_FUNC_IMPL(__imp__sub_8285E0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8285E0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x82831af0
	ctx.lr = 0x8285E0F4;
	sub_82831AF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8285e14c
	if (ctx.cr6.eq) goto loc_8285E14C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285e14c
	if (ctx.cr6.eq) goto loc_8285E14C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8285e120
	if (ctx.cr6.eq) goto loc_8285E120;
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
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8285E120:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,12296(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12300);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-3988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3988);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f8,f10,f11,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8285E14C:
	// addi r11,r31,3074
	ctx.r11.s64 = ctx.r31.s64 + 3074;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285E16C"))) PPC_WEAK_FUNC(sub_8285E16C);
PPC_FUNC_IMPL(__imp__sub_8285E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285E170"))) PPC_WEAK_FUNC(sub_8285E170);
PPC_FUNC_IMPL(__imp__sub_8285E170) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r5,10236
	ctx.r11.s64 = ctx.r5.s64 + 10236;
	// lwz r9,2096(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2096);
	// lwz r8,10240(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 10240);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8285e34c
	if (ctx.cr6.eq) goto loc_8285E34C;
	// lwz r11,816(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8285e34c
	if (ctx.cr6.eq) goto loc_8285E34C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r9,11700(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11700);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8285e1fc
	if (ctx.cr6.eq) goto loc_8285E1FC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8285e1f4
	if (ctx.cr6.eq) goto loc_8285E1F4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8285e1ec
	if (ctx.cr6.eq) goto loc_8285E1EC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8285e200
	goto loc_8285E200;
loc_8285E1EC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285e200
	goto loc_8285E200;
loc_8285E1F4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8285e200
	goto loc_8285E200;
loc_8285E1FC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8285E200:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,772(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 772);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e240
	if (ctx.cr6.eq) goto loc_8285E240;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e238
	if (ctx.cr6.eq) goto loc_8285E238;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285e230
	if (ctx.cr6.eq) goto loc_8285E230;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285e244
	goto loc_8285E244;
loc_8285E230:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285e244
	goto loc_8285E244;
loc_8285E238:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8285e244
	goto loc_8285E244;
loc_8285E240:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8285E244:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285e34c
	if (ctx.cr6.eq) goto loc_8285E34C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e27c
	if (ctx.cr6.eq) goto loc_8285E27C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e274
	if (ctx.cr6.eq) goto loc_8285E274;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285e26c
	if (ctx.cr6.eq) goto loc_8285E26C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8285e280
	goto loc_8285E280;
loc_8285E26C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285e280
	goto loc_8285E280;
loc_8285E274:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8285e280
	goto loc_8285E280;
loc_8285E27C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8285E280:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r10,0,18,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8285e2cc
	if (ctx.cr6.eq) goto loc_8285E2CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e2b8
	if (ctx.cr6.eq) goto loc_8285E2B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e2b0
	if (ctx.cr6.eq) goto loc_8285E2B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e2bc
	if (!ctx.cr6.eq) goto loc_8285E2BC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285e2bc
	goto loc_8285E2BC;
loc_8285E2B0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8285e2bc
	goto loc_8285E2BC;
loc_8285E2B8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8285E2BC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8285e340
	if (!ctx.cr6.eq) goto loc_8285E340;
loc_8285E2CC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8285e2f4
	if (ctx.cr6.eq) goto loc_8285E2F4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8285e2ec
	if (ctx.cr6.eq) goto loc_8285E2EC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8285e2f8
	if (ctx.cr6.eq) goto loc_8285E2F8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x8285e2f8
	goto loc_8285E2F8;
loc_8285E2EC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x8285e2f8
	goto loc_8285E2F8;
loc_8285E2F4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8285E2F8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285e30c
	if (!ctx.cr6.eq) goto loc_8285E30C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8285e314
	goto loc_8285E314;
loc_8285E30C:
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x82be7270
	ctx.lr = 0x8285E314;
	sub_82BE7270(ctx, base);
loc_8285E314:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8285e34c
	if (ctx.cr6.eq) goto loc_8285E34C;
	// cmpwi cr6,r11,444
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 444, ctx.xer);
	// beq cr6,0x8285e35c
	if (ctx.cr6.eq) goto loc_8285E35C;
	// cmpwi cr6,r11,399
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 399, ctx.xer);
	// bgt cr6,0x8285e340
	if (ctx.cr6.gt) goto loc_8285E340;
	// cmpwi cr6,r11,167
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 167, ctx.xer);
	// beq cr6,0x8285e340
	if (ctx.cr6.eq) goto loc_8285E340;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x8285e34c
	if (!ctx.cr6.eq) goto loc_8285E34C;
loc_8285E340:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12464(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12464, ctx.r11.u32);
	// stw r11,12328(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12328, ctx.r11.u32);
loc_8285E34C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8285E35C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12832(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285E374"))) PPC_WEAK_FUNC(sub_8285E374);
PPC_FUNC_IMPL(__imp__sub_8285E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285E378"))) PPC_WEAK_FUNC(sub_8285E378);
PPC_FUNC_IMPL(__imp__sub_8285E378) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,-4012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r10,r11,6552
	ctx.r10.s64 = ctx.r11.s64 + 6552;
	// lwz r7,2096(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,6556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r6,r9,52
	ctx.r6.s64 = ctx.r9.s64 + 52;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8285e504
	if (ctx.cr6.eq) goto loc_8285E504;
	// lwz r8,2156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// addi r9,r11,2152
	ctx.r9.s64 = ctx.r11.s64 + 2152;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r6,r8,3
	ctx.r6.s64 = ctx.r8.s64 + 3;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8285e504
	if (ctx.cr6.eq) goto loc_8285E504;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,12752(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12752);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-4008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4008);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8285e504
	if (!ctx.cr6.gt) goto loc_8285E504;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r9,r9,-4368
	ctx.r9.s64 = ctx.r9.s64 + -4368;
	// lfs f13,4924(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8285e4f0
	if (!ctx.cr6.gt) goto loc_8285E4F0;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r11,2676
	ctx.r8.s64 = ctx.r11.s64 + 2676;
	// lfs f0,-29460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29460);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,11700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11700);
	// lfs f13,-4012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,2680(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x8285e494
	if (!ctx.cr6.gt) goto loc_8285E494;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285e468
	if (ctx.cr6.eq) goto loc_8285E468;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285e458
	if (ctx.cr6.eq) goto loc_8285E458;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285e470
	if (!ctx.cr6.eq) goto loc_8285E470;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285e470
	goto loc_8285E470;
loc_8285E458:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r6,r10,-29532
	ctx.r6.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8285e470
	goto loc_8285E470;
loc_8285E468:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8285E470:
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r7,2124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8285e620
	goto loc_8285E620;
loc_8285E494:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285e4c4
	if (ctx.cr6.eq) goto loc_8285E4C4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285e4b4
	if (ctx.cr6.eq) goto loc_8285E4B4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285e4cc
	if (!ctx.cr6.eq) goto loc_8285E4CC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285e4cc
	goto loc_8285E4CC;
loc_8285E4B4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r6,r10,-29532
	ctx.r6.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8285e4cc
	goto loc_8285E4CC;
loc_8285E4C4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8285E4CC:
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r7,2120(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8285e620
	goto loc_8285E620;
loc_8285E4F0:
	// fsubs f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x8285e5bc
	if (ctx.cr6.gt) goto loc_8285E5BC;
loc_8285E504:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addi r8,r9,77
	ctx.r8.s64 = ctx.r9.s64 + 77;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8285e54c
	if (ctx.cr6.eq) goto loc_8285E54C;
	// lwz r9,2156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// addi r10,r11,2152
	ctx.r10.s64 = ctx.r11.s64 + 2152;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8285e54c
	if (ctx.cr6.eq) goto loc_8285E54C;
	// lfs f0,12332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8285e554
	if (ctx.cr6.gt) goto loc_8285E554;
loc_8285E54C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8285e664
	goto loc_8285E664;
loc_8285E554:
	// lwz r10,11700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11700);
	// addi r8,r11,2676
	ctx.r8.s64 = ctx.r11.s64 + 2676;
	// lwz r9,2680(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285e590
	if (ctx.cr6.eq) goto loc_8285E590;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285e580
	if (ctx.cr6.eq) goto loc_8285E580;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285e598
	if (!ctx.cr6.eq) goto loc_8285E598;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285e598
	goto loc_8285E598;
loc_8285E580:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r6,r10,-29532
	ctx.r6.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8285e598
	goto loc_8285E598;
loc_8285E590:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8285E598:
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r7,2140(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8285e620
	goto loc_8285E620;
loc_8285E5BC:
	// lwz r10,11700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11700);
	// addi r8,r11,2676
	ctx.r8.s64 = ctx.r11.s64 + 2676;
	// lwz r9,2680(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285e5f8
	if (ctx.cr6.eq) goto loc_8285E5F8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8285e5e8
	if (ctx.cr6.eq) goto loc_8285E5E8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285e600
	if (!ctx.cr6.eq) goto loc_8285E600;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285e600
	goto loc_8285E600;
loc_8285E5E8:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r6,r10,-29532
	ctx.r6.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8285e600
	goto loc_8285E600;
loc_8285E5F8:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8285E600:
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r7,2120(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8285E620:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285e660
	if (ctx.cr6.eq) goto loc_8285E660;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285e660
	if (ctx.cr6.eq) goto loc_8285E660;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285e660
	if (ctx.cr6.eq) goto loc_8285E660;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285e660
	if (ctx.cr6.eq) goto loc_8285E660;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x8279f7e0
	ctx.lr = 0x8285E660;
	sub_8279F7E0(ctx, base);
loc_8285E660:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8285E664:
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

__attribute__((alias("__imp__sub_8285E67C"))) PPC_WEAK_FUNC(sub_8285E67C);
PPC_FUNC_IMPL(__imp__sub_8285E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8285E680"))) PPC_WEAK_FUNC(sub_8285E680);
PPC_FUNC_IMPL(__imp__sub_8285E680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8285E688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,12412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12412);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8285e6fc
	if (ctx.cr6.eq) goto loc_8285E6FC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e6ec
	if (ctx.cr6.eq) goto loc_8285E6EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e6dc
	if (ctx.cr6.eq) goto loc_8285E6DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e6f0
	if (!ctx.cr6.eq) goto loc_8285E6F0;
	// ld r5,4660(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4660);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// b 0x8285e730
	goto loc_8285E730;
loc_8285E6DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r5,4660(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4660);
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// b 0x8285e730
	goto loc_8285E730;
loc_8285E6EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E6F0:
	// ld r5,4660(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4660);
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// b 0x8285e730
	goto loc_8285E730;
loc_8285E6FC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e724
	if (ctx.cr6.eq) goto loc_8285E724;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e71c
	if (ctx.cr6.eq) goto loc_8285E71C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e728
	if (!ctx.cr6.eq) goto loc_8285E728;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285e728
	goto loc_8285E728;
loc_8285E71C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285e728
	goto loc_8285E728;
loc_8285E724:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E728:
	// ld r6,4660(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4660);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
loc_8285E730:
	// lwz r4,6440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285e770
	if (ctx.cr6.eq) goto loc_8285E770;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285e770
	if (ctx.cr6.eq) goto loc_8285E770;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285e770
	if (ctx.cr6.eq) goto loc_8285E770;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285e770
	if (ctx.cr6.eq) goto loc_8285E770;
	// bl 0x8279f5e0
	ctx.lr = 0x8285E770;
	sub_8279F5E0(ctx, base);
loc_8285E770:
	// lwz r11,12344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// beq cr6,0x8285e7c8
	if (ctx.cr6.eq) goto loc_8285E7C8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e7b8
	if (ctx.cr6.eq) goto loc_8285E7B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e7a8
	if (ctx.cr6.eq) goto loc_8285E7A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e7bc
	if (!ctx.cr6.eq) goto loc_8285E7BC;
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ld r5,4668(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4668);
	// b 0x8285e7fc
	goto loc_8285E7FC;
loc_8285E7A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4668(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4668);
	// b 0x8285e7fc
	goto loc_8285E7FC;
loc_8285E7B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E7BC:
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4668(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4668);
	// b 0x8285e7fc
	goto loc_8285E7FC;
loc_8285E7C8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e7f0
	if (ctx.cr6.eq) goto loc_8285E7F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e7e8
	if (ctx.cr6.eq) goto loc_8285E7E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e7f4
	if (!ctx.cr6.eq) goto loc_8285E7F4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285e7f4
	goto loc_8285E7F4;
loc_8285E7E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285e7f4
	goto loc_8285E7F4;
loc_8285E7F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E7F4:
	// ld r6,4668(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4668);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
loc_8285E7FC:
	// lwz r4,6440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285e83c
	if (ctx.cr6.eq) goto loc_8285E83C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285e83c
	if (ctx.cr6.eq) goto loc_8285E83C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285e83c
	if (ctx.cr6.eq) goto loc_8285E83C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285e83c
	if (ctx.cr6.eq) goto loc_8285E83C;
	// bl 0x8279f5e0
	ctx.lr = 0x8285E83C;
	sub_8279F5E0(ctx, base);
loc_8285E83C:
	// lwz r11,12324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// beq cr6,0x8285e894
	if (ctx.cr6.eq) goto loc_8285E894;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e884
	if (ctx.cr6.eq) goto loc_8285E884;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e874
	if (ctx.cr6.eq) goto loc_8285E874;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e888
	if (!ctx.cr6.eq) goto loc_8285E888;
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ld r5,4804(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4804);
	// b 0x8285e8c8
	goto loc_8285E8C8;
loc_8285E874:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4804(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4804);
	// b 0x8285e8c8
	goto loc_8285E8C8;
loc_8285E884:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E888:
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4804(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4804);
	// b 0x8285e8c8
	goto loc_8285E8C8;
loc_8285E894:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e8bc
	if (ctx.cr6.eq) goto loc_8285E8BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e8b4
	if (ctx.cr6.eq) goto loc_8285E8B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e8c0
	if (!ctx.cr6.eq) goto loc_8285E8C0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285e8c0
	goto loc_8285E8C0;
loc_8285E8B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285e8c0
	goto loc_8285E8C0;
loc_8285E8BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E8C0:
	// ld r6,4804(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4804);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
loc_8285E8C8:
	// lwz r4,6440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285e908
	if (ctx.cr6.eq) goto loc_8285E908;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285e908
	if (ctx.cr6.eq) goto loc_8285E908;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285e908
	if (ctx.cr6.eq) goto loc_8285E908;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285e908
	if (ctx.cr6.eq) goto loc_8285E908;
	// bl 0x8279f5e0
	ctx.lr = 0x8285E908;
	sub_8279F5E0(ctx, base);
loc_8285E908:
	// lwz r11,12376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// beq cr6,0x8285e960
	if (ctx.cr6.eq) goto loc_8285E960;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e950
	if (ctx.cr6.eq) goto loc_8285E950;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e940
	if (ctx.cr6.eq) goto loc_8285E940;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e954
	if (!ctx.cr6.eq) goto loc_8285E954;
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ld r5,4812(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4812);
	// b 0x8285e994
	goto loc_8285E994;
loc_8285E940:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4812(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4812);
	// b 0x8285e994
	goto loc_8285E994;
loc_8285E950:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E954:
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4812(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4812);
	// b 0x8285e994
	goto loc_8285E994;
loc_8285E960:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285e988
	if (ctx.cr6.eq) goto loc_8285E988;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285e980
	if (ctx.cr6.eq) goto loc_8285E980;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285e98c
	if (!ctx.cr6.eq) goto loc_8285E98C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285e98c
	goto loc_8285E98C;
loc_8285E980:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285e98c
	goto loc_8285E98C;
loc_8285E988:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285E98C:
	// ld r6,4812(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4812);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
loc_8285E994:
	// lwz r4,6440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285e9d4
	if (ctx.cr6.eq) goto loc_8285E9D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285e9d4
	if (ctx.cr6.eq) goto loc_8285E9D4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285e9d4
	if (ctx.cr6.eq) goto loc_8285E9D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285e9d4
	if (ctx.cr6.eq) goto loc_8285E9D4;
	// bl 0x8279f5e0
	ctx.lr = 0x8285E9D4;
	sub_8279F5E0(ctx, base);
loc_8285E9D4:
	// lwz r11,12380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// beq cr6,0x8285ea2c
	if (ctx.cr6.eq) goto loc_8285EA2C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285ea1c
	if (ctx.cr6.eq) goto loc_8285EA1C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285ea0c
	if (ctx.cr6.eq) goto loc_8285EA0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285ea20
	if (!ctx.cr6.eq) goto loc_8285EA20;
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ld r5,4820(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4820);
	// b 0x8285ea60
	goto loc_8285EA60;
loc_8285EA0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4820(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4820);
	// b 0x8285ea60
	goto loc_8285EA60;
loc_8285EA1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EA20:
	// ld r6,2856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// ld r5,4820(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4820);
	// b 0x8285ea60
	goto loc_8285EA60;
loc_8285EA2C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285ea54
	if (ctx.cr6.eq) goto loc_8285EA54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285ea4c
	if (ctx.cr6.eq) goto loc_8285EA4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285ea58
	if (!ctx.cr6.eq) goto loc_8285EA58;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285ea58
	goto loc_8285EA58;
loc_8285EA4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ea58
	goto loc_8285EA58;
loc_8285EA54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EA58:
	// ld r6,4820(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4820);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
loc_8285EA60:
	// lwz r4,6440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285eaa0
	if (ctx.cr6.eq) goto loc_8285EAA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285eaa0
	if (ctx.cr6.eq) goto loc_8285EAA0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285eaa0
	if (ctx.cr6.eq) goto loc_8285EAA0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285eaa0
	if (ctx.cr6.eq) goto loc_8285EAA0;
	// bl 0x8279f5e0
	ctx.lr = 0x8285EAA0;
	sub_8279F5E0(ctx, base);
loc_8285EAA0:
	// lwz r11,12496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285eb24
	if (!ctx.cr6.eq) goto loc_8285EB24;
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285ead8
	if (ctx.cr6.eq) goto loc_8285EAD8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285ead0
	if (ctx.cr6.eq) goto loc_8285EAD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285eadc
	if (!ctx.cr6.eq) goto loc_8285EADC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285eadc
	goto loc_8285EADC;
loc_8285EAD0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285eadc
	goto loc_8285EADC;
loc_8285EAD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EADC:
	// ld r6,4772(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// lwz r4,6440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// beq cr6,0x8285eb24
	if (ctx.cr6.eq) goto loc_8285EB24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285eb24
	if (ctx.cr6.eq) goto loc_8285EB24;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285eb24
	if (ctx.cr6.eq) goto loc_8285EB24;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285eb24
	if (ctx.cr6.eq) goto loc_8285EB24;
	// bl 0x8279f5e0
	ctx.lr = 0x8285EB24;
	sub_8279F5E0(ctx, base);
loc_8285EB24:
	// lwz r11,12500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285eba8
	if (!ctx.cr6.eq) goto loc_8285EBA8;
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285eb5c
	if (ctx.cr6.eq) goto loc_8285EB5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285eb54
	if (ctx.cr6.eq) goto loc_8285EB54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285eb60
	if (!ctx.cr6.eq) goto loc_8285EB60;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285eb60
	goto loc_8285EB60;
loc_8285EB54:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285eb60
	goto loc_8285EB60;
loc_8285EB5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EB60:
	// ld r6,4764(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r5,2856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2856);
	// lwz r4,6440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// beq cr6,0x8285eba8
	if (ctx.cr6.eq) goto loc_8285EBA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8285eba8
	if (ctx.cr6.eq) goto loc_8285EBA8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285eba8
	if (ctx.cr6.eq) goto loc_8285EBA8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285eba8
	if (ctx.cr6.eq) goto loc_8285EBA8;
	// bl 0x8279f5e0
	ctx.lr = 0x8285EBA8;
	sub_8279F5E0(ctx, base);
loc_8285EBA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285EBB0"))) PPC_WEAK_FUNC(sub_8285EBB0);
PPC_FUNC_IMPL(__imp__sub_8285EBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8285EBB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r27,13188(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// beq cr6,0x8285ec00
	if (ctx.cr6.eq) goto loc_8285EC00;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ebf8
	if (ctx.cr6.eq) goto loc_8285EBF8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ebf0
	if (ctx.cr6.eq) goto loc_8285EBF0;
	// b 0x8285ec04
	goto loc_8285EC04;
loc_8285EBF0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ec04
	goto loc_8285EC04;
loc_8285EBF8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ec04
	goto loc_8285EC04;
loc_8285EC00:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EC04:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,2572
	ctx.r6.s64 = ctx.r10.s64 + 2572;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EC2C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5720(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5720, ctx.r8.u32);
	// stw r7,3080(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3080, ctx.r7.u32);
	// beq cr6,0x8285ec6c
	if (ctx.cr6.eq) goto loc_8285EC6C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ec64
	if (ctx.cr6.eq) goto loc_8285EC64;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ec5c
	if (ctx.cr6.eq) goto loc_8285EC5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ec70
	goto loc_8285EC70;
loc_8285EC5C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ec70
	goto loc_8285EC70;
loc_8285EC64:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ec70
	goto loc_8285EC70;
loc_8285EC6C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EC70:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2584
	ctx.r6.s64 = ctx.r11.s64 + 2584;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EC94;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5724(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5724, ctx.r8.u32);
	// stw r7,3084(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3084, ctx.r7.u32);
	// beq cr6,0x8285ecd4
	if (ctx.cr6.eq) goto loc_8285ECD4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285eccc
	if (ctx.cr6.eq) goto loc_8285ECCC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ecc4
	if (ctx.cr6.eq) goto loc_8285ECC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ecd8
	goto loc_8285ECD8;
loc_8285ECC4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ecd8
	goto loc_8285ECD8;
loc_8285ECCC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ecd8
	goto loc_8285ECD8;
loc_8285ECD4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285ECD8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2596
	ctx.r6.s64 = ctx.r11.s64 + 2596;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285ECFC;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5728(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5728, ctx.r8.u32);
	// stw r7,3088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3088, ctx.r7.u32);
	// beq cr6,0x8285ed3c
	if (ctx.cr6.eq) goto loc_8285ED3C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ed34
	if (ctx.cr6.eq) goto loc_8285ED34;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ed2c
	if (ctx.cr6.eq) goto loc_8285ED2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ed40
	goto loc_8285ED40;
loc_8285ED2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ed40
	goto loc_8285ED40;
loc_8285ED34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ed40
	goto loc_8285ED40;
loc_8285ED3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285ED40:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2616
	ctx.r6.s64 = ctx.r11.s64 + 2616;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285ED64;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5732(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5732, ctx.r8.u32);
	// stw r7,3092(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3092, ctx.r7.u32);
	// beq cr6,0x8285eda4
	if (ctx.cr6.eq) goto loc_8285EDA4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ed9c
	if (ctx.cr6.eq) goto loc_8285ED9C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ed94
	if (ctx.cr6.eq) goto loc_8285ED94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285eda8
	goto loc_8285EDA8;
loc_8285ED94:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285eda8
	goto loc_8285EDA8;
loc_8285ED9C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285eda8
	goto loc_8285EDA8;
loc_8285EDA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EDA8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2632
	ctx.r6.s64 = ctx.r11.s64 + 2632;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EDCC;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5736(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5736, ctx.r8.u32);
	// stw r7,3096(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3096, ctx.r7.u32);
	// beq cr6,0x8285ee0c
	if (ctx.cr6.eq) goto loc_8285EE0C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ee04
	if (ctx.cr6.eq) goto loc_8285EE04;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285edfc
	if (ctx.cr6.eq) goto loc_8285EDFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ee10
	goto loc_8285EE10;
loc_8285EDFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ee10
	goto loc_8285EE10;
loc_8285EE04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ee10
	goto loc_8285EE10;
loc_8285EE0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EE10:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2644
	ctx.r6.s64 = ctx.r11.s64 + 2644;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EE34;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5740(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5740, ctx.r8.u32);
	// stw r7,3100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3100, ctx.r7.u32);
	// beq cr6,0x8285ee74
	if (ctx.cr6.eq) goto loc_8285EE74;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ee6c
	if (ctx.cr6.eq) goto loc_8285EE6C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ee64
	if (ctx.cr6.eq) goto loc_8285EE64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ee78
	goto loc_8285EE78;
loc_8285EE64:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ee78
	goto loc_8285EE78;
loc_8285EE6C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ee78
	goto loc_8285EE78;
loc_8285EE74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EE78:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2660
	ctx.r6.s64 = ctx.r11.s64 + 2660;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EE9C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5744(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5744, ctx.r8.u32);
	// stw r7,3104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3104, ctx.r7.u32);
	// beq cr6,0x8285eedc
	if (ctx.cr6.eq) goto loc_8285EEDC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285eed4
	if (ctx.cr6.eq) goto loc_8285EED4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285eecc
	if (ctx.cr6.eq) goto loc_8285EECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285eee0
	goto loc_8285EEE0;
loc_8285EECC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285eee0
	goto loc_8285EEE0;
loc_8285EED4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285eee0
	goto loc_8285EEE0;
loc_8285EEDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EEE0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2676
	ctx.r6.s64 = ctx.r11.s64 + 2676;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EF04;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5748(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5748, ctx.r8.u32);
	// stw r7,3108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3108, ctx.r7.u32);
	// beq cr6,0x8285ef44
	if (ctx.cr6.eq) goto loc_8285EF44;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285ef3c
	if (ctx.cr6.eq) goto loc_8285EF3C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ef34
	if (ctx.cr6.eq) goto loc_8285EF34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285ef48
	goto loc_8285EF48;
loc_8285EF34:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285ef48
	goto loc_8285EF48;
loc_8285EF3C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285ef48
	goto loc_8285EF48;
loc_8285EF44:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EF48:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2692
	ctx.r6.s64 = ctx.r11.s64 + 2692;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EF6C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5752(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5752, ctx.r8.u32);
	// stw r7,3112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3112, ctx.r7.u32);
	// beq cr6,0x8285efac
	if (ctx.cr6.eq) goto loc_8285EFAC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285efa4
	if (ctx.cr6.eq) goto loc_8285EFA4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285ef9c
	if (ctx.cr6.eq) goto loc_8285EF9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285efb0
	goto loc_8285EFB0;
loc_8285EF9C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285efb0
	goto loc_8285EFB0;
loc_8285EFA4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285efb0
	goto loc_8285EFB0;
loc_8285EFAC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285EFB0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2712
	ctx.r6.s64 = ctx.r11.s64 + 2712;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285EFD4;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5760(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5760, ctx.r8.u32);
	// stw r7,3120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3120, ctx.r7.u32);
	// beq cr6,0x8285f014
	if (ctx.cr6.eq) goto loc_8285F014;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f00c
	if (ctx.cr6.eq) goto loc_8285F00C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f004
	if (ctx.cr6.eq) goto loc_8285F004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f018
	goto loc_8285F018;
loc_8285F004:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f018
	goto loc_8285F018;
loc_8285F00C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f018
	goto loc_8285F018;
loc_8285F014:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F018:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2724
	ctx.r6.s64 = ctx.r11.s64 + 2724;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F03C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5864(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5864, ctx.r8.u32);
	// stw r7,3224(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3224, ctx.r7.u32);
	// beq cr6,0x8285f07c
	if (ctx.cr6.eq) goto loc_8285F07C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f074
	if (ctx.cr6.eq) goto loc_8285F074;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f06c
	if (ctx.cr6.eq) goto loc_8285F06C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f080
	goto loc_8285F080;
loc_8285F06C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f080
	goto loc_8285F080;
loc_8285F074:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f080
	goto loc_8285F080;
loc_8285F07C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F080:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2736
	ctx.r6.s64 = ctx.r11.s64 + 2736;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F0A4;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5756(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5756, ctx.r8.u32);
	// stw r7,3116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3116, ctx.r7.u32);
	// beq cr6,0x8285f0e4
	if (ctx.cr6.eq) goto loc_8285F0E4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f0dc
	if (ctx.cr6.eq) goto loc_8285F0DC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f0d4
	if (ctx.cr6.eq) goto loc_8285F0D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f0e8
	goto loc_8285F0E8;
loc_8285F0D4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f0e8
	goto loc_8285F0E8;
loc_8285F0DC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f0e8
	goto loc_8285F0E8;
loc_8285F0E4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F0E8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2744
	ctx.r6.s64 = ctx.r11.s64 + 2744;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F10C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5820(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5820, ctx.r8.u32);
	// stw r7,3180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3180, ctx.r7.u32);
	// beq cr6,0x8285f14c
	if (ctx.cr6.eq) goto loc_8285F14C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f144
	if (ctx.cr6.eq) goto loc_8285F144;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f13c
	if (ctx.cr6.eq) goto loc_8285F13C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f150
	goto loc_8285F150;
loc_8285F13C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f150
	goto loc_8285F150;
loc_8285F144:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f150
	goto loc_8285F150;
loc_8285F14C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F150:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2756
	ctx.r6.s64 = ctx.r11.s64 + 2756;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F174;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5824(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5824, ctx.r8.u32);
	// stw r7,3184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3184, ctx.r7.u32);
	// beq cr6,0x8285f1b4
	if (ctx.cr6.eq) goto loc_8285F1B4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f1ac
	if (ctx.cr6.eq) goto loc_8285F1AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f1a4
	if (ctx.cr6.eq) goto loc_8285F1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f1b8
	goto loc_8285F1B8;
loc_8285F1A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f1b8
	goto loc_8285F1B8;
loc_8285F1AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f1b8
	goto loc_8285F1B8;
loc_8285F1B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F1B8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2772
	ctx.r6.s64 = ctx.r11.s64 + 2772;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F1DC;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5868(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5868, ctx.r8.u32);
	// stw r7,3228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3228, ctx.r7.u32);
	// beq cr6,0x8285f21c
	if (ctx.cr6.eq) goto loc_8285F21C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f214
	if (ctx.cr6.eq) goto loc_8285F214;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f20c
	if (ctx.cr6.eq) goto loc_8285F20C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f220
	goto loc_8285F220;
loc_8285F20C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f220
	goto loc_8285F220;
loc_8285F214:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f220
	goto loc_8285F220;
loc_8285F21C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F220:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2788
	ctx.r6.s64 = ctx.r11.s64 + 2788;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F244;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5872(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5872, ctx.r8.u32);
	// stw r7,3232(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3232, ctx.r7.u32);
	// beq cr6,0x8285f284
	if (ctx.cr6.eq) goto loc_8285F284;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f27c
	if (ctx.cr6.eq) goto loc_8285F27C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f274
	if (ctx.cr6.eq) goto loc_8285F274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f288
	goto loc_8285F288;
loc_8285F274:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f288
	goto loc_8285F288;
loc_8285F27C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f288
	goto loc_8285F288;
loc_8285F284:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F288:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2808
	ctx.r6.s64 = ctx.r11.s64 + 2808;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F2AC;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5832(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5832, ctx.r8.u32);
	// stw r7,3192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3192, ctx.r7.u32);
	// beq cr6,0x8285f2ec
	if (ctx.cr6.eq) goto loc_8285F2EC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f2e4
	if (ctx.cr6.eq) goto loc_8285F2E4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f2dc
	if (ctx.cr6.eq) goto loc_8285F2DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f2f0
	goto loc_8285F2F0;
loc_8285F2DC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f2f0
	goto loc_8285F2F0;
loc_8285F2E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f2f0
	goto loc_8285F2F0;
loc_8285F2EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F2F0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2824
	ctx.r6.s64 = ctx.r11.s64 + 2824;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F314;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5836(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5836, ctx.r8.u32);
	// stw r7,3196(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3196, ctx.r7.u32);
	// beq cr6,0x8285f354
	if (ctx.cr6.eq) goto loc_8285F354;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f34c
	if (ctx.cr6.eq) goto loc_8285F34C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f344
	if (ctx.cr6.eq) goto loc_8285F344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f358
	goto loc_8285F358;
loc_8285F344:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f358
	goto loc_8285F358;
loc_8285F34C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f358
	goto loc_8285F358;
loc_8285F354:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F358:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2840
	ctx.r6.s64 = ctx.r11.s64 + 2840;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F37C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5876(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5876, ctx.r8.u32);
	// stw r7,3236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3236, ctx.r7.u32);
	// beq cr6,0x8285f3bc
	if (ctx.cr6.eq) goto loc_8285F3BC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f3b4
	if (ctx.cr6.eq) goto loc_8285F3B4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f3ac
	if (ctx.cr6.eq) goto loc_8285F3AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f3c0
	goto loc_8285F3C0;
loc_8285F3AC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f3c0
	goto loc_8285F3C0;
loc_8285F3B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f3c0
	goto loc_8285F3C0;
loc_8285F3BC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F3C0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2860
	ctx.r6.s64 = ctx.r11.s64 + 2860;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F3E4;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5968(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5968, ctx.r8.u32);
	// stw r7,3328(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3328, ctx.r7.u32);
	// beq cr6,0x8285f424
	if (ctx.cr6.eq) goto loc_8285F424;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f41c
	if (ctx.cr6.eq) goto loc_8285F41C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f414
	if (ctx.cr6.eq) goto loc_8285F414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f428
	goto loc_8285F428;
loc_8285F414:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f428
	goto loc_8285F428;
loc_8285F41C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f428
	goto loc_8285F428;
loc_8285F424:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F428:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2872
	ctx.r6.s64 = ctx.r11.s64 + 2872;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F44C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5976(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5976, ctx.r8.u32);
	// stw r7,3336(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3336, ctx.r7.u32);
	// beq cr6,0x8285f48c
	if (ctx.cr6.eq) goto loc_8285F48C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f484
	if (ctx.cr6.eq) goto loc_8285F484;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f47c
	if (ctx.cr6.eq) goto loc_8285F47C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f490
	goto loc_8285F490;
loc_8285F47C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f490
	goto loc_8285F490;
loc_8285F484:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f490
	goto loc_8285F490;
loc_8285F48C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F490:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2888
	ctx.r6.s64 = ctx.r11.s64 + 2888;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F4B4;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5972(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5972, ctx.r8.u32);
	// stw r7,3332(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3332, ctx.r7.u32);
	// beq cr6,0x8285f4f4
	if (ctx.cr6.eq) goto loc_8285F4F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f4ec
	if (ctx.cr6.eq) goto loc_8285F4EC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f4e4
	if (ctx.cr6.eq) goto loc_8285F4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f4f8
	goto loc_8285F4F8;
loc_8285F4E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f4f8
	goto loc_8285F4F8;
loc_8285F4EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f4f8
	goto loc_8285F4F8;
loc_8285F4F4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F4F8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2904
	ctx.r6.s64 = ctx.r11.s64 + 2904;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6456(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// bl 0x82828d60
	ctx.lr = 0x8285F51C;
	sub_82828D60(ctx, base);
	// lwz r8,6456(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6456);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6024(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6024, ctx.r8.u32);
	// stw r7,3384(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3384, ctx.r7.u32);
	// beq cr6,0x8285f55c
	if (ctx.cr6.eq) goto loc_8285F55C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f554
	if (ctx.cr6.eq) goto loc_8285F554;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f54c
	if (ctx.cr6.eq) goto loc_8285F54C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f560
	goto loc_8285F560;
loc_8285F54C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f560
	goto loc_8285F560;
loc_8285F554:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f560
	goto loc_8285F560;
loc_8285F55C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F560:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2920
	ctx.r6.s64 = ctx.r11.s64 + 2920;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F584;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5764(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5764, ctx.r8.u32);
	// stw r7,3124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3124, ctx.r7.u32);
	// beq cr6,0x8285f5c4
	if (ctx.cr6.eq) goto loc_8285F5C4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f5bc
	if (ctx.cr6.eq) goto loc_8285F5BC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f5b4
	if (ctx.cr6.eq) goto loc_8285F5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f5c8
	goto loc_8285F5C8;
loc_8285F5B4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f5c8
	goto loc_8285F5C8;
loc_8285F5BC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f5c8
	goto loc_8285F5C8;
loc_8285F5C4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F5C8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2936
	ctx.r6.s64 = ctx.r11.s64 + 2936;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F5EC;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5768(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5768, ctx.r8.u32);
	// stw r7,3128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3128, ctx.r7.u32);
	// beq cr6,0x8285f62c
	if (ctx.cr6.eq) goto loc_8285F62C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f624
	if (ctx.cr6.eq) goto loc_8285F624;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f61c
	if (ctx.cr6.eq) goto loc_8285F61C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f630
	goto loc_8285F630;
loc_8285F61C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f630
	goto loc_8285F630;
loc_8285F624:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f630
	goto loc_8285F630;
loc_8285F62C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F630:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2952
	ctx.r6.s64 = ctx.r11.s64 + 2952;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F654;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5772(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5772, ctx.r8.u32);
	// stw r7,3132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3132, ctx.r7.u32);
	// beq cr6,0x8285f694
	if (ctx.cr6.eq) goto loc_8285F694;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f68c
	if (ctx.cr6.eq) goto loc_8285F68C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f684
	if (ctx.cr6.eq) goto loc_8285F684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f698
	goto loc_8285F698;
loc_8285F684:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f698
	goto loc_8285F698;
loc_8285F68C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f698
	goto loc_8285F698;
loc_8285F694:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F698:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2968
	ctx.r6.s64 = ctx.r11.s64 + 2968;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F6BC;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5776(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5776, ctx.r8.u32);
	// stw r7,3136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3136, ctx.r7.u32);
	// beq cr6,0x8285f6fc
	if (ctx.cr6.eq) goto loc_8285F6FC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f6f4
	if (ctx.cr6.eq) goto loc_8285F6F4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f6ec
	if (ctx.cr6.eq) goto loc_8285F6EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f700
	goto loc_8285F700;
loc_8285F6EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f700
	goto loc_8285F700;
loc_8285F6F4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f700
	goto loc_8285F700;
loc_8285F6FC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F700:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,2984
	ctx.r6.s64 = ctx.r11.s64 + 2984;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F724;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5780(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5780, ctx.r8.u32);
	// stw r7,3140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3140, ctx.r7.u32);
	// beq cr6,0x8285f764
	if (ctx.cr6.eq) goto loc_8285F764;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f75c
	if (ctx.cr6.eq) goto loc_8285F75C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f754
	if (ctx.cr6.eq) goto loc_8285F754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f768
	goto loc_8285F768;
loc_8285F754:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f768
	goto loc_8285F768;
loc_8285F75C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f768
	goto loc_8285F768;
loc_8285F764:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F768:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3004
	ctx.r6.s64 = ctx.r11.s64 + 3004;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F78C;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6088, ctx.r8.u32);
	// stw r7,3448(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3448, ctx.r7.u32);
	// beq cr6,0x8285f7cc
	if (ctx.cr6.eq) goto loc_8285F7CC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f7c4
	if (ctx.cr6.eq) goto loc_8285F7C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f7bc
	if (ctx.cr6.eq) goto loc_8285F7BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f7d0
	goto loc_8285F7D0;
loc_8285F7BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f7d0
	goto loc_8285F7D0;
loc_8285F7C4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f7d0
	goto loc_8285F7D0;
loc_8285F7CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F7D0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3020
	ctx.r6.s64 = ctx.r11.s64 + 3020;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F7F4;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6068(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6068, ctx.r8.u32);
	// stw r7,3428(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3428, ctx.r7.u32);
	// beq cr6,0x8285f834
	if (ctx.cr6.eq) goto loc_8285F834;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f82c
	if (ctx.cr6.eq) goto loc_8285F82C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f824
	if (ctx.cr6.eq) goto loc_8285F824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f838
	goto loc_8285F838;
loc_8285F824:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f838
	goto loc_8285F838;
loc_8285F82C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f838
	goto loc_8285F838;
loc_8285F834:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F838:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3032
	ctx.r6.s64 = ctx.r11.s64 + 3032;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F85C;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6072(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6072, ctx.r8.u32);
	// stw r7,3432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3432, ctx.r7.u32);
	// beq cr6,0x8285f89c
	if (ctx.cr6.eq) goto loc_8285F89C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f894
	if (ctx.cr6.eq) goto loc_8285F894;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f88c
	if (ctx.cr6.eq) goto loc_8285F88C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f8a0
	goto loc_8285F8A0;
loc_8285F88C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f8a0
	goto loc_8285F8A0;
loc_8285F894:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f8a0
	goto loc_8285F8A0;
loc_8285F89C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F8A0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3044
	ctx.r6.s64 = ctx.r11.s64 + 3044;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F8C4;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5800(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5800, ctx.r8.u32);
	// stw r7,3160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3160, ctx.r7.u32);
	// beq cr6,0x8285f904
	if (ctx.cr6.eq) goto loc_8285F904;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f8fc
	if (ctx.cr6.eq) goto loc_8285F8FC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f8f4
	if (ctx.cr6.eq) goto loc_8285F8F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f908
	goto loc_8285F908;
loc_8285F8F4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f908
	goto loc_8285F908;
loc_8285F8FC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f908
	goto loc_8285F908;
loc_8285F904:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F908:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3056
	ctx.r6.s64 = ctx.r11.s64 + 3056;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F92C;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5804(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5804, ctx.r8.u32);
	// stw r7,3164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3164, ctx.r7.u32);
	// beq cr6,0x8285f96c
	if (ctx.cr6.eq) goto loc_8285F96C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f964
	if (ctx.cr6.eq) goto loc_8285F964;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f95c
	if (ctx.cr6.eq) goto loc_8285F95C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f970
	goto loc_8285F970;
loc_8285F95C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f970
	goto loc_8285F970;
loc_8285F964:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f970
	goto loc_8285F970;
loc_8285F96C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F970:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3068
	ctx.r6.s64 = ctx.r11.s64 + 3068;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F994;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,6104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6104, ctx.r8.u32);
	// stw r7,3464(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3464, ctx.r7.u32);
	// beq cr6,0x8285f9d4
	if (ctx.cr6.eq) goto loc_8285F9D4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285f9cc
	if (ctx.cr6.eq) goto loc_8285F9CC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285f9c4
	if (ctx.cr6.eq) goto loc_8285F9C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285f9d8
	goto loc_8285F9D8;
loc_8285F9C4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285f9d8
	goto loc_8285F9D8;
loc_8285F9CC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285f9d8
	goto loc_8285F9D8;
loc_8285F9D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285F9D8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3080
	ctx.r6.s64 = ctx.r11.s64 + 3080;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285F9FC;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5812(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5812, ctx.r8.u32);
	// stw r7,3172(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3172, ctx.r7.u32);
	// beq cr6,0x8285fa3c
	if (ctx.cr6.eq) goto loc_8285FA3C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285fa34
	if (ctx.cr6.eq) goto loc_8285FA34;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285fa2c
	if (ctx.cr6.eq) goto loc_8285FA2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285fa40
	goto loc_8285FA40;
loc_8285FA2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285fa40
	goto loc_8285FA40;
loc_8285FA34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285fa40
	goto loc_8285FA40;
loc_8285FA3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285FA40:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3096
	ctx.r6.s64 = ctx.r11.s64 + 3096;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285FA64;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5816(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5816, ctx.r8.u32);
	// stw r7,3176(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3176, ctx.r7.u32);
	// beq cr6,0x8285faa4
	if (ctx.cr6.eq) goto loc_8285FAA4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285fa9c
	if (ctx.cr6.eq) goto loc_8285FA9C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285fa94
	if (ctx.cr6.eq) goto loc_8285FA94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285faa8
	goto loc_8285FAA8;
loc_8285FA94:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285faa8
	goto loc_8285FAA8;
loc_8285FA9C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285faa8
	goto loc_8285FAA8;
loc_8285FAA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285FAA8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3116
	ctx.r6.s64 = ctx.r11.s64 + 3116;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285FACC;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5860(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5860, ctx.r8.u32);
	// stw r7,3220(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3220, ctx.r7.u32);
	// beq cr6,0x8285fb0c
	if (ctx.cr6.eq) goto loc_8285FB0C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285fb04
	if (ctx.cr6.eq) goto loc_8285FB04;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285fafc
	if (ctx.cr6.eq) goto loc_8285FAFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285fb10
	goto loc_8285FB10;
loc_8285FAFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285fb10
	goto loc_8285FB10;
loc_8285FB04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285fb10
	goto loc_8285FB10;
loc_8285FB0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285FB10:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3124
	ctx.r6.s64 = ctx.r11.s64 + 3124;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285FB34;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5840(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5840, ctx.r8.u32);
	// stw r7,3200(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3200, ctx.r7.u32);
	// beq cr6,0x8285fb74
	if (ctx.cr6.eq) goto loc_8285FB74;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285fb6c
	if (ctx.cr6.eq) goto loc_8285FB6C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285fb64
	if (ctx.cr6.eq) goto loc_8285FB64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285fb78
	goto loc_8285FB78;
loc_8285FB64:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285fb78
	goto loc_8285FB78;
loc_8285FB6C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285fb78
	goto loc_8285FB78;
loc_8285FB74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285FB78:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3136
	ctx.r6.s64 = ctx.r11.s64 + 3136;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285FB9C;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5844(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5844, ctx.r8.u32);
	// stw r7,3204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3204, ctx.r7.u32);
	// beq cr6,0x8285fbdc
	if (ctx.cr6.eq) goto loc_8285FBDC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285fbd4
	if (ctx.cr6.eq) goto loc_8285FBD4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285fbcc
	if (ctx.cr6.eq) goto loc_8285FBCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285fbe0
	goto loc_8285FBE0;
loc_8285FBCC:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285fbe0
	goto loc_8285FBE0;
loc_8285FBD4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285fbe0
	goto loc_8285FBE0;
loc_8285FBDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285FBE0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3160
	ctx.r6.s64 = ctx.r11.s64 + 3160;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285FC04;
	sub_82828D60(ctx, base);
	// lwz r8,6444(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6444);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r8,5848(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5848, ctx.r8.u32);
	// stw r7,3208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3208, ctx.r7.u32);
	// beq cr6,0x8285fc44
	if (ctx.cr6.eq) goto loc_8285FC44;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285fc3c
	if (ctx.cr6.eq) goto loc_8285FC3C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285fc34
	if (ctx.cr6.eq) goto loc_8285FC34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285fc48
	goto loc_8285FC48;
loc_8285FC34:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8285fc48
	goto loc_8285FC48;
loc_8285FC3C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8285fc48
	goto loc_8285FC48;
loc_8285FC44:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8285FC48:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3184
	ctx.r6.s64 = ctx.r11.s64 + 3184;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,6444(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6444);
	// bl 0x82828d60
	ctx.lr = 0x8285FC6C;
	sub_82828D60(ctx, base);
	// lwz r7,6444(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6444);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r8,3200
	ctx.r29.s64 = ctx.r8.s64 + 3200;
	// stw r7,5852(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5852, ctx.r7.u32);
	// stw r6,3212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3212, ctx.r6.u32);
	// bl 0x8212c000
	ctx.lr = 0x8285FC8C;
	sub_8212C000(ctx, base);
	// li r4,84
	ctx.r4.s64 = 84;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FC9C;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,3220
	ctx.r30.s64 = ctx.r5.s64 + 3220;
	// bl 0x8212c000
	ctx.lr = 0x8285FCAC;
	sub_8212C000(ctx, base);
	// li r4,143
	ctx.r4.s64 = 143;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FCBC;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3244
	ctx.r30.s64 = ctx.r4.s64 + 3244;
	// bl 0x8212c000
	ctx.lr = 0x8285FCCC;
	sub_8212C000(ctx, base);
	// li r4,144
	ctx.r4.s64 = 144;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FCDC;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3268
	ctx.r30.s64 = ctx.r11.s64 + 3268;
	// bl 0x8212c000
	ctx.lr = 0x8285FCEC;
	sub_8212C000(ctx, base);
	// li r4,145
	ctx.r4.s64 = 145;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FCFC;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,3284
	ctx.r30.s64 = ctx.r10.s64 + 3284;
	// bl 0x8212c000
	ctx.lr = 0x8285FD0C;
	sub_8212C000(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FD1C;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,3300
	ctx.r30.s64 = ctx.r9.s64 + 3300;
	// bl 0x8212c000
	ctx.lr = 0x8285FD2C;
	sub_8212C000(ctx, base);
	// li r4,93
	ctx.r4.s64 = 93;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FD3C;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,3320
	ctx.r30.s64 = ctx.r8.s64 + 3320;
	// bl 0x8212c000
	ctx.lr = 0x8285FD4C;
	sub_8212C000(ctx, base);
	// li r4,94
	ctx.r4.s64 = 94;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FD5C;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,3340
	ctx.r30.s64 = ctx.r7.s64 + 3340;
	// bl 0x8212c000
	ctx.lr = 0x8285FD6C;
	sub_8212C000(ctx, base);
	// li r4,118
	ctx.r4.s64 = 118;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FD7C;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,3352
	ctx.r30.s64 = ctx.r6.s64 + 3352;
	// bl 0x8212c000
	ctx.lr = 0x8285FD8C;
	sub_8212C000(ctx, base);
	// li r4,95
	ctx.r4.s64 = 95;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FD9C;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,3364
	ctx.r30.s64 = ctx.r5.s64 + 3364;
	// bl 0x8212c000
	ctx.lr = 0x8285FDAC;
	sub_8212C000(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FDBC;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3376
	ctx.r30.s64 = ctx.r4.s64 + 3376;
	// bl 0x8212c000
	ctx.lr = 0x8285FDCC;
	sub_8212C000(ctx, base);
	// li r4,120
	ctx.r4.s64 = 120;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FDDC;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3392
	ctx.r30.s64 = ctx.r11.s64 + 3392;
	// bl 0x8212c000
	ctx.lr = 0x8285FDEC;
	sub_8212C000(ctx, base);
	// li r4,104
	ctx.r4.s64 = 104;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FDFC;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,3404
	ctx.r30.s64 = ctx.r10.s64 + 3404;
	// bl 0x8212c000
	ctx.lr = 0x8285FE0C;
	sub_8212C000(ctx, base);
	// li r4,105
	ctx.r4.s64 = 105;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FE1C;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,3416
	ctx.r30.s64 = ctx.r9.s64 + 3416;
	// bl 0x8212c000
	ctx.lr = 0x8285FE2C;
	sub_8212C000(ctx, base);
	// li r4,106
	ctx.r4.s64 = 106;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FE3C;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,3428
	ctx.r30.s64 = ctx.r8.s64 + 3428;
	// bl 0x8212c000
	ctx.lr = 0x8285FE4C;
	sub_8212C000(ctx, base);
	// li r4,107
	ctx.r4.s64 = 107;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FE5C;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,3440
	ctx.r30.s64 = ctx.r7.s64 + 3440;
	// bl 0x8212c000
	ctx.lr = 0x8285FE6C;
	sub_8212C000(ctx, base);
	// li r4,108
	ctx.r4.s64 = 108;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FE7C;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,3448
	ctx.r30.s64 = ctx.r6.s64 + 3448;
	// bl 0x8212c000
	ctx.lr = 0x8285FE8C;
	sub_8212C000(ctx, base);
	// li r4,109
	ctx.r4.s64 = 109;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FE9C;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,3456
	ctx.r30.s64 = ctx.r5.s64 + 3456;
	// bl 0x8212c000
	ctx.lr = 0x8285FEAC;
	sub_8212C000(ctx, base);
	// li r4,121
	ctx.r4.s64 = 121;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FEBC;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3480
	ctx.r30.s64 = ctx.r4.s64 + 3480;
	// bl 0x8212c000
	ctx.lr = 0x8285FECC;
	sub_8212C000(ctx, base);
	// li r4,135
	ctx.r4.s64 = 135;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FEDC;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3492
	ctx.r30.s64 = ctx.r11.s64 + 3492;
	// bl 0x8212c000
	ctx.lr = 0x8285FEEC;
	sub_8212C000(ctx, base);
	// li r4,136
	ctx.r4.s64 = 136;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FEFC;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,3508
	ctx.r30.s64 = ctx.r10.s64 + 3508;
	// bl 0x8212c000
	ctx.lr = 0x8285FF0C;
	sub_8212C000(ctx, base);
	// li r4,139
	ctx.r4.s64 = 139;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FF1C;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,3520
	ctx.r30.s64 = ctx.r9.s64 + 3520;
	// bl 0x8212c000
	ctx.lr = 0x8285FF2C;
	sub_8212C000(ctx, base);
	// li r4,140
	ctx.r4.s64 = 140;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FF3C;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,3532
	ctx.r30.s64 = ctx.r8.s64 + 3532;
	// bl 0x8212c000
	ctx.lr = 0x8285FF4C;
	sub_8212C000(ctx, base);
	// li r4,141
	ctx.r4.s64 = 141;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FF5C;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,3544
	ctx.r30.s64 = ctx.r7.s64 + 3544;
	// bl 0x8212c000
	ctx.lr = 0x8285FF6C;
	sub_8212C000(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FF7C;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,3560
	ctx.r30.s64 = ctx.r6.s64 + 3560;
	// bl 0x8212c000
	ctx.lr = 0x8285FF8C;
	sub_8212C000(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FF9C;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,3580
	ctx.r30.s64 = ctx.r5.s64 + 3580;
	// bl 0x8212c000
	ctx.lr = 0x8285FFAC;
	sub_8212C000(ctx, base);
	// li r4,117
	ctx.r4.s64 = 117;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FFBC;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3600
	ctx.r30.s64 = ctx.r4.s64 + 3600;
	// bl 0x8212c000
	ctx.lr = 0x8285FFCC;
	sub_8212C000(ctx, base);
	// li r4,125
	ctx.r4.s64 = 125;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FFDC;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3624
	ctx.r30.s64 = ctx.r11.s64 + 3624;
	// bl 0x8212c000
	ctx.lr = 0x8285FFEC;
	sub_8212C000(ctx, base);
	// li r4,66
	ctx.r4.s64 = 66;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8285FFFC;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,3640
	ctx.r30.s64 = ctx.r10.s64 + 3640;
	// bl 0x8212c000
	ctx.lr = 0x8286000C;
	sub_8212C000(ctx, base);
	// li r4,67
	ctx.r4.s64 = 67;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286001C;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,3656
	ctx.r30.s64 = ctx.r9.s64 + 3656;
	// bl 0x8212c000
	ctx.lr = 0x8286002C;
	sub_8212C000(ctx, base);
	// li r4,77
	ctx.r4.s64 = 77;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286003C;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,3672
	ctx.r30.s64 = ctx.r8.s64 + 3672;
	// bl 0x8212c000
	ctx.lr = 0x8286004C;
	sub_8212C000(ctx, base);
	// li r4,69
	ctx.r4.s64 = 69;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286005C;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,3688
	ctx.r30.s64 = ctx.r7.s64 + 3688;
	// bl 0x8212c000
	ctx.lr = 0x8286006C;
	sub_8212C000(ctx, base);
	// li r4,68
	ctx.r4.s64 = 68;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286007C;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,3700
	ctx.r30.s64 = ctx.r6.s64 + 3700;
	// bl 0x8212c000
	ctx.lr = 0x8286008C;
	sub_8212C000(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286009C;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,3720
	ctx.r30.s64 = ctx.r5.s64 + 3720;
	// bl 0x8212c000
	ctx.lr = 0x828600AC;
	sub_8212C000(ctx, base);
	// li r4,127
	ctx.r4.s64 = 127;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828600BC;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3740
	ctx.r30.s64 = ctx.r4.s64 + 3740;
	// bl 0x8212c000
	ctx.lr = 0x828600CC;
	sub_8212C000(ctx, base);
	// li r4,90
	ctx.r4.s64 = 90;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828600DC;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3756
	ctx.r30.s64 = ctx.r11.s64 + 3756;
	// bl 0x8212c000
	ctx.lr = 0x828600EC;
	sub_8212C000(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828600FC;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,3772
	ctx.r30.s64 = ctx.r10.s64 + 3772;
	// bl 0x8212c000
	ctx.lr = 0x8286010C;
	sub_8212C000(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286011C;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,3800
	ctx.r30.s64 = ctx.r9.s64 + 3800;
	// bl 0x8212c000
	ctx.lr = 0x8286012C;
	sub_8212C000(ctx, base);
	// li r4,110
	ctx.r4.s64 = 110;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286013C;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,3828
	ctx.r30.s64 = ctx.r8.s64 + 3828;
	// bl 0x8212c000
	ctx.lr = 0x8286014C;
	sub_8212C000(ctx, base);
	// li r4,111
	ctx.r4.s64 = 111;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286015C;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,3852
	ctx.r30.s64 = ctx.r7.s64 + 3852;
	// bl 0x8212c000
	ctx.lr = 0x8286016C;
	sub_8212C000(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286017C;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,3868
	ctx.r30.s64 = ctx.r6.s64 + 3868;
	// bl 0x8212c000
	ctx.lr = 0x8286018C;
	sub_8212C000(ctx, base);
	// li r4,129
	ctx.r4.s64 = 129;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286019C;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,3884
	ctx.r30.s64 = ctx.r5.s64 + 3884;
	// bl 0x8212c000
	ctx.lr = 0x828601AC;
	sub_8212C000(ctx, base);
	// li r4,130
	ctx.r4.s64 = 130;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828601BC;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,3896
	ctx.r30.s64 = ctx.r4.s64 + 3896;
	// bl 0x8212c000
	ctx.lr = 0x828601CC;
	sub_8212C000(ctx, base);
	// li r4,124
	ctx.r4.s64 = 124;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828601DC;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3916
	ctx.r30.s64 = ctx.r11.s64 + 3916;
	// bl 0x8212c000
	ctx.lr = 0x828601EC;
	sub_8212C000(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828601FC;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,3936
	ctx.r30.s64 = ctx.r10.s64 + 3936;
	// bl 0x8212c000
	ctx.lr = 0x8286020C;
	sub_8212C000(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286021C;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,3948
	ctx.r30.s64 = ctx.r9.s64 + 3948;
	// bl 0x8212c000
	ctx.lr = 0x8286022C;
	sub_8212C000(ctx, base);
	// li r4,98
	ctx.r4.s64 = 98;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286023C;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,3964
	ctx.r30.s64 = ctx.r8.s64 + 3964;
	// bl 0x8212c000
	ctx.lr = 0x8286024C;
	sub_8212C000(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286025C;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,3980
	ctx.r30.s64 = ctx.r7.s64 + 3980;
	// bl 0x8212c000
	ctx.lr = 0x8286026C;
	sub_8212C000(ctx, base);
	// li r4,99
	ctx.r4.s64 = 99;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286027C;
	sub_828597D8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,3992
	ctx.r30.s64 = ctx.r6.s64 + 3992;
	// bl 0x8212c000
	ctx.lr = 0x8286028C;
	sub_8212C000(ctx, base);
	// li r4,131
	ctx.r4.s64 = 131;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286029C;
	sub_828597D8(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,4012
	ctx.r30.s64 = ctx.r5.s64 + 4012;
	// bl 0x8212c000
	ctx.lr = 0x828602AC;
	sub_8212C000(ctx, base);
	// li r4,132
	ctx.r4.s64 = 132;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828602BC;
	sub_828597D8(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r4,4036
	ctx.r30.s64 = ctx.r4.s64 + 4036;
	// bl 0x8212c000
	ctx.lr = 0x828602CC;
	sub_8212C000(ctx, base);
	// li r4,133
	ctx.r4.s64 = 133;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828602DC;
	sub_828597D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,4044
	ctx.r30.s64 = ctx.r11.s64 + 4044;
	// bl 0x8212c000
	ctx.lr = 0x828602EC;
	sub_8212C000(ctx, base);
	// li r4,134
	ctx.r4.s64 = 134;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x828602FC;
	sub_828597D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,4064
	ctx.r30.s64 = ctx.r10.s64 + 4064;
	// bl 0x8212c000
	ctx.lr = 0x8286030C;
	sub_8212C000(ctx, base);
	// li r4,101
	ctx.r4.s64 = 101;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286031C;
	sub_828597D8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,4076
	ctx.r30.s64 = ctx.r9.s64 + 4076;
	// bl 0x8212c000
	ctx.lr = 0x8286032C;
	sub_8212C000(ctx, base);
	// li r4,102
	ctx.r4.s64 = 102;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286033C;
	sub_828597D8(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r8,4088
	ctx.r30.s64 = ctx.r8.s64 + 4088;
	// bl 0x8212c000
	ctx.lr = 0x8286034C;
	sub_8212C000(ctx, base);
	// li r4,103
	ctx.r4.s64 = 103;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286035C;
	sub_828597D8(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r7,4100
	ctx.r31.s64 = ctx.r7.s64 + 4100;
	// bl 0x8212c000
	ctx.lr = 0x8286036C;
	sub_8212C000(ctx, base);
	// li r4,115
	ctx.r4.s64 = 115;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x828597d8
	ctx.lr = 0x8286037C;
	sub_828597D8(ctx, base);
	// stw r27,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82860388"))) PPC_WEAK_FUNC(sub_82860388);
PPC_FUNC_IMPL(__imp__sub_82860388) {
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
	// beq cr6,0x828603c8
	if (ctx.cr6.eq) goto loc_828603C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828603b8
	if (ctx.cr6.eq) goto loc_828603B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828603d0
	if (!ctx.cr6.eq) goto loc_828603D0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828603d0
	goto loc_828603D0;
loc_828603B8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828603d0
	goto loc_828603D0;
loc_828603C8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828603D0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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

__attribute__((alias("__imp__sub_828603E8"))) PPC_WEAK_FUNC(sub_828603E8);
PPC_FUNC_IMPL(__imp__sub_828603E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
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
	// beq cr6,0x82860434
	if (ctx.cr6.eq) goto loc_82860434;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8286042c
	if (ctx.cr6.eq) goto loc_8286042C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82860424
	if (ctx.cr6.eq) goto loc_82860424;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82860438
	goto loc_82860438;
loc_82860424:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82860438
	goto loc_82860438;
loc_8286042C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82860438
	goto loc_82860438;
loc_82860434:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82860438:
	// lwz r11,12280(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860464
	if (ctx.cr6.eq) goto loc_82860464;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286045c
	if (ctx.cr6.eq) goto loc_8286045C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82860468
	if (!ctx.cr6.eq) goto loc_82860468;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82860468
	goto loc_82860468;
loc_8286045C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82860468
	goto loc_82860468;
loc_82860464:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82860468:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828604e8
	if (ctx.cr6.eq) goto loc_828604E8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828604a0
	if (ctx.cr6.eq) goto loc_828604A0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82860498
	if (ctx.cr6.eq) goto loc_82860498;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82860490
	if (ctx.cr6.eq) goto loc_82860490;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828604a4
	goto loc_828604A4;
loc_82860490:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828604a4
	goto loc_828604A4;
loc_82860498:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828604a4
	goto loc_828604A4;
loc_828604A0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828604A4:
	// lwz r11,12432(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12432);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828604d0
	if (ctx.cr6.eq) goto loc_828604D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828604c8
	if (ctx.cr6.eq) goto loc_828604C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828604d4
	if (!ctx.cr6.eq) goto loc_828604D4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828604d4
	goto loc_828604D4;
loc_828604C8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828604d4
	goto loc_828604D4;
loc_828604D0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828604D4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828604e8
	if (ctx.cr6.eq) goto loc_828604E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12464(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12464, ctx.r11.u32);
	// blr 
	return;
loc_828604E8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82860518
	if (ctx.cr6.eq) goto loc_82860518;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82860510
	if (ctx.cr6.eq) goto loc_82860510;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82860508
	if (ctx.cr6.eq) goto loc_82860508;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8286051c
	goto loc_8286051C;
loc_82860508:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286051c
	goto loc_8286051C;
loc_82860510:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8286051c
	goto loc_8286051C;
loc_82860518:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286051C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82860568
	if (!ctx.cr6.gt) goto loc_82860568;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,12748(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12748, ctx.r11.u32);
	// stw r11,12464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12464, ctx.r11.u32);
	// blr 
	return;
loc_82860568:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,12328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12328, ctx.r11.u32);
	// stw r11,12464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82860584"))) PPC_WEAK_FUNC(sub_82860584);
PPC_FUNC_IMPL(__imp__sub_82860584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82860588"))) PPC_WEAK_FUNC(sub_82860588);
PPC_FUNC_IMPL(__imp__sub_82860588) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828605c4
	if (ctx.cr6.eq) goto loc_828605C4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828605b4
	if (ctx.cr6.eq) goto loc_828605B4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828605cc
	if (!ctx.cr6.eq) goto loc_828605CC;
	// b 0x828605cc
	goto loc_828605CC;
loc_828605B4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828605cc
	goto loc_828605CC;
loc_828605C4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828605CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r9,1832
	ctx.r6.s64 = ctx.r9.s64 + 1832;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,6432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6432);
	// bl 0x82828d60
	ctx.lr = 0x828605F4;
	sub_82828D60(ctx, base);
	// lwz r7,6432(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6432);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,5720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5720, ctx.r7.u32);
	// stw r6,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82860618"))) PPC_WEAK_FUNC(sub_82860618);
PPC_FUNC_IMPL(__imp__sub_82860618) {
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
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82834e10
	ctx.lr = 0x82860638;
	sub_82834E10(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82834e10
	ctx.lr = 0x82860644;
	sub_82834E10(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82834e10
	ctx.lr = 0x82860650;
	sub_82834E10(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82834e10
	ctx.lr = 0x8286065C;
	sub_82834E10(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82834e10
	ctx.lr = 0x82860668;
	sub_82834E10(ctx, base);
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

__attribute__((alias("__imp__sub_8286067C"))) PPC_WEAK_FUNC(sub_8286067C);
PPC_FUNC_IMPL(__imp__sub_8286067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82860680"))) PPC_WEAK_FUNC(sub_82860680);
PPC_FUNC_IMPL(__imp__sub_82860680) {
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
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828606d4
	if (ctx.cr6.eq) goto loc_828606D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828606c4
	if (ctx.cr6.eq) goto loc_828606C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828606dc
	if (!ctx.cr6.eq) goto loc_828606DC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828606dc
	goto loc_828606DC;
loc_828606C4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828606dc
	goto loc_828606DC;
loc_828606D4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828606DC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82808938
	ctx.lr = 0x828606E8;
	sub_82808938(ctx, base);
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
}

__attribute__((alias("__imp__sub_82860700"))) PPC_WEAK_FUNC(sub_82860700);
PPC_FUNC_IMPL(__imp__sub_82860700) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,800
	ctx.r5.s64 = ctx.r11.s64 + 800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828351e0
	ctx.lr = 0x82860724;
	sub_828351E0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,820
	ctx.r5.s64 = ctx.r10.s64 + 820;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x828351e0
	ctx.lr = 0x82860738;
	sub_828351E0(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,844
	ctx.r5.s64 = ctx.r9.s64 + 844;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828351e0
	ctx.lr = 0x8286074C;
	sub_828351E0(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,860
	ctx.r5.s64 = ctx.r8.s64 + 860;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828351e0
	ctx.lr = 0x82860760;
	sub_828351E0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r7,884
	ctx.r5.s64 = ctx.r7.s64 + 884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828351e0
	ctx.lr = 0x82860774;
	sub_828351E0(ctx, base);
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

__attribute__((alias("__imp__sub_82860788"))) PPC_WEAK_FUNC(sub_82860788);
PPC_FUNC_IMPL(__imp__sub_82860788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82860790;
	__savegprlr_23(ctx, base);
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
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
	// lwz r9,3696(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3696);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82860860
	if (ctx.cr6.eq) goto loc_82860860;
	// lwz r11,8252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82860844
	if (ctx.cr6.eq) goto loc_82860844;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860820
	if (ctx.cr6.eq) goto loc_82860820;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860810
	if (ctx.cr6.eq) goto loc_82860810;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82860828
	if (ctx.cr6.eq) goto loc_82860828;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82860828
	goto loc_82860828;
loc_82860810:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82860828
	goto loc_82860828;
loc_82860820:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82860828:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,768(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 768);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82860864
	goto loc_82860864;
loc_82860844:
	// lwz r3,4276(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4276);
	// bl 0x82bfc538
	ctx.lr = 0x8286084C;
	sub_82BFC538(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82860864
	if (ctx.cr6.gt) goto loc_82860864;
loc_82860860:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82860864:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82860880"))) PPC_WEAK_FUNC(sub_82860880);
PPC_FUNC_IMPL(__imp__sub_82860880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82860888;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13184(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r31.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82860900
	if (ctx.cr6.eq) goto loc_82860900;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828608f0
	if (ctx.cr6.eq) goto loc_828608F0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82860908
	if (!ctx.cr6.eq) goto loc_82860908;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82860908
	goto loc_82860908;
loc_828608F0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82860908
	goto loc_82860908;
loc_82860900:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82860908:
	// ld r4,4120(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82860948
	if (ctx.cr6.eq) goto loc_82860948;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82860948
	if (ctx.cr6.eq) goto loc_82860948;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82860948
	if (ctx.cr6.eq) goto loc_82860948;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82860948
	if (ctx.cr6.eq) goto loc_82860948;
	// bl 0x8279e170
	ctx.lr = 0x82860948;
	sub_8279E170(ctx, base);
loc_82860948:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r25.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// std r10,4120(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4120, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82860974"))) PPC_WEAK_FUNC(sub_82860974);
PPC_FUNC_IMPL(__imp__sub_82860974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82860978"))) PPC_WEAK_FUNC(sub_82860978);
PPC_FUNC_IMPL(__imp__sub_82860978) {
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
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f0,29744(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lfs f0,8220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// bl 0x82835790
	ctx.lr = 0x828609B0;
	sub_82835790(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828609C8"))) PPC_WEAK_FUNC(sub_828609C8);
PPC_FUNC_IMPL(__imp__sub_828609C8) {
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
	// beq cr6,0x82860a3c
	if (ctx.cr6.eq) goto loc_82860A3C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82860a48
	if (!ctx.cr6.eq) goto loc_82860A48;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860a1c
	if (ctx.cr6.eq) goto loc_82860A1C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860a0c
	if (ctx.cr6.eq) goto loc_82860A0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82860a24
	if (!ctx.cr6.eq) goto loc_82860A24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82860a24
	goto loc_82860A24;
loc_82860A0C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82860a24
	goto loc_82860A24;
loc_82860A1C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82860A24:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1424(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1424);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82860A3C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82860A48:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82860A50"))) PPC_WEAK_FUNC(sub_82860A50);
PPC_FUNC_IMPL(__imp__sub_82860A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82860A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// li r28,0
	ctx.r28.s64 = 0;
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
	// beq cr6,0x82860ab8
	if (ctx.cr6.eq) goto loc_82860AB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860ab0
	if (ctx.cr6.eq) goto loc_82860AB0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82860aa8
	if (ctx.cr6.eq) goto loc_82860AA8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82860abc
	goto loc_82860ABC;
loc_82860AA8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82860abc
	goto loc_82860ABC;
loc_82860AB0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82860abc
	goto loc_82860ABC;
loc_82860AB8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82860ABC:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r6,10276(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10276);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82860b70
	if (ctx.cr6.eq) goto loc_82860B70;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860b04
	if (ctx.cr6.eq) goto loc_82860B04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860afc
	if (ctx.cr6.eq) goto loc_82860AFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82860af4
	if (ctx.cr6.eq) goto loc_82860AF4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82860b08
	goto loc_82860B08;
loc_82860AF4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82860b08
	goto loc_82860B08;
loc_82860AFC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82860b08
	goto loc_82860B08;
loc_82860B04:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82860B08:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r4,12720(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12720);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82860b6c
	if (ctx.cr6.eq) goto loc_82860B6C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860b48
	if (ctx.cr6.eq) goto loc_82860B48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860b40
	if (ctx.cr6.eq) goto loc_82860B40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82860b4c
	if (!ctx.cr6.eq) goto loc_82860B4C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82860b4c
	goto loc_82860B4C;
loc_82860B40:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82860b4c
	goto loc_82860B4C;
loc_82860B48:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82860B4C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12720(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12720);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82860b70
	if (!ctx.cr6.eq) goto loc_82860B70;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82860b70
	goto loc_82860B70;
loc_82860B6C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82860B70:
	// li r4,59
	ctx.r4.s64 = 59;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860B80;
	sub_82835DB0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,61
	ctx.r4.s64 = 61;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860B94;
	sub_82835DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860BA8;
	sub_82835DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82860BB0"))) PPC_WEAK_FUNC(sub_82860BB0);
PPC_FUNC_IMPL(__imp__sub_82860BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82860BB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,8240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860c28
	if (ctx.cr6.eq) goto loc_82860C28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860c20
	if (ctx.cr6.eq) goto loc_82860C20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82860c18
	if (ctx.cr6.eq) goto loc_82860C18;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82860c2c
	goto loc_82860C2C;
loc_82860C18:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82860c2c
	goto loc_82860C2C;
loc_82860C20:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82860c2c
	goto loc_82860C2C;
loc_82860C28:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82860C2C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,20944(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20944);
	// beq cr6,0x82860c64
	if (ctx.cr6.eq) goto loc_82860C64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860c5c
	if (ctx.cr6.eq) goto loc_82860C5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82860c68
	if (!ctx.cr6.eq) goto loc_82860C68;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82860c68
	goto loc_82860C68;
loc_82860C5C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82860c68
	goto loc_82860C68;
loc_82860C64:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82860C68:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,10272(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10272);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82860cc8
	if (ctx.cr6.eq) goto loc_82860CC8;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82860cc4
	if (ctx.cr6.eq) goto loc_82860CC4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82860cbc
	if (ctx.cr6.eq) goto loc_82860CBC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82860cb0
	if (ctx.cr6.eq) goto loc_82860CB0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82860cc8
	if (!ctx.cr6.eq) goto loc_82860CC8;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82860cc8
	goto loc_82860CC8;
loc_82860CB0:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82860cc8
	goto loc_82860CC8;
loc_82860CBC:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82860cc8
	goto loc_82860CC8;
loc_82860CC4:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82860CC8:
	// li r4,77
	ctx.r4.s64 = 77;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860CD8;
	sub_82835DB0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860CEC;
	sub_82835DB0(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860D00;
	sub_82835DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860D14;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860D28;
	sub_82835DB0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,81
	ctx.r4.s64 = 81;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860D3C;
	sub_82835DB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82860D44"))) PPC_WEAK_FUNC(sub_82860D44);
PPC_FUNC_IMPL(__imp__sub_82860D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82860D48"))) PPC_WEAK_FUNC(sub_82860D48);
PPC_FUNC_IMPL(__imp__sub_82860D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82860D50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,8236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8236);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860db4
	if (ctx.cr6.eq) goto loc_82860DB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860dac
	if (ctx.cr6.eq) goto loc_82860DAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82860da4
	if (ctx.cr6.eq) goto loc_82860DA4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82860db8
	goto loc_82860DB8;
loc_82860DA4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82860db8
	goto loc_82860DB8;
loc_82860DAC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82860db8
	goto loc_82860DB8;
loc_82860DB4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82860DB8:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f13,1100(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82860df8
	if (ctx.cr6.eq) goto loc_82860DF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860df0
	if (ctx.cr6.eq) goto loc_82860DF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82860de8
	if (ctx.cr6.eq) goto loc_82860DE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82860dfc
	goto loc_82860DFC;
loc_82860DE8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82860dfc
	goto loc_82860DFC;
loc_82860DF0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82860dfc
	goto loc_82860DFC;
loc_82860DF8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82860DFC:
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r4,r7,-3988
	ctx.r4.s64 = ctx.r7.s64 + -3988;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f11,-3988(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3988);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,1404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1404);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82860e44
	if (ctx.cr6.lt) goto loc_82860E44;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82860e3c
	if (ctx.cr6.lt) goto loc_82860E3C;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82860e48
	goto loc_82860E48;
loc_82860E3C:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82860e48
	goto loc_82860E48;
loc_82860E44:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82860E48:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82860e84
	if (ctx.cr6.eq) goto loc_82860E84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860e7c
	if (ctx.cr6.eq) goto loc_82860E7C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82860e74
	if (ctx.cr6.eq) goto loc_82860E74;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82860e88
	goto loc_82860E88;
loc_82860E74:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82860e88
	goto loc_82860E88;
loc_82860E7C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82860e88
	goto loc_82860E88;
loc_82860E84:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82860E88:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f13,1104(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1104);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82860ec0
	if (ctx.cr6.eq) goto loc_82860EC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82860eb8
	if (ctx.cr6.eq) goto loc_82860EB8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82860ec4
	if (!ctx.cr6.eq) goto loc_82860EC4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82860ec4
	goto loc_82860EC4;
loc_82860EB8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82860ec4
	goto loc_82860EC4;
loc_82860EC0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82860EC4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fmuls f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82860efc
	if (ctx.cr6.lt) goto loc_82860EFC;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82860ef4
	if (ctx.cr6.lt) goto loc_82860EF4;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82860f00
	goto loc_82860F00;
loc_82860EF4:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82860f00
	goto loc_82860F00;
loc_82860EFC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82860F00:
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860F10;
	sub_82835DB0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860F24;
	sub_82835DB0(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860F38;
	sub_82835DB0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860F4C;
	sub_82835DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860F60;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,9148(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82835db0
	ctx.lr = 0x82860F74;
	sub_82835DB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82860F7C"))) PPC_WEAK_FUNC(sub_82860F7C);
PPC_FUNC_IMPL(__imp__sub_82860F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82860F80"))) PPC_WEAK_FUNC(sub_82860F80);
PPC_FUNC_IMPL(__imp__sub_82860F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82860F88;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r10,8240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82860ff8
	if (ctx.cr6.eq) goto loc_82860FF8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82860ff0
	if (ctx.cr6.eq) goto loc_82860FF0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82860fe8
	if (ctx.cr6.eq) goto loc_82860FE8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82860ffc
	goto loc_82860FFC;
loc_82860FE8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82860ffc
	goto loc_82860FFC;
loc_82860FF0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82860ffc
	goto loc_82860FFC;
loc_82860FF8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82860FFC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,10832(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10832);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82861070
	if (!ctx.cr6.eq) goto loc_82861070;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82861044
	if (ctx.cr6.eq) goto loc_82861044;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286103c
	if (ctx.cr6.eq) goto loc_8286103C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82861034
	if (ctx.cr6.eq) goto loc_82861034;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82861048
	goto loc_82861048;
loc_82861034:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82861048
	goto loc_82861048;
loc_8286103C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82861048
	goto loc_82861048;
loc_82861044:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82861048:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r9,29
	ctx.r6.s64 = ctx.r9.s64 + 29;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82861074
	if (ctx.cr6.eq) goto loc_82861074;
loc_82861070:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82861074:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828610a4
	if (ctx.cr6.eq) goto loc_828610A4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286109c
	if (ctx.cr6.eq) goto loc_8286109C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82861094
	if (ctx.cr6.eq) goto loc_82861094;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828610a8
	goto loc_828610A8;
loc_82861094:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828610a8
	goto loc_828610A8;
loc_8286109C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828610a8
	goto loc_828610A8;
loc_828610A4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828610A8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,11876(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11876);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8286110c
	if (ctx.cr6.eq) goto loc_8286110C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828610f0
	if (ctx.cr6.eq) goto loc_828610F0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828610e8
	if (ctx.cr6.eq) goto loc_828610E8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828610e0
	if (ctx.cr6.eq) goto loc_828610E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828610f4
	goto loc_828610F4;
loc_828610E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828610f4
	goto loc_828610F4;
loc_828610E8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828610f4
	goto loc_828610F4;
loc_828610F0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828610F4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,10312(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10312);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x828611ac
	if (!ctx.cr6.eq) goto loc_828611AC;
loc_8286110C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286113c
	if (ctx.cr6.eq) goto loc_8286113C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82861134
	if (ctx.cr6.eq) goto loc_82861134;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8286112c
	if (ctx.cr6.eq) goto loc_8286112C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82861140
	goto loc_82861140;
loc_8286112C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82861140
	goto loc_82861140;
loc_82861134:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82861140
	goto loc_82861140;
loc_8286113C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82861140:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,10344(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10344);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x828611a8
	if (ctx.cr6.eq) goto loc_828611A8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82861180
	if (ctx.cr6.eq) goto loc_82861180;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82861178
	if (ctx.cr6.eq) goto loc_82861178;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82861184
	if (!ctx.cr6.eq) goto loc_82861184;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82861184
	goto loc_82861184;
loc_82861178:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82861184
	goto loc_82861184;
loc_82861180:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82861184:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82859a40
	ctx.lr = 0x82861194;
	sub_82859A40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828611ac
	if (!ctx.cr6.eq) goto loc_828611AC;
loc_828611A8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_828611AC:
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828611e0
	if (ctx.cr6.eq) goto loc_828611E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828611d8
	if (ctx.cr6.eq) goto loc_828611D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828611d0
	if (ctx.cr6.eq) goto loc_828611D0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828611e4
	goto loc_828611E4;
loc_828611D0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x828611e4
	goto loc_828611E4;
loc_828611D8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828611e4
	goto loc_828611E4;
loc_828611E0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828611E4:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,14424(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14424);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82861294
	if (ctx.cr6.eq) goto loc_82861294;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82861230
	if (ctx.cr6.eq) goto loc_82861230;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82861228
	if (ctx.cr6.eq) goto loc_82861228;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82861220
	if (ctx.cr6.eq) goto loc_82861220;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82861234
	goto loc_82861234;
loc_82861220:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82861234
	goto loc_82861234;
loc_82861228:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82861234
	goto loc_82861234;
loc_82861230:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82861234:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,11884(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11884);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82861294
	if (ctx.cr6.eq) goto loc_82861294;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82861274
	if (ctx.cr6.eq) goto loc_82861274;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286126c
	if (ctx.cr6.eq) goto loc_8286126C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82861278
	if (!ctx.cr6.eq) goto loc_82861278;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82861278
	goto loc_82861278;
loc_8286126C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82861278
	goto loc_82861278;
loc_82861274:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82861278:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,10312(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10312);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82861294
	if (ctx.cr6.eq) goto loc_82861294;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82861294:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,9148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9148);
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828612A8;
	sub_82835DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,9148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828612BC;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r5,9148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828612D0;
	sub_82835DB0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r5,9148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828612E4;
	sub_82835DB0(ctx, base);
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286131c
	if (ctx.cr6.eq) goto loc_8286131C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82861314
	if (ctx.cr6.eq) goto loc_82861314;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82861320
	if (!ctx.cr6.eq) goto loc_82861320;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82861320
	goto loc_82861320;
loc_82861314:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82861320
	goto loc_82861320;
loc_8286131C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82861320:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,1040(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,2816(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2816);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8286134c
	if (ctx.cr6.eq) goto loc_8286134C;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8286134C:
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82861378
	if (ctx.cr6.eq) goto loc_82861378;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82861370
	if (ctx.cr6.eq) goto loc_82861370;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286137c
	if (!ctx.cr6.eq) goto loc_8286137C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286137c
	goto loc_8286137C;
loc_82861370:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8286137c
	goto loc_8286137C;
loc_82861378:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8286137C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,1044(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,2820(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2820);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x828613a0
	if (ctx.cr6.eq) goto loc_828613A0;
	// stw r11,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
loc_828613A0:
	// li r4,107
	ctx.r4.s64 = 107;
	// lwz r5,9148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828613B0;
	sub_82835DB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828613B8"))) PPC_WEAK_FUNC(sub_828613B8);
PPC_FUNC_IMPL(__imp__sub_828613B8) {
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
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,8240(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8240);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82861408
	if (ctx.cr6.eq) goto loc_82861408;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828613f8
	if (ctx.cr6.eq) goto loc_828613F8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82861410
	if (!ctx.cr6.eq) goto loc_82861410;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82861410
	goto loc_82861410;
loc_828613F8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82861410
	goto loc_82861410;
loc_82861408:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82861410:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// stw r6,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r6.u32);
	// lwz r31,980(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82861454
	if (ctx.cr6.eq) goto loc_82861454;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82861454:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r8.u32);
	// lwz r5,9148(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 9148);
	// bl 0x82835db0
	ctx.lr = 0x8286146C;
	sub_82835DB0(ctx, base);
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

__attribute__((alias("__imp__sub_82861480"))) PPC_WEAK_FUNC(sub_82861480);
PPC_FUNC_IMPL(__imp__sub_82861480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82861488;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r26,-29532(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,48(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r3,8236(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8236);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828614e8
	if (ctx.cr6.eq) goto loc_828614E8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828614e0
	if (ctx.cr6.eq) goto loc_828614E0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x828614d8
	if (ctx.cr6.eq) goto loc_828614D8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828614ec
	goto loc_828614EC;
loc_828614D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828614ec
	goto loc_828614EC;
loc_828614E0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x828614ec
	goto loc_828614EC;
loc_828614E8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_828614EC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1852(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1852);
	// beq cr6,0x8286152c
	if (ctx.cr6.eq) goto loc_8286152C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82861524
	if (ctx.cr6.eq) goto loc_82861524;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8286151c
	if (ctx.cr6.eq) goto loc_8286151C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82861530
	goto loc_82861530;
loc_8286151C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82861530
	goto loc_82861530;
loc_82861524:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82861530
	goto loc_82861530;
loc_8286152C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82861530:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r31,1268(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1268);
	// beq cr6,0x8286159c
	if (ctx.cr6.eq) goto loc_8286159C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286159c
	if (ctx.cr6.eq) goto loc_8286159C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82861588
	if (ctx.cr6.eq) goto loc_82861588;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82861580
	if (ctx.cr6.eq) goto loc_82861580;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82861578
	if (ctx.cr6.eq) goto loc_82861578;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8286158c
	goto loc_8286158C;
loc_82861578:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286158c
	goto loc_8286158C;
loc_82861580:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286158c
	goto loc_8286158C;
loc_82861588:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8286158C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828615a0
	if (ctx.cr6.eq) goto loc_828615A0;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x828615a0
	goto loc_828615A0;
loc_8286159C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_828615A0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828615c8
	if (ctx.cr6.eq) goto loc_828615C8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828615c0
	if (ctx.cr6.eq) goto loc_828615C0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828615cc
	if (!ctx.cr6.eq) goto loc_828615CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828615cc
	goto loc_828615CC;
loc_828615C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x828615cc
	goto loc_828615CC;
loc_828615C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_828615CC:
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283ed00
	ctx.lr = 0x828615D8;
	sub_8283ED00(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82861608
	if (ctx.cr6.eq) goto loc_82861608;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82861600
	if (ctx.cr6.eq) goto loc_82861600;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828615f8
	if (ctx.cr6.eq) goto loc_828615F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8286160c
	goto loc_8286160C;
loc_828615F8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8286160c
	goto loc_8286160C;
loc_82861600:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8286160c
	goto loc_8286160C;
loc_82861608:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8286160C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82861664
	if (ctx.cr6.eq) goto loc_82861664;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82861644
	if (ctx.cr6.eq) goto loc_82861644;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8286163c
	if (ctx.cr6.eq) goto loc_8286163C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82861634
	if (ctx.cr6.eq) goto loc_82861634;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82861648
	goto loc_82861648;
loc_82861634:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82861648
	goto loc_82861648;
loc_8286163C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82861648
	goto loc_82861648;
loc_82861644:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82861648:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpwi cr6,r8,44
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 44, ctx.xer);
	// bne cr6,0x82861664
	if (!ctx.cr6.eq) goto loc_82861664;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82861664:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,9148(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9148);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x82861678;
	sub_82835DB0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r5,9148(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x8286168C;
	sub_82835DB0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,9148(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9148);
	// bl 0x82835db0
	ctx.lr = 0x828616A0;
	sub_82835DB0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r5,9148(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82835db0
	ctx.lr = 0x828616B4;
	sub_82835DB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828616BC"))) PPC_WEAK_FUNC(sub_828616BC);
PPC_FUNC_IMPL(__imp__sub_828616BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828616C0"))) PPC_WEAK_FUNC(sub_828616C0);
PPC_FUNC_IMPL(__imp__sub_828616C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x828616C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r31.u32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// blt cr6,0x828617a4
	if (ctx.cr6.lt) goto loc_828617A4;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bge cr6,0x828617a4
	if (!ctx.cr6.lt) goto loc_828617A4;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82861754
	if (ctx.cr6.eq) goto loc_82861754;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82861744
	if (ctx.cr6.eq) goto loc_82861744;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8286173c
	if (ctx.cr6.eq) goto loc_8286173C;
	// b 0x8286175c
	goto loc_8286175C;
loc_8286173C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8286175c
	goto loc_8286175C;
loc_82861744:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8286175c
	goto loc_8286175C;
loc_82861754:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8286175C:
	// bl 0x82834248
	ctx.lr = 0x82861760;
	sub_82834248(ctx, base);
	// stw r26,9364(r25)
	PPC_STORE_U32(ctx.r25.u32 + 9364, ctx.r26.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82861798
	if (ctx.cr6.eq) goto loc_82861798;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82861790
	if (ctx.cr6.eq) goto loc_82861790;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82861788
	if (ctx.cr6.eq) goto loc_82861788;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x828617a0
	goto loc_828617A0;
loc_82861788:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x828617a0
	goto loc_828617A0;
loc_82861790:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8286179c
	goto loc_8286179C;
loc_82861798:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286179C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828617A0:
	// bl 0x82836b08
	ctx.lr = 0x828617A4;
	sub_82836B08(ctx, base);
loc_828617A4:
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828617BC"))) PPC_WEAK_FUNC(sub_828617BC);
PPC_FUNC_IMPL(__imp__sub_828617BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828617C0"))) PPC_WEAK_FUNC(sub_828617C0);
PPC_FUNC_IMPL(__imp__sub_828617C0) {
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
	// beq cr6,0x82861800
	if (ctx.cr6.eq) goto loc_82861800;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828617f0
	if (ctx.cr6.eq) goto loc_828617F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82861808
	if (!ctx.cr6.eq) goto loc_82861808;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82861808
	goto loc_82861808;
loc_828617F0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82861808
	goto loc_82861808;
loc_82861800:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82861808:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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

__attribute__((alias("__imp__sub_82861820"))) PPC_WEAK_FUNC(sub_82861820);
PPC_FUNC_IMPL(__imp__sub_82861820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82861828;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828618ac
	if (ctx.cr6.eq) goto loc_828618AC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828618a4
	if (ctx.cr6.eq) goto loc_828618A4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828618b0
	if (!ctx.cr6.eq) goto loc_828618B0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828618b0
	goto loc_828618B0;
loc_828618A4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828618b0
	goto loc_828618B0;
loc_828618AC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828618B0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828618dc
	if (ctx.cr6.eq) goto loc_828618DC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828618d8
	if (ctx.cr6.eq) goto loc_828618D8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828618d0
	if (ctx.cr6.eq) goto loc_828618D0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x828618dc
	goto loc_828618DC;
loc_828618D0:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x828618dc
	goto loc_828618DC;
loc_828618D8:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_828618DC:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82861918
	if (!ctx.cr6.eq) goto loc_82861918;
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82861918
	if (ctx.cr6.eq) goto loc_82861918;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x828618FC;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82861914
	if (ctx.cr6.eq) goto loc_82861914;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82861914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82861914:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82861918:
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82861934"))) PPC_WEAK_FUNC(sub_82861934);
PPC_FUNC_IMPL(__imp__sub_82861934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82861938"))) PPC_WEAK_FUNC(sub_82861938);
PPC_FUNC_IMPL(__imp__sub_82861938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82861940;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828619c4
	if (ctx.cr6.eq) goto loc_828619C4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828619bc
	if (ctx.cr6.eq) goto loc_828619BC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828619c8
	if (!ctx.cr6.eq) goto loc_828619C8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828619c8
	goto loc_828619C8;
loc_828619BC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828619c8
	goto loc_828619C8;
loc_828619C4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828619C8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828619f4
	if (ctx.cr6.eq) goto loc_828619F4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828619f0
	if (ctx.cr6.eq) goto loc_828619F0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828619e8
	if (ctx.cr6.eq) goto loc_828619E8;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x828619f4
	goto loc_828619F4;
loc_828619E8:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x828619f4
	goto loc_828619F4;
loc_828619F0:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_828619F4:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82861a30
	if (!ctx.cr6.eq) goto loc_82861A30;
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82861a30
	if (ctx.cr6.eq) goto loc_82861A30;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82861A14;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82861a2c
	if (ctx.cr6.eq) goto loc_82861A2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82861A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82861A2C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82861A30:
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82861A4C"))) PPC_WEAK_FUNC(sub_82861A4C);
PPC_FUNC_IMPL(__imp__sub_82861A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82861A50"))) PPC_WEAK_FUNC(sub_82861A50);
PPC_FUNC_IMPL(__imp__sub_82861A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82861A58;
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
	ctx.lr = 0x82861AB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82861AC0;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82861ACC;
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
	ctx.lr = 0x82861AE4;
	sub_828097A0(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82861b14
	if (ctx.cr6.eq) goto loc_82861B14;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82861b14
	if (!ctx.cr6.eq) goto loc_82861B14;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r20,176
	ctx.r5.s64 = ctx.r20.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82809be0
	ctx.lr = 0x82861B14;
	sub_82809BE0(ctx, base);
loc_82861B14:
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

__attribute__((alias("__imp__sub_82861B2C"))) PPC_WEAK_FUNC(sub_82861B2C);
PPC_FUNC_IMPL(__imp__sub_82861B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82861B30"))) PPC_WEAK_FUNC(sub_82861B30);
PPC_FUNC_IMPL(__imp__sub_82861B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82861B38;
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
	// lwz r4,104(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x82becee0
	ctx.lr = 0x82861B8C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82861ba4
	if (ctx.cr6.eq) goto loc_82861BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82861BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82861BA4:
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

__attribute__((alias("__imp__sub_82861BBC"))) PPC_WEAK_FUNC(sub_82861BBC);
PPC_FUNC_IMPL(__imp__sub_82861BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82861BC0"))) PPC_WEAK_FUNC(sub_82861BC0);
PPC_FUNC_IMPL(__imp__sub_82861BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82861BC8;
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
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
	// lwz r3,13416(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13416);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,104(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x82becee0
	ctx.lr = 0x82861C20;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82861c30
	if (!ctx.cr6.eq) goto loc_82861C30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82861c38
	goto loc_82861C38;
loc_82861C30:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
loc_82861C38:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82861C54"))) PPC_WEAK_FUNC(sub_82861C54);
PPC_FUNC_IMPL(__imp__sub_82861C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82861C58"))) PPC_WEAK_FUNC(sub_82861C58);
PPC_FUNC_IMPL(__imp__sub_82861C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82861C60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82861ce4
	if (ctx.cr6.eq) goto loc_82861CE4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82861cdc
	if (ctx.cr6.eq) goto loc_82861CDC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82861ce8
	if (!ctx.cr6.eq) goto loc_82861CE8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82861ce8
	goto loc_82861CE8;
loc_82861CDC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82861ce8
	goto loc_82861CE8;
loc_82861CE4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82861CE8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82861d14
	if (ctx.cr6.eq) goto loc_82861D14;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82861d10
	if (ctx.cr6.eq) goto loc_82861D10;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82861d08
	if (ctx.cr6.eq) goto loc_82861D08;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x82861d14
	goto loc_82861D14;
loc_82861D08:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82861d14
	goto loc_82861D14;
loc_82861D10:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82861D14:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82861d50
	if (!ctx.cr6.eq) goto loc_82861D50;
	// lwz r4,140(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82861d50
	if (ctx.cr6.eq) goto loc_82861D50;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82861D34;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82861d4c
	if (ctx.cr6.eq) goto loc_82861D4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82861D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82861D4C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82861D50:
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82861D6C"))) PPC_WEAK_FUNC(sub_82861D6C);
PPC_FUNC_IMPL(__imp__sub_82861D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82861D70"))) PPC_WEAK_FUNC(sub_82861D70);
PPC_FUNC_IMPL(__imp__sub_82861D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82861D78;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82861dfc
	if (ctx.cr6.eq) goto loc_82861DFC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82861df4
	if (ctx.cr6.eq) goto loc_82861DF4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82861e00
	if (!ctx.cr6.eq) goto loc_82861E00;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82861e00
	goto loc_82861E00;
loc_82861DF4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82861e00
	goto loc_82861E00;
loc_82861DFC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82861E00:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82861e2c
	if (ctx.cr6.eq) goto loc_82861E2C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82861e28
	if (ctx.cr6.eq) goto loc_82861E28;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82861e20
	if (ctx.cr6.eq) goto loc_82861E20;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x82861e2c
	goto loc_82861E2C;
loc_82861E20:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82861e2c
	goto loc_82861E2C;
loc_82861E28:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82861E2C:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82861e68
	if (!ctx.cr6.eq) goto loc_82861E68;
	// lwz r4,140(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82861e68
	if (ctx.cr6.eq) goto loc_82861E68;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82861E4C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82861e64
	if (ctx.cr6.eq) goto loc_82861E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82861E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82861E64:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82861E68:
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82861E84"))) PPC_WEAK_FUNC(sub_82861E84);
PPC_FUNC_IMPL(__imp__sub_82861E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82861E88"))) PPC_WEAK_FUNC(sub_82861E88);
PPC_FUNC_IMPL(__imp__sub_82861E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82861E90;
	__savegprlr_22(ctx, base);
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
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82861f14
	if (ctx.cr6.eq) goto loc_82861F14;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82861f0c
	if (ctx.cr6.eq) goto loc_82861F0C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82861f04
	if (ctx.cr6.eq) goto loc_82861F04;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82861f18
	goto loc_82861F18;
loc_82861F04:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82861f18
	goto loc_82861F18;
loc_82861F0C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82861f18
	goto loc_82861F18;
loc_82861F14:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82861F18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82861f90
	if (ctx.cr6.eq) goto loc_82861F90;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82861f4c
	if (ctx.cr6.eq) goto loc_82861F4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82861f44
	if (ctx.cr6.eq) goto loc_82861F44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82861f50
	if (!ctx.cr6.eq) goto loc_82861F50;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82861f50
	goto loc_82861F50;
loc_82861F44:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82861f50
	goto loc_82861F50;
loc_82861F4C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82861F50:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82861f78
	if (ctx.cr6.eq) goto loc_82861F78;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82861f70
	if (ctx.cr6.eq) goto loc_82861F70;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82861f7c
	if (!ctx.cr6.eq) goto loc_82861F7C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82861f7c
	goto loc_82861F7C;
loc_82861F70:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x82861f7c
	goto loc_82861F7C;
loc_82861F78:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82861F7C:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82861f90
	if (!ctx.cr6.eq) goto loc_82861F90;
	// lwz r4,140(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82861f9c
	if (!ctx.cr6.eq) goto loc_82861F9C;
loc_82861F90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82861fd8
	goto loc_82861FD8;
loc_82861F9C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82861FA8;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82861fb8
	if (ctx.cr6.eq) goto loc_82861FB8;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82861FB8;
	sub_827CC4E0(ctx, base);
loc_82861FB8:
	// lwz r3,140(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x82bf2318
	ctx.lr = 0x82861FC0;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
loc_82861FD8:
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82861FF0"))) PPC_WEAK_FUNC(sub_82861FF0);
PPC_FUNC_IMPL(__imp__sub_82861FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82861FF8;
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
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82862054
	if (ctx.cr6.eq) goto loc_82862054;
	// bl 0x82bf2318
	ctx.lr = 0x8286204C;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r11.u32);
loc_82862054:
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

__attribute__((alias("__imp__sub_8286206C"))) PPC_WEAK_FUNC(sub_8286206C);
PPC_FUNC_IMPL(__imp__sub_8286206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862070"))) PPC_WEAK_FUNC(sub_82862070);
PPC_FUNC_IMPL(__imp__sub_82862070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82862078;
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
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82862104
	if (ctx.cr6.eq) goto loc_82862104;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x828620D0;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828620e8
	if (ctx.cr6.eq) goto loc_828620E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828620E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828620E8:
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82becee0
	ctx.lr = 0x828620F4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862104
	if (ctx.cr6.eq) goto loc_82862104;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862104;
	sub_827CC4E0(ctx, base);
loc_82862104:
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

__attribute__((alias("__imp__sub_8286211C"))) PPC_WEAK_FUNC(sub_8286211C);
PPC_FUNC_IMPL(__imp__sub_8286211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862120"))) PPC_WEAK_FUNC(sub_82862120);
PPC_FUNC_IMPL(__imp__sub_82862120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82862128;
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
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
	// ble cr6,0x828621b0
	if (!ctx.cr6.gt) goto loc_828621B0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x828621b0
	if (!ctx.cr6.lt) goto loc_828621B0;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x828621b0
	if (!ctx.cr6.gt) goto loc_828621B0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82862198;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828621b0
	if (ctx.cr6.eq) goto loc_828621B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828621B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828621B0:
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

__attribute__((alias("__imp__sub_828621C8"))) PPC_WEAK_FUNC(sub_828621C8);
PPC_FUNC_IMPL(__imp__sub_828621C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x828621D0;
	__savegprlr_21(ctx, base);
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,13192(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r23,13188(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r22,13180(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r21,13184(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
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
	// beq cr6,0x828622a4
	if (ctx.cr6.eq) goto loc_828622A4;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r25,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x828622a4
	if (ctx.cr6.eq) goto loc_828622A4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82862278
	if (!ctx.cr6.eq) goto loc_82862278;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82862240;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862250
	if (ctx.cr6.eq) goto loc_82862250;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862250;
	sub_827CC4E0(ctx, base);
loc_82862250:
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// lwzx r4,r25,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// bl 0x82becee0
	ctx.lr = 0x8286225C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828622a4
	if (ctx.cr6.eq) goto loc_828622A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82862274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828622a4
	goto loc_828622A4;
loc_82862278:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82862284;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286229c
	if (ctx.cr6.eq) goto loc_8286229C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8286229C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8286229C:
	// lwzx r3,r25,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// bl 0x82bf1e68
	ctx.lr = 0x828622A4;
	sub_82BF1E68(ctx, base);
loc_828622A4:
	// stw r24,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828622BC"))) PPC_WEAK_FUNC(sub_828622BC);
PPC_FUNC_IMPL(__imp__sub_828622BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828622C0"))) PPC_WEAK_FUNC(sub_828622C0);
PPC_FUNC_IMPL(__imp__sub_828622C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x828622C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,13192(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r22,13184(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82862354
	if (ctx.cr6.eq) goto loc_82862354;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r21,r11,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r21,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r26.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82862340
	if (ctx.cr6.eq) goto loc_82862340;
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82862340
	if (ctx.cr6.eq) goto loc_82862340;
	// bl 0x82bf2658
	ctx.lr = 0x82862340;
	sub_82BF2658(ctx, base);
loc_82862340:
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r21,r26
	PPC_STORE_U32(ctx.r21.u32 + ctx.r26.u32, ctx.r11.u32);
	// stwx r11,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r11.u32);
loc_82862354:
	// stw r25,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286236C"))) PPC_WEAK_FUNC(sub_8286236C);
PPC_FUNC_IMPL(__imp__sub_8286236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862370"))) PPC_WEAK_FUNC(sub_82862370);
PPC_FUNC_IMPL(__imp__sub_82862370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82862378;
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
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
	// beq cr6,0x828623e8
	if (ctx.cr6.eq) goto loc_828623E8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828623d8
	if (ctx.cr6.eq) goto loc_828623D8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828623f0
	if (!ctx.cr6.eq) goto loc_828623F0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828623f0
	goto loc_828623F0;
loc_828623D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828623f0
	goto loc_828623F0;
loc_828623E8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828623F0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8286241c
	if (ctx.cr6.eq) goto loc_8286241C;
	// lwz r3,140(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8286241c
	if (ctx.cr6.eq) goto loc_8286241C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r11.u32);
	// bl 0x82bf26d0
	ctx.lr = 0x82862410;
	sub_82BF26D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r11.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_8286241C:
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

__attribute__((alias("__imp__sub_82862434"))) PPC_WEAK_FUNC(sub_82862434);
PPC_FUNC_IMPL(__imp__sub_82862434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862438"))) PPC_WEAK_FUNC(sub_82862438);
PPC_FUNC_IMPL(__imp__sub_82862438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82862440;
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
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
	// blt cr6,0x828624a8
	if (ctx.cr6.lt) goto loc_828624A8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x828624a8
	if (!ctx.cr6.lt) goto loc_828624A8;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828624a8
	if (ctx.cr6.eq) goto loc_828624A8;
	// bl 0x82bf1f38
	ctx.lr = 0x828624A8;
	sub_82BF1F38(ctx, base);
loc_828624A8:
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

__attribute__((alias("__imp__sub_828624C0"))) PPC_WEAK_FUNC(sub_828624C0);
PPC_FUNC_IMPL(__imp__sub_828624C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x828624C8;
	__savegprlr_21(ctx, base);
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
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r24,13192(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r23,13188(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r22,13180(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r21,13184(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
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
	// beq cr6,0x8286253c
	if (ctx.cr6.eq) goto loc_8286253C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8286252c
	if (ctx.cr6.eq) goto loc_8286252C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82862544
	if (!ctx.cr6.eq) goto loc_82862544;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82862544
	goto loc_82862544;
loc_8286252C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82862544
	goto loc_82862544;
loc_8286253C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82862544:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8286259c
	if (ctx.cr6.eq) goto loc_8286259C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8286259c
	if (ctx.cr6.lt) goto loc_8286259C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x8286259c
	if (!ctx.cr6.lt) goto loc_8286259C;
	// addi r11,r4,25
	ctx.r11.s64 = ctx.r4.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8286259c
	if (ctx.cr6.eq) goto loc_8286259C;
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x8286259c
	if (ctx.cr6.eq) goto loc_8286259C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82862594
	if (!ctx.cr6.eq) goto loc_82862594;
	// bl 0x82bf2458
	ctx.lr = 0x82862590;
	sub_82BF2458(ctx, base);
	// b 0x82862598
	goto loc_82862598;
loc_82862594:
	// bl 0x82bf24a0
	ctx.lr = 0x82862598;
	sub_82BF24A0(ctx, base);
loc_82862598:
	// stwx r25,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r25.u32);
loc_8286259C:
	// stw r24,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828625B4"))) PPC_WEAK_FUNC(sub_828625B4);
PPC_FUNC_IMPL(__imp__sub_828625B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828625B8"))) PPC_WEAK_FUNC(sub_828625B8);
PPC_FUNC_IMPL(__imp__sub_828625B8) {
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
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r31,13188(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828625fc
	if (!ctx.cr6.gt) goto loc_828625FC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 * 52;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8286260c
	goto loc_8286260C;
loc_828625FC:
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
loc_8286260C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x82862618;
	sub_82219130(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286264c
	if (ctx.cr6.eq) goto loc_8286264C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286263c
	if (ctx.cr6.eq) goto loc_8286263C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82862654
	if (!ctx.cr6.eq) goto loc_82862654;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82862654
	goto loc_82862654;
loc_8286263C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82862654
	goto loc_82862654;
loc_8286264C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82862654:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82862690
	if (ctx.cr6.eq) goto loc_82862690;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,10035
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10035, ctx.xer);
	// bne cr6,0x82862690
	if (!ctx.cr6.eq) goto loc_82862690;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828624c0
	ctx.lr = 0x8286267C;
	sub_828624C0(ctx, base);
	// lwz r6,13188(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x828624c0
	ctx.lr = 0x82862690;
	sub_828624C0(ctx, base);
loc_82862690:
	// li r3,1000
	ctx.r3.s64 = 1000;
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

__attribute__((alias("__imp__sub_828626AC"))) PPC_WEAK_FUNC(sub_828626AC);
PPC_FUNC_IMPL(__imp__sub_828626AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828626B0"))) PPC_WEAK_FUNC(sub_828626B0);
PPC_FUNC_IMPL(__imp__sub_828626B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828626B8;
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
	// lwz r4,20(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bl 0x82becee0
	ctx.lr = 0x8286270C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862724
	if (ctx.cr6.eq) goto loc_82862724;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82862724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82862724:
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

__attribute__((alias("__imp__sub_8286273C"))) PPC_WEAK_FUNC(sub_8286273C);
PPC_FUNC_IMPL(__imp__sub_8286273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862740"))) PPC_WEAK_FUNC(sub_82862740);
PPC_FUNC_IMPL(__imp__sub_82862740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82862748;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r22,13180(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r31.u32);
	// lwz r3,13416(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13416);
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82becee0
	ctx.lr = 0x828627A4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828627c4
	if (ctx.cr6.eq) goto loc_828627C4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828627c4
	if (ctx.cr6.eq) goto loc_828627C4;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_828627C4:
	// lwz r11,13184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r22,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// stw r25,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r25.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// ori r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 16384;
	// sth r8,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862800"))) PPC_WEAK_FUNC(sub_82862800);
PPC_FUNC_IMPL(__imp__sub_82862800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82862808;
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
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82862860
	if (!ctx.cr6.eq) goto loc_82862860;
	// bl 0x828626b0
	ctx.lr = 0x82862858;
	sub_828626B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
loc_82862860:
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

__attribute__((alias("__imp__sub_82862878"))) PPC_WEAK_FUNC(sub_82862878);
PPC_FUNC_IMPL(__imp__sub_82862878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82862880;
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
	// lwz r4,20(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bl 0x82becee0
	ctx.lr = 0x828628D4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828628ec
	if (ctx.cr6.eq) goto loc_828628EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828628EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828628EC:
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

__attribute__((alias("__imp__sub_82862904"))) PPC_WEAK_FUNC(sub_82862904);
PPC_FUNC_IMPL(__imp__sub_82862904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862908"))) PPC_WEAK_FUNC(sub_82862908);
PPC_FUNC_IMPL(__imp__sub_82862908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82862910;
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
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x82becee0
	ctx.lr = 0x82862964;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286297c
	if (ctx.cr6.eq) goto loc_8286297C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8286297C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8286297C:
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

__attribute__((alias("__imp__sub_82862994"))) PPC_WEAK_FUNC(sub_82862994);
PPC_FUNC_IMPL(__imp__sub_82862994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862998"))) PPC_WEAK_FUNC(sub_82862998);
PPC_FUNC_IMPL(__imp__sub_82862998) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x828629d4
	if (ctx.cr6.eq) goto loc_828629D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828629d0
	if (ctx.cr6.eq) goto loc_828629D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828629d4
	if (!ctx.cr6.eq) goto loc_828629D4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828629d4
	goto loc_828629D4;
loc_828629D0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_828629D4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,1092(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1092);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82862a60
	if (ctx.cr6.eq) goto loc_82862A60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82862a58
	if (ctx.cr6.eq) goto loc_82862A58;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82862a50
	if (ctx.cr6.eq) goto loc_82862A50;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82862a48
	if (ctx.cr6.eq) goto loc_82862A48;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r9,46
	ctx.r9.s64 = 46;
loc_82862A10:
	// lwz r11,30580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30580);
	// stw r9,30380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30380, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82862aa8
	if (ctx.cr6.eq) goto loc_82862AA8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82862a3c
	if (ctx.cr6.eq) goto loc_82862A3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r11,15876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15876, ctx.r11.u32);
	// blr 
	return;
loc_82862A3C:
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r11,15876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15876, ctx.r11.u32);
	// blr 
	return;
loc_82862A48:
	// li r9,37
	ctx.r9.s64 = 37;
	// b 0x82862a10
	goto loc_82862A10;
loc_82862A50:
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x82862a10
	goto loc_82862A10;
loc_82862A58:
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x82862a10
	goto loc_82862A10;
loc_82862A60:
	// lwz r11,30580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30580);
	// li r9,39
	ctx.r9.s64 = 39;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82862a74
	if (!ctx.cr6.eq) goto loc_82862A74;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82862A74:
	// stw r9,30380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30380, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82862aa8
	if (ctx.cr6.eq) goto loc_82862AA8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82862a9c
	if (ctx.cr6.eq) goto loc_82862A9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,130
	ctx.r11.s64 = 130;
	// stw r11,15876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15876, ctx.r11.u32);
	// blr 
	return;
loc_82862A9C:
	// li r11,115
	ctx.r11.s64 = 115;
	// stw r11,15876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15876, ctx.r11.u32);
	// blr 
	return;
loc_82862AA8:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,15876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862AB4"))) PPC_WEAK_FUNC(sub_82862AB4);
PPC_FUNC_IMPL(__imp__sub_82862AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82862AB8"))) PPC_WEAK_FUNC(sub_82862AB8);
PPC_FUNC_IMPL(__imp__sub_82862AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82862AC0;
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
	// lwz r4,28608(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28608);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82862b38
	if (ctx.cr6.eq) goto loc_82862B38;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82862B18;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862b28
	if (ctx.cr6.eq) goto loc_82862B28;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862B28;
	sub_827CC4E0(ctx, base);
loc_82862B28:
	// lwz r3,28608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28608);
	// bl 0x82bf2318
	ctx.lr = 0x82862B30;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28608(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28608, ctx.r11.u32);
loc_82862B38:
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

__attribute__((alias("__imp__sub_82862B50"))) PPC_WEAK_FUNC(sub_82862B50);
PPC_FUNC_IMPL(__imp__sub_82862B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82862B58;
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
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 65536;
	// addi r27,r27,-14648
	ctx.r27.s64 = ctx.r27.s64 + -14648;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82becee0
	ctx.lr = 0x82862BB4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862bc4
	if (ctx.cr6.eq) goto loc_82862BC4;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862BC4;
	sub_827CC4E0(ctx, base);
loc_82862BC4:
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82becee0
	ctx.lr = 0x82862BD0;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862bf0
	if (ctx.cr6.eq) goto loc_82862BF0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82862bf0
	if (ctx.cr6.eq) goto loc_82862BF0;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82862BF0:
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
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

__attribute__((alias("__imp__sub_82862C08"))) PPC_WEAK_FUNC(sub_82862C08);
PPC_FUNC_IMPL(__imp__sub_82862C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82862C10;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,13192(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r23,13188(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// addi r26,r26,-15908
	ctx.r26.s64 = ctx.r26.s64 + -15908;
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82862c88
	if (!ctx.cr6.gt) goto loc_82862C88;
	// lwz r3,13416(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82862C70;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862c80
	if (ctx.cr6.eq) goto loc_82862C80;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862C80;
	sub_827CC4E0(ctx, base);
loc_82862C80:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82bf2318
	ctx.lr = 0x82862C88;
	sub_82BF2318(ctx, base);
loc_82862C88:
	// lwz r4,3164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82862cb4
	if (!ctx.cr6.gt) goto loc_82862CB4;
	// lwz r3,13416(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82862C9C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862cac
	if (ctx.cr6.eq) goto loc_82862CAC;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862CAC;
	sub_827CC4E0(ctx, base);
loc_82862CAC:
	// lwz r3,3164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	// bl 0x82bf2318
	ctx.lr = 0x82862CB4;
	sub_82BF2318(ctx, base);
loc_82862CB4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r24,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r24.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// ori r9,r10,49632
	ctx.r9.u64 = ctx.r10.u64 | 49632;
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r23,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r23.u32);
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862CE8"))) PPC_WEAK_FUNC(sub_82862CE8);
PPC_FUNC_IMPL(__imp__sub_82862CE8) {
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
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stfs f0,30392(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 30392, temp.u32);
	// stfs f0,30512(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 30512, temp.u32);
	// stw r11,3148(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3148, ctx.r11.u32);
	// stw r11,30720(r4)
	PPC_STORE_U32(ctx.r4.u32 + 30720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862D30"))) PPC_WEAK_FUNC(sub_82862D30);
PPC_FUNC_IMPL(__imp__sub_82862D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82862D38;
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
	// lwz r4,924(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 924);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82862db0
	if (ctx.cr6.eq) goto loc_82862DB0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82862D90;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862da0
	if (ctx.cr6.eq) goto loc_82862DA0;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862DA0;
	sub_827CC4E0(ctx, base);
loc_82862DA0:
	// lwz r3,924(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 924);
	// bl 0x82bf2318
	ctx.lr = 0x82862DA8;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,924(r27)
	PPC_STORE_U32(ctx.r27.u32 + 924, ctx.r11.u32);
loc_82862DB0:
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

__attribute__((alias("__imp__sub_82862DC8"))) PPC_WEAK_FUNC(sub_82862DC8);
PPC_FUNC_IMPL(__imp__sub_82862DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82862DD0;
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
	// lwz r4,3200(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3200);
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// beq cr6,0x82862e3c
	if (ctx.cr6.eq) goto loc_82862E3C;
	// bl 0x82becee0
	ctx.lr = 0x82862E28;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862e58
	if (ctx.cr6.eq) goto loc_82862E58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82862e50
	goto loc_82862E50;
loc_82862E3C:
	// bl 0x82becee0
	ctx.lr = 0x82862E40;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862e58
	if (ctx.cr6.eq) goto loc_82862E58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_82862E50:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82862E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82862E58:
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

__attribute__((alias("__imp__sub_82862E70"))) PPC_WEAK_FUNC(sub_82862E70);
PPC_FUNC_IMPL(__imp__sub_82862E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82862E78;
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
	// lwz r4,28648(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28648);
	// bl 0x82becee0
	ctx.lr = 0x82862ECC;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862edc
	if (ctx.cr6.eq) goto loc_82862EDC;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82862EDC;
	sub_827CC4E0(ctx, base);
loc_82862EDC:
	// lwz r3,13416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// lwz r4,28648(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28648);
	// bl 0x82becee0
	ctx.lr = 0x82862EE8;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82862f08
	if (ctx.cr6.eq) goto loc_82862F08;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82862f08
	if (ctx.cr6.eq) goto loc_82862F08;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82862F08:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r11,28648(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28648, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82862F28"))) PPC_WEAK_FUNC(sub_82862F28);
PPC_FUNC_IMPL(__imp__sub_82862F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82862f60
	if (ctx.cr6.eq) goto loc_82862F60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82862f50
	if (ctx.cr6.eq) goto loc_82862F50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82862f58
	if (ctx.cr6.eq) goto loc_82862F58;
loc_82862F50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82862f64
	goto loc_82862F64;
loc_82862F58:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82862f64
	goto loc_82862F64;
loc_82862F60:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82862F64:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,1404(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1404);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82862f94
	if (ctx.cr6.eq) goto loc_82862F94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82862f98
	if (ctx.cr6.eq) goto loc_82862F98;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82862f98
	if (!ctx.cr6.eq) goto loc_82862F98;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82862f98
	goto loc_82862F98;
loc_82862F94:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82862F98:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1100(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82862fb8
	if (!ctx.cr6.lt) goto loc_82862FB8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82862FB8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862FC0"))) PPC_WEAK_FUNC(sub_82862FC0);
PPC_FUNC_IMPL(__imp__sub_82862FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82862FC8;
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13192(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r23,13180(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lwz r10,12492(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,28592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28592);
	// bl 0x82bbdb28
	ctx.lr = 0x82863020;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82863034
	if (ctx.cr6.eq) goto loc_82863034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82863034:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r4,13188(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x82863070
	if (ctx.cr6.eq) goto loc_82863070;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82863068
	if (ctx.cr6.eq) goto loc_82863068;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82863074
	if (!ctx.cr6.eq) goto loc_82863074;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82863074
	goto loc_82863074;
loc_82863068:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82863074
	goto loc_82863074;
loc_82863070:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_82863074:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,30656(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30656);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r3,52(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8286315c
	if (!ctx.cr6.eq) goto loc_8286315C;
	// lwz r10,30652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30652);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828630e0
	if (ctx.cr6.eq) goto loc_828630E0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82863210
	if (!ctx.cr6.eq) goto loc_82863210;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828630c4
	if (ctx.cr6.eq) goto loc_828630C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828630c8
	if (ctx.cr6.eq) goto loc_828630C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828630c8
	if (!ctx.cr6.eq) goto loc_828630C8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828630c8
	goto loc_828630C8;
loc_828630C4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828630C8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 752, ctx.r10.u32);
	// b 0x82863210
	goto loc_82863210;
loc_828630E0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863100
	if (ctx.cr6.eq) goto loc_82863100;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863104
	if (ctx.cr6.eq) goto loc_82863104;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82863104
	if (!ctx.cr6.eq) goto loc_82863104;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82863104
	goto loc_82863104;
loc_82863100:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82863104:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r10,752(r7)
	PPC_STORE_U32(ctx.r7.u32 + 752, ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863148
	if (ctx.cr6.eq) goto loc_82863148;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286314c
	if (ctx.cr6.eq) goto loc_8286314C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286314c
	if (!ctx.cr6.eq) goto loc_8286314C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8283edd8
	ctx.lr = 0x82863144;
	sub_8283EDD8(ctx, base);
	// b 0x82863210
	goto loc_82863210;
loc_82863148:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8286314C:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8283edd8
	ctx.lr = 0x82863158;
	sub_8283EDD8(ctx, base);
	// b 0x82863210
	goto loc_82863210;
loc_8286315C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863184
	if (ctx.cr6.eq) goto loc_82863184;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863174
	if (ctx.cr6.eq) goto loc_82863174;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8286317c
	if (ctx.cr6.eq) goto loc_8286317C;
loc_82863174:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82863188
	goto loc_82863188;
loc_8286317C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82863188
	goto loc_82863188;
loc_82863184:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82863188:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,1840(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1840);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828631c8
	if (ctx.cr6.eq) goto loc_828631C8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828631c0
	if (ctx.cr6.eq) goto loc_828631C0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828631b8
	if (ctx.cr6.eq) goto loc_828631B8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828631cc
	goto loc_828631CC;
loc_828631B8:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828631cc
	goto loc_828631CC;
loc_828631C0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828631cc
	goto loc_828631CC;
loc_828631C8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828631CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82863210
	if (ctx.cr6.eq) goto loc_82863210;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82863204
	if (ctx.cr6.eq) goto loc_82863204;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828631fc
	if (ctx.cr6.eq) goto loc_828631FC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828631f4
	if (ctx.cr6.eq) goto loc_828631F4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82863208
	goto loc_82863208;
loc_828631F4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82863208
	goto loc_82863208;
loc_828631FC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82863208
	goto loc_82863208;
loc_82863204:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82863208:
	// li r4,49
	ctx.r4.s64 = 49;
	// bl 0x82859b60
	ctx.lr = 0x82863210;
	sub_82859B60(ctx, base);
loc_82863210:
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

__attribute__((alias("__imp__sub_82863228"))) PPC_WEAK_FUNC(sub_82863228);
PPC_FUNC_IMPL(__imp__sub_82863228) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82863230;
	__savegprlr_21(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r24,13192(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13192);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r23,13188(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r22,13180(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r21,13184(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82863264:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286328c
	if (ctx.cr6.eq) goto loc_8286328C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82863284
	if (ctx.cr6.eq) goto loc_82863284;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8286328c
	if (!ctx.cr6.eq) goto loc_8286328C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82863290
	goto loc_82863290;
loc_82863284:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82863290
	goto loc_82863290;
loc_8286328C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82863290:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x828632e4
	if (ctx.cr6.lt) goto loc_828632E4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bgt cr6,0x828632e4
	if (ctx.cr6.gt) goto loc_828632E4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,1976
	ctx.r11.s64 = ctx.r11.s64 + 1976;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863300
	if (ctx.cr6.eq) goto loc_82863300;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828632f8
	if (ctx.cr6.eq) goto loc_828632F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828632f0
	if (ctx.cr6.eq) goto loc_828632F0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82863304
	goto loc_82863304;
loc_828632E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82863304
	goto loc_82863304;
loc_828632F0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82863304
	goto loc_82863304;
loc_828632F8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82863304
	goto loc_82863304;
loc_82863300:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82863304:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286340c
	if (ctx.cr6.eq) goto loc_8286340C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82863360
	if (!ctx.cr6.gt) goto loc_82863360;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863344
	if (ctx.cr6.eq) goto loc_82863344;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286333c
	if (ctx.cr6.eq) goto loc_8286333C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82863334
	if (ctx.cr6.eq) goto loc_82863334;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82863348
	goto loc_82863348;
loc_82863334:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82863348
	goto loc_82863348;
loc_8286333C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82863348
	goto loc_82863348;
loc_82863344:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82863348:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x828633b4
	if (ctx.cr6.eq) goto loc_828633B4;
loc_82863360:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863388
	if (ctx.cr6.eq) goto loc_82863388;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863380
	if (ctx.cr6.eq) goto loc_82863380;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8286338c
	if (!ctx.cr6.eq) goto loc_8286338C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8286338c
	goto loc_8286338C;
loc_82863380:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8286338c
	goto loc_8286338C;
loc_82863388:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286338C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bne cr6,0x828633ac
	if (!ctx.cr6.eq) goto loc_828633AC;
	// andc r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// b 0x82863400
	goto loc_82863400;
loc_828633AC:
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// b 0x82863400
	goto loc_82863400;
loc_828633B4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828633dc
	if (ctx.cr6.eq) goto loc_828633DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828633d4
	if (ctx.cr6.eq) goto loc_828633D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828633e0
	if (!ctx.cr6.eq) goto loc_828633E0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828633e0
	goto loc_828633E0;
loc_828633D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828633e0
	goto loc_828633E0;
loc_828633DC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828633E0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// andc r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// beq cr6,0x82863400
	if (ctx.cr6.eq) goto loc_82863400;
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
loc_82863400:
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8286340C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82863264
	if (ctx.cr6.lt) goto loc_82863264;
	// stw r24,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r23.u32);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286342C"))) PPC_WEAK_FUNC(sub_8286342C);
PPC_FUNC_IMPL(__imp__sub_8286342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863430"))) PPC_WEAK_FUNC(sub_82863430);
PPC_FUNC_IMPL(__imp__sub_82863430) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r5,30652(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30652);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82863470
	if (!ctx.cr6.eq) goto loc_82863470;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82862f28
	ctx.lr = 0x8286346C;
	sub_82862F28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82863470:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863484"))) PPC_WEAK_FUNC(sub_82863484);
PPC_FUNC_IMPL(__imp__sub_82863484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863488"))) PPC_WEAK_FUNC(sub_82863488);
PPC_FUNC_IMPL(__imp__sub_82863488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82863490;
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
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r31,13180(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r30,13192(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// li r5,400
	ctx.r5.s64 = 400;
	// lwz r29,13188(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// li r4,39
	ctx.r4.s64 = 39;
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
	// bl 0x82863228
	ctx.lr = 0x828634E4;
	sub_82863228(ctx, base);
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

__attribute__((alias("__imp__sub_828634FC"))) PPC_WEAK_FUNC(sub_828634FC);
PPC_FUNC_IMPL(__imp__sub_828634FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863500"))) PPC_WEAK_FUNC(sub_82863500);
PPC_FUNC_IMPL(__imp__sub_82863500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82863508;
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
	// lwz r10,3116(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3116);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82863574
	if (!ctx.cr6.eq) goto loc_82863574;
	// lwz r3,908(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 908);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82863574
	if (!ctx.cr6.gt) goto loc_82863574;
	// bl 0x82bf2028
	ctx.lr = 0x82863564;
	sub_82BF2028(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,908(r27)
	PPC_STORE_U32(ctx.r27.u32 + 908, ctx.r11.u32);
	// stw r10,3116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3116, ctx.r10.u32);
loc_82863574:
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

__attribute__((alias("__imp__sub_8286358C"))) PPC_WEAK_FUNC(sub_8286358C);
PPC_FUNC_IMPL(__imp__sub_8286358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863590"))) PPC_WEAK_FUNC(sub_82863590);
PPC_FUNC_IMPL(__imp__sub_82863590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82863598;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r26,13188(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r27,13192(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// li r5,400
	ctx.r5.s64 = 400;
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r24,13184(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,30656(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30656);
	// bl 0x82863228
	ctx.lr = 0x828635F0;
	sub_82863228(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,13188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863620
	if (ctx.cr6.eq) goto loc_82863620;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863624
	if (ctx.cr6.eq) goto loc_82863624;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82863624
	if (!ctx.cr6.eq) goto loc_82863624;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82863624
	goto loc_82863624;
loc_82863620:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82863624:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8283edd8
	ctx.lr = 0x82863630;
	sub_8283EDD8(ctx, base);
	// stw r27,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863648"))) PPC_WEAK_FUNC(sub_82863648);
PPC_FUNC_IMPL(__imp__sub_82863648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82863650;
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
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// beq cr6,0x828636a4
	if (ctx.cr6.eq) goto loc_828636A4;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82837d88
	ctx.lr = 0x828636A4;
	sub_82837D88(ctx, base);
loc_828636A4:
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

__attribute__((alias("__imp__sub_828636BC"))) PPC_WEAK_FUNC(sub_828636BC);
PPC_FUNC_IMPL(__imp__sub_828636BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828636C0"))) PPC_WEAK_FUNC(sub_828636C0);
PPC_FUNC_IMPL(__imp__sub_828636C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828636C8;
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
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8286371c
	if (ctx.cr6.eq) goto loc_8286371C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82837d88
	ctx.lr = 0x8286371C;
	sub_82837D88(ctx, base);
loc_8286371C:
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

__attribute__((alias("__imp__sub_82863734"))) PPC_WEAK_FUNC(sub_82863734);
PPC_FUNC_IMPL(__imp__sub_82863734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863738"))) PPC_WEAK_FUNC(sub_82863738);
PPC_FUNC_IMPL(__imp__sub_82863738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82863740;
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
	// lwz r10,30396(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 30396);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286379c
	if (ctx.cr6.eq) goto loc_8286379C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82837d88
	ctx.lr = 0x82863794;
	sub_82837D88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30400(r27)
	PPC_STORE_U32(ctx.r27.u32 + 30400, ctx.r11.u32);
loc_8286379C:
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

__attribute__((alias("__imp__sub_828637B4"))) PPC_WEAK_FUNC(sub_828637B4);
PPC_FUNC_IMPL(__imp__sub_828637B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828637B8"))) PPC_WEAK_FUNC(sub_828637B8);
PPC_FUNC_IMPL(__imp__sub_828637B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828637C0;
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
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82863814
	if (ctx.cr6.eq) goto loc_82863814;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82837d88
	ctx.lr = 0x82863814;
	sub_82837D88(ctx, base);
loc_82863814:
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

__attribute__((alias("__imp__sub_8286382C"))) PPC_WEAK_FUNC(sub_8286382C);
PPC_FUNC_IMPL(__imp__sub_8286382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863830"))) PPC_WEAK_FUNC(sub_82863830);
PPC_FUNC_IMPL(__imp__sub_82863830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82863838;
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
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// beq cr6,0x8286388c
	if (ctx.cr6.eq) goto loc_8286388C;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82837d88
	ctx.lr = 0x8286388C;
	sub_82837D88(ctx, base);
loc_8286388C:
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

__attribute__((alias("__imp__sub_828638A4"))) PPC_WEAK_FUNC(sub_828638A4);
PPC_FUNC_IMPL(__imp__sub_828638A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828638A8"))) PPC_WEAK_FUNC(sub_828638A8);
PPC_FUNC_IMPL(__imp__sub_828638A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828638B0;
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
	// lwz r4,28712(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28712);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82863920
	if (ctx.cr6.eq) goto loc_82863920;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82863908;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82863918
	if (ctx.cr6.eq) goto loc_82863918;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82863918;
	sub_827CC4E0(ctx, base);
loc_82863918:
	// lwz r3,28712(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28712);
	// bl 0x82bf2318
	ctx.lr = 0x82863920;
	sub_82BF2318(ctx, base);
loc_82863920:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r11,28712(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28712, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82863940"))) PPC_WEAK_FUNC(sub_82863940);
PPC_FUNC_IMPL(__imp__sub_82863940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82863948;
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
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
	// lwz r9,30412(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30412);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828639c8
	if (ctx.cr6.eq) goto loc_828639C8;
	// lwz r3,28712(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28712);
	// bl 0x82bf1d28
	ctx.lr = 0x828639A0;
	sub_82BF1D28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// beq cr6,0x828639d8
	if (ctx.cr6.eq) goto loc_828639D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_828639C8:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
loc_828639D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828639E8"))) PPC_WEAK_FUNC(sub_828639E8);
PPC_FUNC_IMPL(__imp__sub_828639E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828639F0;
	__savegprlr_22(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// addi r26,r11,-29532
	ctx.r26.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r25,13192(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r22,13184(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82863A24:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82863a54
	if (ctx.cr6.eq) goto loc_82863A54;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82863a4c
	if (ctx.cr6.eq) goto loc_82863A4C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82863a44
	if (ctx.cr6.eq) goto loc_82863A44;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82863a58
	goto loc_82863A58;
loc_82863A44:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82863a58
	goto loc_82863A58;
loc_82863A4C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82863a58
	goto loc_82863A58;
loc_82863A54:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82863A58:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82863aac
	if (ctx.cr6.lt) goto loc_82863AAC;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bgt cr6,0x82863aac
	if (ctx.cr6.gt) goto loc_82863AAC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,1976
	ctx.r11.s64 = ctx.r11.s64 + 1976;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863ac8
	if (ctx.cr6.eq) goto loc_82863AC8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863ac0
	if (ctx.cr6.eq) goto loc_82863AC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82863ab8
	if (ctx.cr6.eq) goto loc_82863AB8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82863acc
	goto loc_82863ACC;
loc_82863AAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82863acc
	goto loc_82863ACC;
loc_82863AB8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82863acc
	goto loc_82863ACC;
loc_82863AC0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82863acc
	goto loc_82863ACC;
loc_82863AC8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82863ACC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82863b78
	if (ctx.cr6.eq) goto loc_82863B78;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863b04
	if (ctx.cr6.eq) goto loc_82863B04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863afc
	if (ctx.cr6.eq) goto loc_82863AFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82863af4
	if (ctx.cr6.eq) goto loc_82863AF4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82863b08
	goto loc_82863B08;
loc_82863AF4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82863b08
	goto loc_82863B08;
loc_82863AFC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82863b08
	goto loc_82863B08;
loc_82863B04:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82863B08:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82863b78
	if (!ctx.cr6.eq) goto loc_82863B78;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82863b48
	if (ctx.cr6.eq) goto loc_82863B48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863b40
	if (ctx.cr6.eq) goto loc_82863B40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82863b4c
	if (!ctx.cr6.eq) goto loc_82863B4C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82863b4c
	goto loc_82863B4C;
loc_82863B40:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82863b4c
	goto loc_82863B4C;
loc_82863B48:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82863B4C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// andc r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// beq cr6,0x82863b6c
	if (ctx.cr6.eq) goto loc_82863B6C;
	// or r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 | ctx.r10.u64;
loc_82863B6C:
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82863B78:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82863a24
	if (ctx.cr6.lt) goto loc_82863A24;
	// stw r25,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863B98"))) PPC_WEAK_FUNC(sub_82863B98);
PPC_FUNC_IMPL(__imp__sub_82863B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82863BA0;
	__savegprlr_24(ctx, base);
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// lwz r26,13188(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r24,13184(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82863cc4
	if (ctx.cr6.eq) goto loc_82863CC4;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82863d98
	if (!ctx.cr6.eq) goto loc_82863D98;
	// addi r6,r11,556
	ctx.r6.s64 = ctx.r11.s64 + 556;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_82863BFC:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82863c30
	if (ctx.cr6.eq) goto loc_82863C30;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82863c28
	if (ctx.cr6.eq) goto loc_82863C28;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82863c20
	if (ctx.cr6.eq) goto loc_82863C20;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82863c34
	goto loc_82863C34;
loc_82863C20:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82863c34
	goto loc_82863C34;
loc_82863C28:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82863c34
	goto loc_82863C34;
loc_82863C30:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82863C34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82863ca4
	if (ctx.cr6.eq) goto loc_82863CA4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82863c68
	if (ctx.cr6.eq) goto loc_82863C68;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82863c64
	if (ctx.cr6.eq) goto loc_82863C64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82863c5c
	if (ctx.cr6.eq) goto loc_82863C5C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82863c68
	goto loc_82863C68;
loc_82863C5C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82863c68
	goto loc_82863C68;
loc_82863C64:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82863C68:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,1408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f13,f0
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f10,1408(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1408, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// beq cr6,0x82863c9c
	if (ctx.cr6.eq) goto loc_82863C9C;
	// lwz r10,1964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,1964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1964, ctx.r9.u32);
loc_82863C9C:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82863CA4:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82863bfc
	if (!ctx.cr0.eq) goto loc_82863BFC;
	// stw r27,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r26.u32);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82863CC4:
	// addi r6,r11,344
	ctx.r6.s64 = ctx.r11.s64 + 344;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_82863CE4:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82863d18
	if (ctx.cr6.eq) goto loc_82863D18;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82863d10
	if (ctx.cr6.eq) goto loc_82863D10;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82863d08
	if (ctx.cr6.eq) goto loc_82863D08;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82863d1c
	goto loc_82863D1C;
loc_82863D08:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82863d1c
	goto loc_82863D1C;
loc_82863D10:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82863d1c
	goto loc_82863D1C;
loc_82863D18:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82863D1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82863d8c
	if (ctx.cr6.eq) goto loc_82863D8C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82863d50
	if (ctx.cr6.eq) goto loc_82863D50;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82863d4c
	if (ctx.cr6.eq) goto loc_82863D4C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82863d44
	if (ctx.cr6.eq) goto loc_82863D44;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82863d50
	goto loc_82863D50;
loc_82863D44:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82863d50
	goto loc_82863D50;
loc_82863D4C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82863D50:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,1408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f13,f0
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f10,1408(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1408, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// beq cr6,0x82863d84
	if (ctx.cr6.eq) goto loc_82863D84;
	// lwz r10,1964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,1964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1964, ctx.r9.u32);
loc_82863D84:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82863D8C:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82863ce4
	if (!ctx.cr0.eq) goto loc_82863CE4;
loc_82863D98:
	// stw r27,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r26.u32);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863DAC"))) PPC_WEAK_FUNC(sub_82863DAC);
PPC_FUNC_IMPL(__imp__sub_82863DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863DB0"))) PPC_WEAK_FUNC(sub_82863DB0);
PPC_FUNC_IMPL(__imp__sub_82863DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,15828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82863de4
	if (!ctx.cr6.eq) goto loc_82863DE4;
loc_82863DD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 108, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82863DE4:
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82863dd0
	if (ctx.cr6.eq) goto loc_82863DD0;
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82863dd0
	if (ctx.cr6.eq) goto loc_82863DD0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863E1C"))) PPC_WEAK_FUNC(sub_82863E1C);
PPC_FUNC_IMPL(__imp__sub_82863E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863E20"))) PPC_WEAK_FUNC(sub_82863E20);
PPC_FUNC_IMPL(__imp__sub_82863E20) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,15828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r5,108(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// bl 0x82809688
	ctx.lr = 0x82863E58;
	sub_82809688(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82863E74"))) PPC_WEAK_FUNC(sub_82863E74);
PPC_FUNC_IMPL(__imp__sub_82863E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863E78"))) PPC_WEAK_FUNC(sub_82863E78);
PPC_FUNC_IMPL(__imp__sub_82863E78) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82863ed4
	if (ctx.cr6.eq) goto loc_82863ED4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82863ec4
	if (ctx.cr6.eq) goto loc_82863EC4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82863edc
	if (!ctx.cr6.eq) goto loc_82863EDC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82863edc
	goto loc_82863EDC;
loc_82863EC4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82863edc
	goto loc_82863EDC;
loc_82863ED4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82863EDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828386f8
	ctx.lr = 0x82863EE4;
	sub_828386F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82863f10
	if (ctx.cr6.lt) goto loc_82863F10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82863f10
	if (!ctx.cr6.lt) goto loc_82863F10;
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82863f14
	goto loc_82863F14;
loc_82863F10:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82863F14:
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

__attribute__((alias("__imp__sub_82863F2C"))) PPC_WEAK_FUNC(sub_82863F2C);
PPC_FUNC_IMPL(__imp__sub_82863F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82863F30"))) PPC_WEAK_FUNC(sub_82863F30);
PPC_FUNC_IMPL(__imp__sub_82863F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82863F38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8286405c
	if (ctx.cr6.lt) goto loc_8286405C;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bge cr6,0x8286405c
	if (!ctx.cr6.lt) goto loc_8286405C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r29,-29532(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x82863fa0
	if (ctx.cr6.eq) goto loc_82863FA0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82863f98
	if (ctx.cr6.eq) goto loc_82863F98;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82863fa4
	if (!ctx.cr6.eq) goto loc_82863FA4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82863fa4
	goto loc_82863FA4;
loc_82863F98:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x82863fa4
	goto loc_82863FA4;
loc_82863FA0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82863FA4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828386f8
	ctx.lr = 0x82863FAC;
	sub_828386F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8286401c
	if (ctx.cr6.eq) goto loc_8286401C;
	// addi r11,r31,145
	ctx.r11.s64 = ctx.r31.s64 + 145;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286400c
	if (ctx.cr6.eq) goto loc_8286400C;
	// addi r11,r31,139
	ctx.r11.s64 = ctx.r31.s64 + 139;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864000
	if (ctx.cr6.eq) goto loc_82864000;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863ff8
	if (ctx.cr6.eq) goto loc_82863FF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864004
	if (!ctx.cr6.eq) goto loc_82864004;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864004
	goto loc_82864004;
loc_82863FF8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82864004
	goto loc_82864004;
loc_82864000:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82864004:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8286405c
	if (!ctx.cr6.eq) goto loc_8286405C;
loc_8286400C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_8286401C:
	// addi r11,r31,38
	ctx.r11.s64 = ctx.r31.s64 + 38;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286400c
	if (ctx.cr6.eq) goto loc_8286400C;
	// addi r11,r31,86
	ctx.r11.s64 = ctx.r31.s64 + 86;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864000
	if (ctx.cr6.eq) goto loc_82864000;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82863ff8
	if (ctx.cr6.eq) goto loc_82863FF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864004
	if (!ctx.cr6.eq) goto loc_82864004;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864004
	goto loc_82864004;
loc_8286405C:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82864068"))) PPC_WEAK_FUNC(sub_82864068);
PPC_FUNC_IMPL(__imp__sub_82864068) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x828640c4
	if (ctx.cr6.eq) goto loc_828640C4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828640b4
	if (ctx.cr6.eq) goto loc_828640B4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828640cc
	if (!ctx.cr6.eq) goto loc_828640CC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828640cc
	goto loc_828640CC;
loc_828640B4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828640cc
	goto loc_828640CC;
loc_828640C4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828640CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828386f8
	ctx.lr = 0x828640D4;
	sub_828386F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x828640f4
	if (ctx.cr6.lt) goto loc_828640F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x828640f4
	if (!ctx.cr6.lt) goto loc_828640F4;
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
loc_828640F4:
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

__attribute__((alias("__imp__sub_8286410C"))) PPC_WEAK_FUNC(sub_8286410C);
PPC_FUNC_IMPL(__imp__sub_8286410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82864110"))) PPC_WEAK_FUNC(sub_82864110);
PPC_FUNC_IMPL(__imp__sub_82864110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82864118;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r30,-29532(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r31,48(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x82864174
	if (ctx.cr6.eq) goto loc_82864174;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8286416c
	if (ctx.cr6.eq) goto loc_8286416C;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82864164
	if (ctx.cr6.eq) goto loc_82864164;
	// b 0x82864178
	goto loc_82864178;
loc_82864164:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82864178
	goto loc_82864178;
loc_8286416C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82864178
	goto loc_82864178;
loc_82864174:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82864178:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828386f8
	ctx.lr = 0x82864180;
	sub_828386F8(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x828641b0
	if (ctx.cr6.eq) goto loc_828641B0;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x828641a8
	if (ctx.cr6.eq) goto loc_828641A8;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x828641a0
	if (ctx.cr6.eq) goto loc_828641A0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828641b4
	goto loc_828641B4;
loc_828641A0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828641b4
	goto loc_828641B4;
loc_828641A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828641b4
	goto loc_828641B4;
loc_828641B0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828641B4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r31,344
	ctx.r8.s64 = ctx.r31.s64 + 344;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1404(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1404);
	ctx.f0.f64 = double(temp.f32);
loc_828641D4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8286423c
	if (ctx.cr6.eq) goto loc_8286423C;
	// lwz r11,212(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864210
	if (ctx.cr6.eq) goto loc_82864210;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864208
	if (ctx.cr6.eq) goto loc_82864208;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82864200
	if (ctx.cr6.eq) goto loc_82864200;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82864214
	goto loc_82864214;
loc_82864200:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82864214
	goto loc_82864214;
loc_82864208:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82864214
	goto loc_82864214;
loc_82864210:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82864214:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864330
	if (ctx.cr6.eq) goto loc_82864330;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864314
	if (ctx.cr6.eq) goto loc_82864314;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286430c
	if (ctx.cr6.eq) goto loc_8286430C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864318
	if (!ctx.cr6.eq) goto loc_82864318;
loc_82864234:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864318
	goto loc_82864318;
loc_8286423C:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82864270
	if (ctx.cr6.eq) goto loc_82864270;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82864268
	if (ctx.cr6.eq) goto loc_82864268;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82864260
	if (ctx.cr6.eq) goto loc_82864260;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82864274
	goto loc_82864274;
loc_82864260:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864274
	goto loc_82864274;
loc_82864268:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82864274
	goto loc_82864274;
loc_82864270:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82864274:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82864330
	if (ctx.cr6.eq) goto loc_82864330;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828642ac
	if (ctx.cr6.eq) goto loc_828642AC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828642a4
	if (ctx.cr6.eq) goto loc_828642A4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286429c
	if (ctx.cr6.eq) goto loc_8286429C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828642b0
	goto loc_828642B0;
loc_8286429C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828642b0
	goto loc_828642B0;
loc_828642A4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x828642b0
	goto loc_828642B0;
loc_828642AC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_828642B0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x828642e0
	if (ctx.cr6.eq) goto loc_828642E0;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x828642d8
	if (ctx.cr6.eq) goto loc_828642D8;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x828642d0
	if (ctx.cr6.eq) goto loc_828642D0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828642e4
	goto loc_828642E4;
loc_828642D0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828642e4
	goto loc_828642E4;
loc_828642D8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828642e4
	goto loc_828642E4;
loc_828642E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828642E4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82864330
	if (ctx.cr6.eq) goto loc_82864330;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82864314
	if (ctx.cr6.eq) goto loc_82864314;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8286430c
	if (ctx.cr6.eq) goto loc_8286430C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82864234
	if (ctx.cr6.eq) goto loc_82864234;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82864318
	goto loc_82864318;
loc_8286430C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82864318
	goto loc_82864318;
loc_82864314:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82864318:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1404(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1404);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8286434c
	if (ctx.cr6.gt) goto loc_8286434C;
loc_82864330:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// blt cr6,0x828641d4
	if (ctx.cr6.lt) goto loc_828641D4;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_8286434C:
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

__attribute__((alias("__imp__sub_8286435C"))) PPC_WEAK_FUNC(sub_8286435C);
PPC_FUNC_IMPL(__imp__sub_8286435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82864360"))) PPC_WEAK_FUNC(sub_82864360);
PPC_FUNC_IMPL(__imp__sub_82864360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82864368;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r7,r8,-29532
	ctx.r7.s64 = ctx.r8.s64 + -29532;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,-29532(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x828643dc
	if (ctx.cr6.eq) goto loc_828643DC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x828643d4
	if (ctx.cr6.eq) goto loc_828643D4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x828643cc
	if (ctx.cr6.eq) goto loc_828643CC;
	// b 0x828643e0
	goto loc_828643E0;
loc_828643CC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828643e0
	goto loc_828643E0;
loc_828643D4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x828643e0
	goto loc_828643E0;
loc_828643DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_828643E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828386f8
	ctx.lr = 0x828643E8;
	sub_828386F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82864400
	if (ctx.cr6.eq) goto loc_82864400;
	// addi r11,r27,139
	ctx.r11.s64 = ctx.r27.s64 + 139;
	// addi r10,r26,139
	ctx.r10.s64 = ctx.r26.s64 + 139;
	// b 0x82864408
	goto loc_82864408;
loc_82864400:
	// addi r11,r27,86
	ctx.r11.s64 = ctx.r27.s64 + 86;
	// addi r10,r26,86
	ctx.r10.s64 = ctx.r26.s64 + 86;
loc_82864408:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864448
	if (ctx.cr6.eq) goto loc_82864448;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864440
	if (ctx.cr6.eq) goto loc_82864440;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82864438
	if (ctx.cr6.eq) goto loc_82864438;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8286444c
	goto loc_8286444C;
loc_82864438:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8286444c
	goto loc_8286444C;
loc_82864440:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8286444c
	goto loc_8286444C;
loc_82864448:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8286444C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864490
	if (ctx.cr6.eq) goto loc_82864490;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8286447c
	if (ctx.cr6.eq) goto loc_8286447C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864474
	if (ctx.cr6.eq) goto loc_82864474;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864480
	if (!ctx.cr6.eq) goto loc_82864480;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864480
	goto loc_82864480;
loc_82864474:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82864480
	goto loc_82864480;
loc_8286447C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82864480:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1404(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1404);
	ctx.f0.f64 = double(temp.f32);
loc_82864490:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828644c0
	if (ctx.cr6.eq) goto loc_828644C0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828644b8
	if (ctx.cr6.eq) goto loc_828644B8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828644b0
	if (ctx.cr6.eq) goto loc_828644B0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828644c4
	goto loc_828644C4;
loc_828644B0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828644c4
	goto loc_828644C4;
loc_828644B8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828644c4
	goto loc_828644C4;
loc_828644C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828644C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82864510
	if (ctx.cr6.eq) goto loc_82864510;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828644fc
	if (ctx.cr6.eq) goto loc_828644FC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828644f4
	if (ctx.cr6.eq) goto loc_828644F4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828644ec
	if (ctx.cr6.eq) goto loc_828644EC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82864500
	goto loc_82864500;
loc_828644EC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864500
	goto loc_82864500;
loc_828644F4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82864500
	goto loc_82864500;
loc_828644FC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82864500:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1404(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1404);
	ctx.f13.f64 = double(temp.f32);
loc_82864510:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8286459c
	if (ctx.cr6.gt) goto loc_8286459C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82864590
	if (ctx.cr6.lt) goto loc_82864590;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82864538
	if (!ctx.cr6.eq) goto loc_82864538;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82864548
	if (ctx.cr6.gt) goto loc_82864548;
loc_82864538:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82864548:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82864578
	if (ctx.cr6.eq) goto loc_82864578;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82864570
	if (ctx.cr6.eq) goto loc_82864570;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82864568
	if (ctx.cr6.eq) goto loc_82864568;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x8286457c
	goto loc_8286457C;
loc_82864568:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8286457c
	goto loc_8286457C;
loc_82864570:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x8286457c
	goto loc_8286457C;
loc_82864578:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8286457C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x828385d0
	ctx.lr = 0x82864584;
	sub_828385D0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8286459c
	if (!ctx.cr6.eq) goto loc_8286459C;
loc_82864590:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_8286459C:
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828645A8"))) PPC_WEAK_FUNC(sub_828645A8);
PPC_FUNC_IMPL(__imp__sub_828645A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828645B0;
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
	// lwz r4,532(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 532);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82864620
	if (!ctx.cr6.gt) goto loc_82864620;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82864608;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82864618
	if (ctx.cr6.eq) goto loc_82864618;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82864618;
	sub_827CC4E0(ctx, base);
loc_82864618:
	// lwz r3,532(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 532);
	// bl 0x82bf2318
	ctx.lr = 0x82864620;
	sub_82BF2318(ctx, base);
loc_82864620:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r11,532(r27)
	PPC_STORE_U32(ctx.r27.u32 + 532, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82864640"))) PPC_WEAK_FUNC(sub_82864640);
PPC_FUNC_IMPL(__imp__sub_82864640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82864648;
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
	// lwz r4,532(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x828646b8
	if (!ctx.cr6.gt) goto loc_828646B8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x828646A0;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828646b8
	if (ctx.cr6.eq) goto loc_828646B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828646B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828646B8:
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

__attribute__((alias("__imp__sub_828646D0"))) PPC_WEAK_FUNC(sub_828646D0);
PPC_FUNC_IMPL(__imp__sub_828646D0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r31,r11,344
	ctx.r31.s64 = ctx.r11.s64 + 344;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_828646FC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82864728
	if (ctx.cr6.eq) goto loc_82864728;
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286475c
	if (ctx.cr6.eq) goto loc_8286475C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82864754
	if (ctx.cr6.eq) goto loc_82864754;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286474c
	if (ctx.cr6.eq) goto loc_8286474C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82864760
	goto loc_82864760;
loc_82864728:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8286475c
	if (ctx.cr6.eq) goto loc_8286475C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82864754
	if (ctx.cr6.eq) goto loc_82864754;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8286474c
	if (ctx.cr6.eq) goto loc_8286474C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82864760
	goto loc_82864760;
loc_8286474C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82864760
	goto loc_82864760;
loc_82864754:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82864760
	goto loc_82864760;
loc_8286475C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82864760:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828647b4
	if (ctx.cr6.eq) goto loc_828647B4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82864794
	if (ctx.cr6.eq) goto loc_82864794;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82864790
	if (ctx.cr6.eq) goto loc_82864790;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82864788
	if (ctx.cr6.eq) goto loc_82864788;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82864794
	goto loc_82864794;
loc_82864788:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864794
	goto loc_82864794;
loc_82864790:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82864794:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r5,230
	ctx.r10.s64 = ctx.r5.s64 + 230;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_828647B4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x828646fc
	if (!ctx.cr0.eq) goto loc_828646FC;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828647CC"))) PPC_WEAK_FUNC(sub_828647CC);
PPC_FUNC_IMPL(__imp__sub_828647CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828647D0"))) PPC_WEAK_FUNC(sub_828647D0);
PPC_FUNC_IMPL(__imp__sub_828647D0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,344
	ctx.r9.s64 = ctx.r11.s64 + 344;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828647FC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864830
	if (ctx.cr6.eq) goto loc_82864830;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864828
	if (ctx.cr6.eq) goto loc_82864828;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82864820
	if (ctx.cr6.eq) goto loc_82864820;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82864834
	goto loc_82864834;
loc_82864820:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82864834
	goto loc_82864834;
loc_82864828:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82864834
	goto loc_82864834;
loc_82864830:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82864834:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864880
	if (ctx.cr6.eq) goto loc_82864880;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864864
	if (ctx.cr6.eq) goto loc_82864864;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8286485c
	if (ctx.cr6.eq) goto loc_8286485C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864868
	if (!ctx.cr6.eq) goto loc_82864868;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864868
	goto loc_82864868;
loc_8286485C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82864868
	goto loc_82864868;
loc_82864864:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82864868:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82864938
	if (ctx.cr6.eq) goto loc_82864938;
loc_82864880:
	// lwz r11,412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 412);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82864938
	if (ctx.cr6.eq) goto loc_82864938;
	// lwz r11,212(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828648c0
	if (ctx.cr6.eq) goto loc_828648C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828648b8
	if (ctx.cr6.eq) goto loc_828648B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828648b0
	if (ctx.cr6.eq) goto loc_828648B0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828648c4
	goto loc_828648C4;
loc_828648B0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828648c4
	goto loc_828648C4;
loc_828648B8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828648c4
	goto loc_828648C4;
loc_828648C0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_828648C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864910
	if (ctx.cr6.eq) goto loc_82864910;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828648f4
	if (ctx.cr6.eq) goto loc_828648F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828648ec
	if (ctx.cr6.eq) goto loc_828648EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828648f8
	if (!ctx.cr6.eq) goto loc_828648F8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828648f8
	goto loc_828648F8;
loc_828648EC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828648f8
	goto loc_828648F8;
loc_828648F4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828648F8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82864938
	if (ctx.cr6.eq) goto loc_82864938;
loc_82864910:
	// lwz r11,-224(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -224);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82864938
	if (ctx.cr6.eq) goto loc_82864938;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// blt cr6,0x828647fc
	if (ctx.cr6.lt) goto loc_828647FC;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82864938:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864948"))) PPC_WEAK_FUNC(sub_82864948);
PPC_FUNC_IMPL(__imp__sub_82864948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,5
	ctx.r6.s64 = 5;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r7,r11,344
	ctx.r7.s64 = ctx.r11.s64 + 344;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82864974:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x828649a0
	if (ctx.cr6.eq) goto loc_828649A0;
	// lwz r11,212(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 212);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828649d4
	if (ctx.cr6.eq) goto loc_828649D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828649cc
	if (ctx.cr6.eq) goto loc_828649CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828649c4
	if (ctx.cr6.eq) goto loc_828649C4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828649d8
	goto loc_828649D8;
loc_828649A0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828649d4
	if (ctx.cr6.eq) goto loc_828649D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828649cc
	if (ctx.cr6.eq) goto loc_828649CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828649c4
	if (ctx.cr6.eq) goto loc_828649C4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828649d8
	goto loc_828649D8;
loc_828649C4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828649d8
	goto loc_828649D8;
loc_828649CC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828649d8
	goto loc_828649D8;
loc_828649D4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828649D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864a20
	if (ctx.cr6.eq) goto loc_82864A20;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864a08
	if (ctx.cr6.eq) goto loc_82864A08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864a00
	if (ctx.cr6.eq) goto loc_82864A00;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864a0c
	if (!ctx.cr6.eq) goto loc_82864A0C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864a0c
	goto loc_82864A0C;
loc_82864A00:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82864a0c
	goto loc_82864A0C;
loc_82864A08:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82864A0C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82864A20:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82864974
	if (!ctx.cr0.eq) goto loc_82864974;
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864A34"))) PPC_WEAK_FUNC(sub_82864A34);
PPC_FUNC_IMPL(__imp__sub_82864A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82864A38"))) PPC_WEAK_FUNC(sub_82864A38);
PPC_FUNC_IMPL(__imp__sub_82864A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82864A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r28,-29532(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82864A60:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82864a90
	if (ctx.cr6.eq) goto loc_82864A90;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82864a88
	if (ctx.cr6.eq) goto loc_82864A88;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82864a80
	if (ctx.cr6.eq) goto loc_82864A80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82864a94
	goto loc_82864A94;
loc_82864A80:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82864a94
	goto loc_82864A94;
loc_82864A88:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x82864a94
	goto loc_82864A94;
loc_82864A90:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82864A94:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82838cb0
	ctx.lr = 0x82864AA0;
	sub_82838CB0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82864ac0
	if (!ctx.cr6.eq) goto loc_82864AC0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82864a60
	if (ctx.cr6.lt) goto loc_82864A60;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82864AC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82838de0
	ctx.lr = 0x82864AC8;
	sub_82838DE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82864AD0"))) PPC_WEAK_FUNC(sub_82864AD0);
PPC_FUNC_IMPL(__imp__sub_82864AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82864AD8;
	__savegprlr_20(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,13192(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r22,13188(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r21,13180(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r20,13184(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82864cc8
	if (!ctx.cr6.eq) goto loc_82864CC8;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// addi r31,r9,580
	ctx.r31.s64 = ctx.r9.s64 + 580;
	// li r24,5
	ctx.r24.s64 = 5;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82864B38:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82864bf0
	if (ctx.cr6.eq) goto loc_82864BF0;
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864b74
	if (ctx.cr6.eq) goto loc_82864B74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864b6c
	if (ctx.cr6.eq) goto loc_82864B6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82864b64
	if (ctx.cr6.eq) goto loc_82864B64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82864b78
	goto loc_82864B78;
loc_82864B64:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82864b78
	goto loc_82864B78;
loc_82864B6C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82864b78
	goto loc_82864B78;
loc_82864B74:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82864B78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864ca4
	if (ctx.cr6.eq) goto loc_82864CA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82864ca4
	if (!ctx.cr6.eq) goto loc_82864CA4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864bb4
	if (ctx.cr6.eq) goto loc_82864BB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864bac
	if (ctx.cr6.eq) goto loc_82864BAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864bb8
	if (!ctx.cr6.eq) goto loc_82864BB8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864bb8
	goto loc_82864BB8;
loc_82864BAC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82864bb8
	goto loc_82864BB8;
loc_82864BB4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82864BB8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82864ca4
	if (!ctx.cr6.eq) goto loc_82864CA4;
	// lfs f13,1404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82864ca4
	if (ctx.cr6.gt) goto loc_82864CA4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,304(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,304(r9)
	PPC_STORE_U32(ctx.r9.u32 + 304, ctx.r11.u32);
	// b 0x82864c9c
	goto loc_82864C9C;
loc_82864BF0:
	// lwz r11,-236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -236);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864c24
	if (ctx.cr6.eq) goto loc_82864C24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864c1c
	if (ctx.cr6.eq) goto loc_82864C1C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82864c14
	if (ctx.cr6.eq) goto loc_82864C14;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82864c28
	goto loc_82864C28;
loc_82864C14:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82864c28
	goto loc_82864C28;
loc_82864C1C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82864c28
	goto loc_82864C28;
loc_82864C24:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82864C28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864ca4
	if (ctx.cr6.eq) goto loc_82864CA4;
	// lwz r10,-428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -428);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82864ca4
	if (!ctx.cr6.eq) goto loc_82864CA4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864c64
	if (ctx.cr6.eq) goto loc_82864C64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864c5c
	if (ctx.cr6.eq) goto loc_82864C5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864c68
	if (!ctx.cr6.eq) goto loc_82864C68;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864c68
	goto loc_82864C68;
loc_82864C5C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82864c68
	goto loc_82864C68;
loc_82864C64:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82864C68:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82864ca4
	if (!ctx.cr6.eq) goto loc_82864CA4;
	// lfs f13,1404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82864ca4
	if (ctx.cr6.gt) goto loc_82864CA4;
	// stw r30,-428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -428, ctx.r30.u32);
	// lwz r11,300(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 300, ctx.r11.u32);
loc_82864C9C:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82864CA4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82864b38
	if (!ctx.cr0.eq) goto loc_82864B38;
	// addi r11,r5,75
	ctx.r11.s64 = ctx.r5.s64 + 75;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82864cc8
	if (!ctx.cr6.eq) goto loc_82864CC8;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82864CC8:
	// stw r25,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r25.u32);
	// stw r23,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r22.u32);
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82864CE0"))) PPC_WEAK_FUNC(sub_82864CE0);
PPC_FUNC_IMPL(__imp__sub_82864CE0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,5
	ctx.r31.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r5,r11,344
	ctx.r5.s64 = ctx.r11.s64 + 344;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_82864D0C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82864d38
	if (ctx.cr6.eq) goto loc_82864D38;
	// lwz r9,212(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82864d6c
	if (ctx.cr6.eq) goto loc_82864D6C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82864d64
	if (ctx.cr6.eq) goto loc_82864D64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82864d5c
	if (ctx.cr6.eq) goto loc_82864D5C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82864d70
	goto loc_82864D70;
loc_82864D38:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82864d6c
	if (ctx.cr6.eq) goto loc_82864D6C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82864d64
	if (ctx.cr6.eq) goto loc_82864D64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82864d5c
	if (ctx.cr6.eq) goto loc_82864D5C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82864d70
	goto loc_82864D70;
loc_82864D5C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82864d70
	goto loc_82864D70;
loc_82864D64:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82864d70
	goto loc_82864D70;
loc_82864D6C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82864D70:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82864dbc
	if (ctx.cr6.eq) goto loc_82864DBC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82864da4
	if (ctx.cr6.eq) goto loc_82864DA4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82864da0
	if (ctx.cr6.eq) goto loc_82864DA0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82864d98
	if (ctx.cr6.eq) goto loc_82864D98;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82864da4
	goto loc_82864DA4;
loc_82864D98:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864da4
	goto loc_82864DA4;
loc_82864DA0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82864DA4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r6,1132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1132, ctx.r6.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82864DBC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82864d0c
	if (!ctx.cr0.eq) goto loc_82864D0C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864DD0"))) PPC_WEAK_FUNC(sub_82864DD0);
PPC_FUNC_IMPL(__imp__sub_82864DD0) {
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
	// li r31,5
	ctx.r31.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r6,r11,732
	ctx.r6.s64 = ctx.r11.s64 + 732;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82864E08:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82864e38
	if (ctx.cr6.eq) goto loc_82864E38;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82864e30
	if (ctx.cr6.eq) goto loc_82864E30;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82864e28
	if (ctx.cr6.eq) goto loc_82864E28;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82864e3c
	goto loc_82864E3C;
loc_82864E28:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82864e3c
	goto loc_82864E3C;
loc_82864E30:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82864e3c
	goto loc_82864E3C;
loc_82864E38:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82864E3C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82864e68
	if (ctx.cr6.eq) goto loc_82864E68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82864e60
	if (ctx.cr6.eq) goto loc_82864E60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82864e6c
	if (!ctx.cr6.eq) goto loc_82864E6C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82864e6c
	goto loc_82864E6C;
loc_82864E60:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82864e6c
	goto loc_82864E6C;
loc_82864E68:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82864E6C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82864e80
	if (!ctx.cr6.eq) goto loc_82864E80;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82864E80:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82864e08
	if (!ctx.cr0.eq) goto loc_82864E08;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82864eb4
	if (ctx.cr6.eq) goto loc_82864EB4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82864eac
	if (ctx.cr6.eq) goto loc_82864EAC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82864eb8
	if (!ctx.cr6.eq) goto loc_82864EB8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864eb8
	goto loc_82864EB8;
loc_82864EAC:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x82864eb8
	goto loc_82864EB8;
loc_82864EB4:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82864EB8:
	// bl 0x82864a38
	ctx.lr = 0x82864EBC;
	sub_82864A38(ctx, base);
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

__attribute__((alias("__imp__sub_82864ED0"))) PPC_WEAK_FUNC(sub_82864ED0);
PPC_FUNC_IMPL(__imp__sub_82864ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82864ED8;
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
	// lwz r4,984(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 984);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82864f5c
	if (!ctx.cr6.gt) goto loc_82864F5C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82864F30;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82864f40
	if (ctx.cr6.eq) goto loc_82864F40;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82864F40;
	sub_827CC4E0(ctx, base);
loc_82864F40:
	// lwz r3,984(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 984);
	// bl 0x82bf2318
	ctx.lr = 0x82864F48;
	sub_82BF2318(ctx, base);
	// lwz r3,1004(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1004);
	// bl 0x82bf25b8
	ctx.lr = 0x82864F50;
	sub_82BF25B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,984(r27)
	PPC_STORE_U32(ctx.r27.u32 + 984, ctx.r11.u32);
	// stw r11,1004(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1004, ctx.r11.u32);
loc_82864F5C:
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

__attribute__((alias("__imp__sub_82864F74"))) PPC_WEAK_FUNC(sub_82864F74);
PPC_FUNC_IMPL(__imp__sub_82864F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82864F78"))) PPC_WEAK_FUNC(sub_82864F78);
PPC_FUNC_IMPL(__imp__sub_82864F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82864F80;
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
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x82864fdc
	if (ctx.cr6.eq) goto loc_82864FDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,1024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1024, ctx.r11.u32);
	// bl 0x82839340
	ctx.lr = 0x82864FDC;
	sub_82839340(ctx, base);
loc_82864FDC:
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

__attribute__((alias("__imp__sub_82864FF4"))) PPC_WEAK_FUNC(sub_82864FF4);
PPC_FUNC_IMPL(__imp__sub_82864FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82864FF8"))) PPC_WEAK_FUNC(sub_82864FF8);
PPC_FUNC_IMPL(__imp__sub_82864FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82865000;
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
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8286505c
	if (ctx.cr6.eq) goto loc_8286505C;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82839340
	ctx.lr = 0x82865054;
	sub_82839340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,932(r27)
	PPC_STORE_U32(ctx.r27.u32 + 932, ctx.r11.u32);
loc_8286505C:
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

__attribute__((alias("__imp__sub_82865074"))) PPC_WEAK_FUNC(sub_82865074);
PPC_FUNC_IMPL(__imp__sub_82865074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865078"))) PPC_WEAK_FUNC(sub_82865078);
PPC_FUNC_IMPL(__imp__sub_82865078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82865080;
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
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x828650dc
	if (ctx.cr6.eq) goto loc_828650DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 892, ctx.r11.u32);
	// bl 0x82839340
	ctx.lr = 0x828650DC;
	sub_82839340(ctx, base);
loc_828650DC:
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

__attribute__((alias("__imp__sub_828650F4"))) PPC_WEAK_FUNC(sub_828650F4);
PPC_FUNC_IMPL(__imp__sub_828650F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828650F8"))) PPC_WEAK_FUNC(sub_828650F8);
PPC_FUNC_IMPL(__imp__sub_828650F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82865100;
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
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8286515c
	if (ctx.cr6.eq) goto loc_8286515C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 856, ctx.r11.u32);
	// bl 0x82839340
	ctx.lr = 0x8286515C;
	sub_82839340(ctx, base);
loc_8286515C:
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

__attribute__((alias("__imp__sub_82865174"))) PPC_WEAK_FUNC(sub_82865174);
PPC_FUNC_IMPL(__imp__sub_82865174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865178"))) PPC_WEAK_FUNC(sub_82865178);
PPC_FUNC_IMPL(__imp__sub_82865178) {
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
	// lwz r10,13188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828651d4
	if (ctx.cr6.eq) goto loc_828651D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828651cc
	if (ctx.cr6.eq) goto loc_828651CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828651d8
	if (!ctx.cr6.eq) goto loc_828651D8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828651d8
	goto loc_828651D8;
loc_828651CC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828651d8
	goto loc_828651D8;
loc_828651D4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828651D8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828651f0
	if (ctx.cr6.eq) goto loc_828651F0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828651f4
	if (ctx.cr6.eq) goto loc_828651F4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x828651f4
	goto loc_828651F4;
loc_828651F0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_828651F4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82864dd0
	ctx.lr = 0x828651FC;
	sub_82864DD0(ctx, base);
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

__attribute__((alias("__imp__sub_82865210"))) PPC_WEAK_FUNC(sub_82865210);
PPC_FUNC_IMPL(__imp__sub_82865210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82865218;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828653c4
	if (ctx.cr6.eq) goto loc_828653C4;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addi r27,r11,-29532
	ctx.r27.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// beq cr6,0x82865284
	if (ctx.cr6.eq) goto loc_82865284;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8286527c
	if (ctx.cr6.eq) goto loc_8286527C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82865274
	if (ctx.cr6.eq) goto loc_82865274;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82865288
	goto loc_82865288;
loc_82865274:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82865288
	goto loc_82865288;
loc_8286527C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82865288
	goto loc_82865288;
loc_82865284:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82865288:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828653c4
	if (ctx.cr6.eq) goto loc_828653C4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x828652bc
	if (ctx.cr6.eq) goto loc_828652BC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x828652b8
	if (ctx.cr6.eq) goto loc_828652B8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x828652b0
	if (ctx.cr6.eq) goto loc_828652B0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828652bc
	goto loc_828652BC;
loc_828652B0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828652bc
	goto loc_828652BC;
loc_828652B8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828652BC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x828652CC;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828653c0
	if (!ctx.cr6.eq) goto loc_828653C0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828653c4
	if (ctx.cr6.eq) goto loc_828653C4;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
loc_828652F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82865324
	if (ctx.cr6.eq) goto loc_82865324;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8286531c
	if (ctx.cr6.eq) goto loc_8286531C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82865314
	if (ctx.cr6.eq) goto loc_82865314;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82865328
	goto loc_82865328;
loc_82865314:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82865328
	goto loc_82865328;
loc_8286531C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82865328
	goto loc_82865328;
loc_82865324:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82865328:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828653ac
	if (ctx.cr6.eq) goto loc_828653AC;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82865360
	if (ctx.cr6.eq) goto loc_82865360;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82865358
	if (ctx.cr6.eq) goto loc_82865358;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82865350
	if (ctx.cr6.eq) goto loc_82865350;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82865364
	goto loc_82865364;
loc_82865350:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82865364
	goto loc_82865364;
loc_82865358:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82865364
	goto loc_82865364;
loc_82865360:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82865364:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8286538c
	if (ctx.cr6.eq) goto loc_8286538C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82865390
	if (ctx.cr6.eq) goto loc_82865390;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82865384
	if (ctx.cr6.eq) goto loc_82865384;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82865390
	goto loc_82865390;
loc_82865384:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82865390
	goto loc_82865390;
loc_8286538C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82865390:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x8286539C;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828653c0
	if (!ctx.cr6.eq) goto loc_828653C0;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_828653AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x828652f0
	if (ctx.cr6.lt) goto loc_828652F0;
	// b 0x828653c4
	goto loc_828653C4;
loc_828653C0:
	// li r26,1
	ctx.r26.s64 = 1;
loc_828653C4:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82865420
	if (!ctx.cr6.eq) goto loc_82865420;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x828653f8
	if (!ctx.cr6.eq) goto loc_828653F8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
loc_828653F8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82865420
	if (ctx.cr6.eq) goto loc_82865420;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82865420:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286542C"))) PPC_WEAK_FUNC(sub_8286542C);
PPC_FUNC_IMPL(__imp__sub_8286542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82865430"))) PPC_WEAK_FUNC(sub_82865430);
PPC_FUNC_IMPL(__imp__sub_82865430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82865438;
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
	ctx.lr = 0x82865494;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x828654A0;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x828654AC;
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
	ctx.lr = 0x828654C0;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828654e8
	if (ctx.cr6.eq) goto loc_828654E8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828654e8
	if (!ctx.cr6.eq) goto loc_828654E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x828654E4;
	sub_82BFEA70(ctx, base);
	// stw r3,288(r20)
	PPC_STORE_U32(ctx.r20.u32 + 288, ctx.r3.u32);
loc_828654E8:
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

__attribute__((alias("__imp__sub_82865500"))) PPC_WEAK_FUNC(sub_82865500);
PPC_FUNC_IMPL(__imp__sub_82865500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82865508;
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
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
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
	// lwz r3,13416(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13416);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,296(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 296);
	// bl 0x82becee0
	ctx.lr = 0x82865560;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82865570
	if (!ctx.cr6.eq) goto loc_82865570;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82865578
	goto loc_82865578;
loc_82865570:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_82865578:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82865594"))) PPC_WEAK_FUNC(sub_82865594);
PPC_FUNC_IMPL(__imp__sub_82865594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

