#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828166B0"))) PPC_WEAK_FUNC(sub_828166B0);
PPC_FUNC_IMPL(__imp__sub_828166B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828166D4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82816708
	if (ctx.cr6.eq) goto loc_82816708;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816700
	if (ctx.cr6.eq) goto loc_82816700;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828166f8
	if (ctx.cr6.eq) goto loc_828166F8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281670c
	goto loc_8281670C;
loc_828166F8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281670c
	goto loc_8281670C;
loc_82816700:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281670c
	goto loc_8281670C;
loc_82816708:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8281670C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281673c
	if (ctx.cr6.eq) goto loc_8281673C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82816734
	if (ctx.cr6.eq) goto loc_82816734;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281672c
	if (ctx.cr6.eq) goto loc_8281672C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82816740
	goto loc_82816740;
loc_8281672C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816740
	goto loc_82816740;
loc_82816734:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82816740
	goto loc_82816740;
loc_8281673C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82816740:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82816764
	if (ctx.cr6.eq) goto loc_82816764;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,100
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 100, ctx.xer);
	// blt cr6,0x828166d4
	if (ctx.cr6.lt) goto loc_828166D4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82816764:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281676C"))) PPC_WEAK_FUNC(sub_8281676C);
PPC_FUNC_IMPL(__imp__sub_8281676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816770"))) PPC_WEAK_FUNC(sub_82816770);
PPC_FUNC_IMPL(__imp__sub_82816770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828167ac
	if (ctx.cr6.eq) goto loc_828167AC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281679c
	if (ctx.cr6.eq) goto loc_8281679C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828167b4
	if (!ctx.cr6.eq) goto loc_828167B4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828167b4
	goto loc_828167B4;
loc_8281679C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828167b4
	goto loc_828167B4;
loc_828167AC:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r5,-29532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_828167B4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828167E0"))) PPC_WEAK_FUNC(sub_828167E0);
PPC_FUNC_IMPL(__imp__sub_828167E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 + 60;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82816804:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82816830
	if (ctx.cr6.eq) goto loc_82816830;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816828
	if (ctx.cr6.eq) goto loc_82816828;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816834
	if (!ctx.cr6.eq) goto loc_82816834;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816834
	goto loc_82816834;
loc_82816828:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82816834
	goto loc_82816834;
loc_82816830:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82816834:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82816858
	if (ctx.cr6.eq) goto loc_82816858;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,100
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 100, ctx.xer);
	// blt cr6,0x82816804
	if (ctx.cr6.lt) goto loc_82816804;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82816858:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816860"))) PPC_WEAK_FUNC(sub_82816860);
PPC_FUNC_IMPL(__imp__sub_82816860) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82816894
	if (ctx.cr6.lt) goto loc_82816894;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// bge cr6,0x82816894
	if (!ctx.cr6.lt) goto loc_82816894;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,15
	ctx.r10.s64 = ctx.r5.s64 + 15;
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
loc_82816894:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281689C"))) PPC_WEAK_FUNC(sub_8281689C);
PPC_FUNC_IMPL(__imp__sub_8281689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828168A0"))) PPC_WEAK_FUNC(sub_828168A0);
PPC_FUNC_IMPL(__imp__sub_828168A0) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82816908
	if (ctx.cr6.eq) goto loc_82816908;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816900
	if (ctx.cr6.eq) goto loc_82816900;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828168f8
	if (ctx.cr6.eq) goto loc_828168F8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8281690c
	goto loc_8281690C;
loc_828168F8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281690c
	goto loc_8281690C;
loc_82816900:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281690c
	goto loc_8281690C;
loc_82816908:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281690C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82816960
	if (ctx.cr6.eq) goto loc_82816960;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8281693c
	if (ctx.cr6.eq) goto loc_8281693C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816940
	if (ctx.cr6.eq) goto loc_82816940;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82816934
	if (ctx.cr6.eq) goto loc_82816934;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x82816940
	goto loc_82816940;
loc_82816934:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82816940
	goto loc_82816940;
loc_8281693C:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82816940:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828166b0
	ctx.lr = 0x82816948;
	sub_828166B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82816960
	if (ctx.cr6.eq) goto loc_82816960;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
loc_82816960:
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

__attribute__((alias("__imp__sub_82816978"))) PPC_WEAK_FUNC(sub_82816978);
PPC_FUNC_IMPL(__imp__sub_82816978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f3,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f7,644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// bne cr6,0x828169ec
	if (!ctx.cr6.eq) goto loc_828169EC;
	// fsubs f3,f6,f2
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fsubs f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fsubs f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// b 0x828169f8
	goto loc_828169F8;
loc_828169EC:
	// fadds f3,f2,f6
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f2,f1,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
loc_828169F8:
	// fadds f13,f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fadds f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816A2C"))) PPC_WEAK_FUNC(sub_82816A2C);
PPC_FUNC_IMPL(__imp__sub_82816A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816A30"))) PPC_WEAK_FUNC(sub_82816A30);
PPC_FUNC_IMPL(__imp__sub_82816A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816A48"))) PPC_WEAK_FUNC(sub_82816A48);
PPC_FUNC_IMPL(__imp__sub_82816A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,780(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816A60"))) PPC_WEAK_FUNC(sub_82816A60);
PPC_FUNC_IMPL(__imp__sub_82816A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1980(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816A78"))) PPC_WEAK_FUNC(sub_82816A78);
PPC_FUNC_IMPL(__imp__sub_82816A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1980(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,1976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1976);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816A9C"))) PPC_WEAK_FUNC(sub_82816A9C);
PPC_FUNC_IMPL(__imp__sub_82816A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816AA0"))) PPC_WEAK_FUNC(sub_82816AA0);
PPC_FUNC_IMPL(__imp__sub_82816AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1976(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816AB8"))) PPC_WEAK_FUNC(sub_82816AB8);
PPC_FUNC_IMPL(__imp__sub_82816AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,497
	ctx.r10.s64 = ctx.r5.s64 + 497;
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

__attribute__((alias("__imp__sub_82816AD8"))) PPC_WEAK_FUNC(sub_82816AD8);
PPC_FUNC_IMPL(__imp__sub_82816AD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82816b0c
	if (ctx.cr6.lt) goto loc_82816B0C;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x82816b0c
	if (!ctx.cr6.lt) goto loc_82816B0C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,6
	ctx.r10.s64 = ctx.r5.s64 + 6;
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
loc_82816B0C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816B14"))) PPC_WEAK_FUNC(sub_82816B14);
PPC_FUNC_IMPL(__imp__sub_82816B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816B18"))) PPC_WEAK_FUNC(sub_82816B18);
PPC_FUNC_IMPL(__imp__sub_82816B18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// blt cr6,0x82816b90
	if (ctx.cr6.lt) goto loc_82816B90;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x82816b90
	if (!ctx.cr6.lt) goto loc_82816B90;
	// addi r8,r5,362
	ctx.r8.s64 = ctx.r5.s64 + 362;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82816b78
	if (ctx.cr6.eq) goto loc_82816B78;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82816b68
	if (ctx.cr6.eq) goto loc_82816B68;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82816b80
	if (ctx.cr6.eq) goto loc_82816B80;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82816b80
	goto loc_82816B80;
loc_82816B68:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82816b80
	goto loc_82816B80;
loc_82816B78:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82816B80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82816b90
	if (ctx.cr6.eq) goto loc_82816B90;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82816B90:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816B98"))) PPC_WEAK_FUNC(sub_82816B98);
PPC_FUNC_IMPL(__imp__sub_82816B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82816BA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,649
	ctx.r10.s64 = ctx.r5.s64 + 649;
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r9,-29532(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// addi r6,r8,-29532
	ctx.r6.s64 = ctx.r8.s64 + -29532;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// lwzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// beq cr6,0x82816c30
	if (ctx.cr6.eq) goto loc_82816C30;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82816c28
	if (ctx.cr6.eq) goto loc_82816C28;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82816c20
	if (ctx.cr6.eq) goto loc_82816C20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82816c34
	goto loc_82816C34;
loc_82816C20:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816c34
	goto loc_82816C34;
loc_82816C28:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82816c34
	goto loc_82816C34;
loc_82816C30:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82816C34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82816c48
	if (!ctx.cr6.eq) goto loc_82816C48;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82816c7c
	goto loc_82816C7C;
loc_82816C48:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82816c70
	if (ctx.cr6.eq) goto loc_82816C70;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82816c68
	if (ctx.cr6.eq) goto loc_82816C68;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82816c74
	if (ctx.cr6.eq) goto loc_82816C74;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82816c74
	goto loc_82816C74;
loc_82816C68:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82816c74
	goto loc_82816C74;
loc_82816C70:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82816C74:
	// bl 0x828040c8
	ctx.lr = 0x82816C78;
	sub_828040C8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_82816C7C:
	// stw r25,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82816C94"))) PPC_WEAK_FUNC(sub_82816C94);
PPC_FUNC_IMPL(__imp__sub_82816C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816C98"))) PPC_WEAK_FUNC(sub_82816C98);
PPC_FUNC_IMPL(__imp__sub_82816C98) {
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
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82816ce4
	if (ctx.cr6.eq) goto loc_82816CE4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816cdc
	if (ctx.cr6.eq) goto loc_82816CDC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82816cd4
	if (ctx.cr6.eq) goto loc_82816CD4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82816ce8
	goto loc_82816CE8;
loc_82816CD4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816ce8
	goto loc_82816CE8;
loc_82816CDC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82816ce8
	goto loc_82816CE8;
loc_82816CE4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82816CE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r5,649
	ctx.r11.s64 = ctx.r5.s64 + 649;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82816d34
	if (ctx.cr6.eq) goto loc_82816D34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816d2c
	if (ctx.cr6.eq) goto loc_82816D2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816d38
	if (!ctx.cr6.eq) goto loc_82816D38;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816d38
	goto loc_82816D38;
loc_82816D2C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82816d38
	goto loc_82816D38;
loc_82816D34:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82816D38:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82816d64
	if (ctx.cr6.eq) goto loc_82816D64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816d60
	if (ctx.cr6.eq) goto loc_82816D60;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82816d58
	if (ctx.cr6.eq) goto loc_82816D58;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82816d64
	goto loc_82816D64;
loc_82816D58:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82816d64
	goto loc_82816D64;
loc_82816D60:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82816D64:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816D78"))) PPC_WEAK_FUNC(sub_82816D78);
PPC_FUNC_IMPL(__imp__sub_82816D78) {
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
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82816dc4
	if (ctx.cr6.eq) goto loc_82816DC4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816dbc
	if (ctx.cr6.eq) goto loc_82816DBC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82816db4
	if (ctx.cr6.eq) goto loc_82816DB4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82816dc8
	goto loc_82816DC8;
loc_82816DB4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816dc8
	goto loc_82816DC8;
loc_82816DBC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82816dc8
	goto loc_82816DC8;
loc_82816DC4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82816DC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r5,497
	ctx.r11.s64 = ctx.r5.s64 + 497;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82816e14
	if (ctx.cr6.eq) goto loc_82816E14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816e0c
	if (ctx.cr6.eq) goto loc_82816E0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816e18
	if (!ctx.cr6.eq) goto loc_82816E18;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816e18
	goto loc_82816E18;
loc_82816E0C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82816e18
	goto loc_82816E18;
loc_82816E14:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82816E18:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82816e44
	if (ctx.cr6.eq) goto loc_82816E44;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816e40
	if (ctx.cr6.eq) goto loc_82816E40;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82816e38
	if (ctx.cr6.eq) goto loc_82816E38;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82816e44
	goto loc_82816E44;
loc_82816E38:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82816e44
	goto loc_82816E44;
loc_82816E40:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82816E44:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816E58"))) PPC_WEAK_FUNC(sub_82816E58);
PPC_FUNC_IMPL(__imp__sub_82816E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,649
	ctx.r10.s64 = ctx.r5.s64 + 649;
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
	// beq cr6,0x82816ec0
	if (ctx.cr6.eq) goto loc_82816EC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816ea0
	if (ctx.cr6.eq) goto loc_82816EA0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816ec8
	if (!ctx.cr6.eq) goto loc_82816EC8;
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
loc_82816EA0:
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
loc_82816EC0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82816EC8:
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

__attribute__((alias("__imp__sub_82816EDC"))) PPC_WEAK_FUNC(sub_82816EDC);
PPC_FUNC_IMPL(__imp__sub_82816EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816EE0"))) PPC_WEAK_FUNC(sub_82816EE0);
PPC_FUNC_IMPL(__imp__sub_82816EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,649
	ctx.r10.s64 = ctx.r5.s64 + 649;
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

__attribute__((alias("__imp__sub_82816F00"))) PPC_WEAK_FUNC(sub_82816F00);
PPC_FUNC_IMPL(__imp__sub_82816F00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82816f44
	if (ctx.cr6.eq) goto loc_82816F44;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82816f3c
	if (ctx.cr6.eq) goto loc_82816F3C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82816f48
	if (!ctx.cr6.eq) goto loc_82816F48;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82816f48
	goto loc_82816F48;
loc_82816F3C:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x82816f48
	goto loc_82816F48;
loc_82816F44:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82816F48:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82816fa0
	if (ctx.cr6.eq) goto loc_82816FA0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82816fa0
	if (ctx.cr6.lt) goto loc_82816FA0;
	// cmpwi cr6,r6,128
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 128, ctx.xer);
	// bge cr6,0x82816fa0
	if (!ctx.cr6.lt) goto loc_82816FA0;
	// addi r8,r6,649
	ctx.r8.s64 = ctx.r6.s64 + 649;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82816f94
	if (ctx.cr6.eq) goto loc_82816F94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816f8c
	if (ctx.cr6.eq) goto loc_82816F8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816f98
	if (!ctx.cr6.eq) goto loc_82816F98;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816f98
	goto loc_82816F98;
loc_82816F8C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82816f98
	goto loc_82816F98;
loc_82816F94:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82816F98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82816fac
	if (ctx.cr6.eq) goto loc_82816FAC;
loc_82816FA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82816FAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816FB8"))) PPC_WEAK_FUNC(sub_82816FB8);
PPC_FUNC_IMPL(__imp__sub_82816FB8) {
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
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82817004
	if (ctx.cr6.eq) goto loc_82817004;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816ffc
	if (ctx.cr6.eq) goto loc_82816FFC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82816ff4
	if (ctx.cr6.eq) goto loc_82816FF4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82817008
	goto loc_82817008;
loc_82816FF4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82817008
	goto loc_82817008;
loc_82816FFC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82817008
	goto loc_82817008;
loc_82817004:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82817008:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r5,362
	ctx.r11.s64 = ctx.r5.s64 + 362;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82817054
	if (ctx.cr6.eq) goto loc_82817054;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281704c
	if (ctx.cr6.eq) goto loc_8281704C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82817058
	if (!ctx.cr6.eq) goto loc_82817058;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82817058
	goto loc_82817058;
loc_8281704C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82817058
	goto loc_82817058;
loc_82817054:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82817058:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82817084
	if (ctx.cr6.eq) goto loc_82817084;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82817080
	if (ctx.cr6.eq) goto loc_82817080;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82817078
	if (ctx.cr6.eq) goto loc_82817078;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82817084
	goto loc_82817084;
loc_82817078:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82817084
	goto loc_82817084;
loc_82817080:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82817084:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817098"))) PPC_WEAK_FUNC(sub_82817098);
PPC_FUNC_IMPL(__imp__sub_82817098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,7236(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7236);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828170B0"))) PPC_WEAK_FUNC(sub_828170B0);
PPC_FUNC_IMPL(__imp__sub_828170B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,7236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7236, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828170C4"))) PPC_WEAK_FUNC(sub_828170C4);
PPC_FUNC_IMPL(__imp__sub_828170C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828170C8"))) PPC_WEAK_FUNC(sub_828170C8);
PPC_FUNC_IMPL(__imp__sub_828170C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828170D0;
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
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r23,13188(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r11.u32);
	// lwz r3,13592(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13592);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// bl 0x827c8e18
	ctx.lr = 0x82817128;
	sub_827C8E18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82817140
	if (ctx.cr6.eq) goto loc_82817140;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82817140
	if (ctx.cr6.eq) goto loc_82817140;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82817144
	if (!ctx.cr6.eq) goto loc_82817144;
loc_82817140:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82817144:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r23,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82817160"))) PPC_WEAK_FUNC(sub_82817160);
PPC_FUNC_IMPL(__imp__sub_82817160) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281716C"))) PPC_WEAK_FUNC(sub_8281716C);
PPC_FUNC_IMPL(__imp__sub_8281716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817170"))) PPC_WEAK_FUNC(sub_82817170);
PPC_FUNC_IMPL(__imp__sub_82817170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x8281718c
	if (!ctx.cr6.lt) goto loc_8281718C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bge cr6,0x828171a8
	if (!ctx.cr6.lt) goto loc_828171A8;
loc_8281718C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x828171a8
	if (ctx.cr6.lt) goto loc_828171A8;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x828171a8
	if (!ctx.cr6.lt) goto loc_828171A8;
	// addi r10,r4,355
	ctx.r10.s64 = ctx.r4.s64 + 355;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
loc_828171A8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828171AC"))) PPC_WEAK_FUNC(sub_828171AC);
PPC_FUNC_IMPL(__imp__sub_828171AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828171B0"))) PPC_WEAK_FUNC(sub_828171B0);
PPC_FUNC_IMPL(__imp__sub_828171B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,1811
	ctx.r10.s64 = ctx.r5.s64 + 1811;
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

__attribute__((alias("__imp__sub_828171D0"))) PPC_WEAK_FUNC(sub_828171D0);
PPC_FUNC_IMPL(__imp__sub_828171D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,628(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x828171f0
	if (!ctx.cr6.eq) goto loc_828171F0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_828171F0:
	// lwz r9,632(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82817200
	if (!ctx.cr6.eq) goto loc_82817200;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82817200:
	// lwz r11,636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82817218
	if (!ctx.cr6.eq) goto loc_82817218;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82817218:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817220"))) PPC_WEAK_FUNC(sub_82817220);
PPC_FUNC_IMPL(__imp__sub_82817220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82817244
	if (!ctx.cr6.eq) goto loc_82817244;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82817244:
	// addi r10,r10,1811
	ctx.r10.s64 = ctx.r10.s64 + 1811;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817258"))) PPC_WEAK_FUNC(sub_82817258);
PPC_FUNC_IMPL(__imp__sub_82817258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,801
	ctx.r10.s64 = ctx.r5.s64 + 801;
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

__attribute__((alias("__imp__sub_82817278"))) PPC_WEAK_FUNC(sub_82817278);
PPC_FUNC_IMPL(__imp__sub_82817278) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82817280;
	__savegprlr_29(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x828172a0
	if (!ctx.cr6.eq) goto loc_828172A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x828172ac
	goto loc_828172AC;
loc_828172A0:
	// addi r10,r10,1811
	ctx.r10.s64 = ctx.r10.s64 + 1811;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_828172AC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r6,r11,7244
	ctx.r6.s64 = ctx.r11.s64 + 7244;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828172D4:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82817308
	if (ctx.cr6.eq) goto loc_82817308;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82817300
	if (ctx.cr6.eq) goto loc_82817300;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828172f8
	if (ctx.cr6.eq) goto loc_828172F8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281730c
	goto loc_8281730C;
loc_828172F8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281730c
	goto loc_8281730C;
loc_82817300:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281730c
	goto loc_8281730C;
loc_82817308:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281730C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828173f4
	if (ctx.cr6.eq) goto loc_828173F4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82817344
	if (ctx.cr6.eq) goto loc_82817344;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8281733c
	if (ctx.cr6.eq) goto loc_8281733C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82817334
	if (ctx.cr6.eq) goto loc_82817334;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82817348
	goto loc_82817348;
loc_82817334:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82817348
	goto loc_82817348;
loc_8281733C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82817348
	goto loc_82817348;
loc_82817344:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82817348:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82817378
	if (ctx.cr6.eq) goto loc_82817378;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82817370
	if (ctx.cr6.eq) goto loc_82817370;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82817368
	if (ctx.cr6.eq) goto loc_82817368;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8281737c
	goto loc_8281737C;
loc_82817368:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281737c
	goto loc_8281737C;
loc_82817370:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281737c
	goto loc_8281737C;
loc_82817378:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281737C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828173f4
	if (ctx.cr6.eq) goto loc_828173F4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828173b4
	if (ctx.cr6.eq) goto loc_828173B4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828173ac
	if (ctx.cr6.eq) goto loc_828173AC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828173a4
	if (ctx.cr6.eq) goto loc_828173A4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828173b8
	goto loc_828173B8;
loc_828173A4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828173b8
	goto loc_828173B8;
loc_828173AC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828173b8
	goto loc_828173B8;
loc_828173B4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_828173B8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828173e8
	if (ctx.cr6.eq) goto loc_828173E8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828173e0
	if (ctx.cr6.eq) goto loc_828173E0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828173d8
	if (ctx.cr6.eq) goto loc_828173D8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x828173ec
	goto loc_828173EC;
loc_828173D8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828173ec
	goto loc_828173EC;
loc_828173E0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828173ec
	goto loc_828173EC;
loc_828173E8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828173EC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281740c
	if (!ctx.cr6.eq) goto loc_8281740C;
loc_828173F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x828172d4
	if (ctx.cr6.lt) goto loc_828172D4;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8281740C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82817414"))) PPC_WEAK_FUNC(sub_82817414);
PPC_FUNC_IMPL(__imp__sub_82817414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817418"))) PPC_WEAK_FUNC(sub_82817418);
PPC_FUNC_IMPL(__imp__sub_82817418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 620);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817430"))) PPC_WEAK_FUNC(sub_82817430);
PPC_FUNC_IMPL(__imp__sub_82817430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,7244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7244);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281747c
	if (ctx.cr6.eq) goto loc_8281747C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82817474
	if (ctx.cr6.eq) goto loc_82817474;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82817480
	if (!ctx.cr6.eq) goto loc_82817480;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82817480
	goto loc_82817480;
loc_82817474:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82817480
	goto loc_82817480;
loc_8281747C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82817480:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281748c
	if (ctx.cr6.eq) goto loc_8281748C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8281748C:
	// lwz r11,7248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828174b8
	if (ctx.cr6.eq) goto loc_828174B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828174b0
	if (ctx.cr6.eq) goto loc_828174B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828174bc
	if (!ctx.cr6.eq) goto loc_828174BC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828174bc
	goto loc_828174BC;
loc_828174B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828174bc
	goto loc_828174BC;
loc_828174B8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828174BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828174c8
	if (ctx.cr6.eq) goto loc_828174C8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_828174C8:
	// lwz r11,7252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7252);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828174f4
	if (ctx.cr6.eq) goto loc_828174F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828174ec
	if (ctx.cr6.eq) goto loc_828174EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828174f8
	if (!ctx.cr6.eq) goto loc_828174F8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828174f8
	goto loc_828174F8;
loc_828174EC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828174f8
	goto loc_828174F8;
loc_828174F4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828174F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281750c
	if (ctx.cr6.eq) goto loc_8281750C;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281750C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817514"))) PPC_WEAK_FUNC(sub_82817514);
PPC_FUNC_IMPL(__imp__sub_82817514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817518"))) PPC_WEAK_FUNC(sub_82817518);
PPC_FUNC_IMPL(__imp__sub_82817518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,616(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 616);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817530"))) PPC_WEAK_FUNC(sub_82817530);
PPC_FUNC_IMPL(__imp__sub_82817530) {
	PPC_FUNC_PROLOGUE();
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281753C"))) PPC_WEAK_FUNC(sub_8281753C);
PPC_FUNC_IMPL(__imp__sub_8281753C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817540"))) PPC_WEAK_FUNC(sub_82817540);
PPC_FUNC_IMPL(__imp__sub_82817540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,157
	ctx.r10.s64 = ctx.r5.s64 + 157;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8281756C"))) PPC_WEAK_FUNC(sub_8281756C);
PPC_FUNC_IMPL(__imp__sub_8281756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817570"))) PPC_WEAK_FUNC(sub_82817570);
PPC_FUNC_IMPL(__imp__sub_82817570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,1376
	ctx.r11.s64 = ctx.r11.s64 + 1376;
loc_82817584:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x828175ac
	if (ctx.cr6.eq) goto loc_828175AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x82817584
	if (ctx.cr6.lt) goto loc_82817584;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828175AC:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828175B4"))) PPC_WEAK_FUNC(sub_828175B4);
PPC_FUNC_IMPL(__imp__sub_828175B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828175B8"))) PPC_WEAK_FUNC(sub_828175B8);
PPC_FUNC_IMPL(__imp__sub_828175B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x828175d4
	if (!ctx.cr6.lt) goto loc_828175D4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bge cr6,0x828175e8
	if (!ctx.cr6.lt) goto loc_828175E8;
loc_828175D4:
	// addi r10,r5,355
	ctx.r10.s64 = ctx.r5.s64 + 355;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828175E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828175F4"))) PPC_WEAK_FUNC(sub_828175F4);
PPC_FUNC_IMPL(__imp__sub_828175F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828175F8"))) PPC_WEAK_FUNC(sub_828175F8);
PPC_FUNC_IMPL(__imp__sub_828175F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82817614
	if (ctx.cr6.lt) goto loc_82817614;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// blt cr6,0x82817620
	if (ctx.cr6.lt) goto loc_82817620;
loc_82817614:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82817620:
	// addi r10,r5,344
	ctx.r10.s64 = ctx.r5.s64 + 344;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817634"))) PPC_WEAK_FUNC(sub_82817634);
PPC_FUNC_IMPL(__imp__sub_82817634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817638"))) PPC_WEAK_FUNC(sub_82817638);
PPC_FUNC_IMPL(__imp__sub_82817638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,684
	ctx.r11.s64 = ctx.r11.s64 + 684;
loc_8281764C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82817674
	if (ctx.cr6.eq) goto loc_82817674;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8281764c
	if (ctx.cr6.lt) goto loc_8281764C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82817674:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817680"))) PPC_WEAK_FUNC(sub_82817680);
PPC_FUNC_IMPL(__imp__sub_82817680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,616(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 616);
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

__attribute__((alias("__imp__sub_828176A4"))) PPC_WEAK_FUNC(sub_828176A4);
PPC_FUNC_IMPL(__imp__sub_828176A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828176A8"))) PPC_WEAK_FUNC(sub_828176A8);
PPC_FUNC_IMPL(__imp__sub_828176A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x828176c4
	if (ctx.cr6.lt) goto loc_828176C4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x828176d0
	if (ctx.cr6.lt) goto loc_828176D0;
loc_828176C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828176D0:
	// addi r10,r5,166
	ctx.r10.s64 = ctx.r5.s64 + 166;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828176E4"))) PPC_WEAK_FUNC(sub_828176E4);
PPC_FUNC_IMPL(__imp__sub_828176E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828176E8"))) PPC_WEAK_FUNC(sub_828176E8);
PPC_FUNC_IMPL(__imp__sub_828176E8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82817430
	ctx.lr = 0x8281770C;
	sub_82817430(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82817730
	if (!ctx.cr6.gt) goto loc_82817730;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
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
loc_82817730:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8281774C"))) PPC_WEAK_FUNC(sub_8281774C);
PPC_FUNC_IMPL(__imp__sub_8281774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817750"))) PPC_WEAK_FUNC(sub_82817750);
PPC_FUNC_IMPL(__imp__sub_82817750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
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
	// beq cr6,0x8281779c
	if (ctx.cr6.eq) goto loc_8281779C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82817794
	if (ctx.cr6.eq) goto loc_82817794;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281778c
	if (ctx.cr6.eq) goto loc_8281778C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x828177a0
	goto loc_828177A0;
loc_8281778C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828177a0
	goto loc_828177A0;
loc_82817794:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828177a0
	goto loc_828177A0;
loc_8281779C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828177A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828177b4
	if (!ctx.cr6.eq) goto loc_828177B4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828177B4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828177dc
	if (ctx.cr6.eq) goto loc_828177DC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828177d4
	if (ctx.cr6.eq) goto loc_828177D4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828177e0
	if (!ctx.cr6.eq) goto loc_828177E0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828177e0
	goto loc_828177E0;
loc_828177D4:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x828177e0
	goto loc_828177E0;
loc_828177DC:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_828177E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,7244
	ctx.r11.s64 = ctx.r8.s64 + 7244;
loc_828177E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82817808
	if (ctx.cr6.eq) goto loc_82817808;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x828177e8
	if (ctx.cr6.lt) goto loc_828177E8;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82817808:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817810"))) PPC_WEAK_FUNC(sub_82817810);
PPC_FUNC_IMPL(__imp__sub_82817810) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,34
	ctx.r9.s64 = 34;
	// li r8,35
	ctx.r8.s64 = 35;
	// li r7,36
	ctx.r7.s64 = 36;
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,38
	ctx.r5.s64 = 38;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,39
	ctx.r3.s64 = 39;
	// li r31,40
	ctx.r31.s64 = 40;
	// li r30,41
	ctx.r30.s64 = 41;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r10,r11,3108
	ctx.r10.s64 = ctx.r11.s64 + 3108;
	// stw r9,3116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3116, ctx.r9.u32);
	// stw r9,3120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3120, ctx.r9.u32);
	// lwz r9,3112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r9,3112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r9,3112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,3112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lwz r9,3112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lwz r9,3112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r5,3112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r3,3112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828178EC"))) PPC_WEAK_FUNC(sub_828178EC);
PPC_FUNC_IMPL(__imp__sub_828178EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828178F0"))) PPC_WEAK_FUNC(sub_828178F0);
PPC_FUNC_IMPL(__imp__sub_828178F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,1803
	ctx.r10.s64 = ctx.r5.s64 + 1803;
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

__attribute__((alias("__imp__sub_82817910"))) PPC_WEAK_FUNC(sub_82817910);
PPC_FUNC_IMPL(__imp__sub_82817910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r9,2556
	ctx.r11.s64 = ctx.r9.s64 + 2556;
loc_82817924:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8281794c
	if (ctx.cr6.eq) goto loc_8281794C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x82817924
	if (ctx.cr6.lt) goto loc_82817924;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281794C:
	// addi r11,r10,1803
	ctx.r11.s64 = ctx.r10.s64 + 1803;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817960"))) PPC_WEAK_FUNC(sub_82817960);
PPC_FUNC_IMPL(__imp__sub_82817960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,7212
	ctx.r11.s64 = ctx.r11.s64 + 7212;
loc_82817974:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8281799c
	if (ctx.cr6.eq) goto loc_8281799C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x82817974
	if (ctx.cr6.lt) goto loc_82817974;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281799C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828179A8"))) PPC_WEAK_FUNC(sub_828179A8);
PPC_FUNC_IMPL(__imp__sub_828179A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,214
	ctx.r10.s64 = ctx.r5.s64 + 214;
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

__attribute__((alias("__imp__sub_828179C8"))) PPC_WEAK_FUNC(sub_828179C8);
PPC_FUNC_IMPL(__imp__sub_828179C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,214
	ctx.r10.s64 = ctx.r5.s64 + 214;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
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

__attribute__((alias("__imp__sub_828179F4"))) PPC_WEAK_FUNC(sub_828179F4);
PPC_FUNC_IMPL(__imp__sub_828179F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828179F8"))) PPC_WEAK_FUNC(sub_828179F8);
PPC_FUNC_IMPL(__imp__sub_828179F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,18
	ctx.r11.s64 = 18;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,19
	ctx.r9.s64 = 19;
	// li r6,21
	ctx.r6.s64 = 21;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stw r11,1092(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1092, ctx.r11.u32);
	// stw r10,1148(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1148, ctx.r10.u32);
	// stw r10,1152(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1152, ctx.r10.u32);
	// stw r10,1156(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1156, ctx.r10.u32);
	// stw r10,1160(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1160, ctx.r10.u32);
	// stw r10,1164(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1164, ctx.r10.u32);
	// stw r10,1168(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1168, ctx.r10.u32);
	// stw r11,1172(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1172, ctx.r11.u32);
	// stw r11,1176(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1176, ctx.r11.u32);
	// stw r11,1180(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1180, ctx.r11.u32);
	// stw r11,1184(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1184, ctx.r11.u32);
	// stw r11,1188(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1188, ctx.r11.u32);
	// stw r8,1192(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1192, ctx.r8.u32);
	// stw r6,1196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1196, ctx.r6.u32);
	// stw r9,1200(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1200, ctx.r9.u32);
	// stw r9,1204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1204, ctx.r9.u32);
	// stw r8,1208(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1208, ctx.r8.u32);
	// stw r11,1220(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817A64"))) PPC_WEAK_FUNC(sub_82817A64);
PPC_FUNC_IMPL(__imp__sub_82817A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817A68"))) PPC_WEAK_FUNC(sub_82817A68);
PPC_FUNC_IMPL(__imp__sub_82817A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,7212
	ctx.r11.s64 = ctx.r11.s64 + 7212;
loc_82817A7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82817aa4
	if (ctx.cr6.eq) goto loc_82817AA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x82817a7c
	if (ctx.cr6.lt) goto loc_82817A7C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82817AA4:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817AAC"))) PPC_WEAK_FUNC(sub_82817AAC);
PPC_FUNC_IMPL(__imp__sub_82817AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817AB0"))) PPC_WEAK_FUNC(sub_82817AB0);
PPC_FUNC_IMPL(__imp__sub_82817AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,5856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5856);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82817b04
	if (ctx.cr6.eq) goto loc_82817B04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82817afc
	if (ctx.cr6.eq) goto loc_82817AFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82817af4
	if (ctx.cr6.eq) goto loc_82817AF4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82817b08
	goto loc_82817B08;
loc_82817AF4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82817b08
	goto loc_82817B08;
loc_82817AFC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82817b08
	goto loc_82817B08;
loc_82817B04:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82817B08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82817b6c
	if (ctx.cr6.eq) goto loc_82817B6C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82817b38
	if (ctx.cr6.eq) goto loc_82817B38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82817b30
	if (ctx.cr6.eq) goto loc_82817B30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82817b3c
	if (!ctx.cr6.eq) goto loc_82817B3C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82817b3c
	goto loc_82817B3C;
loc_82817B30:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82817b3c
	goto loc_82817B3C;
loc_82817B38:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82817B3C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
loc_82817B6C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817B74"))) PPC_WEAK_FUNC(sub_82817B74);
PPC_FUNC_IMPL(__imp__sub_82817B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817B78"))) PPC_WEAK_FUNC(sub_82817B78);
PPC_FUNC_IMPL(__imp__sub_82817B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,1640
	ctx.r10.s64 = ctx.r5.s64 + 1640;
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

__attribute__((alias("__imp__sub_82817B98"))) PPC_WEAK_FUNC(sub_82817B98);
PPC_FUNC_IMPL(__imp__sub_82817B98) {
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
	// lwz r11,5856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5856);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82817bec
	if (ctx.cr6.eq) goto loc_82817BEC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82817be4
	if (ctx.cr6.eq) goto loc_82817BE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82817bdc
	if (ctx.cr6.eq) goto loc_82817BDC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82817bf0
	goto loc_82817BF0;
loc_82817BDC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82817bf0
	goto loc_82817BF0;
loc_82817BE4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82817bf0
	goto loc_82817BF0;
loc_82817BEC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82817BF0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82817c44
	if (ctx.cr6.eq) goto loc_82817C44;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82817c20
	if (ctx.cr6.eq) goto loc_82817C20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82817c18
	if (ctx.cr6.eq) goto loc_82817C18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82817c24
	if (!ctx.cr6.eq) goto loc_82817C24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82817c24
	goto loc_82817C24;
loc_82817C18:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82817c24
	goto loc_82817C24;
loc_82817C20:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82817C24:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
loc_82817C44:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817C4C"))) PPC_WEAK_FUNC(sub_82817C4C);
PPC_FUNC_IMPL(__imp__sub_82817C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817C50"))) PPC_WEAK_FUNC(sub_82817C50);
PPC_FUNC_IMPL(__imp__sub_82817C50) {
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
	// beq cr6,0x82817c9c
	if (ctx.cr6.eq) goto loc_82817C9C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82817c94
	if (ctx.cr6.eq) goto loc_82817C94;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82817c8c
	if (ctx.cr6.eq) goto loc_82817C8C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82817ca0
	goto loc_82817CA0;
loc_82817C8C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82817ca0
	goto loc_82817CA0;
loc_82817C94:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82817ca0
	goto loc_82817CA0;
loc_82817C9C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82817CA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,5856(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5856);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82817cd8
	if (ctx.cr6.eq) goto loc_82817CD8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82817cd4
	if (ctx.cr6.eq) goto loc_82817CD4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82817ccc
	if (ctx.cr6.eq) goto loc_82817CCC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82817cd8
	goto loc_82817CD8;
loc_82817CCC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82817cd8
	goto loc_82817CD8;
loc_82817CD4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82817CD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,5856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5856, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817CE8"))) PPC_WEAK_FUNC(sub_82817CE8);
PPC_FUNC_IMPL(__imp__sub_82817CE8) {
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
	// beq cr6,0x82817d2c
	if (ctx.cr6.eq) goto loc_82817D2C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82817d24
	if (ctx.cr6.eq) goto loc_82817D24;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82817d30
	if (!ctx.cr6.eq) goto loc_82817D30;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82817d30
	goto loc_82817D30;
loc_82817D24:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82817d30
	goto loc_82817D30;
loc_82817D2C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82817D30:
	// lwz r10,5856(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5856);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82817d60
	if (ctx.cr6.eq) goto loc_82817D60;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82817d5c
	if (ctx.cr6.eq) goto loc_82817D5C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82817d54
	if (ctx.cr6.eq) goto loc_82817D54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82817d60
	goto loc_82817D60;
loc_82817D54:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82817d60
	goto loc_82817D60;
loc_82817D5C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82817D60:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817D74"))) PPC_WEAK_FUNC(sub_82817D74);
PPC_FUNC_IMPL(__imp__sub_82817D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82817D78"))) PPC_WEAK_FUNC(sub_82817D78);
PPC_FUNC_IMPL(__imp__sub_82817D78) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82817D80;
	__savegprlr_20(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r29,17
	ctx.r29.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r27,21
	ctx.r27.s64 = 21;
	// li r31,20
	ctx.r31.s64 = 20;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r23,4
	ctx.r23.s64 = 4;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r24,7
	ctx.r24.s64 = 7;
	// li r25,8
	ctx.r25.s64 = 8;
	// addi r10,r11,6716
	ctx.r10.s64 = ctx.r11.s64 + 6716;
	// addi r9,r11,5860
	ctx.r9.s64 = ctx.r11.s64 + 5860;
	// li r28,37
	ctx.r28.s64 = 37;
	// stw r5,6728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6728, ctx.r5.u32);
	// li r22,19
	ctx.r22.s64 = 19;
	// stw r29,6732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6732, ctx.r29.u32);
	// stw r4,6736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6736, ctx.r4.u32);
	// stw r6,5868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5868, ctx.r6.u32);
	// lwz r5,6724(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// stw r7,5872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5872, ctx.r7.u32);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r5,6724(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r5,r5,r3
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r5,6724(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r5,r5,r3
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r5,5864(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r27,6724(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r5,6720(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// mullw r5,r3,r27
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r31,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// lwz r5,5864(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r5,6720(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r5,6720(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// li r5,36
	ctx.r5.s64 = 36;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r27,6720(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r3,r27
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// li r26,15
	ctx.r26.s64 = 15;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,14
	ctx.r27.s64 = 14;
	// li r21,13
	ctx.r21.s64 = 13;
	// stwx r8,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r20,6720(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r3,r3,r20
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r20.s32);
	// addi r3,r3,6
	ctx.r3.s64 = ctx.r3.s64 + 6;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r3,5864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r23.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r20,6720(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r3,r20
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r20.s32);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r20,6724(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r3,r20,r3
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r3.s32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r5,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r20,6724(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r20,r3
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r3.s32);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// lwz r20,6724(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r20,r3
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r3.s32);
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r28,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r20,6720(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r3,r20
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r20.s32);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r22,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r22.u32);
	// lwz r3,5864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r31,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r22,6724(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mullw r3,r3,r22
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// li r25,24
	ctx.r25.s64 = 24;
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// li r24,11
	ctx.r24.s64 = 11;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// li r22,12
	ctx.r22.s64 = 12;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r20,9
	ctx.r20.s64 = 9;
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r31,22
	ctx.r31.s64 = 22;
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r21.u32);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r26,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r26.u32);
	// lwz r28,6724(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r4,r28,r4
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r28,6720(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r28,6720(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r27,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r27.u32);
	// li r27,35
	ctx.r27.s64 = 35;
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r26,10
	ctx.r26.s64 = 10;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r28,6720(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r25,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r25.u32);
	// lwz r28,6724(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r4,r28,r4
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r28,6724(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r4,r28,r4
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r3,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r3.u32);
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lwz r28,6720(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r28,6720(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r28,6724(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// lwz r31,6724(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mulli r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 * 28;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// lwz r3,5864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// mulli r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 * 28;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r24,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r24.u32);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r22,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r22.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r20,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r20.u32);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r3,r4,r3
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r26,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r26.u32);
	// lwz r3,5864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r23,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r23.u32);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r27,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r27.u32);
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r31,6724(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// lwz r4,5864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r4,6720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r7,6724(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r3,r7,r4
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mulli r7,r3,44
	ctx.r7.s64 = ctx.r3.s64 * 44;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r29,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r29.u32);
	// lwz r4,6724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r3,6720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mulli r7,r7,44
	ctx.r7.s64 = ctx.r7.s64 * 44;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r30,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r30.u32);
	// lwz r7,6720(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// mullw r4,r3,r7
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// mulli r7,r4,44
	ctx.r7.s64 = ctx.r4.s64 * 44;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r7,5864(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// mulli r7,r7,44
	ctx.r7.s64 = ctx.r7.s64 * 44;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r7,6720(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mulli r7,r7,44
	ctx.r7.s64 = ctx.r7.s64 * 44;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// mullw r7,r6,r3
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r3,6724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6724);
	// lwz r7,6720(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6720);
	// mulli r7,r7,44
	ctx.r7.s64 = ctx.r7.s64 * 44;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// mullw r7,r6,r3
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r5,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// lwz r3,5864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5864);
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828183DC"))) PPC_WEAK_FUNC(sub_828183DC);
PPC_FUNC_IMPL(__imp__sub_828183DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828183E0"))) PPC_WEAK_FUNC(sub_828183E0);
PPC_FUNC_IMPL(__imp__sub_828183E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3844(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3844);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828183F8"))) PPC_WEAK_FUNC(sub_828183F8);
PPC_FUNC_IMPL(__imp__sub_828183F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82818434
	if (ctx.cr6.eq) goto loc_82818434;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82818424
	if (ctx.cr6.eq) goto loc_82818424;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8281843c
	if (!ctx.cr6.eq) goto loc_8281843C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281843c
	goto loc_8281843C;
loc_82818424:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8281843c
	goto loc_8281843C;
loc_82818434:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r4,-29532(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8281843C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r5,833
	ctx.r10.s64 = ctx.r5.s64 + 833;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818468"))) PPC_WEAK_FUNC(sub_82818468);
PPC_FUNC_IMPL(__imp__sub_82818468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828184a4
	if (ctx.cr6.eq) goto loc_828184A4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82818494
	if (ctx.cr6.eq) goto loc_82818494;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828184ac
	if (ctx.cr6.eq) goto loc_828184AC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x828184ac
	goto loc_828184AC;
loc_82818494:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828184ac
	goto loc_828184AC;
loc_828184A4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r3,-29532(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_828184AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r5,833
	ctx.r10.s64 = ctx.r5.s64 + 833;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828184D4"))) PPC_WEAK_FUNC(sub_828184D4);
PPC_FUNC_IMPL(__imp__sub_828184D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828184D8"))) PPC_WEAK_FUNC(sub_828184D8);
PPC_FUNC_IMPL(__imp__sub_828184D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,833
	ctx.r10.s64 = ctx.r5.s64 + 833;
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

__attribute__((alias("__imp__sub_828184F8"))) PPC_WEAK_FUNC(sub_828184F8);
PPC_FUNC_IMPL(__imp__sub_828184F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818504"))) PPC_WEAK_FUNC(sub_82818504);
PPC_FUNC_IMPL(__imp__sub_82818504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818508"))) PPC_WEAK_FUNC(sub_82818508);
PPC_FUNC_IMPL(__imp__sub_82818508) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82818520
	if (ctx.cr6.eq) goto loc_82818520;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82818520
	if (ctx.cr6.eq) goto loc_82818520;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82818520:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281852C"))) PPC_WEAK_FUNC(sub_8281852C);
PPC_FUNC_IMPL(__imp__sub_8281852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818530"))) PPC_WEAK_FUNC(sub_82818530);
PPC_FUNC_IMPL(__imp__sub_82818530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,836(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82818554
	if (!ctx.cr6.eq) goto loc_82818554;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82818554:
	// lwz r11,676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818560"))) PPC_WEAK_FUNC(sub_82818560);
PPC_FUNC_IMPL(__imp__sub_82818560) {
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
	// lwz r7,3188(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3188);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8281859c
	if (!ctx.cr6.gt) goto loc_8281859C;
	// addi r11,r9,908
	ctx.r11.s64 = ctx.r9.s64 + 908;
loc_82818584:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,3188(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3188);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82818584
	if (ctx.cr6.lt) goto loc_82818584;
loc_8281859C:
	// stw r8,3188(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3188, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828185A4"))) PPC_WEAK_FUNC(sub_828185A4);
PPC_FUNC_IMPL(__imp__sub_828185A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828185A8"))) PPC_WEAK_FUNC(sub_828185A8);
PPC_FUNC_IMPL(__imp__sub_828185A8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,3188(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3188);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ble cr6,0x8281868c
	if (!ctx.cr6.gt) goto loc_8281868C;
	// addi r9,r4,908
	ctx.r9.s64 = ctx.r4.s64 + 908;
	// addi r10,r4,912
	ctx.r10.s64 = ctx.r4.s64 + 912;
loc_828185EC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82818618
	if (ctx.cr6.eq) goto loc_82818618;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82818610
	if (ctx.cr6.eq) goto loc_82818610;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281861c
	if (!ctx.cr6.eq) goto loc_8281861C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281861c
	goto loc_8281861C;
loc_82818610:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8281861c
	goto loc_8281861C;
loc_82818618:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281861C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82818638
	if (!ctx.cr6.eq) goto loc_82818638;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82818638:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82818664
	if (ctx.cr6.eq) goto loc_82818664;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281865c
	if (ctx.cr6.eq) goto loc_8281865C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82818668
	if (!ctx.cr6.eq) goto loc_82818668;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82818668
	goto loc_82818668;
loc_8281865C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82818668
	goto loc_82818668;
loc_82818664:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82818668:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82818678
	if (ctx.cr6.eq) goto loc_82818678;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82818678:
	// lwz r11,3188(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3188);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828185ec
	if (ctx.cr6.lt) goto loc_828185EC;
loc_8281868C:
	// addi r11,r30,227
	ctx.r11.s64 = ctx.r30.s64 + 227;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828186c0
	if (ctx.cr6.eq) goto loc_828186C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828186b8
	if (ctx.cr6.eq) goto loc_828186B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828186c4
	if (!ctx.cr6.eq) goto loc_828186C4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828186c4
	goto loc_828186C4;
loc_828186B8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828186c4
	goto loc_828186C4;
loc_828186C0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828186C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828186e0
	if (ctx.cr6.eq) goto loc_828186E0;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,3188(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3188, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_828186E0:
	// stw r30,3188(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3188, ctx.r30.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828186F0"))) PPC_WEAK_FUNC(sub_828186F0);
PPC_FUNC_IMPL(__imp__sub_828186F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,3208(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818708"))) PPC_WEAK_FUNC(sub_82818708);
PPC_FUNC_IMPL(__imp__sub_82818708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82818724
	if (ctx.cr6.eq) goto loc_82818724;
	// stw r5,900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 900, ctx.r5.u32);
	// blr 
	return;
loc_82818724:
	// stw r5,1096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1096, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281872C"))) PPC_WEAK_FUNC(sub_8281872C);
PPC_FUNC_IMPL(__imp__sub_8281872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818730"))) PPC_WEAK_FUNC(sub_82818730);
PPC_FUNC_IMPL(__imp__sub_82818730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,3200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3200, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818744"))) PPC_WEAK_FUNC(sub_82818744);
PPC_FUNC_IMPL(__imp__sub_82818744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818748"))) PPC_WEAK_FUNC(sub_82818748);
PPC_FUNC_IMPL(__imp__sub_82818748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82818778
	if (ctx.cr6.eq) goto loc_82818778;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8281877c
	if (!ctx.cr6.eq) goto loc_8281877C;
	// lfs f0,4056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82818778:
	// lfs f0,2388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
loc_8281877C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818784"))) PPC_WEAK_FUNC(sub_82818784);
PPC_FUNC_IMPL(__imp__sub_82818784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818788"))) PPC_WEAK_FUNC(sub_82818788);
PPC_FUNC_IMPL(__imp__sub_82818788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828187bc
	if (ctx.cr6.eq) goto loc_828187BC;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828187b0
	if (ctx.cr6.eq) goto loc_828187B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828187B0:
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828187BC:
	// lwz r11,3308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3308);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828187C8"))) PPC_WEAK_FUNC(sub_828187C8);
PPC_FUNC_IMPL(__imp__sub_828187C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,3200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3200);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82818800
	if (ctx.cr6.eq) goto loc_82818800;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4056(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4056, temp.u32);
	// blr 
	return;
loc_82818800:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2388(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2388, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818810"))) PPC_WEAK_FUNC(sub_82818810);
PPC_FUNC_IMPL(__imp__sub_82818810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,3204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82818834
	if (!ctx.cr6.eq) goto loc_82818834;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82818834:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,3204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3204, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818848"))) PPC_WEAK_FUNC(sub_82818848);
PPC_FUNC_IMPL(__imp__sub_82818848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3200(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3200);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818860"))) PPC_WEAK_FUNC(sub_82818860);
PPC_FUNC_IMPL(__imp__sub_82818860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82818884
	if (!ctx.cr6.eq) goto loc_82818884;
	// lfs f0,3180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3180);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82818884:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x828188a8
	if (!ctx.cr6.eq) goto loc_828188A8;
	// lfs f0,3180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3184);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828188A8:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828188cc
	if (!ctx.cr6.eq) goto loc_828188CC;
	// lfs f0,3184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828188CC:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x828188e4
	if (!ctx.cr6.eq) goto loc_828188E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828188E4:
	// stfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828188EC"))) PPC_WEAK_FUNC(sub_828188EC);
PPC_FUNC_IMPL(__imp__sub_828188EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828188F0"))) PPC_WEAK_FUNC(sub_828188F0);
PPC_FUNC_IMPL(__imp__sub_828188F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,3180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8281896c
	if (ctx.cr6.lt) goto loc_8281896C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82818930
	if (ctx.cr6.lt) goto loc_82818930;
	// lfs f13,3184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82818960
	if (ctx.cr6.lt) goto loc_82818960;
loc_82818930:
	// lfs f13,3184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82818948
	if (ctx.cr6.lt) goto loc_82818948;
	// lfs f13,3208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82818954
	if (ctx.cr6.lt) goto loc_82818954;
loc_82818948:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82818954:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82818960:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281896C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818978"))) PPC_WEAK_FUNC(sub_82818978);
PPC_FUNC_IMPL(__imp__sub_82818978) {
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
	// blt cr6,0x828189a8
	if (ctx.cr6.lt) goto loc_828189A8;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x828189a8
	if (!ctx.cr6.lt) goto loc_828189A8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,829
	ctx.r10.s64 = ctx.r5.s64 + 829;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfsx f0,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
loc_828189A8:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828189B0"))) PPC_WEAK_FUNC(sub_828189B0);
PPC_FUNC_IMPL(__imp__sub_828189B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828189B8;
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
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
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// blt cr6,0x82818a28
	if (ctx.cr6.lt) goto loc_82818A28;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x82818a28
	if (!ctx.cr6.lt) goto loc_82818A28;
	// addi r11,r5,914
	ctx.r11.s64 = ctx.r5.s64 + 914;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x827eee58
	ctx.lr = 0x82818A28;
	sub_827EEE58(ctx, base);
loc_82818A28:
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

__attribute__((alias("__imp__sub_82818A44"))) PPC_WEAK_FUNC(sub_82818A44);
PPC_FUNC_IMPL(__imp__sub_82818A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818A48"))) PPC_WEAK_FUNC(sub_82818A48);
PPC_FUNC_IMPL(__imp__sub_82818A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r9,2396
	ctx.r11.s64 = ctx.r9.s64 + 2396;
	// addi r7,r9,1464
	ctx.r7.s64 = ctx.r9.s64 + 1464;
	// stw r5,3172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3172, ctx.r5.u32);
	// addi r9,r9,3960
	ctx.r9.s64 = ctx.r9.s64 + 3960;
loc_82818A74:
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,8
	ctx.r6.s64 = ctx.r8.s64 + 8;
	// stfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,20
	ctx.r6.s64 = ctx.r8.s64 + 20;
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,32
	ctx.r6.s64 = ctx.r8.s64 + 32;
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,44
	ctx.r6.s64 = ctx.r8.s64 + 44;
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// stfs f0,48(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// stfs f0,52(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,56
	ctx.r6.s64 = ctx.r8.s64 + 56;
	// stfs f0,56(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f0,60(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// stfs f0,64(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 64, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,68
	ctx.r6.s64 = ctx.r8.s64 + 68;
	// stfs f0,68(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 68, temp.u32);
	// stfs f0,72(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 72, temp.u32);
	// stfs f0,76(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 76, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,80
	ctx.r6.s64 = ctx.r8.s64 + 80;
	// stfs f0,80(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 80, temp.u32);
	// stfs f0,84(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 84, temp.u32);
	// stfs f0,88(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 88, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r8,92
	ctx.r6.s64 = ctx.r8.s64 + 92;
	// stfs f0,92(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 92, temp.u32);
	// stfs f0,96(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 96, temp.u32);
	// stfs f0,100(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 100, temp.u32);
	// stfs f0,-8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// blt cr6,0x82818a74
	if (ctx.cr6.lt) goto loc_82818A74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818BDC"))) PPC_WEAK_FUNC(sub_82818BDC);
PPC_FUNC_IMPL(__imp__sub_82818BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818BE0"))) PPC_WEAK_FUNC(sub_82818BE0);
PPC_FUNC_IMPL(__imp__sub_82818BE0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r31,1464
	ctx.r10.s64 = ctx.r31.s64 + 1464;
	// addi r9,r31,1468
	ctx.r9.s64 = ctx.r31.s64 + 1468;
loc_82818C18:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82818c44
	if (ctx.cr6.eq) goto loc_82818C44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82818c3c
	if (ctx.cr6.eq) goto loc_82818C3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82818c48
	if (!ctx.cr6.eq) goto loc_82818C48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82818c48
	goto loc_82818C48;
loc_82818C3C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82818c48
	goto loc_82818C48;
loc_82818C44:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82818C48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82818c64
	if (!ctx.cr6.eq) goto loc_82818C64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82818C64:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82818c90
	if (ctx.cr6.eq) goto loc_82818C90;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82818c88
	if (ctx.cr6.eq) goto loc_82818C88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82818c94
	if (!ctx.cr6.eq) goto loc_82818C94;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82818c94
	goto loc_82818C94;
loc_82818C88:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82818c94
	goto loc_82818C94;
loc_82818C90:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82818C94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82818ca4
	if (ctx.cr6.eq) goto loc_82818CA4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82818CA4:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82818c18
	if (!ctx.cr0.eq) goto loc_82818C18;
	// addi r11,r30,366
	ctx.r11.s64 = ctx.r30.s64 + 366;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82818ce4
	if (ctx.cr6.eq) goto loc_82818CE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82818cdc
	if (ctx.cr6.eq) goto loc_82818CDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82818ce8
	if (!ctx.cr6.eq) goto loc_82818CE8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82818ce8
	goto loc_82818CE8;
loc_82818CDC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82818ce8
	goto loc_82818CE8;
loc_82818CE4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82818CE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82818d04
	if (ctx.cr6.eq) goto loc_82818D04;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82818D04:
	// stw r30,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r30.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818D14"))) PPC_WEAK_FUNC(sub_82818D14);
PPC_FUNC_IMPL(__imp__sub_82818D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818D18"))) PPC_WEAK_FUNC(sub_82818D18);
PPC_FUNC_IMPL(__imp__sub_82818D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,1464
	ctx.r9.s64 = ctx.r11.s64 + 1464;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82818D3C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82818d70
	if (ctx.cr6.eq) goto loc_82818D70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82818d68
	if (ctx.cr6.eq) goto loc_82818D68;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82818d60
	if (ctx.cr6.eq) goto loc_82818D60;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82818d74
	goto loc_82818D74;
loc_82818D60:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82818d74
	goto loc_82818D74;
loc_82818D68:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82818d74
	goto loc_82818D74;
loc_82818D70:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82818D74:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82818da4
	if (ctx.cr6.eq) goto loc_82818DA4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82818d9c
	if (ctx.cr6.eq) goto loc_82818D9C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82818d94
	if (ctx.cr6.eq) goto loc_82818D94;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82818da8
	goto loc_82818DA8;
loc_82818D94:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82818da8
	goto loc_82818DA8;
loc_82818D9C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82818da8
	goto loc_82818DA8;
loc_82818DA4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82818DA8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82818dcc
	if (ctx.cr6.eq) goto loc_82818DCC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x82818d3c
	if (ctx.cr6.lt) goto loc_82818D3C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82818DCC:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818DD4"))) PPC_WEAK_FUNC(sub_82818DD4);
PPC_FUNC_IMPL(__imp__sub_82818DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818DD8"))) PPC_WEAK_FUNC(sub_82818DD8);
PPC_FUNC_IMPL(__imp__sub_82818DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818DDC"))) PPC_WEAK_FUNC(sub_82818DDC);
PPC_FUNC_IMPL(__imp__sub_82818DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818DE0"))) PPC_WEAK_FUNC(sub_82818DE0);
PPC_FUNC_IMPL(__imp__sub_82818DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818E44"))) PPC_WEAK_FUNC(sub_82818E44);
PPC_FUNC_IMPL(__imp__sub_82818E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818E48"))) PPC_WEAK_FUNC(sub_82818E48);
PPC_FUNC_IMPL(__imp__sub_82818E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,1612
	ctx.r11.s64 = ctx.r11.s64 + 1612;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818E74"))) PPC_WEAK_FUNC(sub_82818E74);
PPC_FUNC_IMPL(__imp__sub_82818E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818E78"))) PPC_WEAK_FUNC(sub_82818E78);
PPC_FUNC_IMPL(__imp__sub_82818E78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,2644
	ctx.r11.s64 = ctx.r11.s64 + 2644;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r10,r6,r8
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818EE0"))) PPC_WEAK_FUNC(sub_82818EE0);
PPC_FUNC_IMPL(__imp__sub_82818EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r10,r6,r8
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818F48"))) PPC_WEAK_FUNC(sub_82818F48);
PPC_FUNC_IMPL(__imp__sub_82818F48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r11,2644
	ctx.r11.s64 = ctx.r11.s64 + 2644;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818FB4"))) PPC_WEAK_FUNC(sub_82818FB4);
PPC_FUNC_IMPL(__imp__sub_82818FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82818FB8"))) PPC_WEAK_FUNC(sub_82818FB8);
PPC_FUNC_IMPL(__imp__sub_82818FB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82819018
	if (ctx.cr6.lt) goto loc_82819018;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x82819018
	if (!ctx.cr6.lt) goto loc_82819018;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82819018
	if (ctx.cr6.lt) goto loc_82819018;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x82819018
	if (!ctx.cr6.lt) goto loc_82819018;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,1612
	ctx.r11.s64 = ctx.r11.s64 + 1612;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r9,r6
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82819014
	if (ctx.cr6.lt) goto loc_82819014;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82819018
	if (ctx.cr6.lt) goto loc_82819018;
loc_82819014:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82819018:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819020"))) PPC_WEAK_FUNC(sub_82819020);
PPC_FUNC_IMPL(__imp__sub_82819020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819024"))) PPC_WEAK_FUNC(sub_82819024);
PPC_FUNC_IMPL(__imp__sub_82819024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82819028"))) PPC_WEAK_FUNC(sub_82819028);
PPC_FUNC_IMPL(__imp__sub_82819028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r6,r9,-21516
	ctx.r6.s64 = ctx.r9.s64 + -21516;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r10,30988
	ctx.r7.s64 = ctx.r10.s64 + 30988;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r8,31004
	ctx.r4.s64 = ctx.r8.s64 + 31004;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,2529
	ctx.r11.s64 = 2529;
	// li r10,2528
	ctx.r10.s64 = 2528;
	// lwz r9,48(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stw r7,3260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3260, ctx.r7.u32);
	// stw r6,3264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3264, ctx.r6.u32);
	// stw r4,3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3268, ctx.r4.u32);
	// stw r3,5172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5172, ctx.r3.u32);
	// stw r11,5176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5176, ctx.r11.u32);
	// stw r10,5180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5180, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819074"))) PPC_WEAK_FUNC(sub_82819074);
PPC_FUNC_IMPL(__imp__sub_82819074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82819078"))) PPC_WEAK_FUNC(sub_82819078);
PPC_FUNC_IMPL(__imp__sub_82819078) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r7,r10,28864
	ctx.r7.s64 = ctx.r10.s64 + 28864;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r8,28908
	ctx.r11.s64 = ctx.r8.s64 + 28908;
	// addi r4,r9,28880
	ctx.r4.s64 = ctx.r9.s64 + 28880;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r9,r6,28932
	ctx.r9.s64 = ctx.r6.s64 + 28932;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r8,48(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r3,28948
	ctx.r5.s64 = ctx.r3.s64 + 28948;
	// addi r10,r10,28960
	ctx.r10.s64 = ctx.r10.s64 + 28960;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r7,1248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1248, ctx.r7.u32);
	// addi r7,r6,28976
	ctx.r7.s64 = ctx.r6.s64 + 28976;
	// stw r4,1260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1260, ctx.r4.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r11,1264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1264, ctx.r11.u32);
	// addi r4,r3,28988
	ctx.r4.s64 = ctx.r3.s64 + 28988;
	// stw r9,1268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1268, ctx.r9.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r5,1272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1272, ctx.r5.u32);
	// addi r11,r31,29020
	ctx.r11.s64 = ctx.r31.s64 + 29020;
	// stw r10,1276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1276, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r7,1280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1280, ctx.r7.u32);
	// addi r7,r6,29048
	ctx.r7.s64 = ctx.r6.s64 + 29048;
	// stw r4,1284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1284, ctx.r4.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r3,29068
	ctx.r5.s64 = ctx.r3.s64 + 29068;
	// stw r11,1288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1288, ctx.r11.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r7,1292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1292, ctx.r7.u32);
	// addi r3,r10,29080
	ctx.r3.s64 = ctx.r10.s64 + 29080;
	// stw r5,1296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1296, ctx.r5.u32);
	// addi r10,r6,-9188
	ctx.r10.s64 = ctx.r6.s64 + -9188;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,1300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1300, ctx.r3.u32);
	// addi r6,r4,29088
	ctx.r6.s64 = ctx.r4.s64 + 29088;
	// stw r10,1304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1304, ctx.r10.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r6,1308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1308, ctx.r6.u32);
	// addi r4,r11,29108
	ctx.r4.s64 = ctx.r11.s64 + 29108;
	// addi r11,r7,29120
	ctx.r11.s64 = ctx.r7.s64 + 29120;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1312, ctx.r4.u32);
	// addi r6,r5,29136
	ctx.r6.s64 = ctx.r5.s64 + 29136;
	// stw r11,1316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1316, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r6,1320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1320, ctx.r6.u32);
	// addi r4,r3,29148
	ctx.r4.s64 = ctx.r3.s64 + 29148;
	// addi r11,r7,29160
	ctx.r11.s64 = ctx.r7.s64 + 29160;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1324, ctx.r4.u32);
	// addi r6,r5,29188
	ctx.r6.s64 = ctx.r5.s64 + 29188;
	// stw r11,1328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1328, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r6,1332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1332, ctx.r6.u32);
	// addi r4,r3,29212
	ctx.r4.s64 = ctx.r3.s64 + 29212;
	// addi r11,r7,29240
	ctx.r11.s64 = ctx.r7.s64 + 29240;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1336, ctx.r4.u32);
	// addi r6,r5,29272
	ctx.r6.s64 = ctx.r5.s64 + 29272;
	// stw r11,1340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1340, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r6,1344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1344, ctx.r6.u32);
	// addi r4,r3,29288
	ctx.r4.s64 = ctx.r3.s64 + 29288;
	// addi r3,r7,29308
	ctx.r3.s64 = ctx.r7.s64 + 29308;
	// addi r11,r5,29328
	ctx.r11.s64 = ctx.r5.s64 + 29328;
	// stw r4,1348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1348, ctx.r4.u32);
	// stw r3,1352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1352, ctx.r3.u32);
	// stw r11,1356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1356, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r4,r7,29352
	ctx.r4.s64 = ctx.r7.s64 + 29352;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1360, ctx.r4.u32);
	// addi r11,r6,29372
	ctx.r11.s64 = ctx.r6.s64 + 29372;
	// addi r6,r5,29396
	ctx.r6.s64 = ctx.r5.s64 + 29396;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1364(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1364, ctx.r11.u32);
	// addi r4,r3,29416
	ctx.r4.s64 = ctx.r3.s64 + 29416;
	// stw r6,1368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1368, ctx.r6.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1372, ctx.r4.u32);
	// addi r11,r7,29436
	ctx.r11.s64 = ctx.r7.s64 + 29436;
	// addi r6,r5,29456
	ctx.r6.s64 = ctx.r5.s64 + 29456;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1376, ctx.r11.u32);
	// addi r4,r3,29476
	ctx.r4.s64 = ctx.r3.s64 + 29476;
	// stw r6,1380(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1380, ctx.r6.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1384, ctx.r4.u32);
	// addi r11,r7,29496
	ctx.r11.s64 = ctx.r7.s64 + 29496;
	// addi r6,r5,29512
	ctx.r6.s64 = ctx.r5.s64 + 29512;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1388, ctx.r11.u32);
	// addi r4,r3,29532
	ctx.r4.s64 = ctx.r3.s64 + 29532;
	// stw r6,1392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1392, ctx.r6.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1396, ctx.r4.u32);
	// addi r11,r7,29552
	ctx.r11.s64 = ctx.r7.s64 + 29552;
	// addi r6,r5,29568
	ctx.r6.s64 = ctx.r5.s64 + 29568;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1400, ctx.r11.u32);
	// addi r4,r3,10368
	ctx.r4.s64 = ctx.r3.s64 + 10368;
	// stw r6,1404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1404, ctx.r6.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1408, ctx.r4.u32);
	// addi r11,r7,29592
	ctx.r11.s64 = ctx.r7.s64 + 29592;
	// addi r6,r5,29620
	ctx.r6.s64 = ctx.r5.s64 + 29620;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1412, ctx.r11.u32);
	// addi r4,r3,29644
	ctx.r4.s64 = ctx.r3.s64 + 29644;
	// stw r6,1416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1416, ctx.r6.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1420(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1420, ctx.r4.u32);
	// addi r11,r7,29660
	ctx.r11.s64 = ctx.r7.s64 + 29660;
	// addi r6,r5,22216
	ctx.r6.s64 = ctx.r5.s64 + 22216;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1424, ctx.r11.u32);
	// addi r4,r3,-1084
	ctx.r4.s64 = ctx.r3.s64 + -1084;
	// stw r6,1436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1436, ctx.r6.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1428, ctx.r4.u32);
	// addi r11,r7,29676
	ctx.r11.s64 = ctx.r7.s64 + 29676;
	// addi r5,r5,29700
	ctx.r5.s64 = ctx.r5.s64 + 29700;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1432(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1432, ctx.r11.u32);
	// addi r3,r3,29712
	ctx.r3.s64 = ctx.r3.s64 + 29712;
	// stw r5,1440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1440, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r7,r7,29724
	ctx.r7.s64 = ctx.r7.s64 + 29724;
	// stw r3,1444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1444, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,1448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1448, ctx.r7.u32);
	// addi r4,r4,29740
	ctx.r4.s64 = ctx.r4.s64 + 29740;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r11,29752
	ctx.r11.s64 = ctx.r11.s64 + 29752;
	// stw r4,1452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1452, ctx.r4.u32);
	// addi r7,r5,29764
	ctx.r7.s64 = ctx.r5.s64 + 29764;
	// addi r5,r3,29776
	ctx.r5.s64 = ctx.r3.s64 + 29776;
	// stw r11,1456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1456, ctx.r11.u32);
	// stw r7,1460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1460, ctx.r7.u32);
	// stw r5,1464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1464, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r7,r4,29796
	ctx.r7.s64 = ctx.r4.s64 + 29796;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r3,29812
	ctx.r4.s64 = ctx.r3.s64 + 29812;
	// stw r7,1468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1468, ctx.r7.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1472, ctx.r4.u32);
	// addi r11,r11,29832
	ctx.r11.s64 = ctx.r11.s64 + 29832;
	// addi r5,r5,29848
	ctx.r5.s64 = ctx.r5.s64 + 29848;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1476, ctx.r11.u32);
	// addi r4,r3,29872
	ctx.r4.s64 = ctx.r3.s64 + 29872;
	// stw r5,1480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1480, ctx.r5.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r7,r7,29892
	ctx.r7.s64 = ctx.r7.s64 + 29892;
	// stw r4,1484(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1484, ctx.r4.u32);
	// li r11,500
	ctx.r11.s64 = 500;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,1488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1488, ctx.r7.u32);
	// addi r4,r3,29900
	ctx.r4.s64 = ctx.r3.s64 + 29900;
	// stw r11,4448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4448, ctx.r11.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r7,r5,29908
	ctx.r7.s64 = ctx.r5.s64 + 29908;
	// stw r4,1492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1492, ctx.r4.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r11,4452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4452, ctx.r11.u32);
	// addi r4,r3,29916
	ctx.r4.s64 = ctx.r3.s64 + 29916;
	// stw r7,1496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1496, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r11,4456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4456, ctx.r11.u32);
	// addi r7,r5,29924
	ctx.r7.s64 = ctx.r5.s64 + 29924;
	// stw r4,1500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1500, ctx.r4.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r11,4460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4460, ctx.r11.u32);
	// addi r4,r3,29932
	ctx.r4.s64 = ctx.r3.s64 + 29932;
	// stw r7,1504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1504, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r11,4464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4464, ctx.r11.u32);
	// addi r5,r5,29952
	ctx.r5.s64 = ctx.r5.s64 + 29952;
	// stw r4,1508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1508, ctx.r4.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r10,1512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1512, ctx.r10.u32);
	// addi r3,r3,-7132
	ctx.r3.s64 = ctx.r3.s64 + -7132;
	// stw r5,1516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1516, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r7,r7,29964
	ctx.r7.s64 = ctx.r7.s64 + 29964;
	// stw r3,1524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1524, ctx.r3.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r4,29984
	ctx.r4.s64 = ctx.r4.s64 + 29984;
	// stw r7,1528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1528, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r5,r5,-1352
	ctx.r5.s64 = ctx.r5.s64 + -1352;
	// stw r4,1532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1532, ctx.r4.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r3,r3,29996
	ctx.r3.s64 = ctx.r3.s64 + 29996;
	// stw r5,1536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1536, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r7,r7,30004
	ctx.r7.s64 = ctx.r7.s64 + 30004;
	// stw r3,1540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1540, ctx.r3.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r4,30012
	ctx.r4.s64 = ctx.r4.s64 + 30012;
	// stw r7,1544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1544, ctx.r7.u32);
	// addi r7,r5,30036
	ctx.r7.s64 = ctx.r5.s64 + 30036;
	// li r3,600
	ctx.r3.s64 = 600;
	// stw r4,1548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1548, ctx.r4.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r3,4508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4508, ctx.r3.u32);
	// stw r7,1552(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1552, ctx.r7.u32);
	// addi r3,r5,30052
	ctx.r3.s64 = ctx.r5.s64 + 30052;
	// stw r9,1556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1556, ctx.r9.u32);
	// addi r7,r4,30064
	ctx.r7.s64 = ctx.r4.s64 + 30064;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r9,1560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1560, ctx.r9.u32);
	// stw r3,1564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1564, ctx.r3.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r7,1568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1568, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r9,r5,30084
	ctx.r9.s64 = ctx.r5.s64 + 30084;
	// addi r5,r4,30100
	ctx.r5.s64 = ctx.r4.s64 + 30100;
	// stw r9,1572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1572, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r3,r3,30116
	ctx.r3.s64 = ctx.r3.s64 + 30116;
	// stw r5,1576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1576, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r7,r7,30132
	ctx.r7.s64 = ctx.r7.s64 + 30132;
	// stw r3,1580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1580, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r4,30144
	ctx.r4.s64 = ctx.r4.s64 + 30144;
	// stw r7,1584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1584, ctx.r7.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1588, ctx.r4.u32);
	// addi r9,r9,30156
	ctx.r9.s64 = ctx.r9.s64 + 30156;
	// addi r5,r5,30164
	ctx.r5.s64 = ctx.r5.s64 + 30164;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,1592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1592, ctx.r9.u32);
	// addi r3,r3,30172
	ctx.r3.s64 = ctx.r3.s64 + 30172;
	// stw r5,1596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1596, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r7,r7,30192
	ctx.r7.s64 = ctx.r7.s64 + 30192;
	// stw r3,1600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1600, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r4,30204
	ctx.r4.s64 = ctx.r4.s64 + 30204;
	// stw r7,1604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1604, ctx.r7.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1608, ctx.r4.u32);
	// addi r9,r9,30224
	ctx.r9.s64 = ctx.r9.s64 + 30224;
	// addi r7,r5,30240
	ctx.r7.s64 = ctx.r5.s64 + 30240;
	// addi r4,r3,30256
	ctx.r4.s64 = ctx.r3.s64 + 30256;
	// stw r9,1612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1612, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,1616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1616, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1620, ctx.r4.u32);
	// li r9,975
	ctx.r9.s64 = 975;
	// addi r7,r5,30272
	ctx.r7.s64 = ctx.r5.s64 + 30272;
	// addi r4,r3,30284
	ctx.r4.s64 = ctx.r3.s64 + 30284;
	// stw r9,4580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4580, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,1624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1624, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,1628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1628, ctx.r4.u32);
	// addi r9,r5,30300
	ctx.r9.s64 = ctx.r5.s64 + 30300;
	// stw r11,4588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4588, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r5,r3,30324
	ctx.r5.s64 = ctx.r3.s64 + 30324;
	// stw r9,1632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1632, ctx.r9.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r7,30344
	ctx.r3.s64 = ctx.r7.s64 + 30344;
	// stw r5,1636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1636, ctx.r5.u32);
	// stw r11,4596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4596, ctx.r11.u32);
	// addi r7,r4,30352
	ctx.r7.s64 = ctx.r4.s64 + 30352;
	// stw r3,1640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1640, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,4600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4600, ctx.r11.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,1644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1644, ctx.r7.u32);
	// addi r3,r9,30364
	ctx.r3.s64 = ctx.r9.s64 + 30364;
	// stw r11,4604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4604, ctx.r11.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,1648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1648, ctx.r3.u32);
	// addi r9,r5,30384
	ctx.r9.s64 = ctx.r5.s64 + 30384;
	// addi r7,r4,30404
	ctx.r7.s64 = ctx.r4.s64 + 30404;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r9,1652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1652, ctx.r9.u32);
	// addi r4,r11,5752
	ctx.r4.s64 = ctx.r11.s64 + 5752;
	// stw r7,1656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1656, ctx.r7.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r5,30420
	ctx.r11.s64 = ctx.r5.s64 + 30420;
	// stw r4,1660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1660, ctx.r4.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,2052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2052, ctx.r10.u32);
	// addi r7,r3,30440
	ctx.r7.s64 = ctx.r3.s64 + 30440;
	// stw r11,2056(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2056, ctx.r11.u32);
	// addi r5,r9,30452
	ctx.r5.s64 = ctx.r9.s64 + 30452;
	// stw r7,2060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2060, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r5,2064(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2064, ctx.r5.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r5,2068(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2068, ctx.r5.u32);
	// addi r11,r4,30468
	ctx.r11.s64 = ctx.r4.s64 + 30468;
	// stw r5,2072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2072, ctx.r5.u32);
	// addi r9,r3,30476
	ctx.r9.s64 = ctx.r3.s64 + 30476;
	// stw r5,2096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2096, ctx.r5.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r5,2100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2100, ctx.r5.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r11,2076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2076, ctx.r11.u32);
	// li r4,1100
	ctx.r4.s64 = 1100;
	// stw r9,2080(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2080, ctx.r9.u32);
	// addi r3,r7,30484
	ctx.r3.s64 = ctx.r7.s64 + 30484;
	// stw r6,2084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2084, ctx.r6.u32);
	// addi r11,r5,30504
	ctx.r11.s64 = ctx.r5.s64 + 30504;
	// stw r4,5044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5044, ctx.r4.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r3,2088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2088, ctx.r3.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,2092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2092, ctx.r11.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r10,1668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1668, ctx.r10.u32);
	// addi r5,r9,30512
	ctx.r5.s64 = ctx.r9.s64 + 30512;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r10,1672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1672, ctx.r10.u32);
	// addi r3,r7,30532
	ctx.r3.s64 = ctx.r7.s64 + 30532;
	// stw r5,1860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1860, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r6,30548
	ctx.r10.s64 = ctx.r6.s64 + 30548;
	// stw r3,1872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1872, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r4,30560
	ctx.r7.s64 = ctx.r4.s64 + 30560;
	// stw r10,2104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2104, ctx.r10.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r11,30568
	ctx.r5.s64 = ctx.r11.s64 + 30568;
	// stw r7,1928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1928, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r9,30584
	ctx.r3.s64 = ctx.r9.s64 + 30584;
	// stw r5,1932(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1932, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r6,30592
	ctx.r10.s64 = ctx.r6.s64 + 30592;
	// stw r3,1936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1936, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r4,-3808
	ctx.r7.s64 = ctx.r4.s64 + -3808;
	// stw r10,1940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1940, ctx.r10.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r11,30604
	ctx.r5.s64 = ctx.r11.s64 + 30604;
	// stw r7,1944(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1944, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r9,30620
	ctx.r3.s64 = ctx.r9.s64 + 30620;
	// stw r5,1948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1948, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r6,30628
	ctx.r10.s64 = ctx.r6.s64 + 30628;
	// stw r3,1952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1952, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r4,30640
	ctx.r7.s64 = ctx.r4.s64 + 30640;
	// stw r10,1956(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1956, ctx.r10.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r11,30652
	ctx.r5.s64 = ctx.r11.s64 + 30652;
	// stw r7,1960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1960, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r9,30660
	ctx.r3.s64 = ctx.r9.s64 + 30660;
	// stw r5,1964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1964, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r6,30684
	ctx.r10.s64 = ctx.r6.s64 + 30684;
	// stw r3,2108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2108, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r4,30712
	ctx.r7.s64 = ctx.r4.s64 + 30712;
	// stw r10,2112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2112, ctx.r10.u32);
	// addi r6,r11,30736
	ctx.r6.s64 = ctx.r11.s64 + 30736;
	// addi r5,r9,30764
	ctx.r5.s64 = ctx.r9.s64 + 30764;
	// stw r7,2116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2116, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,2136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2136, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r5,2120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2120, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r4,30792
	ctx.r10.s64 = ctx.r4.s64 + 30792;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r3,30824
	ctx.r7.s64 = ctx.r3.s64 + 30824;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r10,2124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2124, ctx.r10.u32);
	// addi r5,r11,30856
	ctx.r5.s64 = ctx.r11.s64 + 30856;
	// stw r7,2128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2128, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r9,30888
	ctx.r3.s64 = ctx.r9.s64 + 30888;
	// stw r5,2132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2132, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r6,30916
	ctx.r10.s64 = ctx.r6.s64 + 30916;
	// stw r3,2140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2140, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r4,30944
	ctx.r7.s64 = ctx.r4.s64 + 30944;
	// stw r10,2144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2144, ctx.r10.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r11,30952
	ctx.r5.s64 = ctx.r11.s64 + 30952;
	// stw r7,2148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2148, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r9,30960
	ctx.r3.s64 = ctx.r9.s64 + 30960;
	// stw r5,2152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2152, ctx.r5.u32);
	// addi r11,r6,30968
	ctx.r11.s64 = ctx.r6.s64 + 30968;
	// addi r10,r4,30976
	ctx.r10.s64 = ctx.r4.s64 + 30976;
	// stw r3,2156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2156, ctx.r3.u32);
	// stw r11,2160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2160, ctx.r11.u32);
	// stw r10,2164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2164, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819738"))) PPC_WEAK_FUNC(sub_82819738);
PPC_FUNC_IMPL(__imp__sub_82819738) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,1288
	ctx.r9.s64 = ctx.r5.s64 + 1288;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x82819760
	if (!ctx.cr6.eq) goto loc_82819760;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82819760:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819768"))) PPC_WEAK_FUNC(sub_82819768);
PPC_FUNC_IMPL(__imp__sub_82819768) {
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
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218a80
	ctx.lr = 0x828197A8;
	sub_82218A80(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x828197B8;
	sub_82219130(ctx, base);
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

__attribute__((alias("__imp__sub_828197D0"))) PPC_WEAK_FUNC(sub_828197D0);
PPC_FUNC_IMPL(__imp__sub_828197D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x828197D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,230
	ctx.r9.s64 = 230;
	// addi r8,r11,13434
	ctx.r8.s64 = ctx.r11.s64 + 13434;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r11,r10,1248
	ctx.r11.s64 = ctx.r10.s64 + 1248;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828197FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x828197fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828197FC;
	// addi r31,r10,2168
	ctx.r31.s64 = ctx.r10.s64 + 2168;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
loc_82819814:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82218a80
	ctx.lr = 0x82819824;
	sub_82218A80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,52
	ctx.r5.s64 = 52;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82219130
	ctx.lr = 0x82819844;
	sub_82219130(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,52
	ctx.r5.s64 = 52;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mulli r11,r8,52
	ctx.r11.s64 = ctx.r8.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82219130
	ctx.lr = 0x82819864;
	sub_82219130(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,52
	ctx.r5.s64 = 52;
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// mulli r11,r6,52
	ctx.r11.s64 = ctx.r6.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82219130
	ctx.lr = 0x82819884;
	sub_82219130(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,52
	ctx.r5.s64 = 52;
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// bl 0x82219130
	ctx.lr = 0x828198A4;
	sub_82219130(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,52
	ctx.r5.s64 = 52;
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mulli r11,r9,52
	ctx.r11.s64 = ctx.r9.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// bl 0x82219130
	ctx.lr = 0x828198C4;
	sub_82219130(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82819814
	if (ctx.cr6.lt) goto loc_82819814;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828198DC"))) PPC_WEAK_FUNC(sub_828198DC);
PPC_FUNC_IMPL(__imp__sub_828198DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828198E0"))) PPC_WEAK_FUNC(sub_828198E0);
PPC_FUNC_IMPL(__imp__sub_828198E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,1288
	ctx.r9.s64 = ctx.r5.s64 + 1288;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82819908
	if (!ctx.cr6.eq) goto loc_82819908;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82819908:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819910"))) PPC_WEAK_FUNC(sub_82819910);
PPC_FUNC_IMPL(__imp__sub_82819910) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
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
	// lwz r5,-29532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82819960
	if (ctx.cr6.eq) goto loc_82819960;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82819958
	if (ctx.cr6.eq) goto loc_82819958;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82819950
	if (ctx.cr6.eq) goto loc_82819950;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82819964
	goto loc_82819964;
loc_82819950:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82819964
	goto loc_82819964;
loc_82819958:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82819964
	goto loc_82819964;
loc_82819960:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82819964:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82819b50
	if (ctx.cr6.eq) goto loc_82819B50;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r7,1212
	ctx.r9.s64 = ctx.r7.s64 + 1212;
loc_82819974:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828199a8
	if (ctx.cr6.eq) goto loc_828199A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828199a0
	if (ctx.cr6.eq) goto loc_828199A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82819998
	if (ctx.cr6.eq) goto loc_82819998;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828199ac
	goto loc_828199AC;
loc_82819998:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828199ac
	goto loc_828199AC;
loc_828199A0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828199ac
	goto loc_828199AC;
loc_828199A8:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_828199AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82819a2c
	if (ctx.cr6.eq) goto loc_82819A2C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828199e4
	if (ctx.cr6.eq) goto loc_828199E4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828199dc
	if (ctx.cr6.eq) goto loc_828199DC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828199d4
	if (ctx.cr6.eq) goto loc_828199D4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828199e8
	goto loc_828199E8;
loc_828199D4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828199e8
	goto loc_828199E8;
loc_828199DC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828199e8
	goto loc_828199E8;
loc_828199E4:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_828199E8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82819a10
	if (ctx.cr6.eq) goto loc_82819A10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82819a08
	if (ctx.cr6.eq) goto loc_82819A08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82819a14
	if (!ctx.cr6.eq) goto loc_82819A14;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82819a14
	goto loc_82819A14;
loc_82819A08:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82819a14
	goto loc_82819A14;
loc_82819A10:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82819A14:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82819b50
	if (ctx.cr6.eq) goto loc_82819B50;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x82819974
	if (ctx.cr6.lt) goto loc_82819974;
loc_82819A2C:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r7,2168
	ctx.r9.s64 = ctx.r7.s64 + 2168;
loc_82819A34:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82819A38:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82819a68
	if (ctx.cr6.eq) goto loc_82819A68;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82819a60
	if (ctx.cr6.eq) goto loc_82819A60;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82819a58
	if (ctx.cr6.eq) goto loc_82819A58;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82819a6c
	goto loc_82819A6C;
loc_82819A58:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82819a6c
	goto loc_82819A6C;
loc_82819A60:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82819a6c
	goto loc_82819A6C;
loc_82819A68:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82819A6C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r7,52
	ctx.r11.s64 = ctx.r7.s64 * 52;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82819aac
	if (ctx.cr6.eq) goto loc_82819AAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82819aa4
	if (ctx.cr6.eq) goto loc_82819AA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82819ab0
	if (!ctx.cr6.eq) goto loc_82819AB0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82819ab0
	goto loc_82819AB0;
loc_82819AA4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82819ab0
	goto loc_82819AB0;
loc_82819AAC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82819AB0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82819b44
	if (ctx.cr6.eq) goto loc_82819B44;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82819ae8
	if (ctx.cr6.eq) goto loc_82819AE8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82819ae0
	if (ctx.cr6.eq) goto loc_82819AE0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82819ad8
	if (ctx.cr6.eq) goto loc_82819AD8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82819aec
	goto loc_82819AEC;
loc_82819AD8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82819aec
	goto loc_82819AEC;
loc_82819AE0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82819aec
	goto loc_82819AEC;
loc_82819AE8:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82819AEC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r7,52
	ctx.r11.s64 = ctx.r7.s64 * 52;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82819b2c
	if (ctx.cr6.eq) goto loc_82819B2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82819b24
	if (ctx.cr6.eq) goto loc_82819B24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82819b30
	if (!ctx.cr6.eq) goto loc_82819B30;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82819b30
	goto loc_82819B30;
loc_82819B24:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82819b30
	goto loc_82819B30;
loc_82819B2C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82819B30:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82819b44
	if (ctx.cr6.eq) goto loc_82819B44;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x82819a38
	if (ctx.cr6.lt) goto loc_82819A38;
loc_82819B44:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82819a34
	if (ctx.cr6.lt) goto loc_82819A34;
loc_82819B50:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819B58"))) PPC_WEAK_FUNC(sub_82819B58);
PPC_FUNC_IMPL(__imp__sub_82819B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82819B60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// addi r9,r29,1212
	ctx.r9.s64 = ctx.r29.s64 + 1212;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82819B90:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82819bc4
	if (ctx.cr6.eq) goto loc_82819BC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82819bbc
	if (ctx.cr6.eq) goto loc_82819BBC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82819bb4
	if (ctx.cr6.eq) goto loc_82819BB4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82819bc8
	goto loc_82819BC8;
loc_82819BB4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82819bc8
	goto loc_82819BC8;
loc_82819BBC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82819bc8
	goto loc_82819BC8;
loc_82819BC4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82819BC8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82819bf8
	if (ctx.cr6.eq) goto loc_82819BF8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82819bf0
	if (ctx.cr6.eq) goto loc_82819BF0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82819be8
	if (ctx.cr6.eq) goto loc_82819BE8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82819bfc
	goto loc_82819BFC;
loc_82819BE8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82819bfc
	goto loc_82819BFC;
loc_82819BF0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82819bfc
	goto loc_82819BFC;
loc_82819BF8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82819BFC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82819c20
	if (ctx.cr6.eq) goto loc_82819C20;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82819b90
	if (ctx.cr6.lt) goto loc_82819B90;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82819C20:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bge cr6,0x82819c50
	if (!ctx.cr6.lt) goto loc_82819C50;
	// addi r11,r30,303
	ctx.r11.s64 = ctx.r30.s64 + 303;
	// addi r9,r30,304
	ctx.r9.s64 = ctx.r30.s64 + 304;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r31,r30,7
	ctx.xer.ca = ctx.r30.u32 <= 7;
	ctx.r31.s64 = 7 - ctx.r30.s64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822195b8
	ctx.lr = 0x82819C4C;
	sub_822195B8(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82819C50:
	// addi r11,r30,303
	ctx.r11.s64 = ctx.r30.s64 + 303;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stwx r27,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82819C6C"))) PPC_WEAK_FUNC(sub_82819C6C);
PPC_FUNC_IMPL(__imp__sub_82819C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82819C70"))) PPC_WEAK_FUNC(sub_82819C70);
PPC_FUNC_IMPL(__imp__sub_82819C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82819C78;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82819D14:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82819d14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82819D14;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r7,r29,1288
	ctx.r7.s64 = ctx.r29.s64 + 1288;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82819d50
	if (!ctx.cr6.eq) goto loc_82819D50;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82819e00
	goto loc_82819E00;
loc_82819D50:
	// addi r10,r29,805
	ctx.r10.s64 = ctx.r29.s64 + 805;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lis r7,26214
	ctx.r7.s64 = 1717960704;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// ori r4,r7,26215
	ctx.r4.u64 = ctx.r7.u64 | 26215;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r31,r11,2168
	ctx.r31.s64 = ctx.r11.s64 + 2168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r8,2172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2172);
	// mullw r10,r8,r29
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// mulhw r6,r7,r4
	ctx.r6.s64 = (int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32)) >> 32;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// li r5,52
	ctx.r5.s64 = 52;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r28,r4,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r4.s64;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82219130
	ctx.lr = 0x82819DC0;
	sub_82219130(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82819DCC:
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82819dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82819DCC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,52
	ctx.r5.s64 = 52;
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r11,r9,52
	ctx.r11.s64 = ctx.r9.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82219130
	ctx.lr = 0x82819E00;
	sub_82219130(ctx, base);
loc_82819E00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82219130
	ctx.lr = 0x82819E10;
	sub_82219130(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82819E18"))) PPC_WEAK_FUNC(sub_82819E18);
PPC_FUNC_IMPL(__imp__sub_82819E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82819E20;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// lis r7,-31945
	ctx.r7.s64 = -2093547520;
	// addi r27,r9,29280
	ctx.r27.s64 = ctx.r9.s64 + 29280;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// addi r6,r7,-17544
	ctx.r6.s64 = ctx.r7.s64 + -17544;
	// lwz r3,164(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r26,13180(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r11,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r11.u32);
	// stb r9,40(r6)
	PPC_STORE_U8(ctx.r6.u32 + 40, ctx.r9.u8);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x82819ec8
	if (ctx.cr6.eq) goto loc_82819EC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82819E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82819ec8
	if (ctx.cr6.eq) goto loc_82819EC8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82819EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82819EC8:
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r26.u32);
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

__attribute__((alias("__imp__sub_82819EE0"))) PPC_WEAK_FUNC(sub_82819EE0);
PPC_FUNC_IMPL(__imp__sub_82819EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82819EE8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad18
	ctx.lr = 0x82819EF0;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r17,-31942
	ctx.r17.s64 = -2093350912;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r16,-31942
	ctx.r16.s64 = -2093350912;
	// lis r18,-31942
	ctx.r18.s64 = -2093350912;
	// lis r15,-31942
	ctx.r15.s64 = -2093350912;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r9,13188(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13188);
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r8,13180(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 13180);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r14,-31942
	ctx.r14.s64 = -2093350912;
	// lwz r10,13192(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13192);
	// lwz r7,13184(r15)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13184);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r11,13180(r16)
	PPC_STORE_U32(ctx.r16.u32 + 13180, ctx.r11.u32);
	// lfs f31,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,13184(r15)
	PPC_STORE_U32(ctx.r15.u32 + 13184, ctx.r11.u32);
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lfs f29,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f29.f64 = double(temp.f32);
	// stw r3,13192(r18)
	PPC_STORE_U32(ctx.r18.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 13188, ctx.r3.u32);
	// ori r21,r7,3760
	ctx.r21.u64 = ctx.r7.u64 | 3760;
	// addi r23,r11,29280
	ctx.r23.s64 = ctx.r11.s64 + 29280;
	// addi r22,r10,-17544
	ctx.r22.s64 = ctx.r10.s64 + -17544;
loc_82819F78:
	// addi r11,r31,11487
	ctx.r11.s64 = ctx.r31.s64 + 11487;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r25,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x8281a198
	if (ctx.cr6.gt) goto loc_8281A198;
	// addi r11,r31,11582
	ctx.r11.s64 = ctx.r31.s64 + 11582;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r26,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8281a3b0
	if (!ctx.cr6.gt) goto loc_8281A3B0;
	// lwz r11,12492(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82819FAC;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82819fc0
	if (ctx.cr6.eq) goto loc_82819FC0;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x8281a070
	if (ctx.cr6.gt) goto loc_8281A070;
loc_82819FC0:
	// addi r29,r24,1668
	ctx.r29.s64 = ctx.r24.s64 + 1668;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r23,4
	ctx.r27.s64 = ctx.r23.s64 + 4;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82819FD0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r9,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x8281a004
	if (!ctx.cr6.eq) goto loc_8281A004;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82218a80
	ctx.lr = 0x8281A000;
	sub_82218A80(ctx, base);
	// b 0x8281a010
	goto loc_8281A010;
loc_8281A004:
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// bge cr6,0x8281a010
	if (!ctx.cr6.lt) goto loc_8281A010;
	// stbx r19,r31,r22
	PPC_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r19.u8);
loc_8281A010:
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a05c
	if (ctx.cr6.eq) goto loc_8281A05C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a05c
	if (ctx.cr6.eq) goto loc_8281A05C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A05C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// blt cr6,0x82819fd0
	if (ctx.cr6.lt) goto loc_82819FD0;
	// stwx r20,r26,r24
	PPC_STORE_U32(ctx.r26.u32 + ctx.r24.u32, ctx.r20.u32);
	// b 0x8281a3b0
	goto loc_8281A3B0;
loc_8281A070:
	// addi r11,r31,17278
	ctx.r11.s64 = ctx.r31.s64 + 17278;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r24,r21
	ctx.r29.u64 = ctx.r24.u64 + ctx.r21.u64;
	// addi r28,r24,1668
	ctx.r28.s64 = ctx.r24.s64 + 1668;
	// lfsx f13,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8281A08C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r28
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8281a188
	if (ctx.cr6.eq) goto loc_8281A188;
	// fsel f0,f30,f30,f29
	ctx.f0.f64 = ctx.f30.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// fsel f12,f13,f31,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfsx f8,r5,r28
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f28,f8,f10,f9
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// bne cr6,0x8281a128
	if (!ctx.cr6.eq) goto loc_8281A128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82218a80
	ctx.lr = 0x8281A124;
	sub_82218A80(ctx, base);
	// b 0x8281a134
	goto loc_8281A134;
loc_8281A128:
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// bge cr6,0x8281a134
	if (!ctx.cr6.lt) goto loc_8281A134;
	// stbx r19,r31,r22
	PPC_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r19.u8);
loc_8281A134:
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r23,4
	ctx.r26.s64 = ctx.r23.s64 + 4;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a160
	if (ctx.cr6.eq) goto loc_8281A160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A160:
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a188
	if (ctx.cr6.eq) goto loc_8281A188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A188:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// blt cr6,0x8281a08c
	if (ctx.cr6.lt) goto loc_8281A08C;
	// b 0x8281a3b0
	goto loc_8281A3B0;
loc_8281A198:
	// lwz r11,12492(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x8281A1A4;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a1b8
	if (ctx.cr6.eq) goto loc_8281A1B8;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x8281a28c
	if (ctx.cr6.gt) goto loc_8281A28C;
loc_8281A1B8:
	// addi r27,r24,1668
	ctx.r27.s64 = ctx.r24.s64 + 1668;
	// add r26,r24,r21
	ctx.r26.u64 = ctx.r24.u64 + ctx.r21.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_8281A1C4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r27
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8281a278
	if (ctx.cr6.eq) goto loc_8281A278;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8281a218
	if (!ctx.cr6.eq) goto loc_8281A218;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x8281A214;
	sub_82218A80(ctx, base);
	// b 0x8281a224
	goto loc_8281A224;
loc_8281A218:
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// bge cr6,0x8281a224
	if (!ctx.cr6.lt) goto loc_8281A224;
	// stbx r20,r31,r22
	PPC_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r20.u8);
loc_8281A224:
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r23,4
	ctx.r29.s64 = ctx.r23.s64 + 4;
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a250
	if (ctx.cr6.eq) goto loc_8281A250;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A250:
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a278
	if (ctx.cr6.eq) goto loc_8281A278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A278:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// blt cr6,0x8281a1c4
	if (ctx.cr6.lt) goto loc_8281A1C4;
	// stwx r20,r25,r24
	PPC_STORE_U32(ctx.r25.u32 + ctx.r24.u32, ctx.r20.u32);
	// b 0x8281a3b0
	goto loc_8281A3B0;
loc_8281A28C:
	// addi r11,r31,11535
	ctx.r11.s64 = ctx.r31.s64 + 11535;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r24,1668
	ctx.r28.s64 = ctx.r24.s64 + 1668;
	// add r29,r24,r21
	ctx.r29.u64 = ctx.r24.u64 + ctx.r21.u64;
	// lfsx f13,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8281A2A8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r28
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8281a3a4
	if (ctx.cr6.eq) goto loc_8281A3A4;
	// fsel f0,f30,f30,f29
	ctx.f0.f64 = ctx.f30.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// fsel f12,f13,f31,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r7,r28
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfsx f8,r5,r29
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f28,f8,f10,f9
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// bne cr6,0x8281a344
	if (!ctx.cr6.eq) goto loc_8281A344;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82218a80
	ctx.lr = 0x8281A340;
	sub_82218A80(ctx, base);
	// b 0x8281a350
	goto loc_8281A350;
loc_8281A344:
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// bge cr6,0x8281a350
	if (!ctx.cr6.lt) goto loc_8281A350;
	// stbx r19,r31,r22
	PPC_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r19.u8);
loc_8281A350:
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r23,4
	ctx.r26.s64 = ctx.r23.s64 + 4;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a37c
	if (ctx.cr6.eq) goto loc_8281A37C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A37C:
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a3a4
	if (ctx.cr6.eq) goto loc_8281A3A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A3A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// blt cr6,0x8281a2a8
	if (ctx.cr6.lt) goto loc_8281A2A8;
loc_8281A3B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,46
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 46, ctx.xer);
	// blt cr6,0x82819f78
	if (ctx.cr6.lt) goto loc_82819F78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,13192(r18)
	PPC_STORE_U32(ctx.r18.u32 + 13192, ctx.r11.u32);
	// stw r10,13180(r16)
	PPC_STORE_U32(ctx.r16.u32 + 13180, ctx.r10.u32);
	// stw r9,13184(r15)
	PPC_STORE_U32(ctx.r15.u32 + 13184, ctx.r9.u32);
	// stw r8,13188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 13188, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad64
	ctx.lr = 0x8281A3E8;
	__restfpr_28(ctx, base);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281A3EC"))) PPC_WEAK_FUNC(sub_8281A3EC);
PPC_FUNC_IMPL(__imp__sub_8281A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281A3F0"))) PPC_WEAK_FUNC(sub_8281A3F0);
PPC_FUNC_IMPL(__imp__sub_8281A3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8281A3F8;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8221ad14
	ctx.lr = 0x8281A400;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// addi r31,r9,29280
	ctx.r31.s64 = ctx.r9.s64 + 29280;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// addi r30,r8,-17544
	ctx.r30.s64 = ctx.r8.s64 + -17544;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r25,13180(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r24,13192(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r23,13188(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r22,13184(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// stw r11,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r11.u32);
	// stw r10,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r10.u32);
	// stw r11,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r11.u32);
	// stb r9,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r9.u8);
	// stw r10,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x8281a4bc
	if (ctx.cr6.eq) goto loc_8281A4BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a4bc
	if (ctx.cr6.eq) goto loc_8281A4BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
loc_8281A4BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r11.u8);
	// beq cr6,0x8281a510
	if (ctx.cr6.eq) goto loc_8281A510;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a510
	if (ctx.cr6.eq) goto loc_8281A510;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
loc_8281A510:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r11.u8);
	// beq cr6,0x8281a564
	if (ctx.cr6.eq) goto loc_8281A564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a564
	if (ctx.cr6.eq) goto loc_8281A564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
loc_8281A564:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r11.u8);
	// beq cr6,0x8281a5b8
	if (ctx.cr6.eq) goto loc_8281A5B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a5b8
	if (ctx.cr6.eq) goto loc_8281A5B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
loc_8281A5B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r11.u8);
	// beq cr6,0x8281a608
	if (ctx.cr6.eq) goto loc_8281A608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a608
	if (ctx.cr6.eq) goto loc_8281A608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A608:
	// stw r24,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r24.u32);
	// stw r25,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r25.u32);
	// stw r22,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r22.u32);
	// stw r23,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8221ad60
	ctx.lr = 0x8281A624;
	__restfpr_27(ctx, base);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281A628"))) PPC_WEAK_FUNC(sub_8281A628);
PPC_FUNC_IMPL(__imp__sub_8281A628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8281A630;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r27,r9,29280
	ctx.r27.s64 = ctx.r9.s64 + 29280;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r26,r8,-17544
	ctx.r26.s64 = ctx.r8.s64 + -17544;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r23,13188(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r11.u32);
	// stb r9,38(r26)
	PPC_STORE_U8(ctx.r26.u32 + 38, ctx.r9.u8);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x8281a6fc
	if (ctx.cr6.eq) goto loc_8281A6FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a6fc
	if (ctx.cr6.eq) goto loc_8281A6FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8281A6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
loc_8281A6FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,38(r26)
	PPC_STORE_U8(ctx.r26.u32 + 38, ctx.r11.u8);
	// beq cr6,0x8281a750
	if (ctx.cr6.eq) goto loc_8281A750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a750
	if (ctx.cr6.eq) goto loc_8281A750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
loc_8281A750:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,38(r26)
	PPC_STORE_U8(ctx.r26.u32 + 38, ctx.r11.u8);
	// beq cr6,0x8281a7a0
	if (ctx.cr6.eq) goto loc_8281A7A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281a7a0
	if (ctx.cr6.eq) goto loc_8281A7A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8281A7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8281A7A0:
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r23,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281A7C0"))) PPC_WEAK_FUNC(sub_8281A7C0);
PPC_FUNC_IMPL(__imp__sub_8281A7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8281A7C8;
	__savegprlr_20(ctx, base);
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// addi r10,r31,11582
	ctx.r10.s64 = ctx.r31.s64 + 11582;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r24,13192(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// lwz r23,13188(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// stw r3,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r3.u32);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r22,13180(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r21,13184(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8281a84c
	if (ctx.cr6.gt) goto loc_8281A84C;
	// addi r11,r31,11487
	ctx.r11.s64 = ctx.r31.s64 + 11487;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8281a888
	if (!ctx.cr6.gt) goto loc_8281A888;
loc_8281A84C:
	// addi r9,r31,11487
	ctx.r9.s64 = ctx.r31.s64 + 11487;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// li r20,7
	ctx.r20.s64 = 7;
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
loc_8281A86C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf0088
	ctx.lr = 0x8281A880;
	sub_82BF0088(ctx, base);
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x8281a86c
	if (!ctx.cr0.eq) goto loc_8281A86C;
loc_8281A888:
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r11,r30,1668
	ctx.r11.s64 = ctx.r30.s64 + 1668;
	// addi r9,r9,3760
	ctx.r9.s64 = ctx.r9.s64 + 3760;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f29,r6,r9
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,1672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f30,r8,r11
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// bl 0x82bf0088
	ctx.lr = 0x8281A8D8;
	sub_82BF0088(ctx, base);
	// stw r24,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_8281A8FC"))) PPC_WEAK_FUNC(sub_8281A8FC);
PPC_FUNC_IMPL(__imp__sub_8281A8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281A900"))) PPC_WEAK_FUNC(sub_8281A900);
PPC_FUNC_IMPL(__imp__sub_8281A900) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,16766
	ctx.r10.s64 = ctx.r4.s64 + 16766;
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

__attribute__((alias("__imp__sub_8281A92C"))) PPC_WEAK_FUNC(sub_8281A92C);
PPC_FUNC_IMPL(__imp__sub_8281A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281A930"))) PPC_WEAK_FUNC(sub_8281A930);
PPC_FUNC_IMPL(__imp__sub_8281A930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,11230
	ctx.r10.s64 = ctx.r5.s64 + 11230;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8281a954
	if (ctx.cr6.lt) goto loc_8281A954;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8281A954:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281A95C"))) PPC_WEAK_FUNC(sub_8281A95C);
PPC_FUNC_IMPL(__imp__sub_8281A95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281A960"))) PPC_WEAK_FUNC(sub_8281A960);
PPC_FUNC_IMPL(__imp__sub_8281A960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8281a99c
	if (ctx.cr6.eq) goto loc_8281A99C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281a98c
	if (ctx.cr6.eq) goto loc_8281A98C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8281a9a4
	if (!ctx.cr6.eq) goto loc_8281A9A4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8281a9a4
	goto loc_8281A9A4;
loc_8281A98C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8281a9a4
	goto loc_8281A9A4;
loc_8281A99C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r5,-29532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8281A9A4:
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-21640
	ctx.r10.s64 = ctx.r10.s64 + -21640;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281A9B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8281a9d4
	if (ctx.cr6.eq) goto loc_8281A9D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x8281a9b4
	if (ctx.cr6.lt) goto loc_8281A9B4;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8281A9D4:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8281aa08
	if (!ctx.cr6.eq) goto loc_8281AA08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8281A9E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8281aa00
	if (ctx.cr6.eq) goto loc_8281AA00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8281a9e0
	if (ctx.cr6.lt) goto loc_8281A9E0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8281AA00:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281AA08:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281AA10"))) PPC_WEAK_FUNC(sub_8281AA10);
PPC_FUNC_IMPL(__imp__sub_8281AA10) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,11230
	ctx.r10.s64 = ctx.r5.s64 + 11230;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8281aae0
	if (!ctx.cr6.gt) goto loc_8281AAE0;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r8,r8,-18980
	ctx.r8.s64 = ctx.r8.s64 + -18980;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r7,r11,r5
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r31,-29532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8281AA5C:
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281aa94
	if (ctx.cr6.eq) goto loc_8281AA94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281aa8c
	if (ctx.cr6.eq) goto loc_8281AA8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281aa98
	if (!ctx.cr6.eq) goto loc_8281AA98;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281aa98
	goto loc_8281AA98;
loc_8281AA8C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281aa98
	goto loc_8281AA98;
loc_8281AA94:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8281AA98:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281aac8
	if (ctx.cr6.eq) goto loc_8281AAC8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281aac0
	if (ctx.cr6.eq) goto loc_8281AAC0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281aab8
	if (ctx.cr6.eq) goto loc_8281AAB8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281aacc
	goto loc_8281AACC;
loc_8281AAB8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281aacc
	goto loc_8281AACC;
loc_8281AAC0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8281aacc
	goto loc_8281AACC;
loc_8281AAC8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8281AACC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8281aaf4
	if (ctx.cr6.eq) goto loc_8281AAF4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8281aa5c
	if (ctx.cr6.lt) goto loc_8281AA5C;
loc_8281AAE0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8281AAF4:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281AB04"))) PPC_WEAK_FUNC(sub_8281AB04);
PPC_FUNC_IMPL(__imp__sub_8281AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281AB08"))) PPC_WEAK_FUNC(sub_8281AB08);
PPC_FUNC_IMPL(__imp__sub_8281AB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
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
	// blt cr6,0x8281ac04
	if (ctx.cr6.lt) goto loc_8281AC04;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bge cr6,0x8281ac04
	if (!ctx.cr6.lt) goto loc_8281AC04;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8281ac04
	if (ctx.cr6.lt) goto loc_8281AC04;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bge cr6,0x8281ac04
	if (!ctx.cr6.lt) goto loc_8281AC04;
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// addi r7,r7,-18980
	ctx.r7.s64 = ctx.r7.s64 + -18980;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r10,r11,2964
	ctx.r10.s64 = ctx.r11.s64 + 2964;
	// lfs f0,29744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r11,23432
	ctx.r9.s64 = ctx.r11.s64 + 23432;
	// addi r30,r30,-31896
	ctx.r30.s64 = ctx.r30.s64 + -31896;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// lfs f13,27476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 27476);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r31,r8,2
	ctx.r31.s64 = ctx.r8.s64 + 2;
	// addi r8,r11,13172
	ctx.r8.s64 = ctx.r11.s64 + 13172;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,-8684
	ctx.r3.s64 = ctx.r3.s64 + -8684;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r7,2968(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2968);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r6,r7,2
	ctx.r6.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r7,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r6,23436(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23436);
	// mullw r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// lwz r7,13176(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13176);
	// mullw r11,r7,r4
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
loc_8281AC04:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281AC10"))) PPC_WEAK_FUNC(sub_8281AC10);
PPC_FUNC_IMPL(__imp__sub_8281AC10) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8281AC18;
	__savegprlr_29(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r10,13434
	ctx.r7.s64 = ctx.r10.s64 + 13434;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r8,27896
	ctx.r11.s64 = ctx.r8.s64 + 27896;
	// addi r4,r9,7432
	ctx.r4.s64 = ctx.r9.s64 + 7432;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,27920
	ctx.r9.s64 = ctx.r6.s64 + 27920;
	// lwz r8,48(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r6,r3,27932
	ctx.r6.s64 = ctx.r3.s64 + 27932;
	// addi r3,r10,27948
	ctx.r3.s64 = ctx.r10.s64 + 27948;
	// addi r10,r5,27960
	ctx.r10.s64 = ctx.r5.s64 + 27960;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,1072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1072, ctx.r7.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r4,1028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1028, ctx.r4.u32);
	// addi r5,r5,27976
	ctx.r5.s64 = ctx.r5.s64 + 27976;
	// stw r11,1076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1076, ctx.r11.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r9,1148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1148, ctx.r9.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r6,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r6.u32);
	// addi r7,r7,-6224
	ctx.r7.s64 = ctx.r7.s64 + -6224;
	// stw r3,1156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1156, ctx.r3.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r3,1160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1160, ctx.r3.u32);
	// addi r4,r4,-6212
	ctx.r4.s64 = ctx.r4.s64 + -6212;
	// stw r10,1164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1164, ctx.r10.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r9,1168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1168, ctx.r9.u32);
	// addi r11,r11,-6200
	ctx.r11.s64 = ctx.r11.s64 + -6200;
	// stw r6,1172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1172, ctx.r6.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r5,1176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1176, ctx.r5.u32);
	// addi r31,r31,-6188
	ctx.r31.s64 = ctx.r31.s64 + -6188;
	// stw r5,1180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1180, ctx.r5.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r9,1184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1184, ctx.r9.u32);
	// addi r3,r3,-6176
	ctx.r3.s64 = ctx.r3.s64 + -6176;
	// stw r9,1188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1188, ctx.r9.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r6,1192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1192, ctx.r6.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r5,1196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1196, ctx.r5.u32);
	// addi r10,r10,-6164
	ctx.r10.s64 = ctx.r10.s64 + -6164;
	// stw r5,1200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1200, ctx.r5.u32);
	// addi r5,r30,-6152
	ctx.r5.s64 = ctx.r30.s64 + -6152;
	// stw r9,1204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1204, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r7,1208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1208, ctx.r7.u32);
	// addi r7,r29,-6140
	ctx.r7.s64 = ctx.r29.s64 + -6140;
	// stw r4,1212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1212, ctx.r4.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,1216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1216, ctx.r11.u32);
	// addi r11,r6,-6128
	ctx.r11.s64 = ctx.r6.s64 + -6128;
	// stw r31,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r31.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r3,1224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1224, ctx.r3.u32);
	// addi r3,r9,-6116
	ctx.r3.s64 = ctx.r9.s64 + -6116;
	// stw r10,1228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1228, ctx.r10.u32);
	// addi r10,r4,-6104
	ctx.r10.s64 = ctx.r4.s64 + -6104;
	// stw r5,1232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1232, ctx.r5.u32);
	// addi r9,r6,-6092
	ctx.r9.s64 = ctx.r6.s64 + -6092;
	// stw r7,1236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1236, ctx.r7.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,1240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1240, ctx.r11.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r3,1244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1244, ctx.r3.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r10,1248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1248, ctx.r10.u32);
	// stw r9,1252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1252, ctx.r9.u32);
	// addi r3,r7,27988
	ctx.r3.s64 = ctx.r7.s64 + 27988;
	// addi r11,r6,-6068
	ctx.r11.s64 = ctx.r6.s64 + -6068;
	// addi r10,r5,28000
	ctx.r10.s64 = ctx.r5.s64 + 28000;
	// addi r9,r4,28008
	ctx.r9.s64 = ctx.r4.s64 + 28008;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r3,1256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1256, ctx.r3.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r11,1260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1260, ctx.r11.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r10,1388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1388, ctx.r10.u32);
	// addi r4,r7,28024
	ctx.r4.s64 = ctx.r7.s64 + 28024;
	// stw r9,1392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1392, ctx.r9.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r6,-11484
	ctx.r11.s64 = ctx.r6.s64 + -11484;
	// stw r4,1396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1396, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28036
	ctx.r9.s64 = ctx.r5.s64 + 28036;
	// stw r11,1400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1400, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r3,28048
	ctx.r6.s64 = ctx.r3.s64 + 28048;
	// stw r9,1404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1404, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r10,28064
	ctx.r4.s64 = ctx.r10.s64 + 28064;
	// stw r6,1408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1408, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r7,28080
	ctx.r11.s64 = ctx.r7.s64 + 28080;
	// stw r4,1412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1412, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28100
	ctx.r9.s64 = ctx.r5.s64 + 28100;
	// stw r11,1416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1416, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r3,28120
	ctx.r6.s64 = ctx.r3.s64 + 28120;
	// stw r9,1420(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1420, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r10,28136
	ctx.r4.s64 = ctx.r10.s64 + 28136;
	// stw r6,1424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1424, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r7,28164
	ctx.r11.s64 = ctx.r7.s64 + 28164;
	// stw r4,1428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1428, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28196
	ctx.r9.s64 = ctx.r5.s64 + 28196;
	// stw r11,1432(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1432, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r3,28232
	ctx.r6.s64 = ctx.r3.s64 + 28232;
	// stw r9,1436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1436, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r10,28268
	ctx.r4.s64 = ctx.r10.s64 + 28268;
	// stw r6,1440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1440, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r7,28304
	ctx.r11.s64 = ctx.r7.s64 + 28304;
	// stw r4,1444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1444, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28336
	ctx.r9.s64 = ctx.r5.s64 + 28336;
	// stw r11,1448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1448, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r3,28364
	ctx.r6.s64 = ctx.r3.s64 + 28364;
	// stw r9,1452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1452, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r10,28380
	ctx.r4.s64 = ctx.r10.s64 + 28380;
	// stw r6,1456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1456, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r7,28396
	ctx.r11.s64 = ctx.r7.s64 + 28396;
	// stw r4,1460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1460, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28420
	ctx.r9.s64 = ctx.r5.s64 + 28420;
	// stw r11,1508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1508, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r3,28440
	ctx.r6.s64 = ctx.r3.s64 + 28440;
	// stw r9,1512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1512, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r10,28464
	ctx.r4.s64 = ctx.r10.s64 + 28464;
	// stw r6,1516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1516, ctx.r6.u32);
	// addi r3,r7,28492
	ctx.r3.s64 = ctx.r7.s64 + 28492;
	// addi r11,r5,28520
	ctx.r11.s64 = ctx.r5.s64 + 28520;
	// stw r4,1520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1520, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,1524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1524, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,1528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1528, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,28548
	ctx.r5.s64 = ctx.r10.s64 + 28548;
	// addi r4,r9,28572
	ctx.r4.s64 = ctx.r9.s64 + 28572;
	// addi r3,r7,28596
	ctx.r3.s64 = ctx.r7.s64 + 28596;
	// addi r11,r6,28616
	ctx.r11.s64 = ctx.r6.s64 + 28616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r5,1532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1532, ctx.r5.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r4,1536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1536, ctx.r4.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r3,1540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1540, ctx.r3.u32);
	// addi r6,r10,28644
	ctx.r6.s64 = ctx.r10.s64 + 28644;
	// stw r11,1544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1544, ctx.r11.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r9,28672
	ctx.r4.s64 = ctx.r9.s64 + 28672;
	// stw r6,1548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1548, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r7,28696
	ctx.r11.s64 = ctx.r7.s64 + 28696;
	// stw r4,1552(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1552, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28704
	ctx.r9.s64 = ctx.r5.s64 + 28704;
	// stw r11,1560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1560, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r3,28724
	ctx.r6.s64 = ctx.r3.s64 + 28724;
	// stw r9,1556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1556, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r10,28736
	ctx.r4.s64 = ctx.r10.s64 + 28736;
	// stw r6,1564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1564, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r7,28748
	ctx.r11.s64 = ctx.r7.s64 + 28748;
	// stw r4,1568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1568, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28760
	ctx.r9.s64 = ctx.r5.s64 + 28760;
	// stw r11,1572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1572, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r3,28772
	ctx.r6.s64 = ctx.r3.s64 + 28772;
	// stw r9,1576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1576, ctx.r9.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r4,r10,28780
	ctx.r4.s64 = ctx.r10.s64 + 28780;
	// stw r6,1628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1628, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r11,r7,28792
	ctx.r11.s64 = ctx.r7.s64 + 28792;
	// stw r4,1632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1632, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r5,28804
	ctx.r9.s64 = ctx.r5.s64 + 28804;
	// stw r11,1636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1636, ctx.r11.u32);
	// addi r7,r3,28820
	ctx.r7.s64 = ctx.r3.s64 + 28820;
	// addi r6,r10,28832
	ctx.r6.s64 = ctx.r10.s64 + 28832;
	// stw r9,1640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1640, ctx.r9.u32);
	// stw r7,1644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1644, ctx.r7.u32);
	// stw r6,1648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1648, ctx.r6.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281AF5C"))) PPC_WEAK_FUNC(sub_8281AF5C);
PPC_FUNC_IMPL(__imp__sub_8281AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281AF60"))) PPC_WEAK_FUNC(sub_8281AF60);
PPC_FUNC_IMPL(__imp__sub_8281AF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8281af7c
	if (ctx.cr6.lt) goto loc_8281AF7C;
	// cmpwi cr6,r5,160
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 160, ctx.xer);
	// blt cr6,0x8281af8c
	if (ctx.cr6.lt) goto loc_8281AF8C;
loc_8281AF7C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-16764
	ctx.r10.s64 = ctx.r11.s64 + -16764;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8281AF8C:
	// addi r10,r5,257
	ctx.r10.s64 = ctx.r5.s64 + 257;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281AFA0"))) PPC_WEAK_FUNC(sub_8281AFA0);
PPC_FUNC_IMPL(__imp__sub_8281AFA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,23380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23380);
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

__attribute__((alias("__imp__sub_8281AFC8"))) PPC_WEAK_FUNC(sub_8281AFC8);
PPC_FUNC_IMPL(__imp__sub_8281AFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8281b008
	if (ctx.cr6.eq) goto loc_8281B008;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281aff8
	if (ctx.cr6.eq) goto loc_8281AFF8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8281b010
	if (!ctx.cr6.eq) goto loc_8281B010;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281b010
	goto loc_8281B010;
loc_8281AFF8:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8281b010
	goto loc_8281B010;
loc_8281B008:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r4,-29532(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8281B010:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8281b01c
	if (!ctx.cr6.eq) goto loc_8281B01C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281B01C:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x8281b02c
	if (!ctx.cr6.gt) goto loc_8281B02C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x8281b030
	if (ctx.cr6.lt) goto loc_8281B030;
loc_8281B02C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281B030:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-19020
	ctx.r10.s64 = ctx.r10.s64 + -19020;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281B060:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8281b120
	if (ctx.cr6.eq) goto loc_8281B120;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// blt cr6,0x8281b060
	if (ctx.cr6.lt) goto loc_8281B060;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8281B080:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8281b0c8
	if (!ctx.cr6.eq) goto loc_8281B0C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8281B08C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x8281b0ac
	if (ctx.cr6.eq) goto loc_8281B0AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8281b08c
	if (ctx.cr6.lt) goto loc_8281B08C;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8281B0AC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 65536;
	// addi r9,r9,5248
	ctx.r9.s64 = ctx.r9.s64 + 5248;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_8281B0C8:
	// addi r10,r11,11629
	ctx.r10.s64 = ctx.r11.s64 + 11629;
	// addi r9,r11,5848
	ctx.r9.s64 = ctx.r11.s64 + 5848;
	// addi r7,r11,14192
	ctx.r7.s64 = ctx.r11.s64 + 14192;
	// addi r6,r11,17698
	ctx.r6.s64 = ctx.r11.s64 + 17698;
	// addi r4,r11,10963
	ctx.r4.s64 = ctx.r11.s64 + 10963;
	// addi r3,r11,14203
	ctx.r3.s64 = ctx.r11.s64 + 14203;
	// addi r11,r11,17709
	ctx.r11.s64 = ctx.r11.s64 + 17709;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// stfsx f0,r7,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// stfsx f0,r6,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// stfsx f2,r4,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, temp.u32);
	// stfsx f0,r3,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
loc_8281B120:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281b080
	goto loc_8281B080;
}

__attribute__((alias("__imp__sub_8281B128"))) PPC_WEAK_FUNC(sub_8281B128);
PPC_FUNC_IMPL(__imp__sub_8281B128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8281b168
	if (ctx.cr6.eq) goto loc_8281B168;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281b158
	if (ctx.cr6.eq) goto loc_8281B158;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8281b170
	if (!ctx.cr6.eq) goto loc_8281B170;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281b170
	goto loc_8281B170;
loc_8281B158:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8281b170
	goto loc_8281B170;
loc_8281B168:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r4,-29532(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_8281B170:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8281b17c
	if (!ctx.cr6.eq) goto loc_8281B17C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281B17C:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x8281b18c
	if (!ctx.cr6.gt) goto loc_8281B18C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x8281b190
	if (ctx.cr6.lt) goto loc_8281B190;
loc_8281B18C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281B190:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addi r10,r10,-19020
	ctx.r10.s64 = ctx.r10.s64 + -19020;
loc_8281B1B0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8281b1d0
	if (ctx.cr6.eq) goto loc_8281B1D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8281b1b0
	if (ctx.cr6.lt) goto loc_8281B1B0;
	// blr 
	return;
loc_8281B1D0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r11,17709
	ctx.r10.s64 = ctx.r11.s64 + 17709;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r8,r11,17698
	ctx.r8.s64 = ctx.r11.s64 + 17698;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r7,r11,10963
	ctx.r7.s64 = ctx.r11.s64 + 10963;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,14203
	ctx.r4.s64 = ctx.r11.s64 + 14203;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f12,r3,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// bgt cr6,0x8281b22c
	if (ctx.cr6.gt) goto loc_8281B22C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-30252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30252);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
loc_8281B22C:
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B234"))) PPC_WEAK_FUNC(sub_8281B234);
PPC_FUNC_IMPL(__imp__sub_8281B234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281B238"))) PPC_WEAK_FUNC(sub_8281B238);
PPC_FUNC_IMPL(__imp__sub_8281B238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82bf01f8
	sub_82BF01F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281B244"))) PPC_WEAK_FUNC(sub_8281B244);
PPC_FUNC_IMPL(__imp__sub_8281B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281B248"))) PPC_WEAK_FUNC(sub_8281B248);
PPC_FUNC_IMPL(__imp__sub_8281B248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// blt cr6,0x8281b2e4
	if (ctx.cr6.lt) goto loc_8281B2E4;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bge cr6,0x8281b2e4
	if (!ctx.cr6.lt) goto loc_8281B2E4;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r9,r4,5848
	ctx.r9.s64 = ctx.r4.s64 + 5848;
	// addi r10,r4,11629
	ctx.r10.s64 = ctx.r4.s64 + 11629;
	// addi r8,r4,14192
	ctx.r8.s64 = ctx.r4.s64 + 14192;
	// addi r7,r4,17698
	ctx.r7.s64 = ctx.r4.s64 + 17698;
	// addi r6,r4,10963
	ctx.r6.s64 = ctx.r4.s64 + 10963;
	// lfs f13,27476(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 27476);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r4,14203
	ctx.r5.s64 = ctx.r4.s64 + 14203;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,17709
	ctx.r4.s64 = ctx.r4.s64 + 17709;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,29744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r3,r3,5248
	ctx.r3.s64 = ctx.r3.s64 + 5248;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r5,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_8281B2E4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B2EC"))) PPC_WEAK_FUNC(sub_8281B2EC);
PPC_FUNC_IMPL(__imp__sub_8281B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281B2F0"))) PPC_WEAK_FUNC(sub_8281B2F0);
PPC_FUNC_IMPL(__imp__sub_8281B2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8281b330
	if (ctx.cr6.eq) goto loc_8281B330;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281b320
	if (ctx.cr6.eq) goto loc_8281B320;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8281b338
	if (!ctx.cr6.eq) goto loc_8281B338;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281b338
	goto loc_8281B338;
loc_8281B320:
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8281b338
	goto loc_8281B338;
loc_8281B330:
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r4,-29532(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
loc_8281B338:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8281b344
	if (!ctx.cr6.eq) goto loc_8281B344;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8281B344:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// beq cr6,0x8281b378
	if (ctx.cr6.eq) goto loc_8281B378;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x8281b380
	if (!ctx.cr6.lt) goto loc_8281B380;
	// blr 
	return;
loc_8281B378:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f4,-30252(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30252);
	ctx.f4.f64 = double(temp.f32);
loc_8281B380:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-19020
	ctx.r9.s64 = ctx.r9.s64 + -19020;
loc_8281B390:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x8281b3b0
	if (ctx.cr6.eq) goto loc_8281B3B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8281b390
	if (ctx.cr6.lt) goto loc_8281B390;
	// blr 
	return;
loc_8281B3B0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r11,11629
	ctx.r9.s64 = ctx.r11.s64 + 11629;
	// addi r8,r11,5848
	ctx.r8.s64 = ctx.r11.s64 + 5848;
	// addi r7,r11,14192
	ctx.r7.s64 = ctx.r11.s64 + 14192;
	// addi r6,r11,17698
	ctx.r6.s64 = ctx.r11.s64 + 17698;
	// addi r5,r11,10963
	ctx.r5.s64 = ctx.r11.s64 + 10963;
	// addi r4,r11,14203
	ctx.r4.s64 = ctx.r11.s64 + 14203;
	// addi r3,r11,17709
	ctx.r3.s64 = ctx.r11.s64 + 17709;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfsx f0,r7,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// addi r3,r3,5248
	ctx.r3.s64 = ctx.r3.s64 + 5248;
	// stfsx f2,r6,r10
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// stfsx f3,r5,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stfsx f4,r4,r10
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B428"))) PPC_WEAK_FUNC(sub_8281B428);
PPC_FUNC_IMPL(__imp__sub_8281B428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,510
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 510, ctx.xer);
	// beq cr6,0x8281b4e8
	if (ctx.cr6.eq) goto loc_8281B4E8;
	// cmpwi cr6,r11,511
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 511, ctx.xer);
	// beq cr6,0x8281b49c
	if (ctx.cr6.eq) goto loc_8281B49C;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f2,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f1,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x8281b490
	if (ctx.cr6.eq) goto loc_8281B490;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281b480
	if (ctx.cr6.eq) goto loc_8281B480;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281b478
	if (ctx.cr6.eq) goto loc_8281B478;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8281b498
	goto loc_8281B498;
loc_8281B478:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281b498
	goto loc_8281B498;
loc_8281B480:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8281b498
	goto loc_8281B498;
loc_8281B490:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r4,-29532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8281B498:
	// b 0x8281b2f0
	sub_8281B2F0(ctx, base);
	return;
loc_8281B49C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f1,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281b4d8
	if (ctx.cr6.eq) goto loc_8281B4D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281b4c8
	if (ctx.cr6.eq) goto loc_8281B4C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281b4e0
	if (!ctx.cr6.eq) goto loc_8281B4E0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281b4e0
	goto loc_8281B4E0;
loc_8281B4C8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8281b4e0
	goto loc_8281B4E0;
loc_8281B4D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8281B4E0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8281b128
	sub_8281B128(ctx, base);
	return;
loc_8281B4E8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f1,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lfs f2,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281b528
	if (ctx.cr6.eq) goto loc_8281B528;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281b518
	if (ctx.cr6.eq) goto loc_8281B518;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281b530
	if (!ctx.cr6.eq) goto loc_8281B530;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281b530
	goto loc_8281B530;
loc_8281B518:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8281b530
	goto loc_8281B530;
loc_8281B528:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8281B530:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8281afc8
	sub_8281AFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281B538"))) PPC_WEAK_FUNC(sub_8281B538);
PPC_FUNC_IMPL(__imp__sub_8281B538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B53C"))) PPC_WEAK_FUNC(sub_8281B53C);
PPC_FUNC_IMPL(__imp__sub_8281B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281B540"))) PPC_WEAK_FUNC(sub_8281B540);
PPC_FUNC_IMPL(__imp__sub_8281B540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x8281b55c
	if (!ctx.cr6.gt) goto loc_8281B55C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8281b568
	if (ctx.cr6.lt) goto loc_8281B568;
loc_8281B55C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281B568:
	// addi r10,r5,561
	ctx.r10.s64 = ctx.r5.s64 + 561;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B57C"))) PPC_WEAK_FUNC(sub_8281B57C);
PPC_FUNC_IMPL(__imp__sub_8281B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281B580"))) PPC_WEAK_FUNC(sub_8281B580);
PPC_FUNC_IMPL(__imp__sub_8281B580) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x8281b5d0
	if (ctx.cr6.eq) goto loc_8281B5D0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281b5c8
	if (ctx.cr6.eq) goto loc_8281B5C8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281b5c0
	if (ctx.cr6.eq) goto loc_8281B5C0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281b5d4
	goto loc_8281B5D4;
loc_8281B5C0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281b5d4
	goto loc_8281B5D4;
loc_8281B5C8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281b5d4
	goto loc_8281B5D4;
loc_8281B5D0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281B5D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281b658
	if (ctx.cr6.eq) goto loc_8281B658;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8281b658
	if (ctx.cr6.lt) goto loc_8281B658;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x8281b658
	if (!ctx.cr6.lt) goto loc_8281B658;
	// addi r11,r6,138
	ctx.r11.s64 = ctx.r6.s64 + 138;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281b620
	if (ctx.cr6.eq) goto loc_8281B620;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281b618
	if (ctx.cr6.eq) goto loc_8281B618;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281b624
	if (!ctx.cr6.eq) goto loc_8281B624;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281b624
	goto loc_8281B624;
loc_8281B618:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281b624
	goto loc_8281B624;
loc_8281B620:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281B624:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281b650
	if (ctx.cr6.eq) goto loc_8281B650;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281b64c
	if (ctx.cr6.eq) goto loc_8281B64C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281b644
	if (ctx.cr6.eq) goto loc_8281B644;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8281b650
	goto loc_8281B650;
loc_8281B644:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281b650
	goto loc_8281B650;
loc_8281B64C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8281B650:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8281b668
	if (ctx.cr6.eq) goto loc_8281B668;
loc_8281B658:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8281B668:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x8281b6f8
	if (ctx.cr6.gt) goto loc_8281B6F8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addic. r10,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// blt 0x8281b6f8
	if (ctx.cr0.lt) goto loc_8281B6F8;
	// addi r11,r10,138
	ctx.r11.s64 = ctx.r10.s64 + 138;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8281B6A0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281b6cc
	if (ctx.cr6.eq) goto loc_8281B6CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281b6c4
	if (ctx.cr6.eq) goto loc_8281B6C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281b6d0
	if (!ctx.cr6.eq) goto loc_8281B6D0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281b6d0
	goto loc_8281B6D0;
loc_8281B6C4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281b6d0
	goto loc_8281B6D0;
loc_8281B6CC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281B6D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8281b6f4
	if (!ctx.cr6.eq) goto loc_8281B6F4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x8281b6a0
	if (!ctx.cr0.lt) goto loc_8281B6A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8281B6F4:
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
loc_8281B6F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B708"))) PPC_WEAK_FUNC(sub_8281B708);
PPC_FUNC_IMPL(__imp__sub_8281B708) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,561
	ctx.r10.s64 = ctx.r4.s64 + 561;
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

__attribute__((alias("__imp__sub_8281B734"))) PPC_WEAK_FUNC(sub_8281B734);
PPC_FUNC_IMPL(__imp__sub_8281B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281B738"))) PPC_WEAK_FUNC(sub_8281B738);
PPC_FUNC_IMPL(__imp__sub_8281B738) {
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
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// blt cr6,0x8281b758
	if (ctx.cr6.lt) goto loc_8281B758;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8281b770
	if (ctx.cr6.lt) goto loc_8281B770;
loc_8281B758:
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
loc_8281B770:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bf1770
	ctx.lr = 0x8281B77C;
	sub_82BF1770(ctx, base);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B790"))) PPC_WEAK_FUNC(sub_8281B790);
PPC_FUNC_IMPL(__imp__sub_8281B790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1636(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B7B0"))) PPC_WEAK_FUNC(sub_8281B7B0);
PPC_FUNC_IMPL(__imp__sub_8281B7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x8281b7cc
	if (!ctx.cr6.gt) goto loc_8281B7CC;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8281b7dc
	if (ctx.cr6.lt) goto loc_8281B7DC;
loc_8281B7CC:
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
loc_8281B7DC:
	// lwz r10,2264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2264);
	// addi r11,r11,2260
	ctx.r11.s64 = ctx.r11.s64 + 2260;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B800"))) PPC_WEAK_FUNC(sub_8281B800);
PPC_FUNC_IMPL(__imp__sub_8281B800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r8,r11,668
	ctx.r8.s64 = ctx.r11.s64 + 668;
	// addi r10,r11,1640
	ctx.r10.s64 = ctx.r11.s64 + 1640;
	// addi r7,r11,708
	ctx.r7.s64 = ctx.r11.s64 + 708;
	// lwz r9,672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// lwz r3,1644(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1644);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r31,1648(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// lwz r30,712(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mullw r9,r3,r4
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r6,r30,r4
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8281b8e0
	if (ctx.cr6.eq) goto loc_8281B8E0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x8281b88c
	if (ctx.cr6.lt) goto loc_8281B88C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8281B88C:
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r30,r6,2
	ctx.r30.s64 = ctx.r6.s64 + 2;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// lwzx r3,r3,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8281B8E0:
	// lwz r10,752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// addi r7,r11,560
	ctx.r7.s64 = ctx.r11.s64 + 560;
	// lwz r8,756(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// addi r6,r11,748
	ctx.r6.s64 = ctx.r11.s64 + 748;
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r3,564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// addi r6,r11,1940
	ctx.r6.s64 = ctx.r11.s64 + 1940;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r7,1944(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	// lwz r3,1948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1948);
	// lfs f11,1636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	ctx.f11.f64 = double(temp.f32);
	// mullw r11,r7,r4
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r9,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B984"))) PPC_WEAK_FUNC(sub_8281B984);
PPC_FUNC_IMPL(__imp__sub_8281B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281B988"))) PPC_WEAK_FUNC(sub_8281B988);
PPC_FUNC_IMPL(__imp__sub_8281B988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1636(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B9A0"))) PPC_WEAK_FUNC(sub_8281B9A0);
PPC_FUNC_IMPL(__imp__sub_8281B9A0) {
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
	// beq cr6,0x8281ba08
	if (ctx.cr6.eq) goto loc_8281BA08;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281ba00
	if (ctx.cr6.eq) goto loc_8281BA00;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8281b9f8
	if (ctx.cr6.eq) goto loc_8281B9F8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x8281ba0c
	goto loc_8281BA0C;
loc_8281B9F8:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x8281ba0c
	goto loc_8281BA0C;
loc_8281BA00:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// b 0x8281ba0c
	goto loc_8281BA0C;
loc_8281BA08:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_8281BA0C:
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281ba38
	if (ctx.cr6.eq) goto loc_8281BA38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281ba30
	if (ctx.cr6.eq) goto loc_8281BA30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281ba3c
	if (!ctx.cr6.eq) goto loc_8281BA3C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8281ba3c
	goto loc_8281BA3C;
loc_8281BA30:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8281ba3c
	goto loc_8281BA3C;
loc_8281BA38:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281BA3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281ba54
	if (!ctx.cr6.eq) goto loc_8281BA54;
	// stw r5,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r5.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8281BA54:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281ba7c
	if (ctx.cr6.eq) goto loc_8281BA7C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281ba74
	if (ctx.cr6.eq) goto loc_8281BA74;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8281ba80
	if (!ctx.cr6.eq) goto loc_8281BA80;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8281ba80
	goto loc_8281BA80;
loc_8281BA74:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8281ba80
	goto loc_8281BA80;
loc_8281BA7C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8281BA80:
	// lwz r11,1224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281baac
	if (ctx.cr6.eq) goto loc_8281BAAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281baa4
	if (ctx.cr6.eq) goto loc_8281BAA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281bab0
	if (!ctx.cr6.eq) goto loc_8281BAB0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8281bab0
	goto loc_8281BAB0;
loc_8281BAA4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8281bab0
	goto loc_8281BAB0;
loc_8281BAAC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281BAB0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x8281bac0
	if (!ctx.cr6.eq) goto loc_8281BAC0;
	// stw r5,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r5.u32);
loc_8281BAC0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281BAC8"))) PPC_WEAK_FUNC(sub_8281BAC8);
PPC_FUNC_IMPL(__imp__sub_8281BAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
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

__attribute__((alias("__imp__sub_8281BAE8"))) PPC_WEAK_FUNC(sub_8281BAE8);
PPC_FUNC_IMPL(__imp__sub_8281BAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,1236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1236, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281BAFC"))) PPC_WEAK_FUNC(sub_8281BAFC);
PPC_FUNC_IMPL(__imp__sub_8281BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281BB00"))) PPC_WEAK_FUNC(sub_8281BB00);
PPC_FUNC_IMPL(__imp__sub_8281BB00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8281BB24:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281bb58
	if (ctx.cr6.eq) goto loc_8281BB58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281bb50
	if (ctx.cr6.eq) goto loc_8281BB50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281bb48
	if (ctx.cr6.eq) goto loc_8281BB48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281bb5c
	goto loc_8281BB5C;
loc_8281BB48:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281bb5c
	goto loc_8281BB5C;
loc_8281BB50:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281bb5c
	goto loc_8281BB5C;
loc_8281BB58:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8281BB5C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281bb8c
	if (ctx.cr6.eq) goto loc_8281BB8C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281bb84
	if (ctx.cr6.eq) goto loc_8281BB84;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281bb7c
	if (ctx.cr6.eq) goto loc_8281BB7C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281bb90
	goto loc_8281BB90;
loc_8281BB7C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281bb90
	goto loc_8281BB90;
loc_8281BB84:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281bb90
	goto loc_8281BB90;
loc_8281BB8C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8281BB90:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8281bbb4
	if (ctx.cr6.eq) goto loc_8281BBB4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,150
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 150, ctx.xer);
	// blt cr6,0x8281bb24
	if (ctx.cr6.lt) goto loc_8281BB24;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281BBB4:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281BBBC"))) PPC_WEAK_FUNC(sub_8281BBBC);
PPC_FUNC_IMPL(__imp__sub_8281BBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281BBC0"))) PPC_WEAK_FUNC(sub_8281BBC0);
PPC_FUNC_IMPL(__imp__sub_8281BBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 + 60;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8281BBE4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281bc10
	if (ctx.cr6.eq) goto loc_8281BC10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281bc08
	if (ctx.cr6.eq) goto loc_8281BC08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281bc14
	if (!ctx.cr6.eq) goto loc_8281BC14;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281bc14
	goto loc_8281BC14;
loc_8281BC08:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281bc14
	goto loc_8281BC14;
loc_8281BC10:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8281BC14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281bc38
	if (ctx.cr6.eq) goto loc_8281BC38;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,150
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 150, ctx.xer);
	// blt cr6,0x8281bbe4
	if (ctx.cr6.lt) goto loc_8281BBE4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281BC38:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281BC40"))) PPC_WEAK_FUNC(sub_8281BC40);
PPC_FUNC_IMPL(__imp__sub_8281BC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1196, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281BC58"))) PPC_WEAK_FUNC(sub_8281BC58);
PPC_FUNC_IMPL(__imp__sub_8281BC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8281bc8c
	if (ctx.cr6.eq) goto loc_8281BC8C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r9,1196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1196, ctx.r9.u32);
loc_8281BC8C:
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,1196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1196, ctx.r4.u32);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
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

__attribute__((alias("__imp__sub_8281BCAC"))) PPC_WEAK_FUNC(sub_8281BCAC);
PPC_FUNC_IMPL(__imp__sub_8281BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281BCB0"))) PPC_WEAK_FUNC(sub_8281BCB0);
PPC_FUNC_IMPL(__imp__sub_8281BCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,5
	ctx.r10.s64 = ctx.r5.s64 + 5;
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

__attribute__((alias("__imp__sub_8281BCD0"))) PPC_WEAK_FUNC(sub_8281BCD0);
PPC_FUNC_IMPL(__imp__sub_8281BCD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,1196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8281bcfc
	if (ctx.cr6.eq) goto loc_8281BCFC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r9,1196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1196, ctx.r9.u32);
loc_8281BCFC:
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
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

__attribute__((alias("__imp__sub_8281BD14"))) PPC_WEAK_FUNC(sub_8281BD14);
PPC_FUNC_IMPL(__imp__sub_8281BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281BD18"))) PPC_WEAK_FUNC(sub_8281BD18);
PPC_FUNC_IMPL(__imp__sub_8281BD18) {
	PPC_FUNC_PROLOGUE();
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281BD20"))) PPC_WEAK_FUNC(sub_8281BD20);
PPC_FUNC_IMPL(__imp__sub_8281BD20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8281bd54
	if (ctx.cr6.eq) goto loc_8281BD54;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r9,1196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1196, ctx.r9.u32);
loc_8281BD54:
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,1196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1196, ctx.r4.u32);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
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

__attribute__((alias("__imp__sub_8281BD74"))) PPC_WEAK_FUNC(sub_8281BD74);
PPC_FUNC_IMPL(__imp__sub_8281BD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281BD78"))) PPC_WEAK_FUNC(sub_8281BD78);
PPC_FUNC_IMPL(__imp__sub_8281BD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281BD7C"))) PPC_WEAK_FUNC(sub_8281BD7C);
PPC_FUNC_IMPL(__imp__sub_8281BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281BD80"))) PPC_WEAK_FUNC(sub_8281BD80);
PPC_FUNC_IMPL(__imp__sub_8281BD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8281BD88;
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
	// li r6,70
	ctx.r6.s64 = 70;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,70
	ctx.r4.s64 = 70;
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
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r5,r11,2844
	ctx.r5.s64 = ctx.r11.s64 + 2844;
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// bl 0x82befd58
	ctx.lr = 0x8281BDDC;
	sub_82BEFD58(ctx, base);
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

__attribute__((alias("__imp__sub_8281BDF4"))) PPC_WEAK_FUNC(sub_8281BDF4);
PPC_FUNC_IMPL(__imp__sub_8281BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281BDF8"))) PPC_WEAK_FUNC(sub_8281BDF8);
PPC_FUNC_IMPL(__imp__sub_8281BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8281BE00;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r21,13192(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r20,13188(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r19,13184(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r11.u32);
	// lwz r3,13240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13240);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r10.u32);
	// bl 0x827fe408
	ctx.lr = 0x8281BE64;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281be80
	if (ctx.cr6.eq) goto loc_8281BE80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_8281BE80:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f29,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x8281c0e4
	if (!ctx.cr6.gt) goto loc_8281C0E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8281c0c4
	if (!ctx.cr6.gt) goto loc_8281C0C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x8221c790
	ctx.lr = 0x8281BEB0;
	sub_8221C790(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-4012
	ctx.r11.s64 = ctx.r11.s64 + -4012;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8281bed0
	if (!ctx.cr6.gt) goto loc_8281BED0;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x8281bed4
	goto loc_8281BED4;
loc_8281BED0:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_8281BED4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r10,r11,20864
	ctx.r10.u64 = ctx.r11.u64 | 20864;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mullw r8,r23,r10
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,-29840(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29840);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x8221c790
	ctx.lr = 0x8281BF14;
	sub_8221C790(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8281bf28
	if (!ctx.cr6.gt) goto loc_8281BF28;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x8281bf2c
	goto loc_8281BF2C;
loc_8281BF28:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_8281BF2C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r10,r11,3600
	ctx.r10.s64 = ctx.r11.s64 * 3600;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// blt cr6,0x8281bf6c
	if (ctx.cr6.lt) goto loc_8281BF6C;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x8281bf74
	if (!ctx.cr6.gt) goto loc_8281BF74;
	// li r24,99
	ctx.r24.s64 = 99;
	// b 0x8281bf78
	goto loc_8281BF78;
loc_8281BF6C:
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8281bf78
	goto loc_8281BF78;
loc_8281BF74:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8281BF78:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-30736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x8221c790
	ctx.lr = 0x8281BF88;
	sub_8221C790(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8281bf9c
	if (!ctx.cr6.gt) goto loc_8281BF9C;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x8281bfa0
	goto loc_8281BFA0;
loc_8281BF9C:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_8281BFA0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f1,f30,f11
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// blt cr6,0x8281bfe0
	if (ctx.cr6.lt) goto loc_8281BFE0;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// ble cr6,0x8281bfe8
	if (!ctx.cr6.gt) goto loc_8281BFE8;
	// li r25,59
	ctx.r25.s64 = 59;
	// b 0x8281bfec
	goto loc_8281BFEC;
loc_8281BFE0:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8281bfec
	goto loc_8281BFEC;
loc_8281BFE8:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8281BFEC:
	// bl 0x8221c790
	ctx.lr = 0x8281BFF0;
	sub_8221C790(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8281c004
	if (!ctx.cr6.gt) goto loc_8281C004;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x8281c008
	goto loc_8281C008;
loc_8281C004:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_8281C008:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8281c02c
	if (ctx.cr6.lt) goto loc_8281C02C;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// ble cr6,0x8281c034
	if (!ctx.cr6.gt) goto loc_8281C034;
	// li r31,59
	ctx.r31.s64 = 59;
	// b 0x8281c038
	goto loc_8281C038;
loc_8281C02C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8281c038
	goto loc_8281C038;
loc_8281C034:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8281C038:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8281c05c
	if (!ctx.cr6.gt) goto loc_8281C05C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828003e8
	ctx.lr = 0x8281C04C;
	sub_828003E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27600
	ctx.r4.s64 = ctx.r11.s64 + 27600;
	// bl 0x82800460
	ctx.lr = 0x8281C05C;
	sub_82800460(ctx, base);
loc_8281C05C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8281c080
	if (!ctx.cr6.gt) goto loc_8281C080;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828003e8
	ctx.lr = 0x8281C070;
	sub_828003E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27612
	ctx.r4.s64 = ctx.r11.s64 + 27612;
	// bl 0x82800460
	ctx.lr = 0x8281C080;
	sub_82800460(ctx, base);
loc_8281C080:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8281c0a4
	if (!ctx.cr6.gt) goto loc_8281C0A4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828003e8
	ctx.lr = 0x8281C094;
	sub_828003E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27616
	ctx.r4.s64 = ctx.r11.s64 + 27616;
	// bl 0x82800460
	ctx.lr = 0x8281C0A4;
	sub_82800460(ctx, base);
loc_8281C0A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828003e8
	ctx.lr = 0x8281C0B0;
	sub_828003E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27624
	ctx.r4.s64 = ctx.r11.s64 + 27624;
	// bl 0x82800460
	ctx.lr = 0x8281C0C0;
	sub_82800460(ctx, base);
	// b 0x8281c108
	goto loc_8281C108;
loc_8281C0C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82800320
	ctx.lr = 0x8281C0D0;
	sub_82800320(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27596
	ctx.r4.s64 = ctx.r11.s64 + 27596;
	// bl 0x82800460
	ctx.lr = 0x8281C0E0;
	sub_82800460(ctx, base);
	// b 0x8281c108
	goto loc_8281C108;
loc_8281C0E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13240);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827fe408
	ctx.lr = 0x8281C0F4;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c108
	if (ctx.cr6.eq) goto loc_8281C108;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27588
	ctx.r4.s64 = ctx.r11.s64 + 27588;
	// bl 0x827fe348
	ctx.lr = 0x8281C108;
	sub_827FE348(ctx, base);
loc_8281C108:
	// stw r21,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r21.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r19,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r19.u32);
	// stw r20,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r20.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C12C"))) PPC_WEAK_FUNC(sub_8281C12C);
PPC_FUNC_IMPL(__imp__sub_8281C12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C130"))) PPC_WEAK_FUNC(sub_8281C130);
PPC_FUNC_IMPL(__imp__sub_8281C130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,229
	ctx.r10.s64 = ctx.r5.s64 + 229;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,23,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1C0;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C160"))) PPC_WEAK_FUNC(sub_8281C160);
PPC_FUNC_IMPL(__imp__sub_8281C160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,521
	ctx.r10.s64 = ctx.r5.s64 + 521;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,23,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1C0;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C190"))) PPC_WEAK_FUNC(sub_8281C190);
PPC_FUNC_IMPL(__imp__sub_8281C190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8281C198;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r11.u32);
	// lwz r3,13240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13240);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r10.u32);
	// bl 0x827fe408
	ctx.lr = 0x8281C1FC;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c218
	if (ctx.cr6.eq) goto loc_8281C218;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_8281C218:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,13240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13240);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,-30252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f0,-29828(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29828);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29832);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f30,f0
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f30,f31,f13
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// bl 0x827fe408
	ctx.lr = 0x8281C24C;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c25c
	if (ctx.cr6.eq) goto loc_8281C25C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827fe498
	ctx.lr = 0x8281C25C;
	sub_827FE498(ctx, base);
loc_8281C25C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13240);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827fe408
	ctx.lr = 0x8281C26C;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c280
	if (ctx.cr6.eq) goto loc_8281C280;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27548
	ctx.r4.s64 = ctx.r11.s64 + 27548;
	// bl 0x827fe348
	ctx.lr = 0x8281C280;
	sub_827FE348(ctx, base);
loc_8281C280:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,13240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13240);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,-4008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x8281c2e4
	if (!ctx.cr6.lt) goto loc_8281C2E4;
	// bl 0x827fe408
	ctx.lr = 0x8281C2A0;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c2b0
	if (ctx.cr6.eq) goto loc_8281C2B0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x827fe498
	ctx.lr = 0x8281C2B0;
	sub_827FE498(ctx, base);
loc_8281C2B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x8281c2d4
	if (ctx.cr6.gt) goto loc_8281C2D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27580
	ctx.r4.s64 = ctx.r11.s64 + 27580;
	// bl 0x82800460
	ctx.lr = 0x8281C2D0;
	sub_82800460(ctx, base);
	// b 0x8281c31c
	goto loc_8281C31C;
loc_8281C2D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27572
	ctx.r4.s64 = ctx.r11.s64 + 27572;
	// bl 0x82800460
	ctx.lr = 0x8281C2E0;
	sub_82800460(ctx, base);
	// b 0x8281c31c
	goto loc_8281C31C;
loc_8281C2E4:
	// bl 0x827fe408
	ctx.lr = 0x8281C2E8;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c2f8
	if (ctx.cr6.eq) goto loc_8281C2F8;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x827fe498
	ctx.lr = 0x8281C2F8;
	sub_827FE498(ctx, base);
loc_8281C2F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13240);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827fe408
	ctx.lr = 0x8281C308;
	sub_827FE408(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c31c
	if (ctx.cr6.eq) goto loc_8281C31C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27556
	ctx.r4.s64 = ctx.r11.s64 + 27556;
	// bl 0x827fe348
	ctx.lr = 0x8281C31C;
	sub_827FE348(ctx, base);
loc_8281C31C:
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C340"))) PPC_WEAK_FUNC(sub_8281C340);
PPC_FUNC_IMPL(__imp__sub_8281C340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C344"))) PPC_WEAK_FUNC(sub_8281C344);
PPC_FUNC_IMPL(__imp__sub_8281C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C348"))) PPC_WEAK_FUNC(sub_8281C348);
PPC_FUNC_IMPL(__imp__sub_8281C348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C34C"))) PPC_WEAK_FUNC(sub_8281C34C);
PPC_FUNC_IMPL(__imp__sub_8281C34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C350"))) PPC_WEAK_FUNC(sub_8281C350);
PPC_FUNC_IMPL(__imp__sub_8281C350) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 904, ctx.r11.u32);
	// stw r11,2532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2532, ctx.r11.u32);
	// stw r11,3124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3124, ctx.r11.u32);
	// stw r11,1200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C374"))) PPC_WEAK_FUNC(sub_8281C374);
PPC_FUNC_IMPL(__imp__sub_8281C374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C378"))) PPC_WEAK_FUNC(sub_8281C378);
PPC_FUNC_IMPL(__imp__sub_8281C378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C37C"))) PPC_WEAK_FUNC(sub_8281C37C);
PPC_FUNC_IMPL(__imp__sub_8281C37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C380"))) PPC_WEAK_FUNC(sub_8281C380);
PPC_FUNC_IMPL(__imp__sub_8281C380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C384"))) PPC_WEAK_FUNC(sub_8281C384);
PPC_FUNC_IMPL(__imp__sub_8281C384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C388"))) PPC_WEAK_FUNC(sub_8281C388);
PPC_FUNC_IMPL(__imp__sub_8281C388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C38C"))) PPC_WEAK_FUNC(sub_8281C38C);
PPC_FUNC_IMPL(__imp__sub_8281C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C390"))) PPC_WEAK_FUNC(sub_8281C390);
PPC_FUNC_IMPL(__imp__sub_8281C390) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C39C"))) PPC_WEAK_FUNC(sub_8281C39C);
PPC_FUNC_IMPL(__imp__sub_8281C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C3A0"))) PPC_WEAK_FUNC(sub_8281C3A0);
PPC_FUNC_IMPL(__imp__sub_8281C3A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C3A4"))) PPC_WEAK_FUNC(sub_8281C3A4);
PPC_FUNC_IMPL(__imp__sub_8281C3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C3A8"))) PPC_WEAK_FUNC(sub_8281C3A8);
PPC_FUNC_IMPL(__imp__sub_8281C3A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C3B4"))) PPC_WEAK_FUNC(sub_8281C3B4);
PPC_FUNC_IMPL(__imp__sub_8281C3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C3B8"))) PPC_WEAK_FUNC(sub_8281C3B8);
PPC_FUNC_IMPL(__imp__sub_8281C3B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C3BC"))) PPC_WEAK_FUNC(sub_8281C3BC);
PPC_FUNC_IMPL(__imp__sub_8281C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C3C0"))) PPC_WEAK_FUNC(sub_8281C3C0);
PPC_FUNC_IMPL(__imp__sub_8281C3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r7,13434
	ctx.r5.s64 = ctx.r7.s64 + 13434;
	// lfs f13,27476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27476);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,48(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r11,904(r4)
	PPC_STORE_U32(ctx.r4.u32 + 904, ctx.r11.u32);
	// stw r11,2532(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2532, ctx.r11.u32);
	// stw r11,3124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3124, ctx.r11.u32);
	// stw r11,1200(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1200, ctx.r11.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f0,3128(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 3128, temp.u32);
	// stfs f0,3132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 3132, temp.u32);
	// stfs f0,3136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 3136, temp.u32);
	// stw r11,1200(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1200, ctx.r11.u32);
	// stfs f0,1204(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1204, temp.u32);
	// stw r11,2548(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2548, ctx.r11.u32);
	// stfs f13,2836(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 2836, temp.u32);
	// stw r5,2540(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2540, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C420"))) PPC_WEAK_FUNC(sub_8281C420);
PPC_FUNC_IMPL(__imp__sub_8281C420) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C42C"))) PPC_WEAK_FUNC(sub_8281C42C);
PPC_FUNC_IMPL(__imp__sub_8281C42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C430"))) PPC_WEAK_FUNC(sub_8281C430);
PPC_FUNC_IMPL(__imp__sub_8281C430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C434"))) PPC_WEAK_FUNC(sub_8281C434);
PPC_FUNC_IMPL(__imp__sub_8281C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C438"))) PPC_WEAK_FUNC(sub_8281C438);
PPC_FUNC_IMPL(__imp__sub_8281C438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,13434
	ctx.r10.s64 = ctx.r11.s64 + 13434;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C448"))) PPC_WEAK_FUNC(sub_8281C448);
PPC_FUNC_IMPL(__imp__sub_8281C448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8281C450;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r7,r8,-29532
	ctx.r7.s64 = ctx.r8.s64 + -29532;
	// lwz r26,13180(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,-29532(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8281c4d0
	if (ctx.cr6.eq) goto loc_8281C4D0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281c4c8
	if (ctx.cr6.eq) goto loc_8281C4C8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281c4c0
	if (ctx.cr6.eq) goto loc_8281C4C0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281c4d4
	goto loc_8281C4D4;
loc_8281C4C0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281c4d4
	goto loc_8281C4D4;
loc_8281C4C8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8281c4d4
	goto loc_8281C4D4;
loc_8281C4D0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281C4D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281c50c
	if (ctx.cr6.eq) goto loc_8281C50C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281c504
	if (ctx.cr6.eq) goto loc_8281C504;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281c4fc
	if (ctx.cr6.eq) goto loc_8281C4FC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281c508
	if (ctx.cr6.eq) goto loc_8281C508;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8281c508
	goto loc_8281C508;
loc_8281C4FC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x8281c508
	goto loc_8281C508;
loc_8281C504:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8281C508:
	// bl 0x828040c8
	ctx.lr = 0x8281C50C;
	sub_828040C8(ctx, base);
loc_8281C50C:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_8281C52C"))) PPC_WEAK_FUNC(sub_8281C52C);
PPC_FUNC_IMPL(__imp__sub_8281C52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C530"))) PPC_WEAK_FUNC(sub_8281C530);
PPC_FUNC_IMPL(__imp__sub_8281C530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// beq cr6,0x8281c58c
	if (ctx.cr6.eq) goto loc_8281C58C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281c584
	if (ctx.cr6.eq) goto loc_8281C584;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281c590
	if (!ctx.cr6.eq) goto loc_8281C590;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281c590
	goto loc_8281C590;
loc_8281C584:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8281c590
	goto loc_8281C590;
loc_8281C58C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8281C590:
	// lwz r10,2536(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2536);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281c5bc
	if (ctx.cr6.eq) goto loc_8281C5BC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281c5b4
	if (ctx.cr6.eq) goto loc_8281C5B4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8281c5c0
	if (!ctx.cr6.eq) goto loc_8281C5C0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281c5c0
	goto loc_8281C5C0;
loc_8281C5B4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8281c5c0
	goto loc_8281C5C0;
loc_8281C5BC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8281C5C0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2536(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2536, ctx.r10.u32);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C5EC"))) PPC_WEAK_FUNC(sub_8281C5EC);
PPC_FUNC_IMPL(__imp__sub_8281C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C5F0"))) PPC_WEAK_FUNC(sub_8281C5F0);
PPC_FUNC_IMPL(__imp__sub_8281C5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r9,2844
	ctx.r11.s64 = ctx.r9.s64 + 2844;
loc_8281C604:
	// lfs f0,-1044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1044);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,-1040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1040);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-1036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-1032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1032);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-1028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1028);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-1024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1024);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-1020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1020);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-1016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1016);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-1012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1012);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-1008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1008);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bne 0x8281c604
	if (!ctx.cr0.eq) goto loc_8281C604;
	// addi r3,r9,624
	ctx.r3.s64 = ctx.r9.s64 + 624;
	// addi r4,r9,1212
	ctx.r4.s64 = ctx.r9.s64 + 1212;
	// li r5,280
	ctx.r5.s64 = 280;
	// b 0x822195b8
	sub_822195B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C670"))) PPC_WEAK_FUNC(sub_8281C670);
PPC_FUNC_IMPL(__imp__sub_8281C670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8281C678;
	__savegprlr_29(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r10,27276
	ctx.r6.s64 = ctx.r10.s64 + 27276;
	// li r9,36
	ctx.r9.s64 = 36;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r7,27300
	ctx.r3.s64 = ctx.r7.s64 + 27300;
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r8,r4,27328
	ctx.r8.s64 = ctx.r4.s64 + 27328;
	// li r7,40
	ctx.r7.s64 = 40;
	// lwz r5,48(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r4,r11,27356
	ctx.r4.s64 = ctx.r11.s64 + 27356;
	// li r31,65
	ctx.r31.s64 = 65;
	// li r30,100
	ctx.r30.s64 = 100;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,132
	ctx.r10.s64 = 132;
	// stw r6,1524(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1524, ctx.r6.u32);
	// stfs f0,1808(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1808, temp.u32);
	// stw r9,924(r5)
	PPC_STORE_U32(ctx.r5.u32 + 924, ctx.r9.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r3,1528(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1528, ctx.r3.u32);
	// stfs f0,1812(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1812, temp.u32);
	// stw r9,928(r5)
	PPC_STORE_U32(ctx.r5.u32 + 928, ctx.r9.u32);
	// li r9,136
	ctx.r9.s64 = 136;
	// stw r8,1532(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1532, ctx.r8.u32);
	// stfs f0,1816(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1816, temp.u32);
	// stw r7,932(r5)
	PPC_STORE_U32(ctx.r5.u32 + 932, ctx.r7.u32);
	// addi r7,r29,27372
	ctx.r7.s64 = ctx.r29.s64 + 27372;
	// stw r4,2556(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2556, ctx.r4.u32);
	// li r4,67
	ctx.r4.s64 = 67;
	// stw r31,2084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2084, ctx.r31.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r30,1212(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1212, ctx.r30.u32);
	// stw r6,2560(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2560, ctx.r6.u32);
	// stw r10,2088(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2088, ctx.r10.u32);
	// stw r11,1216(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1216, ctx.r11.u32);
	// stw r3,2564(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2564, ctx.r3.u32);
	// stw r10,2092(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2092, ctx.r10.u32);
	// stw r11,1220(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1220, ctx.r11.u32);
	// stw r8,2568(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2568, ctx.r8.u32);
	// stw r9,2096(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2096, ctx.r9.u32);
	// stw r11,1224(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1224, ctx.r11.u32);
	// stw r7,2632(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2632, ctx.r7.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r4,2160(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2160, ctx.r4.u32);
	// addi r6,r31,27384
	ctx.r6.s64 = ctx.r31.s64 + 27384;
	// stw r11,1288(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1288, ctx.r11.u32);
	// li r10,145
	ctx.r10.s64 = 145;
	// li r4,131
	ctx.r4.s64 = 131;
	// stw r6,2636(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2636, ctx.r6.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r11,1292(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1292, ctx.r11.u32);
	// addi r9,r30,27412
	ctx.r9.s64 = ctx.r30.s64 + 27412;
	// stw r4,2164(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2164, ctx.r4.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r3,27436
	ctx.r7.s64 = ctx.r3.s64 + 27436;
	// stw r9,2640(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2640, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r10,2168(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2168, ctx.r10.u32);
	// stw r11,1296(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1296, ctx.r11.u32);
	// addi r4,r8,27460
	ctx.r4.s64 = ctx.r8.s64 + 27460;
	// stw r7,2644(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2644, ctx.r7.u32);
	// addi r3,r6,27492
	ctx.r3.s64 = ctx.r6.s64 + 27492;
	// stw r10,2172(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2172, ctx.r10.u32);
	// li r9,259
	ctx.r9.s64 = 259;
	// stw r11,1300(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1300, ctx.r11.u32);
	// stw r4,2648(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2648, ctx.r4.u32);
	// stw r10,2176(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2176, ctx.r10.u32);
	// stw r11,1304(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1304, ctx.r11.u32);
	// stw r3,2652(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2652, ctx.r3.u32);
	// stw r9,2180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2180, ctx.r9.u32);
	// stw r11,1308(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1308, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C7A8"))) PPC_WEAK_FUNC(sub_8281C7A8);
PPC_FUNC_IMPL(__imp__sub_8281C7A8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,180
	ctx.r9.s64 = ctx.r11.s64 + 180;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r31,-29532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8281C7D0:
	// lwz r11,-44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8281c85c
	if (ctx.cr6.eq) goto loc_8281C85C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281c810
	if (ctx.cr6.eq) goto loc_8281C810;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281c808
	if (ctx.cr6.eq) goto loc_8281C808;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281c800
	if (ctx.cr6.eq) goto loc_8281C800;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281c814
	goto loc_8281C814;
loc_8281C800:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8281c814
	goto loc_8281C814;
loc_8281C808:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281c814
	goto loc_8281C814;
loc_8281C810:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8281C814:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8281c844
	if (ctx.cr6.eq) goto loc_8281C844;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281c83c
	if (ctx.cr6.eq) goto loc_8281C83C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281c834
	if (ctx.cr6.eq) goto loc_8281C834;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8281c848
	goto loc_8281C848;
loc_8281C834:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281c848
	goto loc_8281C848;
loc_8281C83C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8281c848
	goto loc_8281C848;
loc_8281C844:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8281C848:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281c85c
	if (!ctx.cr6.eq) goto loc_8281C85C;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8281c87c
	if (ctx.cr6.eq) goto loc_8281C87C;
loc_8281C85C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x8281c7d0
	if (ctx.cr6.lt) goto loc_8281C7D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8281C87C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C88C"))) PPC_WEAK_FUNC(sub_8281C88C);
PPC_FUNC_IMPL(__imp__sub_8281C88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281C890"))) PPC_WEAK_FUNC(sub_8281C890);
PPC_FUNC_IMPL(__imp__sub_8281C890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8281C898;
	__savegprlr_21(ctx, base);
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r26,10
	ctx.r26.s64 = 10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
loc_8281C8E4:
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8281c914
	if (ctx.cr6.eq) goto loc_8281C914;
	// lwz r11,12492(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12492);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x8281C900;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c914
	if (ctx.cr6.eq) goto loc_8281C914;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8281C914:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8281c8e4
	if (!ctx.cr0.eq) goto loc_8281C8E4;
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
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C938"))) PPC_WEAK_FUNC(sub_8281C938);
PPC_FUNC_IMPL(__imp__sub_8281C938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8281C940;
	__savegprlr_21(ctx, base);
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r26,10
	ctx.r26.s64 = 10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
loc_8281C98C:
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8281c9bc
	if (ctx.cr6.eq) goto loc_8281C9BC;
	// lwz r11,12492(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12492);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x8281C9A8;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8281c9bc
	if (ctx.cr6.eq) goto loc_8281C9BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8281C9BC:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8281c98c
	if (!ctx.cr0.eq) goto loc_8281C98C;
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
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C9E0"))) PPC_WEAK_FUNC(sub_8281C9E0);
PPC_FUNC_IMPL(__imp__sub_8281C9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281C9FC"))) PPC_WEAK_FUNC(sub_8281C9FC);
PPC_FUNC_IMPL(__imp__sub_8281C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281CA00"))) PPC_WEAK_FUNC(sub_8281CA00);
PPC_FUNC_IMPL(__imp__sub_8281CA00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stwx r5,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281CA1C"))) PPC_WEAK_FUNC(sub_8281CA1C);
PPC_FUNC_IMPL(__imp__sub_8281CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8281CA20"))) PPC_WEAK_FUNC(sub_8281CA20);
PPC_FUNC_IMPL(__imp__sub_8281CA20) {
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

__attribute__((alias("__imp__sub_8281CA38"))) PPC_WEAK_FUNC(sub_8281CA38);
PPC_FUNC_IMPL(__imp__sub_8281CA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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

__attribute__((alias("__imp__sub_8281CA58"))) PPC_WEAK_FUNC(sub_8281CA58);
PPC_FUNC_IMPL(__imp__sub_8281CA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
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

