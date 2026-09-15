#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82806830"))) PPC_WEAK_FUNC(sub_82806830);
PPC_FUNC_IMPL(__imp__sub_82806830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82806838;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,13604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13604);
	// lwz r30,15652(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15652);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8280686c
	if (!ctx.cr6.eq) goto loc_8280686C;
loc_82806860:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_8280686C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e0230
	ctx.lr = 0x82806874;
	sub_827E0230(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82806860
	if (ctx.cr6.eq) goto loc_82806860;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-20168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827b3360
	ctx.lr = 0x82806894;
	sub_827B3360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82806860
	if (ctx.cr6.eq) goto loc_82806860;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13604(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13604);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x827bd008
	ctx.lr = 0x828068B8;
	sub_827BD008(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828068C0"))) PPC_WEAK_FUNC(sub_828068C0);
PPC_FUNC_IMPL(__imp__sub_828068C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828068C8"))) PPC_WEAK_FUNC(sub_828068C8);
PPC_FUNC_IMPL(__imp__sub_828068C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,13356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828068DC"))) PPC_WEAK_FUNC(sub_828068DC);
PPC_FUNC_IMPL(__imp__sub_828068DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828068E0"))) PPC_WEAK_FUNC(sub_828068E0);
PPC_FUNC_IMPL(__imp__sub_828068E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13320);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828068EC"))) PPC_WEAK_FUNC(sub_828068EC);
PPC_FUNC_IMPL(__imp__sub_828068EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828068F0"))) PPC_WEAK_FUNC(sub_828068F0);
PPC_FUNC_IMPL(__imp__sub_828068F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82806910
	if (ctx.cr6.lt) goto loc_82806910;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82806910:
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806920"))) PPC_WEAK_FUNC(sub_82806920);
PPC_FUNC_IMPL(__imp__sub_82806920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,352(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806934"))) PPC_WEAK_FUNC(sub_82806934);
PPC_FUNC_IMPL(__imp__sub_82806934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806938"))) PPC_WEAK_FUNC(sub_82806938);
PPC_FUNC_IMPL(__imp__sub_82806938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806958"))) PPC_WEAK_FUNC(sub_82806958);
PPC_FUNC_IMPL(__imp__sub_82806958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806968"))) PPC_WEAK_FUNC(sub_82806968);
PPC_FUNC_IMPL(__imp__sub_82806968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806978"))) PPC_WEAK_FUNC(sub_82806978);
PPC_FUNC_IMPL(__imp__sub_82806978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x827c06b8
	sub_827C06B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280698C"))) PPC_WEAK_FUNC(sub_8280698C);
PPC_FUNC_IMPL(__imp__sub_8280698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806990"))) PPC_WEAK_FUNC(sub_82806990);
PPC_FUNC_IMPL(__imp__sub_82806990) {
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c0980
	ctx.lr = 0x828069B8;
	sub_827C0980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828069f0
	if (ctx.cr6.eq) goto loc_828069F0;
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,708(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828069e0
	if (ctx.cr6.eq) goto loc_828069E0;
	// lwz r9,716(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828069e4
	if (ctx.cr6.eq) goto loc_828069E4;
loc_828069E0:
	// stw r10,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r10.u32);
loc_828069E4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r10.u32);
	// stw r9,712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 712, ctx.r9.u32);
loc_828069F0:
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

__attribute__((alias("__imp__sub_82806A04"))) PPC_WEAK_FUNC(sub_82806A04);
PPC_FUNC_IMPL(__imp__sub_82806A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806A08"))) PPC_WEAK_FUNC(sub_82806A08);
PPC_FUNC_IMPL(__imp__sub_82806A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x827c0a50
	sub_827C0A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806A1C"))) PPC_WEAK_FUNC(sub_82806A1C);
PPC_FUNC_IMPL(__imp__sub_82806A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806A20"))) PPC_WEAK_FUNC(sub_82806A20);
PPC_FUNC_IMPL(__imp__sub_82806A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,248(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806A34"))) PPC_WEAK_FUNC(sub_82806A34);
PPC_FUNC_IMPL(__imp__sub_82806A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806A38"))) PPC_WEAK_FUNC(sub_82806A38);
PPC_FUNC_IMPL(__imp__sub_82806A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// b 0x827edd08
	sub_827EDD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806A44"))) PPC_WEAK_FUNC(sub_82806A44);
PPC_FUNC_IMPL(__imp__sub_82806A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806A48"))) PPC_WEAK_FUNC(sub_82806A48);
PPC_FUNC_IMPL(__imp__sub_82806A48) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b39a8
	ctx.lr = 0x82806A68;
	sub_827B39A8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806A84"))) PPC_WEAK_FUNC(sub_82806A84);
PPC_FUNC_IMPL(__imp__sub_82806A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806A88"))) PPC_WEAK_FUNC(sub_82806A88);
PPC_FUNC_IMPL(__imp__sub_82806A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x827bd1d8
	sub_827BD1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806A98"))) PPC_WEAK_FUNC(sub_82806A98);
PPC_FUNC_IMPL(__imp__sub_82806A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13408);
	// b 0x827f13d0
	sub_827F13D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806AAC"))) PPC_WEAK_FUNC(sub_82806AAC);
PPC_FUNC_IMPL(__imp__sub_82806AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806AB0"))) PPC_WEAK_FUNC(sub_82806AB0);
PPC_FUNC_IMPL(__imp__sub_82806AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13408);
	// b 0x827f1498
	sub_827F1498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806AC0"))) PPC_WEAK_FUNC(sub_82806AC0);
PPC_FUNC_IMPL(__imp__sub_82806AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bcd348
	sub_82BCD348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806ACC"))) PPC_WEAK_FUNC(sub_82806ACC);
PPC_FUNC_IMPL(__imp__sub_82806ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806AD0"))) PPC_WEAK_FUNC(sub_82806AD0);
PPC_FUNC_IMPL(__imp__sub_82806AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,12480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82806af8
	if (ctx.cr6.eq) goto loc_82806AF8;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82806afc
	if (ctx.cr6.lt) goto loc_82806AFC;
loc_82806AF8:
	// twi 31,r0,22
loc_82806AFC:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806B0C"))) PPC_WEAK_FUNC(sub_82806B0C);
PPC_FUNC_IMPL(__imp__sub_82806B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806B10"))) PPC_WEAK_FUNC(sub_82806B10);
PPC_FUNC_IMPL(__imp__sub_82806B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,12480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82806b38
	if (ctx.cr6.eq) goto loc_82806B38;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82806b3c
	if (ctx.cr6.lt) goto loc_82806B3C;
loc_82806B38:
	// twi 31,r0,22
loc_82806B3C:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806B48"))) PPC_WEAK_FUNC(sub_82806B48);
PPC_FUNC_IMPL(__imp__sub_82806B48) {
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
	// bl 0x827f6780
	ctx.lr = 0x82806B58;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82806b64
	if (ctx.cr6.eq) goto loc_82806B64;
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
loc_82806B64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806B74"))) PPC_WEAK_FUNC(sub_82806B74);
PPC_FUNC_IMPL(__imp__sub_82806B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806B78"))) PPC_WEAK_FUNC(sub_82806B78);
PPC_FUNC_IMPL(__imp__sub_82806B78) {
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
	// bl 0x827f6780
	ctx.lr = 0x82806B88;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82806b98
	if (ctx.cr6.eq) goto loc_82806B98;
	// li r11,12345
	ctx.r11.s64 = 12345;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
loc_82806B98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806BA8"))) PPC_WEAK_FUNC(sub_82806BA8);
PPC_FUNC_IMPL(__imp__sub_82806BA8) {
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
	// bl 0x827f6780
	ctx.lr = 0x82806BB8;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82806bc8
	if (ctx.cr6.eq) goto loc_82806BC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
loc_82806BC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806BD8"))) PPC_WEAK_FUNC(sub_82806BD8);
PPC_FUNC_IMPL(__imp__sub_82806BD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x827eee58
	sub_827EEE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806BE0"))) PPC_WEAK_FUNC(sub_82806BE0);
PPC_FUNC_IMPL(__imp__sub_82806BE0) {
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
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82806C00;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4778
	ctx.lr = 0x82806C10;
	sub_827B4778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82806C18;
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82806C2C"))) PPC_WEAK_FUNC(sub_82806C2C);
PPC_FUNC_IMPL(__imp__sub_82806C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806C30"))) PPC_WEAK_FUNC(sub_82806C30);
PPC_FUNC_IMPL(__imp__sub_82806C30) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,13408(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13408);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x827f15c0
	ctx.lr = 0x82806C60;
	sub_827F15C0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806C74"))) PPC_WEAK_FUNC(sub_82806C74);
PPC_FUNC_IMPL(__imp__sub_82806C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806C78"))) PPC_WEAK_FUNC(sub_82806C78);
PPC_FUNC_IMPL(__imp__sub_82806C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f6a38
	sub_827F6A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806C7C"))) PPC_WEAK_FUNC(sub_82806C7C);
PPC_FUNC_IMPL(__imp__sub_82806C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806C80"))) PPC_WEAK_FUNC(sub_82806C80);
PPC_FUNC_IMPL(__imp__sub_82806C80) {
	PPC_FUNC_PROLOGUE();
	// li r7,9
	ctx.r7.s64 = 9;
	// b 0x827f6ae8
	sub_827F6AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806C88"))) PPC_WEAK_FUNC(sub_82806C88);
PPC_FUNC_IMPL(__imp__sub_82806C88) {
	PPC_FUNC_PROLOGUE();
	// b 0x827ef2e0
	sub_827EF2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806C8C"))) PPC_WEAK_FUNC(sub_82806C8C);
PPC_FUNC_IMPL(__imp__sub_82806C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806C90"))) PPC_WEAK_FUNC(sub_82806C90);
PPC_FUNC_IMPL(__imp__sub_82806C90) {
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
	// bl 0x827f6780
	ctx.lr = 0x82806CA0;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82806cc4
	if (ctx.cr6.eq) goto loc_82806CC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,380(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// bl 0x82bd8d80
	ctx.lr = 0x82806CC4;
	sub_82BD8D80(ctx, base);
loc_82806CC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806CD4"))) PPC_WEAK_FUNC(sub_82806CD4);
PPC_FUNC_IMPL(__imp__sub_82806CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806CD8"))) PPC_WEAK_FUNC(sub_82806CD8);
PPC_FUNC_IMPL(__imp__sub_82806CD8) {
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
	// bl 0x827f6780
	ctx.lr = 0x82806CE8;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82806d14
	if (ctx.cr6.eq) goto loc_82806D14;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// lwz r11,13412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13412);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,380(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 380);
	// bl 0x82bd8d80
	ctx.lr = 0x82806D14;
	sub_82BD8D80(ctx, base);
loc_82806D14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806D24"))) PPC_WEAK_FUNC(sub_82806D24);
PPC_FUNC_IMPL(__imp__sub_82806D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806D28"))) PPC_WEAK_FUNC(sub_82806D28);
PPC_FUNC_IMPL(__imp__sub_82806D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// b 0x82bd7158
	sub_82BD7158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806D3C"))) PPC_WEAK_FUNC(sub_82806D3C);
PPC_FUNC_IMPL(__imp__sub_82806D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806D40"))) PPC_WEAK_FUNC(sub_82806D40);
PPC_FUNC_IMPL(__imp__sub_82806D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82806D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// bne cr6,0x82806d6c
	if (!ctx.cr6.eq) goto loc_82806D6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,248(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
loc_82806D6C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r4,-29532(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82806d90
	if (ctx.cr6.eq) goto loc_82806D90;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,13424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13424);
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// bl 0x827ede80
	ctx.lr = 0x82806D90;
	sub_827EDE80(ctx, base);
loc_82806D90:
	// lwz r11,13424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13424);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806DAC"))) PPC_WEAK_FUNC(sub_82806DAC);
PPC_FUNC_IMPL(__imp__sub_82806DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806DB0"))) PPC_WEAK_FUNC(sub_82806DB0);
PPC_FUNC_IMPL(__imp__sub_82806DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// b 0x82bd7870
	sub_82BD7870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806DC4"))) PPC_WEAK_FUNC(sub_82806DC4);
PPC_FUNC_IMPL(__imp__sub_82806DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806DC8"))) PPC_WEAK_FUNC(sub_82806DC8);
PPC_FUNC_IMPL(__imp__sub_82806DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x827bd320
	sub_827BD320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806DE0"))) PPC_WEAK_FUNC(sub_82806DE0);
PPC_FUNC_IMPL(__imp__sub_82806DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x82bca358
	sub_82BCA358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806DF4"))) PPC_WEAK_FUNC(sub_82806DF4);
PPC_FUNC_IMPL(__imp__sub_82806DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806DF8"))) PPC_WEAK_FUNC(sub_82806DF8);
PPC_FUNC_IMPL(__imp__sub_82806DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bcdbd0
	sub_82BCDBD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806E04"))) PPC_WEAK_FUNC(sub_82806E04);
PPC_FUNC_IMPL(__imp__sub_82806E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806E08"))) PPC_WEAK_FUNC(sub_82806E08);
PPC_FUNC_IMPL(__imp__sub_82806E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82806E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82806E2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4d20
	ctx.lr = 0x82806E48;
	sub_827B4D20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82806E50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806E58"))) PPC_WEAK_FUNC(sub_82806E58);
PPC_FUNC_IMPL(__imp__sub_82806E58) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82121b48
	ctx.lr = 0x82806E7C;
	sub_82121B48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82806E8C"))) PPC_WEAK_FUNC(sub_82806E8C);
PPC_FUNC_IMPL(__imp__sub_82806E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806E90"))) PPC_WEAK_FUNC(sub_82806E90);
PPC_FUNC_IMPL(__imp__sub_82806E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x82bca2c8
	sub_82BCA2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806EA8"))) PPC_WEAK_FUNC(sub_82806EA8);
PPC_FUNC_IMPL(__imp__sub_82806EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x82bca190
	sub_82BCA190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806EBC"))) PPC_WEAK_FUNC(sub_82806EBC);
PPC_FUNC_IMPL(__imp__sub_82806EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806EC0"))) PPC_WEAK_FUNC(sub_82806EC0);
PPC_FUNC_IMPL(__imp__sub_82806EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x82bca218
	sub_82BCA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806ED4"))) PPC_WEAK_FUNC(sub_82806ED4);
PPC_FUNC_IMPL(__imp__sub_82806ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806ED8"))) PPC_WEAK_FUNC(sub_82806ED8);
PPC_FUNC_IMPL(__imp__sub_82806ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x82bca3f0
	sub_82BCA3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806EEC"))) PPC_WEAK_FUNC(sub_82806EEC);
PPC_FUNC_IMPL(__imp__sub_82806EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806EF0"))) PPC_WEAK_FUNC(sub_82806EF0);
PPC_FUNC_IMPL(__imp__sub_82806EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bcdfe8
	sub_82BCDFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806F00"))) PPC_WEAK_FUNC(sub_82806F00);
PPC_FUNC_IMPL(__imp__sub_82806F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bce0b8
	sub_82BCE0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806F10"))) PPC_WEAK_FUNC(sub_82806F10);
PPC_FUNC_IMPL(__imp__sub_82806F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bcdf88
	sub_82BCDF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806F1C"))) PPC_WEAK_FUNC(sub_82806F1C);
PPC_FUNC_IMPL(__imp__sub_82806F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806F20"))) PPC_WEAK_FUNC(sub_82806F20);
PPC_FUNC_IMPL(__imp__sub_82806F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x82806F28;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,13424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13424);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// bne cr6,0x82806f70
	if (!ctx.cr6.eq) goto loc_82806F70;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becdf0
	ctx.lr = 0x82806F6C;
	sub_82BECDF0(ctx, base);
	// lwz r11,13424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13424);
loc_82806F70:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82806fbc
	if (ctx.cr6.eq) goto loc_82806FBC;
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// bl 0x82208d20
	ctx.lr = 0x82806F98;
	sub_82208D20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82806fbc
	if (ctx.cr6.eq) goto loc_82806FBC;
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82806fbc
	if (!ctx.cr6.eq) goto loc_82806FBC;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82806FBC:
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r30,13316(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13316);
	// bne cr6,0x82806ffc
	if (!ctx.cr6.eq) goto loc_82806FFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82806fe0
	if (!ctx.cr6.eq) goto loc_82806FE0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82806ff4
	goto loc_82806FF4;
loc_82806FE0:
	// lbz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 396);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
loc_82806FF4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82806FFC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82807028
	if (ctx.cr6.eq) goto loc_82807028;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82807028
	if (!ctx.cr6.eq) goto loc_82807028;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807028
	if (ctx.cr6.eq) goto loc_82807028;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827f83e8
	ctx.lr = 0x82807024;
	sub_827F83E8(ctx, base);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82807028:
	// bl 0x82c02228
	ctx.lr = 0x8280702C;
	sub_82C02228(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x8280703C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r25,-31945
	ctx.r25.s64 = -2093547520;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82807068
	if (ctx.cr6.eq) goto loc_82807068;
	// lwz r4,-29532(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -29532);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82807068
	if (ctx.cr6.eq) goto loc_82807068;
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lwz r3,13424(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13424);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// bl 0x827ede80
	ctx.lr = 0x82807068;
	sub_827EDE80(ctx, base);
loc_82807068:
	// lwz r11,13424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13424);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x82807114
	if (!ctx.cr6.eq) goto loc_82807114;
	// bl 0x827b3cf8
	ctx.lr = 0x8280708C;
	sub_827B3CF8(ctx, base);
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b40e0
	ctx.lr = 0x828070A8;
	sub_827B40E0(ctx, base);
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4818
	ctx.lr = 0x828070B8;
	sub_827B4818(ctx, base);
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4908
	ctx.lr = 0x828070CC;
	sub_827B4908(ctx, base);
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b3c80
	ctx.lr = 0x828070D8;
	sub_827B3C80(ctx, base);
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r23,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r23.u32);
	// bl 0x82c09bec
	ctx.lr = 0x828070EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x828070F4;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x828070FC;
	sub_82208CD0(ctx, base);
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x82807104;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x8280710C;
	sub_82208CE0(ctx, base);
	// stw r21,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r21.u32);
	// b 0x8280711c
	goto loc_8280711C;
loc_82807114:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827b4818
	ctx.lr = 0x8280711C;
	sub_827B4818(ctx, base);
loc_8280711C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82807144
	if (ctx.cr6.eq) goto loc_82807144;
	// lwz r4,-29532(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -29532);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82807144
	if (ctx.cr6.eq) goto loc_82807144;
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lwz r3,13424(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13424);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,380(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// bl 0x827ede80
	ctx.lr = 0x82807144;
	sub_827EDE80(ctx, base);
loc_82807144:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82807154
	if (!ctx.cr6.eq) goto loc_82807154;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82807170
	if (ctx.cr6.eq) goto loc_82807170;
loc_82807154:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
loc_82807158:
	// lwz r11,13528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82807170
	if (!ctx.cr6.gt) goto loc_82807170;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ef640
	ctx.lr = 0x8280716C;
	sub_821EF640(ctx, base);
	// b 0x82807158
	goto loc_82807158;
loc_82807170:
	// lis r31,-31940
	ctx.r31.s64 = -2093219840;
	// lwz r11,-29116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82807198
	if (!ctx.cr6.eq) goto loc_82807198;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,13600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13600);
	// bl 0x827bf7a0
	ctx.lr = 0x82807198;
	sub_827BF7A0(ctx, base);
loc_82807198:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-29116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29116, ctx.r11.u32);
	// bl 0x82c09bec
	ctx.lr = 0x828071A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,13316(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13316);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828071c4
	if (ctx.cr6.eq) goto loc_828071C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827f7f50
	ctx.lr = 0x828071C0;
	sub_827F7F50(ctx, base);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_828071C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828071D0"))) PPC_WEAK_FUNC(sub_828071D0);
PPC_FUNC_IMPL(__imp__sub_828071D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,13424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// b 0x82806f20
	sub_82806F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828071FC"))) PPC_WEAK_FUNC(sub_828071FC);
PPC_FUNC_IMPL(__imp__sub_828071FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807200"))) PPC_WEAK_FUNC(sub_82807200);
PPC_FUNC_IMPL(__imp__sub_82807200) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82806f20
	sub_82806F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807210"))) PPC_WEAK_FUNC(sub_82807210);
PPC_FUNC_IMPL(__imp__sub_82807210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x827bd4a0
	sub_827BD4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807220"))) PPC_WEAK_FUNC(sub_82807220);
PPC_FUNC_IMPL(__imp__sub_82807220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82807228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-15760
	ctx.r11.s64 = ctx.r11.s64 + -15760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// bl 0x82c09bec
	ctx.lr = 0x82807244;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,15840
	ctx.r31.s64 = ctx.r11.s64 + 15840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15840);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// bl 0x82765260
	ctx.lr = 0x82807260;
	sub_82765260(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807270
	if (ctx.cr6.eq) goto loc_82807270;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8274b158
	ctx.lr = 0x82807270;
	sub_8274B158(ctx, base);
loc_82807270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e3a78
	ctx.lr = 0x82807278;
	sub_827E3A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807280"))) PPC_WEAK_FUNC(sub_82807280);
PPC_FUNC_IMPL(__imp__sub_82807280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828072b0
	if (ctx.cr6.eq) goto loc_828072B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828072b0
	if (ctx.cr6.eq) goto loc_828072B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828072b0
	if (ctx.cr6.eq) goto loc_828072B0;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// blr 
	return;
loc_828072B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828072B8"))) PPC_WEAK_FUNC(sub_828072B8);
PPC_FUNC_IMPL(__imp__sub_828072B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828072C8"))) PPC_WEAK_FUNC(sub_828072C8);
PPC_FUNC_IMPL(__imp__sub_828072C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-18016
	ctx.r9.s64 = ctx.r11.s64 + -18016;
	// lfs f0,-30724(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828072E0"))) PPC_WEAK_FUNC(sub_828072E0);
PPC_FUNC_IMPL(__imp__sub_828072E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807310"))) PPC_WEAK_FUNC(sub_82807310);
PPC_FUNC_IMPL(__imp__sub_82807310) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// andc r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// sth r8,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807354"))) PPC_WEAK_FUNC(sub_82807354);
PPC_FUNC_IMPL(__imp__sub_82807354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807358"))) PPC_WEAK_FUNC(sub_82807358);
PPC_FUNC_IMPL(__imp__sub_82807358) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// andc r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// sth r8,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280739C"))) PPC_WEAK_FUNC(sub_8280739C);
PPC_FUNC_IMPL(__imp__sub_8280739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828073A0"))) PPC_WEAK_FUNC(sub_828073A0);
PPC_FUNC_IMPL(__imp__sub_828073A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828073B8"))) PPC_WEAK_FUNC(sub_828073B8);
PPC_FUNC_IMPL(__imp__sub_828073B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828073CC"))) PPC_WEAK_FUNC(sub_828073CC);
PPC_FUNC_IMPL(__imp__sub_828073CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828073D0"))) PPC_WEAK_FUNC(sub_828073D0);
PPC_FUNC_IMPL(__imp__sub_828073D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807428
	if (ctx.cr6.eq) goto loc_82807428;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807428
	if (ctx.cr6.eq) goto loc_82807428;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807428
	if (ctx.cr6.eq) goto loc_82807428;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807428
	if (ctx.cr6.eq) goto loc_82807428;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807428
	if (ctx.cr6.eq) goto loc_82807428;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
loc_82807428:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807430"))) PPC_WEAK_FUNC(sub_82807430);
PPC_FUNC_IMPL(__imp__sub_82807430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807448"))) PPC_WEAK_FUNC(sub_82807448);
PPC_FUNC_IMPL(__imp__sub_82807448) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82be70b0
	sub_82BE70B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807464"))) PPC_WEAK_FUNC(sub_82807464);
PPC_FUNC_IMPL(__imp__sub_82807464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807468"))) PPC_WEAK_FUNC(sub_82807468);
PPC_FUNC_IMPL(__imp__sub_82807468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,852
	ctx.r3.s64 = ctx.r11.s64 + 852;
	// b 0x827c8790
	sub_827C8790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280747C"))) PPC_WEAK_FUNC(sub_8280747C);
PPC_FUNC_IMPL(__imp__sub_8280747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807480"))) PPC_WEAK_FUNC(sub_82807480);
PPC_FUNC_IMPL(__imp__sub_82807480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r11,r11,852
	ctx.r11.s64 = ctx.r11.s64 + 852;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x828074bc
	if (!ctx.cr6.lt) goto loc_828074BC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,80(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_828074BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828074C4"))) PPC_WEAK_FUNC(sub_828074C4);
PPC_FUNC_IMPL(__imp__sub_828074C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828074C8"))) PPC_WEAK_FUNC(sub_828074C8);
PPC_FUNC_IMPL(__imp__sub_828074C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r11,r11,852
	ctx.r11.s64 = ctx.r11.s64 + 852;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x828074f8
	if (!ctx.cr6.lt) goto loc_828074F8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,76(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// blr 
	return;
loc_828074F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807500"))) PPC_WEAK_FUNC(sub_82807500);
PPC_FUNC_IMPL(__imp__sub_82807500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,852
	ctx.r3.s64 = ctx.r11.s64 + 852;
	// b 0x827c8a58
	sub_827C8A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807510"))) PPC_WEAK_FUNC(sub_82807510);
PPC_FUNC_IMPL(__imp__sub_82807510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807520"))) PPC_WEAK_FUNC(sub_82807520);
PPC_FUNC_IMPL(__imp__sub_82807520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82807578
	if (ctx.cr6.eq) goto loc_82807578;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r10,r11,18068
	ctx.r10.s64 = ctx.r11.s64 + 18068;
	// lfs f0,18068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_82807578:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807598"))) PPC_WEAK_FUNC(sub_82807598);
PPC_FUNC_IMPL(__imp__sub_82807598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x828075f0
	if (ctx.cr6.eq) goto loc_828075F0;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r10,r11,18068
	ctx.r10.s64 = ctx.r11.s64 + 18068;
	// lfs f0,18068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_828075F0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807610"))) PPC_WEAK_FUNC(sub_82807610);
PPC_FUNC_IMPL(__imp__sub_82807610) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807660
	if (ctx.cr6.eq) goto loc_82807660;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807660
	if (ctx.cr6.eq) goto loc_82807660;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807660
	if (ctx.cr6.eq) goto loc_82807660;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807660
	if (ctx.cr6.eq) goto loc_82807660;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807660
	if (ctx.cr6.eq) goto loc_82807660;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// blr 
	return;
loc_82807660:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807668"))) PPC_WEAK_FUNC(sub_82807668);
PPC_FUNC_IMPL(__imp__sub_82807668) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// b 0x82be05c8
	sub_82BE05C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807670"))) PPC_WEAK_FUNC(sub_82807670);
PPC_FUNC_IMPL(__imp__sub_82807670) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// b 0x82be06c8
	sub_82BE06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807678"))) PPC_WEAK_FUNC(sub_82807678);
PPC_FUNC_IMPL(__imp__sub_82807678) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// andc r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828076CC"))) PPC_WEAK_FUNC(sub_828076CC);
PPC_FUNC_IMPL(__imp__sub_828076CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828076D0"))) PPC_WEAK_FUNC(sub_828076D0);
PPC_FUNC_IMPL(__imp__sub_828076D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828076fc
	if (ctx.cr6.eq) goto loc_828076FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828076fc
	if (ctx.cr6.eq) goto loc_828076FC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// blr 
	return;
loc_828076FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807704"))) PPC_WEAK_FUNC(sub_82807704);
PPC_FUNC_IMPL(__imp__sub_82807704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807708"))) PPC_WEAK_FUNC(sub_82807708);
PPC_FUNC_IMPL(__imp__sub_82807708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807758"))) PPC_WEAK_FUNC(sub_82807758);
PPC_FUNC_IMPL(__imp__sub_82807758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lfs f0,824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 828);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,832(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280777C"))) PPC_WEAK_FUNC(sub_8280777C);
PPC_FUNC_IMPL(__imp__sub_8280777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807780"))) PPC_WEAK_FUNC(sub_82807780);
PPC_FUNC_IMPL(__imp__sub_82807780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lfs f0,812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 812);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 820);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828077A4"))) PPC_WEAK_FUNC(sub_828077A4);
PPC_FUNC_IMPL(__imp__sub_828077A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828077A8"))) PPC_WEAK_FUNC(sub_828077A8);
PPC_FUNC_IMPL(__imp__sub_828077A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x82be7478
	sub_82BE7478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828077B4"))) PPC_WEAK_FUNC(sub_828077B4);
PPC_FUNC_IMPL(__imp__sub_828077B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828077B8"))) PPC_WEAK_FUNC(sub_828077B8);
PPC_FUNC_IMPL(__imp__sub_828077B8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828077d8
	if (!ctx.cr6.eq) goto loc_828077D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x828077dc
	goto loc_828077DC;
loc_828077D8:
	// bl 0x82be7270
	ctx.lr = 0x828077DC;
	sub_82BE7270(ctx, base);
loc_828077DC:
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bne cr6,0x828077ec
	if (!ctx.cr6.eq) goto loc_828077EC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828077EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828077FC"))) PPC_WEAK_FUNC(sub_828077FC);
PPC_FUNC_IMPL(__imp__sub_828077FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807800"))) PPC_WEAK_FUNC(sub_82807800);
PPC_FUNC_IMPL(__imp__sub_82807800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82807828
	if (ctx.cr6.eq) goto loc_82807828;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r11,848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807828
	if (ctx.cr6.eq) goto loc_82807828;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82807828:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807830"))) PPC_WEAK_FUNC(sub_82807830);
PPC_FUNC_IMPL(__imp__sub_82807830) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82be66f0
	sub_82BE66F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807858"))) PPC_WEAK_FUNC(sub_82807858);
PPC_FUNC_IMPL(__imp__sub_82807858) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82be6ab0
	sub_82BE6AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807874"))) PPC_WEAK_FUNC(sub_82807874);
PPC_FUNC_IMPL(__imp__sub_82807874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807878"))) PPC_WEAK_FUNC(sub_82807878);
PPC_FUNC_IMPL(__imp__sub_82807878) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82be6e30
	sub_82BE6E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807894"))) PPC_WEAK_FUNC(sub_82807894);
PPC_FUNC_IMPL(__imp__sub_82807894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807898"))) PPC_WEAK_FUNC(sub_82807898);
PPC_FUNC_IMPL(__imp__sub_82807898) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82be7520
	sub_82BE7520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828078B0"))) PPC_WEAK_FUNC(sub_828078B0);
PPC_FUNC_IMPL(__imp__sub_828078B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828078B4"))) PPC_WEAK_FUNC(sub_828078B4);
PPC_FUNC_IMPL(__imp__sub_828078B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828078B8"))) PPC_WEAK_FUNC(sub_828078B8);
PPC_FUNC_IMPL(__imp__sub_828078B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfs f1,-30256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30256);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82be7638
	sub_82BE7638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828078D0"))) PPC_WEAK_FUNC(sub_828078D0);
PPC_FUNC_IMPL(__imp__sub_828078D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be79f0
	sub_82BE79F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828078D4"))) PPC_WEAK_FUNC(sub_828078D4);
PPC_FUNC_IMPL(__imp__sub_828078D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828078D8"))) PPC_WEAK_FUNC(sub_828078D8);
PPC_FUNC_IMPL(__imp__sub_828078D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828078f0
	if (ctx.cr6.eq) goto loc_828078F0;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_828078F0:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807900"))) PPC_WEAK_FUNC(sub_82807900);
PPC_FUNC_IMPL(__imp__sub_82807900) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807948
	if (ctx.cr6.eq) goto loc_82807948;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807948
	if (ctx.cr6.eq) goto loc_82807948;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82807928
	if (!ctx.cr6.eq) goto loc_82807928;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82807928:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x8280793c
	if (ctx.cr6.eq) goto loc_8280793C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8280793C:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82807948:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807950"))) PPC_WEAK_FUNC(sub_82807950);
PPC_FUNC_IMPL(__imp__sub_82807950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82807974
	if (ctx.cr6.eq) goto loc_82807974;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82807974
	if (ctx.cr6.eq) goto loc_82807974;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82807974:
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280797C"))) PPC_WEAK_FUNC(sub_8280797C);
PPC_FUNC_IMPL(__imp__sub_8280797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807980"))) PPC_WEAK_FUNC(sub_82807980);
PPC_FUNC_IMPL(__imp__sub_82807980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_828079C0"))) PPC_WEAK_FUNC(sub_828079C0);
PPC_FUNC_IMPL(__imp__sub_828079C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x828079f0
	if (ctx.cr6.eq) goto loc_828079F0;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828079F0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807A04"))) PPC_WEAK_FUNC(sub_82807A04);
PPC_FUNC_IMPL(__imp__sub_82807A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807A08"))) PPC_WEAK_FUNC(sub_82807A08);
PPC_FUNC_IMPL(__imp__sub_82807A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807A48"))) PPC_WEAK_FUNC(sub_82807A48);
PPC_FUNC_IMPL(__imp__sub_82807A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82807a78
	if (ctx.cr6.eq) goto loc_82807A78;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
loc_82807A78:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807A90"))) PPC_WEAK_FUNC(sub_82807A90);
PPC_FUNC_IMPL(__imp__sub_82807A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82807ac0
	if (ctx.cr6.eq) goto loc_82807AC0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82807ac0
	if (ctx.cr6.eq) goto loc_82807AC0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82807AC0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807AE4"))) PPC_WEAK_FUNC(sub_82807AE4);
PPC_FUNC_IMPL(__imp__sub_82807AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807AE8"))) PPC_WEAK_FUNC(sub_82807AE8);
PPC_FUNC_IMPL(__imp__sub_82807AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82807b10
	if (ctx.cr6.eq) goto loc_82807B10;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82807B10:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f1,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807B20"))) PPC_WEAK_FUNC(sub_82807B20);
PPC_FUNC_IMPL(__imp__sub_82807B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82807b48
	if (ctx.cr6.eq) goto loc_82807B48;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82807B48:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f1,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807B58"))) PPC_WEAK_FUNC(sub_82807B58);
PPC_FUNC_IMPL(__imp__sub_82807B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82807b8c
	if (ctx.cr6.eq) goto loc_82807B8C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82807b8c
	if (ctx.cr6.eq) goto loc_82807B8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82807B8C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807B9C"))) PPC_WEAK_FUNC(sub_82807B9C);
PPC_FUNC_IMPL(__imp__sub_82807B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807BA0"))) PPC_WEAK_FUNC(sub_82807BA0);
PPC_FUNC_IMPL(__imp__sub_82807BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807BBC"))) PPC_WEAK_FUNC(sub_82807BBC);
PPC_FUNC_IMPL(__imp__sub_82807BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807BC0"))) PPC_WEAK_FUNC(sub_82807BC0);
PPC_FUNC_IMPL(__imp__sub_82807BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,852
	ctx.r3.s64 = ctx.r11.s64 + 852;
	// b 0x827c8b10
	sub_827C8B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807BD0"))) PPC_WEAK_FUNC(sub_82807BD0);
PPC_FUNC_IMPL(__imp__sub_82807BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// b 0x82be07b0
	sub_82BE07B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807BEC"))) PPC_WEAK_FUNC(sub_82807BEC);
PPC_FUNC_IMPL(__imp__sub_82807BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807BF0"))) PPC_WEAK_FUNC(sub_82807BF0);
PPC_FUNC_IMPL(__imp__sub_82807BF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807c30
	if (ctx.cr6.eq) goto loc_82807C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807c30
	if (ctx.cr6.eq) goto loc_82807C30;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807c30
	if (ctx.cr6.eq) goto loc_82807C30;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
loc_82807C30:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807C44"))) PPC_WEAK_FUNC(sub_82807C44);
PPC_FUNC_IMPL(__imp__sub_82807C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807C48"))) PPC_WEAK_FUNC(sub_82807C48);
PPC_FUNC_IMPL(__imp__sub_82807C48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807c88
	if (ctx.cr6.eq) goto loc_82807C88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807c88
	if (ctx.cr6.eq) goto loc_82807C88;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807c88
	if (ctx.cr6.eq) goto loc_82807C88;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
loc_82807C88:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807C9C"))) PPC_WEAK_FUNC(sub_82807C9C);
PPC_FUNC_IMPL(__imp__sub_82807C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807CA0"))) PPC_WEAK_FUNC(sub_82807CA0);
PPC_FUNC_IMPL(__imp__sub_82807CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x827d6380
	sub_827D6380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807CB0"))) PPC_WEAK_FUNC(sub_82807CB0);
PPC_FUNC_IMPL(__imp__sub_82807CB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d6380
	sub_827D6380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807CB4"))) PPC_WEAK_FUNC(sub_82807CB4);
PPC_FUNC_IMPL(__imp__sub_82807CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807CB8"))) PPC_WEAK_FUNC(sub_82807CB8);
PPC_FUNC_IMPL(__imp__sub_82807CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x827d6380
	sub_827D6380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807CC4"))) PPC_WEAK_FUNC(sub_82807CC4);
PPC_FUNC_IMPL(__imp__sub_82807CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807CC8"))) PPC_WEAK_FUNC(sub_82807CC8);
PPC_FUNC_IMPL(__imp__sub_82807CC8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x827d6628
	sub_827D6628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807CD8"))) PPC_WEAK_FUNC(sub_82807CD8);
PPC_FUNC_IMPL(__imp__sub_82807CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82807d34
	if (ctx.cr6.eq) goto loc_82807D34;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsel f4,f5,f9,f11
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fsel f2,f3,f6,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f6.f64 : ctx.f4.f64;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// blr 
	return;
loc_82807D34:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807D3C"))) PPC_WEAK_FUNC(sub_82807D3C);
PPC_FUNC_IMPL(__imp__sub_82807D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807D40"))) PPC_WEAK_FUNC(sub_82807D40);
PPC_FUNC_IMPL(__imp__sub_82807D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r3,r11,852
	ctx.r3.s64 = ctx.r11.s64 + 852;
	// b 0x827c8c08
	sub_827C8C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807D50"))) PPC_WEAK_FUNC(sub_82807D50);
PPC_FUNC_IMPL(__imp__sub_82807D50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x827d6b38
	sub_827D6B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807D64"))) PPC_WEAK_FUNC(sub_82807D64);
PPC_FUNC_IMPL(__imp__sub_82807D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807D68"))) PPC_WEAK_FUNC(sub_82807D68);
PPC_FUNC_IMPL(__imp__sub_82807D68) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x827d8150
	ctx.lr = 0x82807D9C;
	sub_827D8150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807DAC"))) PPC_WEAK_FUNC(sub_82807DAC);
PPC_FUNC_IMPL(__imp__sub_82807DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807DB0"))) PPC_WEAK_FUNC(sub_82807DB0);
PPC_FUNC_IMPL(__imp__sub_82807DB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82807dc8
	if (ctx.cr6.eq) goto loc_82807DC8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x827d8818
	sub_827D8818(ctx, base);
	return;
loc_82807DC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807DD0"))) PPC_WEAK_FUNC(sub_82807DD0);
PPC_FUNC_IMPL(__imp__sub_82807DD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be2950
	sub_82BE2950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807DD4"))) PPC_WEAK_FUNC(sub_82807DD4);
PPC_FUNC_IMPL(__imp__sub_82807DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807DD8"))) PPC_WEAK_FUNC(sub_82807DD8);
PPC_FUNC_IMPL(__imp__sub_82807DD8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827c2c38
	sub_827C2C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807DE4"))) PPC_WEAK_FUNC(sub_82807DE4);
PPC_FUNC_IMPL(__imp__sub_82807DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807DE8"))) PPC_WEAK_FUNC(sub_82807DE8);
PPC_FUNC_IMPL(__imp__sub_82807DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82807DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82807e0c
	if (!ctx.cr6.eq) goto loc_82807E0C;
loc_82807E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82807E0C:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// beq cr6,0x82807e00
	if (ctx.cr6.eq) goto loc_82807E00;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lwz r29,324(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// fdivs f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f3,27476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 27476);
	ctx.f3.f64 = double(temp.f32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f7,200(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x827c5428
	ctx.lr = 0x82807EC4;
	sub_827C5428(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807ECC"))) PPC_WEAK_FUNC(sub_82807ECC);
PPC_FUNC_IMPL(__imp__sub_82807ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807ED0"))) PPC_WEAK_FUNC(sub_82807ED0);
PPC_FUNC_IMPL(__imp__sub_82807ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13596);
	// b 0x827c8610
	sub_827C8610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807EE0"))) PPC_WEAK_FUNC(sub_82807EE0);
PPC_FUNC_IMPL(__imp__sub_82807EE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be2ac8
	sub_82BE2AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807EE4"))) PPC_WEAK_FUNC(sub_82807EE4);
PPC_FUNC_IMPL(__imp__sub_82807EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807EE8"))) PPC_WEAK_FUNC(sub_82807EE8);
PPC_FUNC_IMPL(__imp__sub_82807EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r9,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// sth r9,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807F00"))) PPC_WEAK_FUNC(sub_82807F00);
PPC_FUNC_IMPL(__imp__sub_82807F00) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_82807F14"))) PPC_WEAK_FUNC(sub_82807F14);
PPC_FUNC_IMPL(__imp__sub_82807F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807F18"))) PPC_WEAK_FUNC(sub_82807F18);
PPC_FUNC_IMPL(__imp__sub_82807F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807F1C"))) PPC_WEAK_FUNC(sub_82807F1C);
PPC_FUNC_IMPL(__imp__sub_82807F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807F20"))) PPC_WEAK_FUNC(sub_82807F20);
PPC_FUNC_IMPL(__imp__sub_82807F20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// b 0x82218a80
	sub_82218A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807F50"))) PPC_WEAK_FUNC(sub_82807F50);
PPC_FUNC_IMPL(__imp__sub_82807F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807F54"))) PPC_WEAK_FUNC(sub_82807F54);
PPC_FUNC_IMPL(__imp__sub_82807F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807F58"))) PPC_WEAK_FUNC(sub_82807F58);
PPC_FUNC_IMPL(__imp__sub_82807F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82807F60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807fcc
	if (ctx.cr6.eq) goto loc_82807FCC;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82807fcc
	if (ctx.cr6.eq) goto loc_82807FCC;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82807fcc
	if (!ctx.cr6.gt) goto loc_82807FCC;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82807F98:
	// slw r11,r27,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82807fbc
	if (ctx.cr6.eq) goto loc_82807FBC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827cf7d8
	ctx.lr = 0x82807FB4;
	sub_827CF7D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82807fdc
	if (!ctx.cr6.eq) goto loc_82807FDC;
loc_82807FBC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82807f98
	if (ctx.cr6.lt) goto loc_82807F98;
loc_82807FCC:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13434
	ctx.r3.s64 = ctx.r11.s64 + 13434;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82807FDC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807FE8"))) PPC_WEAK_FUNC(sub_82807FE8);
PPC_FUNC_IMPL(__imp__sub_82807FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82807FF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280805c
	if (ctx.cr6.eq) goto loc_8280805C;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280805c
	if (ctx.cr6.eq) goto loc_8280805C;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8280805c
	if (!ctx.cr6.gt) goto loc_8280805C;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82808028:
	// slw r11,r27,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8280804c
	if (ctx.cr6.eq) goto loc_8280804C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827cf888
	ctx.lr = 0x82808044;
	sub_827CF888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8280806c
	if (!ctx.cr6.eq) goto loc_8280806C;
loc_8280804C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82808028
	if (ctx.cr6.lt) goto loc_82808028;
loc_8280805C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_8280806C:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82808078"))) PPC_WEAK_FUNC(sub_82808078);
PPC_FUNC_IMPL(__imp__sub_82808078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808098
	if (ctx.cr6.eq) goto loc_82808098;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808098
	if (ctx.cr6.eq) goto loc_82808098;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82808098:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828080A0"))) PPC_WEAK_FUNC(sub_828080A0);
PPC_FUNC_IMPL(__imp__sub_828080A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r9,-17874
	ctx.r9.s64 = -1171390464;
	// ori r8,r9,35747
	ctx.r8.u64 = ctx.r9.u64 | 35747;
	// lbz r11,12463(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12463);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhwu r6,r7,r8
	ctx.r6.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r5,r6,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r4,r5,11
	ctx.r4.s64 = ctx.r5.s64 * 11;
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828080D4"))) PPC_WEAK_FUNC(sub_828080D4);
PPC_FUNC_IMPL(__imp__sub_828080D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828080D8"))) PPC_WEAK_FUNC(sub_828080D8);
PPC_FUNC_IMPL(__imp__sub_828080D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// ori r8,r9,52429
	ctx.r8.u64 = ctx.r9.u64 | 52429;
	// lbz r11,12463(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12463);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhwu r6,r7,r8
	ctx.r6.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r11,r6,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808110"))) PPC_WEAK_FUNC(sub_82808110);
PPC_FUNC_IMPL(__imp__sub_82808110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// lbz r11,12463(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12463);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280812C"))) PPC_WEAK_FUNC(sub_8280812C);
PPC_FUNC_IMPL(__imp__sub_8280812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808130"))) PPC_WEAK_FUNC(sub_82808130);
PPC_FUNC_IMPL(__imp__sub_82808130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808144"))) PPC_WEAK_FUNC(sub_82808144);
PPC_FUNC_IMPL(__imp__sub_82808144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808148"))) PPC_WEAK_FUNC(sub_82808148);
PPC_FUNC_IMPL(__imp__sub_82808148) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280815C"))) PPC_WEAK_FUNC(sub_8280815C);
PPC_FUNC_IMPL(__imp__sub_8280815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808160"))) PPC_WEAK_FUNC(sub_82808160);
PPC_FUNC_IMPL(__imp__sub_82808160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13168);
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
	// stwx r9,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808190"))) PPC_WEAK_FUNC(sub_82808190);
PPC_FUNC_IMPL(__imp__sub_82808190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,13172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13172);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828081fc
	if (ctx.cr6.eq) goto loc_828081FC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r3,13172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13172, ctx.r3.u32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r10,13168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13168);
	// lwz r11,13180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13180);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x828081f4
	if (!ctx.cr6.eq) goto loc_828081F4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828081f4
	if (ctx.cr6.eq) goto loc_828081F4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_828081F4:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_828081FC:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808204"))) PPC_WEAK_FUNC(sub_82808204);
PPC_FUNC_IMPL(__imp__sub_82808204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808208"))) PPC_WEAK_FUNC(sub_82808208);
PPC_FUNC_IMPL(__imp__sub_82808208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r10,r3,6
	ctx.r10.s64 = ctx.r3.s64 + 6;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808220"))) PPC_WEAK_FUNC(sub_82808220);
PPC_FUNC_IMPL(__imp__sub_82808220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r9,13168(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13168);
	// lwz r11,13180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// addi r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 6;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808280"))) PPC_WEAK_FUNC(sub_82808280);
PPC_FUNC_IMPL(__imp__sub_82808280) {
	PPC_FUNC_PROLOGUE();
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// addi r4,r3,6
	ctx.r4.s64 = ctx.r3.s64 + 6;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r10,13180(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13180);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13184(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13184);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,13188(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13188);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,13184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13184, ctx.r10.u32);
	// stwx r8,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r9,13192(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13192, ctx.r9.u32);
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828082C4"))) PPC_WEAK_FUNC(sub_828082C4);
PPC_FUNC_IMPL(__imp__sub_828082C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828082C8"))) PPC_WEAK_FUNC(sub_828082C8);
PPC_FUNC_IMPL(__imp__sub_828082C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lwz r11,13184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13184);
	// lwz r10,13180(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13180);
	// lwz r9,13188(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13184, ctx.r10.u32);
	// stw r9,13192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13192, ctx.r9.u32);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82808334
	if (ctx.cr6.eq) goto loc_82808334;
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bne cr6,0x82808320
	if (!ctx.cr6.eq) goto loc_82808320;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82808320
	if (ctx.cr6.eq) goto loc_82808320;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82808320:
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r11,18452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18452, ctx.r11.u32);
	// blr 
	return;
loc_82808334:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280833C"))) PPC_WEAK_FUNC(sub_8280833C);
PPC_FUNC_IMPL(__imp__sub_8280833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808340"))) PPC_WEAK_FUNC(sub_82808340);
PPC_FUNC_IMPL(__imp__sub_82808340) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// addi r6,r3,6
	ctx.r6.s64 = ctx.r3.s64 + 6;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13184(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13184);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r9,13180(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13180);
	// lwz r8,13188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,13184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13184, ctx.r9.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// stw r8,13192(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13192, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828083AC"))) PPC_WEAK_FUNC(sub_828083AC);
PPC_FUNC_IMPL(__imp__sub_828083AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828083B0"))) PPC_WEAK_FUNC(sub_828083B0);
PPC_FUNC_IMPL(__imp__sub_828083B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lwz r11,13184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13184);
	// lwz r10,13180(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13180);
	// lwz r9,13188(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13184, ctx.r10.u32);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r9,13192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13192, ctx.r9.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828083E8"))) PPC_WEAK_FUNC(sub_828083E8);
PPC_FUNC_IMPL(__imp__sub_828083E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808414
	if (ctx.cr6.eq) goto loc_82808414;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808414
	if (ctx.cr6.eq) goto loc_82808414;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82808414:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280841C"))) PPC_WEAK_FUNC(sub_8280841C);
PPC_FUNC_IMPL(__imp__sub_8280841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808420"))) PPC_WEAK_FUNC(sub_82808420);
PPC_FUNC_IMPL(__imp__sub_82808420) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x827cd470
	sub_827CD470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82808444"))) PPC_WEAK_FUNC(sub_82808444);
PPC_FUNC_IMPL(__imp__sub_82808444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808448"))) PPC_WEAK_FUNC(sub_82808448);
PPC_FUNC_IMPL(__imp__sub_82808448) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82808474
	if (ctx.cr6.eq) goto loc_82808474;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808474
	if (ctx.cr6.eq) goto loc_82808474;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808474
	if (ctx.cr6.eq) goto loc_82808474;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x8275f698
	sub_8275F698(ctx, base);
	return;
loc_82808474:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280847C"))) PPC_WEAK_FUNC(sub_8280847C);
PPC_FUNC_IMPL(__imp__sub_8280847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808480"))) PPC_WEAK_FUNC(sub_82808480);
PPC_FUNC_IMPL(__imp__sub_82808480) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x8275f608
	sub_8275F608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828084AC"))) PPC_WEAK_FUNC(sub_828084AC);
PPC_FUNC_IMPL(__imp__sub_828084AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828084B0"))) PPC_WEAK_FUNC(sub_828084B0);
PPC_FUNC_IMPL(__imp__sub_828084B0) {
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
	// beq cr6,0x828084fc
	if (ctx.cr6.eq) goto loc_828084FC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828084fc
	if (ctx.cr6.eq) goto loc_828084FC;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828084fc
	if (ctx.cr6.eq) goto loc_828084FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8275f708
	ctx.lr = 0x828084E8;
	sub_8275F708(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828084FC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808510"))) PPC_WEAK_FUNC(sub_82808510);
PPC_FUNC_IMPL(__imp__sub_82808510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
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
	// stfs f1,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stw r8,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280855C"))) PPC_WEAK_FUNC(sub_8280855C);
PPC_FUNC_IMPL(__imp__sub_8280855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808560"))) PPC_WEAK_FUNC(sub_82808560);
PPC_FUNC_IMPL(__imp__sub_82808560) {
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
	// beq cr6,0x828085a8
	if (ctx.cr6.eq) goto loc_828085A8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828085a8
	if (ctx.cr6.eq) goto loc_828085A8;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828085a8
	if (ctx.cr6.eq) goto loc_828085A8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8275f7d8
	ctx.lr = 0x82808594;
	sub_8275F7D8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828085A8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828085BC"))) PPC_WEAK_FUNC(sub_828085BC);
PPC_FUNC_IMPL(__imp__sub_828085BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828085C0"))) PPC_WEAK_FUNC(sub_828085C0);
PPC_FUNC_IMPL(__imp__sub_828085C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828085f0
	if (ctx.cr6.eq) goto loc_828085F0;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828085f0
	if (ctx.cr6.eq) goto loc_828085F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828085f0
	if (ctx.cr6.eq) goto loc_828085F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827cf940
	sub_827CF940(ctx, base);
	return;
loc_828085F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828085F8"))) PPC_WEAK_FUNC(sub_828085F8);
PPC_FUNC_IMPL(__imp__sub_828085F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82808600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808658
	if (ctx.cr6.eq) goto loc_82808658;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808658
	if (ctx.cr6.eq) goto loc_82808658;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82808658
	if (!ctx.cr6.gt) goto loc_82808658;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82808634:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827cf9c8
	ctx.lr = 0x82808640;
	sub_827CF9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82808664
	if (!ctx.cr6.eq) goto loc_82808664;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82808634
	if (ctx.cr6.lt) goto loc_82808634;
loc_82808658:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82808664:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82795450
	ctx.lr = 0x8280866C;
	sub_82795450(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82808674"))) PPC_WEAK_FUNC(sub_82808674);
PPC_FUNC_IMPL(__imp__sub_82808674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808678"))) PPC_WEAK_FUNC(sub_82808678);
PPC_FUNC_IMPL(__imp__sub_82808678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280868C"))) PPC_WEAK_FUNC(sub_8280868C);
PPC_FUNC_IMPL(__imp__sub_8280868C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808690"))) PPC_WEAK_FUNC(sub_82808690);
PPC_FUNC_IMPL(__imp__sub_82808690) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stb r11,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// lwz r11,13412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13412);
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// lwz r8,116(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828086cc
	if (ctx.cr6.eq) goto loc_828086CC;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
loc_828086CC:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828086e4
	if (ctx.cr6.eq) goto loc_828086E4;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
loc_828086E4:
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828086fc
	if (ctx.cr6.eq) goto loc_828086FC;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
loc_828086FC:
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808718"))) PPC_WEAK_FUNC(sub_82808718);
PPC_FUNC_IMPL(__imp__sub_82808718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808744
	if (ctx.cr6.eq) goto loc_82808744;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808744
	if (ctx.cr6.eq) goto loc_82808744;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82808744:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280874C"))) PPC_WEAK_FUNC(sub_8280874C);
PPC_FUNC_IMPL(__imp__sub_8280874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808750"))) PPC_WEAK_FUNC(sub_82808750);
PPC_FUNC_IMPL(__imp__sub_82808750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82808758;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,13176(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13176);
	// lwz r28,13172(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13172);
	// beq cr6,0x828087ec
	if (ctx.cr6.eq) goto loc_828087EC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828087ec
	if (ctx.cr6.eq) goto loc_828087EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x828087a4
	if (!ctx.cr6.eq) goto loc_828087A4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828087a4
	if (ctx.cr6.eq) goto loc_828087A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_828087A4:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,13172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13172, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,13176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13176, ctx.r11.u32);
	// lwz r11,13196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13196, ctx.r11.u32);
	// beq cr6,0x828087dc
	if (ctx.cr6.eq) goto loc_828087DC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828087D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13196);
	// b 0x828087e0
	goto loc_828087E0;
loc_828087DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828087E0:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,13196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13196, ctx.r10.u32);
loc_828087EC:
	// stw r28,13172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13172, ctx.r28.u32);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// stw r27,13176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13176, ctx.r27.u32);
	// bge cr6,0x82808844
	if (!ctx.cr6.lt) goto loc_82808844;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82808810
	if (!ctx.cr6.eq) goto loc_82808810;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82808810:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82808824
	if (!ctx.cr6.eq) goto loc_82808824;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82808824:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82808838
	if (!ctx.cr6.eq) goto loc_82808838;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82808838:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r3,6
	ctx.r3.s64 = 6;
	// beq cr6,0x82808848
	if (ctx.cr6.eq) goto loc_82808848;
loc_82808844:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_82808848:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82808850"))) PPC_WEAK_FUNC(sub_82808850);
PPC_FUNC_IMPL(__imp__sub_82808850) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82808874
	if (ctx.cr6.eq) goto loc_82808874;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808874
	if (ctx.cr6.eq) goto loc_82808874;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82808874
	if (ctx.cr6.eq) goto loc_82808874;
	// b 0x827cd620
	sub_827CD620(ctx, base);
	return;
loc_82808874:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280887C"))) PPC_WEAK_FUNC(sub_8280887C);
PPC_FUNC_IMPL(__imp__sub_8280887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808880"))) PPC_WEAK_FUNC(sub_82808880);
PPC_FUNC_IMPL(__imp__sub_82808880) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828088a4
	if (ctx.cr6.eq) goto loc_828088A4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828088a4
	if (ctx.cr6.eq) goto loc_828088A4;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828088a4
	if (ctx.cr6.eq) goto loc_828088A4;
	// b 0x827cd810
	sub_827CD810(ctx, base);
	return;
loc_828088A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828088AC"))) PPC_WEAK_FUNC(sub_828088AC);
PPC_FUNC_IMPL(__imp__sub_828088AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828088B0"))) PPC_WEAK_FUNC(sub_828088B0);
PPC_FUNC_IMPL(__imp__sub_828088B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// b 0x827cddf8
	sub_827CDDF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828088DC"))) PPC_WEAK_FUNC(sub_828088DC);
PPC_FUNC_IMPL(__imp__sub_828088DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828088E0"))) PPC_WEAK_FUNC(sub_828088E0);
PPC_FUNC_IMPL(__imp__sub_828088E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// b 0x827cdeb0
	sub_827CDEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82808930"))) PPC_WEAK_FUNC(sub_82808930);
PPC_FUNC_IMPL(__imp__sub_82808930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808934"))) PPC_WEAK_FUNC(sub_82808934);
PPC_FUNC_IMPL(__imp__sub_82808934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808938"))) PPC_WEAK_FUNC(sub_82808938);
PPC_FUNC_IMPL(__imp__sub_82808938) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280898c
	if (ctx.cr6.eq) goto loc_8280898C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280898c
	if (ctx.cr6.eq) goto loc_8280898C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8280898c
	if (ctx.cr6.eq) goto loc_8280898C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x827cd570
	ctx.lr = 0x82808978;
	sub_827CD570(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8280898C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828089A0"))) PPC_WEAK_FUNC(sub_828089A0);
PPC_FUNC_IMPL(__imp__sub_828089A0) {
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
	// beq cr6,0x828089d8
	if (ctx.cr6.eq) goto loc_828089D8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828089d8
	if (ctx.cr6.eq) goto loc_828089D8;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828089d8
	if (ctx.cr6.eq) goto loc_828089D8;
	// bl 0x827ce2c8
	ctx.lr = 0x828089D0;
	sub_827CE2C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828089e0
	if (!ctx.cr6.eq) goto loc_828089E0;
loc_828089D8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13434
	ctx.r3.s64 = ctx.r11.s64 + 13434;
loc_828089E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828089F0"))) PPC_WEAK_FUNC(sub_828089F0);
PPC_FUNC_IMPL(__imp__sub_828089F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82808a14
	if (ctx.cr6.eq) goto loc_82808A14;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808a14
	if (ctx.cr6.eq) goto loc_82808A14;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82808a14
	if (ctx.cr6.eq) goto loc_82808A14;
	// b 0x827ce408
	sub_827CE408(ctx, base);
	return;
loc_82808A14:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808A1C"))) PPC_WEAK_FUNC(sub_82808A1C);
PPC_FUNC_IMPL(__imp__sub_82808A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808A20"))) PPC_WEAK_FUNC(sub_82808A20);
PPC_FUNC_IMPL(__imp__sub_82808A20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82808a50
	if (ctx.cr6.eq) goto loc_82808A50;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808a50
	if (ctx.cr6.eq) goto loc_82808A50;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82808a50
	if (ctx.cr6.eq) goto loc_82808A50;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// b 0x827ce530
	sub_827CE530(ctx, base);
	return;
loc_82808A50:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808A58"))) PPC_WEAK_FUNC(sub_82808A58);
PPC_FUNC_IMPL(__imp__sub_82808A58) {
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
	// beq cr6,0x82808a84
	if (ctx.cr6.eq) goto loc_82808A84;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808a84
	if (ctx.cr6.eq) goto loc_82808A84;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82808a94
	if (!ctx.cr6.eq) goto loc_82808A94;
loc_82808A84:
	// bl 0x827d4978
	ctx.lr = 0x82808A88;
	sub_827D4978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808a9c
	if (ctx.cr6.eq) goto loc_82808A9C;
loc_82808A94:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827cdf38
	ctx.lr = 0x82808A9C;
	sub_827CDF38(ctx, base);
loc_82808A9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808AAC"))) PPC_WEAK_FUNC(sub_82808AAC);
PPC_FUNC_IMPL(__imp__sub_82808AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808AB0"))) PPC_WEAK_FUNC(sub_82808AB0);
PPC_FUNC_IMPL(__imp__sub_82808AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82808AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-29532
	ctx.r28.s64 = ctx.r11.s64 + -29532;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82808b30
	if (ctx.cr6.eq) goto loc_82808B30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82808b30
	if (ctx.cr6.eq) goto loc_82808B30;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82808b30
	if (ctx.cr6.eq) goto loc_82808B30;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82808b30
	if (ctx.cr6.eq) goto loc_82808B30;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r6,124(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 124);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 124);
	// rlwimi r6,r5,0,25,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x7F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF80);
	// stb r6,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r6.u8);
loc_82808B30:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82808b80
	if (!ctx.cr6.eq) goto loc_82808B80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82808b60
	if (ctx.cr6.eq) goto loc_82808B60;
	// lwz r11,13412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// lwz r3,13424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13424);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// bl 0x827ede80
	ctx.lr = 0x82808B60;
	sub_827EDE80(ctx, base);
loc_82808B60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82808b80
	if (ctx.cr6.eq) goto loc_82808B80;
	// lwz r11,13412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13424);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,380(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// bl 0x827ede80
	ctx.lr = 0x82808B80;
	sub_827EDE80(ctx, base);
loc_82808B80:
	// stwx r31,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82808B8C"))) PPC_WEAK_FUNC(sub_82808B8C);
PPC_FUNC_IMPL(__imp__sub_82808B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808B90"))) PPC_WEAK_FUNC(sub_82808B90);
PPC_FUNC_IMPL(__imp__sub_82808B90) {
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
	// bl 0x8221ca08
	ctx.lr = 0x82808BA0;
	sub_8221CA08(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82808BB4"))) PPC_WEAK_FUNC(sub_82808BB4);
PPC_FUNC_IMPL(__imp__sub_82808BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82808BB8"))) PPC_WEAK_FUNC(sub_82808BB8);
PPC_FUNC_IMPL(__imp__sub_82808BB8) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

