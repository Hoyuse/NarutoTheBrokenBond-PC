#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8280CC40"))) PPC_WEAK_FUNC(sub_8280CC40);
PPC_FUNC_IMPL(__imp__sub_8280CC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280cc6c
	if (ctx.cr6.eq) goto loc_8280CC6C;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280cc6c
	if (ctx.cr6.eq) goto loc_8280CC6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8280cc7c
	if (ctx.cr6.gt) goto loc_8280CC7C;
loc_8280CC6C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,13176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13176);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8280CC7C:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CC84"))) PPC_WEAK_FUNC(sub_8280CC84);
PPC_FUNC_IMPL(__imp__sub_8280CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CC88"))) PPC_WEAK_FUNC(sub_8280CC88);
PPC_FUNC_IMPL(__imp__sub_8280CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8280CC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r10,13188(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,1228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8280ccd0
	if (ctx.cr6.eq) goto loc_8280CCD0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8280cd04
	if (!ctx.cr6.eq) goto loc_8280CD04;
	// lwz r11,1844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// lwz r9,1224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8280cd04
	if (!ctx.cr6.eq) goto loc_8280CD04;
loc_8280CCD0:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280ccf4
	if (ctx.cr6.eq) goto loc_8280CCF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280ccf4
	if (ctx.cr6.eq) goto loc_8280CCF4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8280CCF4:
	// lwz r11,1844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// lwz r9,1224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8280cd90
	if (!ctx.cr6.eq) goto loc_8280CD90;
loc_8280CD04:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8280cda0
	if (!ctx.cr6.eq) goto loc_8280CDA0;
	// lwz r11,1844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,1224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8280cd60
	if (ctx.cr6.eq) goto loc_8280CD60;
	// addi r11,r11,331
	ctx.r11.s64 = ctx.r11.s64 + 331;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8280cd60
	if (ctx.cr6.eq) goto loc_8280CD60;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82808750
	ctx.lr = 0x8280CD50;
	sub_82808750(ctx, base);
	// cmpwi cr6,r3,1000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1000, ctx.xer);
	// bne cr6,0x8280cda4
	if (!ctx.cr6.eq) goto loc_8280CDA4;
	// lwz r10,13188(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// stw r30,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r30.u32);
loc_8280CD60:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280cda0
	if (ctx.cr6.eq) goto loc_8280CDA0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280cda0
	if (ctx.cr6.eq) goto loc_8280CDA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8280CD90:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,13176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13176);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8280CDA0:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8280CDA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280CDAC"))) PPC_WEAK_FUNC(sub_8280CDAC);
PPC_FUNC_IMPL(__imp__sub_8280CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CDB0"))) PPC_WEAK_FUNC(sub_8280CDB0);
PPC_FUNC_IMPL(__imp__sub_8280CDB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CDB8"))) PPC_WEAK_FUNC(sub_8280CDB8);
PPC_FUNC_IMPL(__imp__sub_8280CDB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CDC0"))) PPC_WEAK_FUNC(sub_8280CDC0);
PPC_FUNC_IMPL(__imp__sub_8280CDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r10.u32);
	// stw r10,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CDE0"))) PPC_WEAK_FUNC(sub_8280CDE0);
PPC_FUNC_IMPL(__imp__sub_8280CDE0) {
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
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,264(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 264, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CE18"))) PPC_WEAK_FUNC(sub_8280CE18);
PPC_FUNC_IMPL(__imp__sub_8280CE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 496, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CE2C"))) PPC_WEAK_FUNC(sub_8280CE2C);
PPC_FUNC_IMPL(__imp__sub_8280CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CE30"))) PPC_WEAK_FUNC(sub_8280CE30);
PPC_FUNC_IMPL(__imp__sub_8280CE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,496(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 496);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CE54"))) PPC_WEAK_FUNC(sub_8280CE54);
PPC_FUNC_IMPL(__imp__sub_8280CE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CE58"))) PPC_WEAK_FUNC(sub_8280CE58);
PPC_FUNC_IMPL(__imp__sub_8280CE58) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r5,30
	ctx.r11.s64 = ctx.r5.s64 * 30;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CE64"))) PPC_WEAK_FUNC(sub_8280CE64);
PPC_FUNC_IMPL(__imp__sub_8280CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CE68"))) PPC_WEAK_FUNC(sub_8280CE68);
PPC_FUNC_IMPL(__imp__sub_8280CE68) {
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
	// stfs f0,588(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 588, temp.u32);
	// stw r11,116(r7)
	PPC_STORE_U32(ctx.r7.u32 + 116, ctx.r11.u32);
	// stfs f0,656(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 656, temp.u32);
	// stw r11,336(r7)
	PPC_STORE_U32(ctx.r7.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280CE94"))) PPC_WEAK_FUNC(sub_8280CE94);
PPC_FUNC_IMPL(__imp__sub_8280CE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280CE98"))) PPC_WEAK_FUNC(sub_8280CE98);
PPC_FUNC_IMPL(__imp__sub_8280CE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8280CEA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,-29532(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,596(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 596);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8280cf04
	if (!ctx.cr6.eq) goto loc_8280CF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8280cf1c
	if (ctx.cr6.eq) goto loc_8280CF1C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8280cf14
	if (ctx.cr6.eq) goto loc_8280CF14;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8280cf0c
	if (ctx.cr6.eq) goto loc_8280CF0C;
loc_8280CF04:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280cf20
	goto loc_8280CF20;
loc_8280CF0C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8280cf20
	goto loc_8280CF20;
loc_8280CF14:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280cf20
	goto loc_8280CF20;
loc_8280CF1C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8280CF20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280cfd8
	if (ctx.cr6.eq) goto loc_8280CFD8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8280cf50
	if (ctx.cr6.eq) goto loc_8280CF50;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8280cf48
	if (ctx.cr6.eq) goto loc_8280CF48;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8280cf54
	if (!ctx.cr6.eq) goto loc_8280CF54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8280cf54
	goto loc_8280CF54;
loc_8280CF48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8280cf54
	goto loc_8280CF54;
loc_8280CF50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8280CF54:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82beb878
	ctx.lr = 0x8280CF5C;
	sub_82BEB878(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8280cf8c
	if (ctx.cr6.eq) goto loc_8280CF8C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8280cf84
	if (ctx.cr6.eq) goto loc_8280CF84;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8280cf7c
	if (ctx.cr6.eq) goto loc_8280CF7C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280cf90
	goto loc_8280CF90;
loc_8280CF7C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8280cf90
	goto loc_8280CF90;
loc_8280CF84:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280cf90
	goto loc_8280CF90;
loc_8280CF8C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8280CF90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280cfd8
	if (ctx.cr6.eq) goto loc_8280CFD8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8280cfc0
	if (ctx.cr6.eq) goto loc_8280CFC0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8280cfb8
	if (ctx.cr6.eq) goto loc_8280CFB8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8280cfc4
	if (!ctx.cr6.eq) goto loc_8280CFC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8280cfc4
	goto loc_8280CFC4;
loc_8280CFB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8280cfc4
	goto loc_8280CFC4;
loc_8280CFC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8280CFC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x8280CFCC;
	sub_82804410(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8280CFD8:
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280D004"))) PPC_WEAK_FUNC(sub_8280D004);
PPC_FUNC_IMPL(__imp__sub_8280D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D008"))) PPC_WEAK_FUNC(sub_8280D008);
PPC_FUNC_IMPL(__imp__sub_8280D008) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r31,r11,868
	ctx.r31.s64 = ctx.r11.s64 + 868;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_8280D044:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8280d078
	if (ctx.cr6.eq) goto loc_8280D078;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8280d070
	if (ctx.cr6.eq) goto loc_8280D070;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8280d068
	if (ctx.cr6.eq) goto loc_8280D068;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8280d07c
	goto loc_8280D07C;
loc_8280D068:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8280d07c
	goto loc_8280D07C;
loc_8280D070:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280d07c
	goto loc_8280D07C;
loc_8280D078:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8280D07C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280d0bc
	if (ctx.cr6.eq) goto loc_8280D0BC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8280d0ac
	if (ctx.cr6.eq) goto loc_8280D0AC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8280d0b0
	if (ctx.cr6.eq) goto loc_8280D0B0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8280d0a4
	if (ctx.cr6.eq) goto loc_8280D0A4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8280d0b0
	goto loc_8280D0B0;
loc_8280D0A4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8280d0b0
	goto loc_8280D0B0;
loc_8280D0AC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8280D0B0:
	// bl 0x82803550
	ctx.lr = 0x8280D0B4;
	sub_82803550(ctx, base);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_8280D0BC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8280d044
	if (!ctx.cr0.eq) goto loc_8280D044;
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

__attribute__((alias("__imp__sub_8280D0E0"))) PPC_WEAK_FUNC(sub_8280D0E0);
PPC_FUNC_IMPL(__imp__sub_8280D0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280D0E8;
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
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8280d144
	if (!ctx.cr6.eq) goto loc_8280D144;
	// bl 0x828040c8
	ctx.lr = 0x8280D13C;
	sub_828040C8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x8280d14c
	goto loc_8280D14C;
loc_8280D144:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8280D14C:
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280D164"))) PPC_WEAK_FUNC(sub_8280D164);
PPC_FUNC_IMPL(__imp__sub_8280D164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D168"))) PPC_WEAK_FUNC(sub_8280D168);
PPC_FUNC_IMPL(__imp__sub_8280D168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280d1c8
	if (ctx.cr6.eq) goto loc_8280D1C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280d1a8
	if (ctx.cr6.eq) goto loc_8280D1A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280d1d0
	if (!ctx.cr6.eq) goto loc_8280D1D0;
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
loc_8280D1A8:
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
loc_8280D1C8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8280D1D0:
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

__attribute__((alias("__imp__sub_8280D1E4"))) PPC_WEAK_FUNC(sub_8280D1E4);
PPC_FUNC_IMPL(__imp__sub_8280D1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D1E8"))) PPC_WEAK_FUNC(sub_8280D1E8);
PPC_FUNC_IMPL(__imp__sub_8280D1E8) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8280d168
	ctx.lr = 0x8280D204;
	sub_8280D168(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8280d220
	if (ctx.cr6.eq) goto loc_8280D220;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,660(r9)
	PPC_STORE_U32(ctx.r9.u32 + 660, ctx.r8.u32);
loc_8280D220:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D230"))) PPC_WEAK_FUNC(sub_8280D230);
PPC_FUNC_IMPL(__imp__sub_8280D230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8280d264
	if (ctx.cr6.eq) goto loc_8280D264;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8280d264
	if (!ctx.cr6.eq) goto loc_8280D264;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280D264:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D26C"))) PPC_WEAK_FUNC(sub_8280D26C);
PPC_FUNC_IMPL(__imp__sub_8280D26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D270"))) PPC_WEAK_FUNC(sub_8280D270);
PPC_FUNC_IMPL(__imp__sub_8280D270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 488, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D284"))) PPC_WEAK_FUNC(sub_8280D284);
PPC_FUNC_IMPL(__imp__sub_8280D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D288"))) PPC_WEAK_FUNC(sub_8280D288);
PPC_FUNC_IMPL(__imp__sub_8280D288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,596(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8280d2bc
	if (ctx.cr6.eq) goto loc_8280D2BC;
	// lwz r11,404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8280d2bc
	if (!ctx.cr6.eq) goto loc_8280D2BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280D2BC:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D2C4"))) PPC_WEAK_FUNC(sub_8280D2C4);
PPC_FUNC_IMPL(__imp__sub_8280D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D2C8"))) PPC_WEAK_FUNC(sub_8280D2C8);
PPC_FUNC_IMPL(__imp__sub_8280D2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,852(r9)
	PPC_STORE_U32(ctx.r9.u32 + 852, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D2DC"))) PPC_WEAK_FUNC(sub_8280D2DC);
PPC_FUNC_IMPL(__imp__sub_8280D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D2E0"))) PPC_WEAK_FUNC(sub_8280D2E0);
PPC_FUNC_IMPL(__imp__sub_8280D2E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 344, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D2F4"))) PPC_WEAK_FUNC(sub_8280D2F4);
PPC_FUNC_IMPL(__imp__sub_8280D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D2F8"))) PPC_WEAK_FUNC(sub_8280D2F8);
PPC_FUNC_IMPL(__imp__sub_8280D2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 260, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D30C"))) PPC_WEAK_FUNC(sub_8280D30C);
PPC_FUNC_IMPL(__imp__sub_8280D30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D310"))) PPC_WEAK_FUNC(sub_8280D310);
PPC_FUNC_IMPL(__imp__sub_8280D310) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8280d348
	if (ctx.cr6.eq) goto loc_8280D348;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,844(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 844);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x82be4f40
	ctx.lr = 0x8280D340;
	sub_82BE4F40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8280d360
	if (ctx.cr6.gt) goto loc_8280D360;
loc_8280D348:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8280D360:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D378"))) PPC_WEAK_FUNC(sub_8280D378);
PPC_FUNC_IMPL(__imp__sub_8280D378) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 252, ctx.r11.u32);
	// stw r11,332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D394"))) PPC_WEAK_FUNC(sub_8280D394);
PPC_FUNC_IMPL(__imp__sub_8280D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D398"))) PPC_WEAK_FUNC(sub_8280D398);
PPC_FUNC_IMPL(__imp__sub_8280D398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,304(r9)
	PPC_STORE_U32(ctx.r9.u32 + 304, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D3AC"))) PPC_WEAK_FUNC(sub_8280D3AC);
PPC_FUNC_IMPL(__imp__sub_8280D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D3B0"))) PPC_WEAK_FUNC(sub_8280D3B0);
PPC_FUNC_IMPL(__imp__sub_8280D3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,452(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 452);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D3C8"))) PPC_WEAK_FUNC(sub_8280D3C8);
PPC_FUNC_IMPL(__imp__sub_8280D3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,252(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280d428
	if (ctx.cr6.eq) goto loc_8280D428;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280d408
	if (ctx.cr6.eq) goto loc_8280D408;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280d430
	if (!ctx.cr6.eq) goto loc_8280D430;
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
loc_8280D408:
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
loc_8280D428:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8280D430:
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

__attribute__((alias("__imp__sub_8280D444"))) PPC_WEAK_FUNC(sub_8280D444);
PPC_FUNC_IMPL(__imp__sub_8280D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D448"))) PPC_WEAK_FUNC(sub_8280D448);
PPC_FUNC_IMPL(__imp__sub_8280D448) {
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

__attribute__((alias("__imp__sub_8280D45C"))) PPC_WEAK_FUNC(sub_8280D45C);
PPC_FUNC_IMPL(__imp__sub_8280D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D460"))) PPC_WEAK_FUNC(sub_8280D460);
PPC_FUNC_IMPL(__imp__sub_8280D460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,204(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D478"))) PPC_WEAK_FUNC(sub_8280D478);
PPC_FUNC_IMPL(__imp__sub_8280D478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,824(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 824, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D48C"))) PPC_WEAK_FUNC(sub_8280D48C);
PPC_FUNC_IMPL(__imp__sub_8280D48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D490"))) PPC_WEAK_FUNC(sub_8280D490);
PPC_FUNC_IMPL(__imp__sub_8280D490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,268(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D4A8"))) PPC_WEAK_FUNC(sub_8280D4A8);
PPC_FUNC_IMPL(__imp__sub_8280D4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D4BC"))) PPC_WEAK_FUNC(sub_8280D4BC);
PPC_FUNC_IMPL(__imp__sub_8280D4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D4C0"))) PPC_WEAK_FUNC(sub_8280D4C0);
PPC_FUNC_IMPL(__imp__sub_8280D4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,268(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D4D4"))) PPC_WEAK_FUNC(sub_8280D4D4);
PPC_FUNC_IMPL(__imp__sub_8280D4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D4D8"))) PPC_WEAK_FUNC(sub_8280D4D8);
PPC_FUNC_IMPL(__imp__sub_8280D4D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,500(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 500);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D4F0"))) PPC_WEAK_FUNC(sub_8280D4F0);
PPC_FUNC_IMPL(__imp__sub_8280D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,26592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,508(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8280d550
	if (ctx.cr6.gt) goto loc_8280D550;
	// lwz r9,512(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8280d550
	if (ctx.cr6.gt) goto loc_8280D550;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8280d594
	if (!ctx.cr6.gt) goto loc_8280D594;
loc_8280D550:
	// lfs f13,508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8280D594:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82804270
	ctx.lr = 0x8280D59C;
	sub_82804270(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D5E0"))) PPC_WEAK_FUNC(sub_8280D5E0);
PPC_FUNC_IMPL(__imp__sub_8280D5E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D5F8"))) PPC_WEAK_FUNC(sub_8280D5F8);
PPC_FUNC_IMPL(__imp__sub_8280D5F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,428(r9)
	PPC_STORE_U32(ctx.r9.u32 + 428, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D60C"))) PPC_WEAK_FUNC(sub_8280D60C);
PPC_FUNC_IMPL(__imp__sub_8280D60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D610"))) PPC_WEAK_FUNC(sub_8280D610);
PPC_FUNC_IMPL(__imp__sub_8280D610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,528(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D628"))) PPC_WEAK_FUNC(sub_8280D628);
PPC_FUNC_IMPL(__imp__sub_8280D628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D640"))) PPC_WEAK_FUNC(sub_8280D640);
PPC_FUNC_IMPL(__imp__sub_8280D640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D658"))) PPC_WEAK_FUNC(sub_8280D658);
PPC_FUNC_IMPL(__imp__sub_8280D658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D670"))) PPC_WEAK_FUNC(sub_8280D670);
PPC_FUNC_IMPL(__imp__sub_8280D670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,596(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r4.u32);
	// stw r10,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D698"))) PPC_WEAK_FUNC(sub_8280D698);
PPC_FUNC_IMPL(__imp__sub_8280D698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,836(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 836);
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

__attribute__((alias("__imp__sub_8280D6BC"))) PPC_WEAK_FUNC(sub_8280D6BC);
PPC_FUNC_IMPL(__imp__sub_8280D6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D6C0"))) PPC_WEAK_FUNC(sub_8280D6C0);
PPC_FUNC_IMPL(__imp__sub_8280D6C0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82803550
	ctx.lr = 0x8280D6D8;
	sub_82803550(ctx, base);
	// bl 0x8280d008
	ctx.lr = 0x8280D6DC;
	sub_8280D008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D6EC"))) PPC_WEAK_FUNC(sub_8280D6EC);
PPC_FUNC_IMPL(__imp__sub_8280D6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D6F0"))) PPC_WEAK_FUNC(sub_8280D6F0);
PPC_FUNC_IMPL(__imp__sub_8280D6F0) {
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

__attribute__((alias("__imp__sub_8280D708"))) PPC_WEAK_FUNC(sub_8280D708);
PPC_FUNC_IMPL(__imp__sub_8280D708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,256(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D720"))) PPC_WEAK_FUNC(sub_8280D720);
PPC_FUNC_IMPL(__imp__sub_8280D720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,552(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 552);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280d744
	if (ctx.cr6.eq) goto loc_8280D744;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8280d748
	if (!ctx.cr6.eq) goto loc_8280D748;
loc_8280D744:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8280D748:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D750"))) PPC_WEAK_FUNC(sub_8280D750);
PPC_FUNC_IMPL(__imp__sub_8280D750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,376(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D768"))) PPC_WEAK_FUNC(sub_8280D768);
PPC_FUNC_IMPL(__imp__sub_8280D768) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,552(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 552);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D780"))) PPC_WEAK_FUNC(sub_8280D780);
PPC_FUNC_IMPL(__imp__sub_8280D780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D794"))) PPC_WEAK_FUNC(sub_8280D794);
PPC_FUNC_IMPL(__imp__sub_8280D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D798"))) PPC_WEAK_FUNC(sub_8280D798);
PPC_FUNC_IMPL(__imp__sub_8280D798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x8280d80c
	if (ctx.cr6.eq) goto loc_8280D80C;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bge cr6,0x8280d80c
	if (!ctx.cr6.lt) goto loc_8280D80C;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8280d810
	if (ctx.cr6.gt) goto loc_8280D810;
loc_8280D80C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8280D810:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D818"))) PPC_WEAK_FUNC(sub_8280D818);
PPC_FUNC_IMPL(__imp__sub_8280D818) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stw r8,1684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1684, ctx.r8.u32);
	// stw r7,1688(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1688, ctx.r7.u32);
	// stw r6,1692(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1692, ctx.r6.u32);
	// stw r10,1696(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1696, ctx.r10.u32);
	// stw r10,1700(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1700, ctx.r10.u32);
	// stw r11,1704(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1704, ctx.r11.u32);
	// stw r11,1708(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1708, ctx.r11.u32);
	// stw r11,1712(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1712, ctx.r11.u32);
	// stw r11,1716(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1716, ctx.r11.u32);
	// stw r11,1720(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D864"))) PPC_WEAK_FUNC(sub_8280D864);
PPC_FUNC_IMPL(__imp__sub_8280D864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D868"))) PPC_WEAK_FUNC(sub_8280D868);
PPC_FUNC_IMPL(__imp__sub_8280D868) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8280d898
	if (ctx.cr6.lt) goto loc_8280D898;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bge cr6,0x8280d898
	if (!ctx.cr6.lt) goto loc_8280D898;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,421
	ctx.r10.s64 = ctx.r5.s64 + 421;
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
loc_8280D898:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D8A4"))) PPC_WEAK_FUNC(sub_8280D8A4);
PPC_FUNC_IMPL(__imp__sub_8280D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D8A8"))) PPC_WEAK_FUNC(sub_8280D8A8);
PPC_FUNC_IMPL(__imp__sub_8280D8A8) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// blt cr6,0x8280d8f4
	if (ctx.cr6.lt) goto loc_8280D8F4;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x8280d8f4
	if (!ctx.cr6.lt) goto loc_8280D8F4;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8280d8f4
	if (ctx.cr6.eq) goto loc_8280D8F4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,3788
	ctx.r11.s64 = ctx.r11.s64 + 3788;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8280d8f4
	if (ctx.cr6.eq) goto loc_8280D8F4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8280D8F4:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D8FC"))) PPC_WEAK_FUNC(sub_8280D8FC);
PPC_FUNC_IMPL(__imp__sub_8280D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D900"))) PPC_WEAK_FUNC(sub_8280D900);
PPC_FUNC_IMPL(__imp__sub_8280D900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1676(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1676);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D918"))) PPC_WEAK_FUNC(sub_8280D918);
PPC_FUNC_IMPL(__imp__sub_8280D918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1764(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1764);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D930"))) PPC_WEAK_FUNC(sub_8280D930);
PPC_FUNC_IMPL(__imp__sub_8280D930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,416(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 416);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D948"))) PPC_WEAK_FUNC(sub_8280D948);
PPC_FUNC_IMPL(__imp__sub_8280D948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1760(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1760);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D960"))) PPC_WEAK_FUNC(sub_8280D960);
PPC_FUNC_IMPL(__imp__sub_8280D960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,444
	ctx.r10.s64 = ctx.r4.s64 + 444;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280d9c8
	if (ctx.cr6.eq) goto loc_8280D9C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280d9a8
	if (ctx.cr6.eq) goto loc_8280D9A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280d9d0
	if (!ctx.cr6.eq) goto loc_8280D9D0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,824(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 824, temp.u32);
	// blr 
	return;
loc_8280D9A8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,824(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 824, temp.u32);
	// blr 
	return;
loc_8280D9C8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8280D9D0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,824(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 824, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280D9E4"))) PPC_WEAK_FUNC(sub_8280D9E4);
PPC_FUNC_IMPL(__imp__sub_8280D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280D9E8"))) PPC_WEAK_FUNC(sub_8280D9E8);
PPC_FUNC_IMPL(__imp__sub_8280D9E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,98
	ctx.r10.s64 = ctx.r4.s64 + 98;
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

__attribute__((alias("__imp__sub_8280DA0C"))) PPC_WEAK_FUNC(sub_8280DA0C);
PPC_FUNC_IMPL(__imp__sub_8280DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DA10"))) PPC_WEAK_FUNC(sub_8280DA10);
PPC_FUNC_IMPL(__imp__sub_8280DA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8280da2c
	if (ctx.cr6.lt) goto loc_8280DA2C;
	// cmpwi cr6,r5,500
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 500, ctx.xer);
	// blt cr6,0x8280da38
	if (ctx.cr6.lt) goto loc_8280DA38;
loc_8280DA2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280DA38:
	// addi r10,r5,444
	ctx.r10.s64 = ctx.r5.s64 + 444;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DA4C"))) PPC_WEAK_FUNC(sub_8280DA4C);
PPC_FUNC_IMPL(__imp__sub_8280DA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DA50"))) PPC_WEAK_FUNC(sub_8280DA50);
PPC_FUNC_IMPL(__imp__sub_8280DA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,98
	ctx.r10.s64 = ctx.r4.s64 + 98;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addic. r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8280da74
	if (!ctx.cr0.lt) goto loc_8280DA74;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8280DA74:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DA7C"))) PPC_WEAK_FUNC(sub_8280DA7C);
PPC_FUNC_IMPL(__imp__sub_8280DA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DA80"))) PPC_WEAK_FUNC(sub_8280DA80);
PPC_FUNC_IMPL(__imp__sub_8280DA80) {
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

__attribute__((alias("__imp__sub_8280DA98"))) PPC_WEAK_FUNC(sub_8280DA98);
PPC_FUNC_IMPL(__imp__sub_8280DA98) {
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

__attribute__((alias("__imp__sub_8280DAB0"))) PPC_WEAK_FUNC(sub_8280DAB0);
PPC_FUNC_IMPL(__imp__sub_8280DAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x8280db10
	if (!ctx.cr6.gt) goto loc_8280DB10;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x8280db10
	if (!ctx.cr6.lt) goto loc_8280DB10;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,344
	ctx.r11.s64 = ctx.r9.s64 + 344;
loc_8280DAD4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8280dafc
	if (ctx.cr6.eq) goto loc_8280DAFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// blt cr6,0x8280dad4
	if (ctx.cr6.lt) goto loc_8280DAD4;
	// li r11,451
	ctx.r11.s64 = 451;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280DAFC:
	// addi r11,r10,62
	ctx.r11.s64 = ctx.r10.s64 + 62;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8280db14
	if (!ctx.cr6.eq) goto loc_8280DB14;
loc_8280DB10:
	// li r11,451
	ctx.r11.s64 = 451;
loc_8280DB14:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DB1C"))) PPC_WEAK_FUNC(sub_8280DB1C);
PPC_FUNC_IMPL(__imp__sub_8280DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DB20"))) PPC_WEAK_FUNC(sub_8280DB20);
PPC_FUNC_IMPL(__imp__sub_8280DB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,81
	ctx.r10.s64 = ctx.r5.s64 + 81;
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
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DB44"))) PPC_WEAK_FUNC(sub_8280DB44);
PPC_FUNC_IMPL(__imp__sub_8280DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DB48"))) PPC_WEAK_FUNC(sub_8280DB48);
PPC_FUNC_IMPL(__imp__sub_8280DB48) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8280DB50;
	__savegprlr_25(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,440
	ctx.r9.s64 = 440;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,441
	ctx.r7.s64 = 441;
	// li r6,9
	ctx.r6.s64 = 9;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,442
	ctx.r4.s64 = 442;
	// li r3,36
	ctx.r3.s64 = 36;
	// li r11,443
	ctx.r11.s64 = 443;
	// li r31,33
	ctx.r31.s64 = 33;
	// li r30,444
	ctx.r30.s64 = 444;
	// lwz r5,48(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// li r29,11
	ctx.r29.s64 = 11;
	// li r28,445
	ctx.r28.s64 = 445;
	// li r27,10
	ctx.r27.s64 = 10;
	// li r26,446
	ctx.r26.s64 = 446;
	// li r25,12
	ctx.r25.s64 = 12;
	// stw r10,344(r5)
	PPC_STORE_U32(ctx.r5.u32 + 344, ctx.r10.u32);
	// li r10,447
	ctx.r10.s64 = 447;
	// stw r9,248(r5)
	PPC_STORE_U32(ctx.r5.u32 + 248, ctx.r9.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r8,348(r5)
	PPC_STORE_U32(ctx.r5.u32 + 348, ctx.r8.u32);
	// li r8,448
	ctx.r8.s64 = 448;
	// stw r7,252(r5)
	PPC_STORE_U32(ctx.r5.u32 + 252, ctx.r7.u32);
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r6,352(r5)
	PPC_STORE_U32(ctx.r5.u32 + 352, ctx.r6.u32);
	// li r6,449
	ctx.r6.s64 = 449;
	// stw r4,256(r5)
	PPC_STORE_U32(ctx.r5.u32 + 256, ctx.r4.u32);
	// li r4,42
	ctx.r4.s64 = 42;
	// stw r3,356(r5)
	PPC_STORE_U32(ctx.r5.u32 + 356, ctx.r3.u32);
	// li r3,452
	ctx.r3.s64 = 452;
	// stw r11,260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 260, ctx.r11.u32);
	// stw r31,360(r5)
	PPC_STORE_U32(ctx.r5.u32 + 360, ctx.r31.u32);
	// stw r30,264(r5)
	PPC_STORE_U32(ctx.r5.u32 + 264, ctx.r30.u32);
	// stw r29,364(r5)
	PPC_STORE_U32(ctx.r5.u32 + 364, ctx.r29.u32);
	// stw r28,268(r5)
	PPC_STORE_U32(ctx.r5.u32 + 268, ctx.r28.u32);
	// stw r27,368(r5)
	PPC_STORE_U32(ctx.r5.u32 + 368, ctx.r27.u32);
	// stw r26,272(r5)
	PPC_STORE_U32(ctx.r5.u32 + 272, ctx.r26.u32);
	// stw r25,372(r5)
	PPC_STORE_U32(ctx.r5.u32 + 372, ctx.r25.u32);
	// stw r10,276(r5)
	PPC_STORE_U32(ctx.r5.u32 + 276, ctx.r10.u32);
	// stw r9,376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 376, ctx.r9.u32);
	// stw r8,280(r5)
	PPC_STORE_U32(ctx.r5.u32 + 280, ctx.r8.u32);
	// stw r7,380(r5)
	PPC_STORE_U32(ctx.r5.u32 + 380, ctx.r7.u32);
	// stw r6,284(r5)
	PPC_STORE_U32(ctx.r5.u32 + 284, ctx.r6.u32);
	// stw r4,384(r5)
	PPC_STORE_U32(ctx.r5.u32 + 384, ctx.r4.u32);
	// stw r3,288(r5)
	PPC_STORE_U32(ctx.r5.u32 + 288, ctx.r3.u32);
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280DC10"))) PPC_WEAK_FUNC(sub_8280DC10);
PPC_FUNC_IMPL(__imp__sub_8280DC10) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,19763
	ctx.r11.s64 = 19763;
	// li r9,19706
	ctx.r9.s64 = 19706;
	// li r8,19877
	ctx.r8.s64 = 19877;
	// li r7,19934
	ctx.r7.s64 = 19934;
	// li r6,21728
	ctx.r6.s64 = 21728;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,21768
	ctx.r4.s64 = 21768;
	// li r3,21778
	ctx.r3.s64 = 21778;
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stw r9,1728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1728, ctx.r9.u32);
	// stw r11,1732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1732, ctx.r11.u32);
	// stw r11,1736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1736, ctx.r11.u32);
	// stw r8,1740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1740, ctx.r8.u32);
	// stw r7,1744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1744, ctx.r7.u32);
	// stw r6,1748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1748, ctx.r6.u32);
	// stw r4,1752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1752, ctx.r4.u32);
	// stw r3,1756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1756, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DC5C"))) PPC_WEAK_FUNC(sub_8280DC5C);
PPC_FUNC_IMPL(__imp__sub_8280DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DC60"))) PPC_WEAK_FUNC(sub_8280DC60);
PPC_FUNC_IMPL(__imp__sub_8280DC60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3784(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3784);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,3784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3784, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DC7C"))) PPC_WEAK_FUNC(sub_8280DC7C);
PPC_FUNC_IMPL(__imp__sub_8280DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DC80"))) PPC_WEAK_FUNC(sub_8280DC80);
PPC_FUNC_IMPL(__imp__sub_8280DC80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3784(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3784);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3784, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DC9C"))) PPC_WEAK_FUNC(sub_8280DC9C);
PPC_FUNC_IMPL(__imp__sub_8280DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DCA0"))) PPC_WEAK_FUNC(sub_8280DCA0);
PPC_FUNC_IMPL(__imp__sub_8280DCA0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x8280DCA8;
	__savegprlr_18(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,21809
	ctx.r7.s64 = 21809;
	// li r6,21824
	ctx.r6.s64 = 21824;
	// li r5,21837
	ctx.r5.s64 = 21837;
	// li r4,21850
	ctx.r4.s64 = 21850;
	// li r3,21856
	ctx.r3.s64 = 21856;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,22600
	ctx.r30.s64 = 22600;
	// li r29,21993
	ctx.r29.s64 = 21993;
	// li r28,22037
	ctx.r28.s64 = 22037;
	// li r27,22090
	ctx.r27.s64 = 22090;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r26,22150
	ctx.r26.s64 = 22150;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,420
	ctx.r10.s64 = ctx.r11.s64 + 420;
	// li r25,22601
	ctx.r25.s64 = 22601;
	// li r24,21994
	ctx.r24.s64 = 21994;
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// li r23,22041
	ctx.r23.s64 = 22041;
	// li r22,22094
	ctx.r22.s64 = 22094;
	// mulli r8,r8,124
	ctx.r8.s64 = ctx.r8.s64 * 124;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r21,22154
	ctx.r21.s64 = 22154;
	// li r20,22602
	ctx.r20.s64 = 22602;
	// li r19,21995
	ctx.r19.s64 = 21995;
	// li r18,22045
	ctx.r18.s64 = 22045;
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// li r7,22098
	ctx.r7.s64 = 22098;
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r8,124
	ctx.r8.s64 = ctx.r8.s64 * 124;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// lwz r6,424(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r6,124
	ctx.r8.s64 = ctx.r6.s64 * 124;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r5,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r5.u32);
	// lwz r6,424(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r6,124
	ctx.r8.s64 = ctx.r6.s64 * 124;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r4,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r4.u32);
	// lwz r4,424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r4,124
	ctx.r8.s64 = ctx.r4.s64 * 124;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// stw r31,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r31.u32);
	// lwz r6,424(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r6,112
	ctx.r8.s64 = ctx.r6.s64 * 112;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// lwz r4,424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r4,112
	ctx.r8.s64 = ctx.r4.s64 * 112;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 * 112;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r28,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r28.u32);
	// lwz r5,424(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r5,112
	ctx.r8.s64 = ctx.r5.s64 * 112;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r27,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r27.u32);
	// lwz r3,424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r3,112
	ctx.r8.s64 = ctx.r3.s64 * 112;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r26,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r26.u32);
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// lwz r6,424(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r6,116
	ctx.r8.s64 = ctx.r6.s64 * 116;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r25,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r25.u32);
	// lwz r4,424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r4,116
	ctx.r8.s64 = ctx.r4.s64 * 116;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r8,116
	ctx.r8.s64 = ctx.r8.s64 * 116;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r23,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r23.u32);
	// lwz r5,424(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r5,116
	ctx.r8.s64 = ctx.r5.s64 * 116;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r3,22158
	ctx.r3.s64 = 22158;
	// stw r22,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r22.u32);
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r8,116
	ctx.r8.s64 = ctx.r8.s64 * 116;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r21,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r21.u32);
	// stw r9,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r9.u32);
	// lwz r5,424(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r5,108
	ctx.r8.s64 = ctx.r5.s64 * 108;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r20,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r20.u32);
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r8,108
	ctx.r8.s64 = ctx.r8.s64 * 108;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r19,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r19.u32);
	// lwz r5,424(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r5,108
	ctx.r8.s64 = ctx.r5.s64 * 108;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r18,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r18.u32);
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r8,108
	ctx.r8.s64 = ctx.r8.s64 * 108;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// lwz r5,424(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r8,r5,108
	ctx.r8.s64 = ctx.r5.s64 * 108;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r3,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r3.u32);
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280DE64"))) PPC_WEAK_FUNC(sub_8280DE64);
PPC_FUNC_IMPL(__imp__sub_8280DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DE68"))) PPC_WEAK_FUNC(sub_8280DE68);
PPC_FUNC_IMPL(__imp__sub_8280DE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
loc_8280DE7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8280dea4
	if (ctx.cr6.eq) goto loc_8280DEA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8280de7c
	if (ctx.cr6.lt) goto loc_8280DE7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280DEA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DEB0"))) PPC_WEAK_FUNC(sub_8280DEB0);
PPC_FUNC_IMPL(__imp__sub_8280DEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8280DEB8;
	__savegprlr_21(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r5.u32);
	// stw r5,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r5.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
loc_8280DF0C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8280df2c
	if (ctx.cr6.eq) goto loc_8280DF2C;
	// addi r11,r11,975
	ctx.r11.s64 = ctx.r11.s64 + 975;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8280df3c
	if (!ctx.cr6.lt) goto loc_8280DF3C;
loc_8280DF2C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x8280df0c
	if (!ctx.cr0.lt) goto loc_8280DF0C;
	// b 0x8280df60
	goto loc_8280DF60;
loc_8280DF3C:
	// addi r26,r9,1
	ctx.r26.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// blt cr6,0x8280df60
	if (ctx.cr6.lt) goto loc_8280DF60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,-12936
	ctx.r6.s64 = ctx.r11.s64 + -12936;
	// addi r4,r10,-12620
	ctx.r4.s64 = ctx.r10.s64 + -12620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219e28
	ctx.lr = 0x8280DF60;
	sub_82219E28(ctx, base);
loc_8280DF60:
	// addi r10,r26,56
	ctx.r10.s64 = ctx.r26.s64 + 56;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// bge cr6,0x8280dfa4
	if (!ctx.cr6.lt) goto loc_8280DFA4;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// subfic r10,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8280DF8C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bne 0x8280df8c
	if (!ctx.cr0.eq) goto loc_8280DF8C;
loc_8280DFA4:
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280DFBC"))) PPC_WEAK_FUNC(sub_8280DFBC);
PPC_FUNC_IMPL(__imp__sub_8280DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280DFC0"))) PPC_WEAK_FUNC(sub_8280DFC0);
PPC_FUNC_IMPL(__imp__sub_8280DFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8280dff0
	if (ctx.cr6.eq) goto loc_8280DFF0;
	// addi r10,r10,975
	ctx.r10.s64 = ctx.r10.s64 + 975;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8280dff4
	if (!ctx.cr6.lt) goto loc_8280DFF4;
loc_8280DFF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8280DFF4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280DFFC"))) PPC_WEAK_FUNC(sub_8280DFFC);
PPC_FUNC_IMPL(__imp__sub_8280DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E000"))) PPC_WEAK_FUNC(sub_8280E000);
PPC_FUNC_IMPL(__imp__sub_8280E000) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
loc_8280E024:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8280e054
	if (ctx.cr6.eq) goto loc_8280E054;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8280e024
	if (ctx.cr6.lt) goto loc_8280E024;
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
loc_8280E054:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bge cr6,0x8280e094
	if (!ctx.cr6.lt) goto loc_8280E094;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8280e08c
	if (!ctx.cr6.lt) goto loc_8280E08C;
	// addi r10,r11,55
	ctx.r10.s64 = ctx.r11.s64 + 55;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r7,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r7.s64 = 5 - ctx.r11.s64;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822195b8
	ctx.lr = 0x8280E08C;
	sub_822195B8(ctx, base);
loc_8280E08C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_8280E094:
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

__attribute__((alias("__imp__sub_8280E0A8"))) PPC_WEAK_FUNC(sub_8280E0A8);
PPC_FUNC_IMPL(__imp__sub_8280E0A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8280e108
	if (ctx.cr6.lt) goto loc_8280E108;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bge cr6,0x8280e108
	if (!ctx.cr6.lt) goto loc_8280E108;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,56
	ctx.r10.s64 = ctx.r5.s64 + 56;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8280e0f0
	if (ctx.cr6.lt) goto loc_8280E0F0;
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// blt cr6,0x8280e0fc
	if (ctx.cr6.lt) goto loc_8280E0FC;
loc_8280E0F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280E0FC:
	// addi r11,r11,444
	ctx.r11.s64 = ctx.r11.s64 + 444;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8280E108:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E110"))) PPC_WEAK_FUNC(sub_8280E110);
PPC_FUNC_IMPL(__imp__sub_8280E110) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// addi r9,r31,300
	ctx.r9.s64 = ctx.r31.s64 + 300;
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r4,13188(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_8280E150:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8280e180
	if (ctx.cr6.eq) goto loc_8280E180;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8280e178
	if (ctx.cr6.eq) goto loc_8280E178;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8280e170
	if (ctx.cr6.eq) goto loc_8280E170;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8280e184
	goto loc_8280E184;
loc_8280E170:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8280e184
	goto loc_8280E184;
loc_8280E178:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8280e184
	goto loc_8280E184;
loc_8280E180:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8280E184:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280e1b0
	if (ctx.cr6.eq) goto loc_8280E1B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280e1a8
	if (ctx.cr6.eq) goto loc_8280E1A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280e1b4
	if (!ctx.cr6.eq) goto loc_8280E1B4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8280e1b4
	goto loc_8280E1B4;
loc_8280E1A8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8280e1b4
	goto loc_8280E1B4;
loc_8280E1B0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8280E1B4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8280e1d8
	if (ctx.cr6.eq) goto loc_8280E1D8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// blt cr6,0x8280e150
	if (ctx.cr6.lt) goto loc_8280E150;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8280E1D8:
	// addi r11,r7,75
	ctx.r11.s64 = ctx.r7.s64 + 75;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E1F4"))) PPC_WEAK_FUNC(sub_8280E1F4);
PPC_FUNC_IMPL(__imp__sub_8280E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E1F8"))) PPC_WEAK_FUNC(sub_8280E1F8);
PPC_FUNC_IMPL(__imp__sub_8280E1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8280e25c
	if (ctx.cr6.lt) goto loc_8280E25C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bge cr6,0x8280e25c
	if (!ctx.cr6.lt) goto loc_8280E25C;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8280E25C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E28C"))) PPC_WEAK_FUNC(sub_8280E28C);
PPC_FUNC_IMPL(__imp__sub_8280E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E290"))) PPC_WEAK_FUNC(sub_8280E290);
PPC_FUNC_IMPL(__imp__sub_8280E290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8280E298;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82804410
	ctx.lr = 0x8280E2B0;
	sub_82804410(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82804270
	ctx.lr = 0x8280E2BC;
	sub_82804270(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8280e2f4
	if (ctx.cr6.eq) goto loc_8280E2F4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8280e2e4
	if (ctx.cr6.eq) goto loc_8280E2E4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8280e2dc
	if (ctx.cr6.eq) goto loc_8280E2DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8280e2fc
	goto loc_8280E2FC;
loc_8280E2DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8280e2fc
	goto loc_8280E2FC;
loc_8280E2E4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8280e2fc
	goto loc_8280E2FC;
loc_8280E2F4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8280E2FC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82804410
	ctx.lr = 0x8280E304;
	sub_82804410(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmadds f3,f5,f10,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f2,f9,f0,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280E348"))) PPC_WEAK_FUNC(sub_8280E348);
PPC_FUNC_IMPL(__imp__sub_8280E348) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E354"))) PPC_WEAK_FUNC(sub_8280E354);
PPC_FUNC_IMPL(__imp__sub_8280E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E358"))) PPC_WEAK_FUNC(sub_8280E358);
PPC_FUNC_IMPL(__imp__sub_8280E358) {
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
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E378"))) PPC_WEAK_FUNC(sub_8280E378);
PPC_FUNC_IMPL(__imp__sub_8280E378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
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

__attribute__((alias("__imp__sub_8280E3A8"))) PPC_WEAK_FUNC(sub_8280E3A8);
PPC_FUNC_IMPL(__imp__sub_8280E3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8280e3d8
	if (ctx.cr6.lt) goto loc_8280E3D8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8280e3e8
	if (!ctx.cr6.gt) goto loc_8280E3E8;
loc_8280E3D8:
	// fsel f0,f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8280E3E8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E40C"))) PPC_WEAK_FUNC(sub_8280E40C);
PPC_FUNC_IMPL(__imp__sub_8280E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E410"))) PPC_WEAK_FUNC(sub_8280E410);
PPC_FUNC_IMPL(__imp__sub_8280E410) {
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
	// beq cr6,0x8280e46c
	if (ctx.cr6.eq) goto loc_8280E46C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280e464
	if (ctx.cr6.eq) goto loc_8280E464;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280e470
	if (!ctx.cr6.eq) goto loc_8280E470;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8280e470
	goto loc_8280E470;
loc_8280E464:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8280e470
	goto loc_8280E470;
loc_8280E46C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8280E470:
	// lwz r10,352(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 352);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8280e49c
	if (ctx.cr6.eq) goto loc_8280E49C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8280e494
	if (ctx.cr6.eq) goto loc_8280E494;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8280e4a0
	if (!ctx.cr6.eq) goto loc_8280E4A0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8280e4a0
	goto loc_8280E4A0;
loc_8280E494:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8280e4a0
	goto loc_8280E4A0;
loc_8280E49C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8280E4A0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,352(r6)
	PPC_STORE_U32(ctx.r6.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E4B8"))) PPC_WEAK_FUNC(sub_8280E4B8);
PPC_FUNC_IMPL(__imp__sub_8280E4B8) {
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

__attribute__((alias("__imp__sub_8280E4D0"))) PPC_WEAK_FUNC(sub_8280E4D0);
PPC_FUNC_IMPL(__imp__sub_8280E4D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,2100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E4E4"))) PPC_WEAK_FUNC(sub_8280E4E4);
PPC_FUNC_IMPL(__imp__sub_8280E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E4E8"))) PPC_WEAK_FUNC(sub_8280E4E8);
PPC_FUNC_IMPL(__imp__sub_8280E4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,352(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E500"))) PPC_WEAK_FUNC(sub_8280E500);
PPC_FUNC_IMPL(__imp__sub_8280E500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r5,356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 356, ctx.r5.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280e548
	if (ctx.cr6.eq) goto loc_8280E548;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280e538
	if (ctx.cr6.eq) goto loc_8280E538;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280e550
	if (!ctx.cr6.eq) goto loc_8280E550;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280e550
	goto loc_8280E550;
loc_8280E538:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8280e550
	goto loc_8280E550;
loc_8280E548:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8280E550:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E564"))) PPC_WEAK_FUNC(sub_8280E564);
PPC_FUNC_IMPL(__imp__sub_8280E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E568"))) PPC_WEAK_FUNC(sub_8280E568);
PPC_FUNC_IMPL(__imp__sub_8280E568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E580"))) PPC_WEAK_FUNC(sub_8280E580);
PPC_FUNC_IMPL(__imp__sub_8280E580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,440(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 440, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E5A4"))) PPC_WEAK_FUNC(sub_8280E5A4);
PPC_FUNC_IMPL(__imp__sub_8280E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E5A8"))) PPC_WEAK_FUNC(sub_8280E5A8);
PPC_FUNC_IMPL(__imp__sub_8280E5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280E5B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
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
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,13192(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r26,13188(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r24,13184(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// blt cr6,0x8280e63c
	if (ctx.cr6.lt) goto loc_8280E63C;
	// lfs f0,440(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,26592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x8280e63c
	if (ctx.cr6.lt) goto loc_8280E63C;
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,440(r23)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r23.u32 + 440, temp.u32);
	// bl 0x8221c790
	ctx.lr = 0x8280E624;
	sub_8221C790(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-30868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,448(r23)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r23.u32 + 448, temp.u32);
loc_8280E63C:
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
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280E654"))) PPC_WEAK_FUNC(sub_8280E654);
PPC_FUNC_IMPL(__imp__sub_8280E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E658"))) PPC_WEAK_FUNC(sub_8280E658);
PPC_FUNC_IMPL(__imp__sub_8280E658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-29532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r9,352(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8280e6ac
	if (ctx.cr6.eq) goto loc_8280E6AC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8280e6a4
	if (ctx.cr6.eq) goto loc_8280E6A4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8280e69c
	if (ctx.cr6.eq) goto loc_8280E69C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8280e6b0
	goto loc_8280E6B0;
loc_8280E69C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8280e6b0
	goto loc_8280E6B0;
loc_8280E6A4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8280e6b0
	goto loc_8280E6B0;
loc_8280E6AC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8280E6B0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8280e724
	if (ctx.cr6.eq) goto loc_8280E724;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8280e6e0
	if (ctx.cr6.eq) goto loc_8280E6E0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8280e6d8
	if (ctx.cr6.eq) goto loc_8280E6D8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8280e6e4
	if (!ctx.cr6.eq) goto loc_8280E6E4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8280e6e4
	goto loc_8280E6E4;
loc_8280E6D8:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// b 0x8280e6e4
	goto loc_8280E6E4;
loc_8280E6E0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8280E6E4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8280e710
	if (ctx.cr6.eq) goto loc_8280E710;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8280e70c
	if (ctx.cr6.eq) goto loc_8280E70C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8280e704
	if (ctx.cr6.eq) goto loc_8280E704;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8280e710
	goto loc_8280E710;
loc_8280E704:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280e710
	goto loc_8280E710;
loc_8280E70C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8280E710:
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8280e724
	if (!ctx.cr6.eq) goto loc_8280E724;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280E724:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E72C"))) PPC_WEAK_FUNC(sub_8280E72C);
PPC_FUNC_IMPL(__imp__sub_8280E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E730"))) PPC_WEAK_FUNC(sub_8280E730);
PPC_FUNC_IMPL(__imp__sub_8280E730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2076(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2076);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E748"))) PPC_WEAK_FUNC(sub_8280E748);
PPC_FUNC_IMPL(__imp__sub_8280E748) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x8280e770
	if (ctx.cr6.lt) goto loc_8280E770;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// ble cr6,0x8280e774
	if (!ctx.cr6.gt) goto loc_8280E774;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8280e774
	goto loc_8280E774;
loc_8280E770:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8280E774:
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,2076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E790"))) PPC_WEAK_FUNC(sub_8280E790);
PPC_FUNC_IMPL(__imp__sub_8280E790) {
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
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r4,528
	ctx.r10.s64 = ctx.r4.s64 + 528;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8280e7c4
	if (!ctx.cr6.gt) goto loc_8280E7C4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8280E7C4:
	// addi r10,r4,544
	ctx.r10.s64 = ctx.r4.s64 + 544;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// ble cr6,0x8280e7e4
	if (!ctx.cr6.gt) goto loc_8280E7E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// stw r10,2072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2072, ctx.r10.u32);
loc_8280E7E4:
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8280e7fc
	if (ctx.cr6.eq) goto loc_8280E7FC;
	// stw r10,2300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2300, ctx.r10.u32);
loc_8280E7FC:
	// addi r10,r4,560
	ctx.r10.s64 = ctx.r4.s64 + 560;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8280e814
	if (!ctx.cr6.gt) goto loc_8280E814;
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
loc_8280E814:
	// addi r10,r4,122
	ctx.r10.s64 = ctx.r4.s64 + 122;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8280e82c
	if (!ctx.cr6.gt) goto loc_8280E82C;
	// stw r10,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
loc_8280E82C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8280e840
	if (ctx.cr6.lt) goto loc_8280E840;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// bge cr6,0x8280e840
	if (!ctx.cr6.lt) goto loc_8280E840;
	// stw r5,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r5.u32);
loc_8280E840:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E850"))) PPC_WEAK_FUNC(sub_8280E850);
PPC_FUNC_IMPL(__imp__sub_8280E850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,468(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E868"))) PPC_WEAK_FUNC(sub_8280E868);
PPC_FUNC_IMPL(__imp__sub_8280E868) {
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

__attribute__((alias("__imp__sub_8280E880"))) PPC_WEAK_FUNC(sub_8280E880);
PPC_FUNC_IMPL(__imp__sub_8280E880) {
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

__attribute__((alias("__imp__sub_8280E898"))) PPC_WEAK_FUNC(sub_8280E898);
PPC_FUNC_IMPL(__imp__sub_8280E898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E8B0"))) PPC_WEAK_FUNC(sub_8280E8B0);
PPC_FUNC_IMPL(__imp__sub_8280E8B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E8C8"))) PPC_WEAK_FUNC(sub_8280E8C8);
PPC_FUNC_IMPL(__imp__sub_8280E8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8280e8e4
	if (ctx.cr6.lt) goto loc_8280E8E4;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// blt cr6,0x8280e8f0
	if (ctx.cr6.lt) goto loc_8280E8F0;
loc_8280E8E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280E8F0:
	// addi r10,r5,577
	ctx.r10.s64 = ctx.r5.s64 + 577;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E904"))) PPC_WEAK_FUNC(sub_8280E904);
PPC_FUNC_IMPL(__imp__sub_8280E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E908"))) PPC_WEAK_FUNC(sub_8280E908);
PPC_FUNC_IMPL(__imp__sub_8280E908) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E914"))) PPC_WEAK_FUNC(sub_8280E914);
PPC_FUNC_IMPL(__imp__sub_8280E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E918"))) PPC_WEAK_FUNC(sub_8280E918);
PPC_FUNC_IMPL(__imp__sub_8280E918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8280e938
	if (!ctx.cr6.gt) goto loc_8280E938;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x8280e944
	if (ctx.cr6.lt) goto loc_8280E944;
loc_8280E938:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280E944:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E958"))) PPC_WEAK_FUNC(sub_8280E958);
PPC_FUNC_IMPL(__imp__sub_8280E958) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,348(r9)
	PPC_STORE_U32(ctx.r9.u32 + 348, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E97C"))) PPC_WEAK_FUNC(sub_8280E97C);
PPC_FUNC_IMPL(__imp__sub_8280E97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280E980"))) PPC_WEAK_FUNC(sub_8280E980);
PPC_FUNC_IMPL(__imp__sub_8280E980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280e9a4
	if (ctx.cr6.eq) goto loc_8280E9A4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8280e9a8
	if (!ctx.cr6.eq) goto loc_8280E9A8;
loc_8280E9A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8280E9A8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280E9B0"))) PPC_WEAK_FUNC(sub_8280E9B0);
PPC_FUNC_IMPL(__imp__sub_8280E9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280E9B8;
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
	// lwz r10,76(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x8280ea10
	if (!ctx.cr6.gt) goto loc_8280EA10;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x8280ea1c
	if (ctx.cr6.lt) goto loc_8280EA1C;
loc_8280EA10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x8280ea34
	goto loc_8280EA34;
loc_8280EA1C:
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x827eee58
	ctx.lr = 0x8280EA30;
	sub_827EEE58(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8280EA34:
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280EA4C"))) PPC_WEAK_FUNC(sub_8280EA4C);
PPC_FUNC_IMPL(__imp__sub_8280EA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280EA50"))) PPC_WEAK_FUNC(sub_8280EA50);
PPC_FUNC_IMPL(__imp__sub_8280EA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EA74"))) PPC_WEAK_FUNC(sub_8280EA74);
PPC_FUNC_IMPL(__imp__sub_8280EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280EA78"))) PPC_WEAK_FUNC(sub_8280EA78);
PPC_FUNC_IMPL(__imp__sub_8280EA78) {
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

__attribute__((alias("__imp__sub_8280EA90"))) PPC_WEAK_FUNC(sub_8280EA90);
PPC_FUNC_IMPL(__imp__sub_8280EA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,456(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 456);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EAA8"))) PPC_WEAK_FUNC(sub_8280EAA8);
PPC_FUNC_IMPL(__imp__sub_8280EAA8) {
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

__attribute__((alias("__imp__sub_8280EAC0"))) PPC_WEAK_FUNC(sub_8280EAC0);
PPC_FUNC_IMPL(__imp__sub_8280EAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,480(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 480);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8280eadc
	if (!ctx.cr6.eq) goto loc_8280EADC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8280EADC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EAE4"))) PPC_WEAK_FUNC(sub_8280EAE4);
PPC_FUNC_IMPL(__imp__sub_8280EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280EAE8"))) PPC_WEAK_FUNC(sub_8280EAE8);
PPC_FUNC_IMPL(__imp__sub_8280EAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280EAF0;
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
	// lwz r3,476(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	// bl 0x827eee58
	ctx.lr = 0x8280EB40;
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

__attribute__((alias("__imp__sub_8280EB5C"))) PPC_WEAK_FUNC(sub_8280EB5C);
PPC_FUNC_IMPL(__imp__sub_8280EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280EB60"))) PPC_WEAK_FUNC(sub_8280EB60);
PPC_FUNC_IMPL(__imp__sub_8280EB60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 476);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EB78"))) PPC_WEAK_FUNC(sub_8280EB78);
PPC_FUNC_IMPL(__imp__sub_8280EB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280eb98
	if (ctx.cr6.eq) goto loc_8280EB98;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8280EB98:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EBA4"))) PPC_WEAK_FUNC(sub_8280EBA4);
PPC_FUNC_IMPL(__imp__sub_8280EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280EBA8"))) PPC_WEAK_FUNC(sub_8280EBA8);
PPC_FUNC_IMPL(__imp__sub_8280EBA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,2084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2084, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EBC0"))) PPC_WEAK_FUNC(sub_8280EBC0);
PPC_FUNC_IMPL(__imp__sub_8280EBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2084(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2084);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EBD8"))) PPC_WEAK_FUNC(sub_8280EBD8);
PPC_FUNC_IMPL(__imp__sub_8280EBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280EBE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mulli r9,r5,124
	ctx.r9.s64 = ctx.r5.s64 * 124;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r9,580
	ctx.r3.s64 = ctx.r9.s64 + 580;
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// stw r11,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r11.u32);
	// lbz r9,588(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 588);
	// stw r11,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8280ec64
	if (ctx.cr6.eq) goto loc_8280EC64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280ec64
	if (ctx.cr6.eq) goto loc_8280EC64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8280ec64
	if (ctx.cr6.eq) goto loc_8280EC64;
	// bl 0x827fea90
	ctx.lr = 0x8280EC5C;
	sub_827FEA90(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r8,13232(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13232);
loc_8280EC64:
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8280EC80"))) PPC_WEAK_FUNC(sub_8280EC80);
PPC_FUNC_IMPL(__imp__sub_8280EC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8280EC88;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r23,13192(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
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
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x8280ed10
	if (ctx.cr6.eq) goto loc_8280ED10;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8280ed00
	if (ctx.cr6.eq) goto loc_8280ED00;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8280ecf8
	if (ctx.cr6.eq) goto loc_8280ECF8;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// b 0x8280ed18
	goto loc_8280ED18;
loc_8280ECF8:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x8280ed18
	goto loc_8280ED18;
loc_8280ED00:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8280ed18
	goto loc_8280ED18;
loc_8280ED10:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r24,-29532(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8280ED18:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r26,r11,-15760
	ctx.r26.s64 = ctx.r11.s64 + -15760;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r25,12480(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x8280ED30;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8280ED3C;
	sub_82BC5990(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8280ED48;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r25,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r25.u32);
	// stw r23,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280ED64"))) PPC_WEAK_FUNC(sub_8280ED64);
PPC_FUNC_IMPL(__imp__sub_8280ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280ED68"))) PPC_WEAK_FUNC(sub_8280ED68);
PPC_FUNC_IMPL(__imp__sub_8280ED68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,48(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x8280edb8
	if (ctx.cr6.eq) goto loc_8280EDB8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8280edb0
	if (ctx.cr6.eq) goto loc_8280EDB0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8280eda8
	if (ctx.cr6.eq) goto loc_8280EDA8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8280edbc
	goto loc_8280EDBC;
loc_8280EDA8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280edbc
	goto loc_8280EDBC;
loc_8280EDB0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8280edbc
	goto loc_8280EDBC;
loc_8280EDB8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8280EDBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280ee2c
	if (ctx.cr6.eq) goto loc_8280EE2C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8280edec
	if (ctx.cr6.eq) goto loc_8280EDEC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8280ede4
	if (ctx.cr6.eq) goto loc_8280EDE4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8280edf0
	if (!ctx.cr6.eq) goto loc_8280EDF0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8280edf0
	goto loc_8280EDF0;
loc_8280EDE4:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x8280edf0
	goto loc_8280EDF0;
loc_8280EDEC:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8280EDF0:
	// lwz r9,1552(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1552);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8280ee20
	if (!ctx.cr6.gt) goto loc_8280EE20;
	// addi r11,r7,40
	ctx.r11.s64 = ctx.r7.s64 + 40;
loc_8280EE04:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8280ee24
	if (ctx.cr6.eq) goto loc_8280EE24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8280ee04
	if (ctx.cr6.lt) goto loc_8280EE04;
loc_8280EE20:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8280EE24:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8280EE2C:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EE34"))) PPC_WEAK_FUNC(sub_8280EE34);
PPC_FUNC_IMPL(__imp__sub_8280EE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280EE38"))) PPC_WEAK_FUNC(sub_8280EE38);
PPC_FUNC_IMPL(__imp__sub_8280EE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1552(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1552);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EE50"))) PPC_WEAK_FUNC(sub_8280EE50);
PPC_FUNC_IMPL(__imp__sub_8280EE50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,200(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280EE68"))) PPC_WEAK_FUNC(sub_8280EE68);
PPC_FUNC_IMPL(__imp__sub_8280EE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8280EE70;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// addi r31,r9,-29532
	ctx.r31.s64 = ctx.r9.s64 + -29532;
	// lwz r8,-29532(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r21,13188(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r22,13192(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13192);
	// lwz r20,13180(r24)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r19,13184(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13184);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,13192(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13192, ctx.r30.u32);
	// stw r4,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r4.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8280eefc
	if (ctx.cr6.eq) goto loc_8280EEFC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8280eef4
	if (ctx.cr6.eq) goto loc_8280EEF4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8280eeec
	if (ctx.cr6.eq) goto loc_8280EEEC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280ef00
	goto loc_8280EF00;
loc_8280EEEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8280ef00
	goto loc_8280EF00;
loc_8280EEF4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8280ef00
	goto loc_8280EF00;
loc_8280EEFC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8280EF00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280f0bc
	if (ctx.cr6.eq) goto loc_8280F0BC;
	// lwz r9,1552(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1552);
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// bge cr6,0x8280f0bc
	if (!ctx.cr6.lt) goto loc_8280F0BC;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8280ef44
	if (ctx.cr6.eq) goto loc_8280EF44;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8280ef3c
	if (ctx.cr6.eq) goto loc_8280EF3C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8280ef34
	if (ctx.cr6.eq) goto loc_8280EF34;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280ef48
	goto loc_8280EF48;
loc_8280EF34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8280ef48
	goto loc_8280EF48;
loc_8280EF3C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8280ef48
	goto loc_8280EF48;
loc_8280EF44:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8280EF48:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r3,2084(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2084);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8280efc8
	if (!ctx.cr6.eq) goto loc_8280EFC8;
	// addi r11,r9,10
	ctx.r11.s64 = ctx.r9.s64 + 10;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// beq cr6,0x8280ef9c
	if (ctx.cr6.eq) goto loc_8280EF9C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8280ef94
	if (ctx.cr6.eq) goto loc_8280EF94;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8280ef8c
	if (ctx.cr6.eq) goto loc_8280EF8C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280efa0
	goto loc_8280EFA0;
loc_8280EF8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8280efa0
	goto loc_8280EFA0;
loc_8280EF94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8280efa0
	goto loc_8280EFA0;
loc_8280EF9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280EFA0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r9,2084(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2084, ctx.r9.u32);
	// lwz r11,1552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1552);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r6.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280EFC8:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,2308
	ctx.r27.s64 = 2308;
loc_8280EFD0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8280f000
	if (ctx.cr6.eq) goto loc_8280F000;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8280eff8
	if (ctx.cr6.eq) goto loc_8280EFF8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8280eff0
	if (ctx.cr6.eq) goto loc_8280EFF0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280f004
	goto loc_8280F004;
loc_8280EFF0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8280f004
	goto loc_8280F004;
loc_8280EFF8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8280f004
	goto loc_8280F004;
loc_8280F000:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8280F004:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8280f020
	if (ctx.cr6.lt) goto loc_8280F020;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// blt cr6,0x8280f02c
	if (ctx.cr6.lt) goto loc_8280F02C;
loc_8280F020:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8280f064
	goto loc_8280F064;
loc_8280F02C:
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280f060
	if (ctx.cr6.eq) goto loc_8280F060;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280f058
	if (ctx.cr6.eq) goto loc_8280F058;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8280f050
	if (ctx.cr6.eq) goto loc_8280F050;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8280f064
	goto loc_8280F064;
loc_8280F050:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8280f064
	goto loc_8280F064;
loc_8280F058:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8280f064
	goto loc_8280F064;
loc_8280F060:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8280F064:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8280f0ac
	if (ctx.cr6.eq) goto loc_8280F0AC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280f094
	if (ctx.cr6.eq) goto loc_8280F094;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280f08c
	if (ctx.cr6.eq) goto loc_8280F08C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8280f098
	if (ctx.cr6.eq) goto loc_8280F098;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8280f098
	goto loc_8280F098;
loc_8280F08C:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x8280f098
	goto loc_8280F098;
loc_8280F094:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8280F098:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8280ee68
	ctx.lr = 0x8280F0A0;
	sub_8280EE68(ctx, base);
	// lwz r4,13188(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280F0AC:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r27,2336
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2336, ctx.xer);
	// blt cr6,0x8280efd0
	if (ctx.cr6.lt) goto loc_8280EFD0;
loc_8280F0BC:
	// stw r22,13192(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13192, ctx.r22.u32);
	// stw r20,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280F0D4"))) PPC_WEAK_FUNC(sub_8280F0D4);
PPC_FUNC_IMPL(__imp__sub_8280F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F0D8"))) PPC_WEAK_FUNC(sub_8280F0D8);
PPC_FUNC_IMPL(__imp__sub_8280F0D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1560(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1560);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F0F0"))) PPC_WEAK_FUNC(sub_8280F0F0);
PPC_FUNC_IMPL(__imp__sub_8280F0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8280f110
	if (ctx.cr6.lt) goto loc_8280F110;
	// lwz r10,1552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8280f11c
	if (ctx.cr6.lt) goto loc_8280F11C;
loc_8280F110:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280F11C:
	// addi r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 + 10;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F130"))) PPC_WEAK_FUNC(sub_8280F130);
PPC_FUNC_IMPL(__imp__sub_8280F130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8280F138;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// addi r9,r30,1452
	ctx.r9.s64 = ctx.r30.s64 + 1452;
	// lwz r29,24(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r28,13188(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8280F17C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280f1b0
	if (ctx.cr6.eq) goto loc_8280F1B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280f1a8
	if (ctx.cr6.eq) goto loc_8280F1A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8280f1a0
	if (ctx.cr6.eq) goto loc_8280F1A0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8280f1b4
	goto loc_8280F1B4;
loc_8280F1A0:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8280f1b4
	goto loc_8280F1B4;
loc_8280F1A8:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8280f1b4
	goto loc_8280F1B4;
loc_8280F1B0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8280F1B4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8280f1e4
	if (ctx.cr6.eq) goto loc_8280F1E4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8280f1dc
	if (ctx.cr6.eq) goto loc_8280F1DC;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8280f1d4
	if (ctx.cr6.eq) goto loc_8280F1D4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280f1e8
	goto loc_8280F1E8;
loc_8280F1D4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8280f1e8
	goto loc_8280F1E8;
loc_8280F1DC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8280f1e8
	goto loc_8280F1E8;
loc_8280F1E4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8280F1E8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8280f204
	if (ctx.cr6.eq) goto loc_8280F204;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// blt cr6,0x8280f17c
	if (ctx.cr6.lt) goto loc_8280F17C;
	// b 0x8280f24c
	goto loc_8280F24C;
loc_8280F204:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x8280f234
	if (!ctx.cr6.lt) goto loc_8280F234;
	// addi r10,r11,362
	ctx.r10.s64 = ctx.r11.s64 + 362;
	// addi r9,r11,363
	ctx.r9.s64 = ctx.r11.s64 + 363;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r11,24
	ctx.xer.ca = ctx.r11.u32 <= 24;
	ctx.r8.s64 = 24 - ctx.r11.s64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822195b8
	ctx.lr = 0x8280F234;
	sub_822195B8(ctx, base);
loc_8280F234:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r27,1544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1544, ctx.r27.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8280F24C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8280f27c
	if (ctx.cr6.eq) goto loc_8280F27C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8280f274
	if (ctx.cr6.eq) goto loc_8280F274;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8280f26c
	if (ctx.cr6.eq) goto loc_8280F26C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x8280f280
	goto loc_8280F280;
loc_8280F26C:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x8280f280
	goto loc_8280F280;
loc_8280F274:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// b 0x8280f280
	goto loc_8280F280;
loc_8280F27C:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8280F280:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8280f2b0
	if (ctx.cr6.eq) goto loc_8280F2B0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8280f2a8
	if (ctx.cr6.eq) goto loc_8280F2A8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8280f2b4
	if (!ctx.cr6.eq) goto loc_8280F2B4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8280f2b4
	goto loc_8280F2B4;
loc_8280F2A8:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8280f2b4
	goto loc_8280F2B4;
loc_8280F2B0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8280F2B4:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8280f338
	if (ctx.cr6.eq) goto loc_8280F338;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8280f2ec
	if (ctx.cr6.eq) goto loc_8280F2EC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8280f2e4
	if (ctx.cr6.eq) goto loc_8280F2E4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8280f2dc
	if (ctx.cr6.eq) goto loc_8280F2DC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8280f2f0
	goto loc_8280F2F0;
loc_8280F2DC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8280f2f0
	goto loc_8280F2F0;
loc_8280F2E4:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8280f2f0
	goto loc_8280F2F0;
loc_8280F2EC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8280F2F0:
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280f31c
	if (ctx.cr6.eq) goto loc_8280F31C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280f314
	if (ctx.cr6.eq) goto loc_8280F314;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280f320
	if (!ctx.cr6.eq) goto loc_8280F320;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8280f320
	goto loc_8280F320;
loc_8280F314:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8280f320
	goto loc_8280F320;
loc_8280F31C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8280F320:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x8280f36c
	if (!ctx.cr6.eq) goto loc_8280F36C;
	// stw r27,1548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1548, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_8280F338:
	// lwz r9,1552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8280f360
	if (!ctx.cr6.gt) goto loc_8280F360;
loc_8280F348:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r9,1552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8280f348
	if (ctx.cr6.lt) goto loc_8280F348;
loc_8280F360:
	// stw r27,1552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1552, ctx.r27.u32);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r27,1560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1560, ctx.r27.u32);
loc_8280F36C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280F374"))) PPC_WEAK_FUNC(sub_8280F374);
PPC_FUNC_IMPL(__imp__sub_8280F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F378"))) PPC_WEAK_FUNC(sub_8280F378);
PPC_FUNC_IMPL(__imp__sub_8280F378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,0
	ctx.r7.s64 = 0;
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
	// lwz r11,1548(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1548);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280f3c4
	if (ctx.cr6.eq) goto loc_8280F3C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280f3bc
	if (ctx.cr6.eq) goto loc_8280F3BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280f3c8
	if (!ctx.cr6.eq) goto loc_8280F3C8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280f3c8
	goto loc_8280F3C8;
loc_8280F3BC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8280f3c8
	goto loc_8280F3C8;
loc_8280F3C4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8280F3C8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8280f3f0
	if (ctx.cr6.eq) goto loc_8280F3F0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8280f3e8
	if (ctx.cr6.eq) goto loc_8280F3E8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8280f3f4
	if (ctx.cr6.eq) goto loc_8280F3F4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8280f3f4
	goto loc_8280F3F4;
loc_8280F3E8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x8280f3f4
	goto loc_8280F3F4;
loc_8280F3F0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8280F3F4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8280f40c
	if (!ctx.cr6.eq) goto loc_8280F40C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,1548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1548, ctx.r7.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8280F40C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F414"))) PPC_WEAK_FUNC(sub_8280F414);
PPC_FUNC_IMPL(__imp__sub_8280F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F418"))) PPC_WEAK_FUNC(sub_8280F418);
PPC_FUNC_IMPL(__imp__sub_8280F418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,712(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 712);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F430"))) PPC_WEAK_FUNC(sub_8280F430);
PPC_FUNC_IMPL(__imp__sub_8280F430) {
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

__attribute__((alias("__imp__sub_8280F448"))) PPC_WEAK_FUNC(sub_8280F448);
PPC_FUNC_IMPL(__imp__sub_8280F448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1548(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1548);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280f4a8
	if (ctx.cr6.eq) goto loc_8280F4A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280f488
	if (ctx.cr6.eq) goto loc_8280F488;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280f4b0
	if (!ctx.cr6.eq) goto loc_8280F4B0;
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
loc_8280F488:
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
loc_8280F4A8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8280F4B0:
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

__attribute__((alias("__imp__sub_8280F4C4"))) PPC_WEAK_FUNC(sub_8280F4C4);
PPC_FUNC_IMPL(__imp__sub_8280F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F4C8"))) PPC_WEAK_FUNC(sub_8280F4C8);
PPC_FUNC_IMPL(__imp__sub_8280F4C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8280f4fc
	if (ctx.cr6.lt) goto loc_8280F4FC;
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// bge cr6,0x8280f4fc
	if (!ctx.cr6.lt) goto loc_8280F4FC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,363
	ctx.r10.s64 = ctx.r5.s64 + 363;
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
loc_8280F4FC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F504"))) PPC_WEAK_FUNC(sub_8280F504);
PPC_FUNC_IMPL(__imp__sub_8280F504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F508"))) PPC_WEAK_FUNC(sub_8280F508);
PPC_FUNC_IMPL(__imp__sub_8280F508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 712, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F520"))) PPC_WEAK_FUNC(sub_8280F520);
PPC_FUNC_IMPL(__imp__sub_8280F520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1568(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1568);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280F538"))) PPC_WEAK_FUNC(sub_8280F538);
PPC_FUNC_IMPL(__imp__sub_8280F538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x8280F540;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r18,13188(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r19,13192(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r17,13180(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r16,13184(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r10,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r10.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// lwz r9,1556(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1556);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8280f634
	if (!ctx.cr6.gt) goto loc_8280F634;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r24,r25,720
	ctx.r24.s64 = ctx.r25.s64 + 720;
	// lis r15,-31942
	ctx.r15.s64 = -2093350912;
	// addi r23,r9,-15760
	ctx.r23.s64 = ctx.r9.s64 + -15760;
	// addi r14,r11,-29532
	ctx.r14.s64 = ctx.r11.s64 + -29532;
	// b 0x8280f5bc
	goto loc_8280F5BC;
loc_8280F5B8:
	// lwz r10,13188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
loc_8280F5BC:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// beq cr6,0x8280f5ec
	if (ctx.cr6.eq) goto loc_8280F5EC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x8280f5e4
	if (ctx.cr6.eq) goto loc_8280F5E4;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x8280f5dc
	if (ctx.cr6.eq) goto loc_8280F5DC;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// b 0x8280f5f0
	goto loc_8280F5F0;
loc_8280F5DC:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x8280f5f0
	goto loc_8280F5F0;
loc_8280F5E4:
	// lwz r30,4(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// b 0x8280f5f0
	goto loc_8280F5F0;
loc_8280F5EC:
	// lwz r30,0(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
loc_8280F5F0:
	// addi r3,r23,28
	ctx.r3.s64 = ctx.r23.s64 + 28;
	// lwz r26,12480(r15)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x8280F5FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r26,4132
	ctx.r4.s64 = ctx.r26.s64 + 4132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8280F608;
	sub_82BC5990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r23,28
	ctx.r3.s64 = ctx.r23.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8280F614;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8280f63c
	if (ctx.cr6.eq) goto loc_8280F63C;
	// lwz r11,1556(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1556);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280f5b8
	if (ctx.cr6.lt) goto loc_8280F5B8;
loc_8280F634:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8280f640
	goto loc_8280F640;
loc_8280F63C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8280F640:
	// stw r18,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r18.u32);
	// stw r16,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r16.u32);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// stw r17,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r17.u32);
	// stw r19,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r19.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280F65C"))) PPC_WEAK_FUNC(sub_8280F65C);
PPC_FUNC_IMPL(__imp__sub_8280F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F660"))) PPC_WEAK_FUNC(sub_8280F660);
PPC_FUNC_IMPL(__imp__sub_8280F660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x8280F668;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
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
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r17,13188(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r18,13192(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lwz r16,13180(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r15,13184(r24)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r3.u32);
	// addi r29,r23,720
	ctx.r29.s64 = ctx.r23.s64 + 720;
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
loc_8280F6C4:
	// lwz r11,1556(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1556);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280f6d8
	if (ctx.cr6.lt) goto loc_8280F6D8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x8280f6e8
	goto loc_8280F6E8;
loc_8280F6D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x827eee58
	ctx.lr = 0x8280F6E4;
	sub_827EEE58(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8280F6E8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x8280f6c4
	if (ctx.cr6.lt) goto loc_8280F6C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,1556(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1556);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,-29852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29852);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x8280f87c
	if (!ctx.cr6.gt) goto loc_8280F87C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r29,13188(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// addi r21,r1,96
	ctx.r21.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8280F72C:
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8280f760
	if (ctx.cr6.eq) goto loc_8280F760;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8280f758
	if (ctx.cr6.eq) goto loc_8280F758;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8280f750
	if (ctx.cr6.eq) goto loc_8280F750;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8280f764
	goto loc_8280F764;
loc_8280F750:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280f764
	goto loc_8280F764;
loc_8280F758:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280f764
	goto loc_8280F764;
loc_8280F760:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8280F764:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280f868
	if (ctx.cr6.eq) goto loc_8280F868;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8280f79c
	if (ctx.cr6.eq) goto loc_8280F79C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8280f794
	if (ctx.cr6.eq) goto loc_8280F794;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8280f78c
	if (ctx.cr6.eq) goto loc_8280F78C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8280f7a0
	goto loc_8280F7A0;
loc_8280F78C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280f7a0
	goto loc_8280F7A0;
loc_8280F794:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280f7a0
	goto loc_8280F7A0;
loc_8280F79C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8280F7A0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,340(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280f7d8
	if (ctx.cr6.eq) goto loc_8280F7D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280f7d0
	if (ctx.cr6.eq) goto loc_8280F7D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280f7dc
	if (!ctx.cr6.eq) goto loc_8280F7DC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8280f7dc
	goto loc_8280F7DC;
loc_8280F7D0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8280f7dc
	goto loc_8280F7DC;
loc_8280F7D8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8280F7DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280f868
	if (ctx.cr6.eq) goto loc_8280F868;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8280f80c
	if (ctx.cr6.eq) goto loc_8280F80C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8280f810
	if (ctx.cr6.eq) goto loc_8280F810;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8280f804
	if (ctx.cr6.eq) goto loc_8280F804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8280f810
	goto loc_8280F810;
loc_8280F804:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8280f810
	goto loc_8280F810;
loc_8280F80C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8280F810:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x8280F818;
	sub_82804410(ctx, base);
	// lfs f0,4(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fabs f0,f2
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8280f868
	if (!ctx.cr6.lt) goto loc_8280F868;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8280F868:
	// lwz r11,1556(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1556);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280f72c
	if (ctx.cr6.lt) goto loc_8280F72C;
loc_8280F87C:
	// stw r22,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r22.u32);
	// stw r18,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r18.u32);
	// stw r16,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r16.u32);
	// stw r15,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r15.u32);
	// stw r17,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r17.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280F89C"))) PPC_WEAK_FUNC(sub_8280F89C);
PPC_FUNC_IMPL(__imp__sub_8280F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F8A0"))) PPC_WEAK_FUNC(sub_8280F8A0);
PPC_FUNC_IMPL(__imp__sub_8280F8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x8280F8A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r22,13192(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r21,13188(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lwz r20,13180(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// lwz r19,13184(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// addi r24,r25,720
	ctx.r24.s64 = ctx.r25.s64 + 720;
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
loc_8280F900:
	// lwz r11,1556(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1556);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280f914
	if (ctx.cr6.lt) goto loc_8280F914;
	// stw r17,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r17.u32);
	// b 0x8280f924
	goto loc_8280F924;
loc_8280F914:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x827eee58
	ctx.lr = 0x8280F920;
	sub_827EEE58(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8280F924:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// blt cr6,0x8280f900
	if (ctx.cr6.lt) goto loc_8280F900;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,1556(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1556);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ffd10
	ctx.lr = 0x8280F948;
	sub_827FFD10(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r22,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r22.u32);
	// stw r20,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r21.u32);
	// bne cr6,0x8280f96c
	if (!ctx.cr6.eq) goto loc_8280F96C;
	// stw r17,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
loc_8280F96C:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280F984"))) PPC_WEAK_FUNC(sub_8280F984);
PPC_FUNC_IMPL(__imp__sub_8280F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280F988"))) PPC_WEAK_FUNC(sub_8280F988);
PPC_FUNC_IMPL(__imp__sub_8280F988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280F990;
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
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
	// blt cr6,0x8280f9e4
	if (ctx.cr6.lt) goto loc_8280F9E4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8280f9f0
	if (ctx.cr6.lt) goto loc_8280F9F0;
loc_8280F9E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x8280fa08
	goto loc_8280FA08;
loc_8280F9F0:
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x827eee58
	ctx.lr = 0x8280FA04;
	sub_827EEE58(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8280FA08:
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FA20"))) PPC_WEAK_FUNC(sub_8280FA20);
PPC_FUNC_IMPL(__imp__sub_8280FA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FA48"))) PPC_WEAK_FUNC(sub_8280FA48);
PPC_FUNC_IMPL(__imp__sub_8280FA48) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FA54"))) PPC_WEAK_FUNC(sub_8280FA54);
PPC_FUNC_IMPL(__imp__sub_8280FA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FA58"))) PPC_WEAK_FUNC(sub_8280FA58);
PPC_FUNC_IMPL(__imp__sub_8280FA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2528(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2528);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,2528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2528, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FA84"))) PPC_WEAK_FUNC(sub_8280FA84);
PPC_FUNC_IMPL(__imp__sub_8280FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FA88"))) PPC_WEAK_FUNC(sub_8280FA88);
PPC_FUNC_IMPL(__imp__sub_8280FA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2528(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2528);
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,2528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2528, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FAB4"))) PPC_WEAK_FUNC(sub_8280FAB4);
PPC_FUNC_IMPL(__imp__sub_8280FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FAB8"))) PPC_WEAK_FUNC(sub_8280FAB8);
PPC_FUNC_IMPL(__imp__sub_8280FAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280FAC0;
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
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8280fb18
	if (ctx.cr6.lt) goto loc_8280FB18;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x8280fb28
	if (ctx.cr6.lt) goto loc_8280FB28;
loc_8280FB18:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-23532
	ctx.r10.s64 = ctx.r11.s64 + -23532;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x8280fb3c
	goto loc_8280FB3C;
loc_8280FB28:
	// mulli r11,r10,124
	ctx.r11.s64 = ctx.r10.s64 * 124;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x827fe9d8
	ctx.lr = 0x8280FB38;
	sub_827FE9D8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8280FB3C:
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280FB54"))) PPC_WEAK_FUNC(sub_8280FB54);
PPC_FUNC_IMPL(__imp__sub_8280FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FB58"))) PPC_WEAK_FUNC(sub_8280FB58);
PPC_FUNC_IMPL(__imp__sub_8280FB58) {
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

__attribute__((alias("__imp__sub_8280FB70"))) PPC_WEAK_FUNC(sub_8280FB70);
PPC_FUNC_IMPL(__imp__sub_8280FB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8280FB78;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// li r3,0
	ctx.r3.s64 = 0;
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
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8280fbdc
	if (ctx.cr6.eq) goto loc_8280FBDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x827eee58
	ctx.lr = 0x8280FBDC;
	sub_827EEE58(ctx, base);
loc_8280FBDC:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8280FBF8"))) PPC_WEAK_FUNC(sub_8280FBF8);
PPC_FUNC_IMPL(__imp__sub_8280FBF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,2528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2528, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FC10"))) PPC_WEAK_FUNC(sub_8280FC10);
PPC_FUNC_IMPL(__imp__sub_8280FC10) {
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

__attribute__((alias("__imp__sub_8280FC28"))) PPC_WEAK_FUNC(sub_8280FC28);
PPC_FUNC_IMPL(__imp__sub_8280FC28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FC2C"))) PPC_WEAK_FUNC(sub_8280FC2C);
PPC_FUNC_IMPL(__imp__sub_8280FC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FC30"))) PPC_WEAK_FUNC(sub_8280FC30);
PPC_FUNC_IMPL(__imp__sub_8280FC30) {
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
	// beq cr6,0x8280fc8c
	if (ctx.cr6.eq) goto loc_8280FC8C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8280fc84
	if (ctx.cr6.eq) goto loc_8280FC84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280fc90
	if (!ctx.cr6.eq) goto loc_8280FC90;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8280fc90
	goto loc_8280FC90;
loc_8280FC84:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8280fc90
	goto loc_8280FC90;
loc_8280FC8C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8280FC90:
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8280fcbc
	if (ctx.cr6.eq) goto loc_8280FCBC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8280fcb4
	if (ctx.cr6.eq) goto loc_8280FCB4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8280fcc0
	if (!ctx.cr6.eq) goto loc_8280FCC0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8280fcc0
	goto loc_8280FCC0;
loc_8280FCB4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8280fcc0
	goto loc_8280FCC0;
loc_8280FCBC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8280FCC0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FCD8"))) PPC_WEAK_FUNC(sub_8280FCD8);
PPC_FUNC_IMPL(__imp__sub_8280FCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// ori r4,r5,16384
	ctx.r4.u64 = ctx.r5.u64 | 16384;
	// sth r4,40(r10)
	PPC_STORE_U16(ctx.r10.u32 + 40, ctx.r4.u16);
	// stfs f0,24(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r11,2528(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2528, ctx.r11.u32);
	// stw r11,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FD2C"))) PPC_WEAK_FUNC(sub_8280FD2C);
PPC_FUNC_IMPL(__imp__sub_8280FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FD30"))) PPC_WEAK_FUNC(sub_8280FD30);
PPC_FUNC_IMPL(__imp__sub_8280FD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// blt cr6,0x8280fd8c
	if (ctx.cr6.lt) goto loc_8280FD8C;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x8280fd8c
	if (ctx.cr6.lt) goto loc_8280FD8C;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8280FD8C:
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

__attribute__((alias("__imp__sub_8280FE08"))) PPC_WEAK_FUNC(sub_8280FE08);
PPC_FUNC_IMPL(__imp__sub_8280FE08) {
	PPC_FUNC_PROLOGUE();
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FE14"))) PPC_WEAK_FUNC(sub_8280FE14);
PPC_FUNC_IMPL(__imp__sub_8280FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FE18"))) PPC_WEAK_FUNC(sub_8280FE18);
PPC_FUNC_IMPL(__imp__sub_8280FE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280FE30"))) PPC_WEAK_FUNC(sub_8280FE30);
PPC_FUNC_IMPL(__imp__sub_8280FE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,8256(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8256);
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

__attribute__((alias("__imp__sub_8280FE54"))) PPC_WEAK_FUNC(sub_8280FE54);
PPC_FUNC_IMPL(__imp__sub_8280FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8280FE58"))) PPC_WEAK_FUNC(sub_8280FE58);
PPC_FUNC_IMPL(__imp__sub_8280FE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,48(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r9,r3,8264
	ctx.r9.s64 = ctx.r3.s64 + 8264;
	// addi r8,r3,5576
	ctx.r8.s64 = ctx.r3.s64 + 5576;
	// addi r7,r3,10432
	ctx.r7.s64 = ctx.r3.s64 + 10432;
	// stw r31,2748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2748, ctx.r31.u32);
	// addi r5,r3,13220
	ctx.r5.s64 = ctx.r3.s64 + 13220;
	// stw r31,5516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5516, ctx.r31.u32);
	// stw r6,8260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8260, ctx.r6.u32);
	// stw r31,12988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12988, ctx.r31.u32);
	// stw r10,8256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8256, ctx.r10.u32);
	// stw r10,1200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1200, ctx.r10.u32);
loc_8280FEA0:
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,9
	ctx.r4.s64 = ctx.r4.s64 + 9;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,9
	ctx.r4.s64 = ctx.r4.s64 + 9;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,9
	ctx.r4.s64 = ctx.r4.s64 + 9;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,10
	ctx.r4.s64 = ctx.r4.s64 + 10;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r4,r4,10
	ctx.r4.s64 = ctx.r4.s64 + 10;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,10
	ctx.r4.s64 = ctx.r4.s64 + 10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// stwx r6,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// blt cr6,0x8280fea0
	if (ctx.cr6.lt) goto loc_8280FEA0;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r31,5428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5428, ctx.r31.u32);
	// addi r9,r3,5524
	ctx.r9.s64 = ctx.r3.s64 + 5524;
	// addi r11,r3,13040
	ctx.r11.s64 = ctx.r3.s64 + 13040;
	// li r8,5
	ctx.r8.s64 = 5;
	// lfs f0,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5556(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5556, temp.u32);
	// stfs f0,5560(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5560, temp.u32);
	// stfs f0,5564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5564, temp.u32);
loc_828100F4:
	// stw r31,-4308(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4308, ctx.r31.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r6,-3440(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3440, ctx.r6.u32);
	// stw r31,7476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7476, ctx.r31.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,-11800(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -11800, temp.u32);
	// stfs f0,-11796(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -11796, temp.u32);
	// stfs f0,-11792(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -11792, temp.u32);
	// stw r31,7084(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7084, ctx.r31.u32);
	// stw r31,-116(r9)
	PPC_STORE_U32(ctx.r9.u32 + -116, ctx.r31.u32);
	// stw r10,-140(r9)
	PPC_STORE_U32(ctx.r9.u32 + -140, ctx.r10.u32);
	// stfs f0,-384(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -384, temp.u32);
	// stfs f0,-380(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -380, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-376(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -376, temp.u32);
	// stfs f0,-10928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -10928, temp.u32);
	// stfs f0,-10924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -10924, temp.u32);
	// stfs f0,-10920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -10920, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x828100f4
	if (!ctx.cr0.eq) goto loc_828100F4;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810158"))) PPC_WEAK_FUNC(sub_82810158);
PPC_FUNC_IMPL(__imp__sub_82810158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r9,r11,2464
	ctx.r9.s64 = ctx.r11.s64 + 2464;
	// stw r10,2496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2496, ctx.r10.u32);
	// stw r10,2464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2464, ctx.r10.u32);
	// stw r10,2468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2468, ctx.r10.u32);
	// stw r10,2472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2472, ctx.r10.u32);
	// stw r10,2476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2476, ctx.r10.u32);
	// stw r10,2480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2480, ctx.r10.u32);
	// stw r10,2456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2456, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281018C"))) PPC_WEAK_FUNC(sub_8281018C);
PPC_FUNC_IMPL(__imp__sub_8281018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810190"))) PPC_WEAK_FUNC(sub_82810190);
PPC_FUNC_IMPL(__imp__sub_82810190) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82810238
	if (ctx.cr6.eq) goto loc_82810238;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8281022c
	if (ctx.cr6.eq) goto loc_8281022C;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x82810220
	if (ctx.cr6.eq) goto loc_82810220;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82810214
	if (ctx.cr6.eq) goto loc_82810214;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82810208
	if (ctx.cr6.eq) goto loc_82810208;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x828101fc
	if (ctx.cr6.eq) goto loc_828101FC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828101f0
	if (ctx.cr6.eq) goto loc_828101F0;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x828101e4
	if (ctx.cr6.eq) goto loc_828101E4;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82810238
	if (!ctx.cr6.eq) goto loc_82810238;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828101E4:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828101F0:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828101FC:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810208:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810214:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810220:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281022C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810238:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810244"))) PPC_WEAK_FUNC(sub_82810244);
PPC_FUNC_IMPL(__imp__sub_82810244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810248"))) PPC_WEAK_FUNC(sub_82810248);
PPC_FUNC_IMPL(__imp__sub_82810248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281024C"))) PPC_WEAK_FUNC(sub_8281024C);
PPC_FUNC_IMPL(__imp__sub_8281024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810250"))) PPC_WEAK_FUNC(sub_82810250);
PPC_FUNC_IMPL(__imp__sub_82810250) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,8172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8172, ctx.r11.u32);
	// stw r11,8176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281026C"))) PPC_WEAK_FUNC(sub_8281026C);
PPC_FUNC_IMPL(__imp__sub_8281026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810270"))) PPC_WEAK_FUNC(sub_82810270);
PPC_FUNC_IMPL(__imp__sub_82810270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810274"))) PPC_WEAK_FUNC(sub_82810274);
PPC_FUNC_IMPL(__imp__sub_82810274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810278"))) PPC_WEAK_FUNC(sub_82810278);
PPC_FUNC_IMPL(__imp__sub_82810278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82810280;
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
	// lwz r3,2452(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 2452);
	// bl 0x82806538
	ctx.lr = 0x828102CC;
	sub_82806538(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828102e8
	if (ctx.cr6.eq) goto loc_828102E8;
	// lwz r3,2452(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 2452);
	// bl 0x828064e0
	ctx.lr = 0x828102DC;
	sub_828064E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x828102ec
	if (!ctx.cr6.eq) goto loc_828102EC;
loc_828102E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828102EC:
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

__attribute__((alias("__imp__sub_82810308"))) PPC_WEAK_FUNC(sub_82810308);
PPC_FUNC_IMPL(__imp__sub_82810308) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r7,r10,-13408
	ctx.r7.s64 = ctx.r10.s64 + -13408;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r8,-13388
	ctx.r11.s64 = ctx.r8.s64 + -13388;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r4,r9,-13400
	ctx.r4.s64 = ctx.r9.s64 + -13400;
	// addi r9,r6,-13376
	ctx.r9.s64 = ctx.r6.s64 + -13376;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r8,48(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r5,r3,-13364
	ctx.r5.s64 = ctx.r3.s64 + -13364;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r10,r10,-13352
	ctx.r10.s64 = ctx.r10.s64 + -13352;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// stw r7,5444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5444, ctx.r7.u32);
	// addi r7,r6,-13340
	ctx.r7.s64 = ctx.r6.s64 + -13340;
	// stw r4,5448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5448, ctx.r4.u32);
	// addi r4,r3,-13328
	ctx.r4.s64 = ctx.r3.s64 + -13328;
	// stw r11,5452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5452, ctx.r11.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r9,5456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5456, ctx.r9.u32);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// stw r5,5460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5460, ctx.r5.u32);
	// addi r11,r31,-13316
	ctx.r11.s64 = ctx.r31.s64 + -13316;
	// stw r10,5464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5464, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r7,5468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5468, ctx.r7.u32);
	// addi r9,r6,-13304
	ctx.r9.s64 = ctx.r6.s64 + -13304;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,5472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5472, ctx.r4.u32);
	// addi r6,r3,13434
	ctx.r6.s64 = ctx.r3.s64 + 13434;
	// stw r11,5476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5476, ctx.r11.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r9,5480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5480, ctx.r9.u32);
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// stw r6,2184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2184, ctx.r6.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r11,r7,-13284
	ctx.r11.s64 = ctx.r7.s64 + -13284;
	// stw r4,2188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2188, ctx.r4.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r5,-13276
	ctx.r9.s64 = ctx.r5.s64 + -13276;
	// stw r11,2192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2192, ctx.r11.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r6,r3,-13268
	ctx.r6.s64 = ctx.r3.s64 + -13268;
	// stw r9,2196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2196, ctx.r9.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r4,r10,-13260
	ctx.r4.s64 = ctx.r10.s64 + -13260;
	// stw r6,2200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2200, ctx.r6.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r11,r7,-13252
	ctx.r11.s64 = ctx.r7.s64 + -13252;
	// stw r4,2204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2204, ctx.r4.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r5,-13244
	ctx.r9.s64 = ctx.r5.s64 + -13244;
	// stw r11,2208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2208, ctx.r11.u32);
	// addi r7,r3,-13236
	ctx.r7.s64 = ctx.r3.s64 + -13236;
	// addi r6,r10,-13228
	ctx.r6.s64 = ctx.r10.s64 + -13228;
	// stw r9,2212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2212, ctx.r9.u32);
	// stw r7,2216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2216, ctx.r7.u32);
	// stw r6,2220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2220, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810410"))) PPC_WEAK_FUNC(sub_82810410);
PPC_FUNC_IMPL(__imp__sub_82810410) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x82810418;
	__savegprlr_15(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,11520
	ctx.r9.s64 = 754974720;
	// lis r8,11520
	ctx.r8.s64 = 754974720;
	// lis r7,11520
	ctx.r7.s64 = 754974720;
	// lis r6,11520
	ctx.r6.s64 = 754974720;
	// lis r5,11520
	ctx.r5.s64 = 754974720;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r11,r9,10712
	ctx.r11.u64 = ctx.r9.u64 | 10712;
	// ori r10,r8,10676
	ctx.r10.u64 = ctx.r8.u64 | 10676;
	// ori r9,r7,9882
	ctx.r9.u64 = ctx.r7.u64 | 9882;
	// ori r8,r6,9747
	ctx.r8.u64 = ctx.r6.u64 | 9747;
	// ori r7,r5,9895
	ctx.r7.u64 = ctx.r5.u64 | 9895;
	// lwz r4,48(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lis r3,11520
	ctx.r3.s64 = 754974720;
	// lis r31,11520
	ctx.r31.s64 = 754974720;
	// lis r30,11520
	ctx.r30.s64 = 754974720;
	// lis r29,11520
	ctx.r29.s64 = 754974720;
	// lis r28,11520
	ctx.r28.s64 = 754974720;
	// lis r27,11520
	ctx.r27.s64 = 754974720;
	// stw r9,1308(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1308, ctx.r9.u32);
	// ori r6,r3,9973
	ctx.r6.u64 = ctx.r3.u64 | 9973;
	// stw r8,1472(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1472, ctx.r8.u32);
	// stw r7,1328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1328, ctx.r7.u32);
	// ori r5,r31,10016
	ctx.r5.u64 = ctx.r31.u64 | 10016;
	// ori r3,r30,10065
	ctx.r3.u64 = ctx.r30.u64 | 10065;
	// stw r6,1436(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1436, ctx.r6.u32);
	// ori r9,r29,10073
	ctx.r9.u64 = ctx.r29.u64 | 10073;
	// stw r5,1440(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1440, ctx.r5.u32);
	// ori r8,r28,10317
	ctx.r8.u64 = ctx.r28.u64 | 10317;
	// stw r3,1312(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1312, ctx.r3.u32);
	// ori r7,r27,10325
	ctx.r7.u64 = ctx.r27.u64 | 10325;
	// stw r9,1348(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1348, ctx.r9.u32);
	// lis r26,11520
	ctx.r26.s64 = 754974720;
	// stw r8,1448(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1448, ctx.r8.u32);
	// lis r25,11520
	ctx.r25.s64 = 754974720;
	// stw r7,1340(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1340, ctx.r7.u32);
	// lis r24,11520
	ctx.r24.s64 = 754974720;
	// stw r10,1524(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1524, ctx.r10.u32);
	// lis r23,11520
	ctx.r23.s64 = 754974720;
	// stw r11,1540(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1540, ctx.r11.u32);
	// lis r22,11520
	ctx.r22.s64 = 754974720;
	// stw r11,1544(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1544, ctx.r11.u32);
	// lis r21,11520
	ctx.r21.s64 = 754974720;
	// stw r11,1548(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1548, ctx.r11.u32);
	// ori r6,r26,10333
	ctx.r6.u64 = ctx.r26.u64 | 10333;
	// stw r11,1560(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1560, ctx.r11.u32);
	// ori r5,r25,10349
	ctx.r5.u64 = ctx.r25.u64 | 10349;
	// stw r11,1564(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1564, ctx.r11.u32);
	// ori r3,r24,10357
	ctx.r3.u64 = ctx.r24.u64 | 10357;
	// stw r6,1364(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1364, ctx.r6.u32);
	// ori r9,r23,10365
	ctx.r9.u64 = ctx.r23.u64 | 10365;
	// stw r5,1480(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1480, ctx.r5.u32);
	// ori r8,r22,10373
	ctx.r8.u64 = ctx.r22.u64 | 10373;
	// stw r3,1484(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1484, ctx.r3.u32);
	// ori r7,r21,10381
	ctx.r7.u64 = ctx.r21.u64 | 10381;
	// stw r9,1476(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1476, ctx.r9.u32);
	// lis r20,11520
	ctx.r20.s64 = 754974720;
	// stw r8,1496(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1496, ctx.r8.u32);
	// lis r19,11520
	ctx.r19.s64 = 754974720;
	// stw r7,1468(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1468, ctx.r7.u32);
	// lis r18,11520
	ctx.r18.s64 = 754974720;
	// stw r10,1568(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1568, ctx.r10.u32);
	// lis r17,11520
	ctx.r17.s64 = 754974720;
	// stw r10,1572(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1572, ctx.r10.u32);
	// lis r16,11520
	ctx.r16.s64 = 754974720;
	// stw r10,1576(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1576, ctx.r10.u32);
	// lis r15,11520
	ctx.r15.s64 = 754974720;
	// stw r10,1580(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1580, ctx.r10.u32);
	// ori r6,r20,10400
	ctx.r6.u64 = ctx.r20.u64 | 10400;
	// stw r10,1584(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1584, ctx.r10.u32);
	// ori r5,r19,10408
	ctx.r5.u64 = ctx.r19.u64 | 10408;
	// ori r3,r18,10436
	ctx.r3.u64 = ctx.r18.u64 | 10436;
	// stw r6,1492(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1492, ctx.r6.u32);
	// ori r9,r17,10444
	ctx.r9.u64 = ctx.r17.u64 | 10444;
	// stw r5,1488(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1488, ctx.r5.u32);
	// ori r8,r16,10452
	ctx.r8.u64 = ctx.r16.u64 | 10452;
	// stw r3,1352(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1352, ctx.r3.u32);
	// ori r7,r15,10460
	ctx.r7.u64 = ctx.r15.u64 | 10460;
	// stw r9,1500(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1500, ctx.r9.u32);
	// stw r8,1344(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1344, ctx.r8.u32);
	// stw r7,1504(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1504, ctx.r7.u32);
	// lis r6,11520
	ctx.r6.s64 = 754974720;
	// stw r10,1668(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1668, ctx.r10.u32);
	// lis r5,1008
	ctx.r5.s64 = 66060288;
	// stw r11,1596(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1596, ctx.r11.u32);
	// ori r9,r6,10963
	ctx.r9.u64 = ctx.r6.u64 | 10963;
	// stw r11,1600(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1600, ctx.r11.u32);
	// ori r3,r5,36157
	ctx.r3.u64 = ctx.r5.u64 | 36157;
	// stw r11,1604(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1604, ctx.r11.u32);
	// stw r11,1608(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1608, ctx.r11.u32);
	// stw r11,1612(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1612, ctx.r11.u32);
	// stw r11,1616(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1616, ctx.r11.u32);
	// stw r11,1620(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1620, ctx.r11.u32);
	// stw r11,1624(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1624, ctx.r11.u32);
	// stw r11,1628(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1628, ctx.r11.u32);
	// stw r11,1632(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1632, ctx.r11.u32);
	// stw r11,1636(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1636, ctx.r11.u32);
	// stw r11,1640(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1640, ctx.r11.u32);
	// stw r11,1644(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1644, ctx.r11.u32);
	// stw r11,1648(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1648, ctx.r11.u32);
	// stw r11,1652(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1652, ctx.r11.u32);
	// stw r11,1656(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1656, ctx.r11.u32);
	// stw r11,1588(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1588, ctx.r11.u32);
	// stw r11,1592(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1592, ctx.r11.u32);
	// stw r11,1672(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1672, ctx.r11.u32);
	// stw r11,1688(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1688, ctx.r11.u32);
	// stw r11,1552(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1552, ctx.r11.u32);
	// stw r11,1556(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1556, ctx.r11.u32);
	// stw r9,1536(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1536, ctx.r9.u32);
	// stw r9,1528(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1528, ctx.r9.u32);
	// stw r9,1532(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1532, ctx.r9.u32);
	// stw r3,1336(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1336, ctx.r3.u32);
	// stw r10,1704(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1704, ctx.r10.u32);
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828105E0"))) PPC_WEAK_FUNC(sub_828105E0);
PPC_FUNC_IMPL(__imp__sub_828105E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828105FC"))) PPC_WEAK_FUNC(sub_828105FC);
PPC_FUNC_IMPL(__imp__sub_828105FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810600"))) PPC_WEAK_FUNC(sub_82810600);
PPC_FUNC_IMPL(__imp__sub_82810600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82810608;
	__savegprlr_24(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
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
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r10.u32);
	// blt cr6,0x82810658
	if (ctx.cr6.lt) goto loc_82810658;
	// cmpwi cr6,r4,60
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 60, ctx.xer);
	// blt cr6,0x82810678
	if (ctx.cr6.lt) goto loc_82810678;
loc_82810658:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,-13440
	ctx.r6.s64 = ctx.r11.s64 + -13440;
	// addi r4,r10,-12620
	ctx.r4.s64 = ctx.r10.s64 + -12620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219e28
	ctx.lr = 0x82810674;
	sub_82219E28(ctx, base);
	// b 0x82810730
	goto loc_82810730;
loc_82810678:
	// lwz r9,2076(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2076);
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// blt cr6,0x828106a4
	if (ctx.cr6.lt) goto loc_828106A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,-13480
	ctx.r6.s64 = ctx.r11.s64 + -13480;
	// addi r4,r10,-12620
	ctx.r4.s64 = ctx.r10.s64 + -12620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219e28
	ctx.lr = 0x828106A0;
	sub_82219E28(ctx, base);
	// b 0x82810730
	goto loc_82810730;
loc_828106A4:
	// lwz r8,4976(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4976);
	// addi r10,r11,4972
	ctx.r10.s64 = ctx.r11.s64 + 4972;
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r4,2076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2076);
	// lwz r9,4976(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4976);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r5,4976(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4976);
	// lwz r4,2076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2076);
	// mullw r9,r5,r4
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r6,4976(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4976);
	// lwz r5,2076(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2076);
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r4,r9,5
	ctx.r4.s64 = ctx.r9.s64 + 5;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r9,4976(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4976);
	// lwz r7,2076(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2076);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addi r6,r9,6
	ctx.r6.s64 = ctx.r9.s64 + 6;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,2076(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2076);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,2076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2076, ctx.r4.u32);
loc_82810730:
	// stw r27,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82810748"))) PPC_WEAK_FUNC(sub_82810748);
PPC_FUNC_IMPL(__imp__sub_82810748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82810750;
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
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
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
	// bl 0x82810600
	ctx.lr = 0x82810798;
	sub_82810600(ctx, base);
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

__attribute__((alias("__imp__sub_828107B0"))) PPC_WEAK_FUNC(sub_828107B0);
PPC_FUNC_IMPL(__imp__sub_828107B0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82810834
	if (ctx.cr6.lt) goto loc_82810834;
	// cmpwi cr6,r4,60
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 60, ctx.xer);
	// bge cr6,0x82810834
	if (!ctx.cr6.lt) goto loc_82810834;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82810834
	if (ctx.cr6.lt) goto loc_82810834;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bge cr6,0x82810834
	if (!ctx.cr6.lt) goto loc_82810834;
	// lwz r3,5580(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5580);
	// addi r10,r11,5576
	ctx.r10.s64 = ctx.r11.s64 + 5576;
	// addi r9,r11,8264
	ctx.r9.s64 = ctx.r11.s64 + 8264;
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r31,r3,r5
	ctx.r31.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r3,r11,10432
	ctx.r3.s64 = ctx.r11.s64 + 10432;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r10,8268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8268);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r9,10436(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10436);
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r7.u32);
loc_82810834:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281083C"))) PPC_WEAK_FUNC(sub_8281083C);
PPC_FUNC_IMPL(__imp__sub_8281083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810840"))) PPC_WEAK_FUNC(sub_82810840);
PPC_FUNC_IMPL(__imp__sub_82810840) {
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
	// lwz r3,13188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// bl 0x82810410
	ctx.lr = 0x82810858;
	sub_82810410(ctx, base);
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

__attribute__((alias("__imp__sub_8281086C"))) PPC_WEAK_FUNC(sub_8281086C);
PPC_FUNC_IMPL(__imp__sub_8281086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810870"))) PPC_WEAK_FUNC(sub_82810870);
PPC_FUNC_IMPL(__imp__sub_82810870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2748(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2748);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810888"))) PPC_WEAK_FUNC(sub_82810888);
PPC_FUNC_IMPL(__imp__sub_82810888) {
	PPC_FUNC_PROLOGUE();
	// li r11,12
	ctx.r11.s64 = 12;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8281095c
	if (ctx.cr6.eq) goto loc_8281095C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82810950
	if (ctx.cr6.eq) goto loc_82810950;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82810944
	if (ctx.cr6.eq) goto loc_82810944;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82810938
	if (ctx.cr6.eq) goto loc_82810938;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8281092c
	if (ctx.cr6.eq) goto loc_8281092C;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82810920
	if (ctx.cr6.eq) goto loc_82810920;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x82810914
	if (ctx.cr6.eq) goto loc_82810914;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x82810908
	if (ctx.cr6.eq) goto loc_82810908;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x828108fc
	if (ctx.cr6.eq) goto loc_828108FC;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x828108f0
	if (ctx.cr6.eq) goto loc_828108F0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x82810960
	if (!ctx.cr6.eq) goto loc_82810960;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828108F0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828108FC:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810908:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810914:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810920:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281092C:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810938:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810944:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810950:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281095C:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82810960:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810968"))) PPC_WEAK_FUNC(sub_82810968);
PPC_FUNC_IMPL(__imp__sub_82810968) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82810e10
	if (ctx.cr6.eq) goto loc_82810E10;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82810e04
	if (ctx.cr6.eq) goto loc_82810E04;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82810df8
	if (ctx.cr6.eq) goto loc_82810DF8;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82810dec
	if (ctx.cr6.eq) goto loc_82810DEC;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82810de0
	if (ctx.cr6.eq) goto loc_82810DE0;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82810dd4
	if (ctx.cr6.eq) goto loc_82810DD4;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x82810dc8
	if (ctx.cr6.eq) goto loc_82810DC8;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x82810dbc
	if (ctx.cr6.eq) goto loc_82810DBC;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x82810db0
	if (ctx.cr6.eq) goto loc_82810DB0;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// beq cr6,0x82810da4
	if (ctx.cr6.eq) goto loc_82810DA4;
	// cmpwi cr6,r5,83
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 83, ctx.xer);
	// beq cr6,0x82810d98
	if (ctx.cr6.eq) goto loc_82810D98;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// beq cr6,0x82810d8c
	if (ctx.cr6.eq) goto loc_82810D8C;
	// cmpwi cr6,r5,79
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 79, ctx.xer);
	// beq cr6,0x82810d80
	if (ctx.cr6.eq) goto loc_82810D80;
	// cmpwi cr6,r5,49
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 49, ctx.xer);
	// beq cr6,0x82810d74
	if (ctx.cr6.eq) goto loc_82810D74;
	// cmpwi cr6,r5,54
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 54, ctx.xer);
	// beq cr6,0x82810d68
	if (ctx.cr6.eq) goto loc_82810D68;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// beq cr6,0x82810d5c
	if (ctx.cr6.eq) goto loc_82810D5C;
	// cmpwi cr6,r5,96
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 96, ctx.xer);
	// beq cr6,0x82810d50
	if (ctx.cr6.eq) goto loc_82810D50;
	// cmpwi cr6,r5,95
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 95, ctx.xer);
	// beq cr6,0x82810d44
	if (ctx.cr6.eq) goto loc_82810D44;
	// cmpwi cr6,r5,93
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 93, ctx.xer);
	// beq cr6,0x82810d38
	if (ctx.cr6.eq) goto loc_82810D38;
	// cmpwi cr6,r5,94
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 94, ctx.xer);
	// beq cr6,0x82810d2c
	if (ctx.cr6.eq) goto loc_82810D2C;
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x82810d20
	if (ctx.cr6.eq) goto loc_82810D20;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// beq cr6,0x82810d14
	if (ctx.cr6.eq) goto loc_82810D14;
	// cmpwi cr6,r5,104
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 104, ctx.xer);
	// beq cr6,0x82810d08
	if (ctx.cr6.eq) goto loc_82810D08;
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x82810cfc
	if (ctx.cr6.eq) goto loc_82810CFC;
	// cmpwi cr6,r5,103
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 103, ctx.xer);
	// beq cr6,0x82810cf0
	if (ctx.cr6.eq) goto loc_82810CF0;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// beq cr6,0x82810ce4
	if (ctx.cr6.eq) goto loc_82810CE4;
	// cmpwi cr6,r5,116
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 116, ctx.xer);
	// beq cr6,0x82810cd8
	if (ctx.cr6.eq) goto loc_82810CD8;
	// cmpwi cr6,r5,126
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 126, ctx.xer);
	// beq cr6,0x82810ccc
	if (ctx.cr6.eq) goto loc_82810CCC;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// beq cr6,0x82810cc0
	if (ctx.cr6.eq) goto loc_82810CC0;
	// cmpwi cr6,r5,120
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 120, ctx.xer);
	// beq cr6,0x82810cb4
	if (ctx.cr6.eq) goto loc_82810CB4;
	// cmpwi cr6,r5,106
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 106, ctx.xer);
	// beq cr6,0x82810ca8
	if (ctx.cr6.eq) goto loc_82810CA8;
	// cmpwi cr6,r5,125
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 125, ctx.xer);
	// beq cr6,0x82810c9c
	if (ctx.cr6.eq) goto loc_82810C9C;
	// cmpwi cr6,r5,132
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 132, ctx.xer);
	// beq cr6,0x82810c90
	if (ctx.cr6.eq) goto loc_82810C90;
	// cmpwi cr6,r5,123
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 123, ctx.xer);
	// beq cr6,0x82810c84
	if (ctx.cr6.eq) goto loc_82810C84;
	// cmpwi cr6,r5,124
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 124, ctx.xer);
	// beq cr6,0x82810c78
	if (ctx.cr6.eq) goto loc_82810C78;
	// cmpwi cr6,r5,134
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 134, ctx.xer);
	// beq cr6,0x82810c6c
	if (ctx.cr6.eq) goto loc_82810C6C;
	// cmpwi cr6,r5,119
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 119, ctx.xer);
	// beq cr6,0x82810c60
	if (ctx.cr6.eq) goto loc_82810C60;
	// cmpwi cr6,r5,130
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 130, ctx.xer);
	// beq cr6,0x82810c54
	if (ctx.cr6.eq) goto loc_82810C54;
	// cmpwi cr6,r5,55
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 55, ctx.xer);
	// beq cr6,0x82810c48
	if (ctx.cr6.eq) goto loc_82810C48;
	// cmpwi cr6,r5,70
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 70, ctx.xer);
	// beq cr6,0x82810c3c
	if (ctx.cr6.eq) goto loc_82810C3C;
	// cmpwi cr6,r5,71
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 71, ctx.xer);
	// beq cr6,0x82810c30
	if (ctx.cr6.eq) goto loc_82810C30;
	// cmpwi cr6,r5,72
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 72, ctx.xer);
	// beq cr6,0x82810c24
	if (ctx.cr6.eq) goto loc_82810C24;
	// cmpwi cr6,r5,73
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 73, ctx.xer);
	// beq cr6,0x82810c18
	if (ctx.cr6.eq) goto loc_82810C18;
	// cmpwi cr6,r5,131
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 131, ctx.xer);
	// beq cr6,0x82810c0c
	if (ctx.cr6.eq) goto loc_82810C0C;
	// cmpwi cr6,r5,136
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 136, ctx.xer);
	// beq cr6,0x82810c00
	if (ctx.cr6.eq) goto loc_82810C00;
	// cmpwi cr6,r5,137
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 137, ctx.xer);
	// beq cr6,0x82810bf4
	if (ctx.cr6.eq) goto loc_82810BF4;
	// cmpwi cr6,r5,142
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 142, ctx.xer);
	// beq cr6,0x82810be8
	if (ctx.cr6.eq) goto loc_82810BE8;
	// cmpwi cr6,r5,143
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 143, ctx.xer);
	// beq cr6,0x82810bdc
	if (ctx.cr6.eq) goto loc_82810BDC;
	// cmpwi cr6,r5,144
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 144, ctx.xer);
	// beq cr6,0x82810bd0
	if (ctx.cr6.eq) goto loc_82810BD0;
	// cmpwi cr6,r5,135
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 135, ctx.xer);
	// beq cr6,0x82810bc4
	if (ctx.cr6.eq) goto loc_82810BC4;
	// cmpwi cr6,r5,138
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 138, ctx.xer);
	// beq cr6,0x82810bb8
	if (ctx.cr6.eq) goto loc_82810BB8;
	// cmpwi cr6,r5,113
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 113, ctx.xer);
	// beq cr6,0x82810bac
	if (ctx.cr6.eq) goto loc_82810BAC;
	// cmpwi cr6,r5,114
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 114, ctx.xer);
	// beq cr6,0x82810ba0
	if (ctx.cr6.eq) goto loc_82810BA0;
	// cmpwi cr6,r5,146
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 146, ctx.xer);
	// beq cr6,0x82810b94
	if (ctx.cr6.eq) goto loc_82810B94;
	// cmpwi cr6,r5,117
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 117, ctx.xer);
	// beq cr6,0x82810b88
	if (ctx.cr6.eq) goto loc_82810B88;
	// cmpwi cr6,r5,118
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 118, ctx.xer);
	// beq cr6,0x82810b7c
	if (ctx.cr6.eq) goto loc_82810B7C;
	// cmpwi cr6,r5,140
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 140, ctx.xer);
	// beq cr6,0x82810b70
	if (ctx.cr6.eq) goto loc_82810B70;
	// cmpwi cr6,r5,50
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 50, ctx.xer);
	// beq cr6,0x82810b64
	if (ctx.cr6.eq) goto loc_82810B64;
	// cmpwi cr6,r5,133
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 133, ctx.xer);
	// beq cr6,0x82810b58
	if (ctx.cr6.eq) goto loc_82810B58;
	// cmpwi cr6,r5,111
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 111, ctx.xer);
	// bne cr6,0x82810e14
	if (!ctx.cr6.eq) goto loc_82810E14;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810B58:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810B64:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810B70:
	// li r11,91
	ctx.r11.s64 = 91;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810B7C:
	// li r11,70
	ctx.r11.s64 = 70;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810B88:
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810B94:
	// li r11,88
	ctx.r11.s64 = 88;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BA0:
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BAC:
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BB8:
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BC4:
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BD0:
	// li r11,83
	ctx.r11.s64 = 83;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BDC:
	// li r11,82
	ctx.r11.s64 = 82;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BE8:
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810BF4:
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C00:
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C0C:
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C18:
	// li r11,77
	ctx.r11.s64 = 77;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C24:
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C30:
	// li r11,75
	ctx.r11.s64 = 75;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C3C:
	// li r11,74
	ctx.r11.s64 = 74;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C48:
	// li r11,73
	ctx.r11.s64 = 73;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C54:
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C60:
	// li r11,71
	ctx.r11.s64 = 71;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C6C:
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C78:
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C84:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C90:
	// li r11,65
	ctx.r11.s64 = 65;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810C9C:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CA8:
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CB4:
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CC0:
	// li r11,61
	ctx.r11.s64 = 61;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CCC:
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CD8:
	// li r11,59
	ctx.r11.s64 = 59;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CE4:
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CF0:
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810CFC:
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D08:
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D14:
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D20:
	// li r11,49
	ctx.r11.s64 = 49;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D2C:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D38:
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D44:
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D50:
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D5C:
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D68:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D74:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D80:
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D8C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810D98:
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DA4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DB0:
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DBC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DC8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DD4:
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DE0:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DEC:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810DF8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810E04:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810E10:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82810E14:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810E1C"))) PPC_WEAK_FUNC(sub_82810E1C);
PPC_FUNC_IMPL(__imp__sub_82810E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82810E20"))) PPC_WEAK_FUNC(sub_82810E20);
PPC_FUNC_IMPL(__imp__sub_82810E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2484(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2484);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810E38"))) PPC_WEAK_FUNC(sub_82810E38);
PPC_FUNC_IMPL(__imp__sub_82810E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,2072(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2072, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82810E4C"))) PPC_WEAK_FUNC(sub_82810E4C);
PPC_FUNC_IMPL(__imp__sub_82810E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

